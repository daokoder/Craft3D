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

/// Variable timestep scene update.
CRAFT_EVENT(E_SCENEUPDATE, SceneUpdate)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_TIMESTEP, TimeStep);            // float
}

/// Scene subsystem update.
CRAFT_EVENT(E_SCENESUBSYSTEMUPDATE, SceneSubsystemUpdate)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_TIMESTEP, TimeStep);            // float
}

/// Scene transform smoothing update.
CRAFT_EVENT(E_UPDATESMOOTHING, UpdateSmoothing)
{
    CRAFT_PARAM(P_CONSTANT, Constant);            // float
    CRAFT_PARAM(P_SQUAREDSNAPTHRESHOLD, SquaredSnapThreshold);  // float
}

/// Scene drawable update finished. Custom animation (eg. IK) can be done at this point.
CRAFT_EVENT(E_SCENEDRAWABLEUPDATEFINISHED, SceneDrawableUpdateFinished)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_TIMESTEP, TimeStep);            // float
}

/// SmoothedTransform target position changed.
CRAFT_EVENT(E_TARGETPOSITION, TargetPositionChanged)
{
}

/// SmoothedTransform target position changed.
CRAFT_EVENT(E_TARGETROTATION, TargetRotationChanged)
{
}

/// Scene attribute animation update.
CRAFT_EVENT(E_ATTRIBUTEANIMATIONUPDATE, AttributeAnimationUpdate)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_TIMESTEP, TimeStep);            // float
}

/// Attribute animation added to object animation.
CRAFT_EVENT(E_ATTRIBUTEANIMATIONADDED, AttributeAnimationAdded)
{
    CRAFT_PARAM(P_OBJECTANIMATION, ObjectAnimation);               // Object animation pointer
    CRAFT_PARAM(P_ATTRIBUTEANIMATIONNAME, AttributeAnimationName); // String
}

/// Attribute animation removed from object animation.
CRAFT_EVENT(E_ATTRIBUTEANIMATIONREMOVED, AttributeAnimationRemoved)
{
    CRAFT_PARAM(P_OBJECTANIMATION, ObjectAnimation);               // Object animation pointer
    CRAFT_PARAM(P_ATTRIBUTEANIMATIONNAME, AttributeAnimationName); // String
}

/// Variable timestep scene post-update.
CRAFT_EVENT(E_SCENEPOSTUPDATE, ScenePostUpdate)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_TIMESTEP, TimeStep);            // float
}

/// Asynchronous scene loading progress.
CRAFT_EVENT(E_ASYNCLOADPROGRESS, AsyncLoadProgress)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_PROGRESS, Progress);            // float
    CRAFT_PARAM(P_LOADEDNODES, LoadedNodes);      // int
    CRAFT_PARAM(P_TOTALNODES, TotalNodes);        // int
    CRAFT_PARAM(P_LOADEDRESOURCES, LoadedResources); // int
    CRAFT_PARAM(P_TOTALRESOURCES, TotalResources);   // int
}

/// Asynchronous scene loading finished.
CRAFT_EVENT(E_ASYNCLOADFINISHED, AsyncLoadFinished)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
}

/// A child node has been added to a parent node.
CRAFT_EVENT(E_NODEADDED, NodeAdded)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_PARENT, Parent);                // Node pointer
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
}

/// A child node is about to be removed from a parent node. Note that individual component removal events will not be sent.
CRAFT_EVENT(E_NODEREMOVED, NodeRemoved)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_PARENT, Parent);                // Node pointer
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
}

/// A component has been created to a node.
CRAFT_EVENT(E_COMPONENTADDED, ComponentAdded)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
    CRAFT_PARAM(P_COMPONENT, Component);          // Component pointer
}

/// A component is about to be removed from a node.
CRAFT_EVENT(E_COMPONENTREMOVED, ComponentRemoved)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
    CRAFT_PARAM(P_COMPONENT, Component);          // Component pointer
}

/// A node's name has changed.
CRAFT_EVENT(E_NODENAMECHANGED, NodeNameChanged)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
}

/// A node's enabled state has changed.
CRAFT_EVENT(E_NODEENABLEDCHANGED, NodeEnabledChanged)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
}

/// A node's tag has been added.
CRAFT_EVENT(E_NODETAGADDED, NodeTagAdded)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
    CRAFT_PARAM(P_TAG, Tag);                      // String tag
}

/// A node's tag has been removed.
CRAFT_EVENT(E_NODETAGREMOVED, NodeTagRemoved)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
    CRAFT_PARAM(P_TAG, Tag);                      // String tag
}

/// A component's enabled state has changed.
CRAFT_EVENT(E_COMPONENTENABLEDCHANGED, ComponentEnabledChanged)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
    CRAFT_PARAM(P_COMPONENT, Component);          // Component pointer
}

/// A serializable's temporary state has changed.
CRAFT_EVENT(E_TEMPORARYCHANGED, TemporaryChanged)
{
    CRAFT_PARAM(P_SERIALIZABLE, Serializable);    // Serializable pointer
}

/// A node (and its children and components) has been cloned.
CRAFT_EVENT(E_NODECLONED, NodeCloned)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_NODE, Node);                    // Node pointer
    CRAFT_PARAM(P_CLONENODE, CloneNode);          // Node pointer
}

/// A component has been cloned.
CRAFT_EVENT(E_COMPONENTCLONED, ComponentCloned)
{
    CRAFT_PARAM(P_SCENE, Scene);                  // Scene pointer
    CRAFT_PARAM(P_COMPONENT, Component);          // Component pointer
    CRAFT_PARAM(P_CLONECOMPONENT, CloneComponent); // Component pointer
}

/// A network attribute update from the server has been intercepted.
CRAFT_EVENT(E_INTERCEPTNETWORKUPDATE, InterceptNetworkUpdate)
{
    CRAFT_PARAM(P_SERIALIZABLE, Serializable);    // Serializable pointer
    CRAFT_PARAM(P_TIMESTAMP, TimeStamp);          // unsigned (0-255)
    CRAFT_PARAM(P_INDEX, Index);                  // unsigned
    CRAFT_PARAM(P_NAME, Name);                    // String
    CRAFT_PARAM(P_VALUE, Value);                  // Variant
}

}
