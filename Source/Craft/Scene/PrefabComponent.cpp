//
// Copyright (c) 2014-2015, THUNDERBEAST GAMES LLC All rights reserved
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#include "../Precompiled.h"

#include "../Core/Context.h"
#include "../Scene/Node.h"
#include "../Resource/XMLFile.h"
#include "../Resource/ResourceCache.h"
#include "../Resource/ResourceEvents.h"

#include "../Physics/RigidBody.h"

#include "PrefabEvents.h"
#include "PrefabComponent.h"


namespace Craft
{

PrefabComponent::PrefabComponent(Context* context) :
    Component(context)
{
    SubscribeToEvent(E_PREFABCHANGED, CRAFT_HANDLER(PrefabComponent, HandlePrefabChanged));
}

PrefabComponent::~PrefabComponent()
{

}

bool PrefabComponent::SavePrefab()
{    
    using namespace PrefabSave;
    VariantMap eventData;
    eventData[P_PREFABCOMPONENT] = this;
    SendEvent(E_PREFABSAVE, eventData);
    return true;
}

void PrefabComponent::UndoPrefab()
{
    LoadPrefabNode();
}

void PrefabComponent::RegisterObject(Context* context)
{
    context->RegisterFactory<PrefabComponent>();

    CRAFT_ACCESSOR_ATTRIBUTE("PrefabGUID", GetPrefabGUID, SetPrefabGUID, String, String::EMPTY, AM_FILE | AM_NOEDIT);
}

void PrefabComponent::LoadPrefabNode()
{
    ResourceCache* cache = GetSubsystem<ResourceCache>();

    XMLFile* xmlfile = cache->GetResource<XMLFile>(prefabGUID_, false);

    if (!xmlfile || !node_)
        return;

    bool temporary = IsTemporary();
    unsigned id = GetID();

    // We're going to be removed, so keep ourselves alive and
    // a reference to node_ as we'll readd
    SharedPtr<PrefabComponent> keepAlive(this);
    SharedPtr<Node> node(node_);

    // store original transform
    Vector3 pos = node->GetPosition();
    Quaternion rot = node->GetRotation();
    Vector3 scale = node->GetScale();

    String name = node->GetName();

    node->LoadXML(xmlfile->GetRoot());

    node->SetPosition(pos);
    node->SetRotation(rot);
    node->SetScale(scale);
    node->SetName(name);

    // Get the root components of the load node
    const Vector<SharedPtr<Component>>& rootComponents = node->GetComponents();

    // set all loaded components to be temporary, set all loaded root components and
    // direct children to temporary
    for (unsigned i = 0; i < rootComponents.Size(); i++)
    {
        rootComponents.At(i)->SetTemporary(true);
    }

    const Vector<SharedPtr<Node> >& children = node->GetChildren();

    for (unsigned i = 0; i < children.Size(); i++)
    {
        children.At(i)->SetTemporary(true);
    }

    // readd via stored node, which is the same as node_ after this add
    this->SetTemporary(temporary);
    node->AddComponent(this, id, REPLICATED);

#ifdef CRAFT_3D

    // Get all the rigid bodies of the load node
    PODVector<RigidBody*> bodies;
    node_->GetComponents<RigidBody>(bodies, true);

    for (unsigned i = 0; i < bodies.Size(); i++)
    {
        RigidBody* body = bodies[i];
        body->SetTransform(body->GetNode()->GetWorldPosition(), body->GetNode()->GetWorldRotation());
    }

#endif

}

void PrefabComponent::BreakPrefab()
{
    if (!node_ || !node_->GetScene())
        return;

    // flip temporary root children and components to break prefab
    const Vector<SharedPtr<Component>>& rootComponents = node_->GetComponents();
    const Vector<SharedPtr<Node> >& children = node_->GetChildren();
    PODVector<Node*> filterNodes;

    for (unsigned i = 0; i < rootComponents.Size(); i++)
    {
        if (rootComponents[i]->IsTemporary())
        {
            rootComponents[i]->SetTemporary(false);
        }
    }

    for (unsigned i = 0; i < children.Size(); i++)
    {
        if (children[i]->IsTemporary() && !filterNodes.Contains(children[i].Get()))
        {
            children[i]->SetTemporary(false);
        }
    }

    node_->RemoveComponent(this);

}

void PrefabComponent::HandlePrefabChanged(StringHash eventType, VariantMap& eventData)
{
    using namespace PrefabChanged;

    if (prefabGUID_ != eventData[P_GUID].GetString())
        return;

    LoadPrefabNode();

}

void PrefabComponent::SetPrefabGUID(const String& guid)
{
    prefabGUID_ = guid;

    if (prefabGUID_.Length())
    {
        LoadPrefabNode();
    }

}

void PrefabComponent::OnNodeSet(Node* node)
{
    Component::OnNodeSet(node);
}

}
