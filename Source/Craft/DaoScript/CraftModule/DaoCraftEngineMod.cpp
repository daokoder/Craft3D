// Module name:
#define module_name CraftEngine
#undef module_name

#define module_alias Craft
#undef module_alias

#define module_onload DaoCraftEngine_OnLoad
#undef module_onload

#define CLANGDAO_WRAP_EXPLICIT
#define CLANGDAO_SKIP_PROTECTED

#define Craft_String_dao_hint_mbstring_CString_hint_length_Length()  Craft::String
#undef Craft_String_dao_hint_mbstring_CString_hint_length_Length


//#define Craft_RefCounted_dao_hint_refcount_Craft_COLON2_SharedPtr()  Craft::RefCounted
//#undef Craft_RefCounted_dao_hint_refcount_Craft_COLON2_SharedPtr


#define Craft_RefCounted_dao_hint_extuse_Craft__Referenced()  Craft::RefCounted
#undef Craft_RefCounted_dao_hint_extuse_Craft__Referenced


#define Craft_EventHandler_dao_hint_extuse_Craft__Subscribed()  Craft::EventHandler
#undef Craft_EventHandler_dao_hint_extuse_Craft__Subscribed


#define Craft_Object_dao_hint_macro2_CRAFT__OBJECT()  Craft::Object
#undef Craft_Object_dao_hint_macro2_CRAFT__OBJECT


#define dao_Craft_Graphics_dao_hint_extuse_Craft__Referenced_hint_macro2_CRAFT__OBJECT_hint_unithread() Craft::Graphics

#define dao_Craft_Renderer_dao_hint_extuse_Craft__Referenced_hint_macro2_CRAFT__OBJECT_hint_unithread() Craft::Renderer

#define dao_Craft_Animatable_dao_hint_extuse_Craft__Referenced_hint_macro2_CRAFT__OBJECT_hint_unithread() Craft::Animatable


#define dao_Craft_Vector2_dao_hint_fieldcb() Craft::Vector2

#define dao_Craft_Vector2_operator_43_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::Vector2::operator[](int)

#define dao_Craft_Vector2_operator_12_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::Vector2::operator+(int)


#define dao_Craft_IntVector2_dao_hint_fieldcb() Craft::IntVector2

#define dao_Craft_IntVector2_operator_43_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::IntVector2::operator[](int)

#define dao_Craft_IntVector2_operator_12_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::IntVector2::operator+(int)


#define dao_Craft_Vector3_dao_hint_fieldcb() Craft::Vector3

#define dao_Craft_Vector3_operator_43_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::Vector3::operator[](int)

#define dao_Craft_Vector3_operator_12_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::Vector3::operator+(int)


#define dao_Craft_Vector4_dao_hint_fieldcb() Craft::Vector4

#define dao_Craft_Vector4_operator_43_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::Vector4::operator[](int)

#define dao_Craft_Vector4_operator_12_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::Vector4::operator+(int)


#define dao_Craft_Quaternion_dao_hint_fieldcb() Craft::Quaternion

#define dao_Craft_Quaternion_operator_43_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::Quaternion::operator[](int)

#define dao_Craft_Quaternion_operator_12_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::Quaternion::operator+(int)



#define dao_Craft_Matrix3_operator_43_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::Matrix3::operator[](int)

#define dao_Craft_Matrix3_operator_12_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::Matrix3::operator+(int)


#define dao_Craft_Matrix3x4_operator_43_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::Matrix3x4::operator[](int)

#define dao_Craft_Matrix3x4_operator_12_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::Matrix3x4::operator+(int)


#define dao_Craft_Matrix4_operator_43_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::Matrix4::operator[](int)

#define dao_Craft_Matrix4_operator_12_dao_hint_userwrapper_hint_unsupported( filename, camera_dao_hint_nullable ) Craft::Matrix4::operator+(int)




#define dao_Craft_DaoPlayer_DaoPlayer_dao_hint_userwrapper( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::DaoPlayer::Player(Craft::Context*)
#undef dao_Craft_DaoPlayer_dao_hint_userwrapper

#define dao_Craft_DaoPlayer_LoadScene( filename, camera_dao_hint_nullable ) Craft::DaoPlayer::LoadScene(const Craft::String& , Craft::Camera* )
#undef dao_Craft_DaoPlayer_LoadScene


#define dao_Craft_Object_Object( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Object::Object(Craft::Context*)


#define dao_Craft_ObjectFactory_ObjectFactory( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ObjectFactory::ObjectFactory(Craft::Context*)



#define dao_Craft_Time_Time( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Time::Time(Craft::Context*)

#define dao_Craft_File_File( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::File::File(Craft::Context*)

#define dao_Craft_File_File2( context_dao_hint_implicit_DaoCraft__GetContext, fileName, mode ) Craft::File::File(Craft::Context*,const Craft::String&,Craft::FileMode)

#define dao_Craft_FileSystem_FileSystem( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::FileSystem::FileSystem(Craft::Context*)

#define dao_Craft_FileWatcher_FileWatcher( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::FileWatcher::FileWatcher(Craft::Context*)

#define dao_Craft_PackageFile_PackageFile( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::PackageFile::PackageFile(Craft::Context*)

#define dao_Craft_PackageFile_PackageFile2( context_dao_hint_implicit_DaoCraft__GetContext, fileName, startOffset ) Craft::PackageFile::PackageFile(Craft::Context*,const Craft::String&,unsigned)

#define dao_Craft_Resource_Resource( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Resource::Resource(Craft::Context*)

#define dao_Craft_Image_Image( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Image::Image(Craft::Context*)

#define dao_Craft_Localization_Localization( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Localization::Localization(Craft::Context*)

#define dao_Craft_XMLFile_XMLFile( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::XMLFile::XMLFile(Craft::Context*)


#define dao_Craft_ResourceCache_ResourceCache_dao_hint_userwrapper( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ResourceCache::ResourceCache(Craft::Context*)

#define dao_Craft_ResourceCache_GetImage_dao_hint_userwrapper_hint_nullable(name) Craft::ResourceCache::GetImage(const Craft::String&)

#define dao_Craft_ResourceCache_GetMaterial_dao_hint_userwrapper_hint_nullable(name) Craft::ResourceCache::GetMaterial(const Craft::String&)


#define dao_Craft_Serializable_Serializable( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Serializable::Serializable(Craft::Context*)

#define dao_Craft_ValueAnimation_ValueAnimation( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ValueAnimation::ValueAnimation(Craft::Context*)

#define dao_Craft_ObjectAnimation_ObjectAnimation( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ObjectAnimation::ObjectAnimation(Craft::Context*)

#define dao_Craft_Animatable_Animatable( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Animatable::Animatable(Craft::Context*)

#define dao_Craft_Component_Component( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Component::Component(Craft::Context*)



#define dao_Craft_Component_GetNode_dao_hint_nullable() Craft::Component::GetNode()
#define dao_Craft_Component_GetScene_dao_hint_nullable() Craft::Component::GetScene()
#define dao_Craft_Component_GetComponent_dao_hint_nullable() Craft::Component::GetComponent(Craft::StringHash)



#define dao_Craft_Node_Node( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Node::Node(Craft::Context*)

#define dao_Craft_Node_GetParent_dao_hint_nullable() Craft::Node::GetParent()
#define dao_Craft_Node_GetScene_dao_hint_nullable() Craft::Node::GetScene()

#define dao_Craft_Node_GetChild_dao_hint_nullable( index ) Craft::Node::GetChild(unsigned int)

#define dao_Craft_Node_GetChild2_dao_hint_nullable( name, recursive ) Craft::Node::GetChild(const Craft::String&, bool)

#define dao_Craft_Node_GetChild3_dao_hint_nullable( name, recursive ) Craft::Node::GetChild(const char*, bool)

#define dao_Craft_Node_GetChild4_dao_hint_nullable( nameHash, recursive ) Craft::Node::GetChild(Craft::StringHash, bool)

#define dao_Craft_Node_GetComponent_dao_hint_nullable( nameHash, recursive ) Craft::Node::GetComponent(Craft::StringHash, bool)

#define dao_Craft_Node_GetChildren_dao_hint_userwrapper_hint_daotype_list_LT_Craft_COLON2_Node_GT() Craft::Node::GetChildren()

#define dao_Craft_Node_GetComponents_dao_hint_userwrapper_hint_daotype_list_LT_Craft_COLON2_Component_GT(name,recursive) Craft::Node::GetComponents(const Craft::String&,bool)



#define dao_Craft_SplinePath_SplinePath( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::SplinePath::SplinePath(Craft::Context*)

#define dao_Craft_UnknownComponent_UnknownComponent( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::UnknownComponent::UnknownComponent(Craft::Context*)



#define dao_Craft_Scene_Scene( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Scene::Scene(Craft::Context*)

#define dao_Craft_Scene_GetNode_dao_hint_nullable(id) Craft::Scene::GetNode(unsigned int)
#define dao_Craft_Scene_GetComponent_dao_hint_nullable(id) Craft::Scene::GetComponent(unsigned int)




#define dao_Craft_ScriptComponentFile_ScriptComponentFile( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ScriptComponentFile::ScriptComponentFile(Craft::Context*)

#define dao_Craft_ScriptComponent_ScriptComponent( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ScriptComponent::ScriptComponent(Craft::Context*)


#define dao_Craft_DaoComponentFile_DaoComponentFile( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::DaoComponentFile::DaoComponentFile(Craft::Context*)


#define dao_Craft_DaoComponent_DaoComponent( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::DaoComponent::DaoComponent(Craft::Context*)


#define dao_Craft_Geometry_Geometry( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Geometry::Geometry(Craft::Context*)

#define dao_Craft_Texture_Texture( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Texture::Texture(Craft::Context*)

#define dao_Craft_Texture2D_Texture2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Texture2D::Texture2D(Craft::Context*)

#define dao_Craft_Texture2D_GetData_dao_hint_userwrapper( level, image_dao_hint_daotype_Craft_COLON2_Image ) Craft::Texture2D::GetData(unsigned int,void*)

//#define dao_Craft_Texture2D_GetData_dao_hint_userwrapper_hint_daotype_Craft_COLON2_Image( level, image_dao_hint_ignore ) Craft::Texture2D::GetData(unsigned int,void*)

#define dao_Craft_TextureCube_TextureCube( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::TextureCube::TextureCube(Craft::Context*)

#define dao_Craft_TextureCube_TextureCube2( context_dao_hint_implicit_DaoCraft__GetContext, drawableFlags ) Craft::TextureCube::TextureCube(Craft::Context*,unsigned char)

#define dao_Craft_Drawable_Drawable( context_dao_hint_implicit_DaoCraft__GetContext, drawableFlags ) Craft::Drawable::Drawable(Craft::Context*,unsigned char)

#define dao_Craft_Light_Light( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Light::Light(Craft::Context*)

#define dao_Craft_Camera_Camera( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Camera::Camera(Craft::Context*)


#define dao_Craft_Material_Material( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Material::Material(Craft::Context*)

#define dao_Craft_Material_Clone_dao_hint_userwrapper( cloneName ) Craft::Material::Clone(const Craft::String&)


#define dao_Craft_Shader_Shader( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Shader::Shader(Craft::Context*)


#define dao_Craft_Octree_Octree( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Octree::Octree(Craft::Context*)

//#define dao_Craft_Octree_GetDrawables_dao_hint_userwrapper_hint_daotype_list_LT_Craft_COLON2_Drawable_GT(query_dao_hint_ignore) Craft::Octree::GetDrawables(OctreeQuery&)

#define dao_Craft_Octree_RaycastSingle_dao_hint_userwrapper_hint_daotype_none_OR_tuple_LT_drawable_COLON_Craft_COLON2_Drawable_COMMA_node_COLON_Craft_COLON2_Node_COMMA_position_COLON_Craft_COLON2_Vector3_COMMA_normal_COLON_Craft_COLON2_Vector3_COMMA_texuv_COLON_Craft_COLON2_Vector2_COMMA_distance_COLON_float_GT(query_dao_hint_daotype_Craft_COLON2_Ray_COMMA_maxdist_ASSIGN_MATH__INFINITY_COMMA_texuv_ASSIGN_false) Craft::Octree::RaycastSingle(Craft::RayOctreeQuery&)


#define dao_Craft_View_View( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::View::View(Craft::Context*)

#define dao_Craft_Viewport_Viewport( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Viewport::Viewport(Craft::Context*)

#define dao_Craft_Viewport_Viewport2( context_dao_hint_implicit_DaoCraft__GetContext, scene, camera, renderPath ) Craft::Viewport::Viewport(Craft::Context*,Craft::Scene*,Craft::Camera*,Craft::RenderPath*)

#define dao_Craft_Viewport_Viewport3( context_dao_hint_implicit_DaoCraft__GetContext, scene, camera, rect, renderPath ) Craft::Viewport::Viewport(Craft::Context*,Craft::Scene*,Craft::Camera*,const Craft::IntRect&,Craft::RenderPath*)

#define dao_Craft_Renderer_Renderer_dao_hint_userwrapper( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Renderer::Renderer(Craft::Context*)

#define dao_Craft_Graphics_Graphics_dao_hint_userwrapper( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Graphics::Graphics(Craft::Context*)

#define dao_Craft_Drawable2D_Drawable2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Drawable2D::Drawable2D(Craft::Context*)

#define dao_Craft_Sprite2D_Sprite2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Sprite2D::Sprite2D(Craft::Context*)

#define dao_Craft_SpriteSheet2D_SpriteSheet2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::SpriteSheet2D::SpriteSheet2D(Craft::Context*)

#define dao_Craft_StaticSprite2D_StaticSprite2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::StaticSprite2D::StaticSprite2D(Craft::Context*)

#define dao_Craft_AnimatedSprite2D_AnimatedSprite2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::AnimatedSprite2D::AnimatedSprite2D(Craft::Context*)


#define dao_Craft_AnimationSet2D_AnimationSet2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::AnimationSet2D::AnimationSet2D(Craft::Context*)

#define dao_Craft_ParticleEffect2D_ParticleEffect2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ParticleEffect2D::ParticleEffect2D(Craft::Context*)

#define dao_Craft_ParticleEmitter2D_ParticleEmitter2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ParticleEmitter2D::ParticleEmitter2D(Craft::Context*)

#define dao_Craft_TileMap2D_TileMap2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::TileMap2D::TileMap2D(Craft::Context*)

#define dao_Craft_TileMapLayer2D_TileMapLayer2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::TileMapLayer2D::TileMapLayer2D(Craft::Context*)

#define dao_Craft_Renderer2D_Renderer2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Renderer2D::Renderer2D(Craft::Context*)

#define dao_Craft_RigidBody2D_RigidBody2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::RigidBody2D::RigidBody2D(Craft::Context*)

#define dao_Craft_CollisionShape2D_CollisionShape2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::CollisionShape2D::CollisionShape2D(Craft::Context*)

#define dao_Craft_CollisionBox2D_CollisionBox2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::CollisionBox2D::CollisionBox2D(Craft::Context*)

#define dao_Craft_CollisionPolygon2D_CollisionPolygon2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::CollisionPolygon2D::CollisionPolygon2D(Craft::Context*)

#define dao_Craft_CollisionCircle2D_CollisionCircle2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::CollisionCircle2D::CollisionCircle2D(Craft::Context*)

#define dao_Craft_CollisionEdge2D_CollisionEdge2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::CollisionEdge2D::CollisionEdge2D(Craft::Context*)

#define dao_Craft_CollisionChain2D_CollisionChain2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::CollisionChain2D::CollisionChain2D(Craft::Context*)

#define dao_Craft_Constraint2D_Constraint2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Constraint2D::Constraint2D(Craft::Context*)

#define dao_Craft_ConstraintDistance2D_ConstraintDistance2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ConstraintDistance2D::ConstraintDistance2D(Craft::Context*)

#define dao_Craft_ConstraintFriction2D_ConstraintFriction2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ConstraintFriction2D::ConstraintFriction2D(Craft::Context*)

#define dao_Craft_ConstraintGear2D_ConstraintGear2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ConstraintGear2D::ConstraintGear2D(Craft::Context*)

#define dao_Craft_ConstraintMotor2D_ConstraintMotor2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ConstraintMotor2D::ConstraintMotor2D(Craft::Context*)

#define dao_Craft_ConstraintMouse2D_ConstraintMouse2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ConstraintMouse2D::ConstraintMouse2D(Craft::Context*)

#define dao_Craft_ConstraintPrismatic2D_ConstraintPrismatic2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ConstraintPrismatic2D::ConstraintPrismatic2D(Craft::Context*)

#define dao_Craft_ConstraintPulley2D_ConstraintPulley2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ConstraintPulley2D::ConstraintPulley2D(Craft::Context*)

#define dao_Craft_ConstraintRevolute2D_ConstraintRevolute2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ConstraintRevolute2D::ConstraintRevolute2D(Craft::Context*)

#define dao_Craft_ConstraintRope2D_ConstraintRope2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ConstraintRope2D::ConstraintRope2D(Craft::Context*)

#define dao_Craft_ConstraintWeld2D_ConstraintWeld2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ConstraintWeld2D::ConstraintWeld2D(Craft::Context*)

#define dao_Craft_ConstraintWheel2D_ConstraintWheel2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ConstraintWheel2D::ConstraintWheel2D(Craft::Context*)



#define dao_Craft_PhysicsWorld2D_PhysicsWorld2D( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::PhysicsWorld2D::PhysicsWorld2D(Craft::Context*)

#define dao_Craft_PhysicsWorld2D_GetRigidBody_dao_hint_nullable(point,collisionMask) Craft::PhysicsWorld2D::GetRigidBody(const Craft::Vector2&, unsigned int)

#define dao_Craft_PhysicsWorld2D_GetRigidBody2_dao_hint_nullable(screenX,screenY,collisionMask) Craft::PhysicsWorld2D::GetRigidBody(int, int, unsigned int)




#define dao_Craft_Skeleton_GetRootBone_dao_hint_nullable() Craft::Skeleton::GetRootBone()

#define dao_Craft_Skeleton_GetBone_dao_hint_nullable( index ) Craft::Skeleton::GetBone(unsigned int)

#define dao_Craft_Skeleton_GetBone2_dao_hint_nullable( name ) Craft::Skeleton::GetBone(const Craft::String&)

#define dao_Craft_Skeleton_GetBone3_dao_hint_nullable( name ) Craft::Skeleton::GetBone(const char*)

#define dao_Craft_Skeleton_GetBone4_dao_hint_nullable( nameHash ) Craft::Skeleton::GetBone(Craft::StringHash)



#define dao_Craft_Model_Model( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Model::Model(Craft::Context*)

#define dao_Craft_Animation_Animation( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Animation::Animation(Craft::Context*)

#define dao_Craft_AnimationController_AnimationController( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::AnimationController::AnimationController(Craft::Context*)

#define dao_Craft_StaticModel_StaticModel( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::StaticModel::StaticModel(Craft::Context*)

#define dao_Craft_StaticModel_GetMaterial_dao_hint_nullable( index ) Craft::StaticModel::GetMaterial(unsigned)

#define dao_Craft_Skybox_Skybox( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Skybox::Skybox(Craft::Context*)

#define dao_Craft_StaticModelGroup_StaticModelGroup( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::StaticModelGroup::StaticModelGroup(Craft::Context*)

#define dao_Craft_AnimatedModel_AnimatedModel( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::AnimatedModel::AnimatedModel(Craft::Context*)

#define dao_Craft_CustomGeometry_CustomGeometry( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::CustomGeometry::CustomGeometry(Craft::Context*)

#define dao_Craft_BillboardSet_BillboardSet( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::BillboardSet::BillboardSet(Craft::Context*)

#define dao_Craft_ParticleEffect_ParticleEffect( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ParticleEffect::ParticleEffect(Craft::Context*)

#define dao_Craft_ParticleEmitter_ParticleEmitter( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::ParticleEmitter::ParticleEmitter(Craft::Context*)

#define dao_Craft_TerrainPatch_TerrainPatch( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::TerrainPatch::TerrainPatch(Craft::Context*)

#define dao_Craft_Terrain_Terrain( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Terrain::Terrain(Craft::Context*)


#define dao_Craft_Input_Input_dao_hint_userwrapper( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Input::Input(Craft::Context*)


#define dao_Craft_RigidBody_RigidBody( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::RigidBody::RigidBody(Craft::Context*)

#define dao_Craft_CollisionShape_CollisionShape( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::CollisionShape::CollisionShape(Craft::Context*)

#define dao_Craft_Constraint_Constraint( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Constraint::Constraint(Craft::Context*)

#define dao_Craft_PhysicsWorld_PhysicsWorld( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::PhysicsWorld::PhysicsWorld(Craft::Context*)

#define dao_Craft_Navigable_Navigable( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Navigable::Navigable(Craft::Context*)

#define dao_Craft_NavArea_NavArea( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::NavArea::NavArea(Craft::Context*)

#define dao_Craft_Obstacle_Obstacle( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Obstacle::Obstacle(Craft::Context*)

#define dao_Craft_OffMeshConnection_OffMeshConnection( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::OffMeshConnection::OffMeshConnection(Craft::Context*)

#define dao_Craft_NavigationMesh_NavigationMesh( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::NavigationMesh::NavigationMesh(Craft::Context*)

#define dao_Craft_DynamicNavigationMesh_DynamicNavigationMesh( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::DynamicNavigationMesh::DynamicNavigationMesh(Craft::Context*)

#define dao_Craft_CrowdManager_CrowdManager( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::CrowdManager::CrowdManager(Craft::Context*)

#define dao_Craft_CrowdAgent_CrowdAgent( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::CrowdAgent::CrowdAgent(Craft::Context*)

#define dao_Craft_UIDragObject_UIDragObject( context_dao_hint_implicit_DaoCraft__GetContext, object, text, icon ) Craft::UIKit::UIDragObject::UIDragObject(Craft::Context*,Craft::Object*,const Craft::String&,const Craft::String&)


#define dao_Craft_UIWidget_UIWidget( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UIWidget::UIWidget(Craft::Context*,bool)

#define dao_Craft_UIWidget_GetParent_dao_hint_nullable() Craft::UIKit::UIWidget::GetParent()
#define dao_Craft_UIWidget_GetContentRoot_dao_hint_nullable() Craft::UIKit::UIWidget::GetContentRoot()
#define dao_Craft_UIWidget_GetFirstChild_dao_hint_nullable() Craft::UIKit::UIWidget::GetFirstChild()
#define dao_Craft_UIWidget_GetNext_dao_hint_nullable() Craft::UIKit::UIWidget::GetNext()
#define dao_Craft_UIWidget_GetWidget_dao_hint_nullable(id) Craft::UIKit::UIWidget::GetWidget(const Craft::String&)
#define dao_Craft_UIWidget_GetView_dao_hint_nullable() Craft::UIKit::UIWidget::GetView()


#define dao_Craft_UIButton_UIButton( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UIButton::UIButton(Craft::Context*,bool)

#define dao_Craft_UICheckBox_UICheckBox( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UICheckBox::UICheckBox(Craft::Context*,bool)

#define dao_Craft_UIClickLabel_UIClickLabel( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UIClickLabel::UIClickLabel(Craft::Context*,bool)

#define dao_Craft_UIContainer_UIContainer( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UIContainer::UIContainer(Craft::Context*,bool)

#define dao_Craft_UIDimmer_UIDimmer( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UIDimmer::UIDimmer(Craft::Context*,bool)

#define dao_Craft_UIDragDrop_UIDragDrop( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::UIKit::UIDragDrop::UIDragDrop(Craft::Context*)

#define dao_Craft_UIEditField_UIEditField( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UIEditField::UIEditField(Craft::Context*,bool)

#define dao_Craft_UIFontDescription_UIFontDescription( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::UIKit::UIFontDescription::UIFontDescription(Craft::Context*)

#define dao_Craft_UIImageWidget_UIImageWidget( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UIImageWidget::UIImageWidget(Craft::Context*,bool)

#define dao_Craft_UIInlineSelect_UIInlineSelect( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UIInlineSelect::UIInlineSelect(Craft::Context*,bool)

#define dao_Craft_UILayoutParams_UILayoutParams( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::UIKit::UILayoutParams::UILayoutParams(Craft::Context*)

#define dao_Craft_UILayout_UILayout( context_dao_hint_implicit_DaoCraft__GetContext, axis, createWidget ) Craft::UIKit::UILayout::UILayout(Craft::Context*,Craft::UIKit::UI_AXIS,bool)

#define dao_Craft_UIListView_UIListView( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UIListView::UIListView(Craft::Context*,bool)

#define dao_Craft_UISelectItem_UISelectItem( context_dao_hint_implicit_DaoCraft__GetContext, str, id, skinImage ) Craft::UIKit::UISelectItem::UISelectItem(Craft::Context*,const Craft::String&,const Craft::String&,const Craft::String&)

#define dao_Craft_UISelectItemSource_UISelectItemSource( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::UIKit::UISelectItemSource::UISelectItemSource(Craft::Context*)

#define dao_Craft_UIMenuWindow_UIMenuWindow( context_dao_hint_implicit_DaoCraft__GetContext, target, id ) Craft::UIKit::UIMenuWindow::UIMenuWindow(Craft::Context*,Craft::UIKit::UIWidget*,const Craft::String&)

#define dao_Craft_UIMenuItem_UIMenuItem( context_dao_hint_implicit_DaoCraft__GetContext, str, id, shortcut, skinBg ) Craft::UIKit::UIMenuItem::UIMenuItem(Craft::Context*,const Craft::String&,const Craft::String&,const Craft::String&,const Craft::String&)

#define dao_Craft_UIMenuItemSource_UIMenuItemSource( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::UIKit::UIMenuItemSource::UIMenuItemSource(Craft::Context*)

#define dao_Craft_UIPopupWindow_UIPopupWindow( context_dao_hint_implicit_DaoCraft__GetContext, createWidget, target, id ) Craft::UIKit::UIPopupWindow::UIPopupWindow(Craft::Context*,bool,Craft::UIKit::UIWidget*,const Craft::String&)

#define dao_Craft_UIRenderer_UIRenderer( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::UIKit::UIRenderer::UIRenderer(Craft::Context*)

#define dao_Craft_UISceneView_UISceneView( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UISceneView::UISceneView(Craft::Context*,bool)

#define dao_Craft_UISceneView_SetView( scene, camera_dao_hint_nullable ) Craft::UIKit::UISceneView::SetView(Craft::Scene*,Craft::Camera*)

#define dao_Craft_UIScrollContainer_UIScrollContainer( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UIScrollContainer::UIScrollContainer(Craft::Context*,bool)

#define dao_Craft_UISection_UISection( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UISection::UISection(Craft::Context*,bool)

#define dao_Craft_UISelectDropdown_UISelectDropdown( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UISelectDropdown::UISelectDropdown(Craft::Context*,bool)

#define dao_Craft_UISelectList_UISelectList( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UISelectList::UISelectList(Craft::Context*,bool)

#define dao_Craft_UISeparator_UISeparator( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UISeparator::UISeparator(Craft::Context*,bool)

#define dao_Craft_UISkinImage_UISkinImage( context_dao_hint_implicit_DaoCraft__GetContext, bitmapID, createWidget ) Craft::UIKit::UISkinImage::UISkinImage(Craft::Context*,const Craft::String&,bool)

#define dao_Craft_UITabContainer_UITabContainer( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UITabContainer::UITabContainer(Craft::Context*,bool)

#define dao_Craft_UITextField_UITextField( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UITextField::UITextField(Craft::Context*,bool)

#define dao_Craft_UITextureWidget_UITextureWidget( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UITextureWidget::UITextureWidget(Craft::Context*,bool)

#define dao_Craft_UIView_UIView( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::UIKit::UIView::UIView(Craft::Context*)

#define dao_Craft_UIWindow_UIWindow( context_dao_hint_implicit_DaoCraft__GetContext, createWidget ) Craft::UIKit::UIWindow::UIWindow(Craft::Context*,bool)

#define dao_Craft_UIMessageWindow_UIMessageWindow( context_dao_hint_implicit_DaoCraft__GetContext, target, id, createWidget ) Craft::UIKit::UIMessageWindow::UIMessageWindow(Craft::Context*,Craft::UIKit::UIWidget*,const Craft::String&,bool)

#define dao_Craft_UI_UI( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::UIKit::UI::UI(Craft::Context*)



#define dao_Craft_Object_SubscribeEvent_dao_hint_userwrapper( eventType_dao_hint_daotype_string, handler ) Craft::Object::SubscribeToEvent(Craft::StringHash,Craft::EventHandler*)

#define dao_Craft_Object_SubscribeEvent2_dao_hint_userwrapper( sender, eventType_dao_hint_daotype_string, handler ) Craft::Object::SubscribeToEvent(Craft::Object*,Craft::StringHash,Craft::EventHandler*)

#define dao_Craft_Object_UnsubscribeFromEvent_dao_hint_userwrapper( eventType_dao_hint_daotype_string ) Craft::Object::UnsubscribeFromEvent(Craft::StringHash)

#define dao_Craft_Object_UnsubscribeFromEvent2_dao_hint_userwrapper( sender, eventType_dao_hint_daotype_string ) Craft::Object::UnsubscribeFromEvent(Craft::Object*,Craft::StringHash)

#define dao_Craft_Object_HasSubscribedToEvent_dao_hint_userwrapper( eventType_dao_hint_daotype_string ) Craft::Object::HasSubscribedToEvent(Craft::StringHash)

#define dao_Craft_Object_HasSubscribedToEvent2_dao_hint_userwrapper( sender, eventType_dao_hint_daotype_string ) Craft::Object::HasSubscribedToEvent(Craft::Object*,Craft::StringHash)

#define dao_Craft_Object_SendEvent_dao_hint_userwrapper( eventType_dao_hint_daotype_string ) Craft::Object::SendEvent(Craft::StringHash)

#define dao_Craft_Object_SendEvent2_dao_hint_userwrapper( eventType_dao_hint_daotype_string, eventData ) Craft::Object::SendEvent(Craft::StringHash,Craft::VariantMap&)



#define dao_Craft_Node_GetAC_dao_hint_userwrapper_hint_nullable( recursive ) Craft::Node::GetAnimationController(bool)

#define dao_Craft_Node_GetDC_dao_hint_userwrapper_hint_nullable( recursive ) Craft::Node::GetDaoComponent(const Craft::String&,bool)

#define dao_Craft_Node_GetOrCreateDC_dao_hint_userwrapper_hint_nullable(mode,id) Craft::Node::GetOrCreateDaoComponent(Craft::CreateMode,unsigned int)

#define dao_Craft_Node_CreateDC_dao_hint_userwrapper_hint_nullable(mode,id) Craft::Node::CreateDaoComponent(Craft::CreateMode,unsigned int)

#define dao_Craft_Node_CreateCG_dao_hint_userwrapper() Craft::Node::CreateCustomGeometry()

#define dao_Craft_Node_GetCG_dao_hint_userwrapper_hint_nullable() Craft::Node::GetCustomGeometry()

#define dao_Craft_Node_CreateRB_dao_hint_userwrapper() Craft::Node::CreateRigidBody()

#define dao_Craft_Node_GetRB_dao_hint_userwrapper_hint_nullable() Craft::Node::GetRigidBody()

#define dao_Craft_Node_CreateCS_dao_hint_userwrapper() Craft::Node::CreateCollisionShape()

#define dao_Craft_Node_GetCS_dao_hint_userwrapper_hint_nullable() Craft::Node::GetCollisionShape()

#define dao_Craft_Node_GetOctree_dao_hint_userwrapper_hint_nullable() Craft::Node::GetOctree()

#define dao_Craft_DaoComponent_SetData_dao_hint_userwrapper( key, data_dao_hint_daotype_any ) Craft::DaoComponent::SetData(const char*,void*)

#define dao_Craft_DaoComponent_GetData_dao_hint_userwrapper_hint_daotype_any( key ) Craft::DaoComponent::GetData(const char*)

#define dao_Craft_Scene_GetMainCamera_dao_hint_userwrapper_hint_nullable() Craft::Scene::GetMainCamera()



#define dao_Craft_RigidBody_dao_hint_fieldcb() Craft::RigidBody


#define Craft_UIWidget_dao_hint_cxxbase_WidgetBase()  Craft::UIKit::UIWidget
#undef Craft_UIWidget_dao_hint_cxxbase_WidgetBase

#define dao_Craft_UIWidget_OnEvent_dao_hint_unsupported( event ) Craft::UIKit::UIWidget::OnEvent(const tb::TBWidgetEvent&)

#define dao_Craft_UIWidget_OnEventType_dao_hint_unsupported( etype ) Craft::UIKit::UIWidget::OnEventType(const tb::TBWidgetEvent&)

//#define dao_Craft_UIWidget_OnClick_dao_hint_unsupported() Craft::UIKit::UIWidget::OnClick()

#define dao_Craft_UIButton_OnEvent_dao_hint_unsupported( event ) Craft::UIKit::UIButton::OnEvent(const tb::TBWidgetEvent&)

#define dao_Craft_UICheckBox_OnEvent_dao_hint_unsupported( event ) Craft::UIKit::UICheckBox::OnEvent(const tb::TBWidgetEvent&)

#define dao_Craft_UIClickLabel_OnEvent_dao_hint_unsupported( event ) Craft::UIKit::UIClickLabel::OnEvent(const tb::TBWidgetEvent&)

#define dao_Craft_UIEditField_OnEvent_dao_hint_unsupported( event ) Craft::UIKit::UIEditField::OnEvent(const tb::TBWidgetEvent&)

#define dao_Craft_UIListView_OnEvent_dao_hint_unsupported( event ) Craft::UIKit::UIListView::OnEvent(const tb::TBWidgetEvent&)

#define dao_Craft_UIMenuWindow_OnEvent_dao_hint_unsupported( event ) Craft::UIKit::UIMenuWindow::OnEvent(const tb::TBWidgetEvent&)

#define dao_Craft_UIPopupWindow_OnEvent_dao_hint_unsupported( event ) Craft::UIKit::UIPopupWindow::OnEvent(const tb::TBWidgetEvent&)

#define dao_Craft_UISelectDropdown_OnEvent_dao_hint_unsupported( event ) Craft::UIKit::UISelectDropdown::OnEvent(const tb::TBWidgetEvent&)

#define dao_Craft_UISelectList_OnEvent_dao_hint_unsupported( event ) Craft::UIKit::UISelectList::OnEvent(const tb::TBWidgetEvent&)

#define dao_Craft_UITextField_OnEvent_dao_hint_unsupported( event ) Craft::UIKit::UITextField::OnEvent(const tb::TBWidgetEvent&)

#define dao_Craft_UIMessageWindow_OnEvent_dao_hint_unsupported( event ) Craft::UIKit::UIMessageWindow::OnEvent(const tb::TBWidgetEvent&)


#define dao_Craft_SplitPath_dao_hint_userwrapper_x_hint_daotype_tuple_LT_pathName_COLON_string_COMMA_fileName_COLON_string_COMMA_extension_COLON_string_GT( fullPath, pathName_dao_hint_ignore, fileName_dao_hint_ignore, extension_dao_hint_ignore, lowercaseExtension ) Craft::SplitPath(const Craft::String&,Craft::String&,Craft::String&,Craft::String&,bool)
#undef dao_Craft_SplitPath_dao_hint_userwrapper



#define dao_Craft_Engine_Engine_dao_hint_userwrapper( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::Engine::Engine(Craft::Context*)


#define dao_Craft_DebugHud_DebugHud( context_dao_hint_implicit_DaoCraft__GetContext ) Craft::DebugHud::DebugHud(Craft::Context*)


#include <stdlib.h>
#include "DaoCraftEngine.h"



enum LoopMode2D
{
    LM_DEFAULT = 0,
    LM_FORCE_LOOPED,
    LM_FORCE_CLAMPED
};


namespace tb
{

class TBWidgetEvent;

}


namespace Craft {


class String
{
public:

    String();
    String(const String& str);
    String(const char* str);
    String(char* str);
    String(const char* str, unsigned length);
    String(const wchar_t* str);
    String(wchar_t* str);

    String(int value);
    String(short value);
    String(long value);
    String(long long value);
    String(unsigned value);
    String(unsigned short value);
    String(unsigned long value);
    String(unsigned long long value);
    String(float value);
    String(double value);
    String(bool value);
    String(char value);
    String(char value, unsigned length);

    char& At(unsigned index);
    const char& At(unsigned index) const;

    void Replace(char replaceThis, char replaceWith, bool caseSensitive = true);
    void Replace(const String& replaceThis, const String& replaceWith, bool caseSensitive = true);
    void Replace(unsigned pos, unsigned length, const String& replaceWith);
    void Replace(unsigned pos, unsigned length, const char* replaceWith);

    String Replaced(char replaceThis, char replaceWith, bool caseSensitive = true) const;
    String Replaced(const String& replaceThis, const String& replaceWith, bool caseSensitive = true) const;
    String& Append(const String& str);
    String& Append(const char* str);
    String& Append(char c);
    String& Append(const char* str, unsigned length);

    void Insert(unsigned pos, const String& str);
    void Insert(unsigned pos, char c);
    void Erase(unsigned pos, unsigned length = 1);
    void Resize(unsigned newLength);
    void Reserve(unsigned newCapacity);
    void Compact();
    void Clear();
    void Swap(String& str);

    char Front() const;
    char Back() const;

    String Substring(unsigned pos) const;
    String Substring(unsigned pos, unsigned length) const;
    String Trimmed() const;
    String ToUpper() const;
    String ToLower() const;

    unsigned Find(const String& str, unsigned startPos = 0, bool caseSensitive = true) const;
    unsigned Find(char c, unsigned startPos = 0, bool caseSensitive = true) const;
    unsigned FindLast(const String& str, unsigned startPos = NPOS, bool caseSensitive = true) const;
    unsigned FindLast(char c, unsigned startPos = NPOS, bool caseSensitive = true) const;
    bool StartsWith(const String& str, bool caseSensitive = true) const;
    bool EndsWith(const String& str, bool caseSensitive = true) const;

    const char* CString() const;

    unsigned Length() const;
    unsigned Capacity() const;

    bool Empty() const;

    int Compare(const String& str, bool caseSensitive = true) const;
    int Compare(const char* str, bool caseSensitive = true) const;

    bool Contains(const String& str, bool caseSensitive = true) const;
    bool Contains(char c, bool caseSensitive = true) const;

    void SetUTF8FromLatin1(const char* str);
    void SetUTF8FromWChar(const wchar_t* str);
    unsigned LengthUTF8() const;
    unsigned ByteOffsetUTF8(unsigned index) const;
    unsigned NextUTF8Char(unsigned& byteOffset) const;
    unsigned AtUTF8(unsigned index) const;
    void ReplaceUTF8(unsigned index, unsigned unicodeChar);
    String& AppendUTF8(unsigned unicodeChar);
    String SubstringUTF8(unsigned pos) const;
    String SubstringUTF8(unsigned pos, unsigned length) const;

    unsigned ToHash() const;

    static void EncodeUTF8(char*& dest, unsigned unicodeChar);
    static unsigned DecodeUTF8(const char*& src);

    static unsigned CStringLength(const char* str);

    static int Compare(const char* str1, const char* str2, bool caseSensitive);

    void Replace(unsigned pos, unsigned length, const char* srcStart, unsigned srcLength);

    static const unsigned NPOS = 0xffffffff;
    static const unsigned MIN_CAPACITY = 8;
};


////////////////////////
// From Craft/Math:
////////////////////////

class Matrix4;

static const float MATH_PI = 3.14159265358979323846264338327950288f;
static const float MATH_HALF_PI = MATH_PI * 0.5f;
static const int MATH_MIN_INT = 0x80000000;
static const int MATH_MAX_INT = 0x7fffffff;
static const unsigned MATH_MIN_UNSIGNED = 0x00000000;
static const unsigned MATH_MAX_UNSIGNED = 0xffffffff;

static const float MATH_EPSILON = 0.000001f;
static const float MATH_LARGE_EPSILON = 0.00005f;
static const float MATH_MIN_NEARCLIP = 0.01f;
static const float MATH_MAX_FOV = 160.0f;
static const float MATH_LARGE_VALUE = 100000000.0f;
static const float MATH_INFINITY = (float) 0.0; // Just for generation;
static const float MATH_DEGTORAD = MATH_PI / 180.0f;
static const float MATH_DEGTORAD_2 = MATH_PI / 360.0f;
static const float MATH_RADTODEG = 1.0f / MATH_DEGTORAD;


enum Intersection
{
    OUTSIDE,
    INTERSECTS,
    INSIDE
};

bool Equals(float lhs, float rhs);

float Lerp(float lhs, float rhs, float t);
double Lerp(double lhs, double rhs, float t);

float Min(float lhs, float rhs);
float Max(float lhs, float rhs);
float Abs(float value);
float Sign(float value);

bool IsNaN(float value);

float Clamp(float value, float min, float max);
float SmoothStep(float lhs, float rhs, float t);

float Sin(float angle);
float Cos(float angle);
float Tan(float angle);
float Asin(float x);
float Acos(float x);
float Atan(float x);
float Atan2(float y, float x);

int Min(int lhs, int rhs);
int Max(int lhs, int rhs);
int Abs(int value);

int Clamp(int value, int min, int max);

bool IsPowerOfTwo(unsigned value);

unsigned NextPowerOfTwo(unsigned value);
unsigned CountSetBits(unsigned value);
unsigned SDBMHash(unsigned hash, unsigned char c);

float Random();
float Random(float range);
float Random(float min, float max);

int Random(int range);
int Random(int min, int max);

float RandomNormal(float meanValue, float variance);

unsigned short FloatToHalf(float value);

float HalfToFloat(unsigned short value);


class Vector2
{
public:
    Vector2();
    Vector2(const Vector2& other);
    Vector2(float x, float y);

    void Normalize();

    float Length() const;
    float LengthSquared() const;

    float DotProduct(const Vector2& rhs) const;
    float AbsDotProduct(const Vector2& rhs) const;

    Vector2 Abs() const;
    Vector2 Lerp(const Vector2& rhs, float t) const;

    bool Equals(const Vector2& rhs) const;
    bool IsNaN() const;

    Vector2 Normalized() const;

    String ToString() const;

	float operator []( int i );
	float operator +( int i );

    float x_;
    float y_;

    static const Vector2 ZERO;
    static const Vector2 LEFT;
    static const Vector2 RIGHT;
    static const Vector2 UP;
    static const Vector2 DOWN;
    static const Vector2 ONE;
};



class IntVector2
{
public:
    IntVector2();
    IntVector2(const IntVector2& other);
    IntVector2(int x, int y);

    String ToString() const;

	float operator []( int i );
	float operator +( int i );

    int x_;
    int y_;

    static const IntVector2 ZERO;
};



class Vector3
{
public:
    Vector3();
    Vector3(const Vector3& other);
    Vector3(const Vector2& vector, float z);
    Vector3(const Vector2& vector);
    Vector3(float x, float y, float z);
    Vector3(float x, float y);

    void Normalize();

    float Length() const;
    float LengthSquared() const;

    float DotProduct(const Vector3& rhs) const;
    float AbsDotProduct(const Vector3& rhs) const;

    Vector3 CrossProduct(const Vector3& rhs) const;
    Vector3 Abs() const;
    Vector3 Lerp(const Vector3& rhs, float t) const;

    bool Equals(const Vector3& rhs) const;

    float Angle(const Vector3& rhs) const;

    bool IsNaN() const;

    Vector3 Normalized() const;

    String ToString() const;

	float operator []( int i );
	float operator +( int i );

    float x_;
    float y_;
    float z_;

    static const Vector3 ZERO;
    static const Vector3 LEFT;
    static const Vector3 RIGHT;
    static const Vector3 UP;
    static const Vector3 DOWN;
    static const Vector3 FORWARD;
    static const Vector3 BACK;
    static const Vector3 ONE;
};


class Vector4
{
public:
    Vector4();
    Vector4(const Vector4& other);
    Vector4(const Vector3& vector, float w);
    Vector4(float x, float y, float z, float w);

    float DotProduct(const Vector4& rhs) const;
    float AbsDotProduct(const Vector4& rhs) const;

    Vector4 Abs() const;
    Vector4 Lerp(const Vector4& rhs, float t) const;

    bool Equals(const Vector4& rhs) const;
    bool IsNaN() const;

    String ToString() const;

	float operator []( int i );
	float operator +( int i );

    float x_;
    float y_;
    float z_;
    float w_;

    static const Vector4 ZERO;
    static const Vector4 ONE;
};





class Matrix3
{
public:
    Matrix3();
    Matrix3(const Matrix3& other);
    Matrix3(float v00, float v01, float v02,
            float v10, float v11, float v12,
            float v20, float v21, float v22);

    void SetScale(const Vector3& scale);
    void SetScale(float scale);

    Vector3 Scale() const;

    Matrix3 Transpose() const;
    Matrix3 Scaled(const Vector3& scale) const;

    bool Equals(const Matrix3& rhs) const;

    Matrix3 Inverse() const;

    String ToString() const;

	float operator []( int i );
	float operator +( int i );

    float m00_;
    float m01_;
    float m02_;
    float m10_;
    float m11_;
    float m12_;
    float m20_;
    float m21_;
    float m22_;

    static void BulkTranspose(float* dest, const float* src, unsigned count);

    static const Matrix3 ZERO;
    static const Matrix3 IDENTITY;
};



class Quaternion
{
public:
    Quaternion();
    Quaternion(const Quaternion& other);
    Quaternion(float w, float x, float y, float z);
    Quaternion(const float* data);
    Quaternion(float angle, const Vector3& axis);
    Quaternion(float angle);
    Quaternion(float x, float y, float z);
    Quaternion(const Vector3& start, const Vector3& end);
    Quaternion(const Vector3& xAxis, const Vector3& yAxis, const Vector3& zAxis);
    Quaternion(const Matrix3& matrix);

    void FromAngleAxis(float angle, const Vector3& axis);
    void FromEulerAngles(float x, float y, float z);
    void FromRotationTo(const Vector3& start, const Vector3& end);
    void FromAxes(const Vector3& xAxis, const Vector3& yAxis, const Vector3& zAxis);
    void FromRotationMatrix(const Matrix3& matrix);
    //bool FromLookRotation(const Vector3& direction, const Vector3& up = Vector3::UP);

    void Normalize();

    Quaternion Normalized() const;
    Quaternion Inverse() const;

    float LengthSquared() const;
    float DotProduct(const Quaternion& rhs) const;

    bool Equals(const Quaternion& rhs) const;
    bool IsNaN() const;

    Quaternion Conjugate() const;

    Vector3 EulerAngles() const;

    float YawAngle() const;
    float PitchAngle() const;
    float RollAngle() const;

    Matrix3 RotationMatrix() const;

    Quaternion Slerp(Quaternion rhs, float t) const;
    Quaternion Nlerp(Quaternion rhs, float t, bool shortestPath = false) const;

    String ToString() const;

	float operator []( int i );
	float operator +( int i );

    float w_;
    float x_;
    float y_;
    float z_;

    static const Quaternion IDENTITY;
};




class Matrix3x4
{
public:
    Matrix3x4();
    Matrix3x4(const Matrix3x4& other);
    Matrix3x4(const Matrix3& matrix);
    Matrix3x4(const Matrix4& matrix);
    Matrix3x4(float v00, float v01, float v02, float v03,
              float v10, float v11, float v12, float v13,
              float v20, float v21, float v22, float v23);

    Matrix3x4(const Vector3& translation, const Quaternion& rotation, float scale);
    Matrix3x4(const Vector3& translation, const Quaternion& rotation, const Vector3& scale);

    void SetTranslation(const Vector3& translation);
    void SetRotation(const Matrix3& rotation);
    void SetScale(const Vector3& scale);
    void SetScale(float scale);

    Matrix3 ToMatrix3() const;
    Matrix4 ToMatrix4() const;

    Matrix3 RotationMatrix() const;
    Vector3 Translation() const;

    Quaternion Rotation() const;

    Vector3 Scale() const;

    bool Equals(const Matrix3x4& rhs) const;

    void Decompose(Vector3& translation, Quaternion& rotation, Vector3& scale) const;

    Matrix3x4 Inverse() const;

    String ToString() const;

	float operator []( int i );
	float operator +( int i );

    float m00_;
    float m01_;
    float m02_;
    float m03_;
    float m10_;
    float m11_;
    float m12_;
    float m13_;
    float m20_;
    float m21_;
    float m22_;
    float m23_;

    static const Matrix3x4 ZERO;
    static const Matrix3x4 IDENTITY;
};




class Matrix4
{
public:
    Matrix4();
    Matrix4(const Matrix4& other);
    Matrix4(const Matrix3& matrix);
    Matrix4(float v00, float v01, float v02, float v03,
            float v10, float v11, float v12, float v13,
            float v20, float v21, float v22, float v23,
            float v30, float v31, float v32, float v33);

    void SetTranslation(const Vector3& translation);
    void SetRotation(const Matrix3& rotation);
    void SetScale(const Vector3& scale);
    void SetScale(float scale);

    Matrix3 ToMatrix3() const;
    Matrix3 RotationMatrix() const;
    Vector3 Translation() const;

    Quaternion Rotation() const;

    Vector3 Scale() const;

    Matrix4 Transpose() const;

    bool Equals(const Matrix4& rhs) const;

    void Decompose(Vector3& translation, Quaternion& rotation, Vector3& scale) const;

    Matrix4 Inverse() const;

    String ToString() const;

	float operator []( int i );
	float operator +( int i );

    float m00_;
    float m01_;
    float m02_;
    float m03_;
    float m10_;
    float m11_;
    float m12_;
    float m13_;
    float m20_;
    float m21_;
    float m22_;
    float m23_;
    float m30_;
    float m31_;
    float m32_;
    float m33_;

    static void BulkTranspose(float* dest, const float* src, unsigned count);

    static const Matrix4 ZERO;
    static const Matrix4 IDENTITY;
};




class Plane;
class Rect;
class Sphere;
class Polyhedron;
class BoundingBox;
class Frustum;


class Ray
{
public:
    Ray();
    Ray(const Ray& other);
    Ray(const Vector3& origin, const Vector3& direction);

    void Define(const Vector3& origin, const Vector3& direction);

    Vector3 Project(const Vector3& point) const;

    float Distance(const Vector3& point) const;

    Vector3 ClosestPoint(const Ray& ray) const;

    float HitDistance(const Plane& plane) const;
    float HitDistance(const BoundingBox& box) const;
    float HitDistance(const Frustum& frustum, bool solidInside = true) const;
    float HitDistance(const Sphere& sphere) const;

    float HitDistance(const Vector3& v0, const Vector3& v1, const Vector3& v2, Vector3* outNormal = 0, Vector3* outBary = 0) const;

    float HitDistance(const void* vertexData, unsigned vertexStride, unsigned vertexStart, unsigned vertexCount, Vector3* outNormal = 0, Vector2* outUV = 0, unsigned uvOffset = 0) const;

    float HitDistance(const void* vertexData, unsigned vertexStride, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, Vector3* outNormal = 0, Vector2* outUV = 0, unsigned uvOffset = 0) const;

    bool InsideGeometry(const void* vertexData, unsigned vertexSize, unsigned vertexStart, unsigned vertexCount) const;

    bool InsideGeometry(const void* vertexData, unsigned vertexSize, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount) const;

    Ray Transformed(const Matrix3x4& transform) const;

    Vector3 origin_;
    Vector3 direction_;
};




class Plane
{
public:
    Plane();
    Plane(const Plane& other);
    Plane(const Vector3& v0, const Vector3& v1, const Vector3& v2);
    Plane(const Vector3& normal, const Vector3& point);
    Plane(const Vector4& plane);

    void Define(const Vector3& v0, const Vector3& v1, const Vector3& v2);
    void Define(const Vector3& normal, const Vector3& point);
    void Define(const Vector4& plane);

    void Transform(const Matrix3& transform);
    void Transform(const Matrix3x4& transform);
    void Transform(const Matrix4& transform);

    Vector3 Project(const Vector3& point) const;

    float Distance(const Vector3& point) const;

    Vector3 Reflect(const Vector3& direction) const;

    Matrix3x4 ReflectionMatrix() const;

    Plane Transformed(const Matrix3& transform) const;
    Plane Transformed(const Matrix3x4& transform) const;
    Plane Transformed(const Matrix4& transform) const;

    Vector4 ToVector4() const;

    Vector3 normal_;
    Vector3 absNormal_;

    float d_;

    static const Plane UP;
};




class Rect
{
public:
    Rect();
    Rect(const Rect& other);
    Rect(const Vector2& min, const Vector2& max);
    Rect(float left, float top, float right, float bottom);
    Rect(const Vector4& vector);

    void Define(const Rect& rect);
    void Define(const Vector2& min, const Vector2& max);
    void Define(const Vector2& point);

    void Merge(const Vector2& point);
    void Merge(const Rect& rect);

    void Clear();

    void Clip(const Rect& rect);

    Vector2 Center() const;
    Vector2 Size() const;
    Vector2 HalfSize() const;

    bool Equals(const Rect& rhs) const;

    Intersection IsInside(const Vector2& point) const;

    Vector4 ToVector4() const;

    String ToString() const;

    Vector2 min_;
    Vector2 max_;

    static const Rect FULL;
    static const Rect POSITIVE;
    static const Rect ZERO;
};



class IntRect
{
public:
    IntRect();
    IntRect(const IntRect& other);
    IntRect(int left, int top, int right, int bottom);

    IntVector2 Size() const;

    int Width() const;
    int Height() const;

    Intersection IsInside(const IntVector2& point) const;

    String ToString() const;

    int left_;
    int top_;
    int right_;
    int bottom_;

    static const IntRect ZERO;
};



class Sphere
{
public:
    Sphere();
    Sphere(const Sphere& other);
    Sphere(const Vector3& center, float radius);
    Sphere(const Vector3* vertices, unsigned count);
    Sphere(const BoundingBox& box);
    Sphere(const Frustum& frustum);
    Sphere(const Polyhedron& poly);

    void Define(const Sphere& sphere);
    void Define(const Vector3& center, float radius);
    void Define(const Vector3* vertices, unsigned count);
    void Define(const BoundingBox& box);
    void Define(const Frustum& frustum);
    void Define(const Polyhedron& poly);

    void Merge(const Vector3& point);
    void Merge(const Vector3* vertices, unsigned count);
    void Merge(const BoundingBox& box);
    void Merge(const Frustum& frustum);
    void Merge(const Polyhedron& poly);
    void Merge(const Sphere& sphere);

    void Clear();

    Intersection IsInside(const Vector3& point) const;
    Intersection IsInside(const Sphere& sphere) const;
    Intersection IsInsideFast(const Sphere& sphere) const;
    Intersection IsInside(const BoundingBox& box) const;
    Intersection IsInsideFast(const BoundingBox& box) const;

    float Distance(const Vector3& point) const;

    Vector3 center_;
    float   radius_;
};



class Polyhedron
{
public:
    Polyhedron();
    Polyhedron(const Polyhedron& other);
    Polyhedron(const BoundingBox& box);
    Polyhedron(const Frustum& frustum);

    void Define(const BoundingBox& box);
    void Define(const Frustum& frustum);

    void AddFace(const Vector3& v0, const Vector3& v1, const Vector3& v2);
    void AddFace(const Vector3& v0, const Vector3& v1, const Vector3& v2, const Vector3& v3);

    void Clip(const Plane& plane);
    void Clip(const BoundingBox& box);
    void Clip(const Frustum& box);

    void Clear();

    void Transform(const Matrix3& transform);
    void Transform(const Matrix3x4& transform);

    Polyhedron Transformed(const Matrix3& transform) const;
    Polyhedron Transformed(const Matrix3x4& transform) const;

    bool Empty() const;
};



class BoundingBox
{
public:
    BoundingBox();
    BoundingBox(const BoundingBox& other);
    BoundingBox(const Rect& rect);
    BoundingBox(const Vector3& min, const Vector3& max);
    BoundingBox(float min, float max);
    //BoundingBox(float minx, float miny, float minz, float maxx, float maxy, float maxz);
    BoundingBox(const Vector3* vertices, unsigned count);
    BoundingBox(const Frustum& frustum);
    BoundingBox(const Polyhedron& poly);
    BoundingBox(const Sphere& sphere);

    void Define(const BoundingBox& box);
    void Define(const Rect& rect);
    void Define(const Vector3& min, const Vector3& max);
    void Define(float min, float max);
    void Define(const Vector3& point);
    void Define(const Vector3* vertices, unsigned count);
    void Define(const Frustum& frustum);
    void Define(const Polyhedron& poly);
    void Define(const Sphere& sphere);

    void Merge(const Vector3& point);
    void Merge(const BoundingBox& box);
    void Merge(const Vector3* vertices, unsigned count);
    void Merge(const Frustum& frustum);
    void Merge(const Polyhedron& poly);
    void Merge(const Sphere& sphere);
    void Clip(const BoundingBox& box);
    void Transform(const Matrix3& transform);
    void Transform(const Matrix3x4& transform);
    void Clear();
	bool Defined() const;

    Vector3 Center() const;
    Vector3 Size() const;
    Vector3 HalfSize() const;

    BoundingBox Transformed(const Matrix3& transform) const;
    BoundingBox Transformed(const Matrix3x4& transform) const;
    Rect Projected(const Matrix4& projection) const;

    Intersection IsInside(const Vector3& point) const;
    Intersection IsInside(const BoundingBox& box) const;
    Intersection IsInsideFast(const BoundingBox& box) const;
    Intersection IsInside(const Sphere& sphere) const;
    Intersection IsInsideFast(const Sphere& sphere) const;

    String ToString() const;

    Vector3 min_;
    Vector3 max_;
};




class Frustum
{
public:
    Frustum();
    Frustum(const Frustum& other);

    //void Define(float fov, float aspectRatio, float zoom, float nearZ, float farZ, const Matrix3x4& transform = Matrix3x4::IDENTITY);

    //void Define(const Vector3& near, const Vector3& far, const Matrix3x4& transform = Matrix3x4::IDENTITY);

    //void Define(const BoundingBox& box, const Matrix3x4& transform = Matrix3x4::IDENTITY);

    //void DefineOrtho(float orthoSize, float aspectRatio, float zoom, float nearZ, float farZ, const Matrix3x4& transform = Matrix3x4::IDENTITY);

    void Transform(const Matrix3& transform);
    void Transform(const Matrix3x4& transform);

    Intersection IsInside(const Vector3& point) const;
    Intersection IsInside(const Sphere& sphere) const;
    Intersection IsInsideFast(const Sphere& sphere) const;
    Intersection IsInside(const BoundingBox& box) const;
    Intersection IsInsideFast(const BoundingBox& box) const;

    float Distance(const Vector3& point) const;

    Frustum Transformed(const Matrix3& transform) const;
    Frustum Transformed(const Matrix3x4& transform) const;
    Rect Projected(const Matrix4& transform) const;

    void UpdatePlanes();

    //Plane planes_[NUM_FRUSTUM_PLANES];
    //Vector3 vertices_[NUM_FRUSTUM_VERTICES];
};




class Color
{
public:
    Color();
    Color(const Color& other);
    Color(const Color& color, float a);
    Color(float r, float g, float b);
    Color(float r, float g, float b, float a);

    unsigned ToUInt() const;
    Vector3 ToHSL() const;
    Vector3 ToHSV() const;
    void FromHSL(float h, float s, float l, float a = 1.0f);
    void FromHSV(float h, float s, float v, float a = 1.0f);

    Vector3 ToVector3() const;
    Vector4 ToVector4() const;

    float SumRGB() const;
    float Average() const;
    float Luma() const;

    float Chroma() const;
    float Hue() const;
    float SaturationHSL() const;
    float SaturationHSV() const;

    float Value() const;
    float Lightness() const;

    void Bounds(float* min, float* max, bool clipped = false) const;
    float MaxRGB() const;
    float MinRGB() const;
    float Range() const;

    void Clip(bool clipAlpha = false);
    void Invert(bool invertAlpha = false);
    Color Lerp(const Color& rhs, float t) const;

    Color Abs() const;

    bool Equals(const Color& rhs) const;

    String ToString() const;

    float r_;
    float g_;
    float b_;
    float a_;

    static const Color WHITE;
    static const Color GRAY;
    static const Color BLACK;
    static const Color RED;
    static const Color GREEN;
    static const Color BLUE;
    static const Color CYAN;
    static const Color MAGENTA;
    static const Color YELLOW;
    static const Color TRANSPARENT;
};



class StringHash
{
public:
    StringHash();
    StringHash(const StringHash& other);
    StringHash(unsigned value);
    StringHash(const char* str);
    StringHash(const String& str);

    unsigned Value() const;
    unsigned ToHash() const;

    String ToString() const;

    static unsigned Calculate(const char* str);
};



/////////////////////////
// From Craft/Container:
/////////////////////////


class StringVector
{
};


class VariantMap
{
};



typedef const void* ClassID;

class RefCounted
{
public:
    RefCounted();

private:

    virtual ClassID GetClassID() const = 0;
    static ClassID GetClassIDStatic();

    RefCounted(const RefCounted& other);
    RefCounted& operator =(const RefCounted& rhs);
};




////////////////////////
// From Craft/Core:
////////////////////////


enum VariantType
{
    VAR_NONE = 0,
    VAR_INT,
    VAR_BOOL,
    VAR_FLOAT,
    VAR_VECTOR2,
    VAR_VECTOR3,
    VAR_VECTOR4,
    VAR_QUATERNION,
    VAR_COLOR,
    VAR_STRING,
    VAR_BUFFER,
    VAR_VOIDPTR,
    VAR_RESOURCEREF,
    VAR_RESOURCEREFLIST,
    VAR_VARIANTVECTOR,
    VAR_VARIANTMAP,
    VAR_INTRECT,
    VAR_INTVECTOR2,
    VAR_PTR,
    VAR_MATRIX3,
    VAR_MATRIX3X4,
    VAR_MATRIX4,
    VAR_DOUBLE,
    VAR_STRINGVECTOR,
    MAX_VAR_TYPES
};


class Variant
{
public:
    Variant();
    Variant(const Variant& other);
    Variant(int value);
    Variant(unsigned value);
    Variant(const StringHash& value);
    Variant(bool value);
    Variant(float value);
    Variant(double value);
    Variant(const Vector2& value);
    Variant(const Vector3& value);
    Variant(const Vector4& value);
    Variant(const Quaternion& value);
    Variant(const Color& value);
    Variant(const String& value);
    Variant(const char* value);
    Variant(const VariantMap& value);
    //Variant(const StringVector& value);
    Variant(const IntRect& value);
    Variant(const IntVector2& value);
    Variant(const Matrix3& value);
    Variant(const Matrix3x4& value);
    Variant(const Matrix4& value);
    Variant(const String& type, const String& value);
    Variant(VariantType type, const String& value);
    Variant(const char* type, const char* value);
    Variant(VariantType type, const char* value);

    void Clear();

    void FromString(const String& type, const String& value);
    void FromString(const char* type, const char* value);
    void FromString(VariantType type, const String& value);
    void FromString(VariantType type, const char* value);

    int GetInt() const;

    unsigned GetUInt() const;

    StringHash GetStringHash() const;

    bool GetBool() const;
    float GetFloat() const;
    double GetDouble() const;

    const Vector2& GetVector2() const;
    const Vector3& GetVector3() const;
    const Vector4& GetVector4() const;

    const Quaternion& GetQuaternion() const;

    const Color& GetColor() const;

    const String& GetString() const;

    //const StringVector& GetStringVector() const;

    const VariantMap& GetVariantMap() const;

    const IntRect& GetIntRect() const;

    const IntVector2& GetIntVector2() const;

    const Matrix3& GetMatrix3() const;
    const Matrix3x4& GetMatrix3x4() const;
    const Matrix4& GetMatrix4() const;

    VariantType GetType() const;

    String GetTypeName() const;
    String ToString() const;
    bool IsZero() const;
    bool IsEmpty() const;

    static String GetTypeName(VariantType type);
    static VariantType GetTypeFromName(const String& typeName);
    static VariantType GetTypeFromName(const char* typeName);

};



enum InterpolationMode
{
    BEZIER_CURVE = 0,
    CATMULL_ROM_CURVE,
    LINEAR_CURVE,
    CATMULL_ROM_FULL_CURVE
};


class Spline
{
public:
    Spline();
    Spline(InterpolationMode mode);
    //Spline(const Vector<Variant>& knots, InterpolationMode mode = BEZIER_CURVE);
    Spline(const Spline& other);

    InterpolationMode GetInterpolationMode() const;

    //const VariantVector& GetKnots() const;

    Variant GetKnot(unsigned index) const;
    Variant GetPoint(float f) const;

    void SetInterpolationMode(InterpolationMode interpolationMode);

    //void SetKnots(const Vector<Variant>& knots);

    void SetKnot(const Variant& knot, unsigned index);
    void AddKnot(const Variant& knot);
    void AddKnot(const Variant& knot, unsigned index);

    void RemoveKnot();
    void RemoveKnot(unsigned index);
    void Clear();
};



class Context;
class EventHandler;


class TypeInfo
{
public:
    TypeInfo(const char* typeName, const TypeInfo* baseTypeInfo);

    bool IsTypeOf(StringHash type) const;
    bool IsTypeOf(const TypeInfo* typeInfo) const;

    StringHash GetType() const;
    const String& GetTypeName() const;
    const TypeInfo* GetBaseTypeInfo() const;
};


class Object : public RefCounted
{

    //virtual StringHash GetType() const = 0;
    //virtual const String& GetTypeName() const = 0;
    //virtual const TypeInfo* GetTypeInfo() const = 0;

public:
    Object(Context* context);

    virtual void OnEvent(Object* sender, StringHash eventType, VariantMap& eventData);

    void SubscribeToEvent(StringHash eventType, EventHandler* handler);
    void SubscribeToEvent(Object* sender, StringHash eventType, EventHandler* handler);
    void UnsubscribeFromEvent(StringHash eventType);
    void UnsubscribeFromEvent(Object* sender, StringHash eventType);
    void UnsubscribeFromEvents(Object* sender);
    void UnsubscribeFromAllEvents();
    void SendEvent(StringHash eventType);
    void SendEvent(StringHash eventType, VariantMap& eventData);

    Context* GetContext() const;

    Object* GetSubsystem(StringHash type) const;
    Object* GetEventSender() const;
    EventHandler* GetEventHandler() const;
    bool HasSubscribedToEvent(StringHash eventType) const;
    bool HasSubscribedToEvent(Object* sender, StringHash eventType) const;
    bool HasEventHandlers() const;

    const String& GetCategory() const;

    static const String& GetTypeNameStatic();
};



class ObjectFactory : public RefCounted
{
    ObjectFactory(Context* context);

public:

    //virtual SharedPtr<Object> CreateObject(const XMLElement& source = XMLElement::EMPTY) = 0;

    Context* GetContext() const;

    StringHash GetType() const;
    //StringHash GetBaseType() const;

    const String& GetTypeName() const;
};



class EventHandler
{
public:
    EventHandler(Object* receiver);
    EventHandler(Object* receiver, void* userData);

    void SetSenderAndEventType(Object* sender, StringHash eventType);

    virtual void Invoke(VariantMap& eventData) = 0;
    virtual EventHandler* Clone() const = 0;

    Object* GetReceiver() const;
    Object* GetSender() const;

    const StringHash& GetEventType() const;

    void* GetUserData() const;
};


class Context : public RefCounted
{
public:
    Context();

    void RegisterSubsystem(Object* subsystem);
    void RemoveSubsystem(StringHash objectType);

    Object* GetSubsystem(StringHash type) const;
    Object* GetEventSender() const;

    EventHandler* GetEventHandler() const;

    const String& GetTypeName(StringHash objectType) const;

    //bool GetEditorContext();
    //void SetEditorContext(bool editor);
};




class Timer
{
public:
    Timer();

    unsigned GetMSec(bool reset);
    void Reset();
};


class HiresTimer
{
public:
    HiresTimer();

    long long GetUSec(bool reset);
    void Reset();

    static bool IsSupported();
    static long long GetFrequency();
};


class Time : public Object
{
public:
    Time(Context* context);

    void BeginFrame(float timeStep);
    void EndFrame();
    void SetTimerPeriod(unsigned mSec);

    unsigned GetFrameNumber() const;
    unsigned GetTimerPeriod() const;

    float GetTimeStep() const;
    float GetElapsedTime();

    static unsigned GetSystemTime();
    static unsigned GetTimeSinceEpoch();
    static String GetTimeStamp();
    static void Sleep(unsigned mSec);
};



class Mutex
{
public:
    Mutex();

    void Acquire();
    void Release();
};




class Condition
{
public:
    Condition();

    void Set();
    void Wait();
};



class Thread
{
public:
    Thread();

    virtual void ThreadFunction() = 0;

    bool Run();
    void Stop();
    void SetPriority(int priority);

    bool IsStarted() const;

    static void SetMainThread();
    //static ThreadID GetCurrentThreadID();
    static bool IsMainThread();
};




////////////////////////
// From Craft/IO:
////////////////////////

class Serializer
{
public:

    virtual unsigned Write(const void* data, unsigned size) = 0;

    bool WriteInt(int value);
    bool WriteShort(short value);
    bool WriteByte(signed char value);
    bool WriteUInt(unsigned value);
    bool WriteUShort(unsigned short value);
    bool WriteUByte(unsigned char value);
    bool WriteBool(bool value);
    bool WriteFloat(float value);
    bool WriteDouble(double value);
    bool WriteIntRect(const IntRect& value);
    bool WriteIntVector2(const IntVector2& value);
    bool WriteRect(const Rect& value);
    bool WriteVector2(const Vector2& value);
    bool WriteVector3(const Vector3& value);
    bool WritePackedVector3(const Vector3& value, float maxAbsCoord);
    bool WriteVector4(const Vector4& value);
    bool WriteQuaternion(const Quaternion& value);
    bool WritePackedQuaternion(const Quaternion& value);
    bool WriteMatrix3(const Matrix3& value);
    bool WriteMatrix3x4(const Matrix3x4& value);
    bool WriteMatrix4(const Matrix4& value);
    bool WriteColor(const Color& value);
    bool WriteBoundingBox(const BoundingBox& value);
    bool WriteString(const String& value);
    bool WriteFileID(const String& value);
    bool WriteStringHash(const StringHash& value);
    //bool WriteBuffer(const PODVector<unsigned char>& buffer);
    //bool WriteResourceRef(const ResourceRef& value);
    //bool WriteResourceRefList(const ResourceRefList& value);
    bool WriteVariant(const Variant& value);
    bool WriteVariantData(const Variant& value);
    //bool WriteVariantVector(const VariantVector& value);
    bool WriteStringVector(const StringVector& value);
    bool WriteVariantMap(const VariantMap& value);
    bool WriteVLE(unsigned value);
    bool WriteNetID(unsigned value);
    bool WriteLine(const String& value);
};

class Deserializer
{
public:
    Deserializer();
    Deserializer(unsigned size);

    virtual unsigned Read(void* dest, unsigned size) = 0;
    virtual unsigned Seek(unsigned position) = 0;
    virtual const String& GetName() const;
    virtual unsigned GetChecksum();

    unsigned GetPosition() const;
    unsigned GetSize() const;

    bool IsEof() const;

    int ReadInt();
    short ReadShort();
    signed char ReadByte();
    unsigned ReadUInt();
    unsigned short ReadUShort();
    unsigned char ReadUByte();
    bool ReadBool();
    float ReadFloat();
    double ReadDouble();
    IntRect ReadIntRect();
    IntVector2 ReadIntVector2();
    Rect ReadRect();
    Vector2 ReadVector2();
    Vector3 ReadVector3();
    Vector3 ReadPackedVector3(float maxAbsCoord);
    Vector4 ReadVector4();
    Quaternion ReadQuaternion();
    Quaternion ReadPackedQuaternion();
    Matrix3 ReadMatrix3();
    Matrix3x4 ReadMatrix3x4();
    Matrix4 ReadMatrix4();
    Color ReadColor();
    BoundingBox ReadBoundingBox();
    String ReadString();
    String ReadFileID();
    StringHash ReadStringHash();
    //PODVector<unsigned char> ReadBuffer();
    //ResourceRef ReadResourceRef();
    //ResourceRefList ReadResourceRefList();
    Variant ReadVariant();
    Variant ReadVariant(VariantType type);
    //VariantVector ReadVariantVector();
    StringVector ReadStringVector();
    VariantMap ReadVariantMap();
    unsigned ReadVLE();
    unsigned ReadNetID();
    String ReadLine();
};



enum FileMode
{
    FILE_READ = 0,
    FILE_WRITE,
    FILE_READWRITE
};


class File : public Object, public Deserializer, public Serializer
{
public:
    File(Context* context);
    File(Context* context, const String& fileName, FileMode mode = FILE_READ);
    //File(Context* context, PackageFile* package, const String& fileName);

    virtual unsigned Read(void* dest, unsigned size);
    virtual void ReadText(String& text);
    virtual unsigned Seek(unsigned position);
    virtual unsigned Write(const void* data, unsigned size);

    virtual const String& GetName() const;

    virtual unsigned GetChecksum();

    bool Open(const String& fileName, FileMode mode = FILE_READ);
    //bool Open(PackageFile* package, const String& fileName);
    void Close();
    void Flush();
    void SetName(const String& name);
    //void SetFullPath(const String& path);


    FileMode GetMode() const;

    bool IsOpen() const;

    //void* GetHandle() const;

    bool IsPackaged() const;
    const String& GetFullPath() const;

    bool Copy(File* srcFile);
};



static const unsigned SCAN_FILES = 0x1;
static const unsigned SCAN_DIRS = 0x2;
static const unsigned SCAN_HIDDEN = 0x4;

class FileSystem : public Object
{
public:
    FileSystem(Context* context);

    bool SetCurrentDir(const String& pathName);
    bool CreateDir(const String& pathName);
    void SetExecuteConsoleCommands(bool enable);
    int SystemCommand(const String& commandLine, bool redirectStdOutToLog = false);
    //int SystemRun(const String& fileName, const Vector<String>& arguments);
    unsigned SystemCommandAsync(const String& commandLine);
    //unsigned SystemRunAsync(const String& fileName, const Vector<String>& arguments);
    bool SystemOpen(const String& fileName, const String& mode = "");
    bool Copy(const String& srcFileName, const String& destFileName);
    bool Rename(const String& srcFileName, const String& destFileName);
    bool Delete(const String& fileName);
    void RegisterPath(const String& pathName);
    bool SetLastModifiedTime(const String& fileName, unsigned newTime);

    String GetCurrentDir() const;

    bool GetExecuteConsoleCommands() const;

    bool HasRegisteredPaths() const;

    bool CheckAccess(const String& pathName) const;
    unsigned GetLastModifiedTime(const String& fileName) const;
    bool FileExists(const String& fileName) const;
    bool DirExists(const String& pathName) const;
    //void ScanDir(Vector<String>& result, const String& pathName, const String& filter, unsigned flags, bool recursive) const;
    String GetProgramDir() const;
    String GetUserDocumentsDir() const;
    String GetAppPreferencesDir(const String& org, const String& app) const;

    //String GetAppBundleResourceFolder();
    bool RemoveDir(const String& directoryIn, bool recursive);    
    bool CreateDirs(const String& root, const String& subdirectory);
    bool CopyDir(const String& directoryIn, const String& directoryOut);

    bool Exists(const String& pathName) const;

    bool CreateDirsRecursive(const String& directoryIn);
};

void SplitPath(const String& fullPath, String& pathName, String& fileName, String& extension, bool lowercaseExtension = true);
String GetPath(const String& fullPath);
String GetFileName(const String& fullPath);
String GetExtension(const String& fullPath, bool lowercaseExtension = true);
String GetFileNameAndExtension(const String& fullPath, bool lowercaseExtension = false);
String ReplaceExtension(const String& fullPath, const String& newExtension);
String AddTrailingSlash(const String& pathName);
String RemoveTrailingSlash(const String& pathName);
String GetParentPath(const String& pathName);
String GetInternalPath(const String& pathName);
String GetNativePath(const String& pathName);
//WString GetWideNativePath(const String& pathName);
bool IsAbsolutePath(const String& pathName);
bool IsAbsoluteParentPath(const String& absParentPath, const String& fullPath);



class FileWatcher : public Object, public Thread
{
public:
    FileWatcher(Context* context);

    virtual void ThreadFunction();

    bool StartWatching(const String& pathName, bool watchSubDirs);
    void StopWatching();
    void SetDelay(float interval);
    void AddChange(const String& fileName);
    bool GetNextChange(String& dest);

    const String& GetPath() const;

    float GetDelay() const;
};



struct PackageEntry
{
    PackageEntry(const PackageEntry& other);
    unsigned offset_;
    unsigned size_;
    unsigned checksum_;
};

class PackageFile : public Object
{
public:
    PackageFile(Context* context);
    PackageFile(Context* context, const String& fileName, unsigned startOffset = 0);

    bool Open(const String& fileName, unsigned startOffset = 0);
    bool Exists(const String& fileName) const;
    const PackageEntry* GetEntry(const String& fileName) const;

    //const HashMap<String, PackageEntry>& GetEntries() const;

    const String& GetName() const;

    StringHash GetNameHash() const;

    unsigned GetNumFiles() const;
    unsigned GetTotalSize() const;
    unsigned GetChecksum() const;

    bool IsCompressed() const;

    //const Vector<String> GetEntryNames() const;
};




unsigned EstimateCompressBound(unsigned srcSize);
unsigned CompressData(void* dest, const void* src, unsigned srcSize);
unsigned DecompressData(void* dest, const void* src, unsigned destSize);
bool CompressStream(Serializer& dest, Deserializer& src);
bool DecompressStream(Serializer& dest, Deserializer& src);
//VectorBuffer CompressVectorBuffer(VectorBuffer& src);
//VectorBuffer DecompressVectorBuffer(VectorBuffer& src);




////////////////////////
// From Craft/Resource:
////////////////////////

enum AsyncLoadState
{
    ASYNC_DONE = 0,
    ASYNC_QUEUED = 1,
    ASYNC_LOADING = 2,
    ASYNC_SUCCESS = 3,
    ASYNC_FAIL = 4
};


class Resource : public Object
{

public:
    Resource(Context* context);

    bool Load(Deserializer& source);
    virtual bool BeginLoad(Deserializer& source);
    virtual bool EndLoad();
    virtual bool Save(Serializer& dest) const;

    void SetName(const String& name);
    void SetMemoryUse(unsigned size);
    void ResetUseTimer();
    void SetAsyncLoadState(AsyncLoadState newState);

    const String& GetName() const;

    StringHash GetNameHash() const;

    unsigned GetMemoryUse() const;
    unsigned GetUseTimer();

    AsyncLoadState GetAsyncLoadState() const;
};



enum CompressedFormat
{
    CF_NONE = 0,
    CF_RGBA,
    CF_DXT1,
    CF_DXT3,
    CF_DXT5,
    CF_ETC1,
    CF_PVRTC_RGB_2BPP,
    CF_PVRTC_RGBA_2BPP,
    CF_PVRTC_RGB_4BPP,
    CF_PVRTC_RGBA_4BPP,
};


struct CompressedLevel
{
    CompressedLevel();
    CompressedLevel(const CompressedLevel& other);

    bool Decompress(unsigned char* dest);

    unsigned char* data_;
    CompressedFormat format_;
    int width_;
    int height_;
    int depth_;
    unsigned blockSize_;
    unsigned dataSize_;
    unsigned rowSize_;
    unsigned rows_;
};


class Image : public Resource
{
public:
    Image(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool Save(Serializer& dest) const;

    bool SetSize(int width, int height, unsigned components);
    bool SetSize(int width, int height, int depth, unsigned components);
    void SetData(const unsigned char* pixelData);
    void SetPixel(int x, int y, const Color& color);
    void SetPixel(int x, int y, int z, const Color& color);
    void SetPixelInt(int x, int y, unsigned uintColor);
    void SetPixelInt(int x, int y, int z, unsigned uintColor);
    bool LoadColorLUT(Deserializer& source);
    bool FlipHorizontal();
    bool FlipVertical();
    bool Resize(int width, int height);
    void Clear(const Color& color);
    void ClearInt(unsigned uintColor);

    bool SaveBMP(const String& fileName) const;
    bool SavePNG(const String& fileName) const;
    bool SaveTGA(const String& fileName) const;
    bool SaveJPG(const String& fileName, int quality) const;
    bool SaveDDS(const String& fileName) const;
    
	bool IsCubemap() const;
    bool IsArray() const;
    bool IsSRGB() const;
    //bool IsPOT() const;
    bool HasAlphaChannel() const;

    Color GetPixel(int x, int y) const;
    Color GetPixel(int x, int y, int z) const;
    unsigned GetPixelInt(int x, int y) const;
    unsigned GetPixelInt(int x, int y, int z) const;
    Color GetPixelBilinear(float x, float y) const;
    Color GetPixelTrilinear(float x, float y, float z) const;

    int GetWidth() const;
    int GetHeight() const;
    int GetDepth() const;

    unsigned GetComponents() const;

    unsigned char* GetData() const;

    bool IsCompressed() const;

    CompressedFormat GetCompressedFormat() const;

    unsigned GetNumCompressedLevels() const;

    //SharedPtr<Image> GetNextLevel() const;
    //SharedPtr<Image> GetNextSibling() const;
    //SharedPtr<Image> ConvertToRGBA() const;

    CompressedLevel GetCompressedLevel(unsigned index) const;
    Image* GetSubimage(const IntRect& rect) const;
    bool SetSubimage(const Image* image, const IntRect& rect);
    void PrecalculateLevels();
};




class Localization : public Object
{
public:
    Localization(Context* context);

    int GetNumLanguages() const;
    int GetLanguageIndex() const;
    int GetLanguageIndex(const String& language);
    String GetLanguage();
    String GetLanguage(int index);
    void SetLanguage(int index);
    void SetLanguage(const String& language);
    String Get(const String& id);
    void Reset();
    //void LoadJSON(const JSONValue& source);
    void LoadJSONFile(const String& name);
};




class XMLFile;
class XPathQuery;
class XPathResultSet;

class XMLElement
{
public:
    XMLElement();

    XMLElement CreateChild(const String& name);
    XMLElement CreateChild(const char* name);
    bool RemoveChild(const XMLElement& element);
    bool RemoveChild(const String& name);
    bool RemoveChild(const char* name);
    bool RemoveChildren(const String& name = "");
    bool RemoveChildren(const char* name);
    bool RemoveAttribute(const String& name = "");
    bool RemoveAttribute(const char* name);

    XMLElement SelectSinglePrepared(const XPathQuery& query) const;
    XPathResultSet SelectPrepared(const XPathQuery& query) const;

    bool SetValue(const String& value);
    bool SetValue(const char* value);
    bool SetAttribute(const String& name, const String& value);
    bool SetAttribute(const char* name, const char* value);
    bool SetAttribute(const String& value);
    bool SetAttribute(const char* value);
    bool SetBool(const String& name, bool value);
    bool SetBoundingBox(const BoundingBox& value);
    bool SetBuffer(const String& name, const void* data, unsigned size);
    //bool SetBuffer(const String& name, const PODVector<unsigned char>& value);
    bool SetColor(const String& name, const Color& value);
    bool SetFloat(const String& name, float value);
    bool SetDouble(const String& name, double value);
    bool SetUInt(const String& name, unsigned value);
    bool SetInt(const String& name, int value);
    bool SetIntRect(const String& name, const IntRect& value);
    bool SetIntVector2(const String& name, const IntVector2& value);
    bool SetRect(const String& name, const Rect& value);
    bool SetQuaternion(const String& name, const Quaternion& value);
    bool SetString(const String& name, const String& value);
    bool SetVariant(const Variant& value);
    bool SetVariantValue(const Variant& value);
    //bool SetResourceRef(const ResourceRef& value);
    //bool SetResourceRefList(const ResourceRefList& value);
    //bool SetVariantVector(const VariantVector& value);
    //bool SetStringVector(const StringVector& value);
    bool SetVariantMap(const VariantMap& value);
    bool SetVector2(const String& name, const Vector2& value);
    bool SetVector3(const String& name, const Vector3& value);
    bool SetVector4(const String& name, const Vector4& value);
    //bool SetVectorVariant(const String& name, const Variant& value);
    bool SetMatrix3(const String& name, const Matrix3& value);
    bool SetMatrix3x4(const String& name, const Matrix3x4& value);
    bool SetMatrix4(const String& name, const Matrix4& value);

    bool IsNull() const;
    bool NotNull() const;
    String GetName() const;
    bool HasChild(const String& name) const;
    bool HasChild(const char* name) const;
    XMLElement GetChild(const String& name = "") const;
    XMLElement GetChild(const char* name) const;
    XMLElement GetNext(const String& name = "") const;
    XMLElement GetNext(const char* name) const;
    XMLElement GetParent() const;
    unsigned GetNumAttributes() const;
    bool HasAttribute(const String& name) const;
    bool HasAttribute(const char* name) const;
    String GetValue() const;
    String GetAttribute(const String& name = "") const;
    String GetAttribute(const char* name) const;
    const char* GetAttributeCString(const char* name) const;
    String GetAttributeLower(const String& name) const;
    String GetAttributeLower(const char* name) const;
    String GetAttributeUpper(const String& name) const;
    String GetAttributeUpper(const char* name) const;
    //Vector<String> GetAttributeNames() const;
    bool GetBool(const String& name) const;
    BoundingBox GetBoundingBox() const;
    Color GetColor(const String& name) const;
    float GetFloat(const String& name) const;
    double GetDouble(const String& name) const;
    unsigned GetUInt(const String& name) const;
    int GetInt(const String& name) const;
    IntRect GetIntRect(const String& name) const;
    IntVector2 GetIntVector2(const String& name) const;
    Rect GetRect(const String& name) const;
    Quaternion GetQuaternion(const String& name) const;
    Variant GetVariant() const;
    Variant GetVariantValue(VariantType type) const;
    //ResourceRef GetResourceRef() const;
    //ResourceRefList GetResourceRefList() const;
    //VariantVector GetVariantVector() const;
    //StringVector GetStringVector() const;
    VariantMap GetVariantMap() const;
    Vector2 GetVector2(const String& name) const;
    Vector3 GetVector3(const String& name) const;
    Vector4 GetVector4(const String& name) const;
    Vector4 GetVector(const String& name) const;
    Variant GetVectorVariant(const String& name) const;
    Matrix3 GetMatrix3(const String& name) const;
    Matrix3x4 GetMatrix3x4(const String& name) const;
    Matrix4 GetMatrix4(const String& name) const;
    XMLFile* GetFile() const;

    const XPathResultSet* GetXPathResultSet() const;

    unsigned GetXPathResultIndex() const;

    XMLElement NextResult() const;

    static const XMLElement EMPTY;
};


class XPathResultSet
{
public:
    XPathResultSet();
    //XMLElement operator [](unsigned index) const;
    XMLElement FirstResult();
    unsigned Size() const;
    bool Empty() const;
};


class XPathQuery
{
public:
    XPathQuery();
    XPathQuery(const String& queryString, const String& variableString = "");
    void Bind();
    bool SetVariable(const String& name, bool value);
    bool SetVariable(const String& name, float value);
    bool SetVariable(const String& name, const String& value);
    bool SetVariable(const char* name, const char* value);
    bool SetVariable(const String& name, const XPathResultSet& value);
    bool SetQuery(const String& queryString, const String& variableString = "", bool bind = true);
    void Clear();
    bool EvaluateToBool(XMLElement element) const;
    float EvaluateToFloat(XMLElement element) const;
    String EvaluateToString(XMLElement element) const;
    XPathResultSet Evaluate(XMLElement element) const;

    String GetQuery() const;
};



class XMLFile : public Resource
{
public:
    XMLFile(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool Save(Serializer& dest) const;
    bool Save(Serializer& dest, const String& indentation) const;

    bool FromString(const String& source);
    XMLElement CreateRoot(const String& name);

    XMLElement GetRoot(const String& name = "");

    String ToString(const String& indentation = "\t") const;

    void Patch(XMLFile* patchFile);
    void Patch(XMLElement patchElement);
};



class Texture;
class Material;

class ResourceCache : public Object
{
public:
    ResourceCache(Context* context);

    bool AddResourceDir(const String& pathName, unsigned priority = PRIORITY_LAST);
    bool AddPackageFile(PackageFile* package, unsigned priority = PRIORITY_LAST);
    bool AddPackageFile(const String& fileName, unsigned priority = PRIORITY_LAST);
    bool AddManualResource(Resource* resource);
    void RemoveResourceDir(const String& pathName);
    void RemovePackageFile(PackageFile* package, bool releaseResources = true, bool forceRelease = false);
    void RemovePackageFile(const String& fileName, bool releaseResources = true, bool forceRelease = false);
    void ReleaseResource(StringHash type, const String& name, bool force = false);
    void ReleaseResources(StringHash type, bool force = false);
    void ReleaseResources(StringHash type, const String& partialName, bool force = false);
    void ReleaseResources(const String& partialName, bool force = false);
    void ReleaseAllResources(bool force = false);
    bool ReloadResource(Resource* resource);
    void ReloadResourceWithDependencies(const String& fileName);
    void SetMemoryBudget(StringHash type, unsigned long long budget);
    void SetAutoReloadResources(bool enable);
    void SetReturnFailedResources(bool enable);

    void SetSearchPackagesFirst(bool value);

    void SetFinishBackgroundResourcesMs(int ms);

    //void AddResourceRouter(ResourceRouter* router, bool addAsFirst = false);
    //void RemoveResourceRouter(ResourceRouter* router);


    Resource* GetResource(StringHash type, const String& name, bool sendEventOnFailure = true);
    //SharedPtr<Resource> GetTempResource(StringHash type, const String& name, bool sendEventOnFailure = true);
    bool BackgroundLoadResource(StringHash type, const String& name, bool sendEventOnFailure = true, Resource* caller = 0);
    unsigned GetNumBackgroundLoadResources() const;
    Resource* GetExistingResource(StringHash type, const String& name);

    //const HashMap<StringHash, ResourceGroup>& GetAllResources() const;

    //const Vector<String>& GetResourceDirs() const;

    //const Vector<SharedPtr<PackageFile> >& GetPackageFiles() const;

#if 0
    /// Template version of returning a resource by name.
    template <class T> T* GetResource(const String& name, bool sendEventOnFailure = true);
    /// Template version of returning an existing resource by name.
    template <class T> T* GetExistingResource(const String& name);
    /// Template version of loading a resource without storing it to the cache.
    template <class T> SharedPtr<T> GetTempResource(const String& name, bool sendEventOnFailure = true);
    /// Template version of releasing a resource by name.
    template <class T> void ReleaseResource(const String& name, bool force = false);
    /// Template version of queueing a resource background load.
    template <class T> bool BackgroundLoadResource(const String& name, bool sendEventOnFailure = true, Resource* caller = 0);
    /// Template version of returning loaded resources of a specific type.
    template <class T> void GetResources(PODVector<T*>& result) const;
#endif

	Image*    GetImage( const String& name );
	Material* GetMaterial( const String& name );

    bool Exists(const String& name) const;
    unsigned long long GetMemoryBudget(StringHash type) const;
    unsigned long long GetMemoryUse(StringHash type) const;
    unsigned long long GetTotalMemoryUse() const;
    String GetResourceFileName(const String& name) const;

    bool GetAutoReloadResources() const;
    bool GetReturnFailedResources() const;
    bool GetSearchPackagesFirst() const;

    int GetFinishBackgroundResourcesMs() const;

    //ResourceRouter* GetResourceRouter(unsigned index) const;

    String GetPreferredResourceDir(const String& path) const;
    String SanitateResourceName(const String& name) const;
    String SanitateResourceDirName(const String& name) const;
    void StoreResourceDependency(Resource* resource, const String& dependency);
    void ResetDependencies(Resource* resource);

    String PrintMemoryUsage() const;

};




////////////////////////
// From Craft/Scene:
////////////////////////

enum InterpMethod
{
    IM_LINEAR = 0,
    IM_SPLINE,
};

enum WrapMode
{
    WM_LOOP = 0,
    WM_ONCE,
    WM_CLAMP,
};

class Scene;
class Node;



class Serializable : public Object
{
public:
    Serializable(Context* context);

    //virtual void OnSetAttribute(const AttributeInfo& attr, const Variant& src);
    //virtual void OnGetAttribute(const AttributeInfo& attr, Variant& dest) const;
    //virtual const Vector<AttributeInfo>* GetAttributes() const;
    //virtual const Vector<AttributeInfo>* GetNetworkAttributes() const;
    virtual bool Load(Deserializer& source);
    virtual bool Save(Serializer& dest) const;
    //virtual bool LoadXML(const XMLElement& source, bool setInstanceDefault = false);
    //virtual bool SaveXML(XMLElement& dest) const;

    virtual void ApplyAttributes();

    virtual bool SaveDefaultAttributes() const;

    virtual void MarkNetworkUpdate();

    bool SetAttribute(unsigned index, const Variant& value);
    bool SetAttribute(const String& name, const Variant& value);
    void ResetToDefault();
    void RemoveInstanceDefault();
    void SetTemporary(bool enable);
    void SetInterceptNetworkUpdate(const String& attributeName, bool enable);
    void AllocateNetworkState();
    void WriteInitialDeltaUpdate(Serializer& dest, unsigned char timeStamp);
    //void WriteDeltaUpdate(Serializer& dest, const DirtyBits& attributeBits, unsigned char timeStamp);
    void WriteLatestDataUpdate(Serializer& dest, unsigned char timeStamp);
    bool ReadDeltaUpdate(Deserializer& source);
    bool ReadLatestDataUpdate(Deserializer& source);

    Variant GetAttribute(unsigned index) const;
    Variant GetAttribute(const String& name) const;
    Variant GetAttributeDefault(unsigned index) const;
    Variant GetAttributeDefault(const String& name) const;

    unsigned GetNumAttributes() const;
    unsigned GetNumNetworkAttributes() const;

    bool IsTemporary() const;
    bool GetInterceptNetworkUpdate(const String& attributeName) const;

    //NetworkState* GetNetworkState() const;

};



class ValueAnimation : public Resource
{

public:
    ValueAnimation(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool Save(Serializer& dest) const;
    //bool LoadXML(const XMLElement& source);
    //bool SaveXML(XMLElement& dest) const;

    void SetOwner(void* owner);
    void SetInterpolationMethod(InterpMethod method);
    void SetSplineTension(float tension);
    void SetValueType(VariantType valueType);

    bool SetKeyFrame(float time, const Variant& value);
    void SetEventFrame(float time, const StringHash& eventType, const VariantMap& eventData = VariantMap());

    bool IsValid() const;

    void* GetOwner() const;

    InterpMethod GetInterpolationMethod() const;

    float GetSplineTension() const;

    VariantType GetValueType() const;

    float GetBeginTime() const;
    float GetEndTime() const;

    Variant GetAnimationValue(float scaledTime);

    bool HasEventFrames() const;

};



class ObjectAnimation : public Resource
{

public:
    ObjectAnimation(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool Save(Serializer& dest) const;
    //bool LoadXML(const XMLElement& source);
    //bool SaveXML(XMLElement& dest) const;

    void AddAttributeAnimation(const String& name, ValueAnimation* attributeAnimation, WrapMode wrapMode = WM_LOOP, float speed = 1.0f);

    void RemoveAttributeAnimation(const String& name);
    void RemoveAttributeAnimation(ValueAnimation* attributeAnimation);

    ValueAnimation* GetAttributeAnimation(const String& name) const;
    WrapMode GetAttributeAnimationWrapMode(const String& name) const;
    float GetAttributeAnimationSpeed(const String& name) const;
};




class Animatable : public Serializable
{
public:
    Animatable(Context* context);

	static Craft::StringHash GetTypeStatic();

    //virtual bool LoadXML(const XMLElement& source, bool setInstanceDefault = false);
    //virtual bool SaveXML(XMLElement& dest) const;

    void SetAnimationEnabled(bool enable);

    void SetObjectAnimation(ObjectAnimation* objectAnimation);
    void SetAttributeAnimation(const String& name, ValueAnimation* attributeAnimation, WrapMode wrapMode = WM_LOOP, float speed = 1.0f);
    void SetAttributeAnimationWrapMode(const String& name, WrapMode wrapMode);
    void SetAttributeAnimationSpeed(const String& name, float speed);

    bool GetAnimationEnabled() const;

    ObjectAnimation* GetObjectAnimation() const;
    ValueAnimation* GetAttributeAnimation(const String& name) const;
    WrapMode GetAttributeAnimationWrapMode(const String& name) const;
    float GetAttributeAnimationSpeed(const String& name) const;

protected:
    virtual void OnAttributeAnimationAdded() = 0;
    virtual void OnAttributeAnimationRemoved() = 0;
};



enum AutoRemoveMode
{
    REMOVE_DISABLED = 0,
    REMOVE_COMPONENT,
    REMOVE_NODE
};


class Component : public Animatable
{
public:
    Component(Context* context);

	static Craft::StringHash GetTypeStatic();

    virtual void OnSetEnabled();

    virtual bool Save(Serializer& dest) const;
    //virtual bool SaveXML(XMLElement& dest) const;
    virtual void MarkNetworkUpdate();

    void SetEnabled(bool enable);
    void Remove();

    unsigned GetID() const;

    Node* GetNode() const;
    Scene* GetScene() const;

    bool IsEnabled() const;
    bool IsEnabledEffective() const;
    Component* GetComponent(StringHash type) const;

    //void AddReplicationState(ComponentReplicationState* state);
    void PrepareNetworkUpdate();
    //void CleanupConnection(Connection* connection);
};




class Camera;
class Component;
class Connection;
class SceneResolver;
class DaoComponent;
class AnimationController;
class CustomGeometry;
class RigidBody;
class CollisionShape;


enum CreateMode
{
    REPLICATED = 0,
    LOCAL = 1
};

enum TransformSpace
{
    TS_LOCAL = 0,
    TS_PARENT,
    TS_WORLD
};

class Octree;

class Node : public Animatable
{
public:
    Node(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    virtual bool Load(Deserializer& source);
    virtual bool Save(Serializer& dest) const;
    //virtual bool LoadXML(const XMLElement& source, bool setInstanceDefault = false);
    //virtual bool SaveXML(XMLElement& dest) const;
    virtual void ApplyAttributes();

    virtual bool SaveDefaultAttributes() const;

    virtual void MarkNetworkUpdate();
    //virtual void AddReplicationState(NodeReplicationState* state);

    bool SaveXML(Serializer& dest, const String& indentation = "\t") const;
    void SetName(const String& name);

    void SetPosition(const Vector3& position);
    void SetPosition2D(const Vector2& position);
    void SetPosition2D(float x, float y);

	void SetRotation( const Quaternion& rotation, bool full );

    void SetRotation(const Quaternion& rotation);
    void SetRotation2D(float rotation);

	void SetPartialRotation( const Quaternion& rotation );
	void SetOrientation(const Quaternion& orientation);

    void SetDirection(const Vector3& direction);

    void SetScale(float scale);
    void SetScale(const Vector3& scale);
    void SetScale2D(const Vector2& scale);
    void SetScale2D(float x, float y);

    void SetTransform(const Vector3& position, const Quaternion& rotation);
    void SetTransform(const Vector3& position, const Quaternion& rotation, float scale);
    void SetTransform(const Vector3& position, const Quaternion& rotation, const Vector3& scale);
    void SetTransform2D(const Vector2& position, float rotation);
    void SetTransform2D(const Vector2& position, float rotation, float scale);
    void SetTransform2D(const Vector2& position, float rotation, const Vector2& scale);

    void SetWorldPosition(const Vector3& position);
    void SetWorldPosition2D(const Vector2& position);
    void SetWorldPosition2D(float x, float y);

    void SetWorldRotation(const Quaternion& rotation);
    void SetWorldRotation2D(float rotation);
    void SetWorldDirection(const Vector3& direction);

    void SetWorldScale(float scale);
    void SetWorldScale(const Vector3& scale);
    void SetWorldScale2D(const Vector2& scale);
    void SetWorldScale2D(float x, float y);

    void SetWorldTransform(const Vector3& position, const Quaternion& rotation);
    void SetWorldTransform(const Vector3& position, const Quaternion& rotation, float scale);
    void SetWorldTransform(const Vector3& position, const Quaternion& rotation, const Vector3& scale);
    void SetWorldTransform2D(const Vector2& position, float rotation);
    void SetWorldTransform2D(const Vector2& position, float rotation, float scale);
    void SetWorldTransform2D(const Vector2& position, float rotation, const Vector2& scale);

    void Translate(const Vector3& delta, TransformSpace space = TS_LOCAL);
    void Translate2D(const Vector2& delta, TransformSpace space = TS_LOCAL);

    void Rotate(const Quaternion& delta, TransformSpace space = TS_LOCAL);
    void Rotate2D(float delta, TransformSpace space = TS_LOCAL);
    void RotateAround(const Vector3& point, const Quaternion& delta, TransformSpace space = TS_LOCAL);
    void RotateAround2D(const Vector2& point, float delta, TransformSpace space = TS_LOCAL);

    void Pitch(float angle, TransformSpace space = TS_LOCAL);
    void Yaw(float angle, TransformSpace space = TS_LOCAL);
    void Roll(float angle, TransformSpace space = TS_LOCAL);

    bool LookAt(const Vector3& target, const Vector3& up = Vector3::UP, TransformSpace space = TS_WORLD);

    void Scale(float scale);
    void Scale(const Vector3& scale);
    void Scale2D(const Vector2& scale);

    void SetEnabled(bool enable);
    void SetDeepEnabled(bool enable);
    void ResetDeepEnabled();
    void SetEnabledRecursive(bool enable);
    void SetOwner(Connection* owner);
    void MarkDirty();

    //Node* CreateChild(const String& name = "", CreateMode mode = REPLICATED, unsigned id = 0);
    Node* CreateChild(const String& name, CreateMode mode = REPLICATED, unsigned id = 0);
    void AddChild(Node* node, unsigned index = MATH_MAX_UNSIGNED);
    void RemoveChild(Node* node);
    void RemoveAllChildren();
    void RemoveChildren(bool removeReplicated, bool removeLocal, bool recursive);
    Component* CreateComponent(StringHash type, CreateMode mode = REPLICATED, unsigned id = 0);
    Component* GetOrCreateComponent(StringHash type, CreateMode mode = REPLICATED, unsigned id = 0);
    Component* CloneComponent(Component* component, unsigned id = 0);
    Component* CloneComponent(Component* component, CreateMode mode, unsigned id = 0);
    void RemoveComponent(Component* component);
    void RemoveComponent(StringHash type);
    void RemoveComponents(bool removeReplicated, bool removeLocal);
    void RemoveComponents(StringHash type);
    void RemoveAllComponents();
    Node* Clone(CreateMode mode = REPLICATED);
    void Remove();
    void SetParent(Node* parent);
    void SetVar(StringHash key, const Variant& value);
    void AddListener(Component* component);
    void RemoveListener(Component* component);

    unsigned GetID() const;

    const String& GetName() const;

    StringHash GetNameHash() const;

    Node* GetParent() const;

    Scene* GetScene() const;

    bool IsEnabled() const;
    bool IsEnabledSelf() const;

    Connection* GetOwner() const;

    const Vector3& GetPosition() const;

    Vector2 GetPosition2D() const;

    const Quaternion GetRotation() const;
    const Quaternion GetOrientation() const;
	const Quaternion& GetPartialRotation() const;

    float GetRotation2D() const;

    Vector3 GetDirection() const;
    Vector3 GetUp() const;
    Vector3 GetRight() const;

    const Vector3& GetScale() const;

    Vector2 GetScale2D() const;

    Matrix3x4 GetTransform() const;

    Vector3 GetWorldPosition() const;
    Vector2 GetWorldPosition2D() const;

    Quaternion GetWorldRotation() const;

    float GetWorldRotation2D() const;

    Vector3 GetWorldDirection() const;
    Vector3 GetWorldUp() const;
    Vector3 GetWorldRight() const;

    Vector3 GetWorldScale() const;
    Vector2 GetWorldScale2D() const;

    const Matrix3x4& GetWorldTransform() const;

    Vector3 LocalToWorld(const Vector3& position) const;
    Vector3 LocalToWorld(const Vector4& vector) const;
    Vector2 LocalToWorld2D(const Vector2& vector) const;
    Vector3 WorldToLocal(const Vector3& position) const;
    Vector3 WorldToLocal(const Vector4& vector) const;
    Vector2 WorldToLocal2D(const Vector2& vector) const;

    bool IsDirty() const;

    unsigned GetNumChildren(bool recursive = false) const;

	void GetChildren() const;

    Node* GetChild(unsigned index) const;
    Node* GetChild(const String& name, bool recursive = false) const;
    Node* GetChild(const char* name, bool recursive = false) const;
    Node* GetChild(StringHash nameHash, bool recursive = false) const;

    unsigned GetNumComponents() const;

    unsigned GetNumNetworkComponents() const;

    Component* GetComponent(StringHash type, bool recursive = false) const;
    bool HasComponent(StringHash type) const;

    const Variant& GetVar(StringHash key) const;

    const VariantMap& GetVars() const;

    void SetID(unsigned id);
    void SetScene(Scene* scene);
    void ResetScene();
    void SetNetPositionAttr(const Vector3& value);
    const Vector3& GetNetPositionAttr() const;

    bool Load(Deserializer& source, SceneResolver& resolver, bool loadChildren = true, bool rewriteIDs = false, CreateMode mode = REPLICATED);

    //bool LoadXML(const XMLElement& source, SceneResolver& resolver, bool loadChildren = true, bool rewriteIDs = false, CreateMode mode = REPLICATED);

    void PrepareNetworkUpdate();
    void CleanupConnection(Connection* connection);
    void MarkReplicationDirty();
    Node* CreateChild(unsigned id, CreateMode mode);
    void AddComponent(Component* component, unsigned id, CreateMode mode);
    unsigned GetNumPersistentChildren() const;
    unsigned GetNumPersistentComponents() const;

    void SetPositionSilent(const Vector3& position);
    void SetRotationSilent(const Quaternion& rotation);
    void SetScaleSilent(const Vector3& scale);
    void SetTransformSilent(const Vector3& position, const Quaternion& rotation, const Vector3& scale);

	void* GetComponents( const String &name = "Component", bool recursive = false );

    AnimationController* GetAnimationController(bool recursive = false) const;
    DaoComponent* GetDaoComponent(const String &name, bool recursive = false) const;
    DaoComponent* GetOrCreateDaoComponent(CreateMode mode = REPLICATED, unsigned id = 0);
    DaoComponent* CreateDaoComponent(CreateMode mode = REPLICATED, unsigned id = 0);

	CustomGeometry* CreateCustomGeometry();
	CustomGeometry* GetCustomGeometry() const;

	RigidBody* CreateRigidBody();
	RigidBody* GetRigidBody() const;

	CollisionShape* CreateCollisionShape();
	CollisionShape* GetCollisionShape() const;

	Octree* GetOctree();
};



class SplinePath : public Component
{
public:
    SplinePath(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    virtual void ApplyAttributes();
    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    void AddControlPoint(Node* point, unsigned index = MATH_MAX_UNSIGNED);
    void RemoveControlPoint(Node* point);
    void ClearControlPoints();

    void SetInterpolationMode(InterpolationMode interpolationMode);

    void SetSpeed(float speed);
    void SetPosition(float factor);
    void SetControlledNode(Node* controlled);

    InterpolationMode GetInterpolationMode() const;

    float GetSpeed() const;
    float GetLength() const;

    Vector3 GetPosition() const;

    Node* GetControlledNode() const;

    Vector3 GetPoint(float factor) const;

    void Move(float timeStep);
    void Reset();

    bool IsFinished() const;

    //void SetControlPointIdsAttr(const VariantVector& value);
    //const VariantVector& GetControlPointIdsAttr() const;

    void SetControlledIdAttr(unsigned value);

    unsigned GetControlledIdAttr() const;
};




class UnknownComponent : public Component
{
public:
    UnknownComponent(Context* context);

    static void RegisterObject(Context* context);

    virtual StringHash GetType() const;

    virtual const String& GetTypeName() const;

    //virtual const Vector<AttributeInfo>* GetAttributes() const;

    virtual bool Load(Deserializer& source);
    virtual bool LoadXML(const XMLElement& source);
    virtual bool Save(Serializer& dest) const;
    virtual bool SaveXML(XMLElement& dest) const;

    void SetTypeName(const String& typeName);
    void SetType(StringHash typeHash);

    //const Vector<String>& GetXMLAttributes() const;
    //const PODVector<unsigned char>& GetBinaryAttributes() const;

    bool GetUseXML() const;

    static Craft::StringHash GetTypeStatic();
    static const Craft::String& GetTypeNameStatic();
};




enum LoadMode
{
    LOAD_RESOURCES_ONLY = 0,
    LOAD_SCENE,
    LOAD_SCENE_AND_RESOURCES
};


class Scene : public Node
{
public:
    Scene(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    virtual bool Load(Deserializer& source);
    virtual bool Save(Serializer& dest) const;
    //virtual bool LoadXML(const XMLElement& source, bool setInstanceDefault = false);
    virtual void MarkNetworkUpdate();
    //virtual void AddReplicationState(NodeReplicationState* state);

    bool LoadXML(Deserializer& source);
    bool SaveXML(Serializer& dest, const String& indentation = "\t") const;
    bool LoadAsync(File* file, LoadMode mode = LOAD_SCENE_AND_RESOURCES);
    bool LoadAsyncXML(File* file, LoadMode mode = LOAD_SCENE_AND_RESOURCES);
    void StopAsyncLoading();

    Node* Instantiate(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED);

    //Node* InstantiateXML(const XMLElement& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED);

    Node* InstantiateXML(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED);

    void Clear(bool clearReplicated = true, bool clearLocal = true);
    void SetUpdateEnabled(bool enable);
    void SetTimeScale(float scale);
    void SetElapsedTime(float time);
    void SetSmoothingConstant(float constant);
    void SetSnapThreshold(float threshold);
    void SetAsyncLoadingMs(int ms);
    //void AddRequiredPackageFile(PackageFile* package);
    //void ClearRequiredPackageFiles();
    void RegisterVar(const String& name);
    void UnregisterVar(const String& name);
    void UnregisterAllVars();

    Node* GetNode(unsigned id) const;
    Component* GetComponent(unsigned id) const;

    bool IsUpdateEnabled() const;
    bool IsAsyncLoading() const;

    float GetAsyncProgress() const;

    LoadMode GetAsyncLoadMode() const;

    const String& GetFileName() const;

    unsigned GetChecksum() const;

    float GetTimeScale() const;
    float GetElapsedTime() const;

    float GetSmoothingConstant() const;
    float GetSnapThreshold() const;

    int GetAsyncLoadingMs() const;

    const String& GetVarName(StringHash hash) const;

    void Update(float timeStep);
    void BeginThreadedUpdate();
    void EndThreadedUpdate();
    void DelayedMarkedDirty(Component* component);

    bool IsThreadedUpdate() const;

    unsigned GetFreeNodeID(CreateMode mode);
    unsigned GetFreeComponentID(CreateMode mode);
    void NodeAdded(Node* node);
    void NodeRemoved(Node* node);
    void ComponentAdded(Component* component);
    void ComponentRemoved(Component* component);
    void SetVarNamesAttr(const String& value);
    String GetVarNamesAttr() const;
    void PrepareNetworkUpdate();
    void CleanupConnection(Connection* connection);
    void MarkNetworkUpdate(Node* node);
    void MarkNetworkUpdate(Component* component);
    void MarkReplicationDirty(Node* node);

	Camera* GetMainCamera();

};







////////////////////////
// From Craft/Script:
////////////////////////



class ScriptComponentFile : public Resource
{
public:

    ScriptComponentFile(Context* context);

    static void RegisterObject(Context* context);
};



class ScriptComponent : public Component
{
public:

    ScriptComponent(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    virtual const String& GetComponentClassName() const = 0;

    virtual ScriptComponentFile* GetComponentFile() const = 0;

    VariantMap& GetFieldValues();

};




class DaoComponentFile : public ScriptComponentFile
{
public:

	DaoComponentFile(Context* context);

	static void RegisterObject(Context* context);

	virtual bool BeginLoad(Deserializer& source);
	virtual bool Save(Serializer& dest) const;

	DaoComponent* CreateDaoComponent();

	bool PushModule();

};



class DaoComponent : public ScriptComponent
{
public:
    DaoComponent(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    bool Load(Deserializer& source);
    //bool LoadXML(const XMLElement& source, bool setInstanceDefault);
    void ApplyAttributes();

    bool MatchScriptName(const String& path);

    virtual void OnSetEnabled();

    void SetUpdateEventMask(unsigned char mask);

    unsigned char GetUpdateEventMask() const;
    bool IsDelayedStartCalled() const;

    void SetDestroyed();

    ScriptComponentFile* GetComponentFile();

    void SetComponentFile(DaoComponentFile* cfile);

    //ResourceRef GetComponentFileAttr() const;
    //void SetComponentFileAttr(const ResourceRef& value);

    const String& GetComponentClassName() const;

	void SetData( const char *key, void *data );
	void* GetData( const char *key );

protected:

    virtual void Start() = 0;
    virtual void DelayedStart() = 0;
    virtual void Stop() = 0;
    virtual void Update(float timeStep) = 0;
    virtual void PostUpdate(float timeStep) = 0;
    virtual void FixedUpdate(float timeStep) = 0;
    virtual void FixedPostUpdate(float timeStep) = 0;

};



////////////////////////
// From Craft/Graphics:
////////////////////////


enum PrimitiveType
{
    TRIANGLE_LIST = 0,
    LINE_LIST,
    POINT_LIST,
    TRIANGLE_STRIP,
    LINE_STRIP,
    TRIANGLE_FAN
};

enum GeometryType
{
    GEOM_STATIC = 0,
    GEOM_SKINNED = 1,
    GEOM_INSTANCED = 2,
    GEOM_BILLBOARD = 3,
    GEOM_STATIC_NOINSTANCING = 4,
    MAX_GEOMETRYTYPES = 4,
};

enum BlendMode
{
    BLEND_REPLACE = 0,
    BLEND_ADD,
    BLEND_MULTIPLY,
    BLEND_ALPHA,
    BLEND_ADDALPHA,
    BLEND_PREMULALPHA,
    BLEND_INVDESTALPHA,
    BLEND_SUBTRACT,
    BLEND_SUBTRACTALPHA,
    MAX_BLENDMODES
};

enum CompareMode
{
    CMP_ALWAYS = 0,
    CMP_EQUAL,
    CMP_NOTEQUAL,
    CMP_LESS,
    CMP_LESSEQUAL,
    CMP_GREATER,
    CMP_GREATEREQUAL,
    MAX_COMPAREMODES
};

enum CullMode
{
    CULL_NONE = 0,
    CULL_CCW,
    CULL_CW,
    MAX_CULLMODES
};

enum FillMode
{
    FILL_SOLID = 0,
    FILL_WIREFRAME,
    FILL_POINT
};

enum StencilOp
{
    OP_KEEP = 0,
    OP_ZERO,
    OP_REF,
    OP_INCR,
    OP_DECR
};

enum MaterialQuality : unsigned
{
    QUALITY_LOW = 0,
    QUALITY_MEDIUM = 1,
    QUALITY_HIGH = 2,
    QUALITY_MAX = 15,
};

enum TextureFilterMode
{
    FILTER_NEAREST = 0,
    FILTER_BILINEAR,
    FILTER_TRILINEAR,
    FILTER_ANISOTROPIC,
    FILTER_DEFAULT,
    MAX_FILTERMODES
};

enum TextureAddressMode
{
    ADDRESS_WRAP = 0,
    ADDRESS_MIRROR,
    ADDRESS_CLAMP,
    ADDRESS_BORDER,
    MAX_ADDRESSMODES
};

enum TextureCoordinate
{
    COORD_U = 0,
    COORD_V,
    COORD_W,
    MAX_COORDS
};

enum TextureUsage
{
    TEXTURE_STATIC = 0,
    TEXTURE_DYNAMIC,
    TEXTURE_RENDERTARGET,
    TEXTURE_DEPTHSTENCIL
};

enum CubeMapFace
{
    FACE_POSITIVE_X = 0,
    FACE_NEGATIVE_X,
    FACE_POSITIVE_Y,
    FACE_NEGATIVE_Y,
    FACE_POSITIVE_Z,
    FACE_NEGATIVE_Z,
    MAX_CUBEMAP_FACES
};

enum CubeMapLayout
{
    CML_HORIZONTAL = 0,
    CML_HORIZONTALNVIDIA,
    CML_HORIZONTALCROSS,
    CML_VERTICALCROSS,
    CML_BLENDER
};

enum RenderSurfaceUpdateMode
{
    SURFACE_MANUALUPDATE = 0,
    SURFACE_UPDATEVISIBLE,
    SURFACE_UPDATEALWAYS
};

enum ShaderType
{
    VS = 0,
    PS,
};

enum ShaderParameterGroup
{
    SP_FRAME = 0,
    SP_CAMERA,
    SP_ZONE,
    SP_LIGHT,
    SP_MATERIAL,
    SP_OBJECT,
    SP_CUSTOM,
    MAX_SHADER_PARAMETER_GROUPS
};

enum TextureUnit
{
    TU_DIFFUSE = 0,
    TU_ALBEDOBUFFER = 0,
    TU_NORMAL = 1,
    TU_NORMALBUFFER = 1,
    TU_SPECULAR = 2,
    TU_EMISSIVE = 3,
    TU_ENVIRONMENT = 4,
};

enum FaceCameraMode
{
    FC_NONE = 0,
    FC_ROTATE_XYZ,
    FC_ROTATE_Y,
    FC_LOOKAT_XYZ,
    FC_LOOKAT_Y
};

enum ShadowQuality
{
    SHADOWQUALITY_SIMPLE_16BIT = 0,
    SHADOWQUALITY_SIMPLE_24BIT,
    SHADOWQUALITY_PCF_16BIT,
    SHADOWQUALITY_PCF_24BIT,
    SHADOWQUALITY_VSM,
    SHADOWQUALITY_BLUR_VSM
};


static const int QUALITY_LOW = 0;
static const int QUALITY_MEDIUM = 1;
static const int QUALITY_HIGH = 2;
static const int QUALITY_MAX = 15;

#if 0
static const int SHADOWQUALITY_LOW_16BIT = 0;
static const int SHADOWQUALITY_LOW_24BIT = 1;
static const int SHADOWQUALITY_HIGH_16BIT = 2;
static const int SHADOWQUALITY_HIGH_24BIT = 3;
#endif

#if 0
static const unsigned CLEAR_COLOR = 0x1;
static const unsigned CLEAR_DEPTH = 0x2;
static const unsigned CLEAR_STENCIL = 0x4;

static const unsigned MASK_NONE = 0x0;
static const unsigned MASK_POSITION = 0x1;
static const unsigned MASK_NORMAL = 0x2;
static const unsigned MASK_COLOR = 0x4;
static const unsigned MASK_TEXCOORD1 = 0x8;
static const unsigned MASK_TEXCOORD2 = 0x10;
static const unsigned MASK_CUBETEXCOORD1 = 0x20;
static const unsigned MASK_CUBETEXCOORD2 = 0x40;
static const unsigned MASK_TANGENT = 0x80;
static const unsigned MASK_BLENDWEIGHTS = 0x100;
static const unsigned MASK_BLENDINDICES = 0x200;
static const unsigned MASK_INSTANCEMATRIX1 = 0x400;
static const unsigned MASK_INSTANCEMATRIX2 = 0x800;
static const unsigned MASK_INSTANCEMATRIX3 = 0x1000;
static const unsigned MASK_DEFAULT = 0xffffffff;
static const unsigned NO_ELEMENT = 0xffffffff;
#endif



enum LightType
{
    LIGHT_DIRECTIONAL = 0,
    LIGHT_SPOT,
    LIGHT_POINT
};

class Graphics;
class Texture;
class Light;

class Viewport;
class RenderSurface;
class Renderer;


struct BiasParameters
{
    BiasParameters();
    BiasParameters(const BiasParameters& other);
    BiasParameters(float constantBias, float slopeScaledBias);

    void Validate();

    float constantBias_;
    float slopeScaledBias_;
};

struct CascadeParameters
{
    CascadeParameters();
    CascadeParameters(const CascadeParameters& other);
    CascadeParameters(float split1, float split2, float split3, float split4, float fadeStart, float biasAutoAdjust = 1.0f);

    void Validate();

    float GetShadowRange() const;

    float fadeStart_;
    float biasAutoAdjust_;
};

struct FocusParameters
{
    FocusParameters();
    FocusParameters(const FocusParameters& other);
    FocusParameters(bool focus, bool nonUniform, bool autoSize, float quantize, float minView);

    void Validate();

    bool focus_;
    bool nonUniform_;
    bool autoSize_;
    float quantize_;
    float minView_;
};



enum PassLightingMode
{
    LIGHTING_UNLIT = 0,
    LIGHTING_PERVERTEX,
    LIGHTING_PERPIXEL
};


class Pass : public RefCounted
{

public:
    Pass(const String& passName);
    void SetBlendMode(BlendMode mode);
    void SetCullMode(CullMode mode);
    void SetDepthTestMode(CompareMode mode);
    void SetLightingMode(PassLightingMode mode);
    void SetDepthWrite(bool enable);
    void SetAlphaToCoverage(bool enable);
    void SetIsDesktop(bool enable);
    void SetVertexShader(const String& name);
    void SetPixelShader(const String& name);
    void SetVertexShaderDefines(const String& defines);
    void SetPixelShaderDefines(const String& defines);
    void SetVertexShaderDefineExcludes(const String& excludes);
    void SetPixelShaderDefineExcludes(const String& excludes);
    void ReleaseShaders();
    void MarkShadersLoaded(unsigned frameNumber);

    const String& GetName() const;

    unsigned GetIndex() const;

    BlendMode GetBlendMode() const;

    CullMode GetCullMode() const;

    CompareMode GetDepthTestMode() const;

    PassLightingMode GetLightingMode() const;

    unsigned GetShadersLoadedFrameNumber() const;
    bool GetDepthWrite() const;

    bool GetAlphaToCoverage() const;

    bool IsDesktop() const;

    const String& GetVertexShader() const;

    const String& GetPixelShader() const;

    const String& GetVertexShaderDefines() const;

    const String& GetPixelShaderDefines() const;

    const String& GetVertexShaderDefineExcludes() const;

    const String& GetPixelShaderDefineExcludes() const;
    //Vector<SharedPtr<ShaderVariation> >& GetVertexShaders();

    //Vector<SharedPtr<ShaderVariation> >& GetPixelShaders();

    String GetEffectiveVertexShaderDefines() const;
    String GetEffectivePixelShaderDefines() const;
};


class Technique : public Resource
{
public:
    Technique(Context* context);
    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);

    void SetIsDesktop(bool enable);
    Pass* CreatePass(const String& passName);
    void RemovePass(const String& passName);
    void ReleaseShaders();
    //SharedPtr<Technique> Clone(const String& cloneName = String::EMPTY) const;

    bool IsDesktop() const;

    bool IsSupported() const;

    bool HasPass(unsigned passIndex) const;

    bool HasPass(const String& passName) const;

    Pass* GetPass(unsigned passIndex) const;

    Pass* GetPass(const String& passName) const;

    Pass* GetSupportedPass(unsigned passIndex) const;
    Pass* GetSupportedPass(const String& passName) const;

    unsigned GetNumPasses() const;
    //Vector<String> GetPassNames() const;
    //PODVector<Pass*> GetPasses() const;

    //SharedPtr<Technique> CloneWithDefines(const String& vsDefines, const String& psDefines);

    static unsigned GetPassIndex(const String& passName);
};




class Geometry : public Object
{

public:
    Geometry(Context* context);

    void SetLodDistance(float distance);
    void Draw(Graphics* graphics);

    PrimitiveType GetPrimitiveType() const;

    float GetLodDistance() const;
    float GetHitDistance(const Ray& ray, Vector3* outNormal = 0, Vector2* outUV = 0) const;
    bool IsInside(const Ray& ray) const;

    bool IsEmpty() const;

};



class Texture : public Resource
{
public:
    Texture(Context* context);

    void SetNumLevels(unsigned levels);
    void SetFilterMode(TextureFilterMode filter);
    void SetAddressMode(TextureCoordinate coord, TextureAddressMode address);
    void SetShadowCompare(bool enable);
    void SetBorderColor(const Color& color);
    void SetSRGB(bool enable);
    void SetBackupTexture(Texture* texture);
    void SetMipsToSkip(MaterialQuality quality, int mips);
    void SetParametersDirty();
    void UpdateParameters();

    unsigned GetTarget() const;
    unsigned GetFormat() const;

    bool IsCompressed() const;

    unsigned GetLevels() const;

    int GetWidth() const;
    int GetHeight() const;
    int GetDepth() const;

    bool GetParametersDirty() const;

    TextureFilterMode GetFilterMode() const;

    TextureAddressMode GetAddressMode(TextureCoordinate coord) const;

    bool GetShadowCompare() const;

    const Color& GetBorderColor() const;

    bool GetSRGB() const;

    Texture* GetBackupTexture() const;

    int GetMipsToSkip(MaterialQuality quality) const;
    int GetLevelWidth(unsigned level) const;
    int GetLevelHeight(unsigned level) const;
    int GetLevelDepth(unsigned level) const;

    TextureUsage GetUsage() const;

    unsigned GetDataSize(int width, int height) const;
    unsigned GetDataSize(int width, int height, int depth) const;
    unsigned GetRowDataSize(int width) const;
    unsigned GetComponents() const;

    static unsigned GetExternalFormat(unsigned format);
    static unsigned GetDataType(unsigned format);

    unsigned GetSRGBFormat(unsigned format);

};



class Texture2D : public Texture
{
public:
    Texture2D(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool EndLoad();
    virtual void Release();

    bool SetSize(int width, int height, unsigned format, TextureUsage usage = TEXTURE_STATIC);
    bool SetData(unsigned level, int x, int y, int width, int height, const void* data);
    bool SetData(Image *image, bool useAlpha = false);

    bool GetData(unsigned level, void* dest) const;

    RenderSurface* GetRenderSurface() const;
};



class TextureCube : public Texture
{
public:
    TextureCube(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool EndLoad();
    virtual void Release();

    bool SetSize(int size, unsigned format, TextureUsage usage = TEXTURE_STATIC);
    bool SetData(CubeMapFace face, unsigned level, int x, int y, int width, int height, const void* data);
    bool SetData(CubeMapFace face, Deserializer& source);
    //bool SetData(CubeMapFace face, SharedPtr<Image> image, bool useAlpha = false);

    bool GetData(CubeMapFace face, unsigned level, void* dest) const;

    RenderSurface* GetRenderSurface(CubeMapFace face) const;

};



enum UpdateGeometryType
{
    UPDATE_NONE = 0,
    UPDATE_MAIN_THREAD,
    UPDATE_WORKER_THREAD
};


struct FrameInfo
{
    unsigned frameNumber_;
    float timeStep_;
    IntVector2 viewSize_;
    Camera* camera_;
};



class Drawable : public Component
{

public:
    Drawable(Context* context, unsigned char drawableFlags = 0);

    static void RegisterObject(Context* context);

    virtual void OnSetEnabled();

    virtual Geometry* GetLodGeometry(unsigned batchIndex, unsigned level);

    void SetDrawDistance(float distance);
    void SetShadowDistance(float distance);
    void SetLodBias(float bias);
    void SetViewMask(unsigned mask);
    void SetLightMask(unsigned mask);
    void SetShadowMask(unsigned mask);
    void SetZoneMask(unsigned mask);
    void SetMaxLights(unsigned num);
    void SetCastShadows(bool enable);
    void SetOccluder(bool enable);
    void SetOccludee(bool enable);
    void MarkForUpdate();

    const BoundingBox& GetBoundingBox() const;
    const BoundingBox& GetWorldBoundingBox();

    unsigned char GetDrawableFlags() const;

    float GetDrawDistance() const;
    float GetShadowDistance() const;

    float GetLodBias() const;

    unsigned GetViewMask() const;
    unsigned GetLightMask() const;
    unsigned GetShadowMask() const;
    unsigned GetZoneMask() const;
    unsigned GetMaxLights() const;

    bool GetCastShadows() const;

    bool IsOccluder() const;
    bool IsOccludee() const;

    bool IsInView() const;
    bool IsInView(Camera* camera) const;

    void SetSortValue(float value);

    void SetMinMaxZ(float minZ, float maxZ);

    void MarkInView(unsigned frameNumber);
    void LimitLights();
    void LimitVertexLights(bool removeConvertedLights);

    void SetBasePass(unsigned batchIndex);

    float GetDistance() const;
    float GetLodDistance() const;

    float GetSortValue() const;

    bool HasBasePass(unsigned batchIndex) const;

    Light* GetFirstLight() const;

    float GetMinZ() const;
    float GetMaxZ() const;

    void AddLight(Light* light);

    void AddVertexLight(Light* light);

protected:
    virtual void OnWorldBoundingBoxUpdate() = 0;
};



class Light : public Drawable
{

public:
    Light(Context* context);

    static void RegisterObject(Context* context);

    void SetLightType(LightType type);
    void SetPerVertex(bool enable);
    void SetColor(const Color& color);
    void SetSpecularIntensity(float intensity);
    void SetBrightness(float brightness);
    void SetRange(float range);
    void SetFov(float fov);
    void SetAspectRatio(float aspectRatio);
    void SetFadeDistance(float distance);
    void SetShadowFadeDistance(float distance);
    void SetShadowBias(const BiasParameters& parameters);
    void SetShadowCascade(const CascadeParameters& parameters);
    void SetShadowFocus(const FocusParameters& parameters);
    void SetShadowIntensity(float intensity);
    void SetShadowResolution(float resolution);
    void SetShadowNearFarRatio(float nearFarRatio);
    void SetRampTexture(Texture* texture);
    void SetShapeTexture(Texture* texture);

    LightType GetLightType() const;

    bool GetPerVertex() const;

    const Color& GetColor() const;

    float GetSpecularIntensity() const;
    float GetBrightness() const;

    Color GetEffectiveColor() const;

    float GetEffectiveSpecularIntensity() const;
    float GetRange() const;
    float GetFov() const;
    float GetAspectRatio() const;
    float GetFadeDistance() const;
    float GetShadowFadeDistance() const;

    const BiasParameters& GetShadowBias() const;
    const CascadeParameters& GetShadowCascade() const;
    const FocusParameters& GetShadowFocus() const;

    float GetShadowIntensity() const;
    float GetShadowResolution() const;
    float GetShadowNearFarRatio() const;

    Texture* GetRampTexture() const;
    Texture* GetShapeTexture() const;

    Frustum GetFrustum() const;
    int GetNumShadowSplits() const;

    bool IsNegative() const;

    void SetIntensitySortValue(float distance);
    void SetIntensitySortValue(const BoundingBox& box);
    const Matrix3x4& GetVolumeTransform(Camera* camera);

    float GetIntensityDivisor(float attenuation = 1.0f) const;
};



class Camera : public Component
{
public:
    Camera(Context* context);

    void SetNearClip(float nearClip);
    void SetFarClip(float farClip);
    void SetFov(float fov);
    void SetOrthoSize(float orthoSize);
    void SetOrthoSize(const Vector2& orthoSize);
    void SetAspectRatio(float aspectRatio);
    void SetFillMode(FillMode mode);
    void SetZoom(float zoom);
    void SetLodBias(float bias);
    void SetViewMask(unsigned mask);
    void SetViewOverrideFlags(unsigned flags);
    void SetOrthographic(bool enable);
    void SetAutoAspectRatio(bool enable);
    void SetProjectionOffset(const Vector2& offset);
    void SetUseReflection(bool enable);
    void SetReflectionPlane(const Plane& plane);
    void SetUseClipping(bool enable);
    void SetClipPlane(const Plane& plane);
    void SetFlipVertical(bool enable);

    float GetFarClip() const;
    float GetNearClip() const;
    float GetFov() const;
    float GetOrthoSize() const;
    float GetAspectRatio() const;
    float GetZoom() const;
    float GetLodBias() const;

    unsigned GetViewMask() const;
    unsigned GetViewOverrideFlags() const;

    FillMode GetFillMode() const;

    bool IsOrthographic() const;
    bool GetAutoAspectRatio() const;

    const Frustum& GetFrustum() const;
    Matrix4 GetProjection() const;
    const Matrix3x4& GetView() const;
    void GetFrustumSize(Vector3& near, Vector3& far) const;
    float GetHalfViewSize() const;
    Frustum GetSplitFrustum(float nearClip, float farClip) const;
    Frustum GetViewSpaceFrustum() const;
    Frustum GetViewSpaceSplitFrustum(float nearClip, float farClip) const;
    Ray GetScreenRay(float x, float y) const;
    Vector2 WorldToScreenPoint(const Vector3& worldPos) const;
    Vector3 ScreenToWorldPoint(const Vector3& screenPos) const;

    const Vector2& GetProjectionOffset() const;

    const Plane& GetReflectionPlane() const;
    const Plane& GetClipPlane() const;

    bool GetUseReflection() const;
    bool GetUseClipping() const;
    bool GetFlipVertical() const;
    bool GetReverseCulling() const;

    float GetDistance(const Vector3& worldPos) const;
    float GetDistanceSquared(const Vector3& worldPos) const;
    float GetLodDistance(float distance, float scale, float bias) const;
    Quaternion GetFaceCameraRotation(const Vector3& position, const Quaternion& rotation, FaceCameraMode mode);
    Matrix3x4 GetEffectiveWorldTransform() const;
    bool IsProjectionValid() const;

    void SetAspectRatioInternal(float aspectRatio);
    void SetOrthoSizeAttr(float orthoSize);
    void SetReflectionPlaneAttr(const Vector4& value);
    Vector4 GetReflectionPlaneAttr() const;
    void SetClipPlaneAttr(const Vector4& value);
    Vector4 GetClipPlaneAttr() const;

};




class Material : public Resource
{
public:
    Material(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool EndLoad();
    virtual bool Save(Serializer& dest) const;

    //bool Load(const XMLElement& source);
    //bool Save(XMLElement& dest) const;
    void SetNumTechniques(unsigned num);
    //void SetTechnique(unsigned index, Technique* tech, unsigned qualityLevel = 0, float lodDistance = 0.0f); // TODO;
    void SetShaderParameter(const String& name, const Variant& value);
    void SetShaderParameterAnimation(const String& name, ValueAnimation* animation, WrapMode wrapMode = WM_LOOP, float speed = 1.0f);
    void SetShaderParameterAnimationWrapMode(const String& name, WrapMode wrapMode);
    void SetShaderParameterAnimationSpeed(const String& name, float speed);
    void SetTexture(TextureUnit unit, Texture* texture);
    void SetUVTransform(const Vector2& offset, float rotation, const Vector2& repeat);
    void SetUVTransform(const Vector2& offset, float rotation, float repeat);
    void SetCullMode(CullMode mode);
    void SetShadowCullMode(CullMode mode);
    void SetFillMode(FillMode mode);
    void SetDepthBias(const BiasParameters& parameters);
    void SetRenderOrder(unsigned char order);
    void SetScene(Scene* scene);
    void RemoveShaderParameter(const String& name);
    void ReleaseShaders();

	//Material* Clone(const String& cloneName = "") const;

    //void SortTechniques();
    void MarkForAuxView(unsigned frameNumber);

    unsigned GetNumTechniques() const;

    //const TechniqueEntry& GetTechniqueEntry(unsigned index) const;
    Technique* GetTechnique(unsigned index) const;
    Pass* GetPass(unsigned index, const String& passName) const;

    Texture* GetTexture(TextureUnit unit) const;

    const Variant& GetShaderParameter(const String& name) const;
    ValueAnimation* GetShaderParameterAnimation(const String& name) const;
    WrapMode GetShaderParameterAnimationWrapMode(const String& name) const;
    float GetShaderParameterAnimationSpeed(const String& name) const;

    CullMode GetCullMode() const;
    CullMode GetShadowCullMode() const;
    FillMode GetFillMode() const;
    const BiasParameters& GetDepthBias() const;

    unsigned char GetRenderOrder() const;

    unsigned GetAuxViewFrameNumber() const;

    bool GetOcclusion() const;

    bool GetSpecular() const;

    Scene* GetScene() const;

    unsigned GetShaderParameterHash() const;

    static String GetTextureUnitName(TextureUnit unit);
    static Variant ParseShaderParameterValue(const String& value);
    static const char** GetTextureUnitNames();

};


class Shader;

class ShaderVariation
{

public:
    ShaderVariation(Shader* owner, ShaderType type);

    virtual void OnDeviceLost();
    virtual void Release();

    bool Create();
    void SetName(const String& name);
    void SetDefines(const String& defines);

    Shader* GetOwner() const;

    ShaderType GetShaderType() const;

    const String& GetName() const;
    const String& GetDefines() const;

    String GetFullName() const;

    const String& GetCompilerOutput() const;
};



class Shader : public Resource
{

public:
    Shader(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool EndLoad();

    ShaderVariation* GetVariation(ShaderType type, const String& defines);
    ShaderVariation* GetVariation(ShaderType type, const char* defines);

    const String& GetSourceCode(ShaderType type) const;

    unsigned GetTimeStamp() const;
};



class ShaderProgram
{
private:
	ShaderProgram();
};



enum RenderCommandType
{
    CMD_NONE = 0,
    CMD_CLEAR,
    CMD_SCENEPASS,
    CMD_QUAD,
    CMD_FORWARDLIGHTS,
    CMD_LIGHTVOLUMES,
    CMD_RENDERUI
};

enum RenderCommandSortMode
{
    SORT_FRONTTOBACK = 0,
    SORT_BACKTOFRONT
};

enum RenderTargetSizeMode
{
    SIZE_ABSOLUTE = 0,
    SIZE_VIEWPORTDIVISOR,
    SIZE_VIEWPORTMULTIPLIER
};


struct RenderTargetInfo
{
    RenderTargetInfo();
    RenderTargetInfo(const RenderTargetInfo& other);

    //void Load(const XMLElement& element);
};


struct RenderPathCommand
{
    RenderPathCommand();

    //void Load(const XMLElement& element);
    void SetTextureName(TextureUnit unit, const String& name);
    void SetShaderParameter(const String& name, const Variant& value);
    void RemoveShaderParameter(const String& name);
    void SetNumOutputs(unsigned num);
    void SetOutput(unsigned index, const String& name, CubeMapFace face = FACE_POSITIVE_X);
    void SetOutputName(unsigned index, const String& name);
    void SetOutputFace(unsigned index, CubeMapFace face);
    void SetDepthStencilName(const String& name);

    const String& GetTextureName(TextureUnit unit) const;
    const Variant& GetShaderParameter(const String& name) const;

    unsigned GetNumOutputs() const;

    const String& GetOutputName(unsigned index) const;
    CubeMapFace GetOutputFace(unsigned index) const;

    const String& GetDepthStencilName() const;
};



class RenderPath
{
public:
    RenderPath();

    //bool Load(XMLFile* file);
    //bool Append(XMLFile* file);
    void SetEnabled(const String& tag, bool active);
    void ToggleEnabled(const String& tag);
    void SetRenderTarget(unsigned index, const RenderTargetInfo& info);
    void AddRenderTarget(const RenderTargetInfo& info);
    void RemoveRenderTarget(unsigned index);
    void RemoveRenderTarget(const String& name);
    void RemoveRenderTargets(const String& tag);
    void SetCommand(unsigned index, const RenderPathCommand& command);
    void AddCommand(const RenderPathCommand& command);
    void InsertCommand(unsigned index, const RenderPathCommand& command);
    void RemoveCommand(unsigned index);
    void RemoveCommands(const String& tag);
    void SetShaderParameter(const String& name, const Variant& value);

    unsigned GetNumRenderTargets() const;
    unsigned GetNumCommands() const;

    RenderPathCommand* GetCommand(unsigned index);

    const Variant& GetShaderParameter(const String& name) const;
};



#if 0
class OctreeQuery
{
public:
    OctreeQuery(PODVector<Drawable*>& result, unsigned char drawableFlags, unsigned viewMask);

    virtual Intersection TestOctant(const BoundingBox& box, bool inside) = 0;
    virtual void TestDrawables(Drawable** start, Drawable** end, bool inside) = 0;
};

class PointOctreeQuery : public OctreeQuery
{
public:
    PointOctreeQuery(PODVector<Drawable*>& result, const Vector3& point, unsigned char drawableFlags = DRAWABLE_ANY, unsigned viewMask = DEFAULT_VIEWMASK);

    virtual Intersection TestOctant(const BoundingBox& box, bool inside);
    virtual void TestDrawables(Drawable** start, Drawable** end, bool inside);
};

class SphereOctreeQuery : public OctreeQuery
{
public:
    SphereOctreeQuery(PODVector<Drawable*>& result, const Sphere& sphere, unsigned char drawableFlags = DRAWABLE_ANY, unsigned viewMask = DEFAULT_VIEWMASK);

    virtual Intersection TestOctant(const BoundingBox& box, bool inside);
    virtual void TestDrawables(Drawable** start, Drawable** end, bool inside);
};

class BoxOctreeQuery : public OctreeQuery
{
public:
    BoxOctreeQuery(PODVector<Drawable*>& result, const BoundingBox& box, unsigned char drawableFlags = DRAWABLE_ANY, unsigned viewMask = DEFAULT_VIEWMASK);

    virtual Intersection TestOctant(const BoundingBox& box, bool inside);
    virtual void TestDrawables(Drawable** start, Drawable** end, bool inside);
};

class FrustumOctreeQuery : public OctreeQuery
{
public:
    FrustumOctreeQuery(PODVector<Drawable*>& result, const Frustum& frustum, unsigned char drawableFlags = DRAWABLE_ANY, unsigned viewMask = DEFAULT_VIEWMASK);

    virtual Intersection TestOctant(const BoundingBox& box, bool inside);
    virtual void TestDrawables(Drawable** start, Drawable** end, bool inside);
};

struct OctreeQueryResult
{
    OctreeQueryResult();

};
#endif


enum RayQueryLevel
{
    RAY_AABB = 0,
    RAY_OBB,
    RAY_TRIANGLE,
    RAY_TRIANGLE_UV
};

class RayOctreeQuery;

#if 0
struct RayQueryResult
{
    RayQueryResult();
};

class RayOctreeQuery
{
public:
    RayOctreeQuery(PODVector<RayQueryResult>& result, const Ray& ray, RayQueryLevel level = RAY_TRIANGLE, float maxDistance = M_INFINITY, unsigned char drawableFlags = DRAWABLE_ANY, unsigned viewMask = DEFAULT_VIEWMASK);

};

class AllContentOctreeQuery : public OctreeQuery
{
public:
    AllContentOctreeQuery(PODVector<Drawable*>& result, unsigned char drawableFlags, unsigned viewMask);

    virtual Intersection TestOctant(const BoundingBox& box, bool inside);
    virtual void TestDrawables(Drawable** start, Drawable** end, bool inside);
};
#endif



static const int NUM_OCTANTS = 8;
static const unsigned ROOT_INDEX = M_MAX_UNSIGNED;

class Octant
{
public:
    Octant(const BoundingBox& box, unsigned level, Octant* parent, Octree* root, unsigned index = ROOT_INDEX);

    Octant* GetOrCreateChild(unsigned index);
    void DeleteChild(unsigned index);
    void InsertDrawable(Drawable* drawable);
    bool CheckDrawableFit(const BoundingBox& box) const;

    void AddDrawable(Drawable* drawable);

    void RemoveDrawable(Drawable* drawable, bool resetOctant = true);

    const BoundingBox& GetWorldBoundingBox() const;

    const BoundingBox& GetCullingBox() const;

    unsigned GetLevel() const;

    Octant* GetParent() const;

    Octree* GetRoot() const;

    unsigned GetNumDrawables() const;

    bool IsEmpty();

    void ResetRoot();
    //void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

};

class Octree : public Component, public Octant
{
public:
    Octree(Context* context);

    static void RegisterObject(Context* context);

    //virtual void OnSetAttribute(const AttributeInfo& attr, const Variant& src);
    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    void SetSize(const BoundingBox& box, unsigned numLevels);
    void Update(const FrameInfo& frame);
    void AddManualDrawable(Drawable* drawable);
    void RemoveManualDrawable(Drawable* drawable);

    //void GetDrawables(OctreeQuery& query) const;
    //void Raycast(RayOctreeQuery& query) const;
    void RaycastSingle(RayOctreeQuery& query) const;

    unsigned GetNumLevels() const;

    void QueueUpdate(Drawable* drawable);
    void CancelUpdate(Drawable* drawable);
    void DrawDebugGeometry(bool depthTest);

};




class View : public Object
{
public:
    View(Context* context);

    bool Define(RenderSurface* renderTarget, Viewport* viewport);
    void Update(const FrameInfo& frame);
    void Render();

    Graphics* GetGraphics() const;
    Renderer* GetRenderer() const;

    Scene* GetScene() const;
    Octree* GetOctree() const;
    Camera* GetCamera() const;

    //const FrameInfo& GetFrameInfo() const;

    RenderSurface* GetRenderTarget() const;

    void SetGlobalShaderParameters();
    void SetCameraShaderParameters( Camera* camera );
    void SetGBufferShaderParameters(const IntVector2& texSize, const IntRect& viewRect);
};



class Viewport : public Object
{
public:
    Viewport(Context* context);
    Viewport(Context* context, Scene* scene, Camera* camera, RenderPath* renderPath = 0);
    Viewport(Context* context, Scene* scene, Camera* camera, const IntRect& rect, RenderPath* renderPath = 0);

    void SetScene(Scene* scene);
    void SetCamera(Camera* camera);
    void SetRect(const IntRect& rect);
    void SetRenderPath(RenderPath* path);
    //void SetRenderPath(XMLFile* file);
    void SetDrawDebug(bool enable);

    Scene* GetScene() const;
    Camera* GetCamera() const;
    View* GetView() const;

    const IntRect& GetRect() const;
    //int GetWidth () const;
    //int GetHeight () const;

    RenderPath* GetRenderPath() const;

    bool GetDrawDebug() const;

    Ray GetScreenRay(int x, int y) const;
    IntVector2 WorldToScreenPoint(const Vector3& worldPos) const;
    Vector3 ScreenToWorldPoint(int x, int y, float depth) const;

    void AllocateView();
};



class RenderSurface
{
public:
    RenderSurface(Texture* parentTexture);

    void SetNumViewports(unsigned num);
    void SetViewport(unsigned index, Viewport* viewport);
    void SetUpdateMode(RenderSurfaceUpdateMode mode);
    void SetLinkedRenderTarget(RenderSurface* renderTarget);
    void SetLinkedDepthStencil(RenderSurface* depthStencil);
    void QueueUpdate();
    void Release();

    Texture* GetParentTexture() const;

    int GetWidth() const;
    int GetHeight() const;
    TextureUsage GetUsage() const;

    unsigned GetNumViewports() const;

    Viewport* GetViewport(unsigned index) const;

    RenderSurfaceUpdateMode GetUpdateMode() const;

    RenderSurface* GetLinkedRenderTarget() const;
    RenderSurface* GetLinkedDepthStencil() const;

    //void WasUpdated();
};



class Renderer : public Object
{
public:
    Renderer(Context* context);

    void SetNumViewports(unsigned num);
    void SetViewport(unsigned index, Viewport* viewport);
    void SetDefaultRenderPath(RenderPath* renderPath);
    //void SetDefaultRenderPath(XMLFile* file);
    void SetHDRRendering(bool enable);
    void SetSpecularLighting(bool enable);
    void SetTextureAnisotropy(int level);
    void SetTextureFilterMode(TextureFilterMode mode);
    void SetTextureQuality(MaterialQuality quality);
    void SetMaterialQuality(MaterialQuality quality);
    void SetDrawShadows(bool enable);
    void SetShadowMapSize(int size);
    void SetShadowQuality(ShadowQuality quality);
    void SetReuseShadowMaps(bool enable);
    void SetMaxShadowMaps(int shadowMaps);
    void SetDynamicInstancing(bool enable);
    void SetMinInstances(int instances);
    void SetMaxSortedInstances(int instances);
    void SetMaxOccluderTriangles(int triangles);
    void SetOcclusionBufferSize(int size);
    void SetOccluderSizeThreshold(float screenSize);
    void SetMobileShadowBiasMul(float mul);
    void SetMobileShadowBiasAdd(float add);
    void ReloadShaders();

    unsigned GetNumViewports() const;

    Viewport* GetViewport(unsigned index) const;
    RenderPath* GetDefaultRenderPath() const;

    bool GetHDRRendering() const;
    bool GetSpecularLighting() const;
    bool GetDrawShadows() const;
    int GetTextureAnisotropy() const;

    TextureFilterMode GetTextureFilterMode() const;

    MaterialQuality GetTextureQuality() const;
	MaterialQuality GetMaterialQuality() const;
    int GetShadowMapSize() const;
    ShadowQuality GetShadowQuality() const;

    bool GetReuseShadowMaps() const;

    int GetMaxShadowMaps() const;

    bool GetDynamicInstancing() const;

    int GetMinInstances() const;
    int GetMaxSortedInstances() const;
    int GetMaxOccluderTriangles() const;
    int GetOcclusionBufferSize() const;

    float GetOccluderSizeThreshold() const;
    float GetMobileShadowBiasMul() const;
    float GetMobileShadowBiasAdd() const;

    unsigned GetNumViews() const;
    unsigned GetNumPrimitives() const;
    unsigned GetNumBatches() const;
    unsigned GetNumGeometries(bool allViews = false) const;
    unsigned GetNumLights(bool allViews = false) const;
    unsigned GetNumShadowMaps(bool allViews = false) const;
    unsigned GetNumOccluders(bool allViews = false) const;

    //Zone* GetDefaultZone() const;

    Material* GetDefaultMaterial() const;

    Texture2D* GetDefaultLightRamp() const;
    Texture2D* GetDefaultLightSpot() const;

    TextureCube* GetFaceSelectCubeMap() const;
    TextureCube* GetIndirectionCubeMap() const;

    //const FrameInfo& GetFrameInfo() const;

    void Update(float timeStep);
    void Render();
    void DrawDebugGeometry(bool depthTest);
    void QueueRenderSurface(RenderSurface* renderTarget);
    void QueueViewport(RenderSurface* renderTarget, Viewport* viewport);

    Geometry* GetLightGeometry(Light* light);
    Geometry* GetQuadGeometry();

    Texture2D* GetShadowMap(Light* light, Camera* camera, unsigned viewWidth, unsigned viewHeight);
    //Texture* GetScreenBuffer(int width, int height, unsigned format, bool cubemap, bool filtered, bool srgb, unsigned persistentKey = 0); // TODO;

    RenderSurface* GetDepthStencil(int width, int height, int multiSample, bool autoResolve);
    //OcclusionBuffer* GetOcclusionBuffer(Camera* camera);
    Camera* GetShadowCamera();

    //void SetBatchShaders(Batch& batch, Technique* tech, bool allowShadows = true);
    //void SetLightVolumeBatchShaders(Batch& batch, const String& vsName, const String& psName, const String& vsDefines, const String& psDefines);
    void SetCullMode(CullMode mode, Camera* camera);
    bool ResizeInstancingBuffer(unsigned numInstances);
    void OptimizeLightByScissor(Light* light, Camera* camera);
    void OptimizeLightByStencil(Light* light, Camera* camera);
    const Rect& GetLightScissor(Light* light, Camera* camera);
};



class Graphics : public Object
{

public:
    Graphics(Context* context_);

    void SetExternalWindow(void* window);
    void SetWindowIcon(Image* windowIcon);
    void SetWindowTitle(const String& windowTitle);
    void SetWindowPosition(const IntVector2& position);
    void SetWindowPosition(int x, int y);
    //void SetWindowSize(int width, int height);
    //void CenterWindow();
    void Raise();

    bool SetMode(int width, int height, bool fullscreen, bool borderless, bool resizable, bool highDPI, bool vsync, bool tripleBuffer, int multiSample, int monitor, int refreshRate);
    bool SetMode(int width, int height);
    void SetSRGB(bool enable);
    void SetFlushGPU(bool enable);
    void SetForceGL2(bool enable);
    void SetOrientations(const String& orientations);
    bool ToggleFullscreen();
    void Close();
    bool TakeScreenShot(Image &destImage);
    bool BeginFrame();
    void EndFrame();
    void Clear(unsigned flags, const Color& color = Color(0.0f, 0.0f, 0.0f, 0.0f), float depth = 1.0f, unsigned stencil = 0);
    bool ResolveToTexture(Texture2D* destination, const IntRect& viewport);

    void SetShaders(ShaderVariation* vs, ShaderVariation* ps);
    void SetShaderParameter(StringHash param, const float* data, unsigned count);
    void SetShaderParameter(StringHash param, float value);
    void SetShaderParameter(StringHash param, const Color& color);
    void SetShaderParameter(StringHash param, const Vector2& vector);
    void SetShaderParameter(StringHash param, const Matrix3& matrix);
    void SetShaderParameter(StringHash param, const Vector3& vector);
    void SetShaderParameter(StringHash param, const Matrix4& matrix);
    void SetShaderParameter(StringHash param, const Vector4& vector);
    void SetShaderParameter(StringHash param, const Matrix3x4& matrix);
    void SetShaderParameter(StringHash param, const Variant& value);
    bool NeedParameterUpdate(ShaderParameterGroup group, const void* source);
    bool HasShaderParameter(StringHash param);
    bool HasTextureUnit(TextureUnit unit);
    void ClearParameterSource(ShaderParameterGroup group);
    void ClearParameterSources();
    void ClearTransformSources();
    void SetTexture(unsigned index, Texture* texture);
    void SetTextureForUpdate(Texture* texture);
    void SetDefaultTextureFilterMode(TextureFilterMode mode);
    //void SetTextureAnisotropy(unsigned level);
    void SetTextureParametersDirty();
    void ResetRenderTargets();
    void ResetRenderTarget(unsigned index);
    void ResetDepthStencil();
    void SetRenderTarget(unsigned index, RenderSurface* renderTarget);
    void SetRenderTarget(unsigned index, Texture2D* texture);
    void SetDepthStencil(RenderSurface* depthStencil);
    void SetDepthStencil(Texture2D* texture);
    void SetViewport(const IntRect& rect);
    void SetBlendMode(BlendMode mode);
    void SetColorWrite(bool enable);
    void SetCullMode(CullMode mode);
    void SetDepthBias(float constantBias, float slopeScaledBias);
    void SetDepthTest(CompareMode mode);
    void SetDepthWrite(bool enable);
    void SetFillMode(FillMode mode);
    void SetScissorTest(bool enable, const Rect& rect = Rect::FULL, bool borderInclusive = true);
    void SetScissorTest(bool enable, const IntRect& rect);
    void SetStencilTest(bool enable, CompareMode mode = CMP_ALWAYS, StencilOp pass = OP_KEEP, StencilOp fail = OP_KEEP, StencilOp zFail = OP_KEEP, unsigned stencilRef = 0, unsigned compareMask = MATH_MAX_UNSIGNED, unsigned writeMask = MATH_MAX_UNSIGNED);
    void SetClipPlane(bool enable, const Plane& clipPlane = Plane::UP, const Matrix3x4& view = Matrix3x4::IDENTITY, const Matrix4& projection = Matrix4::IDENTITY);
    void BeginDumpShaders(const String& fileName);
    void EndDumpShaders();
    void PrecacheShaders(Deserializer& source);

    bool IsInitialized() const;

    void* GetExternalWindow() const;

    const String& GetWindowTitle() const;
    const String& GetApiName() const;

    IntVector2 GetWindowPosition() const;

    int GetWidth() const;
    int GetHeight() const;

    int GetMultiSample() const;

    bool GetFullscreen() const;
    bool GetBorderless() const;
    bool GetResizable() const;

    bool GetVSync() const;
    bool GetTripleBuffer() const;
    bool GetSRGB() const;
    bool GetFlushGPU() const;
    bool GetForceGL2() const;

    const String& GetOrientations() const;

    bool IsDeviceLost() const;

    unsigned GetNumPrimitives() const;
    unsigned GetNumBatches() const;
    unsigned GetDummyColorFormat() const;
    unsigned GetShadowMapFormat() const;
    unsigned GetHiresShadowMapFormat() const;

    bool GetInstancingSupport() const;
    bool GetLightPrepassSupport() const;
    bool GetDeferredSupport() const;
    bool GetAnisotropySupport() const;
    bool GetHardwareShadowSupport() const;
    bool GetReadableDepthSupport() const;
    bool GetSRGBSupport() const;
    bool GetSRGBWriteSupport() const;

    IntVector2 GetDesktopResolution(int monitor) const;
    unsigned GetFormat(CompressedFormat format) const;
    ShaderVariation* GetShader(ShaderType type, const String& name, const String& defines = "") const;
    ShaderVariation* GetShader(ShaderType type, const char* name, const char* defines) const;

    ShaderVariation* GetVertexShader() const;
    ShaderVariation* GetPixelShader() const;
    ShaderProgram* GetShaderProgram() const;

    TextureUnit GetTextureUnit(const String& name);
    const String& GetTextureUnitName(TextureUnit unit);
    Texture* GetTexture(unsigned index) const;

    TextureFilterMode GetDefaultTextureFilterMode() const;

    RenderSurface* GetRenderTarget(unsigned index) const;
    RenderSurface* GetDepthStencil() const;

    IntRect GetViewport() const;

    //unsigned GetTextureAnisotropy() const;

    BlendMode GetBlendMode() const;

    bool GetColorWrite() const;

    CullMode GetCullMode() const;

    float GetDepthConstantBias() const;
    float GetDepthSlopeScaledBias() const;

    CompareMode GetDepthTest() const;

    bool GetDepthWrite() const;

    FillMode GetFillMode() const;

    bool GetStencilTest() const;
    bool GetScissorTest() const;

    const IntRect& GetScissorRect() const;

    CompareMode GetStencilTestMode() const;

    StencilOp GetStencilPass() const;
    StencilOp GetStencilFail() const;
    StencilOp GetStencilZFail() const;

    unsigned GetStencilRef() const;
    unsigned GetStencilCompareMask() const;
    unsigned GetStencilWriteMask() const;

    bool GetUseClipPlane() const;

    IntVector2 GetRenderTargetDimensions() const;

    //void WindowResized();
    //void WindowMoved();
    void CleanupRenderSurface(RenderSurface* surface);
    void CleanupShaderPrograms(ShaderVariation* variation);
    void Restore();
    void Maximize();
    void Minimize();
    void MarkFBODirty();
    void SetVBO(unsigned object);
    void SetUBO(unsigned object);

    static unsigned GetAlphaFormat();
    static unsigned GetLuminanceFormat();
    static unsigned GetLuminanceAlphaFormat();
    static unsigned GetRGBFormat();
    static unsigned GetRGBAFormat();
    static unsigned GetRGBA16Format();
    static unsigned GetRGBAFloat16Format();
    static unsigned GetRGBAFloat32Format();
    static unsigned GetRG16Format();
    static unsigned GetRGFloat16Format();
    static unsigned GetRGFloat32Format();
    static unsigned GetFloat16Format();
    static unsigned GetFloat32Format();
    static unsigned GetLinearDepthFormat();
    static unsigned GetDepthStencilFormat();
    static unsigned GetReadableDepthFormat();
    static unsigned GetFormat(const String& formatName);

    static const Vector2& GetPixelUVOffset();

    static unsigned GetMaxBones();

    static bool GetGL3Support();

    int GetCurrentMonitor();
    //int GetNumMonitors(); // TODO;
    bool GetMaximized();
    //IntVector2 GetMonitorResolution(int monitorId) const; // TODO;
};




////////////////////////
// From Craft/Craft2D:
////////////////////////

#if 0
class PhysicsWorld2D;


class Drawable2D : public Drawable
{
public:
    Drawable2D(Context* context);

    static void RegisterObject(Context* context);

    virtual void OnSetEnabled();

    void SetLayer(int layer);
    void SetOrderInLayer(int orderInLayer);

    int GetLayer() const;
    int GetOrderInLayer() const;

protected:
    virtual void OnWorldBoundingBoxUpdate() = 0;
    virtual void OnDrawOrderChanged() = 0;
    virtual void UpdateSourceBatches() = 0;
};



class SpriteSheet2D;
class Texture2D;

class Sprite2D : public Resource
{
public:
    Sprite2D(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool EndLoad();

    void SetTexture(Texture2D* texture);
    void SetRectangle(const IntRect& rectangle);
    void SetHotSpot(const Vector2& hotSpot);
    void SetOffset(const IntVector2& offset);
    void SetSpriteSheet(SpriteSheet2D* spriteSheet);

    Texture2D* GetTexture() const;

    const IntRect& GetRectangle() const;

    const Vector2& GetHotSpot() const;

    const IntVector2& GetOffset() const;

    SpriteSheet2D* GetSpriteSheet() const;

    bool GetDrawRectangle(Rect& rect, bool flipX = false, bool flipY = false) const;
    bool GetDrawRectangle(Rect& rect, const Vector2& hotSpot, bool flipX = false, bool flipY = false) const;
    bool GetTextureRectangle(Rect& rect, bool flipX = false, bool flipY = false) const;

    //static ResourceRef SaveToResourceRef(Sprite2D* sprite);
    //static Sprite2D* LoadFromResourceRef(Object* object, const ResourceRef& value);
};




class SpriteSheet2D : public Resource
{
public:
    SpriteSheet2D(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool EndLoad();

    Texture2D* GetTexture() const;

    Sprite2D* GetSprite(const String& name) const;
    //void DefineSprite(const String& name, const IntRect& rectangle, const Vector2& hotSpot = Vector2(0.5f, 0.5f), const IntVector2& offset = IntVector2::ZERO);
};



class StaticSprite2D : public Drawable2D
{
public:
    StaticSprite2D(Context* context);

    static void RegisterObject(Context* context);

    void SetSprite(Sprite2D* sprite);
    void SetBlendMode(BlendMode blendMode);
    void SetFlip(bool flipX, bool flipY);
    void SetFlipX(bool flipX);
    void SetFlipY(bool flipY);
    void SetColor(const Color& color);
    void SetAlpha(float alpha);
    void SetUseHotSpot(bool useHotSpot);
    void SetHotSpot(const Vector2& hotspot);
    void SetCustomMaterial(Material* customMaterial);

    Sprite2D* GetSprite() const;

    BlendMode GetBlendMode() const;

    bool GetFlipX() const;
    bool GetFlipY() const;

    const Color& GetColor() const;

    float GetAlpha() const;

    bool GetUseHotSpot() const;

    const Vector2& GetHotSpot() const;

    Material* GetCustomMaterial() const;

    //void SetSpriteAttr(const ResourceRef& value);
    //ResourceRef GetSpriteAttr() const;
    //void SetCustomMaterialAttr(const ResourceRef& value);
    //ResourceRef GetCustomMaterialAttr() const;
};



class AnimationSet2D;

class AnimatedSprite2D : public StaticSprite2D
{
public:
    AnimatedSprite2D(Context* context);

    static void RegisterObject(Context* context);

    virtual void OnSetEnabled();

    void SetSpeed(float speed);
    //void SetAnimation(AnimationSet2D* animationSet, const String& name, LoopMode2D loopMode = LM_DEFAULT);
    void SetAnimation(const String& name, LoopMode2D loopMode = LM_DEFAULT);
    void SetAnimationSet(AnimationSet2D* animationSet);
    void SetLoopMode(LoopMode2D loopMode);

    float GetSpeed() const;

    const String& GetAnimation() const;

    AnimationSet2D* GetAnimationSet() const;

    LoopMode2D GetLoopMode() const;

    //Node* GetRootNode() const;

    //void SetAnimationSetAttr(const ResourceRef& value);
    //ResourceRef GetAnimationSetAttr() const;
    //void SetAnimationAttr(const String& name);
};





class AnimationSet2D;
class Sprite2D;

#if 0
struct Transform2D
{
    Transform2D();
    Transform2D(const Vector2& position, float angle, const Vector2& scale);
    Transform2D(const Transform2D& other);

    Transform2D Lerp(const Transform2D& other, float t, int spin) const;

    Vector2 position_;
    float angle_;
    Vector2 scale_;
};


struct AnimationKeyFrame2D
{
    AnimationKeyFrame2D();

    float time_;

    bool enabled_;
    int parent_;
    //Transform2D transform_;
    int spin_;

    int zIndex_;
    float alpha_;
    bool useHotSpot_;
    Vector2 hotSpot_;
};


struct AnimationTrack2D
{
    String name_;
    bool hasSprite_;
    //Vector<AnimationKeyFrame2D> keyFrames_;
};


class Animation2D : public RefCounted
{
public:
    Animation2D(AnimationSet2D* animationSet);

    void SetName(const String& name);
    void SetLength(float length);
    void SetLooped(bool looped);

    AnimationSet2D* GetAnimationSet() const;

    const String& GetName() const;

    float GetLength() const;

    bool IsLooped() const;

    unsigned GetNumTracks() const;

    const AnimationTrack2D& GetTrack(unsigned index) const;

    //Vector<AnimationTrack2D>& GetAllTracks();
};
#endif



class AnimationSet2D : public Resource
{
public:
    AnimationSet2D(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool EndLoad();

    unsigned GetNumAnimations() const;
//    Animation2D* GetAnimation(unsigned index) const;
//    Animation2D* GetAnimation(const String& name) const;
};




enum EmitterType2D
{
    EMITTER_TYPE_GRAVITY = 0,
    EMITTER_TYPE_RADIAL
};

class ParticleEffect2D : public Resource
{
public:
    ParticleEffect2D(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool EndLoad();
    virtual bool Save(Serializer& dest) const;

    void SetSprite(Sprite2D* sprite);
    void SetSourcePositionVariance(const Vector2& sourcePositionVariance);
    void SetSpeed(float speed);
    void SetSpeedVariance(float speedVariance);
    void SetParticleLifeSpan(float particleLifeSpan);
    void SetParticleLifespanVariance(float particleLifespanVariance);
    void SetAngle(float angle);
    void SetAngleVariance(float angleVariance);
    void SetGravity(const Vector2& gravity);
    void SetRadialAcceleration(float radialAcceleration);
    void SetTangentialAcceleration(float tangentialAcceleration);
    void SetRadialAccelVariance(float radialAccelVariance);
    void SetTangentialAccelVariance(float tangentialAccelVariance);
    void SetStartColor(const Color& startColor);
    void SetStartColorVariance(const Color& startColorVariance);
    void SetFinishColor(const Color& finishColor);
    void SetFinishColorVariance(const Color& finishColorVariance);
    void SetMaxParticles(int maxParticles);
    void SetStartParticleSize(float startParticleSize);
    void SetStartParticleSizeVariance(float startParticleSizeVariance);
    void SetFinishParticleSize(float finishParticleSize);
    void SetFinishParticleSizeVariance(float FinishParticleSizeVariance);
    void SetDuration(float duration);
    void SetEmitterType(EmitterType2D emitterType);
    void SetMaxRadius(float maxRadius);
    void SetMaxRadiusVariance(float maxRadiusVariance);
    void SetMinRadius(float minRadius);
    void SetMinRadiusVariance(float minRadiusVariance);
    void SetRotatePerSecond(float rotatePerSecond);
    void SetRotatePerSecondVariance(float rotatePerSecondVariance);
    void SetBlendMode(BlendMode blendMode);
    void SetRotationStart(float rotationStart);
    void SetRotationStartVariance(float rotationStartVariance);
    void SetRotationEnd(float rotationEnd);
    void SetRotationEndVariance(float rotationEndVariance);

    Sprite2D* GetSprite() const;

    const Vector2& GetSourcePositionVariance() const;

    float GetSpeed() const;
    float GetSpeedVariance() const;

    float GetParticleLifeSpan() const;
    float GetParticleLifespanVariance() const;

    float GetAngle() const;
    float GetAngleVariance() const;

    const Vector2& GetGravity() const;

    float GetRadialAcceleration() const;
    float GetTangentialAcceleration() const;

    float GetRadialAccelVariance() const;
    float GetTangentialAccelVariance() const;

    const Color& GetStartColor() const;
    const Color& GetStartColorVariance() const;
    const Color& GetFinishColor() const;
    const Color& GetFinishColorVariance() const;

    int GetMaxParticles() const;

    float GetStartParticleSize() const;
    float GetStartParticleSizeVariance() const;

    float GetFinishParticleSize() const;
    float GetFinishParticleSizeVariance() const;

    float GetDuration() const;

    EmitterType2D GetEmitterType() const;

    float GetMaxRadius() const;
    float GetMaxRadiusVariance() const;
    float GetMinRadius() const;
    float GetMinRadiusVariance() const;

    float GetRotatePerSecond() const;
    float GetRotatePerSecondVariance() const;

    BlendMode GetBlendMode() const;

    float GetRotationStart() const;
    float GetRotationStartVariance() const;
    float GetRotationEnd() const;
    float GetRotationEndVariance() const;
};




struct Particle2D
{
    float timeToLive_;

    Vector2 position_;
    float size_;
    float sizeDelta_;
    float rotation_;
    float rotationDelta_;
    Color color_;
    Color colorDelta_;

    Vector2 startPos_;
    Vector2 velocity_;
    float radialAcceleration_;
    float tangentialAcceleration_;

    float emitRadius_;
    float emitRadiusDelta_;
    float emitRotation_;
    float emitRotationDelta_;
};


class ParticleEmitter2D : public Drawable2D
{
public:
    ParticleEmitter2D(Context* context);

    static void RegisterObject(Context* context);

    virtual void OnSetEnabled();

    void SetEffect(ParticleEffect2D* effect);
    void SetSprite(Sprite2D* sprite);
    void SetBlendMode(BlendMode blendMode);
    void SetMaxParticles(unsigned maxParticles);

    ParticleEffect2D* GetEffect() const;
    Sprite2D* GetSprite() const;

    BlendMode GetBlendMode() const;

    unsigned GetMaxParticles() const;

    //void SetParticleEffectAttr(const ResourceRef& value);
    //ResourceRef GetParticleEffectAttr() const;
    //void SetSpriteAttr(const ResourceRef& value);
    //ResourceRef GetSpriteAttr() const;
};



class TileMapLayer2D;
class TmxFile2D;

class CollisionShape2D;

enum Orientation2D
{
    O_ORTHOGONAL = 0,
    O_ISOMETRIC,
    O_STAGGERED
};

struct TileMapInfo2D
{
    Orientation2D orientation_;
    int width_;
    int height_;
    float tileWidth_;
    float tileHeight_;

    float GetMapWidth() const;
    float GetMapHeight() const;
    Vector2 ConvertPosition(const Vector2& position) const;
    Vector2 TileIndexToPosition(int x, int y) const;
    bool PositionToTileIndex(int& x, int& y, const Vector2& positon) const;
};


enum TileMapLayerType2D
{
    LT_TILE_LAYER = 0,
    LT_OBJECT_GROUP,
    LT_IMAGE_LAYER,
    LT_INVALID = 0xffff
};

enum TileMapObjectType2D
{
    OT_RECTANGLE = 0,
    OT_ELLIPSE,
    OT_POLYGON,
    OT_POLYLINE,
    OT_TILE,
    OT_INVALID = 0xffff
};


class PropertySet2D : public RefCounted
{
public:
    PropertySet2D();

    void Load(const XMLElement& element);
    bool HasProperty(const String& name) const;
    const String& GetProperty(const String& name) const;
};



#if 0
class Tile2D : public RefCounted
{
public:
    Tile2D();

    int GetGid() const;

    Sprite2D* GetSprite() const;

    //TmxObjectGroup2D* GetObjectGroup() const;

    bool HasProperty(const String& name) const;
    const String& GetProperty(const String& name) const;
};
#endif



class TileMapObject2D : public RefCounted
{
public:
    TileMapObject2D();

    TileMapObjectType2D GetObjectType() const;

    const String& GetName() const;
    const String& GetType() const;

    const Vector2& GetPosition() const;
    const Vector2& GetSize() const;

    unsigned GetNumPoints() const;
    const Vector2& GetPoint(unsigned index) const;

    int GetTileGid() const;

    Sprite2D* GetTileSprite() const;
    bool HasProperty(const String& name) const;
    const String& GetProperty(const String& name) const;

    bool ValidCollisionShape() const;
    CollisionShape2D* CreateCollisionShape(Node* node) const;
};




class TileMap2D : public Component
{
public:
    TileMap2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    //void SetTmxFile(TmxFile2D* tmxFile);
    void DrawDebugGeometry();

    //TmxFile2D* GetTmxFile() const;

    const TileMapInfo2D& GetInfo() const;

    unsigned GetNumLayers() const;

    TileMapLayer2D* GetLayer(unsigned index) const;
    TileMapLayer2D* GetLayerByName(const String& name) const;

    Vector2 TileIndexToPosition(int x, int y) const;
    bool PositionToTileIndex(int& x, int& y, const Vector2& position) const;

    //void SetTmxFileAttr(const ResourceRef& value);
    //ResourceRef GetTmxFileAttr() const;
};





class TileMapLayer2D : public Component
{
public:
    TileMapLayer2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    //void Initialize(TileMap2D* tileMap, const TmxLayer2D* tmxLayer);
    void SetDrawOrder(int drawOrder);
    void SetVisible(bool visible);

    TileMap2D* GetTileMap() const;

    //const TmxLayer2D* GetTmxLayer() const;

    int GetDrawOrder() const;

    bool IsVisible() const;

    bool HasProperty(const String& name) const;
    const String& GetProperty(const String& name) const;
    TileMapLayerType2D GetLayerType() const;

    int GetWidth() const;
    int GetHeight() const;
    Node* GetTileNode(int x, int y) const;
    //Tile2D* GetTile(int x, int y) const;

    unsigned GetNumObjects() const;
    TileMapObject2D* GetObject(unsigned index) const;

    Node* GetObjectNode(unsigned index) const;
    Node* GetImageNode() const;

    const String& GetName() const;
};



class Renderer2D : public Drawable
{
public:
    Renderer2D(Context* context);

    static void RegisterObject(Context* context);

    //virtual void ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results);
    virtual void UpdateBatches(const FrameInfo& frame);
    virtual void UpdateGeometry(const FrameInfo& frame);
    virtual UpdateGeometryType GetUpdateGeometryType();

    void AddDrawable(Drawable2D* drawable);
    void RemoveDrawable(Drawable2D* drawable);
    Material* GetMaterial(Texture2D* texture, BlendMode blendMode);

    bool CheckVisibility(Drawable2D* drawable) const;

    void SetUseTris(bool useTris);
    bool GetUseTris() const;
};





class CollisionShape2D;
class Constraint2D;

enum BodyType2D
{
    BT_STATIC = 0,
    BT_DYNAMIC = 0,
    BT_KINEMATIC = 0,
};

class RigidBody2D : public Component
{
public:
    RigidBody2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    virtual void OnSetEnabled();

    void SetBodyType(BodyType2D bodyType);
    void SetMass(float mass);
    void SetInertia(float inertia);
    void SetMassCenter(const Vector2& center);
    void SetUseFixtureMass(bool useFixtureMass);
    void SetLinearDamping(float linearDamping);
    void SetAngularDamping(float angularDamping);
    void SetAllowSleep(bool allowSleep);
    void SetFixedRotation(bool fixedRotation);
    void SetBullet(bool bullet);
    void SetGravityScale(float gravityScale);
    void SetAwake(bool awake);
    void SetLinearVelocity(const Vector2& linearVelocity);
    void SetAngularVelocity(float angularVelocity);
    void ApplyForce(const Vector2& force, const Vector2& point, bool wake);
    void ApplyForceToCenter(const Vector2& force, bool wake);
    void ApplyTorque(float torque, bool wake);
    void ApplyLinearImpulse(const Vector2& impulse, const Vector2& point, bool wake);
    void ApplyAngularImpulse(float impulse, bool wake);

    void CreateBody();
    void ReleaseBody();

    void ApplyWorldTransform();
    void AddCollisionShape2D(CollisionShape2D* collisionShape);
    void RemoveCollisionShape2D(CollisionShape2D* collisionShape);
    void AddConstraint2D(Constraint2D* constraint);
    void RemoveConstraint2D(Constraint2D* constraint);

    BodyType2D GetBodyType() const;

    float GetMass() const;
    float GetInertia() const;
    Vector2 GetMassCenter() const;

    bool GetUseFixtureMass() const;

    float GetLinearDamping() const;
    float GetAngularDamping() const;

    bool IsAllowSleep() const;
    bool IsFixedRotation() const;

    bool IsBullet() const;

    float GetGravityScale() const;

    bool IsAwake() const;
    Vector2 GetLinearVelocity() const;
    float GetAngularVelocity() const;

    bool GetCastShadows() const;
    void SetCastShadows(bool castShadows);
};




class CollisionShape2D : public Component
{
public:
    CollisionShape2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    virtual void OnSetEnabled();

    void SetTrigger(bool trigger);
    void SetCategoryBits(int categoryBits);
    void SetMaskBits(int maskBits);
    void SetGroupIndex(int groupIndex);
    void SetDensity(float density);
    void SetFriction(float friction);
    void SetRestitution(float restitution);

    void CreateFixture();
    void ReleaseFixture();

    bool IsTrigger() const;

    int GetCategoryBits() const;
    int GetMaskBits() const;
    int GetGroupIndex() const;

    float GetDensity() const;
    float GetFriction() const;
    float GetRestitution() const;
    float GetMass() const;
    float GetInertia() const;
    Vector2 GetMassCenter() const;

protected:
    virtual void ApplyNodeWorldScale() = 0;
};




class CollisionBox2D : public CollisionShape2D
{
public:
    CollisionBox2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetSize(const Vector2& size);
    void SetSize(float width, float height);
    void SetCenter(const Vector2& center);
    void SetCenter(float x, float y);
    void SetAngle(float angle);

    const Vector2& GetSize() const;
    const Vector2& GetCenter() const;

    float GetAngle() const;
};



class CollisionPolygon2D : public CollisionShape2D
{
public:
    CollisionPolygon2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetVertexCount(unsigned count);
    void SetVertex(unsigned index, const Vector2& vertex);
    //void SetVertices(const PODVector<Vector2>& vertices);

    unsigned GetVertexCount() const;

    const Vector2& GetVertex(unsigned index) const;

    //const PODVector<Vector2>& GetVertices() const;
    //void SetVerticesAttr(const PODVector<unsigned char>& value);
    //PODVector<unsigned char> GetVerticesAttr() const;
};



class CollisionCircle2D : public CollisionShape2D
{
public:
    CollisionCircle2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetRadius(float radius);
    void SetCenter(const Vector2& center);
    void SetCenter(float x, float y);

    float GetRadius() const;

    const Vector2& GetCenter() const;
};



class CollisionEdge2D : public CollisionShape2D
{
public:
    CollisionEdge2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetVertex1(const Vector2& vertex);
    void SetVertex2(const Vector2& vertex);
    void SetVertices(const Vector2& vertex1, const Vector2& vertex2);

    const Vector2& GetVertex1() const;
    const Vector2& GetVertex2() const;
};




class CollisionChain2D : public CollisionShape2D
{
public:
    CollisionChain2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetLoop(bool loop);
    void SetVertexCount(unsigned count);
    void SetVertex(unsigned index, const Vector2& vertex);
    //void SetVertices(const PODVector<Vector2>& vertices);
    //void SetVerticesAttr(const PODVector<unsigned char>& value);

    bool GetLoop() const;

    unsigned GetVertexCount() const;

    const Vector2& GetVertex(unsigned index) const;

    //const PODVector<Vector2>& GetVertices() const;
    //PODVector<unsigned char> GetVerticesAttr() const;
};




class Constraint2D : public Component
{
public:
    Constraint2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    virtual void OnSetEnabled();
    void CreateJoint();
    void ReleaseJoint();

    void SetOtherBody(RigidBody2D* body);
    void SetCollideConnected(bool collideConnected);
    void SetAttachedConstraint(Constraint2D* constraint);

    RigidBody2D* GetOwnerBody() const;
    RigidBody2D* GetOtherBody() const;

    bool GetCollideConnected() const;

    Constraint2D* GetAttachedConstraint() const;
};



class ConstraintDistance2D : public Constraint2D
{
public:
    ConstraintDistance2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetOwnerBodyAnchor(const Vector2& anchor);
    void SetOtherBodyAnchor(const Vector2& anchor);
    void SetFrequencyHz(float frequencyHz);
    void SetDampingRatio(float dampingRatio);

    const Vector2& GetOwnerBodyAnchor() const;
    const Vector2& GetOtherBodyAnchor() const;

    float GetFrequencyHz() const;
    float GetDampingRatio() const;
};



class ConstraintFriction2D : public Constraint2D
{
public:
    ConstraintFriction2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetAnchor(const Vector2& anchor);
    void SetMaxForce(float maxForce);
    void SetMaxTorque(float maxTorque);

    const Vector2& GetAnchor() const;

    float GetMaxForce() const;
    float GetMaxTorque() const;
};




class ConstraintGear2D : public Constraint2D
{
public:
    ConstraintGear2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetOwnerConstraint(Constraint2D* constraint);
    void SetOtherConstraint(Constraint2D* constraint);
    void SetRatio(float ratio);

    Constraint2D* GetOwnerConstraint() const;
    Constraint2D* GetOtherConstraint() const;

    float GetRatio() const;
};




class ConstraintMotor2D : public Constraint2D
{
public:
    ConstraintMotor2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetLinearOffset(const Vector2& linearOffset);
    void SetAngularOffset(float angularOffset);
    void SetMaxForce(float maxForce);
    void SetMaxTorque(float maxTorque);
    void SetCorrectionFactor(float correctionFactor);

    const Vector2& GetLinearOffset() const;

    float GetAngularOffset() const;
    float GetMaxForce() const;
    float GetMaxTorque() const;
    float GetCorrectionFactor() const;
};



class ConstraintMouse2D : public Constraint2D
{
public:
    ConstraintMouse2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetTarget(const Vector2& target);
    void SetMaxForce(float maxForce);
    void SetFrequencyHz(float frequencyHz);
    void SetDampingRatio(float dampingRatio);

    const Vector2& GetTarget() const;

    float GetMaxForce() const;
    float GetFrequencyHz() const;
    float GetDampingRatio() const;
};




class ConstraintPrismatic2D : public Constraint2D
{
public:
    ConstraintPrismatic2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetAnchor(const Vector2& anchor);
    void SetAxis(const Vector2& axis);
    void SetEnableLimit(bool enableLimit);
    void SetLowerTranslation(float lowerTranslation);
    void SetUpperTranslation(float upperTranslation);
    void SetEnableMotor(bool enableMotor);
    void SetMaxMotorForce(float maxMotorForce);
    void SetMotorSpeed(float motorSpeed);

    const Vector2& GetAnchor() const;
    const Vector2& GetAxis() const;

    bool GetEnableLimit() const;

    float GetLowerTranslation() const;
    float GetUpperTranslation() const;

    bool GetEnableMotor() const;

    float GetMaxMotorForce() const;
    float GetMotorSpeed() const;
};




class ConstraintPulley2D : public Constraint2D
{
public:
    ConstraintPulley2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetOwnerBodyGroundAnchor(const Vector2& groundAnchor);
    void SetOtherBodyGroundAnchor(const Vector2& groundAnchor);
    void SetOwnerBodyAnchor(const Vector2& anchor);
    void SetOtherBodyAnchor(const Vector2& anchor);
    void SetRatio(float ratio);

    const Vector2& GetOwnerBodyGroundAnchor() const;
    const Vector2& GetOtherBodyGroundAnchor() const;

    const Vector2& GetOwnerBodyAnchor() const;
    const Vector2& GetOtherBodyAnchor() const;

    float GetRatio() const;
};



class ConstraintRevolute2D : public Constraint2D
{
public:
    ConstraintRevolute2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetAnchor(const Vector2& anchor);
    void SetEnableLimit(bool enableLimit);
    void SetLowerAngle(float lowerAngle);
    void SetUpperAngle(float upperAngle);
    void SetEnableMotor(bool enableMotor);
    void SetMotorSpeed(float motorSpeed);
    void SetMaxMotorTorque(float maxMotorTorque);

    const Vector2& GetAnchor() const;

    bool GetEnableLimit() const;

    float GetLowerAngle() const;
    float GetUpperAngle() const;

    bool GetEnableMotor() const;

    float GetMotorSpeed() const;
    float GetMaxMotorTorque() const;
};




class ConstraintRope2D : public Constraint2D
{
public:
    ConstraintRope2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetOwnerBodyAnchor(const Vector2& anchor);
    void SetOtherBodyAnchor(const Vector2& anchor);
    void SetMaxLength(float maxLength);

    const Vector2& GetOwnerBodyAnchor() const;
    const Vector2& GetOtherBodyAnchor() const;

    float GetMaxLength() const;
};




class ConstraintWeld2D : public Constraint2D
{
public:
    ConstraintWeld2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetAnchor(const Vector2& anchor);
    void SetFrequencyHz(float frequencyHz);
    void SetDampingRatio(float dampingRatio);

    const Vector2& GetAnchor() const;

    float GetFrequencyHz() const;
    float GetDampingRatio() const;
};




class ConstraintWheel2D : public Constraint2D
{
public:
    ConstraintWheel2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    void SetAnchor(const Vector2& anchor);
    void SetAxis(const Vector2& axis);
    void SetEnableMotor(bool enableMotor);
    void SetMaxMotorTorque(float maxMotorTorque);
    void SetMotorSpeed(float motorSpeed);
    void SetFrequencyHz(float frequencyHz);
    void SetDampingRatio(float dampingRatio);

    const Vector2& GetAnchor() const;
    const Vector2& GetAxis() const;

    bool GetEnableMotor() const;

    float GetMaxMotorTorque() const;
    float GetMotorSpeed() const;

    float GetFrequencyHz() const;
    float GetDampingRatio() const;
};




struct PhysicsRaycastResult2D
{
    PhysicsRaycastResult2D();

    Vector2 position_;
    Vector2 normal_;
    float distance_;
};



class PhysicsWorld2D : public Component
{
public:
    PhysicsWorld2D(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    //virtual void BeginContact(b2Contact* contact);
    //virtual void EndContact(b2Contact* contact);

    //virtual void DrawPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color);
    //virtual void DrawSolidPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color);
    //virtual void DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color);
    //virtual void DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color);
    //virtual void DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color);
    //virtual void DrawTransform(const b2Transform& xf);

    void Update(float timeStep);
    void DrawDebugGeometry();
    void SetDrawShape(bool drawShape);
    void SetDrawJoint(bool drawJoint);
    void SetDrawAabb(bool drawAabb);
    void SetDrawPair(bool drawPair);
    void SetDrawCenterOfMass(bool drawCenterOfMass);
    void SetAllowSleeping(bool enable);
    void SetWarmStarting(bool enable);
    void SetContinuousPhysics(bool enable);
    void SetSubStepping(bool enable);
    void SetGravity(const Vector2& gravity);
    void SetAutoClearForces(bool enable);
    void SetVelocityIterations(int velocityIterations);
    void SetPositionIterations(int positionIterations);
    void AddRigidBody(RigidBody2D* rigidBody);
    void RemoveRigidBody(RigidBody2D* rigidBody);

    //void Raycast(PODVector<PhysicsRaycastResult2D>& results, const Vector2& startPoint, const Vector2& endPoint, unsigned collisionMask = MATH_MAX_UNSIGNED);
    void RaycastSingle(PhysicsRaycastResult2D& result, const Vector2& startPoint, const Vector2& endPoint, unsigned collisionMask = MATH_MAX_UNSIGNED);
    RigidBody2D* GetRigidBody(const Vector2& point, unsigned collisionMask = MATH_MAX_UNSIGNED);
    RigidBody2D* GetRigidBody(int screenX, int screenY, unsigned collisionMask = MATH_MAX_UNSIGNED);
    //void GetRigidBodies(PODVector<RigidBody2D*>& result, const Rect& aabb, unsigned collisionMask = MATH_MAX_UNSIGNED);

    bool GetDrawShape() const;
    bool GetDrawJoint() const;
    bool GetDrawAabb() const;
    bool GetDrawPair() const;
    bool GetDrawCenterOfMass() const;
    bool GetAllowSleeping() const;
    bool GetWarmStarting() const;
    bool GetContinuousPhysics() const;
    bool GetSubStepping() const;
    bool GetAutoClearForces() const;

    const Vector2& GetGravity() const;

    int GetVelocityIterations() const;
    int GetPositionIterations() const;

    //b2World* GetWorld();

    void SetApplyingTransforms(bool enable);

    bool IsApplyingTransforms() const;
};
#endif




////////////////////////
// From Craft/Craft3D:
////////////////////////


class AnimatedModel;
class Terrain;


struct Bone
{
    Bone();
    Bone(const Bone& other);

    String name_;
    StringHash nameHash_;
    unsigned parentIndex_;
    Vector3 initialPosition_;
    Quaternion initialRotation_;
    Vector3 initialScale_;
    Matrix3x4 offsetMatrix_;
    bool animated_;
    unsigned char collisionMask_;
    float radius_;
    BoundingBox boundingBox_;
    //WeakPtr<Node> node_;
};


class Skeleton
{
public:
    Skeleton();

    bool Load(Deserializer& source);
    bool Save(Serializer& dest) const;
    void Define(const Skeleton& src);
    void SetRootBoneIndex(unsigned index);
    void ClearBones();
    void Reset();

    //const Vector<Bone>& GetBones() const;

    //Vector<Bone>& GetModifiableBones();

    unsigned GetNumBones() const;

    Bone* GetRootBone();
    Bone* GetBone(unsigned index);
    Bone* GetBone(const String& boneName);
    Bone* GetBone(const char* boneName);
    Bone* GetBone(StringHash boneNameHash);

    void ResetSilent();
};


class Model : public Resource
{
public:
    Model(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool EndLoad();
    virtual bool Save(Serializer& dest) const;

    //void SetBoundingBox(const BoundingBox& box);
    //void SetNumGeometries(unsigned num);
    //bool SetNumGeometryLodLevels(unsigned index, unsigned num);
    //bool SetGeometry(unsigned index, unsigned lodLevel, Geometry* geometry);
    //bool SetGeometryCenter(unsigned index, const Vector3& center);

    void SetSkeleton(const Skeleton& skeleton);

    const BoundingBox& GetBoundingBox() const;

    Skeleton& GetSkeleton();

    unsigned GetNumGeometries() const;
    unsigned GetNumGeometryLodLevels(unsigned index) const;

    Geometry* GetGeometry(unsigned index, unsigned lodLevel) const;

    const Vector3& GetGeometryCenter(unsigned index) const;

    //unsigned GetNumMorphs() const;

    //const ModelMorph* GetMorph(unsigned index) const;
    //const ModelMorph* GetMorph(const String& name) const;
    //const ModelMorph* GetMorph(StringHash nameHash) const;
    //unsigned GetMorphRangeStart(unsigned bufferIndex) const;
    //unsigned GetMorphRangeCount(unsigned bufferIndex) const;

    //bool SetGeometryName(unsigned index, const String& name); // TODO
    //const String& GetGeometryName(unsigned index) const; // TODO
    //const Vector<String>& GetGeometryNames() const;

};



struct AnimationKeyFrame
{
    AnimationKeyFrame(const AnimationKeyFrame& other);

    float time_;
    Vector3 position_;
    Quaternion rotation_;
    Vector3 scale_;
};

struct AnimationTrack
{
    void GetKeyFrameIndex(float time, unsigned& index) const;

    String name_;
    StringHash nameHash_;
    unsigned char channelMask_;
    //Vector<AnimationKeyFrame> keyFrames_;
};

struct AnimationTriggerPoint
{
    AnimationTriggerPoint();

    float time_;
    Variant data_;
};

static const unsigned char CHANNEL_POSITION = 0x1;
static const unsigned char CHANNEL_ROTATION = 0x2;
static const unsigned char CHANNEL_SCALE = 0x4;

class Animation : public Resource
{
public:
    Animation(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool Save(Serializer& dest) const;

    void SetAnimationName(const String& name);
    void SetLength(float length);
    //void SetTracks(const Vector<AnimationTrack>& tracks);
    void AddTrigger(float time, bool timeIsNormalized, const Variant& data);
    void RemoveTrigger(unsigned index);
    void RemoveAllTriggers();
    void SetNumTriggers(unsigned num);

    const String& GetAnimationName() const;

    StringHash GetAnimationNameHash() const;

    float GetLength() const;

    //const Vector<AnimationTrack>& GetTracks() const;

    unsigned GetNumTracks() const;

    //const AnimationTrack* GetTrack(unsigned index) const;
    const AnimationTrack* GetTrack(const String& name) const;
    const AnimationTrack* GetTrack(StringHash nameHash) const;

    //const Vector<AnimationTriggerPoint>& GetTriggers() const;

    unsigned GetNumTriggers() const;
};




struct AnimationStateTrack
{
    AnimationStateTrack();

    const AnimationTrack* track_;
    Bone* bone_;
    //WeakPtr<Node> node_;
    float weight_;
    unsigned keyFrame_;
};


class AnimationState
{
public:
    AnimationState(AnimatedModel* model, Animation* animation);
    AnimationState(Node* node, Animation* animation);

    void SetStartBone(Bone* bone);
    void SetLooped(bool looped);
    void SetWeight(float weight);
    void SetTime(float time);
    void SetBoneWeight(unsigned index, float weight, bool recursive = false);
    void SetBoneWeight(const String& name, float weight, bool recursive = false);
    void SetBoneWeight(StringHash nameHash, float weight, bool recursive = false);
    void AddWeight(float delta);
    void AddTime(float delta);
    void SetLayer(unsigned char layer);

    Animation* GetAnimation() const;

    AnimatedModel* GetModel() const;
    Node* GetNode() const;
    Bone* GetStartBone() const;

    float GetBoneWeight(unsigned index) const;
    float GetBoneWeight(const String& name) const;
    float GetBoneWeight(StringHash nameHash) const;

    unsigned GetTrackIndex(Node* node) const;
    unsigned GetTrackIndex(const String& name) const;
    unsigned GetTrackIndex(StringHash nameHash) const;

    bool IsEnabled() const;
    bool IsLooped() const;

    float GetWeight() const;
    float GetTime() const;
    float GetLength() const;

    unsigned char GetLayer() const;

    void Apply();
};



struct AnimationControl
{
    AnimationControl();
    AnimationControl(const AnimationControl& other);

    String name_;
    StringHash hash_;
    float speed_;
    float targetWeight_;
    float fadeTime_;
    float autoFadeTime_;
    float setTimeTtl_;
    float setWeightTtl_;
    unsigned short setTime_;
    unsigned char setWeight_;
    unsigned char setTimeRev_;
    unsigned char setWeightRev_;
    bool removeOnCompletion_;
};



class AnimationController : public Component
{
public:
    AnimationController(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    virtual void OnSetEnabled();

    void Update(float timeStep);
    bool Play(const String& name, unsigned char layer, bool looped, float fadeInTime = 0.0f);
    bool PlayExclusive(const String& name, unsigned char layer, bool looped, float fadeTime = 0.0f);
    bool Stop(const String& name, float fadeOutTime = 0.0f);
    void StopLayer(unsigned char layer, float fadeOutTime = 0.0f);
    void StopAll(float fadeTime = 0.0f);
    bool Fade(const String& name, float targetWeight, float fadeTime);
    bool FadeOthers(const String& name, float targetWeight, float fadeTime);

    bool SetLayer(const String& name, unsigned char layer);
    bool SetStartBone(const String& name, const String& startBoneName);
    bool SetTime(const String& name, float time);
    bool SetWeight(const String& name, float weight);
    bool SetLooped(const String& name, bool enable);
    bool SetSpeed(const String& name, float speed);
    bool SetAutoFade(const String& name, float fadeOutTime);
    bool SetRemoveOnCompletion(const String& name, bool removeOnCompletion);

    bool IsPlaying(const String& name) const;
    bool IsFadingIn(const String& name) const;
    bool IsFadingOut(const String& name) const;
    bool IsAtEnd(const String& name) const;

    unsigned char GetLayer(const String& name) const;
    Bone* GetStartBone(const String& name) const;
    const String& GetStartBoneName(const String& name) const;

    float GetTime(const String& name) const;
    float GetWeight(const String& name) const;
    bool IsLooped(const String& name) const;
    float GetLength(const String& name) const;
    float GetSpeed(const String& name) const;
    float GetFadeTarget(const String& name) const;
    float GetFadeTime(const String& name) const;
    float GetAutoFade(const String& name) const;

    bool GetRemoveOnCompletion(const String& name) const;

    AnimationState* GetAnimationState(const String& name) const;
    AnimationState* GetAnimationState(StringHash nameHash) const;

    //void SetAnimationsAttr(const VariantVector& value);
    //void SetNetAnimationsAttr(const PODVector<unsigned char>& value);
    //void SetNodeAnimationStatesAttr(const VariantVector& value);
    //VariantVector GetAnimationsAttr() const;
    //const PODVector<unsigned char>& GetNetAnimationsAttr() const;
    //VariantVector GetNodeAnimationStatesAttr() const;

    //void AddAnimationResource(Animation* animation); // TODO;
    //void RemoveAnimationResource(Animation* animation); // TODO;
    //void ClearAnimationResources(); // TODO;
    //const Vector<SharedPtr<Animation>>& GetAnimationResources();

    //void SetAnimationResourcesAttr(const ResourceRefList& value);
    //const ResourceRefList& GetAnimationResourcesAttr() const;

    //void SetAnimationAttr(const ResourceRef& value);
    //ResourceRef GetAnimationAttr() const;
};



class StaticModel : public Drawable
{
public:
    StaticModel(Context* context);

    static void RegisterObject(Context* context);

    virtual Geometry* GetLodGeometry(unsigned batchIndex, unsigned level);

    void SetModel(Model* model);
    void SetMaterial(Material* material);
    bool SetMaterial(unsigned index, Material* material);
    void SetOcclusionLodLevel(unsigned level);
    void ApplyMaterialList(const String& fileName = "");

    Model* GetModel() const;

    unsigned GetNumGeometries() const;

    Material* GetMaterial(unsigned index = 0) const;

    unsigned GetOcclusionLodLevel() const;

    bool IsInside(const Vector3& point) const;
    bool IsInsideLocal(const Vector3& point) const;

    //bool GetGeometryVisible(const String& name); // TODO;
    //void ShowGeometry(const String& name); // TODO;
    //void HideGeometry(const String& name); // TODO;

    //void SetGeometryEnabledAttr(const VariantVector& value);
    //const VariantVector& GetGeometryEnabledAttr() const;
};





class Skybox : public StaticModel
{
public:
    Skybox(Context* context);

    static void RegisterObject(Context* context);

    //virtual void ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results);
    virtual void UpdateBatches(const FrameInfo& frame);
};



class StaticModelGroup : public StaticModel
{
public:
    StaticModelGroup(Context* context);

    static void RegisterObject(Context* context);

    void ApplyAttributes();
    //virtual void ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results);
    virtual void UpdateBatches(const FrameInfo& frame);
    virtual unsigned GetNumOccluderTriangles();
    //virtual bool DrawOcclusion(OcclusionBuffer* buffer);

    void AddInstanceNode(Node* node);
    void RemoveInstanceNode(Node* node);
    void RemoveAllInstanceNodes();

    unsigned GetNumInstanceNodes() const;

    Node* GetInstanceNode(unsigned index) const;

    //void SetNodeIDsAttr(const VariantVector& value);
    //const VariantVector& GetNodeIDsAttr() const;
};




class AnimatedModel : public StaticModel
{
public:
    AnimatedModel(Context* context);

    static void RegisterObject(Context* context);

    virtual bool Load(Deserializer& source);
    //virtual bool LoadXML(const XMLElement& source, bool setInstanceDefault = false);
    virtual void ApplyAttributes();
    //virtual void ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results);
    virtual void Update(const FrameInfo& frame);
    virtual void UpdateBatches(const FrameInfo& frame);
    virtual void UpdateGeometry(const FrameInfo& frame);
    virtual UpdateGeometryType GetUpdateGeometryType();
    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    void SetModel(Model* model, bool createBones = true);
    AnimationState* AddAnimationState(Animation* animation);
    void RemoveAnimationState(Animation* animation);
    void RemoveAnimationState(const String& animationName);
    void RemoveAnimationState(StringHash animationNameHash);
    void RemoveAnimationState(AnimationState* state);
    void RemoveAnimationState(unsigned index);
    void RemoveAllAnimationStates();
    void SetAnimationLodBias(float bias);
    void SetUpdateInvisible(bool enable);
    void SetMorphWeight(unsigned index, float weight);
    void SetMorphWeight(const String& name, float weight);
    void SetMorphWeight(StringHash nameHash, float weight);
    void ResetMorphWeights();

    Skeleton& GetSkeleton();

    //const Vector<SharedPtr<AnimationState> >& GetAnimationStates() const;

    unsigned GetNumAnimationStates() const;

    AnimationState* GetAnimationState(Animation* animation) const;
    AnimationState* GetAnimationState(const String& animationName) const;
    AnimationState* GetAnimationState(const StringHash animationNameHash) const;
    AnimationState* GetAnimationState(unsigned index) const;

    float GetAnimationLodBias() const;

    bool GetUpdateInvisible() const;

    unsigned GetNumMorphs() const;

    float GetMorphWeight(unsigned index) const;
    float GetMorphWeight(const String& name) const;
    float GetMorphWeight(StringHash nameHash) const;

    bool IsMaster() const;

    //void SetModelAttr(const ResourceRef& value);
    //void SetBonesEnabledAttr(const VariantVector& value);
    //void SetAnimationStatesAttr(const VariantVector& value);
    //void SetMorphsAttr(const PODVector<unsigned char>& value);

    //ResourceRef GetModelAttr() const;
    //VariantVector GetBonesEnabledAttr() const;
    //VariantVector GetAnimationStatesAttr() const;

    //static void SetBoneCreationEnabled(bool enabled);
};



class CustomGeometry : public Drawable
{

public:
    CustomGeometry(Context* context);

    static void RegisterObject(Context* context);

    virtual Geometry* GetLodGeometry(unsigned batchIndex, unsigned level);

    void Clear();
    void SetNumGeometries(unsigned num);
    void SetDynamic(bool enable);
    void BeginGeometry(unsigned index, PrimitiveType type);
    void DefineVertex(const Vector3& position);
    void DefineNormal(const Vector3& normal);
    void DefineColor(const Color& color);
    void DefineTexCoord(const Vector2& texCoord);
    void DefineTangent(const Vector4& tangent);
    void DefineGeometry(unsigned index, PrimitiveType type, unsigned numVertices, bool hasNormals, bool hasColors, bool hasTexCoords, bool hasTangents);
    void Commit();
    void SetMaterial(Material* material);
    bool SetMaterial(unsigned index, Material* material);

    unsigned GetNumGeometries() const;
    unsigned GetNumVertices(unsigned index) const;

    bool IsDynamic() const;

    Material* GetMaterial(unsigned index = 0) const;
};





struct Billboard // TODO;
{

#if 0
public:
    Billboard();

    Vector3 GetPosition();
    void SetPosition(const Vector3 &position);

    Vector3 GetSize();
    void SetSize(const Vector2 &size);

    Rect GetUV();
    void SetUV(const Rect &uv);

    Color GetColor();
    void SetColor(const Color &color);

    float GetRotation();
    void SetRotation(float rotation);

    bool IsEnabled();
    void SetEnabled(bool enabled);

    float GetSortDistance();
    void SetSortDistance(float sortDistance);
#endif

};



class BillboardSet : public Drawable
{

public:
    BillboardSet(Context* context);

    static void RegisterObject(Context* context);

    void SetMaterial(Material* material);
    void SetNumBillboards(unsigned num);
    void SetRelative(bool enable);
    void SetScaled(bool enable);
    void SetSorted(bool enable);
    void SetFaceCameraMode(FaceCameraMode mode);
    void SetAnimationLodBias(float bias);
    void Commit();

    Material* GetMaterial() const;

    unsigned GetNumBillboards() const;

    Billboard* GetBillboard(unsigned index);

    bool IsRelative() const;
    bool IsScaled() const;
    bool IsSorted() const;

    FaceCameraMode GetFaceCameraMode() const;

    float GetAnimationLodBias() const;
};




enum EmitterType
{
    EMITTER_SPHERE,
    EMITTER_BOX
};

struct ColorFrame
{
    ColorFrame();
    ColorFrame(const ColorFrame& other);
    ColorFrame(const Color& color);
    ColorFrame(const Color& color, float time);

    Color Interpolate(const ColorFrame& next, float time) const;
};


struct TextureFrame
{
    TextureFrame();
    TextureFrame(const TextureFrame& other);
};




class ParticleEffect : public Resource
{
public:
    ParticleEffect(Context* context);

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool EndLoad();
    virtual bool Save(Serializer& dest) const;

    //bool Save(XMLElement& dest) const;
    //bool Load(const XMLElement& source);
    void SetMaterial(Material* material);
    void SetNumParticles(unsigned num);
    void SetUpdateInvisible(bool enable);
    void SetRelative(bool enable);
    void SetScaled(bool enable);
    void SetSorted(bool enable);
    void SetAnimationLodBias(float lodBias);
    void SetEmitterType(EmitterType type);
    void SetEmitterSize(const Vector3& size);
    void SetMinDirection(const Vector3& direction);
    void SetMaxDirection(const Vector3& direction);
    void SetConstantForce(const Vector3& force);
    void SetDampingForce(float force);
    void SetActiveTime(float time);
    void SetInactiveTime(float time);
    void SetMinEmissionRate(float rate);
    void SetMaxEmissionRate(float rate);
    void SetMinParticleSize(const Vector2& size);
    void SetMaxParticleSize(const Vector2& size);
    void SetMinTimeToLive(float time);
    void SetMaxTimeToLive(float time);
    void SetMinVelocity(float velocity);
    void SetMaxVelocity(float velocity);
    void SetMinRotation(float rotation);
    void SetMaxRotation(float rotation);
    void SetMinRotationSpeed(float speed);
    void SetMaxRotationSpeed(float speed);
    void SetSizeAdd(float sizeAdd);
    void SetSizeMul(float sizeMul);

    void AddColorTime(const Color& color, const float time);
    void AddColorFrame(const ColorFrame& colorFrame);
    void RemoveColorFrame(unsigned index);
    //void SetColorFrames(const Vector<ColorFrame>& colorFrames);
    void SetColorFrame(unsigned index, const ColorFrame& colorFrame);
    void SetNumColorFrames(unsigned number);
    void SortColorFrames();

    void AddTextureTime(const Rect& uv, const float time);
    void AddTextureFrame(const TextureFrame& textureFrame);
    void RemoveTextureFrame(unsigned index);
    //void SetTextureFrames(const Vector<TextureFrame>& animation);
    void SetTextureFrame(unsigned index, const TextureFrame& textureFrame);
    void SetNumTextureFrames(unsigned number);
    void SortTextureFrames();

    Material* GetMaterial() const;

    unsigned GetNumParticles() const;

    bool GetUpdateInvisible() const;

    bool IsRelative() const;
    bool IsScaled() const;
    bool IsSorted() const;

    float GetAnimationLodBias() const;

    EmitterType GetEmitterType() const;

    const Vector3& GetEmitterSize() const;
    const Vector3& GetMinDirection() const;
    const Vector3& GetMaxDirection() const;
    const Vector3& GetConstantForce() const;

    float GetDampingForce() const;

    float GetActiveTime() const;
    float GetInactiveTime() const;

    float GetMinEmissionRate() const;
    float GetMaxEmissionRate() const;

    const Vector2& GetMinParticleSize() const;
    const Vector2& GetMaxParticleSize() const;

    float GetMinTimeToLive() const;
    float GetMaxTimeToLive() const;

    float GetMinVelocity() const;
    float GetMaxVelocity() const;

    float GetMinRotation() const;
    float GetMaxRotation() const;

    float GetMinRotationSpeed() const;
    float GetMaxRotationSpeed() const;

    float GetSizeAdd() const;
    float GetSizeMul() const;

    //const Vector<ColorFrame>& GetColorFrames() const;

    unsigned GetNumColorFrames() const;

    const ColorFrame* GetColorFrame(unsigned index) const;

    //const Vector<TextureFrame>& GetTextureFrames() const;

    unsigned GetNumTextureFrames() const;

    const TextureFrame* GetTextureFrame(unsigned index) const;

    Vector3 GetRandomDirection() const;
    Vector2 GetRandomSize() const;
    float GetRandomVelocity() const;
    float GetRandomTimeToLive() const;
    float GetRandomRotationSpeed() const;
    float GetRandomRotation() const;
};




struct Particle
{
    Particle(const Particle& other);

    Vector3 velocity_;
    Vector2 size_;
    float timer_;
    float timeToLive_;
    float scale_;
    float rotationSpeed_;
    unsigned colorIndex_;
    unsigned texIndex_;
};


class ParticleEmitter : public BillboardSet
{
public:
    ParticleEmitter(Context* context);

    static void RegisterObject(Context* context);

    virtual void OnSetEnabled();
    virtual void Update(const FrameInfo& frame);

    void SetEffect(ParticleEffect* effect);
    void SetNumParticles(unsigned num);
    void SetEmitting(bool enable);
    void SetSerializeParticles(bool enable);
    void ResetEmissionTimer();
    void RemoveAllParticles();
    void Reset();
    void ApplyEffect();

    ParticleEffect* GetEffect() const;

    unsigned GetNumParticles() const;

    bool IsEmitting() const;

    bool GetSerializeParticles() const;

    //void SetEffectAttr(const ResourceRef& value);
    //ResourceRef GetEffectAttr() const;
    //void SetParticlesAttr(const VariantVector& value);
    //VariantVector GetParticlesAttr() const;
    //VariantVector GetParticleBillboardsAttr() const;
};





class TerrainPatch : public Drawable
{
public:
    TerrainPatch(Context* context);

    static void RegisterObject(Context* context);

    //virtual void ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results);
    virtual void UpdateBatches(const FrameInfo& frame);
    virtual void UpdateGeometry(const FrameInfo& frame);
    virtual UpdateGeometryType GetUpdateGeometryType();
    virtual Geometry* GetLodGeometry(unsigned batchIndex, unsigned level);
    virtual unsigned GetNumOccluderTriangles();
    //virtual bool DrawOcclusion(OcclusionBuffer* buffer);
    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    void SetOwner(Terrain* terrain);
    void SetNeighbors(TerrainPatch* north, TerrainPatch* south, TerrainPatch* west, TerrainPatch* east);
    void SetMaterial(Material* material);
    void SetBoundingBox(const BoundingBox& box);
    void SetCoordinates(const IntVector2& coordinates);
    void ResetLod();

    Geometry* GetGeometry() const;
    Geometry* GetMaxLodGeometry() const;
    Geometry* GetOcclusionGeometry() const;
    //VertexBuffer* GetVertexBuffer() const;
    Terrain* GetOwner() const;

    TerrainPatch* GetNorthPatch() const;
    TerrainPatch* GetSouthPatch() const;
    TerrainPatch* GetWestPatch() const;
    TerrainPatch* GetEastPatch() const;

    //PODVector<float>& GetLodErrors();

    const IntVector2& GetCoordinates() const;

    unsigned GetLodLevel() const;

};




class Terrain : public Component
{
public:
    Terrain(Context* context);

    static void RegisterObject(Context* context);
	static Craft::StringHash GetTypeStatic();

    //virtual void OnSetAttribute(const AttributeInfo& attr, const Variant& src);
    virtual void ApplyAttributes();
    virtual void OnSetEnabled();

    void SetPatchSize(int size);
    void SetSpacing(const Vector3& spacing);
    void SetMaxLodLevels(unsigned levels);
    void SetOcclusionLodLevel(unsigned level);
    void SetSmoothing(bool enable);
    bool SetHeightMap(Image* image);
    void SetMaterial(Material* material);
    void SetDrawDistance(float distance);
    void SetShadowDistance(float distance);
    void SetLodBias(float bias);
    void SetViewMask(unsigned mask);
    void SetLightMask(unsigned mask);
    void SetShadowMask(unsigned mask);
    void SetZoneMask(unsigned mask);
    void SetMaxLights(unsigned num);
    void SetCastShadows(bool enable);
    void SetOccluder(bool enable);
    void SetOccludee(bool enable);
    void ApplyHeightMap();

    int GetPatchSize() const;

    const Vector3& GetSpacing() const;

    const IntVector2& GetNumVertices() const;
    const IntVector2& GetNumPatches() const;

    unsigned GetMaxLodLevels() const;
    unsigned GetOcclusionLodLevel() const;

    bool GetSmoothing() const;

    Image* GetHeightMap() const;
    Material* GetMaterial() const;
    TerrainPatch* GetPatch(unsigned index) const;
    TerrainPatch* GetPatch(int x, int z) const;

    float GetHeight(const Vector3& worldPosition) const;
    Vector3 GetNormal(const Vector3& worldPosition) const;
    IntVector2 WorldToHeightMap(const Vector3& worldPosition) const;

    //SharedArrayPtr<float> GetHeightData() const;

    float GetDrawDistance() const;
    float GetShadowDistance() const;
    float GetLodBias() const;

    unsigned GetViewMask() const;
    unsigned GetLightMask() const;
    unsigned GetShadowMask() const;
    unsigned GetZoneMask() const;
    unsigned GetMaxLights() const;

    bool IsVisible() const;
    bool GetCastShadows() const;
    bool IsOccluder() const;
    bool IsOccludee() const;

    void CreatePatchGeometry(TerrainPatch* patch);
    void UpdatePatchLod(TerrainPatch* patch);
    //void SetHeightMapAttr(const ResourceRef& value);
    //void SetMaterialAttr(const ResourceRef& value);
    void SetPatchSizeAttr(int value);
    void SetMaxLodLevelsAttr(unsigned value);
    void SetOcclusionLodLevelAttr(unsigned value);

    //ResourceRef GetHeightMapAttr() const;
    //ResourceRef GetMaterialAttr() const;

};






//static const String SOUND_MASTER = "Master";
//static const String SOUND_EFFECT = "Effect";
//static const String SOUND_AMBIENT = "Ambient";
//static const String SOUND_VOICE = "Voice";
//static const String SOUND_MUSIC = "Music";


class Sound;
class SoundSource;
class SoundListener;


class Audio : public Object
{
public:
    Audio(Context* context);

    bool SetMode(int bufferLengthMSec, int mixRate, bool stereo, bool interpolation = true);
    void Update(float timeStep);
    bool Play();
    void Stop();
    void SetMasterGain(const String& type, float gain);
    void PauseSoundType(const String& type);
    void ResumeSoundType(const String& type);
    void ResumeAll();
    void SetListener(SoundListener* listener);
    void StopSound(Sound* sound);

    unsigned GetSampleSize() const;

    int GetMixRate() const;

    bool GetInterpolation() const;

    bool IsStereo() const;

    bool IsPlaying() const;

    bool IsInitialized() const;

    float GetMasterGain(const String& type) const;

    bool IsSoundTypePaused(const String& type) const;

    SoundListener* GetListener() const;

    //const PODVector<SoundSource*>& GetSoundSources() const;

    bool HasMasterGain(const String& type) const;

    void AddSoundSource(SoundSource* soundSource);
    void RemoveSoundSource(SoundSource* soundSource);

    Mutex& GetMutex();

    float GetSoundSourceMasterGain(StringHash typeHash) const;

    void MixOutput(void* dest, unsigned samples);
};


class SoundStream : public RefCounted
{
public:
    SoundStream();

    virtual unsigned GetData(signed char* dest, unsigned numBytes) = 0;

    void SetFormat(unsigned frequency, bool sixteenBit, bool stereo);
    void SetStopAtEnd(bool enable);

    unsigned GetSampleSize() const;

    float GetFrequency() const;

    unsigned GetIntFrequency() const;
    bool GetStopAtEnd() const;

    bool IsSixteenBit() const;

    bool IsStereo() const;
};


static const int STREAM_BUFFER_LENGTH = 100;

class SoundSource : public Component
{
public:
    SoundSource(Context* context);

    void Play(Sound* sound);
    void Play(Sound* sound, float frequency);
    void Play(Sound* sound, float frequency, float gain);
    void Play(Sound* sound, float frequency, float gain, float panning);
    void Play(SoundStream* stream);
    void Stop();
    void SetSoundType(const String& type);
    void SetFrequency(float frequency);
    void SetGain(float gain);
    void SetAttenuation(float attenuation);
    void SetPanning(float panning);
    void SetAutoRemoveMode(AutoRemoveMode mode);
    void SetPlayPosition(signed char* pos);

    Sound* GetSound() const;

    //volatile signed char* GetPlayPosition() const;

    String GetSoundType() const;

    float GetTimePosition() const;
    float GetFrequency() const;

    float GetGain() const;

    float GetAttenuation() const;

    float GetPanning() const;

    AutoRemoveMode GetAutoRemoveMode() const;

    bool IsPlaying() const;

    virtual void Update(float timeStep);
    void Mix(int* dest, unsigned samples, int mixRate, bool stereo, bool interpolation);
    void UpdateMasterGain();

    //void SetSoundAttr(const ResourceRef& value);
    void SetPositionAttr(int value);
    //ResourceRef GetSoundAttr() const;
    void SetPlayingAttr(bool value);
    int GetPositionAttr() const;
};


class SoundSource3D : public SoundSource
{
public:
    SoundSource3D(Context* context);

    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);
    virtual void Update(float timeStep);

    void SetDistanceAttenuation(float nearDistance, float farDistance, float rolloffFactor);
    void SetAngleAttenuation(float innerAngle, float outerAngle);
    void SetNearDistance(float distance);
    void SetFarDistance(float distance);
    void SetInnerAngle(float angle);
    void SetOuterAngle(float angle);
    void SetRolloffFactor(float factor);
    void CalculateAttenuation();

    float GetNearDistance() const;
    float GetFarDistance() const;
    float GetInnerAngle() const;
    float GetOuterAngle() const;
    float RollAngleoffFactor() const;
};


class SoundListener : public Component
{
public:
    SoundListener(Context* context);
};


class Sound : public Resource
{
public:
    Sound(Context* context);

    virtual bool BeginLoad(Deserializer& source);

    bool LoadRaw(Deserializer& source);
    bool LoadWav(Deserializer& source);
    bool LoadOggVorbis(Deserializer& source);
    void SetSize(unsigned dataSize);
    void SetData(const void* data, unsigned dataSize);
    void SetFormat(unsigned frequency, bool sixteenBit, bool stereo);
    void SetLooped(bool enable);
    void SetLoop(unsigned repeatOffset, unsigned endOffset);

    //SharedPtr<SoundStream> GetDecoderStream() const;

    //SharedArrayPtr<signed char> GetData() const;

    signed char* GetStart() const;
    signed char* GetRepeat() const;
    signed char* GetEnd() const;

    float GetLength() const;

    unsigned GetDataSize() const;
    unsigned GetSampleSize() const;

    float GetFrequency() const;

    unsigned GetIntFrequency() const;

    bool IsLooped() const;
    bool IsSixteenBit() const;
    bool IsStereo() const;
    bool IsCompressed() const;

    void FixInterpolation();
};





////////////////////////
// From Craft/Input:
////////////////////////


enum MouseButton : unsigned
{
    MOUSEB_NONE,
    MOUSEB_LEFT = SDL_BUTTON_LMASK,
    MOUSEB_MIDDLE = SDL_BUTTON_MMASK,
    MOUSEB_RIGHT = SDL_BUTTON_RMASK,
    MOUSEB_X1 = SDL_BUTTON_X1MASK,
    MOUSEB_X2 = SDL_BUTTON_X2MASK,
    MOUSEB_ANY = M_MAX_UNSIGNED
};

enum Qualifier : unsigned
{
    QUAL_NONE = 0,
    QUAL_SHIFT = 1,
    QUAL_CTRL = 2,
    QUAL_ALT = 4,
    QUAL_ANY = 8
};


enum Key : unsigned
{
    KEY_UNKNOWN = SDLK_UNKNOWN,
    KEY_A = SDLK_a,
    KEY_B = SDLK_b,
    KEY_C = SDLK_c,
    KEY_D = SDLK_d,
    KEY_E = SDLK_e,
    KEY_F = SDLK_f,
    KEY_G = SDLK_g,
    KEY_H = SDLK_h,
    KEY_I = SDLK_i,
    KEY_J = SDLK_j,
    KEY_K = SDLK_k,
    KEY_L = SDLK_l,
    KEY_M = SDLK_m,
    KEY_N = SDLK_n,
    KEY_O = SDLK_o,
    KEY_P = SDLK_p,
    KEY_Q = SDLK_q,
    KEY_R = SDLK_r,
    KEY_S = SDLK_s,
    KEY_T = SDLK_t,
    KEY_U = SDLK_u,
    KEY_V = SDLK_v,
    KEY_W = SDLK_w,
    KEY_X = SDLK_x,
    KEY_Y = SDLK_y,
    KEY_Z = SDLK_z,
    KEY_0 = SDLK_0,
    KEY_1 = SDLK_1,
    KEY_2 = SDLK_2,
    KEY_3 = SDLK_3,
    KEY_4 = SDLK_4,
    KEY_5 = SDLK_5,
    KEY_6 = SDLK_6,
    KEY_7 = SDLK_7,
    KEY_8 = SDLK_8,
    KEY_9 = SDLK_9,
    KEY_BACKSPACE = SDLK_BACKSPACE,
    KEY_TAB = SDLK_TAB,
    KEY_RETURN = SDLK_RETURN,
    KEY_RETURN2 = SDLK_RETURN2,
    KEY_KP_ENTER = SDLK_KP_ENTER,
    KEY_SHIFT = SDLK_LSHIFT,
    KEY_CTRL = SDLK_LCTRL,
    KEY_ALT = SDLK_LALT,
    KEY_GUI = SDLK_LGUI,
    KEY_PAUSE = SDLK_PAUSE,
    KEY_CAPSLOCK = SDLK_CAPSLOCK,
    KEY_ESCAPE = SDLK_ESCAPE,
    KEY_SPACE = SDLK_SPACE,
    KEY_PAGEUP = SDLK_PAGEUP,
    KEY_PAGEDOWN = SDLK_PAGEDOWN,
    KEY_END = SDLK_END,
    KEY_HOME = SDLK_HOME,
    KEY_LEFT = SDLK_LEFT,
    KEY_UP = SDLK_UP,
    KEY_RIGHT = SDLK_RIGHT,
    KEY_DOWN = SDLK_DOWN,
    KEY_SELECT = SDLK_SELECT,
    KEY_PRINTSCREEN = SDLK_PRINTSCREEN,
    KEY_INSERT = SDLK_INSERT,
    KEY_DELETE = SDLK_DELETE,
    KEY_LGUI = SDLK_LGUI,
    KEY_RGUI = SDLK_RGUI,
    KEY_APPLICATION = SDLK_APPLICATION,
    KEY_KP_0 = SDLK_KP_0,
    KEY_KP_1 = SDLK_KP_1,
    KEY_KP_2 = SDLK_KP_2,
    KEY_KP_3 = SDLK_KP_3,
    KEY_KP_4 = SDLK_KP_4,
    KEY_KP_5 = SDLK_KP_5,
    KEY_KP_6 = SDLK_KP_6,
    KEY_KP_7 = SDLK_KP_7,
    KEY_KP_8 = SDLK_KP_8,
    KEY_KP_9 = SDLK_KP_9,
    KEY_KP_MULTIPLY = SDLK_KP_MULTIPLY,
    KEY_KP_PLUS = SDLK_KP_PLUS,
    KEY_KP_MINUS = SDLK_KP_MINUS,
    KEY_KP_PERIOD = SDLK_KP_PERIOD,
    KEY_KP_DIVIDE = SDLK_KP_DIVIDE,
    KEY_F1 = SDLK_F1,
    KEY_F2 = SDLK_F2,
    KEY_F3 = SDLK_F3,
    KEY_F4 = SDLK_F4,
    KEY_F5 = SDLK_F5,
    KEY_F6 = SDLK_F6,
    KEY_F7 = SDLK_F7,
    KEY_F8 = SDLK_F8,
    KEY_F9 = SDLK_F9,
    KEY_F10 = SDLK_F10,
    KEY_F11 = SDLK_F11,
    KEY_F12 = SDLK_F12,
    KEY_F13 = SDLK_F13,
    KEY_F14 = SDLK_F14,
    KEY_F15 = SDLK_F15,
    KEY_F16 = SDLK_F16,
    KEY_F17 = SDLK_F17,
    KEY_F18 = SDLK_F18,
    KEY_F19 = SDLK_F19,
    KEY_F20 = SDLK_F20,
    KEY_F21 = SDLK_F21,
    KEY_F22 = SDLK_F22,
    KEY_F23 = SDLK_F23,
    KEY_F24 = SDLK_F24,
    KEY_NUMLOCKCLEAR = SDLK_NUMLOCKCLEAR,
    KEY_SCROLLLOCK = SDLK_SCROLLLOCK,
    KEY_LSHIFT = SDLK_LSHIFT,
    KEY_RSHIFT = SDLK_RSHIFT,
    KEY_LCTRL = SDLK_LCTRL,
    KEY_RCTRL = SDLK_RCTRL,
    KEY_LALT = SDLK_LALT,
    KEY_RALT = SDLK_RALT,
    KEY_AC_BACK = SDLK_AC_BACK,
    KEY_AC_BOOKMARKS = SDLK_AC_BOOKMARKS,
    KEY_AC_FORWARD = SDLK_AC_FORWARD,
    KEY_AC_HOME = SDLK_AC_HOME,
    KEY_AC_REFRESH = SDLK_AC_REFRESH,
    KEY_AC_SEARCH = SDLK_AC_SEARCH,
    KEY_AC_STOP = SDLK_AC_STOP,
    KEY_AGAIN = SDLK_AGAIN,
    KEY_ALTERASE = SDLK_ALTERASE,
    KEY_AMPERSAND = SDLK_AMPERSAND,
    KEY_ASTERISK = SDLK_ASTERISK,
    KEY_AT = SDLK_AT,
    KEY_AUDIOMUTE = SDLK_AUDIOMUTE,
    KEY_AUDIONEXT = SDLK_AUDIONEXT,
    KEY_AUDIOPLAY = SDLK_AUDIOPLAY,
    KEY_AUDIOPREV = SDLK_AUDIOPREV,
    KEY_AUDIOSTOP = SDLK_AUDIOSTOP,
    KEY_BACKQUOTE = SDLK_BACKQUOTE,
    KEY_BACKSLASH = SDLK_BACKSLASH,
    KEY_BRIGHTNESSDOWN = SDLK_BRIGHTNESSDOWN,
    KEY_BRIGHTNESSUP = SDLK_BRIGHTNESSUP,
    KEY_CALCULATOR = SDLK_CALCULATOR,
    KEY_CANCEL = SDLK_CANCEL,
    KEY_CARET = SDLK_CARET,
    KEY_CLEAR = SDLK_CLEAR,
    KEY_CLEARAGAIN = SDLK_CLEARAGAIN,
    KEY_COLON = SDLK_COLON,
    KEY_COMMA = SDLK_COMMA,
    KEY_COMPUTER = SDLK_COMPUTER,
    KEY_COPY = SDLK_COPY,
    KEY_CRSEL = SDLK_CRSEL,
    KEY_CURRENCYSUBUNIT = SDLK_CURRENCYSUBUNIT,
    KEY_CURRENCYUNIT = SDLK_CURRENCYUNIT,
    KEY_CUT = SDLK_CUT,
    KEY_DECIMALSEPARATOR = SDLK_DECIMALSEPARATOR,
    KEY_DISPLAYSWITCH = SDLK_DISPLAYSWITCH,
    KEY_DOLLAR = SDLK_DOLLAR,
    KEY_EJECT = SDLK_EJECT,
    KEY_EQUALS = SDLK_EQUALS,
    KEY_EXCLAIM = SDLK_EXCLAIM,
    KEY_EXSEL = SDLK_EXSEL,
    KEY_FIND = SDLK_FIND,
    KEY_GREATER = SDLK_GREATER,
    KEY_HASH = SDLK_HASH,
    KEY_HELP = SDLK_HELP,
    KEY_KBDILLUMDOWN = SDLK_KBDILLUMDOWN,
    KEY_KBDILLUMTOGGLE = SDLK_KBDILLUMTOGGLE,
    KEY_KBDILLUMUP = SDLK_KBDILLUMUP,
    KEY_KP_00 = SDLK_KP_00,
    KEY_KP_000 = SDLK_KP_000,
    KEY_KP_A = SDLK_KP_A,
    KEY_KP_AMPERSAND = SDLK_KP_AMPERSAND,
    KEY_KP_AT = SDLK_KP_AT,
    KEY_KP_B = SDLK_KP_B,
    KEY_KP_BACKSPACE = SDLK_KP_BACKSPACE,
    KEY_KP_BINARY = SDLK_KP_BINARY,
    KEY_KP_C = SDLK_KP_C,
    KEY_KP_CLEAR = SDLK_KP_CLEAR,
    KEY_KP_CLEARENTRY = SDLK_KP_CLEARENTRY,
    KEY_KP_COLON = SDLK_KP_COLON,
    KEY_KP_COMMA = SDLK_KP_COMMA,
    KEY_KP_D = SDLK_KP_D,
    KEY_KP_DBLAMPERSAND = SDLK_KP_DBLAMPERSAND,
    KEY_KP_DBLVERTICALBAR = SDLK_KP_DBLVERTICALBAR,
    KEY_KP_DECIMAL = SDLK_KP_DECIMAL,
    KEY_KP_E = SDLK_KP_E,
    KEY_KP_EQUALS = SDLK_KP_EQUALS,
    KEY_KP_EQUALSAS400 = SDLK_KP_EQUALSAS400,
    KEY_KP_EXCLAM = SDLK_KP_EXCLAM,
    KEY_KP_F = SDLK_KP_F,
    KEY_KP_GREATER = SDLK_KP_GREATER,
    KEY_KP_HASH = SDLK_KP_HASH,
    KEY_KP_HEXADECIMAL = SDLK_KP_HEXADECIMAL,
    KEY_KP_LEFTBRACE = SDLK_KP_LEFTBRACE,
    KEY_KP_LEFTPAREN = SDLK_KP_LEFTPAREN,
    KEY_KP_LESS = SDLK_KP_LESS,
    KEY_KP_MEMADD = SDLK_KP_MEMADD,
    KEY_KP_MEMCLEAR = SDLK_KP_MEMCLEAR,
    KEY_KP_MEMDIVIDE = SDLK_KP_MEMDIVIDE,
    KEY_KP_MEMMULTIPLY = SDLK_KP_MEMMULTIPLY,
    KEY_KP_MEMRECALL = SDLK_KP_MEMRECALL,
    KEY_KP_MEMSTORE = SDLK_KP_MEMSTORE,
    KEY_KP_MEMSUBTRACT = SDLK_KP_MEMSUBTRACT,
    KEY_KP_OCTAL = SDLK_KP_OCTAL,
    KEY_KP_PERCENT = SDLK_KP_PERCENT,
    KEY_KP_PLUSMINUS = SDLK_KP_PLUSMINUS,
    KEY_KP_POWER = SDLK_KP_POWER,
    KEY_KP_RIGHTBRACE = SDLK_KP_RIGHTBRACE,
    KEY_KP_RIGHTPAREN = SDLK_KP_RIGHTPAREN,
    KEY_KP_SPACE = SDLK_KP_SPACE,
    KEY_KP_TAB = SDLK_KP_TAB,
    KEY_KP_VERTICALBAR = SDLK_KP_VERTICALBAR,
    KEY_KP_XOR = SDLK_KP_XOR,
    KEY_LEFTBRACKET = SDLK_LEFTBRACKET,
    KEY_LEFTPAREN = SDLK_LEFTPAREN,
    KEY_LESS = SDLK_LESS,
    KEY_MAIL = SDLK_MAIL,
    KEY_MEDIASELECT = SDLK_MEDIASELECT,
    KEY_MENU = SDLK_MENU,
    KEY_MINUS = SDLK_MINUS,
    KEY_MODE = SDLK_MODE,
    KEY_MUTE = SDLK_MUTE,
    KEY_OPER = SDLK_OPER,
    KEY_OUT = SDLK_OUT,
    KEY_PASTE = SDLK_PASTE,
    KEY_PERCENT = SDLK_PERCENT,
    KEY_PERIOD = SDLK_PERIOD,
    KEY_PLUS = SDLK_PLUS,
    KEY_POWER = SDLK_POWER,
    KEY_PRIOR = SDLK_PRIOR,
    KEY_QUESTION = SDLK_QUESTION,
    KEY_QUOTE = SDLK_QUOTE,
    KEY_QUOTEDBL = SDLK_QUOTEDBL,
    KEY_RIGHTBRACKET = SDLK_RIGHTBRACKET,
    KEY_RIGHTPAREN = SDLK_RIGHTPAREN,
    KEY_SEMICOLON = SDLK_SEMICOLON,
    KEY_SEPARATOR = SDLK_SEPARATOR,
    KEY_SLASH = SDLK_SLASH,
    KEY_SLEEP = SDLK_SLEEP,
    KEY_STOP = SDLK_STOP,
    KEY_SYSREQ = SDLK_SYSREQ,
    KEY_THOUSANDSSEPARATOR = SDLK_THOUSANDSSEPARATOR,
    KEY_UNDERSCORE = SDLK_UNDERSCORE,
    KEY_UNDO = SDLK_UNDO,
    KEY_VOLUMEDOWN = SDLK_VOLUMEDOWN,
    KEY_VOLUMEUP = SDLK_VOLUMEUP,
    KEY_WWW = SDLK_WWW,
};

enum Scancode : unsigned
{
    SCANCODE_UNKNOWN = SDL_SCANCODE_UNKNOWN,
    SCANCODE_CTRL = SDL_SCANCODE_LCTRL,
    SCANCODE_SHIFT = SDL_SCANCODE_LSHIFT,
    SCANCODE_ALT = SDL_SCANCODE_LALT,
    SCANCODE_GUI = SDL_SCANCODE_LGUI,
    SCANCODE_A = SDL_SCANCODE_A,
    SCANCODE_B = SDL_SCANCODE_B,
    SCANCODE_C = SDL_SCANCODE_C,
    SCANCODE_D = SDL_SCANCODE_D,
    SCANCODE_E = SDL_SCANCODE_E,
    SCANCODE_F = SDL_SCANCODE_F,
    SCANCODE_G = SDL_SCANCODE_G,
    SCANCODE_H = SDL_SCANCODE_H,
    SCANCODE_I = SDL_SCANCODE_I,
    SCANCODE_J = SDL_SCANCODE_J,
    SCANCODE_K = SDL_SCANCODE_K,
    SCANCODE_L = SDL_SCANCODE_L,
    SCANCODE_M = SDL_SCANCODE_M,
    SCANCODE_N = SDL_SCANCODE_N,
    SCANCODE_O = SDL_SCANCODE_O,
    SCANCODE_P = SDL_SCANCODE_P,
    SCANCODE_Q = SDL_SCANCODE_Q,
    SCANCODE_R = SDL_SCANCODE_R,
    SCANCODE_S = SDL_SCANCODE_S,
    SCANCODE_T = SDL_SCANCODE_T,
    SCANCODE_U = SDL_SCANCODE_U,
    SCANCODE_V = SDL_SCANCODE_V,
    SCANCODE_W = SDL_SCANCODE_W,
    SCANCODE_X = SDL_SCANCODE_X,
    SCANCODE_Y = SDL_SCANCODE_Y,
    SCANCODE_Z = SDL_SCANCODE_Z,
    SCANCODE_1 = SDL_SCANCODE_1,
    SCANCODE_2 = SDL_SCANCODE_2,
    SCANCODE_3 = SDL_SCANCODE_3,
    SCANCODE_4 = SDL_SCANCODE_4,
    SCANCODE_5 = SDL_SCANCODE_5,
    SCANCODE_6 = SDL_SCANCODE_6,
    SCANCODE_7 = SDL_SCANCODE_7,
    SCANCODE_8 = SDL_SCANCODE_8,
    SCANCODE_9 = SDL_SCANCODE_9,
    SCANCODE_0 = SDL_SCANCODE_0,
    SCANCODE_RETURN = SDL_SCANCODE_RETURN,
    SCANCODE_ESCAPE = SDL_SCANCODE_ESCAPE,
    SCANCODE_BACKSPACE = SDL_SCANCODE_BACKSPACE,
    SCANCODE_TAB = SDL_SCANCODE_TAB,
    SCANCODE_SPACE = SDL_SCANCODE_SPACE,
    SCANCODE_MINUS = SDL_SCANCODE_MINUS,
    SCANCODE_EQUALS = SDL_SCANCODE_EQUALS,
    SCANCODE_LEFTBRACKET = SDL_SCANCODE_LEFTBRACKET,
    SCANCODE_RIGHTBRACKET = SDL_SCANCODE_RIGHTBRACKET,
    SCANCODE_BACKSLASH = SDL_SCANCODE_BACKSLASH,
    SCANCODE_NONUSHASH = SDL_SCANCODE_NONUSHASH,
    SCANCODE_SEMICOLON = SDL_SCANCODE_SEMICOLON,
    SCANCODE_APOSTROPHE = SDL_SCANCODE_APOSTROPHE,
    SCANCODE_GRAVE = SDL_SCANCODE_GRAVE,
    SCANCODE_COMMA = SDL_SCANCODE_COMMA,
    SCANCODE_PERIOD = SDL_SCANCODE_PERIOD,
    SCANCODE_SLASH = SDL_SCANCODE_SLASH,
    SCANCODE_CAPSLOCK = SDL_SCANCODE_CAPSLOCK,
    SCANCODE_F1 = SDL_SCANCODE_F1,
    SCANCODE_F2 = SDL_SCANCODE_F2,
    SCANCODE_F3 = SDL_SCANCODE_F3,
    SCANCODE_F4 = SDL_SCANCODE_F4,
    SCANCODE_F5 = SDL_SCANCODE_F5,
    SCANCODE_F6 = SDL_SCANCODE_F6,
    SCANCODE_F7 = SDL_SCANCODE_F7,
    SCANCODE_F8 = SDL_SCANCODE_F8,
    SCANCODE_F9 = SDL_SCANCODE_F9,
    SCANCODE_F10 = SDL_SCANCODE_F10,
    SCANCODE_F11 = SDL_SCANCODE_F11,
    SCANCODE_F12 = SDL_SCANCODE_F12,
    SCANCODE_PRINTSCREEN = SDL_SCANCODE_PRINTSCREEN,
    SCANCODE_SCROLLLOCK = SDL_SCANCODE_SCROLLLOCK,
    SCANCODE_PAUSE = SDL_SCANCODE_PAUSE,
    SCANCODE_INSERT = SDL_SCANCODE_INSERT,
    SCANCODE_HOME = SDL_SCANCODE_HOME,
    SCANCODE_PAGEUP = SDL_SCANCODE_PAGEUP,
    SCANCODE_DELETE = SDL_SCANCODE_DELETE,
    SCANCODE_END = SDL_SCANCODE_END,
    SCANCODE_PAGEDOWN = SDL_SCANCODE_PAGEDOWN,
    SCANCODE_RIGHT = SDL_SCANCODE_RIGHT,
    SCANCODE_LEFT = SDL_SCANCODE_LEFT,
    SCANCODE_DOWN = SDL_SCANCODE_DOWN,
    SCANCODE_UP = SDL_SCANCODE_UP,
    SCANCODE_NUMLOCKCLEAR = SDL_SCANCODE_NUMLOCKCLEAR,
    SCANCODE_KP_DIVIDE = SDL_SCANCODE_KP_DIVIDE,
    SCANCODE_KP_MULTIPLY = SDL_SCANCODE_KP_MULTIPLY,
    SCANCODE_KP_MINUS = SDL_SCANCODE_KP_MINUS,
    SCANCODE_KP_PLUS = SDL_SCANCODE_KP_PLUS,
    SCANCODE_KP_ENTER = SDL_SCANCODE_KP_ENTER,
    SCANCODE_KP_1 = SDL_SCANCODE_KP_1,
    SCANCODE_KP_2 = SDL_SCANCODE_KP_2,
    SCANCODE_KP_3 = SDL_SCANCODE_KP_3,
    SCANCODE_KP_4 = SDL_SCANCODE_KP_4,
    SCANCODE_KP_5 = SDL_SCANCODE_KP_5,
    SCANCODE_KP_6 = SDL_SCANCODE_KP_6,
    SCANCODE_KP_7 = SDL_SCANCODE_KP_7,
    SCANCODE_KP_8 = SDL_SCANCODE_KP_8,
    SCANCODE_KP_9 = SDL_SCANCODE_KP_9,
    SCANCODE_KP_0 = SDL_SCANCODE_KP_0,
    SCANCODE_KP_PERIOD = SDL_SCANCODE_KP_PERIOD,
    SCANCODE_NONUSBACKSLASH = SDL_SCANCODE_NONUSBACKSLASH,
    SCANCODE_APPLICATION = SDL_SCANCODE_APPLICATION,
    SCANCODE_POWER = SDL_SCANCODE_POWER,
    SCANCODE_KP_EQUALS = SDL_SCANCODE_KP_EQUALS,
    SCANCODE_F13 = SDL_SCANCODE_F13,
    SCANCODE_F14 = SDL_SCANCODE_F14,
    SCANCODE_F15 = SDL_SCANCODE_F15,
    SCANCODE_F16 = SDL_SCANCODE_F16,
    SCANCODE_F17 = SDL_SCANCODE_F17,
    SCANCODE_F18 = SDL_SCANCODE_F18,
    SCANCODE_F19 = SDL_SCANCODE_F19,
    SCANCODE_F20 = SDL_SCANCODE_F20,
    SCANCODE_F21 = SDL_SCANCODE_F21,
    SCANCODE_F22 = SDL_SCANCODE_F22,
    SCANCODE_F23 = SDL_SCANCODE_F23,
    SCANCODE_F24 = SDL_SCANCODE_F24,
    SCANCODE_EXECUTE = SDL_SCANCODE_EXECUTE,
    SCANCODE_HELP = SDL_SCANCODE_HELP,
    SCANCODE_MENU = SDL_SCANCODE_MENU,
    SCANCODE_SELECT = SDL_SCANCODE_SELECT,
    SCANCODE_STOP = SDL_SCANCODE_STOP,
    SCANCODE_AGAIN = SDL_SCANCODE_AGAIN,
    SCANCODE_UNDO = SDL_SCANCODE_UNDO,
    SCANCODE_CUT = SDL_SCANCODE_CUT,
    SCANCODE_COPY = SDL_SCANCODE_COPY,
    SCANCODE_PASTE = SDL_SCANCODE_PASTE,
    SCANCODE_FIND = SDL_SCANCODE_FIND,
    SCANCODE_MUTE = SDL_SCANCODE_MUTE,
    SCANCODE_VOLUMEUP = SDL_SCANCODE_VOLUMEUP,
    SCANCODE_VOLUMEDOWN = SDL_SCANCODE_VOLUMEDOWN,
    SCANCODE_KP_COMMA = SDL_SCANCODE_KP_COMMA,
    SCANCODE_KP_EQUALSAS400 = SDL_SCANCODE_KP_EQUALSAS400,
    SCANCODE_INTERNATIONAL1 = SDL_SCANCODE_INTERNATIONAL1,
    SCANCODE_INTERNATIONAL2 = SDL_SCANCODE_INTERNATIONAL2,
    SCANCODE_INTERNATIONAL3 = SDL_SCANCODE_INTERNATIONAL3,
    SCANCODE_INTERNATIONAL4 = SDL_SCANCODE_INTERNATIONAL4,
    SCANCODE_INTERNATIONAL5 = SDL_SCANCODE_INTERNATIONAL5,
    SCANCODE_INTERNATIONAL6 = SDL_SCANCODE_INTERNATIONAL6,
    SCANCODE_INTERNATIONAL7 = SDL_SCANCODE_INTERNATIONAL7,
    SCANCODE_INTERNATIONAL8 = SDL_SCANCODE_INTERNATIONAL8,
    SCANCODE_INTERNATIONAL9 = SDL_SCANCODE_INTERNATIONAL9,
    SCANCODE_LANG1 = SDL_SCANCODE_LANG1,
    SCANCODE_LANG2 = SDL_SCANCODE_LANG2,
    SCANCODE_LANG3 = SDL_SCANCODE_LANG3,
    SCANCODE_LANG4 = SDL_SCANCODE_LANG4,
    SCANCODE_LANG5 = SDL_SCANCODE_LANG5,
    SCANCODE_LANG6 = SDL_SCANCODE_LANG6,
    SCANCODE_LANG7 = SDL_SCANCODE_LANG7,
    SCANCODE_LANG8 = SDL_SCANCODE_LANG8,
    SCANCODE_LANG9 = SDL_SCANCODE_LANG9,
    SCANCODE_ALTERASE = SDL_SCANCODE_ALTERASE,
    SCANCODE_SYSREQ = SDL_SCANCODE_SYSREQ,
    SCANCODE_CANCEL = SDL_SCANCODE_CANCEL,
    SCANCODE_CLEAR = SDL_SCANCODE_CLEAR,
    SCANCODE_PRIOR = SDL_SCANCODE_PRIOR,
    SCANCODE_RETURN2 = SDL_SCANCODE_RETURN2,
    SCANCODE_SEPARATOR = SDL_SCANCODE_SEPARATOR,
    SCANCODE_OUT = SDL_SCANCODE_OUT,
    SCANCODE_OPER = SDL_SCANCODE_OPER,
    SCANCODE_CLEARAGAIN = SDL_SCANCODE_CLEARAGAIN,
    SCANCODE_CRSEL = SDL_SCANCODE_CRSEL,
    SCANCODE_EXSEL = SDL_SCANCODE_EXSEL,
    SCANCODE_KP_00 = SDL_SCANCODE_KP_00,
    SCANCODE_KP_000 = SDL_SCANCODE_KP_000,
    SCANCODE_THOUSANDSSEPARATOR = SDL_SCANCODE_THOUSANDSSEPARATOR,
    SCANCODE_DECIMALSEPARATOR = SDL_SCANCODE_DECIMALSEPARATOR,
    SCANCODE_CURRENCYUNIT = SDL_SCANCODE_CURRENCYUNIT,
    SCANCODE_CURRENCYSUBUNIT = SDL_SCANCODE_CURRENCYSUBUNIT,
    SCANCODE_KP_LEFTPAREN = SDL_SCANCODE_KP_LEFTPAREN,
    SCANCODE_KP_RIGHTPAREN = SDL_SCANCODE_KP_RIGHTPAREN,
    SCANCODE_KP_LEFTBRACE = SDL_SCANCODE_KP_LEFTBRACE,
    SCANCODE_KP_RIGHTBRACE = SDL_SCANCODE_KP_RIGHTBRACE,
    SCANCODE_KP_TAB = SDL_SCANCODE_KP_TAB,
    SCANCODE_KP_BACKSPACE = SDL_SCANCODE_KP_BACKSPACE,
    SCANCODE_KP_A = SDL_SCANCODE_KP_A,
    SCANCODE_KP_B = SDL_SCANCODE_KP_B,
    SCANCODE_KP_C = SDL_SCANCODE_KP_C,
    SCANCODE_KP_D = SDL_SCANCODE_KP_D,
    SCANCODE_KP_E = SDL_SCANCODE_KP_E,
    SCANCODE_KP_F = SDL_SCANCODE_KP_F,
    SCANCODE_KP_XOR = SDL_SCANCODE_KP_XOR,
    SCANCODE_KP_POWER = SDL_SCANCODE_KP_POWER,
    SCANCODE_KP_PERCENT = SDL_SCANCODE_KP_PERCENT,
    SCANCODE_KP_LESS = SDL_SCANCODE_KP_LESS,
    SCANCODE_KP_GREATER = SDL_SCANCODE_KP_GREATER,
    SCANCODE_KP_AMPERSAND = SDL_SCANCODE_KP_AMPERSAND,
    SCANCODE_KP_DBLAMPERSAND = SDL_SCANCODE_KP_DBLAMPERSAND,
    SCANCODE_KP_VERTICALBAR = SDL_SCANCODE_KP_VERTICALBAR,
    SCANCODE_KP_DBLVERTICALBAR = SDL_SCANCODE_KP_DBLVERTICALBAR,
    SCANCODE_KP_COLON = SDL_SCANCODE_KP_COLON,
    SCANCODE_KP_HASH = SDL_SCANCODE_KP_HASH,
    SCANCODE_KP_SPACE = SDL_SCANCODE_KP_SPACE,
    SCANCODE_KP_AT = SDL_SCANCODE_KP_AT,
    SCANCODE_KP_EXCLAM = SDL_SCANCODE_KP_EXCLAM,
    SCANCODE_KP_MEMSTORE = SDL_SCANCODE_KP_MEMSTORE,
    SCANCODE_KP_MEMRECALL = SDL_SCANCODE_KP_MEMRECALL,
    SCANCODE_KP_MEMCLEAR = SDL_SCANCODE_KP_MEMCLEAR,
    SCANCODE_KP_MEMADD = SDL_SCANCODE_KP_MEMADD,
    SCANCODE_KP_MEMSUBTRACT = SDL_SCANCODE_KP_MEMSUBTRACT,
    SCANCODE_KP_MEMMULTIPLY = SDL_SCANCODE_KP_MEMMULTIPLY,
    SCANCODE_KP_MEMDIVIDE = SDL_SCANCODE_KP_MEMDIVIDE,
    SCANCODE_KP_PLUSMINUS = SDL_SCANCODE_KP_PLUSMINUS,
    SCANCODE_KP_CLEAR = SDL_SCANCODE_KP_CLEAR,
    SCANCODE_KP_CLEARENTRY = SDL_SCANCODE_KP_CLEARENTRY,
    SCANCODE_KP_BINARY = SDL_SCANCODE_KP_BINARY,
    SCANCODE_KP_OCTAL = SDL_SCANCODE_KP_OCTAL,
    SCANCODE_KP_DECIMAL = SDL_SCANCODE_KP_DECIMAL,
    SCANCODE_KP_HEXADECIMAL = SDL_SCANCODE_KP_HEXADECIMAL,
    SCANCODE_LCTRL = SDL_SCANCODE_LCTRL,
    SCANCODE_LSHIFT = SDL_SCANCODE_LSHIFT,
    SCANCODE_LALT = SDL_SCANCODE_LALT,
    SCANCODE_LGUI = SDL_SCANCODE_LGUI,
    SCANCODE_RCTRL = SDL_SCANCODE_RCTRL,
    SCANCODE_RSHIFT = SDL_SCANCODE_RSHIFT,
    SCANCODE_RALT = SDL_SCANCODE_RALT,
    SCANCODE_RGUI = SDL_SCANCODE_RGUI,
    SCANCODE_MODE = SDL_SCANCODE_MODE,
    SCANCODE_AUDIONEXT = SDL_SCANCODE_AUDIONEXT,
    SCANCODE_AUDIOPREV = SDL_SCANCODE_AUDIOPREV,
    SCANCODE_AUDIOSTOP = SDL_SCANCODE_AUDIOSTOP,
    SCANCODE_AUDIOPLAY = SDL_SCANCODE_AUDIOPLAY,
    SCANCODE_AUDIOMUTE = SDL_SCANCODE_AUDIOMUTE,
    SCANCODE_MEDIASELECT = SDL_SCANCODE_MEDIASELECT,
    SCANCODE_WWW = SDL_SCANCODE_WWW,
    SCANCODE_MAIL = SDL_SCANCODE_MAIL,
    SCANCODE_CALCULATOR = SDL_SCANCODE_CALCULATOR,
    SCANCODE_COMPUTER = SDL_SCANCODE_COMPUTER,
    SCANCODE_AC_SEARCH = SDL_SCANCODE_AC_SEARCH,
    SCANCODE_AC_HOME = SDL_SCANCODE_AC_HOME,
    SCANCODE_AC_BACK = SDL_SCANCODE_AC_BACK,
    SCANCODE_AC_FORWARD = SDL_SCANCODE_AC_FORWARD,
    SCANCODE_AC_STOP = SDL_SCANCODE_AC_STOP,
    SCANCODE_AC_REFRESH = SDL_SCANCODE_AC_REFRESH,
    SCANCODE_AC_BOOKMARKS = SDL_SCANCODE_AC_BOOKMARKS,
    SCANCODE_BRIGHTNESSDOWN = SDL_SCANCODE_BRIGHTNESSDOWN,
    SCANCODE_BRIGHTNESSUP = SDL_SCANCODE_BRIGHTNESSUP,
    SCANCODE_DISPLAYSWITCH = SDL_SCANCODE_DISPLAYSWITCH,
    SCANCODE_KBDILLUMTOGGLE = SDL_SCANCODE_KBDILLUMTOGGLE,
    SCANCODE_KBDILLUMDOWN = SDL_SCANCODE_KBDILLUMDOWN,
    SCANCODE_KBDILLUMUP = SDL_SCANCODE_KBDILLUMUP,
    SCANCODE_EJECT = SDL_SCANCODE_EJECT,
    SCANCODE_SLEEP = SDL_SCANCODE_SLEEP,
    SCANCODE_APP1 = SDL_SCANCODE_APP1,
    SCANCODE_APP2 = SDL_SCANCODE_APP2,
};

enum HatPosition : unsigned
{
    HAT_CENTER = SDL_HAT_CENTERED,
    HAT_UP = SDL_HAT_UP,
    HAT_RIGHT = SDL_HAT_RIGHT,
    HAT_DOWN = SDL_HAT_DOWN,
    HAT_LEFT = SDL_HAT_LEFT,
};

enum ControllerButton : unsigned
{
    CONTROLLER_BUTTON_A = SDL_CONTROLLER_BUTTON_A,
    CONTROLLER_BUTTON_B = SDL_CONTROLLER_BUTTON_B,
    CONTROLLER_BUTTON_X = SDL_CONTROLLER_BUTTON_X,
    CONTROLLER_BUTTON_Y = SDL_CONTROLLER_BUTTON_Y,
    CONTROLLER_BUTTON_BACK = SDL_CONTROLLER_BUTTON_BACK,
    CONTROLLER_BUTTON_GUIDE = SDL_CONTROLLER_BUTTON_GUIDE,
    CONTROLLER_BUTTON_START = SDL_CONTROLLER_BUTTON_START,
    CONTROLLER_BUTTON_LEFTSTICK = SDL_CONTROLLER_BUTTON_LEFTSTICK,
    CONTROLLER_BUTTON_RIGHTSTICK = SDL_CONTROLLER_BUTTON_RIGHTSTICK,
    CONTROLLER_BUTTON_LEFTSHOULDER = SDL_CONTROLLER_BUTTON_LEFTSHOULDER,
    CONTROLLER_BUTTON_RIGHTSHOULDER = SDL_CONTROLLER_BUTTON_RIGHTSHOULDER,
    CONTROLLER_BUTTON_DPAD_UP = SDL_CONTROLLER_BUTTON_DPAD_UP,
    CONTROLLER_BUTTON_DPAD_DOWN = SDL_CONTROLLER_BUTTON_DPAD_DOWN,
    CONTROLLER_BUTTON_DPAD_LEFT = SDL_CONTROLLER_BUTTON_DPAD_LEFT,
    CONTROLLER_BUTTON_DPAD_RIGHT = SDL_CONTROLLER_BUTTON_DPAD_RIGHT,
};

enum ControllerAxis : unsigned
{
    CONTROLLER_AXIS_LEFTX = SDL_CONTROLLER_AXIS_LEFTX,
    CONTROLLER_AXIS_LEFTY = SDL_CONTROLLER_AXIS_LEFTY,
    CONTROLLER_AXIS_RIGHTX = SDL_CONTROLLER_AXIS_RIGHTX,
    CONTROLLER_AXIS_RIGHTY = SDL_CONTROLLER_AXIS_RIGHTY,
    CONTROLLER_AXIS_TRIGGERLEFT = SDL_CONTROLLER_AXIS_TRIGGERLEFT,
    CONTROLLER_AXIS_TRIGGERRIGHT = SDL_CONTROLLER_AXIS_TRIGGERRIGHT,
};


enum MouseMode
{
    MM_ABSOLUTE = 0,
    MM_RELATIVE,
    MM_WRAP,
	MM_FREE
};

struct TouchState
{
    TouchState(const TouchState& other);

    int touchID_;
    IntVector2 position_;
    IntVector2 lastPosition_;
    IntVector2 delta_;
    float pressure_;
    //WeakPtr<UIWidget> touchedWidget_;
};

class JoystickState
{
public:
    JoystickState();

    void Initialize(unsigned numButtons, unsigned numAxes, unsigned numHats);
    void Reset();

    bool IsController() const;

    unsigned GetNumButtons() const;
    unsigned GetNumAxes() const;
    unsigned GetNumHats() const;

    bool GetButtonDown(unsigned index) const;
    bool GetButtonPress(unsigned index) const;

    float GetAxisPosition(unsigned index) const;

    int GetHatPosition(unsigned index) const;

};


class Input : public Object
{

public:
    Input(Context* context);

    void Update();
    void SetToggleFullscreen(bool enable);
    void SetMouseVisible(bool enable, bool suppressEvent = false);
    void ResetMouseVisible();
    void SetMouseGrabbed(bool grab);
    void SetMouseMode(MouseMode mode);
    //SDL_JoystickID AddScreenJoystick(XMLFile* layoutFile = 0, XMLFile* styleFile = 0);
    //bool RemoveScreenJoystick(SDL_JoystickID id);
    //void SetScreenJoystickVisible(SDL_JoystickID id, bool enable);
    void SetScreenKeyboardVisible(bool enable);
    void SetTouchEmulation(bool enable);
    bool RecordGesture();
    bool SaveGestures(Serializer& dest);
    bool SaveGesture(Serializer& dest, unsigned gestureID);
    unsigned LoadGestures(Deserializer& source);
    bool RemoveGesture(unsigned gestureID);
    void RemoveAllGestures();

    Key GetKeyFromName(const String& name) const;
    Key GetKeyFromScancode(Scancode scancode) const;
    String GetKeyName(Key key) const;
    Scancode GetScancodeFromKey(Key key) const;
    Scancode GetScancodeFromName(const String& name) const;
    String GetScancodeName(Scancode scancode) const;
    bool GetKeyDown(Key key) const;
    bool GetKeyPress(Key key) const;
    bool GetScancodeDown(Scancode scancode) const;
    bool GetScancodePress(Scancode scancode) const;
    bool GetMouseButtonDown(MouseButtonFlags button) const;
    bool GetMouseButtonPress(MouseButtonFlags button) const;
    bool GetQualifierDown(Qualifier qualifier) const;
    bool GetQualifierPress(Qualifier qualifier) const;
    QualifierFlags GetQualifiers() const;
    IntVector2 GetMousePosition() const;
	void SetMousePosition(const IntVector2& position);
	void CenterMousePosition();

    const IntVector2& GetMouseMove() const;

    int GetMouseMoveX() const;
    int GetMouseMoveY() const;
    int GetMouseMoveWheelX() const;
    int GetMouseMoveWheelY() const;
    int GetMouseMoveWheel() const;

    unsigned GetNumTouches() const;

    TouchState* GetTouch(unsigned index) const;

    unsigned GetNumJoysticks() const;

    //JoystickState* GetJoystick(SDL_JoystickID id);
    JoystickState* GetJoystickByIndex(unsigned index);

    bool GetToggleFullscreen() const;

    //bool IsScreenJoystickVisible(SDL_JoystickID id) const;
    bool GetScreenKeyboardSupport() const;
    bool IsScreenKeyboardVisible() const;
    bool GetTouchEmulation() const;
    bool IsMouseVisible() const;
    bool IsMouseGrabbed() const;

    MouseMode GetMouseMode() const;

    bool HasFocus();
    bool IsMinimized() const;

    //void BindButton(UIButton* touchButton, int button);

    //void SimulateButtonDown(int button); // TODO
    //void SimulateButtonUp(int button); // TODO

};





////////////////////////
// From Craft/Physics:
////////////////////////


class Constraint;
class PhysicsWorld;
class SmoothedTransform;

enum CollisionEventMode
{
    COLLISION_NEVER = 0,
    COLLISION_ACTIVE,
    COLLISION_ALWAYS
};

class RigidBody : public Component
{
public:
    RigidBody(Context* context);

    static void RegisterObject(Context* context);

    //virtual void OnSetAttribute(const AttributeInfo& attr, const Variant& src);
    virtual void ApplyAttributes();
    virtual void OnSetEnabled();
    //virtual void getWorldTransform(btTransform& worldTrans) const;
    //virtual void setWorldTransform(const btTransform& worldTrans);
    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    void SetMass(float mass);
    void SetPosition(const Vector3& position);
    void SetRotation(const Quaternion& rotation);
    void SetTransform(const Vector3& position, const Quaternion& rotation);
    void SetLinearVelocity(const Vector3& velocity);
    void SetLinearFactor(const Vector3& factor);
    void SetLinearRestThreshold(float threshold);
    void SetLinearDamping(float damping);
    void SetAngularVelocity(const Vector3& angularVelocity);
    void SetAngularFactor(const Vector3& factor);
    void SetAngularRestThreshold(float threshold);
    void SetAngularDamping(float factor);
    void SetFriction(float friction);
    void SetAnisotropicFriction(const Vector3& friction);
    void SetRollingFriction(float friction);
    void SetRestitution(float restitution);
    void SetContactProcessingThreshold(float threshold);
    void SetCcdRadius(float radius);
    void SetCcdMotionThreshold(float threshold);
    void SetUseGravity(bool enable);
    void SetGravityOverride(const Vector3& gravity);
    void SetKinematic(bool enable);
    void SetTrigger(bool enable);
    void SetCollisionLayer(unsigned layer);
    void SetCollisionMask(unsigned mask);
    void SetCollisionLayerAndMask(unsigned layer, unsigned mask);
    void SetCollisionEventMode(CollisionEventMode mode);
    void ApplyForce(const Vector3& force);
    void ApplyForce(const Vector3& force, const Vector3& position);
    void ApplyTorque(const Vector3& torque);
    void ApplyImpulse(const Vector3& impulse);
    void ApplyImpulse(const Vector3& impulse, const Vector3& position);
    void ApplyTorqueImpulse(const Vector3& torque);
    void ResetForces();
    void Activate();
    void ReAddBodyToWorld();
    void DisableMassUpdate();
    void EnableMassUpdate();

    PhysicsWorld* GetPhysicsWorld() const;

    //btRigidBody* GetBody() const;

    //btCompoundShape* GetCompoundShape() const;

    float GetMass() const;

    Vector3 GetPosition() const;
    Quaternion GetRotation() const;
    Vector3 GetLinearVelocity() const;
    Vector3 GetLinearFactor() const;
    Vector3 GetVelocityAtPoint(const Vector3& position) const;
    float GetLinearRestThreshold() const;
    float GetLinearDamping() const;
    Vector3 GetAngularVelocity() const;
    Vector3 GetAngularFactor() const;
    float GetAngularRestThreshold() const;
    float GetAngularDamping() const;
    float GetFriction() const;
    Vector3 GetAnisotropicFriction() const;
    float GetRollingFriction() const;
    float GetRestitution() const;
    float GetContactProcessingThreshold() const;
    float GetCcdRadius() const;
    float GetCcdMotionThreshold() const;

    bool GetUseGravity() const;

    const Vector3& GetGravityOverride() const;
    const Vector3& GetCenterOfMass() const;

    bool IsKinematic() const;
    bool IsTrigger() const;
    bool IsActive() const;

    unsigned GetCollisionLayer() const;
    unsigned GetCollisionMask() const;

    CollisionEventMode GetCollisionEventMode() const;

    //void GetCollidingBodies(PODVector<RigidBody*>& result) const;

    void ApplyWorldTransform(const Vector3& newWorldPosition, const Quaternion& newWorldRotation);
    void UpdateMass();
    void UpdateGravity();
    //void SetNetAngularVelocityAttr(const PODVector<unsigned char>& value);
    //const PODVector<unsigned char>& GetNetAngularVelocityAttr() const;
    void AddConstraint(Constraint* constraint);
    void RemoveConstraint(Constraint* constraint);
    void ReleaseBody();
};



class PhysicsWorld;

enum ShapeType
{
    SHAPE_BOX = 0,
    SHAPE_SPHERE,
    SHAPE_STATICPLANE,
    SHAPE_CYLINDER,
    SHAPE_CAPSULE,
    SHAPE_CONE,
    SHAPE_TRIANGLEMESH,
    SHAPE_CONVEXHULL,
    SHAPE_TERRAIN
};


class CollisionShape : public Component
{
public:
    CollisionShape(Context* context);

    static void RegisterObject(Context* context);

    //virtual void OnSetAttribute(const AttributeInfo& attr, const Variant& src);
    virtual void ApplyAttributes();
    virtual void OnSetEnabled();
    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    void SetBox(const Vector3& size, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY);
    void SetSphere(float diameter, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY);
    void SetStaticPlane(const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY);
    void SetCylinder(float diameter, float height, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY);
    void SetCapsule(float diameter, float height, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY);
    void SetCone(float diameter, float height, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY);
    void SetTriangleMesh(Model* model, unsigned lodLevel = 0, const Vector3& scale = Vector3::ONE, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY);
    void SetCustomTriangleMesh(CustomGeometry* custom, const Vector3& scale = Vector3::ONE, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY);
    void SetConvexHull (Model* model, unsigned lodLevel = 0, const Vector3& scale = Vector3::ONE, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY);
    void SetCustomConvexHull(CustomGeometry* custom, const Vector3& scale = Vector3::ONE, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY);
    void SetTerrain(unsigned lodLevel = 0);
    void SetShapeType(ShapeType type);
    void SetSize(const Vector3& size);
    void SetPosition(const Vector3& position);
    void SetRotation(const Quaternion& rotation);
    void SetTransform(const Vector3& position, const Quaternion& rotation);
    void SetMargin(float margin);
    void SetModel(Model* model);
    void SetLodLevel(unsigned lodLevel);

    //btCollisionShape* GetCollisionShape() const;

    //CollisionGeometryData* GetGeometryData() const;

    PhysicsWorld* GetPhysicsWorld() const;

    ShapeType GetShapeType() const;

    const Vector3& GetSize() const;
    const Vector3& GetPosition() const;

    const Quaternion& GetRotation() const;

    float GetMargin() const;

    Model* GetModel() const;

    unsigned GetLodLevel() const;

    BoundingBox GetWorldBoundingBox() const;

    void NotifyRigidBody(bool updateMass = true);
    //void SetModelAttr(const ResourceRef& value);
    //ResourceRef GetModelAttr() const;
    void ReleaseShape();

};



enum ConstraintType
{
    CONSTRAINT_FIXED = 0,
    CONSTRAINT_POINT,
    CONSTRAINT_HINGE,
    CONSTRAINT_SLIDER,
    CONSTRAINT_CONETWIST
};


class Constraint : public Component
{
public:
    Constraint(Context* context);

    static void RegisterObject(Context* context);

    //virtual void OnSetAttribute(const AttributeInfo& attr, const Variant& src);
    virtual void ApplyAttributes();
    virtual void OnSetEnabled();
    //virtual void GetDependencyNodes(PODVector<Node*>& dest);
    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    void SetConstraintType(ConstraintType type);
    void SetOtherBody(RigidBody* body);
    void SetPosition(const Vector3& position);
    void SetRotation(const Quaternion& rotation);
    void SetAxis(const Vector3& axis);
    void SetOtherPosition(const Vector3& position);
    void SetOtherRotation(const Quaternion& rotation);
    void SetOtherAxis(const Vector3& axis);
    void SetWorldPosition(const Vector3& position);
    void SetHighLimit(const Vector2& limit);
    void SetLowLimit(const Vector2& limit);
    void SetERP(float erp);
    void SetCFM(float cfm);
    void SetDisableCollision(bool disable);

    PhysicsWorld* GetPhysicsWorld() const;

    //btTypedConstraint* GetConstraint() const;

    ConstraintType GetConstraintType() const;

    RigidBody* GetOwnBody() const;
    RigidBody* GetOtherBody() const;

    const Vector3& GetPosition() const;

    const Quaternion& GetRotation() const;

    const Vector3& GetOtherPosition() const;

    const Quaternion& GetOtherRotation() const;

    Vector3 GetWorldPosition() const;

    const Vector2& GetHighLimit() const;
    const Vector2& GetLowLimit() const;

    float GetERP() const;
    float GetCFM() const;

    bool GetDisableCollision() const;

    void ReleaseConstraint();
    void ApplyFrames();

};





class PhysicsWorld : public Component
{
public:
    PhysicsWorld(Context* scontext);

    static void RegisterObject(Context* context);

    virtual void setDebugMode(int debugMode);

    virtual int getDebugMode() const;

    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    void Update(float timeStep);
    void UpdateCollisions();
    void SetFps(int fps);
    void SetGravity(const Vector3& gravity);
    void SetMaxSubSteps(int num);
    void SetNumIterations(int num);
	void SetUpdateEnabled(bool enable);
    void SetInterpolation(bool enable);
    void SetInternalEdge(bool enable);
    void SetSplitImpulse(bool enable);
    void SetMaxNetworkAngularVelocity(float velocity);

	//void RaycastSingle(PhysicsRaycastResult& result, const Ray& ray, float maxDistance, unsigned collisionMask = M_MAX_UNSIGNED);

    void RemoveCachedGeometry(Model* model);
    //void GetRigidBodies(PODVector<RigidBody*>& result, const Sphere& sphere, unsigned collisionMask = MATH_MAX_UNSIGNED);
    //void GetRigidBodies(PODVector<RigidBody*>& result, const BoundingBox& box, unsigned collisionMask = MATH_MAX_UNSIGNED);
    //void GetRigidBodies(PODVector<RigidBody*>& result, const RigidBody* body);

    Vector3 GetGravity() const;

    int GetMaxSubSteps() const;
    int GetNumIterations() const;

    bool GetInterpolation() const;
    bool GetInternalEdge() const;
    bool GetSplitImpulse() const;

    int GetFps() const;

    float GetMaxNetworkAngularVelocity() const;

    void AddRigidBody(RigidBody* body);
    void RemoveRigidBody(RigidBody* body);
    void AddCollisionShape(CollisionShape* shape);
    void RemoveCollisionShape(CollisionShape* shape);
    void AddConstraint(Constraint* joint);
    void RemoveConstraint(Constraint* joint);
    //void AddDelayedWorldTransform(const DelayedWorldTransform& transform);
    void DrawDebugGeometry(bool depthTest);
    //void SetDebugRenderer(DebugRenderer* debug);
    void SetDebugDepthTest(bool enable);

    //btDiscreteDynamicsWorld* GetWorld();

    void CleanupGeometryCache();

    void SetApplyingTransforms(bool enable);

    bool IsApplyingTransforms() const;

};




//////////////////////////
// From Craft/Navigation:
//////////////////////////


#if 0
class Navigable : public Component
{
public:
    Navigable(Context* context);

    static void RegisterObject(Context* context);

    void SetRecursive(bool enable);

    bool IsRecursive() const;
};



class NavArea : public Component
{
public:
    NavArea(Context*);

    static void RegisterObject(Context*);

    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    unsigned GetAreaID() const;

    void SetAreaID(unsigned newID);

    BoundingBox GetBoundingBox() const;

    void SetBoundingBox(const BoundingBox& bnds);

    BoundingBox GetWorldBoundingBox() const;
};




class DynamicNavigationMesh;

class Obstacle : public Component
{
public:
    Obstacle(Context*);

    static void RegisterObject(Context*);

    virtual void OnSetEnabled();

    float GetHeight() const;
    float GetRadius() const;

    void SetHeight(float);
    void SetRadius(float);

    unsigned GetObstacleID() const;

    //virtual void DrawDebugGeometry(DebugRenderer*, bool depthTest);
    void DrawDebugGeometry(bool depthTest);
};




class OffMeshConnection : public Component
{
public:
    OffMeshConnection(Context* context);

    static void RegisterObject(Context* context);

    //virtual void OnSetAttribute(const AttributeInfo& attr, const Variant& src);
    virtual void ApplyAttributes();
    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    void SetEndPoint(Node* node);
    void SetRadius(float radius);
    void SetBidirectional(bool enabled);
    void SetMask(unsigned newMask);
    void SetAreaID(unsigned newAreaID);

    Node* GetEndPoint() const;

    float GetRadius() const;

    bool IsBidirectional() const;

    unsigned GetMask() const;
    unsigned GetAreaID() const;
};




enum NavmeshPartitionType
{
    NAVMESH_PARTITION_WATERSHED = 0,
    NAVMESH_PARTITION_MONOTONE
};


class NavigationMesh : public Component
{
public:
    NavigationMesh(Context* context);

    static void RegisterObject(Context* context);

    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    void SetTileSize(int size);
    void SetCellSize(float size);
    void SetCellHeight(float height);
    void SetAgentHeight(float height);
    void SetAgentRadius(float radius);
    void SetAgentMaxClimb(float maxClimb);
    void SetAgentMaxSlope(float maxSlope);
    void SetRegionMinSize(float size);
    void SetRegionMergeSize(float size);
    void SetEdgeMaxLength(float length);
    void SetEdgeMaxError(float error);
    void SetDetailSampleDistance(float distance);
    void SetDetailSampleMaxError(float error);
    void SetPadding(const Vector3& padding);
    void SetAreaCost(unsigned areaID, float cost);
    virtual bool Build();
    virtual bool Build(const BoundingBox& boundingBox);

    //Vector3 FindNearestPoint(const Vector3& point, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = 0, dtPolyRef* nearestRef = 0);
    //Vector3 MoveAlongSurface(const Vector3& start, const Vector3& end, const Vector3& extents = Vector3::ONE, int maxVisited = 3, const dtQueryFilter* filter = 0);
    //void FindPath(PODVector<Vector3>& dest, const Vector3& start, const Vector3& end, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = 0);
    //Vector3 GetRandomPoint(const dtQueryFilter* filter = 0, dtPolyRef* randomRef = 0);
    //Vector3 GetRandomPointInCircle(const Vector3& center, float radius, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = 0, dtPolyRef* randomRef = 0);
    //float GetDistanceToWall(const Vector3& point, float radius, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = 0, Vector3* hitPos = 0, Vector3* hitNormal = 0);
    //Vector3 Raycast(const Vector3& start, const Vector3& end, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = 0, Vector3* hitNormal = 0);

    void DrawDebugGeometry(bool depthTest);

    String GetMeshName() const;

    void SetMeshName(const String& newName);

    int GetTileSize() const;

    float GetCellSize() const;
    float GetCellHeight() const;

    float GetAgentHeight() const;
    float GetAgentRadius() const;
    float GetAgentMaxClimb() const;
    float GetAgentMaxSlope() const;

    float GetRegionMinSize() const;
    float GetRegionMergeSize() const;

    float GetEdgeMaxLength() const;
    float GetEdgeMaxError() const;

    float GetDetailSampleDistance() const;
    float GetDetailSampleMaxError() const;

    const Vector3& GetPadding() const;

    float GetAreaCost(unsigned areaID) const;

    bool IsInitialized() const;

    const BoundingBox& GetBoundingBox() const;

    BoundingBox GetWorldBoundingBox() const;

    IntVector2 GetNumTiles() const;

    void SetPartitionType(NavmeshPartitionType aType);

    NavmeshPartitionType GetPartitionType() const;

    //virtual void SetNavigationDataAttr(const PODVector<unsigned char>& value);
    //virtual PODVector<unsigned char> GetNavigationDataAttr() const;

    void SetDrawOffMeshConnections(bool enable);

    bool GetDrawOffMeshConnections() const;

    void SetDrawNavAreas(bool enable);

    bool GetDrawNavAreas() const;
};



class DynamicNavigationMesh : public NavigationMesh
{
public:
    DynamicNavigationMesh(Context*);

    static void RegisterObject(Context*);

    virtual bool Build();
    virtual bool Build(const BoundingBox& boundingBox);
    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);
    void DrawDebugGeometry(bool depthTest);

    //virtual void SetNavigationDataAttr(const PODVector<unsigned char>& value);
    //virtual PODVector<unsigned char> GetNavigationDataAttr() const;

    void SetMaxObstacles(unsigned maxObstacles);

    unsigned GetMaxObstacles() const;

    void SetDrawObstacles(bool enable);

    bool GetDrawObstacles() const;
};




struct CrowdObstacleAvoidanceParams
{
    CrowdObstacleAvoidanceParams(const CrowdObstacleAvoidanceParams& other);

    float velBias;
    float weightDesVel;
    float weightCurVel;
    float weightSide;
    float weightToi;
    float horizTime;
    unsigned char gridSize;
    unsigned char adaptiveDivs;
    unsigned char adaptiveRings;
    unsigned char adaptiveDepth;
};


class CrowdManager : public Component
{
public:
    CrowdManager(Context* context);

    static void RegisterObject(Context* context);

    virtual void ApplyAttributes();

    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);
    void DrawDebugGeometry(bool depthTest);

    void SetCrowdTarget(const Vector3& position, Node* node = 0);
    void SetCrowdVelocity(const Vector3& velocity, Node* node = 0);
    void ResetCrowdTarget(Node* node = 0);
    void SetMaxAgents(unsigned maxAgents);
    void SetMaxAgentRadius(float maxAgentRadius);
    void SetNavigationMesh(NavigationMesh* navMesh);
    //void SetQueryFilterTypesAttr(const VariantVector& value);
    void SetIncludeFlags(unsigned queryFilterType, unsigned short flags);
    void SetExcludeFlags(unsigned queryFilterType, unsigned short flags);
    void SetAreaCost(unsigned queryFilterType, unsigned areaID, float cost);
    //void SetObstacleAvoidanceTypesAttr(const VariantVector& value);
    void SetObstacleAvoidanceParams(unsigned obstacleAvoidanceType, const CrowdObstacleAvoidanceParams& params);

    //PODVector<CrowdAgent*> GetAgents(Node* node = 0, bool inCrowdFilter = true) const;
    //Vector3 FindNearestPoint(const Vector3& point, int queryFilterType, dtPolyRef* nearestRef = 0);
    Vector3 MoveAlongSurface(const Vector3& start, const Vector3& end, int queryFilterType, int maxVisited = 3);
    //void FindPath(PODVector<Vector3>& dest, const Vector3& start, const Vector3& end, int queryFilterType);
    //Vector3 GetRandomPoint(int queryFilterType, dtPolyRef* randomRef = 0);
    //Vector3 GetRandomPointInCircle(const Vector3& center, float radius, int queryFilterType, dtPolyRef* randomRef = 0);
    float GetDistanceToWall(const Vector3& point, float radius, int queryFilterType, Vector3* hitPos = 0, Vector3* hitNormal = 0);
    Vector3 Raycast(const Vector3& start, const Vector3& end, int queryFilterType, Vector3* hitNormal = 0);

    unsigned GetMaxAgents() const;

    float GetMaxAgentRadius() const;

    NavigationMesh* GetNavigationMesh() const;

    unsigned GetNumQueryFilterTypes() const;

    unsigned GetNumAreas(unsigned queryFilterType) const;
    //VariantVector GetQueryFilterTypesAttr() const;
    unsigned short GetIncludeFlags(unsigned queryFilterType) const;
    unsigned short GetExcludeFlags(unsigned queryFilterType) const;
    float GetAreaCost(unsigned queryFilterType, unsigned areaID) const;

    unsigned GetNumObstacleAvoidanceTypes() const;

    //VariantVector GetObstacleAvoidanceTypesAttr() const;
    const CrowdObstacleAvoidanceParams& GetObstacleAvoidanceParams(unsigned obstacleAvoidanceType) const;
};



enum CrowdAgentRequestedTarget
{
    CA_REQUESTEDTARGET_NONE = 0,
    CA_REQUESTEDTARGET_POSITION,
    CA_REQUESTEDTARGET_VELOCITY
};

enum CrowdAgentTargetState
{
    CA_TARGET_NONE = 0,
    CA_TARGET_FAILED,
    CA_TARGET_VALID,
    CA_TARGET_REQUESTING,
    CA_TARGET_WAITINGFORQUEUE,
    CA_TARGET_WAITINGFORPATH,
    CA_TARGET_VELOCITY
};

enum CrowdAgentState
{
    CA_STATE_INVALID = 0,
    CA_STATE_WALKING,
    CA_STATE_OFFMESH
};

enum NavigationQuality
{
    NAVIGATIONQUALITY_LOW = 0,
    NAVIGATIONQUALITY_MEDIUM = 1,
    NAVIGATIONQUALITY_HIGH = 2
};

enum NavigationPushiness
{
    NAVIGATIONPUSHINESS_LOW = 0,
    NAVIGATIONPUSHINESS_MEDIUM,
    NAVIGATIONPUSHINESS_HIGH
};


class CrowdAgent : public Component
{
public:
    CrowdAgent(Context* context);

    static void RegisterObject(Context* context);

    virtual void ApplyAttributes();

    virtual void OnSetEnabled();
    void DrawDebugGeometry(bool);
    //virtual void DrawDebugGeometry(DebugRenderer* debug, bool depthTest);

    void SetTargetPosition(const Vector3& position);
    void SetTargetVelocity(const Vector3& velocity);
    void ResetTarget();
    void SetUpdateNodePosition(bool unodepos);
    void SetMaxAccel(float maxAccel);
    void SetMaxSpeed(float maxSpeed);
    void SetRadius(float radius);
    void SetHeight(float height);
    void SetQueryFilterType(unsigned queryFilterType);
    void SetObstacleAvoidanceType(unsigned obstacleAvoidanceType);
    void SetNavigationQuality(NavigationQuality val);
    void SetNavigationPushiness(NavigationPushiness val);

    Vector3 GetPosition() const;
    Vector3 GetDesiredVelocity() const;
    Vector3 GetActualVelocity() const;

    const Vector3& GetTargetPosition() const;
    const Vector3& GetTargetVelocity() const;

    CrowdAgentRequestedTarget GetRequestedTargetType() const;

    CrowdAgentState GetAgentState() const;
    CrowdAgentTargetState GetTargetState() const;

    bool GetUpdateNodePosition() const;

    int GetAgentCrowdId() const;

    float GetMaxAccel() const;
    float GetMaxSpeed() const;

    float GetRadius() const;
    float GetHeight() const;

    unsigned GetQueryFilterType() const;

    unsigned GetObstacleAvoidanceType() const;

    NavigationQuality GetNavigationQuality() const;

    NavigationPushiness GetNavigationPushiness() const;

    bool HasRequestedTarget() const;

    bool HasArrived() const;
    bool IsInCrowd() const;
};
#endif




////////////////////////
// From Craft/UI:
////////////////////////

namespace UIKit {

enum UI_WIDGET_VISIBILITY
{
    UI_WIDGET_VISIBILITY_VISIBLE = 0,
    UI_WIDGET_VISIBILITY_INVISIBLE = 0,
    UI_WIDGET_VISIBILITY_GONE = 0
};

enum UI_GRAVITY {

    UI_GRAVITY_NONE = 0,
    UI_GRAVITY_LEFT = 0,
    UI_GRAVITY_RIGHT = 0,
    UI_GRAVITY_TOP = 0,
    UI_GRAVITY_BOTTOM = 0,

    UI_GRAVITY_LEFT_RIGHT	= 0,
    UI_GRAVITY_TOP_BOTTOM	= 0,
    UI_GRAVITY_ALL			= 0,
    UI_GRAVITY_DEFAULT		= 0
};

enum UI_EVENT_TYPE {
    UI_EVENT_TYPE_CLICK = 0,

    UI_EVENT_TYPE_LONG_CLICK = 0,
    UI_EVENT_TYPE_POINTER_DOWN = 0,
    UI_EVENT_TYPE_POINTER_UP = 0,
    UI_EVENT_TYPE_POINTER_MOVE = 0,
    UI_EVENT_TYPE_RIGHT_POINTER_DOWN = 0,
    UI_EVENT_TYPE_RIGHT_POINTER_UP = 0,
    UI_EVENT_TYPE_WHEEL = 0,

    UI_EVENT_TYPE_CHANGED = 0,
    UI_EVENT_TYPE_KEY_DOWN = 0,
    UI_EVENT_TYPE_KEY_UP = 0,

    UI_EVENT_TYPE_SHORTCUT = 0,

    UI_EVENT_TYPE_CONTEXT_MENU = 0,

    UI_EVENT_TYPE_FILE_DROP = 0,

    UI_EVENT_TYPE_TAB_CHANGED = 0,

    UI_EVENT_TYPE_CUSTOM = 0
};

enum UI_WIDGET_Z_REL {
    UI_WIDGET_Z_REL_BEFORE = 0,
    UI_WIDGET_Z_REL_AFTER = 0
};

enum UI_TEXT_ALIGN
{
    UI_TEXT_ALIGN_LEFT = 0,
    UI_TEXT_ALIGN_RIGHT = 0,
    UI_TEXT_ALIGN_CENTER = 0
};

enum UI_WIDGET_STATE {

    UI_WIDGET_STATE_NONE = 0,
    UI_WIDGET_STATE_DISABLED = 0,
    UI_WIDGET_STATE_FOCUSED = 0,
    UI_WIDGET_STATE_PRESSED = 0,
    UI_WIDGET_STATE_SELECTED = 0,
    UI_WIDGET_STATE_HOVERED = 0,

    UI_WIDGET_STATE_ALL = 0

};

enum UI_AXIS {
    UI_AXIS_X = 0,
    UI_AXIS_Y = 0,
};


class UIView;
class UILayoutParams;
class UIFontDescription;
class UISelectList;



enum UI_SIZE_DEP {
    UI_SIZE_DEP_NONE						= 0,
    UI_SIZE_DEP_WIDTH_DEPEND_ON_HEIGHT		= 0,
    UI_SIZE_DEP_HEIGHT_DEPEND_ON_WIDTH		= 0,
    UI_SIZE_DEP_BOTH						= 0
};

class UIPreferredSize : public RefCounted
{
public:
    UIPreferredSize(int w = 0, int h = 0);

    int GetMinWidth() const;
    int GetMinHeight() const;

    int GetMaxWidth() const;
    int GetMaxHeight() const;

    int GetPrefWidth() const;
    int GetPrefHeight() const;

    UI_SIZE_DEP GetSizeDep() const;

    void SetMinWidth(int w);
    void SetMinHeight(int h);

    void SetMaxWidth(int w);
    void SetMaxHeight(int h);

    void SetPrefWidth(int w);
    void SetPrefHeight(int h);

    void SetSizeDep(UI_SIZE_DEP dep);
};


class UIDragObject : public Object
{
public:
    UIDragObject(Context* context, Object* object = NULL, const String& text = "", const String& icon = "");

    const String& GetText();
    const String& GetIcon();
    Object* GetObject();

    //const Vector<String>& GetFilenames();

    void SetText(const String& text);
    void SetIcon(const String& icon);
    void SetObject(Object* object);

    void AddFilename(const String& filename);
};



class UIWidget : public Object
{

    public:

    UIWidget(Context* context, bool createWidget = true);

    bool Load(const String& filename);

    const String& GetId();

    UIWidget* GetParent();
    UIWidget* GetContentRoot();
    IntRect GetRect();

    UIPreferredSize* GetPreferredSize();
    String GetText();

    void SetRect(IntRect r);
    void SetSize(int width, int height);
    void SetPosition(int x, int y);
    void SetText(const String& text);
    void SetSkinBg(const String& id);
    void SetLayoutParams(UILayoutParams* params);
    void SetFontDescription(UIFontDescription* fd);

    void Remove();
    void RemoveChild(UIWidget* child, bool cleanup = true);

    void DeleteAllChildren();

    virtual void SetId(const String& id);

    void Center();
    void SetGravity(UI_GRAVITY gravity);
    void SetAxis(UI_AXIS axis);

    void SetValue(double value);
    virtual double GetValue();

    void SetFocus();
    bool GetFocus();


    void SetFocusRecursive();
    void OnFocusChanged(bool focused);

    void SetState(UI_WIDGET_STATE state, bool on);
    bool GetState(UI_WIDGET_STATE state);

    void SetVisibility(UI_WIDGET_VISIBILITY visibility);
    UI_WIDGET_VISIBILITY GetVisibility();

    void SetStateRaw(UI_WIDGET_STATE state);
    UI_WIDGET_STATE GetStateRaw();

    void Invalidate();
    void Die();

    void SetDragObject(UIDragObject* object);
    UIDragObject* GetDragObject();

    UIWidget* GetFirstChild();
    UIWidget* GetNext();

    bool IsAncestorOf(UIWidget* widget);

    void SetIsFocusable(bool value);

    UIWidget* GetWidget(const String& id);

    UIView* GetView();

    virtual void AddChild(UIWidget* child);

    void AddChildAfter(UIWidget* child, UIWidget* otherChild);
    void AddChildBefore(UIWidget* child, UIWidget* otherChild);

    void AddChildRelative(UIWidget* child, UI_WIDGET_Z_REL z, UIWidget* reference);

    void InvalidateLayout();

    void SetDelegate(UIWidget* widget);

    void SetMultiTouch(bool multiTouch);

    bool IsMultiTouch();

    bool GetCaptured();

    void SetCapturing(bool capturing);
    bool GetCapturing();

    void InvokeShortcut(const String& shortcut);

    bool GetShortened();

    void SetShortened(bool shortened);

    String GetTooltip();

    void SetTooltip(const String& text);

    void Enable();
    void Disable();

    void SetFontId(const String& fontId);
    String GetFontId();
    void SetFontSize(int size);
    int GetFontSize();

    void SetX(int x);
    void SetY(int y);
    void SetWidth(int width);
    void SetHeight(int height);
    int GetX();
    int GetY();
    int GetWidth();
    int GetHeight();

    void SetLayoutWidth(int width);
    void SetLayoutHeight(int height);
    void SetLayoutPrefWidth(int width);
    void SetLayoutPrefHeight(int height);
    void SetLayoutMinWidth(int width);
    void SetLayoutMinHeight(int height);
    void SetLayoutMaxWidth(int width);
    void SetLayoutMaxHeight(int height);
    int GetLayoutWidth();
    int GetLayoutHeight();
    int GetLayoutPrefWidth();
    int GetLayoutPrefHeight();
    int GetLayoutMinWidth();
    int GetLayoutMinHeight();
    int GetLayoutMaxWidth();
    int GetLayoutMaxHeight();

    void SetOpacity(float opacity);
    void SetAutoOpacity(float autoOpacity);
    float GetOpacity();
    float GetAutoOpacity();

protected:
	// Inserted methods:
	virtual bool OnClick() = 0;
	virtual bool OnClick( unsigned refid ) = 0;
	virtual bool OnLongClick() = 0;
	virtual bool OnLeftButtonDown() = 0;
	virtual bool OnLeftButtonUp() = 0;
	virtual bool OnRightButtonDown() = 0;
	virtual bool OnRightButtonUp() = 0;
	virtual bool OnKeyDown( int key, int sp, int mod ) = 0;
	virtual bool OnKeyUp( int key, int sp, int mod ) = 0;
	virtual bool OnChange() = 0;

    virtual bool OnEvent(const tb::TBWidgetEvent &ev) = 0;
};



class UIButton : public UIWidget
{
public:
    UIButton(Context* context, bool createWidget = true);

    void SetSqueezable(bool value);
    void SetEmulationButton(int button);
    void SetURLEnabled(bool enabled);

	void SetToggleMode(bool toggle);
	bool GetToggleMode() const;

protected:
    virtual bool OnEvent(const tb::TBWidgetEvent &ev) = 0;
};



class UICheckBox : public UIWidget
{
public:
    UICheckBox(Context* context, bool createWidget = true);

protected:
    virtual bool OnEvent(const tb::TBWidgetEvent &ev) = 0;
};



class UIClickLabel : public UIWidget
{
public:
    UIClickLabel(Context* context, bool createWidget = true);

protected:
    virtual bool OnEvent(const tb::TBWidgetEvent &ev) = 0;
};




class UIContainer : public UIWidget
{
public:
    UIContainer(Context* context, bool createWidget = true);

protected:
    //virtual bool OnEvent(const tb::TBWidgetEvent &ev);
};




class UIDimmer : public UIWidget
{
public:
    UIDimmer(Context* context, bool createWidget = true);

protected:
    //virtual bool OnEvent(const tb::TBWidgetEvent &ev);
};



class UIDragDrop : public Object
{
public:
    UIDragDrop(Context* context);

    void FileDragEntered();
    void FileDragAddFile(const String& filename);
    void FileDragConclude();

    bool GetDraggingObject();
};




enum UI_EDIT_TYPE {
    UI_EDIT_TYPE_TEXT = 0,
    UI_EDIT_TYPE_SEARCH = 0,
    UI_EDIT_TYPE_PASSWORD = 0,
    UI_EDIT_TYPE_EMAIL = 0,
    UI_EDIT_TYPE_PHONE = 0,
    UI_EDIT_TYPE_URL = 0,
    UI_EDIT_TYPE_NUMBER = 0
};

class UIEditField : public UIWidget
{
public:
    UIEditField(Context* context, bool createWidget = true);

    void AppendText(const String& text);

    void SetTextAlign(UI_TEXT_ALIGN align);

    void SetAdaptToContentSize(bool adapt);
    bool GetAdaptToContentSize() const;

    void SetEditType(UI_EDIT_TYPE type);

    void SetReadOnly(bool readonly);
    void SetStyling(bool styling);
    void SetMultiline(bool multiline);

    void Reformat(bool update_fragments = false);

    void ScrollTo(int x, int y);

    void SetWrapping(bool wrap);
    bool GetWrapping();

protected:
	virtual bool OnCompletion() = 0;

    virtual bool OnEvent(const tb::TBWidgetEvent &ev) = 0;
};



class UIFontDescription : public Object
{
public:
    UIFontDescription(Context* context);

    int GetSize();

    void SetId(const String& id);
    void SetSize(int size);
};



class UIImageWidget : public UIWidget
{
public:
    UIImageWidget(Context* context, bool createWidget = true);

    void SetImage(const String& imagePath);

    int GetImageWidth() const;
    int GetImageHeight() const;

protected:
    //virtual bool OnEvent(const tb::TBWidgetEvent &ev);
};



class UIInlineSelect : public UIWidget
{
public:
    UIInlineSelect(Context* context, bool createWidget = true);

    void SetLimits(double minimum, double maximum);
    void SetEditFieldLayoutParams(UILayoutParams* params);

protected:
    //virtual bool OnEvent(const tb::TBWidgetEvent &ev);
};



enum UI_LAYOUT_SIZE
{
    UI_LAYOUT_SIZE_GRAVITY = 0,
    UI_LAYOUT_SIZE_PREFERRED = 0,
    UI_LAYOUT_SIZE_AVAILABLE = 0
};

enum UI_LAYOUT_DISTRIBUTION
{
    UI_LAYOUT_DISTRIBUTION_PREFERRED = 0,
    UI_LAYOUT_DISTRIBUTION_AVAILABLE = 0,
    UI_LAYOUT_DISTRIBUTION_GRAVITY = 0
};

enum UI_LAYOUT_POSITION
{
    UI_LAYOUT_POSITION_CENTER = 0,
    UI_LAYOUT_POSITION_LEFT_TOP = 0,
    UI_LAYOUT_POSITION_RIGHT_BOTTOM = 0,
    UI_LAYOUT_POSITION_GRAVITY= 0
};

enum UI_LAYOUT_DISTRIBUTION_POSITION
{
    UI_LAYOUT_DISTRIBUTION_POSITION_CENTER = 0,
    UI_LAYOUT_DISTRIBUTION_POSITION_LEFT_TOP = 0,
    UI_LAYOUT_DISTRIBUTION_POSITION_RIGHT_BOTTOM = 0
};



class UILayoutParams : public Object
{
public:
    UILayoutParams(Context* context);

    void SetWidth(int width);
    void SetHeight(int height);

    void SetMinWidth(int width);
    void SetMinHeight(int height);

    void SetMaxWidth(int width);
    void SetMaxHeight(int height);
};


class UILayout : public UIWidget
{
public:
    UILayout(Context* context, UI_AXIS axis = UI_AXIS_X, bool createWidget = true);

    void SetSpacing(int spacing);

    void SetAxis(UI_AXIS axis);
    void SetLayoutSize(UI_LAYOUT_SIZE size);
    void SetLayoutPosition(UI_LAYOUT_POSITION position);
    void SetLayoutDistribution(UI_LAYOUT_DISTRIBUTION distribution);
    void SetLayoutDistributionPosition(UI_LAYOUT_DISTRIBUTION_POSITION distribution_pos);

protected:
    //virtual bool OnEvent(const tb::TBWidgetEvent &ev);
};




class ListViewItemSource;
class ListViewItem;

class UIListView : public UIWidget
{
public:
    UIListView(Context* context, bool createWidget = true);

    unsigned AddRootItem(const String& text, const String& icon, const String& id);

    unsigned AddChildItem(unsigned parentItemID, const String& text, const String& icon, const String& id);

    void SetItemText(const String& id, const String& text);
    void SetItemTextSkin(const String& id, const String& skin);
    void SetItemIcon(const String& id, const String& icon);
    void DeleteItemByID(const String& id);

    void ScrollToSelectedItem();

    void SetExpanded(unsigned itemID, bool value);
    bool GetExpanded(unsigned itemID);
    bool GetExpandable(unsigned itemID);

    bool GetMultiSelect() const;
    void SetMultiSelect(bool value);

    void DeleteAllItems();
    void SelectItemByID(const String& id, bool selected = true);

    String GetHoverItemID();
    String GetSelectedItemID();

    UISelectList* GetRootList();

    void UpdateItemVisibility();

    void SelectAllItems(bool select = true);

protected:
    virtual bool OnEvent(const tb::TBWidgetEvent &ev) = 0;
};



class UISelectItemSource;

class UISelectItem : public Object
{
public:
    UISelectItem(Context* context, const String& str = "", const String& id = "", const String& skinImage = "");

    void SetString(const String& str);
    void SetID(const String& id);
    const String& GetStr();
    void SetSkinImage(const String& skinImage);
    void SetSubSource(UISelectItemSource *subSource);
};





class UISelectItemSource : public Object
{
public:
    UISelectItemSource(Context* context);

    void AddItem(UISelectItem* item);
    void RemoveItemWithId(const String& id);
    void RemoveItemWithStr(const String& str);
    int GetItemCount();

    void Clear();
};


class UIMenuWindow : public UIWidget
{
public:
    UIMenuWindow(Context* context, UIWidget* target, const String& id = "");

    void Show(UISelectItemSource* source, int x = -1, int y = -1);
    void Close();

protected:
    virtual bool OnEvent(const tb::TBWidgetEvent &ev) = 0;
};




class UIMenuItem : public UISelectItem
{
public:
    UIMenuItem(Context* context, const String& str = "", const String& id = "", const String& shortcut = "", const String& skinBg = "");
};


class UIMenuItemSource : public UISelectItemSource
{
public:
    UIMenuItemSource(Context* context);
};





class UIPopupWindow: public UIWidget
{
public:
    UIPopupWindow(Context* context, bool createWidget, UIWidget* target = NULL, const String& id = "");

    void Show(int x = -1, int y = -1);
    void Close();

protected:
    virtual bool OnEvent(const tb::TBWidgetEvent &ev) = 0;
};




class UIRenderer
{
public:
    UIRenderer(Context* context);

    void BeginPaint(int render_target_w, int render_target_h);
    void EndPaint();

    Context* GetContext();
};




class UISceneView;
class UIRenderer;

class SceneViewWidget
{
public:
    SceneViewWidget();
};


class UISceneView : public UIWidget
{
public:
    UISceneView(Context* context, bool createWidget = true);

    void OnResize(const IntVector2& newSize);

    void SetView(Scene* scene, Camera* camera);
    void SetFormat(unsigned format);
    void SetAutoUpdate(bool enable);
    void QueueUpdate();

    unsigned GetFormat() const;
    bool GetAutoUpdate() const;
    Scene* GetScene() const;
    Node* GetCameraNode() const;
    Texture2D* GetRenderTexture() const;
    Texture2D* GetDepthTexture() const;
    Viewport* GetViewport() const;

    void SetResizeRequired();
    const IntVector2& GetSize() const;

protected:
    //virtual bool OnEvent(const tb::TBWidgetEvent &ev);
};



enum UI_SCROLL_MODE {
    UI_SCROLL_MODE_X_Y = 0,
    UI_SCROLL_MODE_Y = 0,
    UI_SCROLL_MODE_Y_AUTO = 0,
    UI_SCROLL_MODE_X_AUTO_Y_AUTO = 0,
    UI_SCROLL_MODE_OFF = 0
};


class UIScrollContainer : public UIWidget
{
public:
    UIScrollContainer(Context* context, bool createWidget = true);
    virtual ~UIScrollContainer();

    void SetScrollMode(UI_SCROLL_MODE mode);
    UI_SCROLL_MODE GetScrollMode();

    void SetAdaptToContentSize(bool adapt);
    bool GetAdaptToContentSize();

    void SetAdaptContentSize(bool adapt);
    bool GetAdaptContentSize();

    void ScrollTo(int x, int y);

protected:
    //virtual bool OnEvent(const tb::TBWidgetEvent &ev);
};




class UISection : public UIWidget
{
public:
    UISection(Context* context, bool createWidget = true);

protected:
    //virtual bool OnEvent(const tb::TBWidgetEvent &ev);
};




class UISelectDropdown : public UIButton
{
public:
    UISelectDropdown(Context* context, bool createWidget = true);

    void SetSource(UISelectItemSource* source);

protected:
    virtual bool OnEvent(const tb::TBWidgetEvent &ev) = 0;
};





class UISelectList : public UIWidget
{
public:
    UISelectList(Context* context, bool createWidget = true);

    void SetFilter(const String& filter);

    void SetSource(UISelectItemSource* source);
    void InvalidateList();

    void SetValue(int value);
    double GetValue();

    String GetHoverItemID();
    String GetSelectedItemID();

    void ScrollToSelectedItem();

    String GetItemID(int index);
    bool GetItemSelected(int index);

    int GetNumItems() const;

    void SelectItem(int index, bool selected = true);

    void SelectNextItem();
    void SelectPreviousItem();

    void SetUIListView(bool value);

protected:

    void HandleUIUpdate(StringHash eventType, VariantMap& eventData);

    virtual bool OnEvent(const tb::TBWidgetEvent &ev) = 0;
};




class UISeparator : public UIWidget
{
public:
    UISeparator(Context* context, bool createWidget = true);

protected:
    //virtual bool OnEvent(const tb::TBWidgetEvent &ev);
};




class UISkinImage : public UIWidget
{
public:
    UISkinImage(Context* context, const String& bitmapID, bool createWidget = true);

protected:
    //virtual bool OnEvent(const tb::TBWidgetEvent &ev);
};




class UITabContainer : public UIWidget
{
public:
    UITabContainer(Context* context, bool createWidget = true);

    int GetNumPages();
    void SetCurrentPage(int page);

    UIWidget* GetCurrentPageWidget();

    UILayout* GetTabLayout();

protected:
    //virtual bool OnEvent(const tb::TBWidgetEvent &ev);
};




class UITextField : public UIWidget
{
public:
    UITextField(Context* context, bool createWidget = true);

    void SetTextAlign(UI_TEXT_ALIGN align);

protected:
    virtual bool OnEvent(const tb::TBWidgetEvent &ev) = 0;
};




class UITextureWidget : public UIWidget
{
public:
    UITextureWidget(Context* context, bool createWidget = true);

    void SetTexture(Texture *texture);
    Texture* GetTexture();

protected:
    //virtual bool OnEvent(const tb::TBWidgetEvent &ev);
};




class UIView : public UIWidget
{
public:
    UIView(Context* context);
};




enum UI_WINDOW_SETTINGS {
    UI_WINDOW_SETTINGS_NONE			= 0,
    UI_WINDOW_SETTINGS_TITLEBAR		= 0,
    UI_WINDOW_SETTINGS_RESIZABLE	= 0,
    UI_WINDOW_SETTINGS_CLOSE_BUTTON	= 0,
    UI_WINDOW_SETTINGS_CAN_ACTIVATE	= 0,

    UI_WINDOW_SETTINGS_DEFAULT = 0
};


class UIWindow : public UIWidget
{
public:
    UIWindow(Context* context, bool createWidget = true);

    UI_WINDOW_SETTINGS GetSettings();
    void SetSettings(UI_WINDOW_SETTINGS settings);

    void ResizeToFitContent();

    void AddChild(UIWidget *child);

    void Close();

protected:
    //virtual bool OnEvent(const tb::TBWidgetEvent &ev);
};



enum UI_MESSAGEWINDOW_SETTINGS
{
    UI_MESSAGEWINDOW_SETTINGS_OK = 0,
    UI_MESSAGEWINDOW_SETTINGS_OK_CANCEL = 0,
    UI_MESSAGEWINDOW_SETTINGS_YES_NO = 0
};


class UIMessageWindow : public UIWindow
{
public:
    UIMessageWindow(Context* context, UIWidget* target, const String& id, bool createWidget = true);

    void Show(const String& title, const String& message, UI_MESSAGEWINDOW_SETTINGS settings, bool dimmer, int width, int height);

protected:
    virtual bool OnEvent(const tb::TBWidgetEvent &ev) = 0;
};



class UI : public Object
{
public:
    UI(Context* context);

    void SetKeyboardDisabled(bool disabled);
    void SetInputDisabled(bool disabled);

    void Render(bool resetRenderTargets = true);

    void Initialize(const String& languageFile);

    void Shutdown();

    void LoadSkin(const String& skin, const String& overrideSkin = "");
    bool GetSkinLoaded();

    void LoadDefaultPlayerSkin();


    void AddFont(const String& fontFile, const String &name);
    void SetDefaultFont(const String& name, int size);

    unsigned DebugGetWrappedWidgetCount();

    void PruneUnreachableWidgets();

    void GetTBIDString(unsigned id, String& value);

    //SystemUI::MessageBox *ShowSystemMessageBox(const String& title, const String& message);
    void ShowDebugHud(bool value);
    void ToggleDebugHud();

    void ShowConsole(bool value);
    void ToggleConsole();

    bool GetFocusedWidget();

    void RequestExit();

    UIRenderer* GetRenderer();

    UIWidget* GetWidgetAt(int x, int y, bool include_children);

    bool GetBlockChangedEvents() const;

    void SetBlockChangedEvents(bool blocked = true);

    UIWidget* GetHoveredWidget();

    static void DebugShowSettingsWindow(UIWidget* parent);
};

}





void SetRandomSeed(unsigned seed);
unsigned GetRandomSeed();
int Rand();
float RandStandardNormal();



class Engine : public Object
{
public:
    Engine(Context* context);

    bool Initialize(const VariantMap& parameters);
    void RunFrame();
    //Console* CreateConsole();
    //DebugHud* CreateDebugHud();
    void SetMinFps(int fps);
    void SetMaxFps(int fps);
    void SetMaxInactiveFps(int fps);
    void SetTimeStepSmoothing(int frames);
    void SetPauseMinimized(bool enable);
    void SetAutoExit(bool enable);
    void SetNextTimeStep(float seconds);
    void Exit();
    void DumpProfiler();
    void DumpResources(bool dumpFileName = false);
    void DumpMemory();

    float GetNextTimeStep() const;

    int GetMinFps() const;
    int GetMaxFps() const;

    int GetMaxInactiveFps() const;
    int GetTimeStepSmoothing() const;

    bool GetPauseMinimized() const;
    bool GetAutoExit() const;

    bool IsInitialized() const;
    bool IsExiting() const;
    bool IsHeadless() const;

    void SetHeadless( bool value );


    void Update();
    void Render();
    void ApplyFrameLimit();

    //static VariantMap ParseParameters(const Vector<String>& arguments);
    //static bool HasParameter(const VariantMap& parameters, const String& parameter);
    //static const Variant & GetParameter(const VariantMap& parameters, const String& parameter, const Variant& defaultValue = Variant::EMPTY);


    //void SetPaused(bool paused); // TODO: Atomic;
    //void SetRunNextPausedFrame(bool run);
    //bool IsPaused() const;
    //bool GetRunNextPausedFrame() const;

    //unsigned GetFps() const; // TODO: Atomic;

    //bool GetDebugBuild() const; TODO
};


static const unsigned DEBUGHUD_SHOW_NONE = 0x0;
static const unsigned DEBUGHUD_SHOW_STATS = 0x1;
static const unsigned DEBUGHUD_SHOW_MODE = 0x2;
static const unsigned DEBUGHUD_SHOW_PROFILER = 0x4;
static const unsigned DEBUGHUD_SHOW_ALL = 0x7;

class DebugHud : public Object
{
public:
    DebugHud(Context* context);

    void Update(float timeStep);
    void SetMode(unsigned mode);
    //void CycleMode(); // TODO
    void SetProfilerMaxDepth(unsigned depth);
    void SetProfilerInterval(float interval);
    void SetUseRendererStats(bool enable);
    void Toggle(unsigned mode);
    void ToggleAll();

    //Text* GetStatsText() const;
    //Text* GetModeText() const;
    //Text* GetProfilerText() const;

    unsigned GetMode() const;
    unsigned GetProfilerMaxDepth() const;

    float GetProfilerInterval() const;

    bool GetUseRendererStats() const;

    void SetAppStats(const String& label, const Variant& stats);
    void SetAppStats(const String& label, const String& stats);
    bool ResetAppStats(const String& label);
    void ClearAppStats();

}


}



namespace Craft
{


class DaoPlayer : public Object
{
public:
    DaoPlayer(Context* context);

    Scene* LoadScene(const String& filename, Camera* camera = NULL);

    Scene* GetCurrentScene();
};


}
