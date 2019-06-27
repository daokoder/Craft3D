#include"dao_CraftEngine.h"
static DaoRoutine* Dao_Get_Object_Method( DaoCdata *cd, DaoObject **obj, const char *name )
{
  DaoRoutine *meth;
  if( cd == NULL ) return NULL;
  *obj = DaoCdata_GetObject( cd );
  if( *obj == NULL ) return NULL;
  meth = DaoObject_GetMethod( *obj, name );
  if( meth == NULL ) return NULL;
  if( DaoRoutine_IsWrapper( meth ) ) return NULL; /*do not call C function*/
  return meth;
}

static DaoVmSpace* Dao_Get_Object_VmSpace( DaoObject *obj )
{
  DaoClass *klass = obj != NULL ? DaoObject_GetClass( obj ) : NULL;
  DaoNamespace *ns = klass != NULL ? DaoClass_GetNamespace( klass ) : NULL;
  return ns != NULL ? DaoNamespace_GetVmSpace( ns ) : NULL;
}

static Craft::ClassID DaoPF10069( int *_cs, DaoRoutine *_ro, DaoObject *_ob )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res;
  DaoCdata *_cd;
  Craft::ClassID _GetClassID = NULL;
  if( _ro == NULL ) goto EndCall;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, NULL, 0 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _GetClassID;
}
static Craft::EventHandler* DaoPF1007D( int *_cs, DaoRoutine *_ro, DaoObject *_ob )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res;
  DaoCdata *_cd;
  Craft::EventHandler* _Clone = NULL;
  if( _ro == NULL ) goto EndCall;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, NULL, 0 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if( DaoValue_CastObject(_res) ) _res = (DaoValue*)DaoObject_CastCdataTC( (DaoObject*)_res, dao_Craft_EventHandler_Core );
  if( DaoValue_CastCdataTC( _res, dao_Craft_EventHandler_Core ) ){
    _Clone = (Craft::EventHandler*) DaoValue_TryCastCdataTC( _res, dao_Craft_EventHandler_Core );
  }
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _Clone;
}
static Craft::Geometry* DaoPF101F1( int *_cs, DaoRoutine *_ro, DaoObject *_ob, unsigned int batchIndex, unsigned int level )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  Craft::Geometry* _GetLodGeometry = NULL;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewInteger( _proc, (dao_integer) batchIndex );
  DaoProcess_NewInteger( _proc, (dao_integer) level );
  _dp = DaoProcess_GetLastValues( _proc, 2 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 2 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 2 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if( DaoValue_CastObject(_res) ) _res = (DaoValue*)DaoObject_CastCdataTC( (DaoObject*)_res, dao_Craft_Geometry_Core );
  if( DaoValue_CastCdataTC( _res, dao_Craft_Geometry_Core ) ){
    _GetLodGeometry = (Craft::Geometry*) DaoValue_TryCastCdataTC( _res, dao_Craft_Geometry_Core );
  }
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _GetLodGeometry;
}
static Craft::ScriptComponentFile* DaoPF101E4( int *_cs, DaoRoutine *_ro, DaoObject *_ob )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res;
  DaoCdata *_cd;
  Craft::ScriptComponentFile* _GetComponentFile = NULL;
  if( _ro == NULL ) goto EndCall;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, NULL, 0 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if( DaoValue_CastObject(_res) ) _res = (DaoValue*)DaoObject_CastCdataTC( (DaoObject*)_res, dao_Craft_ScriptComponentFile_Core );
  if( DaoValue_CastCdataTC( _res, dao_Craft_ScriptComponentFile_Core ) ){
    _GetComponentFile = (Craft::ScriptComponentFile*) DaoValue_TryCastCdataTC( _res, dao_Craft_ScriptComponentFile_Core );
  }
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _GetComponentFile;
}
static Craft::StringHash DaoPF1006E( int *_cs, DaoRoutine *_ro, DaoObject *_ob )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res;
  DaoCdata *_cd;
  Craft::StringHash* _GetStringHash = NULL;
  if( _ro == NULL ) goto EndCall;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, NULL, 0 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if( DaoValue_CastObject(_res) ) _res = (DaoValue*)DaoObject_CastCdataTC( (DaoObject*)_res, dao_Craft_StringHash_Core );
  if( DaoValue_CastCdataTC( _res, dao_Craft_StringHash_Core ) ){
    _GetStringHash = (Craft::StringHash*) DaoValue_TryCastCdataTC( _res, dao_Craft_StringHash_Core );
  }
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return *_GetStringHash;
}
static Craft::UpdateGeometryType DaoPF10270( int *_cs, DaoRoutine *_ro, DaoObject *_ob )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res;
  DaoCdata *_cd;
  Craft::UpdateGeometryType _GetUpdateGeometryType = (Craft::UpdateGeometryType) 0;
  if( _ro == NULL ) goto EndCall;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, NULL, 0 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _GetUpdateGeometryType=(Craft::UpdateGeometryType)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _GetUpdateGeometryType;
}
static bool DaoPF10085( int *_cs, DaoRoutine *_ro, DaoObject *_ob )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res;
  DaoCdata *_cd;
  bool _IsSupported = (bool) 0;
  if( _ro == NULL ) goto EndCall;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, NULL, 0 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _IsSupported=(bool)DaoValue_TryGetBoolean(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _IsSupported;
}
static bool DaoPF10020( int *_cs, DaoRoutine *_ro, DaoObject *_ob )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res;
  DaoCdata *_cd;
  bool _IsNaN = (bool) 0;
  if( _ro == NULL ) goto EndCall;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, NULL, 0 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _IsNaN=(bool)DaoValue_TryGetBoolean(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _IsNaN;
}
static bool DaoPF1011F( int *_cs, DaoRoutine *_ro, DaoObject *_ob, Craft::Deserializer& source )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  bool _Load = (bool) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewCdataTC( _proc, dao_Craft_Deserializer_Core, (void*) &source, 0 );
  _dp = DaoProcess_GetLastValues( _proc, 1 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 1 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _Load=(bool)DaoValue_TryGetBoolean(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _Load;
}
static bool DaoPF10120( int *_cs, DaoRoutine *_ro, DaoObject *_ob, Craft::Serializer& dest )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  bool _Save = (bool) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewCdataTC( _proc, dao_Craft_Serializer_Core, (void*) &dest, 0 );
  _dp = DaoProcess_GetLastValues( _proc, 1 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 1 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _Save=(bool)DaoValue_TryGetBoolean(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _Save;
}
static bool DaoPF1020D( int *_cs, DaoRoutine *_ro, DaoObject *_ob, Craft::XMLElement& dest )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  bool _SaveXML = (bool) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewCdataTC( _proc, dao_Craft_XMLElement_Core, (void*) &dest, 0 );
  _dp = DaoProcess_GetLastValues( _proc, 1 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 1 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _SaveXML=(bool)DaoValue_TryGetBoolean(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _SaveXML;
}
static bool DaoPF100D1( int *_cs, DaoRoutine *_ro, DaoObject *_ob, const Craft::XMLElement& element )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  bool _RemoveChild = (bool) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewCdataTC( _proc, dao_Craft_XMLElement_Core, (void*) &element, 0 );
  _dp = DaoProcess_GetLastValues( _proc, 1 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 1 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _RemoveChild=(bool)DaoValue_TryGetBoolean(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _RemoveChild;
}
static bool DaoPF102D7( int *_cs, DaoRoutine *_ro, DaoObject *_ob, int key, int sp, int mod )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  bool _OnKeyDown = (bool) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewInteger( _proc, (dao_integer) key );
  DaoProcess_NewInteger( _proc, (dao_integer) sp );
  DaoProcess_NewInteger( _proc, (dao_integer) mod );
  _dp = DaoProcess_GetLastValues( _proc, 3 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 3 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 3 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _OnKeyDown=(bool)DaoValue_TryGetBoolean(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _OnKeyDown;
}
static bool DaoPF10014( int *_cs, DaoRoutine *_ro, DaoObject *_ob, unsigned int value )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  bool _IsPowerOfTwo = (bool) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewInteger( _proc, (dao_integer) value );
  _dp = DaoProcess_GetLastValues( _proc, 1 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 1 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _IsPowerOfTwo=(bool)DaoValue_TryGetBoolean(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _IsPowerOfTwo;
}
static double DaoPF100A9( int *_cs, DaoRoutine *_ro, DaoObject *_ob )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res;
  DaoCdata *_cd;
  double _ReadDouble = (double) 0;
  if( _ro == NULL ) goto EndCall;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, NULL, 0 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastFloat(_res)) _ReadDouble=(double)DaoValue_TryGetFloat(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _ReadDouble;
}
static int DaoPF1005F( int *_cs, DaoRoutine *_ro, DaoObject *_ob )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res;
  DaoCdata *_cd;
  int _Width = (int) 0;
  if( _ro == NULL ) goto EndCall;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, NULL, 0 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _Width=(int)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _Width;
}
static unsigned int DaoPF100A3( int *_cs, DaoRoutine *_ro, DaoObject *_ob )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res;
  DaoCdata *_cd;
  unsigned int _GetChecksum = (unsigned int) 0;
  if( _ro == NULL ) goto EndCall;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, NULL, 0 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _GetChecksum=(unsigned int)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _GetChecksum;
}
static unsigned int DaoPF10088( int *_cs, DaoRoutine *_ro, DaoObject *_ob, const void* data, unsigned int size )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  unsigned int _Write = (unsigned int) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewCdata( _proc, NULL, (void*) data, 0 );
  DaoProcess_NewInteger( _proc, (dao_integer) size );
  _dp = DaoProcess_GetLastValues( _proc, 2 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 2 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 2 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _Write=(unsigned int)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _Write;
}
static unsigned int DaoPF102A8( int *_cs, DaoRoutine *_ro, DaoObject *_ob, signed char* dest, unsigned int numBytes )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  unsigned int _GetData = (unsigned int) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewString( _proc, (char*) dest, strlen( (char*)dest ) );
  DaoProcess_NewInteger( _proc, (dao_integer) numBytes );
  _dp = DaoProcess_GetLastValues( _proc, 2 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 2 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 2 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _GetData=(unsigned int)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _GetData;
}
static unsigned int DaoPF10015( int *_cs, DaoRoutine *_ro, DaoObject *_ob, unsigned int value )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  unsigned int _NextPowerOfTwo = (unsigned int) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewInteger( _proc, (dao_integer) value );
  _dp = DaoProcess_GetLastValues( _proc, 1 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 1 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _NextPowerOfTwo=(unsigned int)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _NextPowerOfTwo;
}
static unsigned int DaoPF100A2( int *_cs, DaoRoutine *_ro, DaoObject *_ob, void* dest, unsigned int size )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  unsigned int _Read = (unsigned int) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewCdata( _proc, NULL, (void*) dest, 0 );
  DaoProcess_NewInteger( _proc, (dao_integer) size );
  _dp = DaoProcess_GetLastValues( _proc, 2 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 2 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 2 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) _Read=(unsigned int)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
  return _Read;
}
static void DaoPF1001A( int *_cs, DaoRoutine *_ro, DaoObject *_ob )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  if( _ro == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  *_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
static void DaoPF1013F( int *_cs, DaoRoutine *_ro, DaoObject *_ob, Craft::Object* sender, Craft::StringHash eventType, Craft::VariantMap& eventData )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue **_dp;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewCdataTC( _proc, dao_Craft_Object_Core, (void*) sender, 0 );
  DaoProcess_NewCdataTC( _proc, dao_Craft_StringHash_Core, (void*) &eventType, 0 );
  DaoProcess_NewCdataTC( _proc, dao_Craft_VariantMap_Core, (void*) &eventData, 0 );
  _dp = DaoProcess_GetLastValues( _proc, 3 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 3 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  *_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 3 );
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
static void DaoPF10145( int *_cs, DaoRoutine *_ro, DaoObject *_ob, Craft::String& text )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue **_dp;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewString( _proc, (char*) text.CString(), text.Length() );
  _dp = DaoProcess_GetLastValues( _proc, 1 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 1 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  *_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 );
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
static void DaoPF102D4( int *_cs, DaoRoutine *_ro, DaoObject *_ob, Craft::UIKit::UIWidget* child )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue **_dp;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewCdataTC( _proc, dao_Craft_UIKit_UIWidget_Core, (void*) child, 0 );
  _dp = DaoProcess_GetLastValues( _proc, 1 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 1 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  *_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 );
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
static void DaoPF1007C( int *_cs, DaoRoutine *_ro, DaoObject *_ob, Craft::VariantMap& eventData )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue **_dp;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewCdataTC( _proc, dao_Craft_VariantMap_Core, (void*) &eventData, 0 );
  _dp = DaoProcess_GetLastValues( _proc, 1 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 1 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  *_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 );
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
static void DaoPF1020A( int *_cs, DaoRoutine *_ro, DaoObject *_ob, const Craft::FrameInfo& frame )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue **_dp;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewCdataTC( _proc, dao_Craft_FrameInfo_Core, (void*) &frame, 0 );
  _dp = DaoProcess_GetLastValues( _proc, 1 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 1 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  *_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 );
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
static void DaoPF1010A( int *_cs, DaoRoutine *_ro, DaoObject *_ob, const Craft::String& name )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue **_dp;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewString( _proc, (char*) name.CString(), name.Length() );
  _dp = DaoProcess_GetLastValues( _proc, 1 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 1 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  *_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 );
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
static void DaoPF10002( int *_cs, DaoRoutine *_ro, DaoObject *_ob, float scale )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue **_dp;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewFloat(  _proc,(dao_float) scale );
  _dp = DaoProcess_GetLastValues( _proc, 1 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 1 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  *_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 );
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
static void DaoPF10087( int *_cs, DaoRoutine *_ro, DaoObject *_ob, int priority )
{
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _ob );
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoValue **_dp;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_NewInteger( _proc, (dao_integer) priority );
  _dp = DaoProcess_GetLastValues( _proc, 1 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 1 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  *_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 );
EndCall:
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
Craft::StringVector* Dao_Craft_StringVector_New()
{
	Craft::StringVector *self = new Craft::StringVector();
	return self;
}
Craft::VariantMap* Dao_Craft_VariantMap_New()
{
	Craft::VariantMap *self = new Craft::VariantMap();
	return self;
}

DaoCxx_Craft_RefCounted* DaoCxx_Craft_RefCounted_New(  )
{
	DaoCxx_Craft_RefCounted *self = new DaoCxx_Craft_RefCounted(  );
	self->DaoInitWrapper( NULL );
	return self;
}
Craft::ClassID DaoCxxVirt_Craft_RefCounted::GetClassID( int &_cs  )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetClassID" );
  Craft::ClassID _GetClassID = NULL;
  if( _ro == NULL || _obj == NULL ) return _GetClassID;
  return (Craft::ClassID)DaoPF10069( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_RefCounted::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
}
DaoCxx_Craft_RefCounted::~DaoCxx_Craft_RefCounted()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_RefCounted::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_RefCounted_Core, (Craft::RefCounted*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_RefCounted::DaoInitWrapper( dao_cdata );
}
Craft::ClassID DaoCxx_Craft_RefCounted::GetClassID(  )const
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_RefCounted*)this)->DaoCxxVirt_Craft_RefCounted::GetClassID( _cs  );
}

DaoCxx_Craft_Context* DaoCxx_Craft_Context_New(  )
{
	DaoCxx_Craft_Context *self = new DaoCxx_Craft_Context(  );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Context::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_RefCounted::DaoInitWrapper( d );

}
DaoCxx_Craft_Context::~DaoCxx_Craft_Context()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Context::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Context_Core, (Craft::Context*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Context::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_EventHandler* DaoCxx_Craft_EventHandler_New( Craft::Object* receiver )
{
	DaoCxx_Craft_EventHandler *self = new DaoCxx_Craft_EventHandler( receiver );
	self->DaoInitWrapper( NULL );
	return self;
}

DaoCxx_Craft_EventHandler* DaoCxx_Craft_EventHandler_New( Craft::Object* receiver, void* userData )
{
	DaoCxx_Craft_EventHandler *self = new DaoCxx_Craft_EventHandler( receiver, userData );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_EventHandler::Invoke( int &_cs, Craft::VariantMap& eventData )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Invoke" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF1007C( & _cs, _ro, _obj, eventData );
}
Craft::EventHandler* DaoCxxVirt_Craft_EventHandler::Clone( int &_cs  )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Clone" );
  Craft::EventHandler* _Clone = NULL;
  if( _ro == NULL || _obj == NULL ) return _Clone;
  return (Craft::EventHandler*)DaoPF1007D( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_EventHandler::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
}
DaoCxx_Craft_EventHandler::~DaoCxx_Craft_EventHandler()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_EventHandler::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_EventHandler_Core, (Craft::EventHandler*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_EventHandler::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_EventHandler::Invoke( Craft::VariantMap& eventData )
{
  int _cs = 1;
  ((DaoCxxVirt_Craft_EventHandler*)this)->DaoCxxVirt_Craft_EventHandler::Invoke( _cs, eventData );
}
Craft::EventHandler* DaoCxx_Craft_EventHandler::Clone(  )const
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_EventHandler*)this)->DaoCxxVirt_Craft_EventHandler::Clone( _cs  );
}

DaoCxx_Craft_Object* DaoCxx_Craft_Object_New( Craft::Context* context )
{
	DaoCxx_Craft_Object *self = new DaoCxx_Craft_Object( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Object::OnEvent( int &_cs, Craft::Object* sender, Craft::StringHash eventType, Craft::VariantMap& eventData )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnEvent" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF1013F( & _cs, _ro, _obj, sender, eventType, eventData );
}
void DaoCxxVirt_Craft_Object::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_RefCounted::DaoInitWrapper( d );

}
DaoCxx_Craft_Object::~DaoCxx_Craft_Object()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Object::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Object_Core, (Craft::Object*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Object::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_Object::OnEvent( Craft::Object* sender, Craft::StringHash eventType, Craft::VariantMap& eventData )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnEvent" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Object*)this)->DaoCxxVirt_Craft_Object::OnEvent( _cs, sender, eventType, eventData );
    if( _cs == 0 ) return;
  }
  Craft::Object::OnEvent( sender, eventType, eventData );
}
void DaoCxxVirt_Craft_ObjectFactory::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_RefCounted::DaoInitWrapper( d );

}
DaoCxx_Craft_ObjectFactory::~DaoCxx_Craft_ObjectFactory()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_ObjectFactory::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_ObjectFactory_Core, (Craft::ObjectFactory*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_ObjectFactory::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_Time* DaoCxx_Craft_Time_New( Craft::Context* context )
{
	DaoCxx_Craft_Time *self = new DaoCxx_Craft_Time( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Time::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_Time::~DaoCxx_Craft_Time()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Time::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Time_Core, (Craft::Time*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Time::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_Thread* DaoCxx_Craft_Thread_New(  )
{
	DaoCxx_Craft_Thread *self = new DaoCxx_Craft_Thread(  );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Thread::ThreadFunction( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ThreadFunction" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_Thread::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
}
DaoCxx_Craft_Thread::~DaoCxx_Craft_Thread()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Thread::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Thread_Core, (Craft::Thread*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Thread::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_Thread::ThreadFunction(  )
{
  int _cs = 1;
  ((DaoCxxVirt_Craft_Thread*)this)->DaoCxxVirt_Craft_Thread::ThreadFunction( _cs  );
}

DaoCxx_Craft_Serializer* DaoCxx_Craft_Serializer_New(  )
{
	DaoCxx_Craft_Serializer *self = new DaoCxx_Craft_Serializer(  );
	self->DaoInitWrapper( NULL );
	return self;
}
unsigned int DaoCxxVirt_Craft_Serializer::Write( int &_cs, const void* data, unsigned int size )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Write" );
  unsigned int _Write = (unsigned int) 0;
  if( _ro == NULL || _obj == NULL ) return _Write;
  return (unsigned int)DaoPF10088( & _cs, _ro, _obj, data, size );
}
void DaoCxxVirt_Craft_Serializer::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
}
DaoCxx_Craft_Serializer::~DaoCxx_Craft_Serializer()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Serializer::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Serializer_Core, (Craft::Serializer*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Serializer::DaoInitWrapper( dao_cdata );
}
unsigned int DaoCxx_Craft_Serializer::Write( const void* data, unsigned int size )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_Serializer*)this)->DaoCxxVirt_Craft_Serializer::Write( _cs, data, size );
}

DaoCxx_Craft_Deserializer* DaoCxx_Craft_Deserializer_New(  )
{
	DaoCxx_Craft_Deserializer *self = new DaoCxx_Craft_Deserializer(  );
	self->DaoInitWrapper( NULL );
	return self;
}

DaoCxx_Craft_Deserializer* DaoCxx_Craft_Deserializer_New( unsigned int size )
{
	DaoCxx_Craft_Deserializer *self = new DaoCxx_Craft_Deserializer( size );
	self->DaoInitWrapper( NULL );
	return self;
}
unsigned int DaoCxxVirt_Craft_Deserializer::Read( int &_cs, void* dest, unsigned int size )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Read" );
  unsigned int _Read = (unsigned int) 0;
  if( _ro == NULL || _obj == NULL ) return _Read;
  return (unsigned int)DaoPF100A2( & _cs, _ro, _obj, dest, size );
}
unsigned int DaoCxxVirt_Craft_Deserializer::Seek( int &_cs, unsigned int position )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Seek" );
  unsigned int _Seek = (unsigned int) 0;
  if( _ro == NULL || _obj == NULL ) return _Seek;
  return (unsigned int)DaoPF10015( & _cs, _ro, _obj, position );
}
unsigned int DaoCxxVirt_Craft_Deserializer::GetChecksum( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetChecksum" );
  unsigned int _GetChecksum = (unsigned int) 0;
  if( _ro == NULL || _obj == NULL ) return _GetChecksum;
  return (unsigned int)DaoPF100A3( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_Deserializer::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
}
DaoCxx_Craft_Deserializer::~DaoCxx_Craft_Deserializer()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Deserializer::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Deserializer_Core, (Craft::Deserializer*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Deserializer::DaoInitWrapper( dao_cdata );
}
unsigned int DaoCxx_Craft_Deserializer::Read( void* dest, unsigned int size )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_Deserializer*)this)->DaoCxxVirt_Craft_Deserializer::Read( _cs, dest, size );
}
unsigned int DaoCxx_Craft_Deserializer::Seek( unsigned int position )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_Deserializer*)this)->DaoCxxVirt_Craft_Deserializer::Seek( _cs, position );
}
unsigned int DaoCxx_Craft_Deserializer::GetChecksum(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetChecksum" );
  if( _ro && _obj ){
    unsigned int _GetChecksum = ((DaoCxxVirt_Craft_Deserializer*)this)->DaoCxxVirt_Craft_Deserializer::GetChecksum( _cs  );
    if( _cs == 0 ) return _GetChecksum;
  }
  return Craft::Deserializer::GetChecksum(  );
}

DaoCxx_Craft_File* DaoCxx_Craft_File_New( Craft::Context* context )
{
	DaoCxx_Craft_File *self = new DaoCxx_Craft_File( context );
	self->DaoInitWrapper( NULL );
	return self;
}

DaoCxx_Craft_File* DaoCxx_Craft_File_New( Craft::Context* context, const Craft::String& fileName, Craft::FileMode mode )
{
	DaoCxx_Craft_File *self = new DaoCxx_Craft_File( context, fileName, mode );
	self->DaoInitWrapper( NULL );
	return self;
}
unsigned int DaoCxxVirt_Craft_File::Read( int &_cs, void* dest, unsigned int size )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Read" );
  unsigned int _Read = (unsigned int) 0;
  if( _ro == NULL || _obj == NULL ) return _Read;
  return (unsigned int)DaoPF100A2( & _cs, _ro, _obj, dest, size );
}
void DaoCxxVirt_Craft_File::ReadText( int &_cs, Craft::String& text )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ReadText" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF10145( & _cs, _ro, _obj, text );
}
unsigned int DaoCxxVirt_Craft_File::Seek( int &_cs, unsigned int position )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Seek" );
  unsigned int _Seek = (unsigned int) 0;
  if( _ro == NULL || _obj == NULL ) return _Seek;
  return (unsigned int)DaoPF10015( & _cs, _ro, _obj, position );
}
unsigned int DaoCxxVirt_Craft_File::Write( int &_cs, const void* data, unsigned int size )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Write" );
  unsigned int _Write = (unsigned int) 0;
  if( _ro == NULL || _obj == NULL ) return _Write;
  return (unsigned int)DaoPF10088( & _cs, _ro, _obj, data, size );
}
unsigned int DaoCxxVirt_Craft_File::GetChecksum( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetChecksum" );
  unsigned int _GetChecksum = (unsigned int) 0;
  if( _ro == NULL || _obj == NULL ) return _GetChecksum;
  return (unsigned int)DaoPF100A3( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_File::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );
	DaoCxxVirt_Craft_Deserializer::DaoInitWrapper( d );
	DaoCxxVirt_Craft_Serializer::DaoInitWrapper( d );

}
DaoCxx_Craft_File::~DaoCxx_Craft_File()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_File::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_File_Core, (Craft::File*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_File::DaoInitWrapper( dao_cdata );
}
unsigned int DaoCxx_Craft_File::Read( void* dest, unsigned int size )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Read" );
  if( _ro && _obj ){
    unsigned int _Read = ((DaoCxxVirt_Craft_File*)this)->DaoCxxVirt_Craft_File::Read( _cs, dest, size );
    if( _cs == 0 ) return _Read;
  }
  return Craft::File::Read( dest, size );
}
void DaoCxx_Craft_File::ReadText( Craft::String& text )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ReadText" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_File*)this)->DaoCxxVirt_Craft_File::ReadText( _cs, text );
    if( _cs == 0 ) return;
  }
  Craft::File::ReadText( text );
}
unsigned int DaoCxx_Craft_File::Seek( unsigned int position )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Seek" );
  if( _ro && _obj ){
    unsigned int _Seek = ((DaoCxxVirt_Craft_File*)this)->DaoCxxVirt_Craft_File::Seek( _cs, position );
    if( _cs == 0 ) return _Seek;
  }
  return Craft::File::Seek( position );
}
unsigned int DaoCxx_Craft_File::Write( const void* data, unsigned int size )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Write" );
  if( _ro && _obj ){
    unsigned int _Write = ((DaoCxxVirt_Craft_File*)this)->DaoCxxVirt_Craft_File::Write( _cs, data, size );
    if( _cs == 0 ) return _Write;
  }
  return Craft::File::Write( data, size );
}
unsigned int DaoCxx_Craft_File::GetChecksum(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetChecksum" );
  if( _ro && _obj ){
    unsigned int _GetChecksum = ((DaoCxxVirt_Craft_File*)this)->DaoCxxVirt_Craft_File::GetChecksum( _cs  );
    if( _cs == 0 ) return _GetChecksum;
  }
  return Craft::File::GetChecksum(  );
}

DaoCxx_Craft_FileSystem* DaoCxx_Craft_FileSystem_New( Craft::Context* context )
{
	DaoCxx_Craft_FileSystem *self = new DaoCxx_Craft_FileSystem( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_FileSystem::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_FileSystem::~DaoCxx_Craft_FileSystem()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_FileSystem::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_FileSystem_Core, (Craft::FileSystem*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_FileSystem::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_FileWatcher* DaoCxx_Craft_FileWatcher_New( Craft::Context* context )
{
	DaoCxx_Craft_FileWatcher *self = new DaoCxx_Craft_FileWatcher( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_FileWatcher::ThreadFunction( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ThreadFunction" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_FileWatcher::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );
	DaoCxxVirt_Craft_Thread::DaoInitWrapper( d );

}
DaoCxx_Craft_FileWatcher::~DaoCxx_Craft_FileWatcher()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_FileWatcher::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_FileWatcher_Core, (Craft::FileWatcher*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_FileWatcher::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_FileWatcher::ThreadFunction(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ThreadFunction" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_FileWatcher*)this)->DaoCxxVirt_Craft_FileWatcher::ThreadFunction( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::FileWatcher::ThreadFunction(  );
}

DaoCxx_Craft_PackageFile* DaoCxx_Craft_PackageFile_New( Craft::Context* context )
{
	DaoCxx_Craft_PackageFile *self = new DaoCxx_Craft_PackageFile( context );
	self->DaoInitWrapper( NULL );
	return self;
}

DaoCxx_Craft_PackageFile* DaoCxx_Craft_PackageFile_New( Craft::Context* context, const Craft::String& fileName, unsigned int startOffset )
{
	DaoCxx_Craft_PackageFile *self = new DaoCxx_Craft_PackageFile( context, fileName, startOffset );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_PackageFile::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_PackageFile::~DaoCxx_Craft_PackageFile()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_PackageFile::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_PackageFile_Core, (Craft::PackageFile*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_PackageFile::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_Resource* DaoCxx_Craft_Resource_New( Craft::Context* context )
{
	DaoCxx_Craft_Resource *self = new DaoCxx_Craft_Resource( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_Resource::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_Resource::EndLoad( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "EndLoad" );
  bool _EndLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _EndLoad;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
bool DaoCxxVirt_Craft_Resource::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_Resource::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_Resource::~DaoCxx_Craft_Resource()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Resource::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Resource_Core, (Craft::Resource*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Resource::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_Resource::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_Resource*)this)->DaoCxxVirt_Craft_Resource::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::Resource::BeginLoad( source );
}
bool DaoCxx_Craft_Resource::EndLoad(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "EndLoad" );
  if( _ro && _obj ){
    bool _EndLoad = ((DaoCxxVirt_Craft_Resource*)this)->DaoCxxVirt_Craft_Resource::EndLoad( _cs  );
    if( _cs == 0 ) return _EndLoad;
  }
  return Craft::Resource::EndLoad(  );
}
bool DaoCxx_Craft_Resource::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_Resource*)this)->DaoCxxVirt_Craft_Resource::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::Resource::Save( dest );
}

DaoCxx_Craft_Image* DaoCxx_Craft_Image_New( Craft::Context* context )
{
	DaoCxx_Craft_Image *self = new DaoCxx_Craft_Image( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_Image::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_Image::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_Image::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Resource::DaoInitWrapper( d );

}
DaoCxx_Craft_Image::~DaoCxx_Craft_Image()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Image::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Image_Core, (Craft::Image*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Image::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_Image::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_Image*)this)->DaoCxxVirt_Craft_Image::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::Image::BeginLoad( source );
}
bool DaoCxx_Craft_Image::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_Image*)this)->DaoCxxVirt_Craft_Image::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::Image::Save( dest );
}

DaoCxx_Craft_Localization* DaoCxx_Craft_Localization_New( Craft::Context* context )
{
	DaoCxx_Craft_Localization *self = new DaoCxx_Craft_Localization( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Localization::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_Localization::~DaoCxx_Craft_Localization()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Localization::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Localization_Core, (Craft::Localization*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Localization::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_XMLFile* DaoCxx_Craft_XMLFile_New( Craft::Context* context )
{
	DaoCxx_Craft_XMLFile *self = new DaoCxx_Craft_XMLFile( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_XMLFile::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_XMLFile::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_XMLFile::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Resource::DaoInitWrapper( d );

}
DaoCxx_Craft_XMLFile::~DaoCxx_Craft_XMLFile()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_XMLFile::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_XMLFile_Core, (Craft::XMLFile*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_XMLFile::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_XMLFile::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_XMLFile*)this)->DaoCxxVirt_Craft_XMLFile::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::XMLFile::BeginLoad( source );
}
bool DaoCxx_Craft_XMLFile::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_XMLFile*)this)->DaoCxxVirt_Craft_XMLFile::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::XMLFile::Save( dest );
}

DaoCxx_Craft_Texture* DaoCxx_Craft_Texture_New( Craft::Context* context )
{
	DaoCxx_Craft_Texture *self = new DaoCxx_Craft_Texture( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Texture::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Resource::DaoInitWrapper( d );

}
DaoCxx_Craft_Texture::~DaoCxx_Craft_Texture()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Texture::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Texture_Core, (Craft::Texture*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Texture::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_Material* DaoCxx_Craft_Material_New( Craft::Context* context )
{
	DaoCxx_Craft_Material *self = new DaoCxx_Craft_Material( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_Material::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_Material::EndLoad( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "EndLoad" );
  bool _EndLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _EndLoad;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
bool DaoCxxVirt_Craft_Material::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_Material::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Resource::DaoInitWrapper( d );

}
DaoCxx_Craft_Material::~DaoCxx_Craft_Material()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Material::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Material_Core, (Craft::Material*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Material::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_Material::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_Material*)this)->DaoCxxVirt_Craft_Material::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::Material::BeginLoad( source );
}
bool DaoCxx_Craft_Material::EndLoad(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "EndLoad" );
  if( _ro && _obj ){
    bool _EndLoad = ((DaoCxxVirt_Craft_Material*)this)->DaoCxxVirt_Craft_Material::EndLoad( _cs  );
    if( _cs == 0 ) return _EndLoad;
  }
  return Craft::Material::EndLoad(  );
}
bool DaoCxx_Craft_Material::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_Material*)this)->DaoCxxVirt_Craft_Material::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::Material::Save( dest );
}

DaoCxx_Craft_ResourceCache* DaoCxx_Craft_ResourceCache_New( Craft::Context* context )
{
	DaoCxx_Craft_ResourceCache *self = new DaoCxx_Craft_ResourceCache( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_ResourceCache::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_ResourceCache::~DaoCxx_Craft_ResourceCache()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_ResourceCache::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_ResourceCache_Core, (Craft::ResourceCache*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_ResourceCache::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_Serializable* DaoCxx_Craft_Serializable_New( Craft::Context* context )
{
	DaoCxx_Craft_Serializable *self = new DaoCxx_Craft_Serializable( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_Serializable::Load( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Load" );
  bool _Load = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Load;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_Serializable::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_Serializable::ApplyAttributes( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
bool DaoCxxVirt_Craft_Serializable::SaveDefaultAttributes( int &_cs  )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "SaveDefaultAttributes" );
  bool _SaveDefaultAttributes = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _SaveDefaultAttributes;
  return (bool)DaoPF10020( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_Serializable::MarkNetworkUpdate( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "MarkNetworkUpdate" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_Serializable::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_Serializable::~DaoCxx_Craft_Serializable()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Serializable::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Serializable_Core, (Craft::Serializable*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Serializable::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_Serializable::Load( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Load" );
  if( _ro && _obj ){
    bool _Load = ((DaoCxxVirt_Craft_Serializable*)this)->DaoCxxVirt_Craft_Serializable::Load( _cs, source );
    if( _cs == 0 ) return _Load;
  }
  return Craft::Serializable::Load( source );
}
bool DaoCxx_Craft_Serializable::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_Serializable*)this)->DaoCxxVirt_Craft_Serializable::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::Serializable::Save( dest );
}
void DaoCxx_Craft_Serializable::ApplyAttributes(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Serializable*)this)->DaoCxxVirt_Craft_Serializable::ApplyAttributes( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::Serializable::ApplyAttributes(  );
}
bool DaoCxx_Craft_Serializable::SaveDefaultAttributes(  )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "SaveDefaultAttributes" );
  if( _ro && _obj ){
    bool _SaveDefaultAttributes = ((DaoCxxVirt_Craft_Serializable*)this)->DaoCxxVirt_Craft_Serializable::SaveDefaultAttributes( _cs  );
    if( _cs == 0 ) return _SaveDefaultAttributes;
  }
  return Craft::Serializable::SaveDefaultAttributes(  );
}
void DaoCxx_Craft_Serializable::MarkNetworkUpdate(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "MarkNetworkUpdate" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Serializable*)this)->DaoCxxVirt_Craft_Serializable::MarkNetworkUpdate( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::Serializable::MarkNetworkUpdate(  );
}

DaoCxx_Craft_Animatable* DaoCxx_Craft_Animatable_New( Craft::Context* context )
{
	DaoCxx_Craft_Animatable *self = new DaoCxx_Craft_Animatable( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Animatable::OnAttributeAnimationAdded( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnAttributeAnimationAdded" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_Animatable::OnAttributeAnimationRemoved( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnAttributeAnimationRemoved" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_Animatable::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Serializable::DaoInitWrapper( d );

}
DaoCxx_Craft_Animatable::~DaoCxx_Craft_Animatable()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Animatable::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Animatable_Core, (Craft::Animatable*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Animatable::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_Animatable::OnAttributeAnimationAdded(  )
{
  int _cs = 1;
  ((DaoCxxVirt_Craft_Animatable*)this)->DaoCxxVirt_Craft_Animatable::OnAttributeAnimationAdded( _cs  );
}
void DaoCxx_Craft_Animatable::OnAttributeAnimationRemoved(  )
{
  int _cs = 1;
  ((DaoCxxVirt_Craft_Animatable*)this)->DaoCxxVirt_Craft_Animatable::OnAttributeAnimationRemoved( _cs  );
}

DaoCxx_Craft_Node* DaoCxx_Craft_Node_New( Craft::Context* context )
{
	DaoCxx_Craft_Node *self = new DaoCxx_Craft_Node( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_Node::Load( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Load" );
  bool _Load = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Load;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_Node::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_Node::ApplyAttributes( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
bool DaoCxxVirt_Craft_Node::SaveDefaultAttributes( int &_cs  )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "SaveDefaultAttributes" );
  bool _SaveDefaultAttributes = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _SaveDefaultAttributes;
  return (bool)DaoPF10020( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_Node::MarkNetworkUpdate( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "MarkNetworkUpdate" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_Node::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Animatable::DaoInitWrapper( d );

}
DaoCxx_Craft_Node::~DaoCxx_Craft_Node()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Node::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Node_Core, (Craft::Node*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Node::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_Node::Load( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Load" );
  if( _ro && _obj ){
    bool _Load = ((DaoCxxVirt_Craft_Node*)this)->DaoCxxVirt_Craft_Node::Load( _cs, source );
    if( _cs == 0 ) return _Load;
  }
  return Craft::Node::Load( source );
}
bool DaoCxx_Craft_Node::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_Node*)this)->DaoCxxVirt_Craft_Node::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::Node::Save( dest );
}
void DaoCxx_Craft_Node::ApplyAttributes(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Node*)this)->DaoCxxVirt_Craft_Node::ApplyAttributes( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::Node::ApplyAttributes(  );
}
bool DaoCxx_Craft_Node::SaveDefaultAttributes(  )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "SaveDefaultAttributes" );
  if( _ro && _obj ){
    bool _SaveDefaultAttributes = ((DaoCxxVirt_Craft_Node*)this)->DaoCxxVirt_Craft_Node::SaveDefaultAttributes( _cs  );
    if( _cs == 0 ) return _SaveDefaultAttributes;
  }
  return Craft::Node::SaveDefaultAttributes(  );
}
void DaoCxx_Craft_Node::MarkNetworkUpdate(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "MarkNetworkUpdate" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Node*)this)->DaoCxxVirt_Craft_Node::MarkNetworkUpdate( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::Node::MarkNetworkUpdate(  );
}

DaoCxx_Craft_Scene* DaoCxx_Craft_Scene_New( Craft::Context* context )
{
	DaoCxx_Craft_Scene *self = new DaoCxx_Craft_Scene( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_Scene::Load( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Load" );
  bool _Load = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Load;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_Scene::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_Scene::MarkNetworkUpdate( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "MarkNetworkUpdate" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_Scene::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Node::DaoInitWrapper( d );

}
DaoCxx_Craft_Scene::~DaoCxx_Craft_Scene()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Scene::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Scene_Core, (Craft::Scene*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Scene::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_Scene::Load( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Load" );
  if( _ro && _obj ){
    bool _Load = ((DaoCxxVirt_Craft_Scene*)this)->DaoCxxVirt_Craft_Scene::Load( _cs, source );
    if( _cs == 0 ) return _Load;
  }
  return Craft::Scene::Load( source );
}
bool DaoCxx_Craft_Scene::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_Scene*)this)->DaoCxxVirt_Craft_Scene::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::Scene::Save( dest );
}
void DaoCxx_Craft_Scene::MarkNetworkUpdate(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "MarkNetworkUpdate" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Scene*)this)->DaoCxxVirt_Craft_Scene::MarkNetworkUpdate( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::Scene::MarkNetworkUpdate(  );
}

DaoCxx_Craft_ValueAnimation* DaoCxx_Craft_ValueAnimation_New( Craft::Context* context )
{
	DaoCxx_Craft_ValueAnimation *self = new DaoCxx_Craft_ValueAnimation( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_ValueAnimation::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_ValueAnimation::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_ValueAnimation::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Resource::DaoInitWrapper( d );

}
DaoCxx_Craft_ValueAnimation::~DaoCxx_Craft_ValueAnimation()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_ValueAnimation::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_ValueAnimation_Core, (Craft::ValueAnimation*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_ValueAnimation::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_ValueAnimation::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_ValueAnimation*)this)->DaoCxxVirt_Craft_ValueAnimation::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::ValueAnimation::BeginLoad( source );
}
bool DaoCxx_Craft_ValueAnimation::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_ValueAnimation*)this)->DaoCxxVirt_Craft_ValueAnimation::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::ValueAnimation::Save( dest );
}

DaoCxx_Craft_ObjectAnimation* DaoCxx_Craft_ObjectAnimation_New( Craft::Context* context )
{
	DaoCxx_Craft_ObjectAnimation *self = new DaoCxx_Craft_ObjectAnimation( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_ObjectAnimation::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_ObjectAnimation::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_ObjectAnimation::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Resource::DaoInitWrapper( d );

}
DaoCxx_Craft_ObjectAnimation::~DaoCxx_Craft_ObjectAnimation()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_ObjectAnimation::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_ObjectAnimation_Core, (Craft::ObjectAnimation*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_ObjectAnimation::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_ObjectAnimation::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_ObjectAnimation*)this)->DaoCxxVirt_Craft_ObjectAnimation::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::ObjectAnimation::BeginLoad( source );
}
bool DaoCxx_Craft_ObjectAnimation::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_ObjectAnimation*)this)->DaoCxxVirt_Craft_ObjectAnimation::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::ObjectAnimation::Save( dest );
}

DaoCxx_Craft_Component* DaoCxx_Craft_Component_New( Craft::Context* context )
{
	DaoCxx_Craft_Component *self = new DaoCxx_Craft_Component( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Component::OnSetEnabled( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
bool DaoCxxVirt_Craft_Component::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_Component::MarkNetworkUpdate( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "MarkNetworkUpdate" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_Component::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Animatable::DaoInitWrapper( d );

}
DaoCxx_Craft_Component::~DaoCxx_Craft_Component()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Component::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Component_Core, (Craft::Component*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Component::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_Component::OnSetEnabled(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Component*)this)->DaoCxxVirt_Craft_Component::OnSetEnabled( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::Component::OnSetEnabled(  );
}
bool DaoCxx_Craft_Component::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_Component*)this)->DaoCxxVirt_Craft_Component::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::Component::Save( dest );
}
void DaoCxx_Craft_Component::MarkNetworkUpdate(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "MarkNetworkUpdate" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Component*)this)->DaoCxxVirt_Craft_Component::MarkNetworkUpdate( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::Component::MarkNetworkUpdate(  );
}

DaoCxx_Craft_Camera* DaoCxx_Craft_Camera_New( Craft::Context* context )
{
	DaoCxx_Craft_Camera *self = new DaoCxx_Craft_Camera( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Camera::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Component::DaoInitWrapper( d );

}
DaoCxx_Craft_Camera::~DaoCxx_Craft_Camera()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Camera::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Camera_Core, (Craft::Camera*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Camera::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_ScriptComponent* DaoCxx_Craft_ScriptComponent_New( Craft::Context* context )
{
	DaoCxx_Craft_ScriptComponent *self = new DaoCxx_Craft_ScriptComponent( context );
	self->DaoInitWrapper( NULL );
	return self;
}
Craft::ScriptComponentFile* DaoCxxVirt_Craft_ScriptComponent::GetComponentFile( int &_cs  )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetComponentFile" );
  Craft::ScriptComponentFile* _GetComponentFile = NULL;
  if( _ro == NULL || _obj == NULL ) return _GetComponentFile;
  return (Craft::ScriptComponentFile*)DaoPF101E4( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_ScriptComponent::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Component::DaoInitWrapper( d );

}
DaoCxx_Craft_ScriptComponent::~DaoCxx_Craft_ScriptComponent()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_ScriptComponent::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_ScriptComponent_Core, (Craft::ScriptComponent*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_ScriptComponent::DaoInitWrapper( dao_cdata );
}
Craft::ScriptComponentFile* DaoCxx_Craft_ScriptComponent::GetComponentFile(  )const
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_ScriptComponent*)this)->DaoCxxVirt_Craft_ScriptComponent::GetComponentFile( _cs  );
}

DaoCxx_Craft_DaoComponent* DaoCxx_Craft_DaoComponent_New( Craft::Context* context )
{
	DaoCxx_Craft_DaoComponent *self = new DaoCxx_Craft_DaoComponent( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_DaoComponent::Load( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Load" );
  bool _Load = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Load;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
void DaoCxxVirt_Craft_DaoComponent::ApplyAttributes( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_DaoComponent::OnSetEnabled( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_DaoComponent::Start( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Start" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_DaoComponent::DelayedStart( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "DelayedStart" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_DaoComponent::Stop( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Stop" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_DaoComponent::Update( int &_cs, float timeStep )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Update" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF10002( & _cs, _ro, _obj, timeStep );
}
void DaoCxxVirt_Craft_DaoComponent::PostUpdate( int &_cs, float timeStep )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "PostUpdate" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF10002( & _cs, _ro, _obj, timeStep );
}
void DaoCxxVirt_Craft_DaoComponent::FixedUpdate( int &_cs, float timeStep )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "FixedUpdate" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF10002( & _cs, _ro, _obj, timeStep );
}
void DaoCxxVirt_Craft_DaoComponent::FixedPostUpdate( int &_cs, float timeStep )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "FixedPostUpdate" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF10002( & _cs, _ro, _obj, timeStep );
}
void DaoCxxVirt_Craft_DaoComponent::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_ScriptComponent::DaoInitWrapper( d );

}
DaoCxx_Craft_DaoComponent::~DaoCxx_Craft_DaoComponent()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_DaoComponent::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_DaoComponent_Core, (Craft::DaoComponent*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_DaoComponent::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_DaoComponent::Load( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Load" );
  if( _ro && _obj ){
    bool _Load = ((DaoCxxVirt_Craft_DaoComponent*)this)->DaoCxxVirt_Craft_DaoComponent::Load( _cs, source );
    if( _cs == 0 ) return _Load;
  }
  return Craft::DaoComponent::Load( source );
}
void DaoCxx_Craft_DaoComponent::ApplyAttributes(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_DaoComponent*)this)->DaoCxxVirt_Craft_DaoComponent::ApplyAttributes( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::DaoComponent::ApplyAttributes(  );
}
void DaoCxx_Craft_DaoComponent::OnSetEnabled(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_DaoComponent*)this)->DaoCxxVirt_Craft_DaoComponent::OnSetEnabled( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::DaoComponent::OnSetEnabled(  );
}
void DaoCxx_Craft_DaoComponent::Start(  )
{
  int _cs = 1;
  ((DaoCxxVirt_Craft_DaoComponent*)this)->DaoCxxVirt_Craft_DaoComponent::Start( _cs  );
}
void DaoCxx_Craft_DaoComponent::DelayedStart(  )
{
  int _cs = 1;
  ((DaoCxxVirt_Craft_DaoComponent*)this)->DaoCxxVirt_Craft_DaoComponent::DelayedStart( _cs  );
}
void DaoCxx_Craft_DaoComponent::Stop(  )
{
  int _cs = 1;
  ((DaoCxxVirt_Craft_DaoComponent*)this)->DaoCxxVirt_Craft_DaoComponent::Stop( _cs  );
}
void DaoCxx_Craft_DaoComponent::Update( float timeStep )
{
  int _cs = 1;
  ((DaoCxxVirt_Craft_DaoComponent*)this)->DaoCxxVirt_Craft_DaoComponent::Update( _cs, timeStep );
}
void DaoCxx_Craft_DaoComponent::PostUpdate( float timeStep )
{
  int _cs = 1;
  ((DaoCxxVirt_Craft_DaoComponent*)this)->DaoCxxVirt_Craft_DaoComponent::PostUpdate( _cs, timeStep );
}
void DaoCxx_Craft_DaoComponent::FixedUpdate( float timeStep )
{
  int _cs = 1;
  ((DaoCxxVirt_Craft_DaoComponent*)this)->DaoCxxVirt_Craft_DaoComponent::FixedUpdate( _cs, timeStep );
}
void DaoCxx_Craft_DaoComponent::FixedPostUpdate( float timeStep )
{
  int _cs = 1;
  ((DaoCxxVirt_Craft_DaoComponent*)this)->DaoCxxVirt_Craft_DaoComponent::FixedPostUpdate( _cs, timeStep );
}

DaoCxx_Craft_AnimationController* DaoCxx_Craft_AnimationController_New( Craft::Context* context )
{
	DaoCxx_Craft_AnimationController *self = new DaoCxx_Craft_AnimationController( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_AnimationController::OnSetEnabled( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_AnimationController::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Component::DaoInitWrapper( d );

}
DaoCxx_Craft_AnimationController::~DaoCxx_Craft_AnimationController()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_AnimationController::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_AnimationController_Core, (Craft::AnimationController*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_AnimationController::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_AnimationController::OnSetEnabled(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_AnimationController*)this)->DaoCxxVirt_Craft_AnimationController::OnSetEnabled( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::AnimationController::OnSetEnabled(  );
}

DaoCxx_Craft_Drawable* DaoCxx_Craft_Drawable_New( Craft::Context* context, unsigned char drawableFlags )
{
	DaoCxx_Craft_Drawable *self = new DaoCxx_Craft_Drawable( context, drawableFlags );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Drawable::OnSetEnabled( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
Craft::Geometry* DaoCxxVirt_Craft_Drawable::GetLodGeometry( int &_cs, unsigned int batchIndex, unsigned int level )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetLodGeometry" );
  Craft::Geometry* _GetLodGeometry = NULL;
  if( _ro == NULL || _obj == NULL ) return _GetLodGeometry;
  return (Craft::Geometry*)DaoPF101F1( & _cs, _ro, _obj, batchIndex, level );
}
void DaoCxxVirt_Craft_Drawable::OnWorldBoundingBoxUpdate( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnWorldBoundingBoxUpdate" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_Drawable::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Component::DaoInitWrapper( d );

}
DaoCxx_Craft_Drawable::~DaoCxx_Craft_Drawable()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Drawable::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Drawable_Core, (Craft::Drawable*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Drawable::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_Drawable::OnSetEnabled(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Drawable*)this)->DaoCxxVirt_Craft_Drawable::OnSetEnabled( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::Drawable::OnSetEnabled(  );
}
Craft::Geometry* DaoCxx_Craft_Drawable::GetLodGeometry( unsigned int batchIndex, unsigned int level )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetLodGeometry" );
  if( _ro && _obj ){
    Craft::Geometry* _GetLodGeometry = ((DaoCxxVirt_Craft_Drawable*)this)->DaoCxxVirt_Craft_Drawable::GetLodGeometry( _cs, batchIndex, level );
    if( _cs == 0 ) return _GetLodGeometry;
  }
  return Craft::Drawable::GetLodGeometry( batchIndex, level );
}
void DaoCxx_Craft_Drawable::OnWorldBoundingBoxUpdate(  )
{
  int _cs = 1;
  ((DaoCxxVirt_Craft_Drawable*)this)->DaoCxxVirt_Craft_Drawable::OnWorldBoundingBoxUpdate( _cs  );
}

DaoCxx_Craft_CustomGeometry* DaoCxx_Craft_CustomGeometry_New( Craft::Context* context )
{
	DaoCxx_Craft_CustomGeometry *self = new DaoCxx_Craft_CustomGeometry( context );
	self->DaoInitWrapper( NULL );
	return self;
}
Craft::Geometry* DaoCxxVirt_Craft_CustomGeometry::GetLodGeometry( int &_cs, unsigned int batchIndex, unsigned int level )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetLodGeometry" );
  Craft::Geometry* _GetLodGeometry = NULL;
  if( _ro == NULL || _obj == NULL ) return _GetLodGeometry;
  return (Craft::Geometry*)DaoPF101F1( & _cs, _ro, _obj, batchIndex, level );
}
void DaoCxxVirt_Craft_CustomGeometry::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Drawable::DaoInitWrapper( d );

}
DaoCxx_Craft_CustomGeometry::~DaoCxx_Craft_CustomGeometry()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_CustomGeometry::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_CustomGeometry_Core, (Craft::CustomGeometry*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_CustomGeometry::DaoInitWrapper( dao_cdata );
}
Craft::Geometry* DaoCxx_Craft_CustomGeometry::GetLodGeometry( unsigned int batchIndex, unsigned int level )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetLodGeometry" );
  if( _ro && _obj ){
    Craft::Geometry* _GetLodGeometry = ((DaoCxxVirt_Craft_CustomGeometry*)this)->DaoCxxVirt_Craft_CustomGeometry::GetLodGeometry( _cs, batchIndex, level );
    if( _cs == 0 ) return _GetLodGeometry;
  }
  return Craft::CustomGeometry::GetLodGeometry( batchIndex, level );
}

DaoCxx_Craft_RigidBody* DaoCxx_Craft_RigidBody_New( Craft::Context* context )
{
	DaoCxx_Craft_RigidBody *self = new DaoCxx_Craft_RigidBody( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_RigidBody::ApplyAttributes( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_RigidBody::OnSetEnabled( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_RigidBody::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Component::DaoInitWrapper( d );

}
DaoCxx_Craft_RigidBody::~DaoCxx_Craft_RigidBody()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_RigidBody::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_RigidBody_Core, (Craft::RigidBody*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_RigidBody::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_RigidBody::ApplyAttributes(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_RigidBody*)this)->DaoCxxVirt_Craft_RigidBody::ApplyAttributes( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::RigidBody::ApplyAttributes(  );
}
void DaoCxx_Craft_RigidBody::OnSetEnabled(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_RigidBody*)this)->DaoCxxVirt_Craft_RigidBody::OnSetEnabled( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::RigidBody::OnSetEnabled(  );
}

DaoCxx_Craft_CollisionShape* DaoCxx_Craft_CollisionShape_New( Craft::Context* context )
{
	DaoCxx_Craft_CollisionShape *self = new DaoCxx_Craft_CollisionShape( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_CollisionShape::ApplyAttributes( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_CollisionShape::OnSetEnabled( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_CollisionShape::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Component::DaoInitWrapper( d );

}
DaoCxx_Craft_CollisionShape::~DaoCxx_Craft_CollisionShape()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_CollisionShape::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_CollisionShape_Core, (Craft::CollisionShape*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_CollisionShape::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_CollisionShape::ApplyAttributes(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_CollisionShape*)this)->DaoCxxVirt_Craft_CollisionShape::ApplyAttributes( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::CollisionShape::ApplyAttributes(  );
}
void DaoCxx_Craft_CollisionShape::OnSetEnabled(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_CollisionShape*)this)->DaoCxxVirt_Craft_CollisionShape::OnSetEnabled( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::CollisionShape::OnSetEnabled(  );
}

DaoCxx_Craft_Octree* DaoCxx_Craft_Octree_New( Craft::Context* context )
{
	DaoCxx_Craft_Octree *self = new DaoCxx_Craft_Octree( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Octree::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Component::DaoInitWrapper( d );

}
DaoCxx_Craft_Octree::~DaoCxx_Craft_Octree()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Octree::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Octree_Core, (Craft::Octree*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Octree::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_SplinePath* DaoCxx_Craft_SplinePath_New( Craft::Context* context )
{
	DaoCxx_Craft_SplinePath *self = new DaoCxx_Craft_SplinePath( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_SplinePath::ApplyAttributes( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_SplinePath::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Component::DaoInitWrapper( d );

}
DaoCxx_Craft_SplinePath::~DaoCxx_Craft_SplinePath()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_SplinePath::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_SplinePath_Core, (Craft::SplinePath*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_SplinePath::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_SplinePath::ApplyAttributes(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_SplinePath*)this)->DaoCxxVirt_Craft_SplinePath::ApplyAttributes( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::SplinePath::ApplyAttributes(  );
}

DaoCxx_Craft_UnknownComponent* DaoCxx_Craft_UnknownComponent_New( Craft::Context* context )
{
	DaoCxx_Craft_UnknownComponent *self = new DaoCxx_Craft_UnknownComponent( context );
	self->DaoInitWrapper( NULL );
	return self;
}
Craft::StringHash DaoCxxVirt_Craft_UnknownComponent::GetType( int &_cs  )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetType" );
  Craft::StringHash* _GetType = NULL;
  if( _ro == NULL || _obj == NULL ) return *_GetType;
  return (Craft::StringHash)DaoPF1006E( & _cs, _ro, _obj );
}
bool DaoCxxVirt_Craft_UnknownComponent::Load( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Load" );
  bool _Load = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Load;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_UnknownComponent::LoadXML( int &_cs, const Craft::XMLElement& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "LoadXML" );
  bool _LoadXML = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _LoadXML;
  return (bool)DaoPF100D1( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_UnknownComponent::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
bool DaoCxxVirt_Craft_UnknownComponent::SaveXML( int &_cs, Craft::XMLElement& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "SaveXML" );
  bool _SaveXML = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _SaveXML;
  return (bool)DaoPF1020D( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_UnknownComponent::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Component::DaoInitWrapper( d );

}
DaoCxx_Craft_UnknownComponent::~DaoCxx_Craft_UnknownComponent()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UnknownComponent::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UnknownComponent_Core, (Craft::UnknownComponent*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UnknownComponent::DaoInitWrapper( dao_cdata );
}
Craft::StringHash DaoCxx_Craft_UnknownComponent::GetType(  )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetType" );
  if( _ro && _obj ){
    Craft::StringHash _GetType = ((DaoCxxVirt_Craft_UnknownComponent*)this)->DaoCxxVirt_Craft_UnknownComponent::GetType( _cs  );
    if( _cs == 0 ) return _GetType;
  }
  return Craft::UnknownComponent::GetType(  );
}
bool DaoCxx_Craft_UnknownComponent::Load( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Load" );
  if( _ro && _obj ){
    bool _Load = ((DaoCxxVirt_Craft_UnknownComponent*)this)->DaoCxxVirt_Craft_UnknownComponent::Load( _cs, source );
    if( _cs == 0 ) return _Load;
  }
  return Craft::UnknownComponent::Load( source );
}
bool DaoCxx_Craft_UnknownComponent::LoadXML( const Craft::XMLElement& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "LoadXML" );
  if( _ro && _obj ){
    bool _LoadXML = ((DaoCxxVirt_Craft_UnknownComponent*)this)->DaoCxxVirt_Craft_UnknownComponent::LoadXML( _cs, source );
    if( _cs == 0 ) return _LoadXML;
  }
  return Craft::UnknownComponent::LoadXML( source );
}
bool DaoCxx_Craft_UnknownComponent::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_UnknownComponent*)this)->DaoCxxVirt_Craft_UnknownComponent::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::UnknownComponent::Save( dest );
}
bool DaoCxx_Craft_UnknownComponent::SaveXML( Craft::XMLElement& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "SaveXML" );
  if( _ro && _obj ){
    bool _SaveXML = ((DaoCxxVirt_Craft_UnknownComponent*)this)->DaoCxxVirt_Craft_UnknownComponent::SaveXML( _cs, dest );
    if( _cs == 0 ) return _SaveXML;
  }
  return Craft::UnknownComponent::SaveXML( dest );
}

DaoCxx_Craft_ScriptComponentFile* DaoCxx_Craft_ScriptComponentFile_New( Craft::Context* context )
{
	DaoCxx_Craft_ScriptComponentFile *self = new DaoCxx_Craft_ScriptComponentFile( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_ScriptComponentFile::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Resource::DaoInitWrapper( d );

}
DaoCxx_Craft_ScriptComponentFile::~DaoCxx_Craft_ScriptComponentFile()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_ScriptComponentFile::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_ScriptComponentFile_Core, (Craft::ScriptComponentFile*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_ScriptComponentFile::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_DaoComponentFile* DaoCxx_Craft_DaoComponentFile_New( Craft::Context* context )
{
	DaoCxx_Craft_DaoComponentFile *self = new DaoCxx_Craft_DaoComponentFile( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_DaoComponentFile::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_DaoComponentFile::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_DaoComponentFile::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_ScriptComponentFile::DaoInitWrapper( d );

}
DaoCxx_Craft_DaoComponentFile::~DaoCxx_Craft_DaoComponentFile()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_DaoComponentFile::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_DaoComponentFile_Core, (Craft::DaoComponentFile*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_DaoComponentFile::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_DaoComponentFile::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_DaoComponentFile*)this)->DaoCxxVirt_Craft_DaoComponentFile::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::DaoComponentFile::BeginLoad( source );
}
bool DaoCxx_Craft_DaoComponentFile::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_DaoComponentFile*)this)->DaoCxxVirt_Craft_DaoComponentFile::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::DaoComponentFile::Save( dest );
}

DaoCxx_Craft_Graphics* DaoCxx_Craft_Graphics_New( Craft::Context* context )
{
	DaoCxx_Craft_Graphics *self = new DaoCxx_Craft_Graphics( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Graphics::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_Graphics::~DaoCxx_Craft_Graphics()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Graphics::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Graphics_Core, (Craft::Graphics*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Graphics::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_Light* DaoCxx_Craft_Light_New( Craft::Context* context )
{
	DaoCxx_Craft_Light *self = new DaoCxx_Craft_Light( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Light::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Drawable::DaoInitWrapper( d );

}
DaoCxx_Craft_Light::~DaoCxx_Craft_Light()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Light::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Light_Core, (Craft::Light*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Light::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_Viewport* DaoCxx_Craft_Viewport_New( Craft::Context* context )
{
	DaoCxx_Craft_Viewport *self = new DaoCxx_Craft_Viewport( context );
	self->DaoInitWrapper( NULL );
	return self;
}

DaoCxx_Craft_Viewport* DaoCxx_Craft_Viewport_New( Craft::Context* context, Craft::Scene* scene, Craft::Camera* camera, Craft::RenderPath* renderPath )
{
	DaoCxx_Craft_Viewport *self = new DaoCxx_Craft_Viewport( context, scene, camera, renderPath );
	self->DaoInitWrapper( NULL );
	return self;
}

DaoCxx_Craft_Viewport* DaoCxx_Craft_Viewport_New( Craft::Context* context, Craft::Scene* scene, Craft::Camera* camera, const Craft::IntRect& rect, Craft::RenderPath* renderPath )
{
	DaoCxx_Craft_Viewport *self = new DaoCxx_Craft_Viewport( context, scene, camera, rect, renderPath );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Viewport::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_Viewport::~DaoCxx_Craft_Viewport()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Viewport::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Viewport_Core, (Craft::Viewport*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Viewport::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_Renderer* DaoCxx_Craft_Renderer_New( Craft::Context* context )
{
	DaoCxx_Craft_Renderer *self = new DaoCxx_Craft_Renderer( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Renderer::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_Renderer::~DaoCxx_Craft_Renderer()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Renderer::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Renderer_Core, (Craft::Renderer*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Renderer::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_Pass* DaoCxx_Craft_Pass_New( const Craft::String& passName )
{
	DaoCxx_Craft_Pass *self = new DaoCxx_Craft_Pass( passName );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Pass::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_RefCounted::DaoInitWrapper( d );

}
DaoCxx_Craft_Pass::~DaoCxx_Craft_Pass()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Pass::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Pass_Core, (Craft::Pass*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Pass::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_Technique* DaoCxx_Craft_Technique_New( Craft::Context* context )
{
	DaoCxx_Craft_Technique *self = new DaoCxx_Craft_Technique( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_Technique::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
void DaoCxxVirt_Craft_Technique::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Resource::DaoInitWrapper( d );

}
DaoCxx_Craft_Technique::~DaoCxx_Craft_Technique()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Technique::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Technique_Core, (Craft::Technique*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Technique::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_Technique::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_Technique*)this)->DaoCxxVirt_Craft_Technique::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::Technique::BeginLoad( source );
}

DaoCxx_Craft_Geometry* DaoCxx_Craft_Geometry_New( Craft::Context* context )
{
	DaoCxx_Craft_Geometry *self = new DaoCxx_Craft_Geometry( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Geometry::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_Geometry::~DaoCxx_Craft_Geometry()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Geometry::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Geometry_Core, (Craft::Geometry*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Geometry::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_Texture2D* DaoCxx_Craft_Texture2D_New( Craft::Context* context )
{
	DaoCxx_Craft_Texture2D *self = new DaoCxx_Craft_Texture2D( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_Texture2D::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_Texture2D::EndLoad( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "EndLoad" );
  bool _EndLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _EndLoad;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_Texture2D::Release( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Release" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_Texture2D::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Texture::DaoInitWrapper( d );

}
DaoCxx_Craft_Texture2D::~DaoCxx_Craft_Texture2D()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Texture2D::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Texture2D_Core, (Craft::Texture2D*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Texture2D::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_Texture2D::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_Texture2D*)this)->DaoCxxVirt_Craft_Texture2D::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::Texture2D::BeginLoad( source );
}
bool DaoCxx_Craft_Texture2D::EndLoad(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "EndLoad" );
  if( _ro && _obj ){
    bool _EndLoad = ((DaoCxxVirt_Craft_Texture2D*)this)->DaoCxxVirt_Craft_Texture2D::EndLoad( _cs  );
    if( _cs == 0 ) return _EndLoad;
  }
  return Craft::Texture2D::EndLoad(  );
}
void DaoCxx_Craft_Texture2D::Release(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Release" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Texture2D*)this)->DaoCxxVirt_Craft_Texture2D::Release( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::Texture2D::Release(  );
}

DaoCxx_Craft_TextureCube* DaoCxx_Craft_TextureCube_New( Craft::Context* context )
{
	DaoCxx_Craft_TextureCube *self = new DaoCxx_Craft_TextureCube( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_TextureCube::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_TextureCube::EndLoad( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "EndLoad" );
  bool _EndLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _EndLoad;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_TextureCube::Release( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Release" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_TextureCube::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Texture::DaoInitWrapper( d );

}
DaoCxx_Craft_TextureCube::~DaoCxx_Craft_TextureCube()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_TextureCube::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_TextureCube_Core, (Craft::TextureCube*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_TextureCube::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_TextureCube::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_TextureCube*)this)->DaoCxxVirt_Craft_TextureCube::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::TextureCube::BeginLoad( source );
}
bool DaoCxx_Craft_TextureCube::EndLoad(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "EndLoad" );
  if( _ro && _obj ){
    bool _EndLoad = ((DaoCxxVirt_Craft_TextureCube*)this)->DaoCxxVirt_Craft_TextureCube::EndLoad( _cs  );
    if( _cs == 0 ) return _EndLoad;
  }
  return Craft::TextureCube::EndLoad(  );
}
void DaoCxx_Craft_TextureCube::Release(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Release" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_TextureCube*)this)->DaoCxxVirt_Craft_TextureCube::Release( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::TextureCube::Release(  );
}
Craft::FrameInfo* Dao_Craft_FrameInfo_New()
{
	Craft::FrameInfo *self = new Craft::FrameInfo();
	return self;
}

DaoCxx_Craft_Shader* DaoCxx_Craft_Shader_New( Craft::Context* context )
{
	DaoCxx_Craft_Shader *self = new DaoCxx_Craft_Shader( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_Shader::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_Shader::EndLoad( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "EndLoad" );
  bool _EndLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _EndLoad;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_Shader::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Resource::DaoInitWrapper( d );

}
DaoCxx_Craft_Shader::~DaoCxx_Craft_Shader()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Shader::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Shader_Core, (Craft::Shader*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Shader::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_Shader::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_Shader*)this)->DaoCxxVirt_Craft_Shader::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::Shader::BeginLoad( source );
}
bool DaoCxx_Craft_Shader::EndLoad(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "EndLoad" );
  if( _ro && _obj ){
    bool _EndLoad = ((DaoCxxVirt_Craft_Shader*)this)->DaoCxxVirt_Craft_Shader::EndLoad( _cs  );
    if( _cs == 0 ) return _EndLoad;
  }
  return Craft::Shader::EndLoad(  );
}

DaoCxx_Craft_ShaderVariation* DaoCxx_Craft_ShaderVariation_New( Craft::Shader* owner, Craft::ShaderType type )
{
	DaoCxx_Craft_ShaderVariation *self = new DaoCxx_Craft_ShaderVariation( owner, type );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_ShaderVariation::OnDeviceLost( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnDeviceLost" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_ShaderVariation::Release( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Release" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_ShaderVariation::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
}
DaoCxx_Craft_ShaderVariation::~DaoCxx_Craft_ShaderVariation()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_ShaderVariation::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_ShaderVariation_Core, (Craft::ShaderVariation*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_ShaderVariation::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_ShaderVariation::OnDeviceLost(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnDeviceLost" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_ShaderVariation*)this)->DaoCxxVirt_Craft_ShaderVariation::OnDeviceLost( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::ShaderVariation::OnDeviceLost(  );
}
void DaoCxx_Craft_ShaderVariation::Release(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Release" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_ShaderVariation*)this)->DaoCxxVirt_Craft_ShaderVariation::Release( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::ShaderVariation::Release(  );
}

DaoCxx_Craft_View* DaoCxx_Craft_View_New( Craft::Context* context )
{
	DaoCxx_Craft_View *self = new DaoCxx_Craft_View( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_View::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_View::~DaoCxx_Craft_View()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_View::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_View_Core, (Craft::View*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_View::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_StaticModel* DaoCxx_Craft_StaticModel_New( Craft::Context* context )
{
	DaoCxx_Craft_StaticModel *self = new DaoCxx_Craft_StaticModel( context );
	self->DaoInitWrapper( NULL );
	return self;
}
Craft::Geometry* DaoCxxVirt_Craft_StaticModel::GetLodGeometry( int &_cs, unsigned int batchIndex, unsigned int level )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetLodGeometry" );
  Craft::Geometry* _GetLodGeometry = NULL;
  if( _ro == NULL || _obj == NULL ) return _GetLodGeometry;
  return (Craft::Geometry*)DaoPF101F1( & _cs, _ro, _obj, batchIndex, level );
}
void DaoCxxVirt_Craft_StaticModel::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Drawable::DaoInitWrapper( d );

}
DaoCxx_Craft_StaticModel::~DaoCxx_Craft_StaticModel()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_StaticModel::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_StaticModel_Core, (Craft::StaticModel*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_StaticModel::DaoInitWrapper( dao_cdata );
}
Craft::Geometry* DaoCxx_Craft_StaticModel::GetLodGeometry( unsigned int batchIndex, unsigned int level )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetLodGeometry" );
  if( _ro && _obj ){
    Craft::Geometry* _GetLodGeometry = ((DaoCxxVirt_Craft_StaticModel*)this)->DaoCxxVirt_Craft_StaticModel::GetLodGeometry( _cs, batchIndex, level );
    if( _cs == 0 ) return _GetLodGeometry;
  }
  return Craft::StaticModel::GetLodGeometry( batchIndex, level );
}

DaoCxx_Craft_AnimatedModel* DaoCxx_Craft_AnimatedModel_New( Craft::Context* context )
{
	DaoCxx_Craft_AnimatedModel *self = new DaoCxx_Craft_AnimatedModel( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_AnimatedModel::Load( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Load" );
  bool _Load = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Load;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
void DaoCxxVirt_Craft_AnimatedModel::ApplyAttributes( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_AnimatedModel::Update( int &_cs, const Craft::FrameInfo& frame )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Update" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF1020A( & _cs, _ro, _obj, frame );
}
void DaoCxxVirt_Craft_AnimatedModel::UpdateBatches( int &_cs, const Craft::FrameInfo& frame )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "UpdateBatches" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF1020A( & _cs, _ro, _obj, frame );
}
void DaoCxxVirt_Craft_AnimatedModel::UpdateGeometry( int &_cs, const Craft::FrameInfo& frame )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "UpdateGeometry" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF1020A( & _cs, _ro, _obj, frame );
}
Craft::UpdateGeometryType DaoCxxVirt_Craft_AnimatedModel::GetUpdateGeometryType( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetUpdateGeometryType" );
  Craft::UpdateGeometryType _GetUpdateGeometryType = (Craft::UpdateGeometryType) 0;
  if( _ro == NULL || _obj == NULL ) return _GetUpdateGeometryType;
  return (Craft::UpdateGeometryType)DaoPF10270( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_AnimatedModel::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_StaticModel::DaoInitWrapper( d );

}
DaoCxx_Craft_AnimatedModel::~DaoCxx_Craft_AnimatedModel()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_AnimatedModel::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_AnimatedModel_Core, (Craft::AnimatedModel*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_AnimatedModel::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_AnimatedModel::Load( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Load" );
  if( _ro && _obj ){
    bool _Load = ((DaoCxxVirt_Craft_AnimatedModel*)this)->DaoCxxVirt_Craft_AnimatedModel::Load( _cs, source );
    if( _cs == 0 ) return _Load;
  }
  return Craft::AnimatedModel::Load( source );
}
void DaoCxx_Craft_AnimatedModel::ApplyAttributes(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_AnimatedModel*)this)->DaoCxxVirt_Craft_AnimatedModel::ApplyAttributes( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::AnimatedModel::ApplyAttributes(  );
}
void DaoCxx_Craft_AnimatedModel::Update( const Craft::FrameInfo& frame )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Update" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_AnimatedModel*)this)->DaoCxxVirt_Craft_AnimatedModel::Update( _cs, frame );
    if( _cs == 0 ) return;
  }
  Craft::AnimatedModel::Update( frame );
}
void DaoCxx_Craft_AnimatedModel::UpdateBatches( const Craft::FrameInfo& frame )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "UpdateBatches" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_AnimatedModel*)this)->DaoCxxVirt_Craft_AnimatedModel::UpdateBatches( _cs, frame );
    if( _cs == 0 ) return;
  }
  Craft::AnimatedModel::UpdateBatches( frame );
}
void DaoCxx_Craft_AnimatedModel::UpdateGeometry( const Craft::FrameInfo& frame )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "UpdateGeometry" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_AnimatedModel*)this)->DaoCxxVirt_Craft_AnimatedModel::UpdateGeometry( _cs, frame );
    if( _cs == 0 ) return;
  }
  Craft::AnimatedModel::UpdateGeometry( frame );
}
Craft::UpdateGeometryType DaoCxx_Craft_AnimatedModel::GetUpdateGeometryType(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetUpdateGeometryType" );
  if( _ro && _obj ){
    Craft::UpdateGeometryType _GetUpdateGeometryType = ((DaoCxxVirt_Craft_AnimatedModel*)this)->DaoCxxVirt_Craft_AnimatedModel::GetUpdateGeometryType( _cs  );
    if( _cs == 0 ) return _GetUpdateGeometryType;
  }
  return Craft::AnimatedModel::GetUpdateGeometryType(  );
}

DaoCxx_Craft_Terrain* DaoCxx_Craft_Terrain_New( Craft::Context* context )
{
	DaoCxx_Craft_Terrain *self = new DaoCxx_Craft_Terrain( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Terrain::ApplyAttributes( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_Terrain::OnSetEnabled( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_Terrain::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Component::DaoInitWrapper( d );

}
DaoCxx_Craft_Terrain::~DaoCxx_Craft_Terrain()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Terrain::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Terrain_Core, (Craft::Terrain*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Terrain::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_Terrain::ApplyAttributes(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Terrain*)this)->DaoCxxVirt_Craft_Terrain::ApplyAttributes( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::Terrain::ApplyAttributes(  );
}
void DaoCxx_Craft_Terrain::OnSetEnabled(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Terrain*)this)->DaoCxxVirt_Craft_Terrain::OnSetEnabled( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::Terrain::OnSetEnabled(  );
}

DaoCxx_Craft_Model* DaoCxx_Craft_Model_New( Craft::Context* context )
{
	DaoCxx_Craft_Model *self = new DaoCxx_Craft_Model( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_Model::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_Model::EndLoad( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "EndLoad" );
  bool _EndLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _EndLoad;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
bool DaoCxxVirt_Craft_Model::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_Model::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Resource::DaoInitWrapper( d );

}
DaoCxx_Craft_Model::~DaoCxx_Craft_Model()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Model::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Model_Core, (Craft::Model*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Model::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_Model::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_Model*)this)->DaoCxxVirt_Craft_Model::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::Model::BeginLoad( source );
}
bool DaoCxx_Craft_Model::EndLoad(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "EndLoad" );
  if( _ro && _obj ){
    bool _EndLoad = ((DaoCxxVirt_Craft_Model*)this)->DaoCxxVirt_Craft_Model::EndLoad( _cs  );
    if( _cs == 0 ) return _EndLoad;
  }
  return Craft::Model::EndLoad(  );
}
bool DaoCxx_Craft_Model::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_Model*)this)->DaoCxxVirt_Craft_Model::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::Model::Save( dest );
}
Craft::AnimationTrack* Dao_Craft_AnimationTrack_New()
{
	Craft::AnimationTrack *self = new Craft::AnimationTrack();
	return self;
}

DaoCxx_Craft_Animation* DaoCxx_Craft_Animation_New( Craft::Context* context )
{
	DaoCxx_Craft_Animation *self = new DaoCxx_Craft_Animation( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_Animation::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_Animation::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_Animation::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Resource::DaoInitWrapper( d );

}
DaoCxx_Craft_Animation::~DaoCxx_Craft_Animation()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Animation::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Animation_Core, (Craft::Animation*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Animation::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_Animation::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_Animation*)this)->DaoCxxVirt_Craft_Animation::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::Animation::BeginLoad( source );
}
bool DaoCxx_Craft_Animation::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_Animation*)this)->DaoCxxVirt_Craft_Animation::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::Animation::Save( dest );
}

DaoCxx_Craft_Skybox* DaoCxx_Craft_Skybox_New( Craft::Context* context )
{
	DaoCxx_Craft_Skybox *self = new DaoCxx_Craft_Skybox( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Skybox::UpdateBatches( int &_cs, const Craft::FrameInfo& frame )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "UpdateBatches" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF1020A( & _cs, _ro, _obj, frame );
}
void DaoCxxVirt_Craft_Skybox::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_StaticModel::DaoInitWrapper( d );

}
DaoCxx_Craft_Skybox::~DaoCxx_Craft_Skybox()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Skybox::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Skybox_Core, (Craft::Skybox*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Skybox::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_Skybox::UpdateBatches( const Craft::FrameInfo& frame )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "UpdateBatches" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Skybox*)this)->DaoCxxVirt_Craft_Skybox::UpdateBatches( _cs, frame );
    if( _cs == 0 ) return;
  }
  Craft::Skybox::UpdateBatches( frame );
}

DaoCxx_Craft_StaticModelGroup* DaoCxx_Craft_StaticModelGroup_New( Craft::Context* context )
{
	DaoCxx_Craft_StaticModelGroup *self = new DaoCxx_Craft_StaticModelGroup( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_StaticModelGroup::ApplyAttributes( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_StaticModelGroup::UpdateBatches( int &_cs, const Craft::FrameInfo& frame )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "UpdateBatches" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF1020A( & _cs, _ro, _obj, frame );
}
unsigned int DaoCxxVirt_Craft_StaticModelGroup::GetNumOccluderTriangles( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetNumOccluderTriangles" );
  unsigned int _GetNumOccluderTriangles = (unsigned int) 0;
  if( _ro == NULL || _obj == NULL ) return _GetNumOccluderTriangles;
  return (unsigned int)DaoPF100A3( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_StaticModelGroup::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_StaticModel::DaoInitWrapper( d );

}
DaoCxx_Craft_StaticModelGroup::~DaoCxx_Craft_StaticModelGroup()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_StaticModelGroup::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_StaticModelGroup_Core, (Craft::StaticModelGroup*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_StaticModelGroup::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_StaticModelGroup::ApplyAttributes(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_StaticModelGroup*)this)->DaoCxxVirt_Craft_StaticModelGroup::ApplyAttributes( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::StaticModelGroup::ApplyAttributes(  );
}
void DaoCxx_Craft_StaticModelGroup::UpdateBatches( const Craft::FrameInfo& frame )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "UpdateBatches" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_StaticModelGroup*)this)->DaoCxxVirt_Craft_StaticModelGroup::UpdateBatches( _cs, frame );
    if( _cs == 0 ) return;
  }
  Craft::StaticModelGroup::UpdateBatches( frame );
}
unsigned int DaoCxx_Craft_StaticModelGroup::GetNumOccluderTriangles(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetNumOccluderTriangles" );
  if( _ro && _obj ){
    unsigned int _GetNumOccluderTriangles = ((DaoCxxVirt_Craft_StaticModelGroup*)this)->DaoCxxVirt_Craft_StaticModelGroup::GetNumOccluderTriangles( _cs  );
    if( _cs == 0 ) return _GetNumOccluderTriangles;
  }
  return Craft::StaticModelGroup::GetNumOccluderTriangles(  );
}
Craft::Billboard* Dao_Craft_Billboard_New()
{
	Craft::Billboard *self = new Craft::Billboard();
	return self;
}

DaoCxx_Craft_BillboardSet* DaoCxx_Craft_BillboardSet_New( Craft::Context* context )
{
	DaoCxx_Craft_BillboardSet *self = new DaoCxx_Craft_BillboardSet( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_BillboardSet::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Drawable::DaoInitWrapper( d );

}
DaoCxx_Craft_BillboardSet::~DaoCxx_Craft_BillboardSet()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_BillboardSet::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_BillboardSet_Core, (Craft::BillboardSet*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_BillboardSet::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_ParticleEffect* DaoCxx_Craft_ParticleEffect_New( Craft::Context* context )
{
	DaoCxx_Craft_ParticleEffect *self = new DaoCxx_Craft_ParticleEffect( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_ParticleEffect::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
bool DaoCxxVirt_Craft_ParticleEffect::EndLoad( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "EndLoad" );
  bool _EndLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _EndLoad;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
bool DaoCxxVirt_Craft_ParticleEffect::Save( int &_cs, Craft::Serializer& dest )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  bool _Save = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _Save;
  return (bool)DaoPF10120( & _cs, _ro, _obj, dest );
}
void DaoCxxVirt_Craft_ParticleEffect::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Resource::DaoInitWrapper( d );

}
DaoCxx_Craft_ParticleEffect::~DaoCxx_Craft_ParticleEffect()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_ParticleEffect::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_ParticleEffect_Core, (Craft::ParticleEffect*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_ParticleEffect::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_ParticleEffect::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_ParticleEffect*)this)->DaoCxxVirt_Craft_ParticleEffect::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::ParticleEffect::BeginLoad( source );
}
bool DaoCxx_Craft_ParticleEffect::EndLoad(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "EndLoad" );
  if( _ro && _obj ){
    bool _EndLoad = ((DaoCxxVirt_Craft_ParticleEffect*)this)->DaoCxxVirt_Craft_ParticleEffect::EndLoad( _cs  );
    if( _cs == 0 ) return _EndLoad;
  }
  return Craft::ParticleEffect::EndLoad(  );
}
bool DaoCxx_Craft_ParticleEffect::Save( Craft::Serializer& dest )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Save" );
  if( _ro && _obj ){
    bool _Save = ((DaoCxxVirt_Craft_ParticleEffect*)this)->DaoCxxVirt_Craft_ParticleEffect::Save( _cs, dest );
    if( _cs == 0 ) return _Save;
  }
  return Craft::ParticleEffect::Save( dest );
}

DaoCxx_Craft_ParticleEmitter* DaoCxx_Craft_ParticleEmitter_New( Craft::Context* context )
{
	DaoCxx_Craft_ParticleEmitter *self = new DaoCxx_Craft_ParticleEmitter( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_ParticleEmitter::OnSetEnabled( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_ParticleEmitter::Update( int &_cs, const Craft::FrameInfo& frame )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Update" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF1020A( & _cs, _ro, _obj, frame );
}
void DaoCxxVirt_Craft_ParticleEmitter::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_BillboardSet::DaoInitWrapper( d );

}
DaoCxx_Craft_ParticleEmitter::~DaoCxx_Craft_ParticleEmitter()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_ParticleEmitter::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_ParticleEmitter_Core, (Craft::ParticleEmitter*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_ParticleEmitter::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_ParticleEmitter::OnSetEnabled(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_ParticleEmitter*)this)->DaoCxxVirt_Craft_ParticleEmitter::OnSetEnabled( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::ParticleEmitter::OnSetEnabled(  );
}
void DaoCxx_Craft_ParticleEmitter::Update( const Craft::FrameInfo& frame )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Update" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_ParticleEmitter*)this)->DaoCxxVirt_Craft_ParticleEmitter::Update( _cs, frame );
    if( _cs == 0 ) return;
  }
  Craft::ParticleEmitter::Update( frame );
}

DaoCxx_Craft_TerrainPatch* DaoCxx_Craft_TerrainPatch_New( Craft::Context* context )
{
	DaoCxx_Craft_TerrainPatch *self = new DaoCxx_Craft_TerrainPatch( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_TerrainPatch::UpdateBatches( int &_cs, const Craft::FrameInfo& frame )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "UpdateBatches" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF1020A( & _cs, _ro, _obj, frame );
}
void DaoCxxVirt_Craft_TerrainPatch::UpdateGeometry( int &_cs, const Craft::FrameInfo& frame )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "UpdateGeometry" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF1020A( & _cs, _ro, _obj, frame );
}
Craft::UpdateGeometryType DaoCxxVirt_Craft_TerrainPatch::GetUpdateGeometryType( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetUpdateGeometryType" );
  Craft::UpdateGeometryType _GetUpdateGeometryType = (Craft::UpdateGeometryType) 0;
  if( _ro == NULL || _obj == NULL ) return _GetUpdateGeometryType;
  return (Craft::UpdateGeometryType)DaoPF10270( & _cs, _ro, _obj );
}
Craft::Geometry* DaoCxxVirt_Craft_TerrainPatch::GetLodGeometry( int &_cs, unsigned int batchIndex, unsigned int level )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetLodGeometry" );
  Craft::Geometry* _GetLodGeometry = NULL;
  if( _ro == NULL || _obj == NULL ) return _GetLodGeometry;
  return (Craft::Geometry*)DaoPF101F1( & _cs, _ro, _obj, batchIndex, level );
}
unsigned int DaoCxxVirt_Craft_TerrainPatch::GetNumOccluderTriangles( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetNumOccluderTriangles" );
  unsigned int _GetNumOccluderTriangles = (unsigned int) 0;
  if( _ro == NULL || _obj == NULL ) return _GetNumOccluderTriangles;
  return (unsigned int)DaoPF100A3( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_TerrainPatch::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Drawable::DaoInitWrapper( d );

}
DaoCxx_Craft_TerrainPatch::~DaoCxx_Craft_TerrainPatch()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_TerrainPatch::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_TerrainPatch_Core, (Craft::TerrainPatch*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_TerrainPatch::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_TerrainPatch::UpdateBatches( const Craft::FrameInfo& frame )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "UpdateBatches" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_TerrainPatch*)this)->DaoCxxVirt_Craft_TerrainPatch::UpdateBatches( _cs, frame );
    if( _cs == 0 ) return;
  }
  Craft::TerrainPatch::UpdateBatches( frame );
}
void DaoCxx_Craft_TerrainPatch::UpdateGeometry( const Craft::FrameInfo& frame )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "UpdateGeometry" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_TerrainPatch*)this)->DaoCxxVirt_Craft_TerrainPatch::UpdateGeometry( _cs, frame );
    if( _cs == 0 ) return;
  }
  Craft::TerrainPatch::UpdateGeometry( frame );
}
Craft::UpdateGeometryType DaoCxx_Craft_TerrainPatch::GetUpdateGeometryType(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetUpdateGeometryType" );
  if( _ro && _obj ){
    Craft::UpdateGeometryType _GetUpdateGeometryType = ((DaoCxxVirt_Craft_TerrainPatch*)this)->DaoCxxVirt_Craft_TerrainPatch::GetUpdateGeometryType( _cs  );
    if( _cs == 0 ) return _GetUpdateGeometryType;
  }
  return Craft::TerrainPatch::GetUpdateGeometryType(  );
}
Craft::Geometry* DaoCxx_Craft_TerrainPatch::GetLodGeometry( unsigned int batchIndex, unsigned int level )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetLodGeometry" );
  if( _ro && _obj ){
    Craft::Geometry* _GetLodGeometry = ((DaoCxxVirt_Craft_TerrainPatch*)this)->DaoCxxVirt_Craft_TerrainPatch::GetLodGeometry( _cs, batchIndex, level );
    if( _cs == 0 ) return _GetLodGeometry;
  }
  return Craft::TerrainPatch::GetLodGeometry( batchIndex, level );
}
unsigned int DaoCxx_Craft_TerrainPatch::GetNumOccluderTriangles(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetNumOccluderTriangles" );
  if( _ro && _obj ){
    unsigned int _GetNumOccluderTriangles = ((DaoCxxVirt_Craft_TerrainPatch*)this)->DaoCxxVirt_Craft_TerrainPatch::GetNumOccluderTriangles( _cs  );
    if( _cs == 0 ) return _GetNumOccluderTriangles;
  }
  return Craft::TerrainPatch::GetNumOccluderTriangles(  );
}

DaoCxx_Craft_Sound* DaoCxx_Craft_Sound_New( Craft::Context* context )
{
	DaoCxx_Craft_Sound *self = new DaoCxx_Craft_Sound( context );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_Sound::BeginLoad( int &_cs, Craft::Deserializer& source )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  bool _BeginLoad = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _BeginLoad;
  return (bool)DaoPF1011F( & _cs, _ro, _obj, source );
}
void DaoCxxVirt_Craft_Sound::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Resource::DaoInitWrapper( d );

}
DaoCxx_Craft_Sound::~DaoCxx_Craft_Sound()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Sound::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Sound_Core, (Craft::Sound*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Sound::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_Sound::BeginLoad( Craft::Deserializer& source )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "BeginLoad" );
  if( _ro && _obj ){
    bool _BeginLoad = ((DaoCxxVirt_Craft_Sound*)this)->DaoCxxVirt_Craft_Sound::BeginLoad( _cs, source );
    if( _cs == 0 ) return _BeginLoad;
  }
  return Craft::Sound::BeginLoad( source );
}

DaoCxx_Craft_SoundSource* DaoCxx_Craft_SoundSource_New( Craft::Context* context )
{
	DaoCxx_Craft_SoundSource *self = new DaoCxx_Craft_SoundSource( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_SoundSource::Update( int &_cs, float timeStep )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Update" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF10002( & _cs, _ro, _obj, timeStep );
}
void DaoCxxVirt_Craft_SoundSource::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Component::DaoInitWrapper( d );

}
DaoCxx_Craft_SoundSource::~DaoCxx_Craft_SoundSource()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_SoundSource::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_SoundSource_Core, (Craft::SoundSource*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_SoundSource::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_SoundSource::Update( float timeStep )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Update" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_SoundSource*)this)->DaoCxxVirt_Craft_SoundSource::Update( _cs, timeStep );
    if( _cs == 0 ) return;
  }
  Craft::SoundSource::Update( timeStep );
}

DaoCxx_Craft_SoundListener* DaoCxx_Craft_SoundListener_New( Craft::Context* context )
{
	DaoCxx_Craft_SoundListener *self = new DaoCxx_Craft_SoundListener( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_SoundListener::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Component::DaoInitWrapper( d );

}
DaoCxx_Craft_SoundListener::~DaoCxx_Craft_SoundListener()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_SoundListener::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_SoundListener_Core, (Craft::SoundListener*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_SoundListener::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_Audio* DaoCxx_Craft_Audio_New( Craft::Context* context )
{
	DaoCxx_Craft_Audio *self = new DaoCxx_Craft_Audio( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Audio::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_Audio::~DaoCxx_Craft_Audio()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Audio::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Audio_Core, (Craft::Audio*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Audio::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_SoundStream* DaoCxx_Craft_SoundStream_New(  )
{
	DaoCxx_Craft_SoundStream *self = new DaoCxx_Craft_SoundStream(  );
	self->DaoInitWrapper( NULL );
	return self;
}
unsigned int DaoCxxVirt_Craft_SoundStream::GetData( int &_cs, signed char* dest, unsigned int numBytes )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetData" );
  unsigned int _GetData = (unsigned int) 0;
  if( _ro == NULL || _obj == NULL ) return _GetData;
  return (unsigned int)DaoPF102A8( & _cs, _ro, _obj, dest, numBytes );
}
void DaoCxxVirt_Craft_SoundStream::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_RefCounted::DaoInitWrapper( d );

}
DaoCxx_Craft_SoundStream::~DaoCxx_Craft_SoundStream()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_SoundStream::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_SoundStream_Core, (Craft::SoundStream*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_SoundStream::DaoInitWrapper( dao_cdata );
}
unsigned int DaoCxx_Craft_SoundStream::GetData( signed char* dest, unsigned int numBytes )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_SoundStream*)this)->DaoCxxVirt_Craft_SoundStream::GetData( _cs, dest, numBytes );
}

DaoCxx_Craft_SoundSource3D* DaoCxx_Craft_SoundSource3D_New( Craft::Context* context )
{
	DaoCxx_Craft_SoundSource3D *self = new DaoCxx_Craft_SoundSource3D( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_SoundSource3D::Update( int &_cs, float timeStep )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Update" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF10002( & _cs, _ro, _obj, timeStep );
}
void DaoCxxVirt_Craft_SoundSource3D::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_SoundSource::DaoInitWrapper( d );

}
DaoCxx_Craft_SoundSource3D::~DaoCxx_Craft_SoundSource3D()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_SoundSource3D::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_SoundSource3D_Core, (Craft::SoundSource3D*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_SoundSource3D::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_SoundSource3D::Update( float timeStep )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "Update" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_SoundSource3D*)this)->DaoCxxVirt_Craft_SoundSource3D::Update( _cs, timeStep );
    if( _cs == 0 ) return;
  }
  Craft::SoundSource3D::Update( timeStep );
}

DaoCxx_Craft_Input* DaoCxx_Craft_Input_New( Craft::Context* context )
{
	DaoCxx_Craft_Input *self = new DaoCxx_Craft_Input( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Input::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_Input::~DaoCxx_Craft_Input()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Input::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Input_Core, (Craft::Input*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Input::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_Constraint* DaoCxx_Craft_Constraint_New( Craft::Context* context )
{
	DaoCxx_Craft_Constraint *self = new DaoCxx_Craft_Constraint( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Constraint::ApplyAttributes( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_Constraint::OnSetEnabled( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  DaoVmSpace *_vms = Dao_Get_Object_VmSpace( _obj );
  if( _ro == NULL || _obj == NULL ) return;
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _obj, NULL, 0 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) return;
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( _vms );
  DaoProcess_Call( _proc, _ro, (DaoValue*)_obj, NULL, 0 );
  DaoVmSpace_ReleaseProcess( _vms, _proc );
}
void DaoCxxVirt_Craft_Constraint::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Component::DaoInitWrapper( d );

}
DaoCxx_Craft_Constraint::~DaoCxx_Craft_Constraint()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Constraint::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Constraint_Core, (Craft::Constraint*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Constraint::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_Constraint::ApplyAttributes(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "ApplyAttributes" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Constraint*)this)->DaoCxxVirt_Craft_Constraint::ApplyAttributes( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::Constraint::ApplyAttributes(  );
}
void DaoCxx_Craft_Constraint::OnSetEnabled(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnSetEnabled" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_Constraint*)this)->DaoCxxVirt_Craft_Constraint::OnSetEnabled( _cs  );
    if( _cs == 0 ) return;
  }
  Craft::Constraint::OnSetEnabled(  );
}

DaoCxx_Craft_PhysicsWorld* DaoCxx_Craft_PhysicsWorld_New( Craft::Context* context )
{
	DaoCxx_Craft_PhysicsWorld *self = new DaoCxx_Craft_PhysicsWorld( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_PhysicsWorld::setDebugMode( int &_cs, int debugMode )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "setDebugMode" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF10087( & _cs, _ro, _obj, debugMode );
}
int DaoCxxVirt_Craft_PhysicsWorld::getDebugMode( int &_cs  )const
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "getDebugMode" );
  int _getDebugMode = (int) 0;
  if( _ro == NULL || _obj == NULL ) return _getDebugMode;
  return (int)DaoPF1005F( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_PhysicsWorld::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Component::DaoInitWrapper( d );

}
DaoCxx_Craft_PhysicsWorld::~DaoCxx_Craft_PhysicsWorld()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_PhysicsWorld::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_PhysicsWorld_Core, (Craft::PhysicsWorld*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_PhysicsWorld::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_PhysicsWorld::setDebugMode( int debugMode )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "setDebugMode" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_PhysicsWorld*)this)->DaoCxxVirt_Craft_PhysicsWorld::setDebugMode( _cs, debugMode );
    if( _cs == 0 ) return;
  }
  Craft::PhysicsWorld::setDebugMode( debugMode );
}
int DaoCxx_Craft_PhysicsWorld::getDebugMode(  )const
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "getDebugMode" );
  if( _ro && _obj ){
    int _getDebugMode = ((DaoCxxVirt_Craft_PhysicsWorld*)this)->DaoCxxVirt_Craft_PhysicsWorld::getDebugMode( _cs  );
    if( _cs == 0 ) return _getDebugMode;
  }
  return Craft::PhysicsWorld::getDebugMode(  );
}

DaoCxx_Craft_UIKit_UIWidget* DaoCxx_Craft_UIKit_UIWidget_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UIWidget *self = new DaoCxx_Craft_UIKit_UIWidget( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIWidget::SetId( int &_cs, const Craft::String& id )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "SetId" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF1010A( & _cs, _ro, _obj, id );
}
double DaoCxxVirt_Craft_UIKit_UIWidget::GetValue( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetValue" );
  double _GetValue = (double) 0;
  if( _ro == NULL || _obj == NULL ) return _GetValue;
  return (double)DaoPF100A9( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_UIKit_UIWidget::AddChild( int &_cs, Craft::UIKit::UIWidget* child )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "AddChild" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF102D4( & _cs, _ro, _obj, child );
}
bool DaoCxxVirt_Craft_UIKit_UIWidget::OnClick( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnClick" );
  bool _OnClick = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _OnClick;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
bool DaoCxxVirt_Craft_UIKit_UIWidget::OnClick( int &_cs, unsigned int refid )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnClick" );
  bool _OnClick = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _OnClick;
  return (bool)DaoPF10014( & _cs, _ro, _obj, refid );
}
bool DaoCxxVirt_Craft_UIKit_UIWidget::OnLongClick( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnLongClick" );
  bool _OnLongClick = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _OnLongClick;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
bool DaoCxxVirt_Craft_UIKit_UIWidget::OnLeftButtonDown( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnLeftButtonDown" );
  bool _OnLeftButtonDown = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _OnLeftButtonDown;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
bool DaoCxxVirt_Craft_UIKit_UIWidget::OnLeftButtonUp( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnLeftButtonUp" );
  bool _OnLeftButtonUp = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _OnLeftButtonUp;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
bool DaoCxxVirt_Craft_UIKit_UIWidget::OnRightButtonDown( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnRightButtonDown" );
  bool _OnRightButtonDown = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _OnRightButtonDown;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
bool DaoCxxVirt_Craft_UIKit_UIWidget::OnRightButtonUp( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnRightButtonUp" );
  bool _OnRightButtonUp = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _OnRightButtonUp;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
bool DaoCxxVirt_Craft_UIKit_UIWidget::OnKeyDown( int &_cs, int key, int sp, int mod )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnKeyDown" );
  bool _OnKeyDown = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _OnKeyDown;
  return (bool)DaoPF102D7( & _cs, _ro, _obj, key, sp, mod );
}
bool DaoCxxVirt_Craft_UIKit_UIWidget::OnKeyUp( int &_cs, int key, int sp, int mod )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnKeyUp" );
  bool _OnKeyUp = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _OnKeyUp;
  return (bool)DaoPF102D7( & _cs, _ro, _obj, key, sp, mod );
}
bool DaoCxxVirt_Craft_UIKit_UIWidget::OnChange( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnChange" );
  bool _OnChange = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _OnChange;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIWidget::~DaoCxx_Craft_UIKit_UIWidget()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIWidget::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIWidget_Core, (Craft::UIKit::UIWidget*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_UIKit_UIWidget::SetId( const Craft::String& id )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "SetId" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_UIKit_UIWidget*)this)->DaoCxxVirt_Craft_UIKit_UIWidget::SetId( _cs, id );
    if( _cs == 0 ) return;
  }
  Craft::UIKit::UIWidget::SetId( id );
}
double DaoCxx_Craft_UIKit_UIWidget::GetValue(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetValue" );
  if( _ro && _obj ){
    double _GetValue = ((DaoCxxVirt_Craft_UIKit_UIWidget*)this)->DaoCxxVirt_Craft_UIKit_UIWidget::GetValue( _cs  );
    if( _cs == 0 ) return _GetValue;
  }
  return Craft::UIKit::UIWidget::GetValue(  );
}
void DaoCxx_Craft_UIKit_UIWidget::AddChild( Craft::UIKit::UIWidget* child )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "AddChild" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_UIKit_UIWidget*)this)->DaoCxxVirt_Craft_UIKit_UIWidget::AddChild( _cs, child );
    if( _cs == 0 ) return;
  }
  Craft::UIKit::UIWidget::AddChild( child );
}
bool DaoCxx_Craft_UIKit_UIWidget::OnClick(  )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_UIKit_UIWidget*)this)->DaoCxxVirt_Craft_UIKit_UIWidget::OnClick( _cs  );
}
bool DaoCxx_Craft_UIKit_UIWidget::OnClick( unsigned int refid )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_UIKit_UIWidget*)this)->DaoCxxVirt_Craft_UIKit_UIWidget::OnClick( _cs, refid );
}
bool DaoCxx_Craft_UIKit_UIWidget::OnLongClick(  )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_UIKit_UIWidget*)this)->DaoCxxVirt_Craft_UIKit_UIWidget::OnLongClick( _cs  );
}
bool DaoCxx_Craft_UIKit_UIWidget::OnLeftButtonDown(  )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_UIKit_UIWidget*)this)->DaoCxxVirt_Craft_UIKit_UIWidget::OnLeftButtonDown( _cs  );
}
bool DaoCxx_Craft_UIKit_UIWidget::OnLeftButtonUp(  )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_UIKit_UIWidget*)this)->DaoCxxVirt_Craft_UIKit_UIWidget::OnLeftButtonUp( _cs  );
}
bool DaoCxx_Craft_UIKit_UIWidget::OnRightButtonDown(  )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_UIKit_UIWidget*)this)->DaoCxxVirt_Craft_UIKit_UIWidget::OnRightButtonDown( _cs  );
}
bool DaoCxx_Craft_UIKit_UIWidget::OnRightButtonUp(  )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_UIKit_UIWidget*)this)->DaoCxxVirt_Craft_UIKit_UIWidget::OnRightButtonUp( _cs  );
}
bool DaoCxx_Craft_UIKit_UIWidget::OnKeyDown( int key, int sp, int mod )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_UIKit_UIWidget*)this)->DaoCxxVirt_Craft_UIKit_UIWidget::OnKeyDown( _cs, key, sp, mod );
}
bool DaoCxx_Craft_UIKit_UIWidget::OnKeyUp( int key, int sp, int mod )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_UIKit_UIWidget*)this)->DaoCxxVirt_Craft_UIKit_UIWidget::OnKeyUp( _cs, key, sp, mod );
}
bool DaoCxx_Craft_UIKit_UIWidget::OnChange(  )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_UIKit_UIWidget*)this)->DaoCxxVirt_Craft_UIKit_UIWidget::OnChange( _cs  );
}

DaoCxx_Craft_UIKit_UIView* DaoCxx_Craft_UIKit_UIView_New( Craft::Context* context )
{
	DaoCxx_Craft_UIKit_UIView *self = new DaoCxx_Craft_UIKit_UIView( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIView::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIView::~DaoCxx_Craft_UIKit_UIView()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIView::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIView_Core, (Craft::UIKit::UIView*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIView::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UILayoutParams* DaoCxx_Craft_UIKit_UILayoutParams_New( Craft::Context* context )
{
	DaoCxx_Craft_UIKit_UILayoutParams *self = new DaoCxx_Craft_UIKit_UILayoutParams( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UILayoutParams::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UILayoutParams::~DaoCxx_Craft_UIKit_UILayoutParams()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UILayoutParams::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UILayoutParams_Core, (Craft::UIKit::UILayoutParams*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UILayoutParams::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIFontDescription* DaoCxx_Craft_UIKit_UIFontDescription_New( Craft::Context* context )
{
	DaoCxx_Craft_UIKit_UIFontDescription *self = new DaoCxx_Craft_UIKit_UIFontDescription( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIFontDescription::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIFontDescription::~DaoCxx_Craft_UIKit_UIFontDescription()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIFontDescription::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIFontDescription_Core, (Craft::UIKit::UIFontDescription*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIFontDescription::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UISelectList* DaoCxx_Craft_UIKit_UISelectList_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UISelectList *self = new DaoCxx_Craft_UIKit_UISelectList( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
double DaoCxxVirt_Craft_UIKit_UISelectList::GetValue( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetValue" );
  double _GetValue = (double) 0;
  if( _ro == NULL || _obj == NULL ) return _GetValue;
  return (double)DaoPF100A9( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_UIKit_UISelectList::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UISelectList::~DaoCxx_Craft_UIKit_UISelectList()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UISelectList::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UISelectList_Core, (Craft::UIKit::UISelectList*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UISelectList::DaoInitWrapper( dao_cdata );
}
double DaoCxx_Craft_UIKit_UISelectList::GetValue(  )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "GetValue" );
  if( _ro && _obj ){
    double _GetValue = ((DaoCxxVirt_Craft_UIKit_UISelectList*)this)->DaoCxxVirt_Craft_UIKit_UISelectList::GetValue( _cs  );
    if( _cs == 0 ) return _GetValue;
  }
  return Craft::UIKit::UISelectList::GetValue(  );
}

DaoCxx_Craft_UIKit_UIPreferredSize* DaoCxx_Craft_UIKit_UIPreferredSize_New( int w, int h )
{
	DaoCxx_Craft_UIKit_UIPreferredSize *self = new DaoCxx_Craft_UIKit_UIPreferredSize( w, h );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIPreferredSize::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_RefCounted::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIPreferredSize::~DaoCxx_Craft_UIKit_UIPreferredSize()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIPreferredSize::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIPreferredSize_Core, (Craft::UIKit::UIPreferredSize*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIPreferredSize::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIDragObject* DaoCxx_Craft_UIKit_UIDragObject_New( Craft::Context* context, Craft::Object* object, const Craft::String& text, const Craft::String& icon )
{
	DaoCxx_Craft_UIKit_UIDragObject *self = new DaoCxx_Craft_UIKit_UIDragObject( context, object, text, icon );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIDragObject::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIDragObject::~DaoCxx_Craft_UIKit_UIDragObject()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIDragObject::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIDragObject_Core, (Craft::UIKit::UIDragObject*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIDragObject::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIButton* DaoCxx_Craft_UIKit_UIButton_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UIButton *self = new DaoCxx_Craft_UIKit_UIButton( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIButton::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIButton::~DaoCxx_Craft_UIKit_UIButton()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIButton::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIButton_Core, (Craft::UIKit::UIButton*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIButton::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UICheckBox* DaoCxx_Craft_UIKit_UICheckBox_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UICheckBox *self = new DaoCxx_Craft_UIKit_UICheckBox( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UICheckBox::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UICheckBox::~DaoCxx_Craft_UIKit_UICheckBox()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UICheckBox::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UICheckBox_Core, (Craft::UIKit::UICheckBox*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UICheckBox::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIClickLabel* DaoCxx_Craft_UIKit_UIClickLabel_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UIClickLabel *self = new DaoCxx_Craft_UIKit_UIClickLabel( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIClickLabel::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIClickLabel::~DaoCxx_Craft_UIKit_UIClickLabel()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIClickLabel::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIClickLabel_Core, (Craft::UIKit::UIClickLabel*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIClickLabel::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIContainer* DaoCxx_Craft_UIKit_UIContainer_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UIContainer *self = new DaoCxx_Craft_UIKit_UIContainer( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIContainer::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIContainer::~DaoCxx_Craft_UIKit_UIContainer()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIContainer::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIContainer_Core, (Craft::UIKit::UIContainer*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIContainer::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIDimmer* DaoCxx_Craft_UIKit_UIDimmer_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UIDimmer *self = new DaoCxx_Craft_UIKit_UIDimmer( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIDimmer::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIDimmer::~DaoCxx_Craft_UIKit_UIDimmer()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIDimmer::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIDimmer_Core, (Craft::UIKit::UIDimmer*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIDimmer::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIDragDrop* DaoCxx_Craft_UIKit_UIDragDrop_New( Craft::Context* context )
{
	DaoCxx_Craft_UIKit_UIDragDrop *self = new DaoCxx_Craft_UIKit_UIDragDrop( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIDragDrop::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIDragDrop::~DaoCxx_Craft_UIKit_UIDragDrop()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIDragDrop::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIDragDrop_Core, (Craft::UIKit::UIDragDrop*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIDragDrop::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIEditField* DaoCxx_Craft_UIKit_UIEditField_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UIEditField *self = new DaoCxx_Craft_UIKit_UIEditField( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
bool DaoCxxVirt_Craft_UIKit_UIEditField::OnCompletion( int &_cs  )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "OnCompletion" );
  bool _OnCompletion = (bool) 0;
  if( _ro == NULL || _obj == NULL ) return _OnCompletion;
  return (bool)DaoPF10085( & _cs, _ro, _obj );
}
void DaoCxxVirt_Craft_UIKit_UIEditField::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIEditField::~DaoCxx_Craft_UIKit_UIEditField()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIEditField::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIEditField_Core, (Craft::UIKit::UIEditField*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIEditField::DaoInitWrapper( dao_cdata );
}
bool DaoCxx_Craft_UIKit_UIEditField::OnCompletion(  )
{
  int _cs = 1;
  return ((DaoCxxVirt_Craft_UIKit_UIEditField*)this)->DaoCxxVirt_Craft_UIKit_UIEditField::OnCompletion( _cs  );
}

DaoCxx_Craft_UIKit_UIImageWidget* DaoCxx_Craft_UIKit_UIImageWidget_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UIImageWidget *self = new DaoCxx_Craft_UIKit_UIImageWidget( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIImageWidget::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIImageWidget::~DaoCxx_Craft_UIKit_UIImageWidget()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIImageWidget::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIImageWidget_Core, (Craft::UIKit::UIImageWidget*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIImageWidget::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIInlineSelect* DaoCxx_Craft_UIKit_UIInlineSelect_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UIInlineSelect *self = new DaoCxx_Craft_UIKit_UIInlineSelect( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIInlineSelect::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIInlineSelect::~DaoCxx_Craft_UIKit_UIInlineSelect()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIInlineSelect::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIInlineSelect_Core, (Craft::UIKit::UIInlineSelect*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIInlineSelect::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UILayout* DaoCxx_Craft_UIKit_UILayout_New( Craft::Context* context, Craft::UIKit::UI_AXIS axis, bool createWidget )
{
	DaoCxx_Craft_UIKit_UILayout *self = new DaoCxx_Craft_UIKit_UILayout( context, axis, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UILayout::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UILayout::~DaoCxx_Craft_UIKit_UILayout()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UILayout::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UILayout_Core, (Craft::UIKit::UILayout*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UILayout::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIListView* DaoCxx_Craft_UIKit_UIListView_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UIListView *self = new DaoCxx_Craft_UIKit_UIListView( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIListView::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIListView::~DaoCxx_Craft_UIKit_UIListView()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIListView::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIListView_Core, (Craft::UIKit::UIListView*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIListView::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UISelectItemSource* DaoCxx_Craft_UIKit_UISelectItemSource_New( Craft::Context* context )
{
	DaoCxx_Craft_UIKit_UISelectItemSource *self = new DaoCxx_Craft_UIKit_UISelectItemSource( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UISelectItemSource::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UISelectItemSource::~DaoCxx_Craft_UIKit_UISelectItemSource()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UISelectItemSource::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UISelectItemSource_Core, (Craft::UIKit::UISelectItemSource*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UISelectItemSource::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UISelectItem* DaoCxx_Craft_UIKit_UISelectItem_New( Craft::Context* context, const Craft::String& str, const Craft::String& id, const Craft::String& skinImage )
{
	DaoCxx_Craft_UIKit_UISelectItem *self = new DaoCxx_Craft_UIKit_UISelectItem( context, str, id, skinImage );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UISelectItem::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UISelectItem::~DaoCxx_Craft_UIKit_UISelectItem()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UISelectItem::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UISelectItem_Core, (Craft::UIKit::UISelectItem*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UISelectItem::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIMenuWindow* DaoCxx_Craft_UIKit_UIMenuWindow_New( Craft::Context* context, Craft::UIKit::UIWidget* target, const Craft::String& id )
{
	DaoCxx_Craft_UIKit_UIMenuWindow *self = new DaoCxx_Craft_UIKit_UIMenuWindow( context, target, id );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIMenuWindow::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIMenuWindow::~DaoCxx_Craft_UIKit_UIMenuWindow()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIMenuWindow::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIMenuWindow_Core, (Craft::UIKit::UIMenuWindow*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIMenuWindow::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIMenuItem* DaoCxx_Craft_UIKit_UIMenuItem_New( Craft::Context* context, const Craft::String& str, const Craft::String& id, const Craft::String& shortcut, const Craft::String& skinBg )
{
	DaoCxx_Craft_UIKit_UIMenuItem *self = new DaoCxx_Craft_UIKit_UIMenuItem( context, str, id, shortcut, skinBg );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIMenuItem::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UISelectItem::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIMenuItem::~DaoCxx_Craft_UIKit_UIMenuItem()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIMenuItem::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIMenuItem_Core, (Craft::UIKit::UIMenuItem*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIMenuItem::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIMenuItemSource* DaoCxx_Craft_UIKit_UIMenuItemSource_New( Craft::Context* context )
{
	DaoCxx_Craft_UIKit_UIMenuItemSource *self = new DaoCxx_Craft_UIKit_UIMenuItemSource( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIMenuItemSource::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UISelectItemSource::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIMenuItemSource::~DaoCxx_Craft_UIKit_UIMenuItemSource()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIMenuItemSource::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIMenuItemSource_Core, (Craft::UIKit::UIMenuItemSource*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIMenuItemSource::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIPopupWindow* DaoCxx_Craft_UIKit_UIPopupWindow_New( Craft::Context* context, bool createWidget, Craft::UIKit::UIWidget* target, const Craft::String& id )
{
	DaoCxx_Craft_UIKit_UIPopupWindow *self = new DaoCxx_Craft_UIKit_UIPopupWindow( context, createWidget, target, id );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIPopupWindow::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIPopupWindow::~DaoCxx_Craft_UIKit_UIPopupWindow()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIPopupWindow::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIPopupWindow_Core, (Craft::UIKit::UIPopupWindow*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIPopupWindow::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UISceneView* DaoCxx_Craft_UIKit_UISceneView_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UISceneView *self = new DaoCxx_Craft_UIKit_UISceneView( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UISceneView::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UISceneView::~DaoCxx_Craft_UIKit_UISceneView()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UISceneView::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UISceneView_Core, (Craft::UIKit::UISceneView*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UISceneView::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIScrollContainer* DaoCxx_Craft_UIKit_UIScrollContainer_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UIScrollContainer *self = new DaoCxx_Craft_UIKit_UIScrollContainer( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIScrollContainer::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIScrollContainer::~DaoCxx_Craft_UIKit_UIScrollContainer()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIScrollContainer::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIScrollContainer_Core, (Craft::UIKit::UIScrollContainer*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIScrollContainer::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UISection* DaoCxx_Craft_UIKit_UISection_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UISection *self = new DaoCxx_Craft_UIKit_UISection( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UISection::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UISection::~DaoCxx_Craft_UIKit_UISection()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UISection::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UISection_Core, (Craft::UIKit::UISection*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UISection::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UISelectDropdown* DaoCxx_Craft_UIKit_UISelectDropdown_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UISelectDropdown *self = new DaoCxx_Craft_UIKit_UISelectDropdown( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UISelectDropdown::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIButton::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UISelectDropdown::~DaoCxx_Craft_UIKit_UISelectDropdown()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UISelectDropdown::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UISelectDropdown_Core, (Craft::UIKit::UISelectDropdown*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UISelectDropdown::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UISeparator* DaoCxx_Craft_UIKit_UISeparator_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UISeparator *self = new DaoCxx_Craft_UIKit_UISeparator( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UISeparator::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UISeparator::~DaoCxx_Craft_UIKit_UISeparator()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UISeparator::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UISeparator_Core, (Craft::UIKit::UISeparator*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UISeparator::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UISkinImage* DaoCxx_Craft_UIKit_UISkinImage_New( Craft::Context* context, const Craft::String& bitmapID, bool createWidget )
{
	DaoCxx_Craft_UIKit_UISkinImage *self = new DaoCxx_Craft_UIKit_UISkinImage( context, bitmapID, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UISkinImage::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UISkinImage::~DaoCxx_Craft_UIKit_UISkinImage()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UISkinImage::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UISkinImage_Core, (Craft::UIKit::UISkinImage*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UISkinImage::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UITabContainer* DaoCxx_Craft_UIKit_UITabContainer_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UITabContainer *self = new DaoCxx_Craft_UIKit_UITabContainer( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UITabContainer::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UITabContainer::~DaoCxx_Craft_UIKit_UITabContainer()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UITabContainer::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UITabContainer_Core, (Craft::UIKit::UITabContainer*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UITabContainer::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UITextField* DaoCxx_Craft_UIKit_UITextField_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UITextField *self = new DaoCxx_Craft_UIKit_UITextField( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UITextField::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UITextField::~DaoCxx_Craft_UIKit_UITextField()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UITextField::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UITextField_Core, (Craft::UIKit::UITextField*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UITextField::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UITextureWidget* DaoCxx_Craft_UIKit_UITextureWidget_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UITextureWidget *self = new DaoCxx_Craft_UIKit_UITextureWidget( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UITextureWidget::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UITextureWidget::~DaoCxx_Craft_UIKit_UITextureWidget()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UITextureWidget::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UITextureWidget_Core, (Craft::UIKit::UITextureWidget*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UITextureWidget::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UIWindow* DaoCxx_Craft_UIKit_UIWindow_New( Craft::Context* context, bool createWidget )
{
	DaoCxx_Craft_UIKit_UIWindow *self = new DaoCxx_Craft_UIKit_UIWindow( context, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIWindow::AddChild( int &_cs, Craft::UIKit::UIWidget* child )
{
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "AddChild" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF102D4( & _cs, _ro, _obj, child );
}
void DaoCxxVirt_Craft_UIKit_UIWindow::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWidget::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIWindow::~DaoCxx_Craft_UIKit_UIWindow()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIWindow::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIWindow_Core, (Craft::UIKit::UIWindow*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIWindow::DaoInitWrapper( dao_cdata );
}
void DaoCxx_Craft_UIKit_UIWindow::AddChild( Craft::UIKit::UIWidget* child )
{
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( dao_cdata, & _obj, "AddChild" );
  if( _ro && _obj ){
    ((DaoCxxVirt_Craft_UIKit_UIWindow*)this)->DaoCxxVirt_Craft_UIKit_UIWindow::AddChild( _cs, child );
    if( _cs == 0 ) return;
  }
  Craft::UIKit::UIWindow::AddChild( child );
}

DaoCxx_Craft_UIKit_UIMessageWindow* DaoCxx_Craft_UIKit_UIMessageWindow_New( Craft::Context* context, Craft::UIKit::UIWidget* target, const Craft::String& id, bool createWidget )
{
	DaoCxx_Craft_UIKit_UIMessageWindow *self = new DaoCxx_Craft_UIKit_UIMessageWindow( context, target, id, createWidget );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UIMessageWindow::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_UIKit_UIWindow::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UIMessageWindow::~DaoCxx_Craft_UIKit_UIMessageWindow()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UIMessageWindow::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UIMessageWindow_Core, (Craft::UIKit::UIMessageWindow*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UIMessageWindow::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_UIKit_UI* DaoCxx_Craft_UIKit_UI_New( Craft::Context* context )
{
	DaoCxx_Craft_UIKit_UI *self = new DaoCxx_Craft_UIKit_UI( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_UIKit_UI::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_UIKit_UI::~DaoCxx_Craft_UIKit_UI()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_UIKit_UI::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_UIKit_UI_Core, (Craft::UIKit::UI*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_UIKit_UI::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_Engine* DaoCxx_Craft_Engine_New( Craft::Context* context )
{
	DaoCxx_Craft_Engine *self = new DaoCxx_Craft_Engine( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_Engine::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_Engine::~DaoCxx_Craft_Engine()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_Engine::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_Engine_Core, (Craft::Engine*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_Engine::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_DebugHud* DaoCxx_Craft_DebugHud_New( Craft::Context* context )
{
	DaoCxx_Craft_DebugHud *self = new DaoCxx_Craft_DebugHud( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_DebugHud::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_DebugHud::~DaoCxx_Craft_DebugHud()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_DebugHud::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_DebugHud_Core, (Craft::DebugHud*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_DebugHud::DaoInitWrapper( dao_cdata );
}

DaoCxx_Craft_DaoPlayer* DaoCxx_Craft_DaoPlayer_New( Craft::Context* context )
{
	DaoCxx_Craft_DaoPlayer *self = new DaoCxx_Craft_DaoPlayer( context );
	self->DaoInitWrapper( NULL );
	return self;
}
void DaoCxxVirt_Craft_DaoPlayer::DaoInitWrapper( DaoCdata *d )
{
	dao_cdata = d;
	DaoCxxVirt_Craft_Object::DaoInitWrapper( d );

}
DaoCxx_Craft_DaoPlayer::~DaoCxx_Craft_DaoPlayer()
{
	Dao_Craft_LockHandleGC();
	if( dao_cdata ){
		DaoCdata_SetData( dao_cdata, NULL );
		DaoGC_DecRC( (DaoValue*) dao_cdata );
	} 
	Dao_Craft_UnlockHandleGC();
}
void DaoCxx_Craft_DaoPlayer::DaoInitWrapper( DaoVmSpace *vmspace )
{
	dao_cdata = DaoCdata_NewTC( vmspace, dao_Craft_DaoPlayer_Core, (Craft::DaoPlayer*) this );
	DaoGC_IncRC( (DaoValue*)dao_cdata );
	DaoCxxVirt_Craft_DaoPlayer::DaoInitWrapper( dao_cdata );
}
