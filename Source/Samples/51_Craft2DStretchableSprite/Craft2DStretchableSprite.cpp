//
// Copyright (c) 2008-2019 the Urho3D project.
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

#include <Craft/Core/CoreEvents.h>
#include <Craft/Engine/Engine.h>
#include <Craft/Graphics/Camera.h>
#include <Craft/Graphics/Graphics.h>
#include <Craft/Graphics/Octree.h>
#include <Craft/Graphics/Renderer.h>
#include <Craft/Input/Input.h>
#include <Craft/Resource/ResourceCache.h>
#include <Craft/Scene/Scene.h>
#include <Craft/UI/Font.h>
#include <Craft/UI/Text.h>
#include <Craft/Craft2D/Sprite2D.h>
#include <Craft/Craft2D/StaticSprite2D.h>
#include <Craft/Craft2D/StretchableSprite2D.h>

#include "Craft2DStretchableSprite.h"

#include <Craft/DebugNew.h>

CRAFT_DEFINE_APPLICATION_MAIN(Craft2DStretchableSprite)

Craft2DStretchableSprite::Craft2DStretchableSprite(Context* context) :
    Sample(context)
{
}

void Craft2DStretchableSprite::Start()
{
    // Execute base class startup
    Sample::Start();

    // Create the scene content
    CreateScene();

    // Create the UI content
    CreateInstructions();

    // Setup the viewport for displaying the scene
    SetupViewport();

    // Hook up to the frame update events
    SubscribeToEvents();

    // Set the mouse mode to use in the sample
    Sample::InitMouseMode(MM_FREE);
}

void Craft2DStretchableSprite::CreateScene()
{
    scene_ = new Scene(context_);
    scene_->CreateComponent<Octree>();

    // Create camera node
    cameraNode_ = scene_->CreateChild("Camera");
    // Set camera's position
    cameraNode_->SetPosition(Vector3(0.0f, 0.0f, -10.0f));

    auto* camera = cameraNode_->CreateComponent<Camera>();
    camera->SetOrthographic(true);

    auto* graphics = GetSubsystem<Graphics>();
    camera->SetOrthoSize((float)graphics->GetHeight() * PIXEL_SIZE);

    refSpriteNode_ = scene_->CreateChild("regular sprite");
    stretchSpriteNode_ = scene_->CreateChild("stretchable sprite");

    auto* cache = GetSubsystem<ResourceCache>();
    auto* sprite = cache->GetResource<Sprite2D>("Craft2D/Stretchable.png");
    if (sprite)
    {
        refSpriteNode_->CreateComponent<StaticSprite2D>()->SetSprite(sprite);

        auto stretchSprite = stretchSpriteNode_->CreateComponent<StretchableSprite2D>();
        stretchSprite->SetSprite(sprite);
        stretchSprite->SetBorder({25, 25, 25, 25});

        refSpriteNode_->Translate2D(Vector2{-2.0f, 0.0f});
        stretchSpriteNode_->Translate2D(Vector2{2.0f, 0.0f});
    }
}

void Craft2DStretchableSprite::CreateInstructions()
{
    auto* cache = GetSubsystem<ResourceCache>();
    auto* ui = GetSubsystem<UI>();

    // Construct new Text object, set string to display and font to use
    auto* instructionText = ui->GetRoot()->CreateChild<Text>();
    instructionText->SetText(
        "Use WASD keys to transform, Tab key to cycle through\n"
        "Scale, Rotate, and Translate transform modes. In Rotate\n"
        "mode, combine A/D keys with Ctrl key to rotate about\n"
        "the Z axis");
    instructionText->SetFont(cache->GetResource<Font>("Fonts/Anonymous Pro.ttf"), 12);

    // Position the text relative to the screen center
    instructionText->SetHorizontalAlignment(HA_CENTER);
    instructionText->SetVerticalAlignment(VA_CENTER);
    instructionText->SetPosition(0, ui->GetRoot()->GetHeight() / 4);
}

void Craft2DStretchableSprite::SetupViewport()
{
    auto* renderer = GetSubsystem<Renderer>();

    // Set up a viewport to the Renderer subsystem so that the 3D scene can be seen
    SharedPtr<Viewport> viewport(new Viewport(context_, scene_, cameraNode_->GetComponent<Camera>()));
    renderer->SetViewport(0, viewport);
}

void Craft2DStretchableSprite::SubscribeToEvents()
{
    SubscribeToEvent(E_KEYUP, CRAFT_HANDLER(Craft2DStretchableSprite, OnKeyUp));

    // Subscribe HandleUpdate() function for processing update events
    SubscribeToEvent(E_UPDATE, CRAFT_HANDLER(Craft2DStretchableSprite, HandleUpdate));

    // Unsubscribe the SceneUpdate event from base class to prevent camera pitch and yaw in 2D sample
    UnsubscribeFromEvent(E_SCENEUPDATE);
}

void Craft2DStretchableSprite::HandleUpdate(StringHash /*eventType*/, VariantMap& eventData)
{
    using namespace Update;

    // Take the frame time step, which is stored as a float
    float timeStep = eventData[P_TIMESTEP].GetFloat();

    switch (selectTransform_)
    {
    case 0: ScaleSprites(timeStep);
        break;
    case 1: RotateSprites(timeStep);
        break;
    case 2: TranslateSprites(timeStep);
        break;
    default: CRAFT_LOGERRORF("bad transform selection: %d", selectTransform_);
    }
}

void Craft2DStretchableSprite::OnKeyUp(StringHash /*eventType*/, VariantMap& eventData)
{
    using namespace KeyUp;

    const auto key = eventData[P_KEY].GetInt();

    if (key == KEY_TAB)
    {
        ++selectTransform_;
        selectTransform_ %= 3;
    }
    else if (key == KEY_ESCAPE)
        engine_->Exit();
}


void Craft2DStretchableSprite::TranslateSprites(float timeStep)
{
    static constexpr auto speed = 1.0f;
    const auto input = GetSubsystem<Input>();
    const auto left = input->GetKeyDown(KEY_A),
        right = input->GetKeyDown(KEY_D),
        up = input->GetKeyDown(KEY_W),
        down = input->GetKeyDown(KEY_S);

    if (left || right || up || down)
    {
        const auto quantum = timeStep * speed;
        const auto translate = Vector2{(left ? -quantum : 0.0f) + (right ? quantum : 0.0f),
                                       (down ? -quantum : 0.0f) + (up ? quantum : 0.0f)};

        refSpriteNode_->Translate2D(translate);
        stretchSpriteNode_->Translate2D(translate);
    }
}

void Craft2DStretchableSprite::RotateSprites(float timeStep)
{
    static constexpr auto speed = 45.0f;

    const auto input = GetSubsystem<Input>();
    const auto left = input->GetKeyDown(KEY_A),
        right = input->GetKeyDown(KEY_D),
        up = input->GetKeyDown(KEY_W),
        down = input->GetKeyDown(KEY_S),
        ctrl = input->GetKeyDown(KEY_CTRL);

    if (left || right || up || down)
    {
        const auto quantum = timeStep * speed;

        const auto xrot = (up ? -quantum : 0.0f) + (down ? quantum : 0.0f);
        const auto rot2 = (left ? -quantum : 0.0f) + (right ? quantum : 0.0f);
        const auto totalRot = Quaternion{xrot, ctrl ? 0.0f : rot2, ctrl ? rot2 : 0.0f};

        refSpriteNode_->Rotate(totalRot);
        stretchSpriteNode_->Rotate(totalRot);
    }
}

void Craft2DStretchableSprite::ScaleSprites(float timeStep)
{
    static constexpr auto speed = 0.5f;

    const auto input = GetSubsystem<Input>();
    const auto left = input->GetKeyDown(KEY_A),
        right = input->GetKeyDown(KEY_D),
        up = input->GetKeyDown(KEY_W),
        down = input->GetKeyDown(KEY_S);
    if (left || right || up || down)
    {
        const auto quantum = timeStep * speed;
        const auto scale = Vector2{1.0f + (right ? quantum : left ? -quantum : 0.0f),
                                   1.0f + (up ? quantum : down ? -quantum : 0.0f)};

        refSpriteNode_->Scale2D(scale);
        stretchSpriteNode_->Scale2D(scale);
    }
}
