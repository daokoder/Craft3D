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

#include "../Precompiled.h"

#include "../Core/Context.h"
#include "../Graphics/DebugRenderer.h"
#include "../IO/Log.h"
#include "../Navigation/DynamicNavigationMesh.h"
#include "../Navigation/Obstacle.h"
#include "../Navigation/NavigationEvents.h"
#include "../Scene/Scene.h"

#include "../DebugNew.h"

namespace Craft
{

extern const char* NAVIGATION_CATEGORY;

Obstacle::Obstacle(Context* context) :
    Component(context),
	type_(OBSTACLE_CYLINDER),
    width_(5.0f),
    length_(5.0f),
    height_(5.0f),
    radius_(5.0f),
    yawAngle_(0.0f),
    obstacleId_(0)
{
}

Obstacle::~Obstacle()
{
    if (obstacleId_ > 0 && ownerMesh_)
        ownerMesh_->RemoveObstacle(this);
}

void Obstacle::RegisterObject(Context* context)
{
    context->RegisterFactory<Obstacle>(NAVIGATION_CATEGORY);
    CRAFT_COPY_BASE_ATTRIBUTES(Component);
    CRAFT_ACCESSOR_ATTRIBUTE("Radius", GetRadius, SetRadius, float, 5.0f, AM_DEFAULT);
    CRAFT_ACCESSOR_ATTRIBUTE("Width", GetWidth, SetWidth, float, 5.0f, AM_DEFAULT);
    CRAFT_ACCESSOR_ATTRIBUTE("Length", GetLength, SetLength, float, 5.0f, AM_DEFAULT);
    CRAFT_ACCESSOR_ATTRIBUTE("Height", GetHeight, SetHeight, float, 5.0f, AM_DEFAULT);
	// TODO: type and offset;
}

void Obstacle::OnSetEnabled()
{
    if (ownerMesh_)
    {
        if (IsEnabledEffective())
            ownerMesh_->AddObstacle(this);
        else
            ownerMesh_->RemoveObstacle(this);
    }
}

void Obstacle::SetObstacleType(ObstacleType newType)
{
    type_ = newType;
    if (ownerMesh_)
        ownerMesh_->ObstacleChanged(this);
    MarkNetworkUpdate();
}

void Obstacle::SetHeight(float newHeight)
{
    height_ = newHeight;
    if (ownerMesh_)
        ownerMesh_->ObstacleChanged(this);
    MarkNetworkUpdate();
}

void Obstacle::SetRadius(float newRadius)
{
    radius_ = newRadius;
    if (ownerMesh_)
        ownerMesh_->ObstacleChanged(this);
    MarkNetworkUpdate();
}

void Obstacle::SetWidth(float newWidth)
{
    width_ = newWidth;
    if (ownerMesh_)
        ownerMesh_->ObstacleChanged(this);
    MarkNetworkUpdate();
}

void Obstacle::SetLength(float newLength)
{
    length_ = newLength;
    if (ownerMesh_)
        ownerMesh_->ObstacleChanged(this);
    MarkNetworkUpdate();
}

void Obstacle::SetYawAngle(float newYawAngle)
{
    yawAngle_ = newYawAngle;
    if (ownerMesh_)
        ownerMesh_->ObstacleChanged(this);
    MarkNetworkUpdate();
}

void Obstacle::SetOffset( const Vector3 & offset )
{
	offset_ = offset;
	if (ownerMesh_)
		ownerMesh_->ObstacleChanged(this);
	MarkNetworkUpdate();
}

void Obstacle::OnNodeSet(Node* node)
{
    if (node)
        node->AddListener(this);
}

void Obstacle::OnSceneSet(Scene* scene)
{
    if (scene)
    {
        if (scene == node_)
        {
            CRAFT_LOGWARNING(GetTypeName() + " should not be created to the root scene node");
            return;
        }
        if (!ownerMesh_)
            ownerMesh_ = node_->GetParentComponent<DynamicNavigationMesh>(true);
        if (ownerMesh_)
        {
            ownerMesh_->AddObstacle(this);
            SubscribeToEvent(ownerMesh_, E_NAVIGATION_TILE_ADDED, CRAFT_HANDLER(Obstacle, HandleNavigationTileAdded));
        }
    }
    else
    {
        if (obstacleId_ > 0 && ownerMesh_)
            ownerMesh_->RemoveObstacle(this);

        UnsubscribeFromEvent(E_NAVIGATION_TILE_ADDED);
        ownerMesh_.Reset();
    }
}

void Obstacle::OnMarkedDirty(Node* node)
{
    if (IsEnabledEffective() && ownerMesh_)
    {
        Scene* scene = GetScene();
        /// \hack If scene already unassigned, or if it's being destroyed, do nothing
        if (!scene || scene->Refs() == 0)
            return;

        // If within threaded update, update later
        if (scene->IsThreadedUpdate())
        {
            scene->DelayedMarkedDirty(this);
            return;
        }

        ownerMesh_->ObstacleChanged(this);
    }
}

void Obstacle::HandleNavigationTileAdded(StringHash eventType, VariantMap& eventData)
{
    // Re-add obstacle if it is intersected with newly added tile
    const IntVector2 tile = eventData[NavigationTileAdded::P_TILE].GetIntVector2();
    if (IsEnabledEffective() && ownerMesh_ && ownerMesh_->IsObstacleInTile(this, tile))
        ownerMesh_->ObstacleChanged(this);
}

void Obstacle::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
{
    if (debug && IsEnabledEffective()){
        Vector3 position = node_->GetWorldPosition();
        Color color(0.0f, 1.0f, 1.0f);

        if( type_ == OBSTACLE_CYLINDER ){
            debug->AddCylinder(position, radius_, height_, color, depthTest);
        }else if( type_ == OBSTACLE_AABBOX ){
			Vector3 extent( 0.5*width_, 0.5*length_, 0.5*height_ );
			BoundingBox box( position - extent, position + extent );
            debug->AddBoundingBox(box, color, depthTest, false);
        }else if( type_ == OBSTACLE_OBBOX ){
			Vector3 extent( 0.5*width_, 0.5*length_, 0.5*height_ );
			BoundingBox box( - extent, extent );
			Quaternion rotation( yawAngle_, Vector3::UP );
			Matrix3x4 matrix( position, rotation, Vector3::ONE );
            debug->AddBoundingBox(box, matrix, color, depthTest, false);
        }
    }
}

void Obstacle::DrawDebugGeometry(bool depthTest)
{
    Scene* scene = GetScene();
    if (scene)
        DrawDebugGeometry(scene->GetComponent<DebugRenderer>(), depthTest);
}

}
