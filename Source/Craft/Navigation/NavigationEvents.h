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

/// Complete rebuild of navigation mesh.
CRAFT_EVENT(E_NAVIGATION_MESH_REBUILT, NavigationMeshRebuilt)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_MESH, Mesh); // NavigationMesh pointer
}

/// Partial bounding box rebuild of navigation mesh.
CRAFT_EVENT(E_NAVIGATION_AREA_REBUILT, NavigationAreaRebuilt)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_MESH, Mesh); // NavigationMesh pointer
    CRAFT_PARAM(P_BOUNDSMIN, BoundsMin); // Vector3
    CRAFT_PARAM(P_BOUNDSMAX, BoundsMax); // Vector3
}

/// Mesh tile is added to navigation mesh.
CRAFT_EVENT(E_NAVIGATION_TILE_ADDED, NavigationTileAdded)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_MESH, Mesh); // NavigationMesh pointer
    CRAFT_PARAM(P_TILE, Tile); // IntVector2
}

/// Mesh tile is removed from navigation mesh.
CRAFT_EVENT(E_NAVIGATION_TILE_REMOVED, NavigationTileRemoved)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_MESH, Mesh); // NavigationMesh pointer
    CRAFT_PARAM(P_TILE, Tile); // IntVector2
}

/// All mesh tiles are removed from navigation mesh.
CRAFT_EVENT(E_NAVIGATION_ALL_TILES_REMOVED, NavigationAllTilesRemoved)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_MESH, Mesh); // NavigationMesh pointer
}

/// Crowd agent formation.
CRAFT_EVENT(E_CROWD_AGENT_FORMATION, CrowdAgentFormation)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_CROWD_AGENT, CrowdAgent); // CrowdAgent pointer
    CRAFT_PARAM(P_INDEX, Index); // unsigned
    CRAFT_PARAM(P_SIZE, Size); // unsigned
    CRAFT_PARAM(P_POSITION, Position); // Vector3 [in/out]
}

/// Crowd agent formation specific to a node.
CRAFT_EVENT(E_CROWD_AGENT_NODE_FORMATION, CrowdAgentNodeFormation)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_CROWD_AGENT, CrowdAgent); // CrowdAgent pointer
    CRAFT_PARAM(P_INDEX, Index); // unsigned
    CRAFT_PARAM(P_SIZE, Size); // unsigned
    CRAFT_PARAM(P_POSITION, Position); // Vector3 [in/out]
}

/// Crowd agent has been repositioned.
CRAFT_EVENT(E_CROWD_AGENT_REPOSITION, CrowdAgentReposition)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_CROWD_AGENT, CrowdAgent); // CrowdAgent pointer
    CRAFT_PARAM(P_POSITION, Position); // Vector3
    CRAFT_PARAM(P_VELOCITY, Velocity); // Vector3
    CRAFT_PARAM(P_ARRIVED, Arrived); // bool
    CRAFT_PARAM(P_TIMESTEP, TimeStep); // float
}

/// Crowd agent has been repositioned, specific to a node
CRAFT_EVENT(E_CROWD_AGENT_NODE_REPOSITION, CrowdAgentNodeReposition)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_CROWD_AGENT, CrowdAgent); // CrowdAgent pointer
    CRAFT_PARAM(P_POSITION, Position); // Vector3
    CRAFT_PARAM(P_VELOCITY, Velocity); // Vector3
    CRAFT_PARAM(P_ARRIVED, Arrived); // bool
    CRAFT_PARAM(P_TIMESTEP, TimeStep); // float
}

/// Crowd agent's internal state has become invalidated. This is a special case of CrowdAgentStateChanged event.
CRAFT_EVENT(E_CROWD_AGENT_FAILURE, CrowdAgentFailure)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_CROWD_AGENT, CrowdAgent); // CrowdAgent pointer
    CRAFT_PARAM(P_POSITION, Position); // Vector3
    CRAFT_PARAM(P_VELOCITY, Velocity); // Vector3
    CRAFT_PARAM(P_CROWD_AGENT_STATE, CrowdAgentState); // int
    CRAFT_PARAM(P_CROWD_TARGET_STATE, CrowdTargetState); // int
}

/// Crowd agent's internal state has become invalidated. This is a special case of CrowdAgentStateChanged event.
CRAFT_EVENT(E_CROWD_AGENT_NODE_FAILURE, CrowdAgentNodeFailure)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_CROWD_AGENT, CrowdAgent); // CrowdAgent pointer
    CRAFT_PARAM(P_POSITION, Position); // Vector3
    CRAFT_PARAM(P_VELOCITY, Velocity); // Vector3
    CRAFT_PARAM(P_CROWD_AGENT_STATE, CrowdAgentState); // int
    CRAFT_PARAM(P_CROWD_TARGET_STATE, CrowdTargetState); // int
}

/// Crowd agent's state has been changed.
CRAFT_EVENT(E_CROWD_AGENT_STATE_CHANGED, CrowdAgentStateChanged)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_CROWD_AGENT, CrowdAgent); // CrowdAgent pointer
    CRAFT_PARAM(P_POSITION, Position); // Vector3
    CRAFT_PARAM(P_VELOCITY, Velocity); // Vector3
    CRAFT_PARAM(P_CROWD_AGENT_STATE, CrowdAgentState); // int
    CRAFT_PARAM(P_CROWD_TARGET_STATE, CrowdTargetState); // int
}

/// Crowd agent's state has been changed.
CRAFT_EVENT(E_CROWD_AGENT_NODE_STATE_CHANGED, CrowdAgentNodeStateChanged)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_CROWD_AGENT, CrowdAgent); // CrowdAgent pointer
    CRAFT_PARAM(P_POSITION, Position); // Vector3
    CRAFT_PARAM(P_VELOCITY, Velocity); // Vector3
    CRAFT_PARAM(P_CROWD_AGENT_STATE, CrowdAgentState); // int
    CRAFT_PARAM(P_CROWD_TARGET_STATE, CrowdTargetState); // int
}

/// Addition of obstacle to dynamic navigation mesh.
CRAFT_EVENT(E_NAVIGATION_OBSTACLE_ADDED, NavigationObstacleAdded)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_OBSTACLE, Obstacle); // Obstacle pointer
    CRAFT_PARAM(P_POSITION, Position); // Vector3
    CRAFT_PARAM(P_RADIUS, Radius); // float
    CRAFT_PARAM(P_HEIGHT, Height); // float
}

/// Removal of obstacle from dynamic navigation mesh.
CRAFT_EVENT(E_NAVIGATION_OBSTACLE_REMOVED, NavigationObstacleRemoved)
{
    CRAFT_PARAM(P_NODE, Node); // Node pointer
    CRAFT_PARAM(P_OBSTACLE, Obstacle); // Obstacle pointer
    CRAFT_PARAM(P_POSITION, Position); // Vector3
    CRAFT_PARAM(P_RADIUS, Radius); // float
    CRAFT_PARAM(P_HEIGHT, Height); // float
}

}
