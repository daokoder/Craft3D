//
// Copyright (c) 2019 the Craft Engine project.
// Copyright (c) 2016, Limin Fu
// 
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//

#include "../Core/Profiler.h"
#include "../IO/Log.h"
#include "../IO/FileSystem.h"
#include "../Core/Context.h"
#include "../Resource/ResourceCache.h"

#ifdef CRAFT_PHYSICS
#include "../Physics/PhysicsEvents.h"
#include "../Physics/PhysicsWorld.h"
#endif
#include "../Scene/Scene.h"
#include "../Scene/SceneEvents.h"

#include "DaoVM.h"
#include "DaoComponentFile.h"
#include "DaoComponent.h"

namespace Craft
{

extern const char* LOGIC_CATEGORY;

class DaoComponentFactory : public ObjectFactory
{
public:
    /// Construct.
    DaoComponentFactory(Context* context) :
        ObjectFactory(context)
    {
		typeInfo_ = DaoComponent::GetTypeInfoStatic();
    }

    SharedPtr<Object> CreateObject()
	{
        SharedPtr<Object> ptr( new DaoComponent(context_) );
		return ptr;
	}

    /// Create an object of the specific type.
    SharedPtr<Object> CreateObject(const XMLElement& source = XMLElement::EMPTY)
    {

#if 0
        // if in editor, just create the DaoComponent
        if (context_->GetEditorContext())
        {
            return SharedPtr<Object>(new DaoComponent(context_));
        }
#endif // TODO;

        // At runtime, a XML DaoComponent may refer to a "scriptClass"
        // component which is new'd in Dao and creates the component itself
        // we peek ahead here to see if we have a DaoComponentFile and if it is a script class

        String componentRef;

        if (source.NotNull())
        {
            XMLElement attrElem = source.GetChild("attribute");

            while (attrElem)
            {
                if (attrElem.GetAttribute("name") == "ComponentFile")
                {
                    componentRef = attrElem.GetAttribute("value");
                    break;
                }

                attrElem = attrElem.GetNext("attribute");
            }
        }

        SharedPtr<Object> ptr;

        if (componentRef.Length())
        {
            Vector<String> split = componentRef.Split(';');

            if (split.Size() == 2)
            {
                ResourceCache* cache = context_->GetSubsystem<ResourceCache>();
                DaoComponentFile* componentFile = cache->GetResource<DaoComponentFile>(split[1]);
                if (componentFile)
                    ptr = componentFile->CreateDaoComponent();
                else
                {
                    CRAFT_LOGERRORF("Unable to load component file %s", split[1].CString());
                }
            }

        }

        if (ptr.Null())
        {
            ptr = new DaoComponent(context_);
        }

        return ptr;

    }
};


DaoComponent::DaoComponent(Context* context) :
    ScriptComponent(context),
    updateEventMask_(USE_UPDATE | USE_POSTUPDATE | USE_FIXEDUPDATE | USE_FIXEDPOSTUPDATE),
    currentEventMask_(0),
    instanceInitialized_(false),
    started_(false),
    destroyed_(false),
    scriptClassInstance_(false),
    delayedStartCalled_(false),
    loading_(false)
{
	object = NULL;
	aux = DHash_New( DAO_DATA_STRING, DAO_DATA_VALUE );
	key = DString_New();
}

DaoComponent::~DaoComponent()
{
	if( object ) DaoGC_DecRC( (DaoValue*) object );
	DString_Delete( key );
	DMap_Delete( aux );
}

void DaoComponent::RegisterObject(Context* context)
{
    context->RegisterFactory(new DaoComponentFactory(context), LOGIC_CATEGORY);
    CRAFT_MIXED_ACCESSOR_ATTRIBUTE("ComponentFile", GetComponentFileAttr, SetComponentFileAttr, ResourceRef, ResourceRef(DaoComponentFile::GetTypeStatic()), AM_DEFAULT);
    CRAFT_COPY_BASE_ATTRIBUTES(ScriptComponent);
}

void DaoComponent::OnSetEnabled()
{
    UpdateEventSubscription();
}

void DaoComponent::SetUpdateEventMask(unsigned char mask)
{
    if (updateEventMask_ != mask)
    {
        updateEventMask_ = mask;
        UpdateEventSubscription();
    }
}

void DaoComponent::ApplyAttributes()
{
}


void DaoComponent::OnNodeSet(Node* node)
{
	// We are being detached from a node: execute user-defined stop function and prepare for destruction
    if (node == NULL) Stop();
}

void DaoComponent::OnSceneSet(Scene* scene)
{
    if (scene)
        UpdateEventSubscription();
    else
    {
        UnsubscribeFromEvent(E_SCENEUPDATE);
        UnsubscribeFromEvent(E_SCENEPOSTUPDATE);
#ifdef CRAFT_PHYSICS
        UnsubscribeFromEvent(E_PHYSICSPRESTEP);
        UnsubscribeFromEvent(E_PHYSICSPOSTSTEP);
#endif
        currentEventMask_ = 0;
    }
}

void DaoComponent::UpdateEventSubscription()
{
    Scene* scene = GetScene();
    if (!scene)
        return;

    bool enabled = IsEnabledEffective();

    bool needUpdate = enabled && ((updateEventMask_ & USE_UPDATE) || !delayedStartCalled_);
    if (needUpdate && !(currentEventMask_ & USE_UPDATE))
    {
        SubscribeToEvent(scene, E_SCENEUPDATE, CRAFT_HANDLER(DaoComponent, HandleSceneUpdate));
        currentEventMask_ |= USE_UPDATE;
    }
    else if (!needUpdate && (currentEventMask_ & USE_UPDATE))
    {
        UnsubscribeFromEvent(scene, E_SCENEUPDATE);
        currentEventMask_ &= ~USE_UPDATE;
    }

    bool needPostUpdate = enabled && (updateEventMask_ & USE_POSTUPDATE);
    if (needPostUpdate && !(currentEventMask_ & USE_POSTUPDATE))
    {
        SubscribeToEvent(scene, E_SCENEPOSTUPDATE, CRAFT_HANDLER(DaoComponent, HandleScenePostUpdate));
        currentEventMask_ |= USE_POSTUPDATE;
    }
    else if (!needUpdate && (currentEventMask_ & USE_POSTUPDATE))
    {
        UnsubscribeFromEvent(scene, E_SCENEPOSTUPDATE);
        currentEventMask_ &= ~USE_POSTUPDATE;
    }

#ifdef CRAFT_PHYSICS
    PhysicsWorld* world = scene->GetComponent<PhysicsWorld>();
    if (!world)
        return;

    bool needFixedUpdate = enabled && (updateEventMask_ & USE_FIXEDUPDATE);
    if (needFixedUpdate && !(currentEventMask_ & USE_FIXEDUPDATE))
    {
        SubscribeToEvent(world, E_PHYSICSPRESTEP, CRAFT_HANDLER(DaoComponent, HandlePhysicsPreStep));
        currentEventMask_ |= USE_FIXEDUPDATE;
    }
    else if (!needFixedUpdate && (currentEventMask_ & USE_FIXEDUPDATE))
    {
        UnsubscribeFromEvent(world, E_PHYSICSPRESTEP);
        currentEventMask_ &= ~USE_FIXEDUPDATE;
    }

    bool needFixedPostUpdate = enabled && (updateEventMask_ & USE_FIXEDPOSTUPDATE);
    if (needFixedPostUpdate && !(currentEventMask_ & USE_FIXEDPOSTUPDATE))
    {
        SubscribeToEvent(world, E_PHYSICSPOSTSTEP, CRAFT_HANDLER(DaoComponent, HandlePhysicsPostStep));
        currentEventMask_ |= USE_FIXEDPOSTUPDATE;
    }
    else if (!needFixedPostUpdate && (currentEventMask_ & USE_FIXEDPOSTUPDATE))
    {
        UnsubscribeFromEvent(world, E_PHYSICSPOSTSTEP);
        currentEventMask_ &= ~USE_FIXEDPOSTUPDATE;
    }
#endif
}

void DaoComponent::HandleSceneUpdate(StringHash eventType, VariantMap& eventData)
{
    using namespace SceneUpdate;

    assert(!destroyed_);

    // Execute user-defined delayed start function before first update
    if (!delayedStartCalled_) {
        DelayedStart();
        delayedStartCalled_ = true;

        // If did not need actual update events, unsubscribe now
        if (!(updateEventMask_ & USE_UPDATE))
        {
            UnsubscribeFromEvent(GetScene(), E_SCENEUPDATE);
            currentEventMask_ &= ~USE_UPDATE;
            return;
        }
    }

    if (!started_) {   
		started_ = true;
		Start();
	}   

    // Then execute user-defined update function
    CRAFT_PROFILE(DaoComponent_Update);
    Update(eventData[P_TIMESTEP].GetFloat());
}

void DaoComponent::HandleScenePostUpdate(StringHash eventType, VariantMap& eventData)
{
    using namespace ScenePostUpdate;

    // Execute user-defined post-update function
    CRAFT_PROFILE(DaoComponent_PostUpdate);
    PostUpdate(eventData[P_TIMESTEP].GetFloat());
}

#ifdef CRAFT_PHYSICS
void DaoComponent::HandlePhysicsPreStep(StringHash eventType, VariantMap& eventData)
{
    using namespace PhysicsPreStep;

    // Execute user-defined fixed update function
    CRAFT_PROFILE(DaoComponent_FixedUpdate);
    FixedUpdate(eventData[P_TIMESTEP].GetFloat());
}

void DaoComponent::HandlePhysicsPostStep(StringHash eventType, VariantMap& eventData)
{
    using namespace PhysicsPostStep;

    // Execute user-defined fixed post-update function
    CRAFT_PROFILE(DaoComponent_FixedPostUpdate);
    FixedPostUpdate(eventData[P_TIMESTEP].GetFloat());
}
#endif

bool DaoComponent::Load(Deserializer& source)
{
    loading_ = true;
    bool success = Component::Load(source);
    loading_ = false;

    return success;
}

bool DaoComponent::LoadXML(const XMLElement& source)
{
    loading_ = true;
    bool success = Component::LoadXML(source);
    loading_ = false;

    return success;
}

bool DaoComponent::MatchScriptName(const String& path)
{
    if (componentFile_.Null())
        return false;

    String _path = path;
    _path.Replace(".dao", "", false);

    const String& name = componentFile_->GetName();

    if (_path == name)
        return true;

    String pathName, fileName, ext;
    SplitPath(name, pathName, fileName, ext);

    if (fileName == _path)
        return true;


    return false;

}

ResourceRef DaoComponent::GetComponentFileAttr() const
{
    return GetResourceRef(componentFile_, DaoComponentFile::GetTypeStatic());
}

void DaoComponent::SetComponentFileAttr(const ResourceRef& value)
{
    ResourceCache* cache = GetSubsystem<ResourceCache>();
    SetComponentFile(cache->GetResource<DaoComponentFile>(value.name_));
}


void DaoComponent::SetObject( DaoObject *object )
{
	DaoGC_Assign( (DaoValue**) & this->object, (DaoValue*) object );
}

void DaoComponent::SetData( const char *key, DaoValue *data )
{
	DString_SetChars( this->key, key );
	DMap_Insert( aux, this->key, data );
}

DaoValue* DaoComponent::GetData( const char *key )
{
	DString_SetChars( this->key, key );

	DNode *it = DMap_Find( aux, this->key );
	if( it == NULL ) return NULL;
	return it->value.pValue;
}


}
