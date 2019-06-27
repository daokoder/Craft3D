
#ifndef __DAO_CRAFT_ENGINE_H__
#define __DAO_CRAFT_ENGINE_H__

#ifndef __CLANGDAO__
#include <Core/Context.h>
#include <Core/Spline.h>
#include <Core/Mutex.h>
#include <Core/Condition.h>
#include <Core/Thread.h>

#include <IO/File.h>
#include <IO/FileSystem.h>
#include <IO/FileWatcher.h>
#include <IO/PackageFile.h>
#include <IO/Compression.h>

#include <Resource/Resource.h>
#include <Resource/Image.h>
#include <Resource/Localization.h>
#include <Resource/XMLElement.h>
#include <Resource/XMLFile.h>
#include <Resource/ResourceCache.h>

#include <Graphics/Technique.h>
#include <Graphics/Geometry.h>
#include <Graphics/Camera.h>
#include <Graphics/Light.h>
#include <Graphics/Texture.h>
#include <Graphics/Texture2D.h>
#include <Graphics/TextureCube.h>
#include <Graphics/Material.h>
#include <Graphics/Drawable.h>
#include <Graphics/RenderPath.h>
#include <Graphics/RenderSurface.h>
#include <Graphics/Renderer.h>
#include <Graphics/ShaderVariation.h>
#include <Graphics/ShaderProgram.h>
#include <Graphics/Shader.h>
#include <Graphics/OctreeQuery.h>
#include <Graphics/Octree.h>
#include <Graphics/Viewport.h>
#include <Graphics/View.h>
#include <Graphics/Graphics.h>


#include <Craft2D/Drawable2D.h>
#include <Craft2D/Sprite2D.h>
#include <Craft2D/SpriteSheet2D.h>
#include <Craft2D/StaticSprite2D.h>
#include <Craft2D/AnimatedSprite2D.h>
//#include <Craft2D/Animation2D.h>
#include <Craft2D/AnimationSet2D.h>
#include <Craft2D/ParticleEffect2D.h>
#include <Craft2D/ParticleEmitter2D.h>
#include <Craft2D/TileMap2D.h>
#include <Craft2D/TileMapLayer2D.h>
#include <Craft2D/Renderer2D.h>
#include <Craft2D/RigidBody2D.h>
#include <Craft2D/CollisionShape2D.h>
#include <Craft2D/CollisionBox2D.h>
#include <Craft2D/CollisionPolygon2D.h>
#include <Craft2D/CollisionCircle2D.h>
#include <Craft2D/CollisionEdge2D.h>
#include <Craft2D/CollisionChain2D.h>
#include <Craft2D/Constraint2D.h>
#include <Craft2D/ConstraintDistance2D.h>
#include <Craft2D/ConstraintFriction2D.h>
#include <Craft2D/ConstraintGear2D.h>
#include <Craft2D/ConstraintMotor2D.h>
#include <Craft2D/ConstraintMouse2D.h>
#include <Craft2D/ConstraintPrismatic2D.h>
#include <Craft2D/ConstraintPulley2D.h>
#include <Craft2D/ConstraintRevolute2D.h>
#include <Craft2D/ConstraintRope2D.h>
#include <Craft2D/ConstraintWeld2D.h>
#include <Craft2D/ConstraintWheel2D.h>
#include <Craft2D/PhysicsWorld2D.h>


#include <Graphics/Skeleton.h>
#include <Graphics/Model.h>
#include <Graphics/StaticModel.h>
#include <Graphics/StaticModelGroup.h>
#include <Graphics/Skybox.h>
#include <Graphics/Animation.h>
#include <Graphics/AnimationState.h>
#include <Graphics/AnimationController.h>
#include <Graphics/AnimatedModel.h>
#include <Graphics/CustomGeometry.h>
#include <Graphics/BillboardSet.h>
#include <Graphics/ParticleEffect.h>
#include <Graphics/ParticleEmitter.h>
#include <Graphics/TerrainPatch.h>
#include <Graphics/Terrain.h>

#include <Scene/Animatable.h>
#include <Scene/ObjectAnimation.h>
#include <Scene/ValueAnimation.h>
#include <Scene/Node.h>
#include <Scene/Scene.h>
#include <Scene/UnknownComponent.h>
#include <Scene/SplinePath.h>


#include <Input/Input.h>
#include <Input/InputConstants.h>


#include <Audio/Audio.h>
#include <Audio/AudioDefs.h>
#include <Audio/SoundStream.h>
#include <Audio/SoundSource.h>
#include <Audio/SoundSource3D.h>
#include <Audio/SoundListener.h>
#include <Audio/Sound.h>


#include <Script/ScriptComponent.h>
#include <Script/ScriptComponentFile.h>


#include <Physics/RigidBody.h>
#include <Physics/CollisionShape.h>
#include <Physics/Constraint.h>
#include <Physics/PhysicsWorld.h>


#include <Navigation/Navigable.h>
#include <Navigation/NavArea.h>
#include <Navigation/Obstacle.h>
#include <Navigation/OffMeshConnection.h>
#include <Navigation/NavigationMesh.h>
#include <Navigation/DynamicNavigationMesh.h>
#include <Navigation/CrowdManager.h>
#include <Navigation/CrowdAgent.h>


#include <UIKit/UIWidget.h>
#include <UIKit/UIView.h>
#include <UIKit/UIWindow.h>
#include <UIKit/UILayout.h>
#include <UIKit/UIFontDescription.h>
#include <UIKit/UISelectList.h>
#include <UIKit/UICheckBox.h>
#include <UIKit/UIClickLabel.h>
#include <UIKit/UIContainer.h>
#include <UIKit/UIDimmer.h>
#include <UIKit/UIDragDrop.h>
#include <UIKit/UIEditField.h>
#include <UIKit/UIInlineSelect.h>
#include <UIKit/UIMenuWindow.h>
#include <UIKit/UIPopupWindow.h>
#include <UIKit/UISceneView.h>
#include <UIKit/UIImageWidget.h>
#include <UIKit/UIListView.h>
#include <UIKit/UIMenubar.h>
#include <UIKit/UISection.h>
#include <UIKit/UISelectDropdown.h>
#include <UIKit/UISeparator.h>
#include <UIKit/UISkinImage.h>
#include <UIKit/UITabContainer.h>
#include <UIKit/UIMessageWindow.h>
#include <UIKit/UIScrollContainer.h>
#include <UIKit/UITextField.h>
#include <UIKit/UITextureWidget.h>
#include <UIKit/UIRenderer.h>
#include <UIKit/UI.h>


#include <Engine/Engine.h>
#include <Engine/DebugHud.h>
#include <DaoScript/DaoPlayer.h>
#include <DaoScript/DaoComponent.h>

namespace Craft{

static const float MATH_PI = M_PI;
static const float MATH_HALF_PI = M_HALF_PI;
static const int MATH_MIN_INT = M_MIN_INT;
static const int MATH_MAX_INT = M_MAX_INT;
static const unsigned MATH_MIN_UNSIGNED = M_MIN_UNSIGNED;
static const unsigned MATH_MAX_UNSIGNED = M_MAX_UNSIGNED;

static const float MATH_EPSILON = M_EPSILON;
static const float MATH_LARGE_EPSILON = M_LARGE_EPSILON;
static const float MATH_MIN_NEARCLIP = M_MIN_NEARCLIP;
static const float MATH_MAX_FOV = M_MAX_FOV;
static const float MATH_LARGE_VALUE = M_LARGE_VALUE;
static const float MATH_INFINITY = M_INFINITY;
static const float MATH_DEGTORAD = M_DEGTORAD;
static const float MATH_DEGTORAD_2 = M_DEGTORAD_2;
static const float MATH_RADTODEG = M_RADTODEG;

}

class WidgetBase
{
protected:
	bool OnEventType( const tb::TBWidgetEvent &event );
	virtual bool OnClick( int &_cs ) = 0;
	virtual bool OnClick( int &_cs, unsigned refid ) = 0;
	virtual bool OnLongClick( int &_cs ) = 0;
	virtual bool OnLeftButtonDown( int &_cs ) = 0;
	virtual bool OnLeftButtonUp( int &_cs ) = 0;
	virtual bool OnRightButtonDown( int &_cs ) = 0;
	virtual bool OnRightButtonUp( int &_cs ) = 0;
	virtual bool OnKeyDown( int &_cs, int key, int sp, int mod ) = 0;
	virtual bool OnKeyUp( int &_cs, int key, int sp, int mod ) = 0;
	virtual bool OnChange( int &_cs ) = 0;
};

extern void Dao_Craft_LockHandleGC();
extern void Dao_Craft_UnlockHandleGC();

extern int Craft_Referenced( Craft::RefCounted *obj );
extern int Craft_Subscribed( Craft::EventHandler *obj );

#endif

#endif
