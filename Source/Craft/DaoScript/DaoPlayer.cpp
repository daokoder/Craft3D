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

#include "../IO/Log.h"

#include "../Input/InputEvents.h"

#include "../Resource/ResourceCache.h"
#include "../Graphics/Renderer.h"
#include "../Graphics/Camera.h"

#include "DaoPlayerEvents.h"
#include "DaoPlayer.h"

namespace Craft
{

DaoPlayer::DaoPlayer(Context* context) :
    Object(context)
{
    viewport_ = new Viewport(context_);
    GetSubsystem<Renderer>()->SetViewport(0, viewport_);

    SubscribeToEvent(E_EXITREQUESTED, CRAFT_HANDLER(DaoPlayer, HandleExitRequested));
}

DaoPlayer::~DaoPlayer()
{

}

void DaoPlayer::HandleExitRequested(StringHash eventType, VariantMap& eventData)
{
    currentScene_ = 0;
    viewport_ = 0;

}

Scene* DaoPlayer::LoadScene(const String& filename, Camera *camera)
{
    ResourceCache* cache = GetSubsystem<ResourceCache>();
    SharedPtr<File> file = cache->GetFile(filename);

    if (!file || !file->IsOpen())
    {
        return 0;
    }

    SharedPtr<Scene> scene(new Scene(context_));

    VariantMap eventData;

    eventData[DaoPlayerSceneLoadBegin::P_SCENE] = scene;

    scene->SendEvent(E_PLAYERSCENELOADBEGIN, eventData);

    if (!scene->LoadXML(*file))
    {
        eventData[DaoPlayerSceneLoadEnd::P_SCENE] = scene;
        eventData[DaoPlayerSceneLoadEnd::P_SUCCESS] = false;
        scene->SendEvent(E_PLAYERSCENELOADEND, eventData);
        return 0;
    }

    eventData[DaoPlayerSceneLoadEnd::P_SCENE] = scene;
    eventData[DaoPlayerSceneLoadEnd::P_SUCCESS] = true;
    scene->SendEvent(E_PLAYERSCENELOADEND, eventData);

    loadedScenes_.Push(scene);

    if (currentScene_.Null())
    {
        SetCurrentScene(scene, camera);
    }

    return scene;
}

void DaoPlayer::SetCurrentScene(Scene* scene, Camera* camera)
{
    Vector<SharedPtr<Scene>>::ConstIterator citr = loadedScenes_.Find(SharedPtr<Scene>(scene));

    if (citr == loadedScenes_.End())
    {
        CRAFT_LOGERROR("DaoPlayer::UnloadScene - unknown scene");
        return;
    }

    currentScene_ = scene;

    if (!camera)
    {
        PODVector<Node*> cameraNodes;
        scene->GetChildrenWithComponent(cameraNodes, Camera::GetTypeStatic(), true);
        if (cameraNodes.Size())
        {
            camera = cameraNodes[0]->GetComponent<Camera>();
        }
    }

    viewport_->SetScene(scene);

    if (camera)
        viewport_->SetCamera(camera);

}

void DaoPlayer::UnloadScene(Scene* scene)
{
    SharedPtr<Scene> keepalive(scene);

    if (currentScene_ == scene)
    {
        viewport_->SetScene(0);
        viewport_->SetCamera(0);
        currentScene_ = 0;
    }

    Vector<SharedPtr<Scene>>::ConstIterator citr = loadedScenes_.Find(keepalive);
    
    if (citr == loadedScenes_.End())
    {
        CRAFT_LOGERROR("DaoPlayer::UnloadScene - unknown scene");
        return;
    }

    VariantMap eventData;
    eventData[DaoPlayerSceneUnload::P_SCENE] = scene;

    scene->SendEvent(E_PLAYERSCENEUNLOAD, eventData);

    loadedScenes_.Remove(keepalive);

}

void DaoPlayer::UnloadAllScenes()
{
    Vector<SharedPtr<Scene>> scenes = loadedScenes_;

    for (unsigned i = 0; i < scenes.Size(); i++)
    {
        UnloadScene(scenes[i]);
    }

    assert(loadedScenes_.Size() == 0);
    
}



}
