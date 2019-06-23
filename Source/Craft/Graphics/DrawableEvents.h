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

/// AnimatedModel bone hierarchy created.
CRAFT_EVENT(E_BONEHIERARCHYCREATED, BoneHierarchyCreated)
{
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
}

/// AnimatedModel animation trigger.
CRAFT_EVENT(E_ANIMATIONTRIGGER, AnimationTrigger)
{
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
    CRAFT_PARAM(P_ANIMATION, Animation);          // Animation pointer
    CRAFT_PARAM(P_NAME, Name);                    // String
    CRAFT_PARAM(P_TIME, Time);                    // Float
    CRAFT_PARAM(P_DATA, Data);                    // User-defined data type
}

/// AnimatedModel animation finished or looped.
CRAFT_EVENT(E_ANIMATIONFINISHED, AnimationFinished)
{
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
    CRAFT_PARAM(P_ANIMATION, Animation);          // Animation pointer
    CRAFT_PARAM(P_NAME, Name);                    // String
    CRAFT_PARAM(P_LOOPED, Looped);                // Bool
}

/// Particle effect finished.
CRAFT_EVENT(E_PARTICLEEFFECTFINISHED, ParticleEffectFinished)
{
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
    CRAFT_PARAM(P_EFFECT, Effect);                // ParticleEffect pointer
}

/// Terrain geometry created.
CRAFT_EVENT(E_TERRAINCREATED, TerrainCreated)
{
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
}

}
