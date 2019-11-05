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

#include "../Container/Ptr.h"
#include "../Scene/Component.h"

namespace Craft
{

enum ObstacleType
{
    OBSTACLE_CYLINDER,
    OBSTACLE_AABBOX,
    OBSTACLE_OBBOX,
};

class DynamicNavigationMesh;

/// Obstacle for dynamic navigation mesh.
class CRAFT_API Obstacle : public Component
{
    CRAFT_OBJECT(Obstacle, Component)

    friend class DynamicNavigationMesh;

public:
    /// Construct.
    explicit Obstacle(Context*);
    /// Destruct.
    ~Obstacle() override;

    /// Register Obstacle with engine context.
    static void RegisterObject(Context*);

    /// Update the owning mesh when enabled status has changed.
    void OnSetEnabled() override;

    /// Get the type of this obstacle.
    ObstacleType GetObstacleType() const { return type_; }

    /// Set the type of this obstacle.
    void SetObstacleType(ObstacleType newType);

    /// Get the height of this obstacle.
    float GetHeight() const { return height_; }

    /// Set the height of this obstacle.
    void SetHeight(float newHeight);

    /// Get the blocking radius of this obstacle.
    float GetRadius() const { return radius_; }

    /// Set the blocking radius of this obstacle.
    void SetRadius(float newRadius);

    /// Get the width of this obstacle.
    float GetWidth() const { return width_; }

    /// Set the width of this obstacle.
    void SetWidth(float newWidth);

    /// Get the length of this obstacle.
    float GetLength() const { return length_; }

    /// Set the length of this obstacle.
    void SetLength(float newLength);

    /// Get the yaw of this obstacle.
    float GetYawAngle() const { return yawAngle_; }

    /// Set the yaw of this obstacle.
    void SetYawAngle(float newYawAngle);

	Vector3 GetOffset() const { return offset_; } // Craft;
	void SetOffset( const Vector3 & offset ); // Craft;

    /// Get the internal obstacle ID.
    unsigned GetObstacleID() const { return obstacleId_; }

    /// Render debug information.
    virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override; // Craft;
    /// Simplified rendering of debug information for script usage.
    void DrawDebugGeometry(bool depthTest);

protected:
    /// Handle node being assigned.
    virtual void OnNodeSet(Node* node) override; // Craft;
    /// Handle scene being assigned, identify our DynamicNavigationMesh.
    virtual void OnSceneSet(Scene* scene) override; // Craft;
    /// Handle node transform being dirtied.
    virtual void OnMarkedDirty(Node* node) override; // Craft;
    /// Handle navigation mesh tile added.
    void HandleNavigationTileAdded(StringHash eventType, VariantMap& eventData);

protected:
    /// Type of this obstacle.
    ObstacleType type_;
    /// Radius of this obstacle.
    float radius_;
    /// Width of this obstacle.
    float width_;
    /// Length of this obstacle.
    float length_;
    /// Height of this obstacle, extends 1/2 height below and 1/2 height above the owning node's position.
    float height_;
	/// Yaw angle of oriented bounding box obstacle.
	float yawAngle_;

	/// Offset of this obstacle relative to the node position.
	Vector3 offset_;

    /// Id received from tile cache.
    unsigned obstacleId_;
    /// Pointer to the navigation mesh we belong to.
    WeakPtr<DynamicNavigationMesh> ownerMesh_;
};

}
