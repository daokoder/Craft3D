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

#pragma once

#include "../Core/Object.h"

namespace Craft
{

/// New screen mode set.
CRAFT_EVENT(E_SCREENMODE, ScreenMode)
{
    CRAFT_PARAM(P_WIDTH, Width);                  // int
    CRAFT_PARAM(P_HEIGHT, Height);                // int
    CRAFT_PARAM(P_FULLSCREEN, Fullscreen);        // bool
    CRAFT_PARAM(P_BORDERLESS, Borderless);        // bool
    CRAFT_PARAM(P_RESIZABLE, Resizable);          // bool
    CRAFT_PARAM(P_HIGHDPI, HighDPI);              // bool
    CRAFT_PARAM(P_MONITOR, Monitor);              // int
    CRAFT_PARAM(P_REFRESHRATE, RefreshRate);      // int
}

/// Window position changed.
CRAFT_EVENT(E_WINDOWPOS, WindowPos)
{
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
}

/// Request for queuing rendersurfaces either in manual or always-update mode.
CRAFT_EVENT(E_RENDERSURFACEUPDATE, RenderSurfaceUpdate)
{
}

/// Frame rendering started.
CRAFT_EVENT(E_BEGINRENDERING, BeginRendering)
{
}

/// Frame rendering ended.
CRAFT_EVENT(E_ENDRENDERING, EndRendering)
{
}

/// Update of a view started.
CRAFT_EVENT(E_BEGINVIEWUPDATE, BeginViewUpdate)
{
    CRAFT_PARAM(P_VIEW, View);                    // View pointer
    CRAFT_PARAM(P_TEXTURE, Texture);              // Texture pointer
    CRAFT_PARAM(P_SURFACE, Surface);              // RenderSurface pointer
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_CAMERA, Camera);                // Camera pointer
}

/// Update of a view ended.
CRAFT_EVENT(E_ENDVIEWUPDATE, EndViewUpdate)
{
    CRAFT_PARAM(P_VIEW, View);                    // View pointer
    CRAFT_PARAM(P_TEXTURE, Texture);              // Texture pointer
    CRAFT_PARAM(P_SURFACE, Surface);              // RenderSurface pointer
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_CAMERA, Camera);                // Camera pointer
}

/// Render of a view started.
CRAFT_EVENT(E_BEGINVIEWRENDER, BeginViewRender)
{
    CRAFT_PARAM(P_VIEW, View);                    // View pointer
    CRAFT_PARAM(P_TEXTURE, Texture);              // Texture pointer
    CRAFT_PARAM(P_SURFACE, Surface);              // RenderSurface pointer
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_CAMERA, Camera);                // Camera pointer
}

/// A view has allocated its screen buffers for rendering. They can be accessed now with View::FindNamedTexture().
CRAFT_EVENT(E_VIEWBUFFERSREADY, ViewBuffersReady)
{
    CRAFT_PARAM(P_VIEW, View);                    // View pointer
    CRAFT_PARAM(P_TEXTURE, Texture);              // Texture pointer
    CRAFT_PARAM(P_SURFACE, Surface);              // RenderSurface pointer
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_CAMERA, Camera);                // Camera pointer
}

/// A view has set global shader parameters for a new combination of vertex/pixel shaders. Custom global parameters can now be set.
CRAFT_EVENT(E_VIEWGLOBALSHADERPARAMETERS, ViewGlobalShaderParameters)
{
    CRAFT_PARAM(P_VIEW, View);                    // View pointer
    CRAFT_PARAM(P_TEXTURE, Texture);              // Texture pointer
    CRAFT_PARAM(P_SURFACE, Surface);              // RenderSurface pointer
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_CAMERA, Camera);                // Camera pointer
}

/// Render of a view ended. Its screen buffers are still accessible if needed.
CRAFT_EVENT(E_ENDVIEWRENDER, EndViewRender)
{
    CRAFT_PARAM(P_VIEW, View);                    // View pointer
    CRAFT_PARAM(P_TEXTURE, Texture);              // Texture pointer
    CRAFT_PARAM(P_SURFACE, Surface);              // RenderSurface pointer
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_CAMERA, Camera);                // Camera pointer
}

/// Render of all views is finished for the frame.
CRAFT_EVENT(E_ENDALLVIEWSRENDER, EndAllViewsRender)
{
}

/// A render path event has occurred.
CRAFT_EVENT(E_RENDERPATHEVENT, RenderPathEvent)
{
    CRAFT_PARAM(P_NAME, Name);                    // String
}

/// Graphics context has been lost. Some or all (depending on the API) GPU objects have lost their contents.
CRAFT_EVENT(E_DEVICELOST, DeviceLost)
{
}

/// Graphics context has been recreated after being lost. GPU objects in the "data lost" state can be restored now.
CRAFT_EVENT(E_DEVICERESET, DeviceReset)
{
}

}
