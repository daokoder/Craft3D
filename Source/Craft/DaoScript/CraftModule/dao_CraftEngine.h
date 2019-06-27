#ifndef __DAO_CRAFT_H__
#define __DAO_CRAFT_H__
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<dao.h>


#ifdef __cplusplus
extern "C"{
#endif

#include<modules/auxlib/dao_aux.h>
#include<modules/stream/dao_stream.h>
#include<daoList.h>


#ifdef __cplusplus
}
#endif

#include"DaoCraftEngine.h"


#ifndef DAO_CRAFT_STATIC
#ifndef DAO_CRAFT_DLL
#define DAO_CRAFT_DLL DAO_DLL_EXPORT
#endif
#else
#define DAO_CRAFT_DLL
#endif

#ifdef WIN32
#define DAO_CRAFT_DLLT DAO_CRAFT_DLL
#else
#define DAO_CRAFT_DLLT
#endif

using namespace tb;
using namespace Craft;
using namespace Craft::UIKit;

#ifdef __cplusplus
extern "C"{
#endif

extern DaoTypeCore *dao_Craft_Matrix4_Core;
extern DaoTypeCore *dao_Craft_Matrix3_Core;
extern DaoTypeCore *dao_Craft_Vector3_Core;
extern DaoTypeCore *dao_Craft_Quaternion_Core;
extern DaoTypeCore *dao_Craft_Vector2_Core;
extern DaoTypeCore *dao_Craft_IntVector2_Core;
extern DaoTypeCore *dao_Craft_Vector4_Core;
extern DaoTypeCore *dao_Craft_Matrix3x4_Core;
extern DaoTypeCore *dao_Craft_Plane_Core;
extern DaoTypeCore *dao_Craft_Rect_Core;
extern DaoTypeCore *dao_Craft_Sphere_Core;
extern DaoTypeCore *dao_Craft_BoundingBox_Core;
extern DaoTypeCore *dao_Craft_Frustum_Core;
extern DaoTypeCore *dao_Craft_Polyhedron_Core;
extern DaoTypeCore *dao_Craft_Ray_Core;
extern DaoTypeCore *dao_Craft_IntRect_Core;
extern DaoTypeCore *dao_Craft_Color_Core;
extern DaoTypeCore *dao_Craft_StringHash_Core;
extern DaoTypeCore *dao_Craft_StringVector_Core;
extern DaoTypeCore *dao_Craft_VariantMap_Core;
extern DaoTypeCore *dao_Craft_RefCounted_Core;
extern DaoTypeCore *dao_Craft_Variant_Core;
extern DaoTypeCore *dao_Craft_Spline_Core;
extern DaoTypeCore *dao_Craft_Context_Core;
extern DaoTypeCore *dao_Craft_EventHandler_Core;
extern DaoTypeCore *dao_Craft_Object_Core;
extern DaoTypeCore *dao_Craft_TypeInfo_Core;
extern DaoTypeCore *dao_Craft_ObjectFactory_Core;
extern DaoTypeCore *dao_Craft_Timer_Core;
extern DaoTypeCore *dao_Craft_HiresTimer_Core;
extern DaoTypeCore *dao_Craft_Time_Core;
extern DaoTypeCore *dao_Craft_Mutex_Core;
extern DaoTypeCore *dao_Craft_Condition_Core;
extern DaoTypeCore *dao_Craft_Thread_Core;
extern DaoTypeCore *dao_Craft_Serializer_Core;
extern DaoTypeCore *dao_Craft_Deserializer_Core;
extern DaoTypeCore *dao_Craft_File_Core;
extern DaoTypeCore *dao_Craft_FileSystem_Core;
extern DaoTypeCore *dao_Craft_FileWatcher_Core;
extern DaoTypeCore *dao_Craft_PackageEntry_Core;
extern DaoTypeCore *dao_Craft_PackageFile_Core;
extern DaoTypeCore *dao_Craft_Resource_Core;
extern DaoTypeCore *dao_Craft_CompressedLevel_Core;
extern DaoTypeCore *dao_Craft_Image_Core;
extern DaoTypeCore *dao_Craft_Localization_Core;
extern DaoTypeCore *dao_Craft_XMLFile_Core;
extern DaoTypeCore *dao_Craft_XPathQuery_Core;
extern DaoTypeCore *dao_Craft_XPathResultSet_Core;
extern DaoTypeCore *dao_Craft_XMLElement_Core;
extern DaoTypeCore *dao_Craft_Texture_Core;
extern DaoTypeCore *dao_Craft_Material_Core;
extern DaoTypeCore *dao_Craft_ResourceCache_Core;
extern DaoTypeCore *dao_Craft_Serializable_Core;
extern DaoTypeCore *dao_Craft_Animatable_Core;
extern DaoTypeCore *dao_Craft_Node_Core;
extern DaoTypeCore *dao_Craft_Scene_Core;
extern DaoTypeCore *dao_Craft_ValueAnimation_Core;
extern DaoTypeCore *dao_Craft_ObjectAnimation_Core;
extern DaoTypeCore *dao_Craft_Component_Core;
extern DaoTypeCore *dao_Craft_Camera_Core;
extern DaoTypeCore *dao_Craft_Connection_Core;
extern DaoTypeCore *dao_Craft_SceneResolver_Core;
extern DaoTypeCore *dao_Craft_ScriptComponent_Core;
extern DaoTypeCore *dao_Craft_DaoComponent_Core;
extern DaoTypeCore *dao_Craft_AnimationController_Core;
extern DaoTypeCore *dao_Craft_Drawable_Core;
extern DaoTypeCore *dao_Craft_CustomGeometry_Core;
extern DaoTypeCore *dao_Craft_RigidBody_Core;
extern DaoTypeCore *dao_Craft_CollisionShape_Core;
extern DaoTypeCore *dao_Craft_Octant_Core;
extern DaoTypeCore *dao_Craft_Octree_Core;
extern DaoTypeCore *dao_Craft_SplinePath_Core;
extern DaoTypeCore *dao_Craft_UnknownComponent_Core;
extern DaoTypeCore *dao_Craft_ScriptComponentFile_Core;
extern DaoTypeCore *dao_Craft_DaoComponentFile_Core;
extern DaoTypeCore *dao_Craft_Graphics_Core;
extern DaoTypeCore *dao_Craft_Light_Core;
extern DaoTypeCore *dao_Craft_Viewport_Core;
extern DaoTypeCore *dao_Craft_RenderSurface_Core;
extern DaoTypeCore *dao_Craft_Renderer_Core;
extern DaoTypeCore *dao_Craft_BiasParameters_Core;
extern DaoTypeCore *dao_Craft_CascadeParameters_Core;
extern DaoTypeCore *dao_Craft_FocusParameters_Core;
extern DaoTypeCore *dao_Craft_Pass_Core;
extern DaoTypeCore *dao_Craft_Technique_Core;
extern DaoTypeCore *dao_Craft_Geometry_Core;
extern DaoTypeCore *dao_Craft_Texture2D_Core;
extern DaoTypeCore *dao_Craft_TextureCube_Core;
extern DaoTypeCore *dao_Craft_FrameInfo_Core;
extern DaoTypeCore *dao_Craft_Shader_Core;
extern DaoTypeCore *dao_Craft_ShaderVariation_Core;
extern DaoTypeCore *dao_Craft_ShaderProgram_Core;
extern DaoTypeCore *dao_Craft_RenderTargetInfo_Core;
extern DaoTypeCore *dao_Craft_RenderPathCommand_Core;
extern DaoTypeCore *dao_Craft_RenderPath_Core;
extern DaoTypeCore *dao_Craft_RayOctreeQuery_Core;
extern DaoTypeCore *dao_Craft_View_Core;
extern DaoTypeCore *dao_Craft_StaticModel_Core;
extern DaoTypeCore *dao_Craft_AnimatedModel_Core;
extern DaoTypeCore *dao_Craft_Terrain_Core;
extern DaoTypeCore *dao_Craft_Bone_Core;
extern DaoTypeCore *dao_Craft_Skeleton_Core;
extern DaoTypeCore *dao_Craft_Model_Core;
extern DaoTypeCore *dao_Craft_AnimationKeyFrame_Core;
extern DaoTypeCore *dao_Craft_AnimationTrack_Core;
extern DaoTypeCore *dao_Craft_AnimationTriggerPoint_Core;
extern DaoTypeCore *dao_Craft_Animation_Core;
extern DaoTypeCore *dao_Craft_AnimationStateTrack_Core;
extern DaoTypeCore *dao_Craft_AnimationState_Core;
extern DaoTypeCore *dao_Craft_AnimationControl_Core;
extern DaoTypeCore *dao_Craft_Skybox_Core;
extern DaoTypeCore *dao_Craft_StaticModelGroup_Core;
extern DaoTypeCore *dao_Craft_Billboard_Core;
extern DaoTypeCore *dao_Craft_BillboardSet_Core;
extern DaoTypeCore *dao_Craft_ColorFrame_Core;
extern DaoTypeCore *dao_Craft_TextureFrame_Core;
extern DaoTypeCore *dao_Craft_ParticleEffect_Core;
extern DaoTypeCore *dao_Craft_Particle_Core;
extern DaoTypeCore *dao_Craft_ParticleEmitter_Core;
extern DaoTypeCore *dao_Craft_TerrainPatch_Core;
extern DaoTypeCore *dao_Craft_Sound_Core;
extern DaoTypeCore *dao_Craft_SoundSource_Core;
extern DaoTypeCore *dao_Craft_SoundListener_Core;
extern DaoTypeCore *dao_Craft_Audio_Core;
extern DaoTypeCore *dao_Craft_SoundStream_Core;
extern DaoTypeCore *dao_Craft_SoundSource3D_Core;
extern DaoTypeCore *dao_Craft_TouchState_Core;
extern DaoTypeCore *dao_Craft_JoystickState_Core;
extern DaoTypeCore *dao_Craft_Input_Core;
extern DaoTypeCore *dao_Craft_Constraint_Core;
extern DaoTypeCore *dao_Craft_PhysicsWorld_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIWidget_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIView_Core;
extern DaoTypeCore *dao_Craft_UIKit_UILayoutParams_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIFontDescription_Core;
extern DaoTypeCore *dao_Craft_UIKit_UISelectList_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIPreferredSize_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIDragObject_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIButton_Core;
extern DaoTypeCore *dao_Craft_UIKit_UICheckBox_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIClickLabel_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIContainer_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIDimmer_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIDragDrop_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIEditField_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIImageWidget_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIInlineSelect_Core;
extern DaoTypeCore *dao_Craft_UIKit_UILayout_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIListView_Core;
extern DaoTypeCore *dao_Craft_UIKit_UISelectItemSource_Core;
extern DaoTypeCore *dao_Craft_UIKit_UISelectItem_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIMenuWindow_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIMenuItem_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIMenuItemSource_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIPopupWindow_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIRenderer_Core;
extern DaoTypeCore *dao_Craft_UIKit_UISceneView_Core;
extern DaoTypeCore *dao_Craft_UIKit_SceneViewWidget_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIScrollContainer_Core;
extern DaoTypeCore *dao_Craft_UIKit_UISection_Core;
extern DaoTypeCore *dao_Craft_UIKit_UISelectDropdown_Core;
extern DaoTypeCore *dao_Craft_UIKit_UISeparator_Core;
extern DaoTypeCore *dao_Craft_UIKit_UISkinImage_Core;
extern DaoTypeCore *dao_Craft_UIKit_UITabContainer_Core;
extern DaoTypeCore *dao_Craft_UIKit_UITextField_Core;
extern DaoTypeCore *dao_Craft_UIKit_UITextureWidget_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIWindow_Core;
extern DaoTypeCore *dao_Craft_UIKit_UIMessageWindow_Core;
extern DaoTypeCore *dao_Craft_UIKit_UI_Core;
extern DaoTypeCore *dao_Craft_Engine_Core;
extern DaoTypeCore *dao_Craft_DebugHud_Core;
extern DaoTypeCore *dao_Craft_DaoPlayer_Core;

#ifdef __cplusplus
}
#endif

DAO_CRAFT_DLL Craft::StringVector* Dao_Craft_StringVector_New();

DAO_CRAFT_DLL Craft::VariantMap* Dao_Craft_VariantMap_New();

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_RefCounted 
{
	public:
	DaoCxxVirt_Craft_RefCounted(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	Craft::ClassID GetClassID( int &_cs  )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_RefCounted :
	public Craft::RefCounted, public DaoCxxVirt_Craft_RefCounted
{ 

	public:
	DaoCxx_Craft_RefCounted(  ) : Craft::RefCounted(  ){}

	~DaoCxx_Craft_RefCounted();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	Craft::ClassID GetClassID(  )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_RefCounted* DaoCxx_Craft_RefCounted_New(  );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Context  :
	public DaoCxxVirt_Craft_RefCounted
{
	public:
	DaoCxxVirt_Craft_Context(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Context :
	public Craft::Context, public DaoCxxVirt_Craft_Context
{ 

	public:
	DaoCxx_Craft_Context(  ) : Craft::Context(  ){}

	~DaoCxx_Craft_Context();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Context* DaoCxx_Craft_Context_New(  );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_EventHandler 
{
	public:
	DaoCxxVirt_Craft_EventHandler(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void Invoke( int &_cs, Craft::VariantMap& eventData );
	Craft::EventHandler* Clone( int &_cs  )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_EventHandler :
	public Craft::EventHandler, public DaoCxxVirt_Craft_EventHandler
{ 

	public:
	DaoCxx_Craft_EventHandler( Craft::Object* receiver ) : Craft::EventHandler( receiver ){}
	DaoCxx_Craft_EventHandler( Craft::Object* receiver, void* userData ) : Craft::EventHandler( receiver, userData ){}

	~DaoCxx_Craft_EventHandler();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void Invoke( Craft::VariantMap& eventData );
	Craft::EventHandler* Clone(  )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_EventHandler* DaoCxx_Craft_EventHandler_New( Craft::Object* receiver );

DAO_CRAFT_DLL DaoCxx_Craft_EventHandler* DaoCxx_Craft_EventHandler_New( Craft::Object* receiver, void* userData );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Object  :
	public DaoCxxVirt_Craft_RefCounted
{
	public:
	DaoCxxVirt_Craft_Object(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void OnEvent( int &_cs, Craft::Object* sender, Craft::StringHash eventType, Craft::VariantMap& eventData );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Object :
	public Craft::Object, public DaoCxxVirt_Craft_Object
{ CRAFT_OBJECT(DaoCxx_Craft_Object,Craft::Object);

	public:
	DaoCxx_Craft_Object( Craft::Context* context ) : Craft::Object( context ){}

	~DaoCxx_Craft_Object();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void OnEvent( Craft::Object* sender, Craft::StringHash eventType, Craft::VariantMap& eventData );

};

DAO_CRAFT_DLL DaoCxx_Craft_Object* DaoCxx_Craft_Object_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_ObjectFactory  :
	public DaoCxxVirt_Craft_RefCounted
{
	public:
	DaoCxxVirt_Craft_ObjectFactory(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_ObjectFactory :
	public Craft::ObjectFactory, public DaoCxxVirt_Craft_ObjectFactory
{ 

	public:

	~DaoCxx_Craft_ObjectFactory();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Time  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_Time(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Time :
	public Craft::Time, public DaoCxxVirt_Craft_Time
{ 

	public:
	DaoCxx_Craft_Time( Craft::Context* context ) : Craft::Time( context ){}

	~DaoCxx_Craft_Time();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Time* DaoCxx_Craft_Time_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Thread 
{
	public:
	DaoCxxVirt_Craft_Thread(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void ThreadFunction( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Thread :
	public Craft::Thread, public DaoCxxVirt_Craft_Thread
{ 

	public:
	DaoCxx_Craft_Thread(  ) : Craft::Thread(  ){}

	~DaoCxx_Craft_Thread();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void ThreadFunction(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_Thread* DaoCxx_Craft_Thread_New(  );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Serializer 
{
	public:
	DaoCxxVirt_Craft_Serializer(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	unsigned int Write( int &_cs, const void* data, unsigned int size );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Serializer :
	public Craft::Serializer, public DaoCxxVirt_Craft_Serializer
{ 

	public:

	~DaoCxx_Craft_Serializer();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	unsigned int Write( const void* data, unsigned int size );

};

DAO_CRAFT_DLL DaoCxx_Craft_Serializer* DaoCxx_Craft_Serializer_New(  );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Deserializer 
{
	public:
	DaoCxxVirt_Craft_Deserializer(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	unsigned int Read( int &_cs, void* dest, unsigned int size );
	unsigned int Seek( int &_cs, unsigned int position );
	unsigned int GetChecksum( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Deserializer :
	public Craft::Deserializer, public DaoCxxVirt_Craft_Deserializer
{ 

	public:
	DaoCxx_Craft_Deserializer(  ) : Craft::Deserializer(  ){}
	DaoCxx_Craft_Deserializer( unsigned int size ) : Craft::Deserializer( size ){}

	~DaoCxx_Craft_Deserializer();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	unsigned int Read( void* dest, unsigned int size );
	unsigned int Seek( unsigned int position );
	unsigned int GetChecksum(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_Deserializer* DaoCxx_Craft_Deserializer_New(  );

DAO_CRAFT_DLL DaoCxx_Craft_Deserializer* DaoCxx_Craft_Deserializer_New( unsigned int size );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_File  :
	public DaoCxxVirt_Craft_Object, public DaoCxxVirt_Craft_Deserializer, public DaoCxxVirt_Craft_Serializer
{
	public:
	DaoCxxVirt_Craft_File(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	unsigned int Read( int &_cs, void* dest, unsigned int size );
	void ReadText( int &_cs, Craft::String& text );
	unsigned int Seek( int &_cs, unsigned int position );
	unsigned int Write( int &_cs, const void* data, unsigned int size );
	unsigned int GetChecksum( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_File :
	public Craft::File, public DaoCxxVirt_Craft_File
{ 

	public:
	DaoCxx_Craft_File( Craft::Context* context ) : Craft::File( context ){}
	DaoCxx_Craft_File( Craft::Context* context, const Craft::String& fileName, Craft::FileMode mode=FILE_READ ) : Craft::File( context, fileName, mode ){}

	~DaoCxx_Craft_File();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	unsigned int Read( void* dest, unsigned int size );
	void ReadText( Craft::String& text );
	unsigned int Seek( unsigned int position );
	unsigned int Write( const void* data, unsigned int size );
	unsigned int GetChecksum(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_File* DaoCxx_Craft_File_New( Craft::Context* context );

DAO_CRAFT_DLL DaoCxx_Craft_File* DaoCxx_Craft_File_New( Craft::Context* context, const Craft::String& fileName, Craft::FileMode mode );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_FileSystem  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_FileSystem(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_FileSystem :
	public Craft::FileSystem, public DaoCxxVirt_Craft_FileSystem
{ 

	public:
	DaoCxx_Craft_FileSystem( Craft::Context* context ) : Craft::FileSystem( context ){}

	~DaoCxx_Craft_FileSystem();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_FileSystem* DaoCxx_Craft_FileSystem_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_FileWatcher  :
	public DaoCxxVirt_Craft_Object, public DaoCxxVirt_Craft_Thread
{
	public:
	DaoCxxVirt_Craft_FileWatcher(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void ThreadFunction( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_FileWatcher :
	public Craft::FileWatcher, public DaoCxxVirt_Craft_FileWatcher
{ 

	public:
	DaoCxx_Craft_FileWatcher( Craft::Context* context ) : Craft::FileWatcher( context ){}

	~DaoCxx_Craft_FileWatcher();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void ThreadFunction(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_FileWatcher* DaoCxx_Craft_FileWatcher_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_PackageFile  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_PackageFile(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_PackageFile :
	public Craft::PackageFile, public DaoCxxVirt_Craft_PackageFile
{ 

	public:
	DaoCxx_Craft_PackageFile( Craft::Context* context ) : Craft::PackageFile( context ){}
	DaoCxx_Craft_PackageFile( Craft::Context* context, const Craft::String& fileName, unsigned int startOffset=0 ) : Craft::PackageFile( context, fileName, startOffset ){}

	~DaoCxx_Craft_PackageFile();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_PackageFile* DaoCxx_Craft_PackageFile_New( Craft::Context* context );

DAO_CRAFT_DLL DaoCxx_Craft_PackageFile* DaoCxx_Craft_PackageFile_New( Craft::Context* context, const Craft::String& fileName, unsigned int startOffset );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Resource  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_Resource(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );
	bool EndLoad( int &_cs  );
	bool Save( int &_cs, Craft::Serializer& dest )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Resource :
	public Craft::Resource, public DaoCxxVirt_Craft_Resource
{ 

	public:
	DaoCxx_Craft_Resource( Craft::Context* context ) : Craft::Resource( context ){}

	~DaoCxx_Craft_Resource();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );
	bool EndLoad(  );
	bool Save( Craft::Serializer& dest )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_Resource* DaoCxx_Craft_Resource_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Image  :
	public DaoCxxVirt_Craft_Resource
{
	public:
	DaoCxxVirt_Craft_Image(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );
	bool Save( int &_cs, Craft::Serializer& dest )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Image :
	public Craft::Image, public DaoCxxVirt_Craft_Image
{ 

	public:
	DaoCxx_Craft_Image( Craft::Context* context ) : Craft::Image( context ){}

	~DaoCxx_Craft_Image();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );
	bool Save( Craft::Serializer& dest )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_Image* DaoCxx_Craft_Image_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Localization  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_Localization(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Localization :
	public Craft::Localization, public DaoCxxVirt_Craft_Localization
{ 

	public:
	DaoCxx_Craft_Localization( Craft::Context* context ) : Craft::Localization( context ){}

	~DaoCxx_Craft_Localization();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Localization* DaoCxx_Craft_Localization_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_XMLFile  :
	public DaoCxxVirt_Craft_Resource
{
	public:
	DaoCxxVirt_Craft_XMLFile(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );
	bool Save( int &_cs, Craft::Serializer& dest )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_XMLFile :
	public Craft::XMLFile, public DaoCxxVirt_Craft_XMLFile
{ 

	public:
	DaoCxx_Craft_XMLFile( Craft::Context* context ) : Craft::XMLFile( context ){}

	~DaoCxx_Craft_XMLFile();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );
	bool Save( Craft::Serializer& dest )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_XMLFile* DaoCxx_Craft_XMLFile_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Texture  :
	public DaoCxxVirt_Craft_Resource
{
	public:
	DaoCxxVirt_Craft_Texture(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Texture :
	public Craft::Texture, public DaoCxxVirt_Craft_Texture
{ 

	public:
	DaoCxx_Craft_Texture( Craft::Context* context ) : Craft::Texture( context ){}

	~DaoCxx_Craft_Texture();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Texture* DaoCxx_Craft_Texture_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Material  :
	public DaoCxxVirt_Craft_Resource
{
	public:
	DaoCxxVirt_Craft_Material(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );
	bool EndLoad( int &_cs  );
	bool Save( int &_cs, Craft::Serializer& dest )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Material :
	public Craft::Material, public DaoCxxVirt_Craft_Material
{ 

	public:
	DaoCxx_Craft_Material( Craft::Context* context ) : Craft::Material( context ){}

	~DaoCxx_Craft_Material();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );
	bool EndLoad(  );
	bool Save( Craft::Serializer& dest )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_Material* DaoCxx_Craft_Material_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_ResourceCache  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_ResourceCache(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_ResourceCache :
	public Craft::ResourceCache, public DaoCxxVirt_Craft_ResourceCache
{ 

	public:
	DaoCxx_Craft_ResourceCache( Craft::Context* context ) : Craft::ResourceCache( context ){}

	~DaoCxx_Craft_ResourceCache();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_ResourceCache* DaoCxx_Craft_ResourceCache_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Serializable  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_Serializable(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool Load( int &_cs, Craft::Deserializer& source );
	bool Save( int &_cs, Craft::Serializer& dest )const;
	void ApplyAttributes( int &_cs  );
	bool SaveDefaultAttributes( int &_cs  )const;
	void MarkNetworkUpdate( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Serializable :
	public Craft::Serializable, public DaoCxxVirt_Craft_Serializable
{ 

	public:
	DaoCxx_Craft_Serializable( Craft::Context* context ) : Craft::Serializable( context ){}

	~DaoCxx_Craft_Serializable();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool Load( Craft::Deserializer& source );
	bool Save( Craft::Serializer& dest )const;
	void ApplyAttributes(  );
	bool SaveDefaultAttributes(  )const;
	void MarkNetworkUpdate(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_Serializable* DaoCxx_Craft_Serializable_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Animatable  :
	public DaoCxxVirt_Craft_Serializable
{
	public:
	DaoCxxVirt_Craft_Animatable(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void OnAttributeAnimationAdded( int &_cs  );
	void OnAttributeAnimationRemoved( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Animatable :
	public Craft::Animatable, public DaoCxxVirt_Craft_Animatable
{ CRAFT_OBJECT(DaoCxx_Craft_Animatable,Craft::Animatable);

	public:
	DaoCxx_Craft_Animatable( Craft::Context* context ) : Craft::Animatable( context ){}

	~DaoCxx_Craft_Animatable();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void OnAttributeAnimationAdded(  );
	void OnAttributeAnimationRemoved(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_Animatable* DaoCxx_Craft_Animatable_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Node  :
	public DaoCxxVirt_Craft_Animatable
{
	public:
	DaoCxxVirt_Craft_Node(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool Load( int &_cs, Craft::Deserializer& source );
	bool Save( int &_cs, Craft::Serializer& dest )const;
	void ApplyAttributes( int &_cs  );
	bool SaveDefaultAttributes( int &_cs  )const;
	void MarkNetworkUpdate( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Node :
	public Craft::Node, public DaoCxxVirt_Craft_Node
{ 

	public:
	DaoCxx_Craft_Node( Craft::Context* context ) : Craft::Node( context ){}

	~DaoCxx_Craft_Node();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool Load( Craft::Deserializer& source );
	bool Save( Craft::Serializer& dest )const;
	void ApplyAttributes(  );
	bool SaveDefaultAttributes(  )const;
	void MarkNetworkUpdate(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_Node* DaoCxx_Craft_Node_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Scene  :
	public DaoCxxVirt_Craft_Node
{
	public:
	DaoCxxVirt_Craft_Scene(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool Load( int &_cs, Craft::Deserializer& source );
	bool Save( int &_cs, Craft::Serializer& dest )const;
	void MarkNetworkUpdate( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Scene :
	public Craft::Scene, public DaoCxxVirt_Craft_Scene
{ 

	public:
	DaoCxx_Craft_Scene( Craft::Context* context ) : Craft::Scene( context ){}

	~DaoCxx_Craft_Scene();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool Load( Craft::Deserializer& source );
	bool Save( Craft::Serializer& dest )const;
	void MarkNetworkUpdate(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_Scene* DaoCxx_Craft_Scene_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_ValueAnimation  :
	public DaoCxxVirt_Craft_Resource
{
	public:
	DaoCxxVirt_Craft_ValueAnimation(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );
	bool Save( int &_cs, Craft::Serializer& dest )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_ValueAnimation :
	public Craft::ValueAnimation, public DaoCxxVirt_Craft_ValueAnimation
{ 

	public:
	DaoCxx_Craft_ValueAnimation( Craft::Context* context ) : Craft::ValueAnimation( context ){}

	~DaoCxx_Craft_ValueAnimation();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );
	bool Save( Craft::Serializer& dest )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_ValueAnimation* DaoCxx_Craft_ValueAnimation_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_ObjectAnimation  :
	public DaoCxxVirt_Craft_Resource
{
	public:
	DaoCxxVirt_Craft_ObjectAnimation(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );
	bool Save( int &_cs, Craft::Serializer& dest )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_ObjectAnimation :
	public Craft::ObjectAnimation, public DaoCxxVirt_Craft_ObjectAnimation
{ 

	public:
	DaoCxx_Craft_ObjectAnimation( Craft::Context* context ) : Craft::ObjectAnimation( context ){}

	~DaoCxx_Craft_ObjectAnimation();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );
	bool Save( Craft::Serializer& dest )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_ObjectAnimation* DaoCxx_Craft_ObjectAnimation_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Component  :
	public DaoCxxVirt_Craft_Animatable
{
	public:
	DaoCxxVirt_Craft_Component(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void OnSetEnabled( int &_cs  );
	bool Save( int &_cs, Craft::Serializer& dest )const;
	void MarkNetworkUpdate( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Component :
	public Craft::Component, public DaoCxxVirt_Craft_Component
{ 

	public:
	DaoCxx_Craft_Component( Craft::Context* context ) : Craft::Component( context ){}

	~DaoCxx_Craft_Component();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void OnSetEnabled(  );
	bool Save( Craft::Serializer& dest )const;
	void MarkNetworkUpdate(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_Component* DaoCxx_Craft_Component_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Camera  :
	public DaoCxxVirt_Craft_Component
{
	public:
	DaoCxxVirt_Craft_Camera(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Camera :
	public Craft::Camera, public DaoCxxVirt_Craft_Camera
{ 

	public:
	DaoCxx_Craft_Camera( Craft::Context* context ) : Craft::Camera( context ){}

	~DaoCxx_Craft_Camera();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Camera* DaoCxx_Craft_Camera_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_ScriptComponent  :
	public DaoCxxVirt_Craft_Component
{
	public:
	DaoCxxVirt_Craft_ScriptComponent(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	Craft::ScriptComponentFile* GetComponentFile( int &_cs  )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_ScriptComponent :
	public Craft::ScriptComponent, public DaoCxxVirt_Craft_ScriptComponent
{ 

	public:
	DaoCxx_Craft_ScriptComponent( Craft::Context* context ) : Craft::ScriptComponent( context ){}

	~DaoCxx_Craft_ScriptComponent();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	String& GetComponentClassName() const;
	Craft::ScriptComponentFile* GetComponentFile(  )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_ScriptComponent* DaoCxx_Craft_ScriptComponent_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_DaoComponent  :
	public DaoCxxVirt_Craft_ScriptComponent
{
	public:
	DaoCxxVirt_Craft_DaoComponent(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool Load( int &_cs, Craft::Deserializer& source );
	void ApplyAttributes( int &_cs  );
	void OnSetEnabled( int &_cs  );
	void Start( int &_cs  );
	void DelayedStart( int &_cs  );
	void Stop( int &_cs  );
	void Update( int &_cs, float timeStep );
	void PostUpdate( int &_cs, float timeStep );
	void FixedUpdate( int &_cs, float timeStep );
	void FixedPostUpdate( int &_cs, float timeStep );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_DaoComponent :
	public Craft::DaoComponent, public DaoCxxVirt_Craft_DaoComponent
{ 

	public:
	DaoCxx_Craft_DaoComponent( Craft::Context* context ) : Craft::DaoComponent( context ){}

	~DaoCxx_Craft_DaoComponent();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool Load( Craft::Deserializer& source );
	void ApplyAttributes(  );
	void OnSetEnabled(  );
	void Start(  );
	void DelayedStart(  );
	void Stop(  );
	void Update( float timeStep );
	void PostUpdate( float timeStep );
	void FixedUpdate( float timeStep );
	void FixedPostUpdate( float timeStep );

};

DAO_CRAFT_DLL DaoCxx_Craft_DaoComponent* DaoCxx_Craft_DaoComponent_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_AnimationController  :
	public DaoCxxVirt_Craft_Component
{
	public:
	DaoCxxVirt_Craft_AnimationController(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void OnSetEnabled( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_AnimationController :
	public Craft::AnimationController, public DaoCxxVirt_Craft_AnimationController
{ 

	public:
	DaoCxx_Craft_AnimationController( Craft::Context* context ) : Craft::AnimationController( context ){}

	~DaoCxx_Craft_AnimationController();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void OnSetEnabled(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_AnimationController* DaoCxx_Craft_AnimationController_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Drawable  :
	public DaoCxxVirt_Craft_Component
{
	public:
	DaoCxxVirt_Craft_Drawable(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void OnSetEnabled( int &_cs  );
	Craft::Geometry* GetLodGeometry( int &_cs, unsigned int batchIndex, unsigned int level );
	void OnWorldBoundingBoxUpdate( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Drawable :
	public Craft::Drawable, public DaoCxxVirt_Craft_Drawable
{ 

	public:
	DaoCxx_Craft_Drawable( Craft::Context* context, unsigned char drawableFlags=0 ) : Craft::Drawable( context, drawableFlags ){}

	~DaoCxx_Craft_Drawable();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void OnSetEnabled(  );
	Craft::Geometry* GetLodGeometry( unsigned int batchIndex, unsigned int level );
	void OnWorldBoundingBoxUpdate(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_Drawable* DaoCxx_Craft_Drawable_New( Craft::Context* context, unsigned char drawableFlags );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_CustomGeometry  :
	public DaoCxxVirt_Craft_Drawable
{
	public:
	DaoCxxVirt_Craft_CustomGeometry(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	Craft::Geometry* GetLodGeometry( int &_cs, unsigned int batchIndex, unsigned int level );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_CustomGeometry :
	public Craft::CustomGeometry, public DaoCxxVirt_Craft_CustomGeometry
{ 

	public:
	DaoCxx_Craft_CustomGeometry( Craft::Context* context ) : Craft::CustomGeometry( context ){}

	~DaoCxx_Craft_CustomGeometry();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	Craft::Geometry* GetLodGeometry( unsigned int batchIndex, unsigned int level );

};

DAO_CRAFT_DLL DaoCxx_Craft_CustomGeometry* DaoCxx_Craft_CustomGeometry_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_RigidBody  :
	public DaoCxxVirt_Craft_Component
{
	public:
	DaoCxxVirt_Craft_RigidBody(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void ApplyAttributes( int &_cs  );
	void OnSetEnabled( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_RigidBody :
	public Craft::RigidBody, public DaoCxxVirt_Craft_RigidBody
{ 

	public:
	DaoCxx_Craft_RigidBody( Craft::Context* context ) : Craft::RigidBody( context ){}

	~DaoCxx_Craft_RigidBody();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void ApplyAttributes(  );
	void OnSetEnabled(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_RigidBody* DaoCxx_Craft_RigidBody_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_CollisionShape  :
	public DaoCxxVirt_Craft_Component
{
	public:
	DaoCxxVirt_Craft_CollisionShape(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void ApplyAttributes( int &_cs  );
	void OnSetEnabled( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_CollisionShape :
	public Craft::CollisionShape, public DaoCxxVirt_Craft_CollisionShape
{ 

	public:
	DaoCxx_Craft_CollisionShape( Craft::Context* context ) : Craft::CollisionShape( context ){}

	~DaoCxx_Craft_CollisionShape();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void ApplyAttributes(  );
	void OnSetEnabled(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_CollisionShape* DaoCxx_Craft_CollisionShape_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Octree  :
	public DaoCxxVirt_Craft_Component
{
	public:
	DaoCxxVirt_Craft_Octree(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Octree :
	public Craft::Octree, public DaoCxxVirt_Craft_Octree
{ 

	public:
	DaoCxx_Craft_Octree( Craft::Context* context ) : Craft::Octree( context ){}

	~DaoCxx_Craft_Octree();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Octree* DaoCxx_Craft_Octree_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_SplinePath  :
	public DaoCxxVirt_Craft_Component
{
	public:
	DaoCxxVirt_Craft_SplinePath(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void ApplyAttributes( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_SplinePath :
	public Craft::SplinePath, public DaoCxxVirt_Craft_SplinePath
{ 

	public:
	DaoCxx_Craft_SplinePath( Craft::Context* context ) : Craft::SplinePath( context ){}

	~DaoCxx_Craft_SplinePath();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void ApplyAttributes(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_SplinePath* DaoCxx_Craft_SplinePath_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UnknownComponent  :
	public DaoCxxVirt_Craft_Component
{
	public:
	DaoCxxVirt_Craft_UnknownComponent(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	Craft::StringHash GetType( int &_cs  )const;
	bool Load( int &_cs, Craft::Deserializer& source );
	bool LoadXML( int &_cs, const Craft::XMLElement& source );
	bool Save( int &_cs, Craft::Serializer& dest )const;
	bool SaveXML( int &_cs, Craft::XMLElement& dest )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_UnknownComponent :
	public Craft::UnknownComponent, public DaoCxxVirt_Craft_UnknownComponent
{ 

	public:
	DaoCxx_Craft_UnknownComponent( Craft::Context* context ) : Craft::UnknownComponent( context ){}

	~DaoCxx_Craft_UnknownComponent();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	Craft::StringHash GetType(  )const;
	bool Load( Craft::Deserializer& source );
	bool LoadXML( const Craft::XMLElement& source );
	bool Save( Craft::Serializer& dest )const;
	bool SaveXML( Craft::XMLElement& dest )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_UnknownComponent* DaoCxx_Craft_UnknownComponent_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_ScriptComponentFile  :
	public DaoCxxVirt_Craft_Resource
{
	public:
	DaoCxxVirt_Craft_ScriptComponentFile(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_ScriptComponentFile :
	public Craft::ScriptComponentFile, public DaoCxxVirt_Craft_ScriptComponentFile
{ 

	public:
	DaoCxx_Craft_ScriptComponentFile( Craft::Context* context ) : Craft::ScriptComponentFile( context ){}

	~DaoCxx_Craft_ScriptComponentFile();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_ScriptComponentFile* DaoCxx_Craft_ScriptComponentFile_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_DaoComponentFile  :
	public DaoCxxVirt_Craft_ScriptComponentFile
{
	public:
	DaoCxxVirt_Craft_DaoComponentFile(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );
	bool Save( int &_cs, Craft::Serializer& dest )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_DaoComponentFile :
	public Craft::DaoComponentFile, public DaoCxxVirt_Craft_DaoComponentFile
{ 

	public:
	DaoCxx_Craft_DaoComponentFile( Craft::Context* context ) : Craft::DaoComponentFile( context ){}

	~DaoCxx_Craft_DaoComponentFile();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );
	bool Save( Craft::Serializer& dest )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_DaoComponentFile* DaoCxx_Craft_DaoComponentFile_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Graphics  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_Graphics(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Graphics :
	public Craft::Graphics, public DaoCxxVirt_Craft_Graphics
{ CRAFT_OBJECT(DaoCxx_Craft_Graphics,Craft::Graphics);

	public:
	DaoCxx_Craft_Graphics( Craft::Context* context ) : Craft::Graphics( context ){}

	~DaoCxx_Craft_Graphics();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Graphics* DaoCxx_Craft_Graphics_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Light  :
	public DaoCxxVirt_Craft_Drawable
{
	public:
	DaoCxxVirt_Craft_Light(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Light :
	public Craft::Light, public DaoCxxVirt_Craft_Light
{ 

	public:
	DaoCxx_Craft_Light( Craft::Context* context ) : Craft::Light( context ){}

	~DaoCxx_Craft_Light();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Light* DaoCxx_Craft_Light_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Viewport  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_Viewport(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Viewport :
	public Craft::Viewport, public DaoCxxVirt_Craft_Viewport
{ 

	public:
	DaoCxx_Craft_Viewport( Craft::Context* context ) : Craft::Viewport( context ){}
	DaoCxx_Craft_Viewport( Craft::Context* context, Craft::Scene* scene, Craft::Camera* camera, Craft::RenderPath* renderPath=0 ) : Craft::Viewport( context, scene, camera, renderPath ){}
	DaoCxx_Craft_Viewport( Craft::Context* context, Craft::Scene* scene, Craft::Camera* camera, const Craft::IntRect& rect, Craft::RenderPath* renderPath=0 ) : Craft::Viewport( context, scene, camera, rect, renderPath ){}

	~DaoCxx_Craft_Viewport();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Viewport* DaoCxx_Craft_Viewport_New( Craft::Context* context );

DAO_CRAFT_DLL DaoCxx_Craft_Viewport* DaoCxx_Craft_Viewport_New( Craft::Context* context, Craft::Scene* scene, Craft::Camera* camera, Craft::RenderPath* renderPath );

DAO_CRAFT_DLL DaoCxx_Craft_Viewport* DaoCxx_Craft_Viewport_New( Craft::Context* context, Craft::Scene* scene, Craft::Camera* camera, const Craft::IntRect& rect, Craft::RenderPath* renderPath );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Renderer  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_Renderer(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Renderer :
	public Craft::Renderer, public DaoCxxVirt_Craft_Renderer
{ CRAFT_OBJECT(DaoCxx_Craft_Renderer,Craft::Renderer);

	public:
	DaoCxx_Craft_Renderer( Craft::Context* context ) : Craft::Renderer( context ){}

	~DaoCxx_Craft_Renderer();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Renderer* DaoCxx_Craft_Renderer_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Pass  :
	public DaoCxxVirt_Craft_RefCounted
{
	public:
	DaoCxxVirt_Craft_Pass(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Pass :
	public Craft::Pass, public DaoCxxVirt_Craft_Pass
{ 

	public:
	DaoCxx_Craft_Pass( const Craft::String& passName ) : Craft::Pass( passName ){}

	~DaoCxx_Craft_Pass();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Pass* DaoCxx_Craft_Pass_New( const Craft::String& passName );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Technique  :
	public DaoCxxVirt_Craft_Resource
{
	public:
	DaoCxxVirt_Craft_Technique(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Technique :
	public Craft::Technique, public DaoCxxVirt_Craft_Technique
{ 

	public:
	DaoCxx_Craft_Technique( Craft::Context* context ) : Craft::Technique( context ){}

	~DaoCxx_Craft_Technique();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );

};

DAO_CRAFT_DLL DaoCxx_Craft_Technique* DaoCxx_Craft_Technique_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Geometry  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_Geometry(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Geometry :
	public Craft::Geometry, public DaoCxxVirt_Craft_Geometry
{ 

	public:
	DaoCxx_Craft_Geometry( Craft::Context* context ) : Craft::Geometry( context ){}

	~DaoCxx_Craft_Geometry();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Geometry* DaoCxx_Craft_Geometry_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Texture2D  :
	public DaoCxxVirt_Craft_Texture
{
	public:
	DaoCxxVirt_Craft_Texture2D(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );
	bool EndLoad( int &_cs  );
	void Release( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Texture2D :
	public Craft::Texture2D, public DaoCxxVirt_Craft_Texture2D
{ 

	public:
	DaoCxx_Craft_Texture2D( Craft::Context* context ) : Craft::Texture2D( context ){}

	~DaoCxx_Craft_Texture2D();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );
	bool EndLoad(  );
	void Release(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_Texture2D* DaoCxx_Craft_Texture2D_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_TextureCube  :
	public DaoCxxVirt_Craft_Texture
{
	public:
	DaoCxxVirt_Craft_TextureCube(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );
	bool EndLoad( int &_cs  );
	void Release( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_TextureCube :
	public Craft::TextureCube, public DaoCxxVirt_Craft_TextureCube
{ 

	public:
	DaoCxx_Craft_TextureCube( Craft::Context* context ) : Craft::TextureCube( context ){}

	~DaoCxx_Craft_TextureCube();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );
	bool EndLoad(  );
	void Release(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_TextureCube* DaoCxx_Craft_TextureCube_New( Craft::Context* context );

DAO_CRAFT_DLL Craft::FrameInfo* Dao_Craft_FrameInfo_New();

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Shader  :
	public DaoCxxVirt_Craft_Resource
{
	public:
	DaoCxxVirt_Craft_Shader(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );
	bool EndLoad( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Shader :
	public Craft::Shader, public DaoCxxVirt_Craft_Shader
{ 

	public:
	DaoCxx_Craft_Shader( Craft::Context* context ) : Craft::Shader( context ){}

	~DaoCxx_Craft_Shader();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );
	bool EndLoad(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_Shader* DaoCxx_Craft_Shader_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_ShaderVariation 
{
	public:
	DaoCxxVirt_Craft_ShaderVariation(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void OnDeviceLost( int &_cs  );
	void Release( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_ShaderVariation :
	public Craft::ShaderVariation, public DaoCxxVirt_Craft_ShaderVariation
{ 

	public:
	DaoCxx_Craft_ShaderVariation( Craft::Shader* owner, Craft::ShaderType type ) : Craft::ShaderVariation( owner, type ){}

	~DaoCxx_Craft_ShaderVariation();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void OnDeviceLost(  );
	void Release(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_ShaderVariation* DaoCxx_Craft_ShaderVariation_New( Craft::Shader* owner, Craft::ShaderType type );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_View  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_View(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_View :
	public Craft::View, public DaoCxxVirt_Craft_View
{ 

	public:
	DaoCxx_Craft_View( Craft::Context* context ) : Craft::View( context ){}

	~DaoCxx_Craft_View();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_View* DaoCxx_Craft_View_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_StaticModel  :
	public DaoCxxVirt_Craft_Drawable
{
	public:
	DaoCxxVirt_Craft_StaticModel(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	Craft::Geometry* GetLodGeometry( int &_cs, unsigned int batchIndex, unsigned int level );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_StaticModel :
	public Craft::StaticModel, public DaoCxxVirt_Craft_StaticModel
{ 

	public:
	DaoCxx_Craft_StaticModel( Craft::Context* context ) : Craft::StaticModel( context ){}

	~DaoCxx_Craft_StaticModel();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	Craft::Geometry* GetLodGeometry( unsigned int batchIndex, unsigned int level );

};

DAO_CRAFT_DLL DaoCxx_Craft_StaticModel* DaoCxx_Craft_StaticModel_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_AnimatedModel  :
	public DaoCxxVirt_Craft_StaticModel
{
	public:
	DaoCxxVirt_Craft_AnimatedModel(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool Load( int &_cs, Craft::Deserializer& source );
	void ApplyAttributes( int &_cs  );
	void Update( int &_cs, const Craft::FrameInfo& frame );
	void UpdateBatches( int &_cs, const Craft::FrameInfo& frame );
	void UpdateGeometry( int &_cs, const Craft::FrameInfo& frame );
	Craft::UpdateGeometryType GetUpdateGeometryType( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_AnimatedModel :
	public Craft::AnimatedModel, public DaoCxxVirt_Craft_AnimatedModel
{ 

	public:
	DaoCxx_Craft_AnimatedModel( Craft::Context* context ) : Craft::AnimatedModel( context ){}

	~DaoCxx_Craft_AnimatedModel();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool Load( Craft::Deserializer& source );
	void ApplyAttributes(  );
	void Update( const Craft::FrameInfo& frame );
	void UpdateBatches( const Craft::FrameInfo& frame );
	void UpdateGeometry( const Craft::FrameInfo& frame );
	Craft::UpdateGeometryType GetUpdateGeometryType(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_AnimatedModel* DaoCxx_Craft_AnimatedModel_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Terrain  :
	public DaoCxxVirt_Craft_Component
{
	public:
	DaoCxxVirt_Craft_Terrain(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void ApplyAttributes( int &_cs  );
	void OnSetEnabled( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Terrain :
	public Craft::Terrain, public DaoCxxVirt_Craft_Terrain
{ 

	public:
	DaoCxx_Craft_Terrain( Craft::Context* context ) : Craft::Terrain( context ){}

	~DaoCxx_Craft_Terrain();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void ApplyAttributes(  );
	void OnSetEnabled(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_Terrain* DaoCxx_Craft_Terrain_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Model  :
	public DaoCxxVirt_Craft_Resource
{
	public:
	DaoCxxVirt_Craft_Model(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );
	bool EndLoad( int &_cs  );
	bool Save( int &_cs, Craft::Serializer& dest )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Model :
	public Craft::Model, public DaoCxxVirt_Craft_Model
{ 

	public:
	DaoCxx_Craft_Model( Craft::Context* context ) : Craft::Model( context ){}

	~DaoCxx_Craft_Model();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );
	bool EndLoad(  );
	bool Save( Craft::Serializer& dest )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_Model* DaoCxx_Craft_Model_New( Craft::Context* context );

DAO_CRAFT_DLL Craft::AnimationTrack* Dao_Craft_AnimationTrack_New();

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Animation  :
	public DaoCxxVirt_Craft_Resource
{
	public:
	DaoCxxVirt_Craft_Animation(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );
	bool Save( int &_cs, Craft::Serializer& dest )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Animation :
	public Craft::Animation, public DaoCxxVirt_Craft_Animation
{ 

	public:
	DaoCxx_Craft_Animation( Craft::Context* context ) : Craft::Animation( context ){}

	~DaoCxx_Craft_Animation();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );
	bool Save( Craft::Serializer& dest )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_Animation* DaoCxx_Craft_Animation_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Skybox  :
	public DaoCxxVirt_Craft_StaticModel
{
	public:
	DaoCxxVirt_Craft_Skybox(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void UpdateBatches( int &_cs, const Craft::FrameInfo& frame );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Skybox :
	public Craft::Skybox, public DaoCxxVirt_Craft_Skybox
{ 

	public:
	DaoCxx_Craft_Skybox( Craft::Context* context ) : Craft::Skybox( context ){}

	~DaoCxx_Craft_Skybox();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void UpdateBatches( const Craft::FrameInfo& frame );

};

DAO_CRAFT_DLL DaoCxx_Craft_Skybox* DaoCxx_Craft_Skybox_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_StaticModelGroup  :
	public DaoCxxVirt_Craft_StaticModel
{
	public:
	DaoCxxVirt_Craft_StaticModelGroup(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void ApplyAttributes( int &_cs  );
	void UpdateBatches( int &_cs, const Craft::FrameInfo& frame );
	unsigned int GetNumOccluderTriangles( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_StaticModelGroup :
	public Craft::StaticModelGroup, public DaoCxxVirt_Craft_StaticModelGroup
{ 

	public:
	DaoCxx_Craft_StaticModelGroup( Craft::Context* context ) : Craft::StaticModelGroup( context ){}

	~DaoCxx_Craft_StaticModelGroup();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void ApplyAttributes(  );
	void UpdateBatches( const Craft::FrameInfo& frame );
	unsigned int GetNumOccluderTriangles(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_StaticModelGroup* DaoCxx_Craft_StaticModelGroup_New( Craft::Context* context );

DAO_CRAFT_DLL Craft::Billboard* Dao_Craft_Billboard_New();

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_BillboardSet  :
	public DaoCxxVirt_Craft_Drawable
{
	public:
	DaoCxxVirt_Craft_BillboardSet(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_BillboardSet :
	public Craft::BillboardSet, public DaoCxxVirt_Craft_BillboardSet
{ 

	public:
	DaoCxx_Craft_BillboardSet( Craft::Context* context ) : Craft::BillboardSet( context ){}

	~DaoCxx_Craft_BillboardSet();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_BillboardSet* DaoCxx_Craft_BillboardSet_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_ParticleEffect  :
	public DaoCxxVirt_Craft_Resource
{
	public:
	DaoCxxVirt_Craft_ParticleEffect(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );
	bool EndLoad( int &_cs  );
	bool Save( int &_cs, Craft::Serializer& dest )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_ParticleEffect :
	public Craft::ParticleEffect, public DaoCxxVirt_Craft_ParticleEffect
{ 

	public:
	DaoCxx_Craft_ParticleEffect( Craft::Context* context ) : Craft::ParticleEffect( context ){}

	~DaoCxx_Craft_ParticleEffect();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );
	bool EndLoad(  );
	bool Save( Craft::Serializer& dest )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_ParticleEffect* DaoCxx_Craft_ParticleEffect_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_ParticleEmitter  :
	public DaoCxxVirt_Craft_BillboardSet
{
	public:
	DaoCxxVirt_Craft_ParticleEmitter(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void OnSetEnabled( int &_cs  );
	void Update( int &_cs, const Craft::FrameInfo& frame );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_ParticleEmitter :
	public Craft::ParticleEmitter, public DaoCxxVirt_Craft_ParticleEmitter
{ 

	public:
	DaoCxx_Craft_ParticleEmitter( Craft::Context* context ) : Craft::ParticleEmitter( context ){}

	~DaoCxx_Craft_ParticleEmitter();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void OnSetEnabled(  );
	void Update( const Craft::FrameInfo& frame );

};

DAO_CRAFT_DLL DaoCxx_Craft_ParticleEmitter* DaoCxx_Craft_ParticleEmitter_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_TerrainPatch  :
	public DaoCxxVirt_Craft_Drawable
{
	public:
	DaoCxxVirt_Craft_TerrainPatch(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void UpdateBatches( int &_cs, const Craft::FrameInfo& frame );
	void UpdateGeometry( int &_cs, const Craft::FrameInfo& frame );
	Craft::UpdateGeometryType GetUpdateGeometryType( int &_cs  );
	Craft::Geometry* GetLodGeometry( int &_cs, unsigned int batchIndex, unsigned int level );
	unsigned int GetNumOccluderTriangles( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_TerrainPatch :
	public Craft::TerrainPatch, public DaoCxxVirt_Craft_TerrainPatch
{ 

	public:
	DaoCxx_Craft_TerrainPatch( Craft::Context* context ) : Craft::TerrainPatch( context ){}

	~DaoCxx_Craft_TerrainPatch();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void UpdateBatches( const Craft::FrameInfo& frame );
	void UpdateGeometry( const Craft::FrameInfo& frame );
	Craft::UpdateGeometryType GetUpdateGeometryType(  );
	Craft::Geometry* GetLodGeometry( unsigned int batchIndex, unsigned int level );
	unsigned int GetNumOccluderTriangles(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_TerrainPatch* DaoCxx_Craft_TerrainPatch_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Sound  :
	public DaoCxxVirt_Craft_Resource
{
	public:
	DaoCxxVirt_Craft_Sound(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool BeginLoad( int &_cs, Craft::Deserializer& source );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Sound :
	public Craft::Sound, public DaoCxxVirt_Craft_Sound
{ 

	public:
	DaoCxx_Craft_Sound( Craft::Context* context ) : Craft::Sound( context ){}

	~DaoCxx_Craft_Sound();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool BeginLoad( Craft::Deserializer& source );

};

DAO_CRAFT_DLL DaoCxx_Craft_Sound* DaoCxx_Craft_Sound_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_SoundSource  :
	public DaoCxxVirt_Craft_Component
{
	public:
	DaoCxxVirt_Craft_SoundSource(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void Update( int &_cs, float timeStep );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_SoundSource :
	public Craft::SoundSource, public DaoCxxVirt_Craft_SoundSource
{ 

	public:
	DaoCxx_Craft_SoundSource( Craft::Context* context ) : Craft::SoundSource( context ){}

	~DaoCxx_Craft_SoundSource();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void Update( float timeStep );

};

DAO_CRAFT_DLL DaoCxx_Craft_SoundSource* DaoCxx_Craft_SoundSource_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_SoundListener  :
	public DaoCxxVirt_Craft_Component
{
	public:
	DaoCxxVirt_Craft_SoundListener(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_SoundListener :
	public Craft::SoundListener, public DaoCxxVirt_Craft_SoundListener
{ 

	public:
	DaoCxx_Craft_SoundListener( Craft::Context* context ) : Craft::SoundListener( context ){}

	~DaoCxx_Craft_SoundListener();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_SoundListener* DaoCxx_Craft_SoundListener_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Audio  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_Audio(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Audio :
	public Craft::Audio, public DaoCxxVirt_Craft_Audio
{ 

	public:
	DaoCxx_Craft_Audio( Craft::Context* context ) : Craft::Audio( context ){}

	~DaoCxx_Craft_Audio();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Audio* DaoCxx_Craft_Audio_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_SoundStream  :
	public DaoCxxVirt_Craft_RefCounted
{
	public:
	DaoCxxVirt_Craft_SoundStream(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	unsigned int GetData( int &_cs, signed char* dest, unsigned int numBytes );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_SoundStream :
	public Craft::SoundStream, public DaoCxxVirt_Craft_SoundStream
{ 

	public:
	DaoCxx_Craft_SoundStream(  ) : Craft::SoundStream(  ){}

	~DaoCxx_Craft_SoundStream();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	unsigned int GetData( signed char* dest, unsigned int numBytes );

};

DAO_CRAFT_DLL DaoCxx_Craft_SoundStream* DaoCxx_Craft_SoundStream_New(  );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_SoundSource3D  :
	public DaoCxxVirt_Craft_SoundSource
{
	public:
	DaoCxxVirt_Craft_SoundSource3D(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void Update( int &_cs, float timeStep );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_SoundSource3D :
	public Craft::SoundSource3D, public DaoCxxVirt_Craft_SoundSource3D
{ 

	public:
	DaoCxx_Craft_SoundSource3D( Craft::Context* context ) : Craft::SoundSource3D( context ){}

	~DaoCxx_Craft_SoundSource3D();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void Update( float timeStep );

};

DAO_CRAFT_DLL DaoCxx_Craft_SoundSource3D* DaoCxx_Craft_SoundSource3D_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Input  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_Input(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Input :
	public Craft::Input, public DaoCxxVirt_Craft_Input
{ 

	public:
	DaoCxx_Craft_Input( Craft::Context* context ) : Craft::Input( context ){}

	~DaoCxx_Craft_Input();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Input* DaoCxx_Craft_Input_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Constraint  :
	public DaoCxxVirt_Craft_Component
{
	public:
	DaoCxxVirt_Craft_Constraint(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void ApplyAttributes( int &_cs  );
	void OnSetEnabled( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_Constraint :
	public Craft::Constraint, public DaoCxxVirt_Craft_Constraint
{ 

	public:
	DaoCxx_Craft_Constraint( Craft::Context* context ) : Craft::Constraint( context ){}

	~DaoCxx_Craft_Constraint();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void ApplyAttributes(  );
	void OnSetEnabled(  );

};

DAO_CRAFT_DLL DaoCxx_Craft_Constraint* DaoCxx_Craft_Constraint_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_PhysicsWorld  :
	public DaoCxxVirt_Craft_Component
{
	public:
	DaoCxxVirt_Craft_PhysicsWorld(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void setDebugMode( int &_cs, int debugMode );
	int getDebugMode( int &_cs  )const;


};

class DAO_CRAFT_DLLT DaoCxx_Craft_PhysicsWorld :
	public Craft::PhysicsWorld, public DaoCxxVirt_Craft_PhysicsWorld
{ 

	public:
	DaoCxx_Craft_PhysicsWorld( Craft::Context* context ) : Craft::PhysicsWorld( context ){}

	~DaoCxx_Craft_PhysicsWorld();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void setDebugMode( int debugMode );
	int getDebugMode(  )const;

};

DAO_CRAFT_DLL DaoCxx_Craft_PhysicsWorld* DaoCxx_Craft_PhysicsWorld_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIWidget  :
	public DaoCxxVirt_Craft_Object, public WidgetBase
{
	public:
	DaoCxxVirt_Craft_UIKit_UIWidget(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void SetId( int &_cs, const Craft::String& id );
	double GetValue( int &_cs  );
	void AddChild( int &_cs, Craft::UIKit::UIWidget* child );
	bool OnClick( int &_cs  );
	bool OnClick( int &_cs, unsigned int refid );
	bool OnLongClick( int &_cs  );
	bool OnLeftButtonDown( int &_cs  );
	bool OnLeftButtonUp( int &_cs  );
	bool OnRightButtonDown( int &_cs  );
	bool OnRightButtonUp( int &_cs  );
	bool OnKeyDown( int &_cs, int key, int sp, int mod );
	bool OnKeyUp( int &_cs, int key, int sp, int mod );
	bool OnChange( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIWidget :
	public Craft::UIKit::UIWidget, public DaoCxxVirt_Craft_UIKit_UIWidget
{ 

	public:
	DaoCxx_Craft_UIKit_UIWidget( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UIWidget( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UIWidget();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void SetId( const Craft::String& id );
	double GetValue(  );
	void AddChild( Craft::UIKit::UIWidget* child );
	bool OnClick(  );
	bool OnClick( unsigned int refid );
	bool OnLongClick(  );
	bool OnLeftButtonDown(  );
	bool OnLeftButtonUp(  );
	bool OnRightButtonDown(  );
	bool OnRightButtonUp(  );
	bool OnKeyDown( int key, int sp, int mod );
	bool OnKeyUp( int key, int sp, int mod );
	bool OnChange(  );
	bool OnEvent(const tb::TBWidgetEvent &ev);

};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIWidget* DaoCxx_Craft_UIKit_UIWidget_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIView  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UIView(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIView :
	public Craft::UIKit::UIView, public DaoCxxVirt_Craft_UIKit_UIView
{ 

	public:
	DaoCxx_Craft_UIKit_UIView( Craft::Context* context ) : Craft::UIKit::UIView( context ){}

	~DaoCxx_Craft_UIKit_UIView();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIView* DaoCxx_Craft_UIKit_UIView_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UILayoutParams  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_UIKit_UILayoutParams(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UILayoutParams :
	public Craft::UIKit::UILayoutParams, public DaoCxxVirt_Craft_UIKit_UILayoutParams
{ 

	public:
	DaoCxx_Craft_UIKit_UILayoutParams( Craft::Context* context ) : Craft::UIKit::UILayoutParams( context ){}

	~DaoCxx_Craft_UIKit_UILayoutParams();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UILayoutParams* DaoCxx_Craft_UIKit_UILayoutParams_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIFontDescription  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_UIKit_UIFontDescription(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIFontDescription :
	public Craft::UIKit::UIFontDescription, public DaoCxxVirt_Craft_UIKit_UIFontDescription
{ 

	public:
	DaoCxx_Craft_UIKit_UIFontDescription( Craft::Context* context ) : Craft::UIKit::UIFontDescription( context ){}

	~DaoCxx_Craft_UIKit_UIFontDescription();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIFontDescription* DaoCxx_Craft_UIKit_UIFontDescription_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UISelectList  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UISelectList(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	double GetValue( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UISelectList :
	public Craft::UIKit::UISelectList, public DaoCxxVirt_Craft_UIKit_UISelectList
{ 

	public:
	DaoCxx_Craft_UIKit_UISelectList( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UISelectList( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UISelectList();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	double GetValue(  );
	void DaoWrap_HandleUIUpdate( Craft::StringHash eventType, Craft::VariantMap& eventData ){ Craft::UIKit::UISelectList::HandleUIUpdate( eventType, eventData ); }
	bool OnEvent(const tb::TBWidgetEvent &ev);

};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UISelectList* DaoCxx_Craft_UIKit_UISelectList_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIPreferredSize  :
	public DaoCxxVirt_Craft_RefCounted
{
	public:
	DaoCxxVirt_Craft_UIKit_UIPreferredSize(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIPreferredSize :
	public Craft::UIKit::UIPreferredSize, public DaoCxxVirt_Craft_UIKit_UIPreferredSize
{ 

	public:
	DaoCxx_Craft_UIKit_UIPreferredSize( int w=0, int h=0 ) : Craft::UIKit::UIPreferredSize( w, h ){}

	~DaoCxx_Craft_UIKit_UIPreferredSize();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIPreferredSize* DaoCxx_Craft_UIKit_UIPreferredSize_New( int w, int h );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIDragObject  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_UIKit_UIDragObject(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIDragObject :
	public Craft::UIKit::UIDragObject, public DaoCxxVirt_Craft_UIKit_UIDragObject
{ 

	public:
	DaoCxx_Craft_UIKit_UIDragObject( Craft::Context* context, Craft::Object* object, const Craft::String& text="", const Craft::String& icon="" ) : Craft::UIKit::UIDragObject( context, object, text, icon ){}

	~DaoCxx_Craft_UIKit_UIDragObject();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIDragObject* DaoCxx_Craft_UIKit_UIDragObject_New( Craft::Context* context, Craft::Object* object, const Craft::String& text, const Craft::String& icon );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIButton  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UIButton(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIButton :
	public Craft::UIKit::UIButton, public DaoCxxVirt_Craft_UIKit_UIButton
{ 

	public:
	DaoCxx_Craft_UIKit_UIButton( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UIButton( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UIButton();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool OnEvent(const tb::TBWidgetEvent &ev);

};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIButton* DaoCxx_Craft_UIKit_UIButton_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UICheckBox  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UICheckBox(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UICheckBox :
	public Craft::UIKit::UICheckBox, public DaoCxxVirt_Craft_UIKit_UICheckBox
{ 

	public:
	DaoCxx_Craft_UIKit_UICheckBox( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UICheckBox( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UICheckBox();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool OnEvent(const tb::TBWidgetEvent &ev);

};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UICheckBox* DaoCxx_Craft_UIKit_UICheckBox_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIClickLabel  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UIClickLabel(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIClickLabel :
	public Craft::UIKit::UIClickLabel, public DaoCxxVirt_Craft_UIKit_UIClickLabel
{ 

	public:
	DaoCxx_Craft_UIKit_UIClickLabel( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UIClickLabel( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UIClickLabel();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool OnEvent(const tb::TBWidgetEvent &ev);

};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIClickLabel* DaoCxx_Craft_UIKit_UIClickLabel_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIContainer  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UIContainer(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIContainer :
	public Craft::UIKit::UIContainer, public DaoCxxVirt_Craft_UIKit_UIContainer
{ 

	public:
	DaoCxx_Craft_UIKit_UIContainer( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UIContainer( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UIContainer();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIContainer* DaoCxx_Craft_UIKit_UIContainer_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIDimmer  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UIDimmer(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIDimmer :
	public Craft::UIKit::UIDimmer, public DaoCxxVirt_Craft_UIKit_UIDimmer
{ 

	public:
	DaoCxx_Craft_UIKit_UIDimmer( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UIDimmer( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UIDimmer();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIDimmer* DaoCxx_Craft_UIKit_UIDimmer_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIDragDrop  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_UIKit_UIDragDrop(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIDragDrop :
	public Craft::UIKit::UIDragDrop, public DaoCxxVirt_Craft_UIKit_UIDragDrop
{ 

	public:
	DaoCxx_Craft_UIKit_UIDragDrop( Craft::Context* context ) : Craft::UIKit::UIDragDrop( context ){}

	~DaoCxx_Craft_UIKit_UIDragDrop();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIDragDrop* DaoCxx_Craft_UIKit_UIDragDrop_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIEditField  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UIEditField(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	bool OnCompletion( int &_cs  );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIEditField :
	public Craft::UIKit::UIEditField, public DaoCxxVirt_Craft_UIKit_UIEditField
{ 

	public:
	DaoCxx_Craft_UIKit_UIEditField( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UIEditField( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UIEditField();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool OnCompletion(  );
	bool OnEvent(const tb::TBWidgetEvent &ev);

};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIEditField* DaoCxx_Craft_UIKit_UIEditField_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIImageWidget  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UIImageWidget(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIImageWidget :
	public Craft::UIKit::UIImageWidget, public DaoCxxVirt_Craft_UIKit_UIImageWidget
{ 

	public:
	DaoCxx_Craft_UIKit_UIImageWidget( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UIImageWidget( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UIImageWidget();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIImageWidget* DaoCxx_Craft_UIKit_UIImageWidget_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIInlineSelect  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UIInlineSelect(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIInlineSelect :
	public Craft::UIKit::UIInlineSelect, public DaoCxxVirt_Craft_UIKit_UIInlineSelect
{ 

	public:
	DaoCxx_Craft_UIKit_UIInlineSelect( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UIInlineSelect( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UIInlineSelect();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIInlineSelect* DaoCxx_Craft_UIKit_UIInlineSelect_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UILayout  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UILayout(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UILayout :
	public Craft::UIKit::UILayout, public DaoCxxVirt_Craft_UIKit_UILayout
{ 

	public:
	DaoCxx_Craft_UIKit_UILayout( Craft::Context* context, Craft::UIKit::UI_AXIS axis=UI_AXIS_X, bool createWidget=true ) : Craft::UIKit::UILayout( context, axis, createWidget ){}

	~DaoCxx_Craft_UIKit_UILayout();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UILayout* DaoCxx_Craft_UIKit_UILayout_New( Craft::Context* context, Craft::UIKit::UI_AXIS axis, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIListView  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UIListView(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIListView :
	public Craft::UIKit::UIListView, public DaoCxxVirt_Craft_UIKit_UIListView
{ 

	public:
	DaoCxx_Craft_UIKit_UIListView( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UIListView( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UIListView();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool OnEvent(const tb::TBWidgetEvent &ev);

};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIListView* DaoCxx_Craft_UIKit_UIListView_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UISelectItemSource  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_UIKit_UISelectItemSource(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UISelectItemSource :
	public Craft::UIKit::UISelectItemSource, public DaoCxxVirt_Craft_UIKit_UISelectItemSource
{ 

	public:
	DaoCxx_Craft_UIKit_UISelectItemSource( Craft::Context* context ) : Craft::UIKit::UISelectItemSource( context ){}

	~DaoCxx_Craft_UIKit_UISelectItemSource();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UISelectItemSource* DaoCxx_Craft_UIKit_UISelectItemSource_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UISelectItem  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_UIKit_UISelectItem(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UISelectItem :
	public Craft::UIKit::UISelectItem, public DaoCxxVirt_Craft_UIKit_UISelectItem
{ 

	public:
	DaoCxx_Craft_UIKit_UISelectItem( Craft::Context* context, const Craft::String& str="", const Craft::String& id="", const Craft::String& skinImage="" ) : Craft::UIKit::UISelectItem( context, str, id, skinImage ){}

	~DaoCxx_Craft_UIKit_UISelectItem();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UISelectItem* DaoCxx_Craft_UIKit_UISelectItem_New( Craft::Context* context, const Craft::String& str, const Craft::String& id, const Craft::String& skinImage );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIMenuWindow  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UIMenuWindow(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIMenuWindow :
	public Craft::UIKit::UIMenuWindow, public DaoCxxVirt_Craft_UIKit_UIMenuWindow
{ 

	public:
	DaoCxx_Craft_UIKit_UIMenuWindow( Craft::Context* context, Craft::UIKit::UIWidget* target, const Craft::String& id="" ) : Craft::UIKit::UIMenuWindow( context, target, id ){}

	~DaoCxx_Craft_UIKit_UIMenuWindow();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool OnEvent(const tb::TBWidgetEvent &ev);

};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIMenuWindow* DaoCxx_Craft_UIKit_UIMenuWindow_New( Craft::Context* context, Craft::UIKit::UIWidget* target, const Craft::String& id );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIMenuItem  :
	public DaoCxxVirt_Craft_UIKit_UISelectItem
{
	public:
	DaoCxxVirt_Craft_UIKit_UIMenuItem(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIMenuItem :
	public Craft::UIKit::UIMenuItem, public DaoCxxVirt_Craft_UIKit_UIMenuItem
{ 

	public:
	DaoCxx_Craft_UIKit_UIMenuItem( Craft::Context* context, const Craft::String& str="", const Craft::String& id="", const Craft::String& shortcut="", const Craft::String& skinBg="" ) : Craft::UIKit::UIMenuItem( context, str, id, shortcut, skinBg ){}

	~DaoCxx_Craft_UIKit_UIMenuItem();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIMenuItem* DaoCxx_Craft_UIKit_UIMenuItem_New( Craft::Context* context, const Craft::String& str, const Craft::String& id, const Craft::String& shortcut, const Craft::String& skinBg );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIMenuItemSource  :
	public DaoCxxVirt_Craft_UIKit_UISelectItemSource
{
	public:
	DaoCxxVirt_Craft_UIKit_UIMenuItemSource(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIMenuItemSource :
	public Craft::UIKit::UIMenuItemSource, public DaoCxxVirt_Craft_UIKit_UIMenuItemSource
{ 

	public:
	DaoCxx_Craft_UIKit_UIMenuItemSource( Craft::Context* context ) : Craft::UIKit::UIMenuItemSource( context ){}

	~DaoCxx_Craft_UIKit_UIMenuItemSource();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIMenuItemSource* DaoCxx_Craft_UIKit_UIMenuItemSource_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIPopupWindow  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UIPopupWindow(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIPopupWindow :
	public Craft::UIKit::UIPopupWindow, public DaoCxxVirt_Craft_UIKit_UIPopupWindow
{ 

	public:
	DaoCxx_Craft_UIKit_UIPopupWindow( Craft::Context* context, bool createWidget, Craft::UIKit::UIWidget* target, const Craft::String& id="" ) : Craft::UIKit::UIPopupWindow( context, createWidget, target, id ){}

	~DaoCxx_Craft_UIKit_UIPopupWindow();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool OnEvent(const tb::TBWidgetEvent &ev);

};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIPopupWindow* DaoCxx_Craft_UIKit_UIPopupWindow_New( Craft::Context* context, bool createWidget, Craft::UIKit::UIWidget* target, const Craft::String& id );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UISceneView  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UISceneView(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UISceneView :
	public Craft::UIKit::UISceneView, public DaoCxxVirt_Craft_UIKit_UISceneView
{ 

	public:
	DaoCxx_Craft_UIKit_UISceneView( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UISceneView( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UISceneView();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UISceneView* DaoCxx_Craft_UIKit_UISceneView_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIScrollContainer  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UIScrollContainer(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIScrollContainer :
	public Craft::UIKit::UIScrollContainer, public DaoCxxVirt_Craft_UIKit_UIScrollContainer
{ 

	public:
	DaoCxx_Craft_UIKit_UIScrollContainer( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UIScrollContainer( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UIScrollContainer();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIScrollContainer* DaoCxx_Craft_UIKit_UIScrollContainer_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UISection  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UISection(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UISection :
	public Craft::UIKit::UISection, public DaoCxxVirt_Craft_UIKit_UISection
{ 

	public:
	DaoCxx_Craft_UIKit_UISection( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UISection( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UISection();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UISection* DaoCxx_Craft_UIKit_UISection_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UISelectDropdown  :
	public DaoCxxVirt_Craft_UIKit_UIButton
{
	public:
	DaoCxxVirt_Craft_UIKit_UISelectDropdown(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UISelectDropdown :
	public Craft::UIKit::UISelectDropdown, public DaoCxxVirt_Craft_UIKit_UISelectDropdown
{ 

	public:
	DaoCxx_Craft_UIKit_UISelectDropdown( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UISelectDropdown( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UISelectDropdown();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool OnEvent(const tb::TBWidgetEvent &ev);

};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UISelectDropdown* DaoCxx_Craft_UIKit_UISelectDropdown_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UISeparator  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UISeparator(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UISeparator :
	public Craft::UIKit::UISeparator, public DaoCxxVirt_Craft_UIKit_UISeparator
{ 

	public:
	DaoCxx_Craft_UIKit_UISeparator( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UISeparator( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UISeparator();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UISeparator* DaoCxx_Craft_UIKit_UISeparator_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UISkinImage  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UISkinImage(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UISkinImage :
	public Craft::UIKit::UISkinImage, public DaoCxxVirt_Craft_UIKit_UISkinImage
{ 

	public:
	DaoCxx_Craft_UIKit_UISkinImage( Craft::Context* context, const Craft::String& bitmapID, bool createWidget=true ) : Craft::UIKit::UISkinImage( context, bitmapID, createWidget ){}

	~DaoCxx_Craft_UIKit_UISkinImage();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UISkinImage* DaoCxx_Craft_UIKit_UISkinImage_New( Craft::Context* context, const Craft::String& bitmapID, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UITabContainer  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UITabContainer(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UITabContainer :
	public Craft::UIKit::UITabContainer, public DaoCxxVirt_Craft_UIKit_UITabContainer
{ 

	public:
	DaoCxx_Craft_UIKit_UITabContainer( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UITabContainer( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UITabContainer();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UITabContainer* DaoCxx_Craft_UIKit_UITabContainer_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UITextField  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UITextField(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UITextField :
	public Craft::UIKit::UITextField, public DaoCxxVirt_Craft_UIKit_UITextField
{ 

	public:
	DaoCxx_Craft_UIKit_UITextField( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UITextField( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UITextField();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool OnEvent(const tb::TBWidgetEvent &ev);

};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UITextField* DaoCxx_Craft_UIKit_UITextField_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UITextureWidget  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UITextureWidget(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UITextureWidget :
	public Craft::UIKit::UITextureWidget, public DaoCxxVirt_Craft_UIKit_UITextureWidget
{ 

	public:
	DaoCxx_Craft_UIKit_UITextureWidget( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UITextureWidget( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UITextureWidget();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UITextureWidget* DaoCxx_Craft_UIKit_UITextureWidget_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIWindow  :
	public DaoCxxVirt_Craft_UIKit_UIWidget
{
	public:
	DaoCxxVirt_Craft_UIKit_UIWindow(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;

	void AddChild( int &_cs, Craft::UIKit::UIWidget* child );


};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIWindow :
	public Craft::UIKit::UIWindow, public DaoCxxVirt_Craft_UIKit_UIWindow
{ 

	public:
	DaoCxx_Craft_UIKit_UIWindow( Craft::Context* context, bool createWidget=true ) : Craft::UIKit::UIWindow( context, createWidget ){}

	~DaoCxx_Craft_UIKit_UIWindow();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	void AddChild( Craft::UIKit::UIWidget* child );

};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIWindow* DaoCxx_Craft_UIKit_UIWindow_New( Craft::Context* context, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UIMessageWindow  :
	public DaoCxxVirt_Craft_UIKit_UIWindow
{
	public:
	DaoCxxVirt_Craft_UIKit_UIMessageWindow(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UIMessageWindow :
	public Craft::UIKit::UIMessageWindow, public DaoCxxVirt_Craft_UIKit_UIMessageWindow
{ 

	public:
	DaoCxx_Craft_UIKit_UIMessageWindow( Craft::Context* context, Craft::UIKit::UIWidget* target, const Craft::String& id, bool createWidget=true ) : Craft::UIKit::UIMessageWindow( context, target, id, createWidget ){}

	~DaoCxx_Craft_UIKit_UIMessageWindow();
	void DaoInitWrapper( DaoVmSpace *vmspace );

	bool OnEvent(const tb::TBWidgetEvent &ev);

};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UIMessageWindow* DaoCxx_Craft_UIKit_UIMessageWindow_New( Craft::Context* context, Craft::UIKit::UIWidget* target, const Craft::String& id, bool createWidget );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_UIKit_UI  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_UIKit_UI(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_UIKit_UI :
	public Craft::UIKit::UI, public DaoCxxVirt_Craft_UIKit_UI
{ 

	public:
	DaoCxx_Craft_UIKit_UI( Craft::Context* context ) : Craft::UIKit::UI( context ){}

	~DaoCxx_Craft_UIKit_UI();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_UIKit_UI* DaoCxx_Craft_UIKit_UI_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_Engine  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_Engine(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_Engine :
	public Craft::Engine, public DaoCxxVirt_Craft_Engine
{ 

	public:
	DaoCxx_Craft_Engine( Craft::Context* context ) : Craft::Engine( context ){}

	~DaoCxx_Craft_Engine();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_Engine* DaoCxx_Craft_Engine_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_DebugHud  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_DebugHud(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_DebugHud :
	public Craft::DebugHud, public DaoCxxVirt_Craft_DebugHud
{ 

	public:
	DaoCxx_Craft_DebugHud( Craft::Context* context ) : Craft::DebugHud( context ){}

	~DaoCxx_Craft_DebugHud();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_DebugHud* DaoCxx_Craft_DebugHud_New( Craft::Context* context );

class DAO_CRAFT_DLLT DaoCxxVirt_Craft_DaoPlayer  :
	public DaoCxxVirt_Craft_Object
{
	public:
	DaoCxxVirt_Craft_DaoPlayer(){ dao_cdata = 0; }
	void DaoInitWrapper( DaoCdata *d );

	DaoCdata *dao_cdata;



};

class DAO_CRAFT_DLLT DaoCxx_Craft_DaoPlayer :
	public Craft::DaoPlayer, public DaoCxxVirt_Craft_DaoPlayer
{ 

	public:
	DaoCxx_Craft_DaoPlayer( Craft::Context* context ) : Craft::DaoPlayer( context ){}

	~DaoCxx_Craft_DaoPlayer();
	void DaoInitWrapper( DaoVmSpace *vmspace );


};

DAO_CRAFT_DLL DaoCxx_Craft_DaoPlayer* DaoCxx_Craft_DaoPlayer_New( Craft::Context* context );


#ifdef __cplusplus
extern "C"{
#endif

DAO_CRAFT_DLL int DaoCraftEngine_OnLoad( DaoVmSpace *vms, DaoNamespace *ns );


#ifdef __cplusplus
}
#endif

#endif
