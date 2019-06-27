#include"dao_CraftEngine.h"

#ifdef __cplusplus
extern "C"{
#endif

static DaoFunctionEntry dao__Funcs[] = 
{
  { NULL, NULL }
};


#ifdef __cplusplus
}
#endif

static DaoNumberEntry dao__Nums[] = 
{
  { "LM_DEFAULT", DAO_INTEGER, LM_DEFAULT },
  { "LM_FORCE_LOOPED", DAO_INTEGER, LM_FORCE_LOOPED },
  { "LM_FORCE_CLAMPED", DAO_INTEGER, LM_FORCE_CLAMPED },
  { NULL, 0, 0 }
};

#ifdef __cplusplus
extern "C"{
#endif

static DaoFunctionEntry dao_tb_Funcs[] = 
{
  { NULL, NULL }
};


#ifdef __cplusplus
}
#endif

static DaoNumberEntry dao_tb_Nums[] = 
{
  { NULL, 0, 0 }
};

#ifdef __cplusplus
extern "C"{
#endif

static void dao_Craft_Equals( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Lerp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Lerp_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Abs( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Sign( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_IsNaN( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Clamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_SmoothStep( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Sin( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Cos( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Tan( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Asin( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Acos( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Atan( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Atan2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Min_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Max_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Abs_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Clamp_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_IsPowerOfTwo( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_NextPowerOfTwo( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_CountSetBits( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_SDBMHash( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Random( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Random_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Random_dao_3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Random_dao_4( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Random_dao_5( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_RandomNormal( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_FloatToHalf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_HalfToFloat( DaoProcess *_proc, DaoValue *_p[], int _n );
extern void dao_Craft_SplitPath( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_GetPath( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_GetFileName( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_GetExtension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_GetFileNameAndExtension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_ReplaceExtension( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_AddTrailingSlash( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_RemoveTrailingSlash( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_GetParentPath( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_GetInternalPath( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_GetNativePath( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_IsAbsolutePath( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_IsAbsoluteParentPath( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_EstimateCompressBound( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_CompressData( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_DecompressData( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_CompressStream( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_DecompressStream( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_SetRandomSeed( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_GetRandomSeed( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_Rand( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_Craft_RandStandardNormal( DaoProcess *_proc, DaoValue *_p[], int _n );
static DaoFunctionEntry dao_Craft_Funcs[] = 
{
  { dao_Craft_Equals, "Equals( lhs: float, rhs: float )=>bool" },
  { dao_Craft_Lerp, "Lerp( lhs: float, rhs: float, t: float )=>float" },
  { dao_Craft_Lerp_dao_2, "Lerp( lhs: float, rhs: float, t: float )=>float" },
  { dao_Craft_Min, "Min( lhs: float, rhs: float )=>float" },
  { dao_Craft_Max, "Max( lhs: float, rhs: float )=>float" },
  { dao_Craft_Abs, "Abs( value: float )=>float" },
  { dao_Craft_Sign, "Sign( value: float )=>float" },
  { dao_Craft_IsNaN, "IsNaN( value: float )=>bool" },
  { dao_Craft_Clamp, "Clamp( value: float, min: float, max: float )=>float" },
  { dao_Craft_SmoothStep, "SmoothStep( lhs: float, rhs: float, t: float )=>float" },
  { dao_Craft_Sin, "Sin( angle: float )=>float" },
  { dao_Craft_Cos, "Cos( angle: float )=>float" },
  { dao_Craft_Tan, "Tan( angle: float )=>float" },
  { dao_Craft_Asin, "Asin( x: float )=>float" },
  { dao_Craft_Acos, "Acos( x: float )=>float" },
  { dao_Craft_Atan, "Atan( x: float )=>float" },
  { dao_Craft_Atan2, "Atan2( y: float, x: float )=>float" },
  { dao_Craft_Min_dao_2, "Min( lhs: int, rhs: int )=>int" },
  { dao_Craft_Max_dao_2, "Max( lhs: int, rhs: int )=>int" },
  { dao_Craft_Abs_dao_2, "Abs( value: int )=>int" },
  { dao_Craft_Clamp_dao_2, "Clamp( value: int, min: int, max: int )=>int" },
  { dao_Craft_IsPowerOfTwo, "IsPowerOfTwo( value: int )=>bool" },
  { dao_Craft_NextPowerOfTwo, "NextPowerOfTwo( value: int )=>int" },
  { dao_Craft_CountSetBits, "CountSetBits( value: int )=>int" },
  { dao_Craft_SDBMHash, "SDBMHash( hash: int, c: int )=>int" },
  { dao_Craft_Random, "Random(  )=>float" },
  { dao_Craft_Random_dao_2, "Random( range: float )=>float" },
  { dao_Craft_Random_dao_3, "Random( min: float, max: float )=>float" },
  { dao_Craft_Random_dao_4, "Random( range: int )=>int" },
  { dao_Craft_Random_dao_5, "Random( min: int, max: int )=>int" },
  { dao_Craft_RandomNormal, "RandomNormal( meanValue: float, variance: float )=>float" },
  { dao_Craft_FloatToHalf, "FloatToHalf( value: float )=>int" },
  { dao_Craft_HalfToFloat, "HalfToFloat( value: int )=>float" },
  { dao_Craft_SplitPath, "SplitPath( fullPath: string, lowercaseExtension: bool =true )=>tuple<pathName:string,fileName:string,extension:string>" },
  { dao_Craft_GetPath, "GetPath( fullPath: string )=>string" },
  { dao_Craft_GetFileName, "GetFileName( fullPath: string )=>string" },
  { dao_Craft_GetExtension, "GetExtension( fullPath: string, lowercaseExtension: bool =true )=>string" },
  { dao_Craft_GetFileNameAndExtension, "GetFileNameAndExtension( fullPath: string, lowercaseExtension: bool =false )=>string" },
  { dao_Craft_ReplaceExtension, "ReplaceExtension( fullPath: string, newExtension: string )=>string" },
  { dao_Craft_AddTrailingSlash, "AddTrailingSlash( pathName: string )=>string" },
  { dao_Craft_RemoveTrailingSlash, "RemoveTrailingSlash( pathName: string )=>string" },
  { dao_Craft_GetParentPath, "GetParentPath( pathName: string )=>string" },
  { dao_Craft_GetInternalPath, "GetInternalPath( pathName: string )=>string" },
  { dao_Craft_GetNativePath, "GetNativePath( pathName: string )=>string" },
  { dao_Craft_IsAbsolutePath, "IsAbsolutePath( pathName: string )=>bool" },
  { dao_Craft_IsAbsoluteParentPath, "IsAbsoluteParentPath( absParentPath: string, fullPath: string )=>bool" },
  { dao_Craft_EstimateCompressBound, "EstimateCompressBound( srcSize: int )=>int" },
  { dao_Craft_CompressData, "CompressData( dest: cdata, src: cdata, srcSize: int )=>int" },
  { dao_Craft_DecompressData, "DecompressData( dest: cdata, src: cdata, destSize: int )=>int" },
  { dao_Craft_CompressStream, "CompressStream( dest: Craft::Serializer, src: Craft::Deserializer )=>bool" },
  { dao_Craft_DecompressStream, "DecompressStream( dest: Craft::Serializer, src: Craft::Deserializer )=>bool" },
  { dao_Craft_SetRandomSeed, "SetRandomSeed( seed: int )" },
  { dao_Craft_GetRandomSeed, "GetRandomSeed(  )=>int" },
  { dao_Craft_Rand, "Rand(  )=>int" },
  { dao_Craft_RandStandardNormal, "RandStandardNormal(  )=>float" },
  { NULL, NULL }
};

/* DaoCraftEngineMod.cpp */
static void dao_Craft_Equals( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float lhs = (float) DaoValue_TryGetFloat( _p[0] );
  float rhs = (float) DaoValue_TryGetFloat( _p[1] );

  bool _Equals = Craft::Equals( lhs, rhs );
  DaoProcess_PutBoolean( _proc, (dao_boolean) _Equals );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Lerp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float lhs = (float) DaoValue_TryGetFloat( _p[0] );
  float rhs = (float) DaoValue_TryGetFloat( _p[1] );
  float t = (float) DaoValue_TryGetFloat( _p[2] );

  float _Lerp = Craft::Lerp( lhs, rhs, t );
  DaoProcess_PutFloat( _proc, (dao_float) _Lerp );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Lerp_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double lhs = (double) DaoValue_TryGetFloat( _p[0] );
  double rhs = (double) DaoValue_TryGetFloat( _p[1] );
  float t = (float) DaoValue_TryGetFloat( _p[2] );

  double _Lerp = Craft::Lerp( lhs, rhs, t );
  DaoProcess_PutFloat( _proc, (dao_float) _Lerp );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float lhs = (float) DaoValue_TryGetFloat( _p[0] );
  float rhs = (float) DaoValue_TryGetFloat( _p[1] );

  float _Min = Craft::Min( lhs, rhs );
  DaoProcess_PutFloat( _proc, (dao_float) _Min );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float lhs = (float) DaoValue_TryGetFloat( _p[0] );
  float rhs = (float) DaoValue_TryGetFloat( _p[1] );

  float _Max = Craft::Max( lhs, rhs );
  DaoProcess_PutFloat( _proc, (dao_float) _Max );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Abs( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float value = (float) DaoValue_TryGetFloat( _p[0] );

  float _Abs = Craft::Abs( value );
  DaoProcess_PutFloat( _proc, (dao_float) _Abs );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Sign( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float value = (float) DaoValue_TryGetFloat( _p[0] );

  float _Sign = Craft::Sign( value );
  DaoProcess_PutFloat( _proc, (dao_float) _Sign );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_IsNaN( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float value = (float) DaoValue_TryGetFloat( _p[0] );

  bool _IsNaN = Craft::IsNaN( value );
  DaoProcess_PutBoolean( _proc, (dao_boolean) _IsNaN );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Clamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float value = (float) DaoValue_TryGetFloat( _p[0] );
  float min = (float) DaoValue_TryGetFloat( _p[1] );
  float max = (float) DaoValue_TryGetFloat( _p[2] );

  float _Clamp = Craft::Clamp( value, min, max );
  DaoProcess_PutFloat( _proc, (dao_float) _Clamp );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_SmoothStep( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float lhs = (float) DaoValue_TryGetFloat( _p[0] );
  float rhs = (float) DaoValue_TryGetFloat( _p[1] );
  float t = (float) DaoValue_TryGetFloat( _p[2] );

  float _SmoothStep = Craft::SmoothStep( lhs, rhs, t );
  DaoProcess_PutFloat( _proc, (dao_float) _SmoothStep );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Sin( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float angle = (float) DaoValue_TryGetFloat( _p[0] );

  float _Sin = Craft::Sin( angle );
  DaoProcess_PutFloat( _proc, (dao_float) _Sin );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Cos( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float angle = (float) DaoValue_TryGetFloat( _p[0] );

  float _Cos = Craft::Cos( angle );
  DaoProcess_PutFloat( _proc, (dao_float) _Cos );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Tan( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float angle = (float) DaoValue_TryGetFloat( _p[0] );

  float _Tan = Craft::Tan( angle );
  DaoProcess_PutFloat( _proc, (dao_float) _Tan );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Asin( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );

  float _Asin = Craft::Asin( x );
  DaoProcess_PutFloat( _proc, (dao_float) _Asin );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Acos( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );

  float _Acos = Craft::Acos( x );
  DaoProcess_PutFloat( _proc, (dao_float) _Acos );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Atan( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );

  float _Atan = Craft::Atan( x );
  DaoProcess_PutFloat( _proc, (dao_float) _Atan );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Atan2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float y = (float) DaoValue_TryGetFloat( _p[0] );
  float x = (float) DaoValue_TryGetFloat( _p[1] );

  float _Atan2 = Craft::Atan2( y, x );
  DaoProcess_PutFloat( _proc, (dao_float) _Atan2 );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Min_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int lhs = (int) DaoValue_TryGetInteger( _p[0] );
  int rhs = (int) DaoValue_TryGetInteger( _p[1] );

  int _Min = Craft::Min( lhs, rhs );
  DaoProcess_PutInteger( _proc, (dao_integer) _Min );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Max_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int lhs = (int) DaoValue_TryGetInteger( _p[0] );
  int rhs = (int) DaoValue_TryGetInteger( _p[1] );

  int _Max = Craft::Max( lhs, rhs );
  DaoProcess_PutInteger( _proc, (dao_integer) _Max );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Abs_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int value = (int) DaoValue_TryGetInteger( _p[0] );

  int _Abs = Craft::Abs( value );
  DaoProcess_PutInteger( _proc, (dao_integer) _Abs );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Clamp_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int value = (int) DaoValue_TryGetInteger( _p[0] );
  int min = (int) DaoValue_TryGetInteger( _p[1] );
  int max = (int) DaoValue_TryGetInteger( _p[2] );

  int _Clamp = Craft::Clamp( value, min, max );
  DaoProcess_PutInteger( _proc, (dao_integer) _Clamp );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_IsPowerOfTwo( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int value = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  bool _IsPowerOfTwo = Craft::IsPowerOfTwo( value );
  DaoProcess_PutBoolean( _proc, (dao_boolean) _IsPowerOfTwo );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_NextPowerOfTwo( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int value = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  unsigned int _NextPowerOfTwo = Craft::NextPowerOfTwo( value );
  DaoProcess_PutInteger( _proc, (dao_integer) _NextPowerOfTwo );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_CountSetBits( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int value = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  unsigned int _CountSetBits = Craft::CountSetBits( value );
  DaoProcess_PutInteger( _proc, (dao_integer) _CountSetBits );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_SDBMHash( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int hash = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned char c = (unsigned char) DaoValue_TryGetInteger( _p[1] );

  unsigned int _SDBMHash = Craft::SDBMHash( hash, c );
  DaoProcess_PutInteger( _proc, (dao_integer) _SDBMHash );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Random( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  float _Random = Craft::Random(  );
  DaoProcess_PutFloat( _proc, (dao_float) _Random );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Random_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float range = (float) DaoValue_TryGetFloat( _p[0] );

  float _Random = Craft::Random( range );
  DaoProcess_PutFloat( _proc, (dao_float) _Random );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Random_dao_3( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float min = (float) DaoValue_TryGetFloat( _p[0] );
  float max = (float) DaoValue_TryGetFloat( _p[1] );

  float _Random = Craft::Random( min, max );
  DaoProcess_PutFloat( _proc, (dao_float) _Random );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Random_dao_4( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int range = (int) DaoValue_TryGetInteger( _p[0] );

  int _Random = Craft::Random( range );
  DaoProcess_PutInteger( _proc, (dao_integer) _Random );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Random_dao_5( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int min = (int) DaoValue_TryGetInteger( _p[0] );
  int max = (int) DaoValue_TryGetInteger( _p[1] );

  int _Random = Craft::Random( min, max );
  DaoProcess_PutInteger( _proc, (dao_integer) _Random );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_RandomNormal( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float meanValue = (float) DaoValue_TryGetFloat( _p[0] );
  float variance = (float) DaoValue_TryGetFloat( _p[1] );

  float _RandomNormal = Craft::RandomNormal( meanValue, variance );
  DaoProcess_PutFloat( _proc, (dao_float) _RandomNormal );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_FloatToHalf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float value = (float) DaoValue_TryGetFloat( _p[0] );

  unsigned short _FloatToHalf = Craft::FloatToHalf( value );
  DaoProcess_PutInteger( _proc, (dao_integer) _FloatToHalf );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_HalfToFloat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned short value = (unsigned short) DaoValue_TryGetInteger( _p[0] );

  float _HalfToFloat = Craft::HalfToFloat( value );
  DaoProcess_PutFloat( _proc, (dao_float) _HalfToFloat );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_GetPath( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  DString *__str_fullPath = DaoValue_TryGetString( _p[0] );
  Craft::String fullPath( DString_GetData( __str_fullPath ), DString_Size( __str_fullPath ) );

  Craft::String _GetPath = Craft::GetPath( fullPath );
  DaoProcess_PutBytes( _proc, (char*) _GetPath.CString(), _GetPath.Length() );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_GetFileName( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  DString *__str_fullPath = DaoValue_TryGetString( _p[0] );
  Craft::String fullPath( DString_GetData( __str_fullPath ), DString_Size( __str_fullPath ) );

  Craft::String _GetFileName = Craft::GetFileName( fullPath );
  DaoProcess_PutBytes( _proc, (char*) _GetFileName.CString(), _GetFileName.Length() );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_GetExtension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  DString *__str_fullPath = DaoValue_TryGetString( _p[0] );
  Craft::String fullPath( DString_GetData( __str_fullPath ), DString_Size( __str_fullPath ) );
  bool lowercaseExtension = (bool) DaoValue_TryGetBoolean( _p[1] );

  Craft::String _GetExtension = Craft::GetExtension( fullPath, lowercaseExtension );
  DaoProcess_PutBytes( _proc, (char*) _GetExtension.CString(), _GetExtension.Length() );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_GetFileNameAndExtension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  DString *__str_fullPath = DaoValue_TryGetString( _p[0] );
  Craft::String fullPath( DString_GetData( __str_fullPath ), DString_Size( __str_fullPath ) );
  bool lowercaseExtension = (bool) DaoValue_TryGetBoolean( _p[1] );

  Craft::String _GetFileNameAndExtension = Craft::GetFileNameAndExtension( fullPath, lowercaseExtension );
  DaoProcess_PutBytes( _proc, (char*) _GetFileNameAndExtension.CString(), _GetFileNameAndExtension.Length() );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_ReplaceExtension( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  DString *__str_fullPath = DaoValue_TryGetString( _p[0] );
  Craft::String fullPath( DString_GetData( __str_fullPath ), DString_Size( __str_fullPath ) );
  DString *__str_newExtension = DaoValue_TryGetString( _p[1] );
  Craft::String newExtension( DString_GetData( __str_newExtension ), DString_Size( __str_newExtension ) );

  Craft::String _ReplaceExtension = Craft::ReplaceExtension( fullPath, newExtension );
  DaoProcess_PutBytes( _proc, (char*) _ReplaceExtension.CString(), _ReplaceExtension.Length() );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_AddTrailingSlash( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  DString *__str_pathName = DaoValue_TryGetString( _p[0] );
  Craft::String pathName( DString_GetData( __str_pathName ), DString_Size( __str_pathName ) );

  Craft::String _AddTrailingSlash = Craft::AddTrailingSlash( pathName );
  DaoProcess_PutBytes( _proc, (char*) _AddTrailingSlash.CString(), _AddTrailingSlash.Length() );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_RemoveTrailingSlash( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  DString *__str_pathName = DaoValue_TryGetString( _p[0] );
  Craft::String pathName( DString_GetData( __str_pathName ), DString_Size( __str_pathName ) );

  Craft::String _RemoveTrailingSlash = Craft::RemoveTrailingSlash( pathName );
  DaoProcess_PutBytes( _proc, (char*) _RemoveTrailingSlash.CString(), _RemoveTrailingSlash.Length() );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_GetParentPath( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  DString *__str_pathName = DaoValue_TryGetString( _p[0] );
  Craft::String pathName( DString_GetData( __str_pathName ), DString_Size( __str_pathName ) );

  Craft::String _GetParentPath = Craft::GetParentPath( pathName );
  DaoProcess_PutBytes( _proc, (char*) _GetParentPath.CString(), _GetParentPath.Length() );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_GetInternalPath( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  DString *__str_pathName = DaoValue_TryGetString( _p[0] );
  Craft::String pathName( DString_GetData( __str_pathName ), DString_Size( __str_pathName ) );

  Craft::String _GetInternalPath = Craft::GetInternalPath( pathName );
  DaoProcess_PutBytes( _proc, (char*) _GetInternalPath.CString(), _GetInternalPath.Length() );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_GetNativePath( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  DString *__str_pathName = DaoValue_TryGetString( _p[0] );
  Craft::String pathName( DString_GetData( __str_pathName ), DString_Size( __str_pathName ) );

  Craft::String _GetNativePath = Craft::GetNativePath( pathName );
  DaoProcess_PutBytes( _proc, (char*) _GetNativePath.CString(), _GetNativePath.Length() );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_IsAbsolutePath( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  DString *__str_pathName = DaoValue_TryGetString( _p[0] );
  Craft::String pathName( DString_GetData( __str_pathName ), DString_Size( __str_pathName ) );

  bool _IsAbsolutePath = Craft::IsAbsolutePath( pathName );
  DaoProcess_PutBoolean( _proc, (dao_boolean) _IsAbsolutePath );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_IsAbsoluteParentPath( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  DString *__str_absParentPath = DaoValue_TryGetString( _p[0] );
  Craft::String absParentPath( DString_GetData( __str_absParentPath ), DString_Size( __str_absParentPath ) );
  DString *__str_fullPath = DaoValue_TryGetString( _p[1] );
  Craft::String fullPath( DString_GetData( __str_fullPath ), DString_Size( __str_fullPath ) );

  bool _IsAbsoluteParentPath = Craft::IsAbsoluteParentPath( absParentPath, fullPath );
  DaoProcess_PutBoolean( _proc, (dao_boolean) _IsAbsoluteParentPath );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_EstimateCompressBound( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int srcSize = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  unsigned int _EstimateCompressBound = Craft::EstimateCompressBound( srcSize );
  DaoProcess_PutInteger( _proc, (dao_integer) _EstimateCompressBound );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_CompressData( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* dest = (void*) DaoValue_TryGetCdata( _p[0] );
  const void* src = (const void*) DaoValue_TryGetCdata( _p[1] );
  unsigned int srcSize = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  unsigned int _CompressData = Craft::CompressData( dest, src, srcSize );
  DaoProcess_PutInteger( _proc, (dao_integer) _CompressData );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_DecompressData( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* dest = (void*) DaoValue_TryGetCdata( _p[0] );
  const void* src = (const void*) DaoValue_TryGetCdata( _p[1] );
  unsigned int destSize = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  unsigned int _DecompressData = Craft::DecompressData( dest, src, destSize );
  DaoProcess_PutInteger( _proc, (dao_integer) _DecompressData );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_CompressStream( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  Craft::Serializer* dest = (Craft::Serializer*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Serializer_Core );
  Craft::Deserializer* src = (Craft::Deserializer*) DaoValue_TryCastCdataTC( _p[1], dao_Craft_Deserializer_Core );

  bool _CompressStream = Craft::CompressStream( *dest, *src );
  DaoProcess_PutBoolean( _proc, (dao_boolean) _CompressStream );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_DecompressStream( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  Craft::Serializer* dest = (Craft::Serializer*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Serializer_Core );
  Craft::Deserializer* src = (Craft::Deserializer*) DaoValue_TryCastCdataTC( _p[1], dao_Craft_Deserializer_Core );

  bool _DecompressStream = Craft::DecompressStream( *dest, *src );
  DaoProcess_PutBoolean( _proc, (dao_boolean) _DecompressStream );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_SetRandomSeed( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int seed = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  Craft::SetRandomSeed( seed );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_GetRandomSeed( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  unsigned int _GetRandomSeed = Craft::GetRandomSeed(  );
  DaoProcess_PutInteger( _proc, (dao_integer) _GetRandomSeed );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_Rand( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  int _Rand = Craft::Rand(  );
  DaoProcess_PutInteger( _proc, (dao_integer) _Rand );
}
/* DaoCraftEngineMod.cpp */
static void dao_Craft_RandStandardNormal( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  float _RandStandardNormal = Craft::RandStandardNormal(  );
  DaoProcess_PutFloat( _proc, (dao_float) _RandStandardNormal );
}

#ifdef __cplusplus
}
#endif

static DaoNumberEntry dao_Craft_Nums[] = 
{
  { "OUTSIDE", DAO_INTEGER, Craft::OUTSIDE },
  { "INTERSECTS", DAO_INTEGER, Craft::INTERSECTS },
  { "INSIDE", DAO_INTEGER, Craft::INSIDE },
  { "VAR_NONE", DAO_INTEGER, Craft::VAR_NONE },
  { "VAR_INT", DAO_INTEGER, Craft::VAR_INT },
  { "VAR_BOOL", DAO_INTEGER, Craft::VAR_BOOL },
  { "VAR_FLOAT", DAO_INTEGER, Craft::VAR_FLOAT },
  { "VAR_VECTOR2", DAO_INTEGER, Craft::VAR_VECTOR2 },
  { "VAR_VECTOR3", DAO_INTEGER, Craft::VAR_VECTOR3 },
  { "VAR_VECTOR4", DAO_INTEGER, Craft::VAR_VECTOR4 },
  { "VAR_QUATERNION", DAO_INTEGER, Craft::VAR_QUATERNION },
  { "VAR_COLOR", DAO_INTEGER, Craft::VAR_COLOR },
  { "VAR_STRING", DAO_INTEGER, Craft::VAR_STRING },
  { "VAR_BUFFER", DAO_INTEGER, Craft::VAR_BUFFER },
  { "VAR_VOIDPTR", DAO_INTEGER, Craft::VAR_VOIDPTR },
  { "VAR_RESOURCEREF", DAO_INTEGER, Craft::VAR_RESOURCEREF },
  { "VAR_RESOURCEREFLIST", DAO_INTEGER, Craft::VAR_RESOURCEREFLIST },
  { "VAR_VARIANTVECTOR", DAO_INTEGER, Craft::VAR_VARIANTVECTOR },
  { "VAR_VARIANTMAP", DAO_INTEGER, Craft::VAR_VARIANTMAP },
  { "VAR_INTRECT", DAO_INTEGER, Craft::VAR_INTRECT },
  { "VAR_INTVECTOR2", DAO_INTEGER, Craft::VAR_INTVECTOR2 },
  { "VAR_PTR", DAO_INTEGER, Craft::VAR_PTR },
  { "VAR_MATRIX3", DAO_INTEGER, Craft::VAR_MATRIX3 },
  { "VAR_MATRIX3X4", DAO_INTEGER, Craft::VAR_MATRIX3X4 },
  { "VAR_MATRIX4", DAO_INTEGER, Craft::VAR_MATRIX4 },
  { "VAR_DOUBLE", DAO_INTEGER, Craft::VAR_DOUBLE },
  { "VAR_STRINGVECTOR", DAO_INTEGER, Craft::VAR_STRINGVECTOR },
  { "MAX_VAR_TYPES", DAO_INTEGER, Craft::MAX_VAR_TYPES },
  { "BEZIER_CURVE", DAO_INTEGER, Craft::BEZIER_CURVE },
  { "CATMULL_ROM_CURVE", DAO_INTEGER, Craft::CATMULL_ROM_CURVE },
  { "LINEAR_CURVE", DAO_INTEGER, Craft::LINEAR_CURVE },
  { "CATMULL_ROM_FULL_CURVE", DAO_INTEGER, Craft::CATMULL_ROM_FULL_CURVE },
  { "FILE_READ", DAO_INTEGER, Craft::FILE_READ },
  { "FILE_WRITE", DAO_INTEGER, Craft::FILE_WRITE },
  { "FILE_READWRITE", DAO_INTEGER, Craft::FILE_READWRITE },
  { "ASYNC_DONE", DAO_INTEGER, Craft::ASYNC_DONE },
  { "ASYNC_QUEUED", DAO_INTEGER, Craft::ASYNC_QUEUED },
  { "ASYNC_LOADING", DAO_INTEGER, Craft::ASYNC_LOADING },
  { "ASYNC_SUCCESS", DAO_INTEGER, Craft::ASYNC_SUCCESS },
  { "ASYNC_FAIL", DAO_INTEGER, Craft::ASYNC_FAIL },
  { "CF_NONE", DAO_INTEGER, Craft::CF_NONE },
  { "CF_RGBA", DAO_INTEGER, Craft::CF_RGBA },
  { "CF_DXT1", DAO_INTEGER, Craft::CF_DXT1 },
  { "CF_DXT3", DAO_INTEGER, Craft::CF_DXT3 },
  { "CF_DXT5", DAO_INTEGER, Craft::CF_DXT5 },
  { "CF_ETC1", DAO_INTEGER, Craft::CF_ETC1 },
  { "CF_PVRTC_RGB_2BPP", DAO_INTEGER, Craft::CF_PVRTC_RGB_2BPP },
  { "CF_PVRTC_RGBA_2BPP", DAO_INTEGER, Craft::CF_PVRTC_RGBA_2BPP },
  { "CF_PVRTC_RGB_4BPP", DAO_INTEGER, Craft::CF_PVRTC_RGB_4BPP },
  { "CF_PVRTC_RGBA_4BPP", DAO_INTEGER, Craft::CF_PVRTC_RGBA_4BPP },
  { "IM_LINEAR", DAO_INTEGER, Craft::IM_LINEAR },
  { "IM_SPLINE", DAO_INTEGER, Craft::IM_SPLINE },
  { "WM_LOOP", DAO_INTEGER, Craft::WM_LOOP },
  { "WM_ONCE", DAO_INTEGER, Craft::WM_ONCE },
  { "WM_CLAMP", DAO_INTEGER, Craft::WM_CLAMP },
  { "REMOVE_DISABLED", DAO_INTEGER, Craft::REMOVE_DISABLED },
  { "REMOVE_COMPONENT", DAO_INTEGER, Craft::REMOVE_COMPONENT },
  { "REMOVE_NODE", DAO_INTEGER, Craft::REMOVE_NODE },
  { "REPLICATED", DAO_INTEGER, Craft::REPLICATED },
  { "LOCAL", DAO_INTEGER, Craft::LOCAL },
  { "TS_LOCAL", DAO_INTEGER, Craft::TS_LOCAL },
  { "TS_PARENT", DAO_INTEGER, Craft::TS_PARENT },
  { "TS_WORLD", DAO_INTEGER, Craft::TS_WORLD },
  { "LOAD_RESOURCES_ONLY", DAO_INTEGER, Craft::LOAD_RESOURCES_ONLY },
  { "LOAD_SCENE", DAO_INTEGER, Craft::LOAD_SCENE },
  { "LOAD_SCENE_AND_RESOURCES", DAO_INTEGER, Craft::LOAD_SCENE_AND_RESOURCES },
  { "TRIANGLE_LIST", DAO_INTEGER, Craft::TRIANGLE_LIST },
  { "LINE_LIST", DAO_INTEGER, Craft::LINE_LIST },
  { "POINT_LIST", DAO_INTEGER, Craft::POINT_LIST },
  { "TRIANGLE_STRIP", DAO_INTEGER, Craft::TRIANGLE_STRIP },
  { "LINE_STRIP", DAO_INTEGER, Craft::LINE_STRIP },
  { "TRIANGLE_FAN", DAO_INTEGER, Craft::TRIANGLE_FAN },
  { "GEOM_STATIC", DAO_INTEGER, Craft::GEOM_STATIC },
  { "GEOM_SKINNED", DAO_INTEGER, Craft::GEOM_SKINNED },
  { "GEOM_INSTANCED", DAO_INTEGER, Craft::GEOM_INSTANCED },
  { "GEOM_BILLBOARD", DAO_INTEGER, Craft::GEOM_BILLBOARD },
  { "GEOM_STATIC_NOINSTANCING", DAO_INTEGER, Craft::GEOM_STATIC_NOINSTANCING },
  { "MAX_GEOMETRYTYPES", DAO_INTEGER, Craft::MAX_GEOMETRYTYPES },
  { "BLEND_REPLACE", DAO_INTEGER, Craft::BLEND_REPLACE },
  { "BLEND_ADD", DAO_INTEGER, Craft::BLEND_ADD },
  { "BLEND_MULTIPLY", DAO_INTEGER, Craft::BLEND_MULTIPLY },
  { "BLEND_ALPHA", DAO_INTEGER, Craft::BLEND_ALPHA },
  { "BLEND_ADDALPHA", DAO_INTEGER, Craft::BLEND_ADDALPHA },
  { "BLEND_PREMULALPHA", DAO_INTEGER, Craft::BLEND_PREMULALPHA },
  { "BLEND_INVDESTALPHA", DAO_INTEGER, Craft::BLEND_INVDESTALPHA },
  { "BLEND_SUBTRACT", DAO_INTEGER, Craft::BLEND_SUBTRACT },
  { "BLEND_SUBTRACTALPHA", DAO_INTEGER, Craft::BLEND_SUBTRACTALPHA },
  { "MAX_BLENDMODES", DAO_INTEGER, Craft::MAX_BLENDMODES },
  { "CMP_ALWAYS", DAO_INTEGER, Craft::CMP_ALWAYS },
  { "CMP_EQUAL", DAO_INTEGER, Craft::CMP_EQUAL },
  { "CMP_NOTEQUAL", DAO_INTEGER, Craft::CMP_NOTEQUAL },
  { "CMP_LESS", DAO_INTEGER, Craft::CMP_LESS },
  { "CMP_LESSEQUAL", DAO_INTEGER, Craft::CMP_LESSEQUAL },
  { "CMP_GREATER", DAO_INTEGER, Craft::CMP_GREATER },
  { "CMP_GREATEREQUAL", DAO_INTEGER, Craft::CMP_GREATEREQUAL },
  { "MAX_COMPAREMODES", DAO_INTEGER, Craft::MAX_COMPAREMODES },
  { "CULL_NONE", DAO_INTEGER, Craft::CULL_NONE },
  { "CULL_CCW", DAO_INTEGER, Craft::CULL_CCW },
  { "CULL_CW", DAO_INTEGER, Craft::CULL_CW },
  { "MAX_CULLMODES", DAO_INTEGER, Craft::MAX_CULLMODES },
  { "FILL_SOLID", DAO_INTEGER, Craft::FILL_SOLID },
  { "FILL_WIREFRAME", DAO_INTEGER, Craft::FILL_WIREFRAME },
  { "FILL_POINT", DAO_INTEGER, Craft::FILL_POINT },
  { "OP_KEEP", DAO_INTEGER, Craft::OP_KEEP },
  { "OP_ZERO", DAO_INTEGER, Craft::OP_ZERO },
  { "OP_REF", DAO_INTEGER, Craft::OP_REF },
  { "OP_INCR", DAO_INTEGER, Craft::OP_INCR },
  { "OP_DECR", DAO_INTEGER, Craft::OP_DECR },
  { "FILTER_NEAREST", DAO_INTEGER, Craft::FILTER_NEAREST },
  { "FILTER_BILINEAR", DAO_INTEGER, Craft::FILTER_BILINEAR },
  { "FILTER_TRILINEAR", DAO_INTEGER, Craft::FILTER_TRILINEAR },
  { "FILTER_ANISOTROPIC", DAO_INTEGER, Craft::FILTER_ANISOTROPIC },
  { "FILTER_DEFAULT", DAO_INTEGER, Craft::FILTER_DEFAULT },
  { "MAX_FILTERMODES", DAO_INTEGER, Craft::MAX_FILTERMODES },
  { "ADDRESS_WRAP", DAO_INTEGER, Craft::ADDRESS_WRAP },
  { "ADDRESS_MIRROR", DAO_INTEGER, Craft::ADDRESS_MIRROR },
  { "ADDRESS_CLAMP", DAO_INTEGER, Craft::ADDRESS_CLAMP },
  { "ADDRESS_BORDER", DAO_INTEGER, Craft::ADDRESS_BORDER },
  { "MAX_ADDRESSMODES", DAO_INTEGER, Craft::MAX_ADDRESSMODES },
  { "COORD_U", DAO_INTEGER, Craft::COORD_U },
  { "COORD_V", DAO_INTEGER, Craft::COORD_V },
  { "COORD_W", DAO_INTEGER, Craft::COORD_W },
  { "MAX_COORDS", DAO_INTEGER, Craft::MAX_COORDS },
  { "TEXTURE_STATIC", DAO_INTEGER, Craft::TEXTURE_STATIC },
  { "TEXTURE_DYNAMIC", DAO_INTEGER, Craft::TEXTURE_DYNAMIC },
  { "TEXTURE_RENDERTARGET", DAO_INTEGER, Craft::TEXTURE_RENDERTARGET },
  { "TEXTURE_DEPTHSTENCIL", DAO_INTEGER, Craft::TEXTURE_DEPTHSTENCIL },
  { "FACE_POSITIVE_X", DAO_INTEGER, Craft::FACE_POSITIVE_X },
  { "FACE_NEGATIVE_X", DAO_INTEGER, Craft::FACE_NEGATIVE_X },
  { "FACE_POSITIVE_Y", DAO_INTEGER, Craft::FACE_POSITIVE_Y },
  { "FACE_NEGATIVE_Y", DAO_INTEGER, Craft::FACE_NEGATIVE_Y },
  { "FACE_POSITIVE_Z", DAO_INTEGER, Craft::FACE_POSITIVE_Z },
  { "FACE_NEGATIVE_Z", DAO_INTEGER, Craft::FACE_NEGATIVE_Z },
  { "MAX_CUBEMAP_FACES", DAO_INTEGER, Craft::MAX_CUBEMAP_FACES },
  { "CML_HORIZONTAL", DAO_INTEGER, Craft::CML_HORIZONTAL },
  { "CML_HORIZONTALNVIDIA", DAO_INTEGER, Craft::CML_HORIZONTALNVIDIA },
  { "CML_HORIZONTALCROSS", DAO_INTEGER, Craft::CML_HORIZONTALCROSS },
  { "CML_VERTICALCROSS", DAO_INTEGER, Craft::CML_VERTICALCROSS },
  { "CML_BLENDER", DAO_INTEGER, Craft::CML_BLENDER },
  { "SURFACE_MANUALUPDATE", DAO_INTEGER, Craft::SURFACE_MANUALUPDATE },
  { "SURFACE_UPDATEVISIBLE", DAO_INTEGER, Craft::SURFACE_UPDATEVISIBLE },
  { "SURFACE_UPDATEALWAYS", DAO_INTEGER, Craft::SURFACE_UPDATEALWAYS },
  { "VS", DAO_INTEGER, Craft::VS },
  { "PS", DAO_INTEGER, Craft::PS },
  { "SP_FRAME", DAO_INTEGER, Craft::SP_FRAME },
  { "SP_CAMERA", DAO_INTEGER, Craft::SP_CAMERA },
  { "SP_ZONE", DAO_INTEGER, Craft::SP_ZONE },
  { "SP_LIGHT", DAO_INTEGER, Craft::SP_LIGHT },
  { "SP_MATERIAL", DAO_INTEGER, Craft::SP_MATERIAL },
  { "SP_OBJECT", DAO_INTEGER, Craft::SP_OBJECT },
  { "SP_CUSTOM", DAO_INTEGER, Craft::SP_CUSTOM },
  { "MAX_SHADER_PARAMETER_GROUPS", DAO_INTEGER, Craft::MAX_SHADER_PARAMETER_GROUPS },
  { "TU_DIFFUSE", DAO_INTEGER, Craft::TU_DIFFUSE },
  { "TU_ALBEDOBUFFER", DAO_INTEGER, Craft::TU_ALBEDOBUFFER },
  { "TU_NORMAL", DAO_INTEGER, Craft::TU_NORMAL },
  { "TU_NORMALBUFFER", DAO_INTEGER, Craft::TU_NORMALBUFFER },
  { "TU_SPECULAR", DAO_INTEGER, Craft::TU_SPECULAR },
  { "TU_EMISSIVE", DAO_INTEGER, Craft::TU_EMISSIVE },
  { "TU_ENVIRONMENT", DAO_INTEGER, Craft::TU_ENVIRONMENT },
  { "FC_NONE", DAO_INTEGER, Craft::FC_NONE },
  { "FC_ROTATE_XYZ", DAO_INTEGER, Craft::FC_ROTATE_XYZ },
  { "FC_ROTATE_Y", DAO_INTEGER, Craft::FC_ROTATE_Y },
  { "FC_LOOKAT_XYZ", DAO_INTEGER, Craft::FC_LOOKAT_XYZ },
  { "FC_LOOKAT_Y", DAO_INTEGER, Craft::FC_LOOKAT_Y },
  { "SHADOWQUALITY_SIMPLE_16BIT", DAO_INTEGER, Craft::SHADOWQUALITY_SIMPLE_16BIT },
  { "SHADOWQUALITY_SIMPLE_24BIT", DAO_INTEGER, Craft::SHADOWQUALITY_SIMPLE_24BIT },
  { "SHADOWQUALITY_PCF_16BIT", DAO_INTEGER, Craft::SHADOWQUALITY_PCF_16BIT },
  { "SHADOWQUALITY_PCF_24BIT", DAO_INTEGER, Craft::SHADOWQUALITY_PCF_24BIT },
  { "SHADOWQUALITY_VSM", DAO_INTEGER, Craft::SHADOWQUALITY_VSM },
  { "SHADOWQUALITY_BLUR_VSM", DAO_INTEGER, Craft::SHADOWQUALITY_BLUR_VSM },
  { "LIGHT_DIRECTIONAL", DAO_INTEGER, Craft::LIGHT_DIRECTIONAL },
  { "LIGHT_SPOT", DAO_INTEGER, Craft::LIGHT_SPOT },
  { "LIGHT_POINT", DAO_INTEGER, Craft::LIGHT_POINT },
  { "LIGHTING_UNLIT", DAO_INTEGER, Craft::LIGHTING_UNLIT },
  { "LIGHTING_PERVERTEX", DAO_INTEGER, Craft::LIGHTING_PERVERTEX },
  { "LIGHTING_PERPIXEL", DAO_INTEGER, Craft::LIGHTING_PERPIXEL },
  { "UPDATE_NONE", DAO_INTEGER, Craft::UPDATE_NONE },
  { "UPDATE_MAIN_THREAD", DAO_INTEGER, Craft::UPDATE_MAIN_THREAD },
  { "UPDATE_WORKER_THREAD", DAO_INTEGER, Craft::UPDATE_WORKER_THREAD },
  { "CMD_NONE", DAO_INTEGER, Craft::CMD_NONE },
  { "CMD_CLEAR", DAO_INTEGER, Craft::CMD_CLEAR },
  { "CMD_SCENEPASS", DAO_INTEGER, Craft::CMD_SCENEPASS },
  { "CMD_QUAD", DAO_INTEGER, Craft::CMD_QUAD },
  { "CMD_FORWARDLIGHTS", DAO_INTEGER, Craft::CMD_FORWARDLIGHTS },
  { "CMD_LIGHTVOLUMES", DAO_INTEGER, Craft::CMD_LIGHTVOLUMES },
  { "CMD_RENDERUI", DAO_INTEGER, Craft::CMD_RENDERUI },
  { "SORT_FRONTTOBACK", DAO_INTEGER, Craft::SORT_FRONTTOBACK },
  { "SORT_BACKTOFRONT", DAO_INTEGER, Craft::SORT_BACKTOFRONT },
  { "SIZE_ABSOLUTE", DAO_INTEGER, Craft::SIZE_ABSOLUTE },
  { "SIZE_VIEWPORTDIVISOR", DAO_INTEGER, Craft::SIZE_VIEWPORTDIVISOR },
  { "SIZE_VIEWPORTMULTIPLIER", DAO_INTEGER, Craft::SIZE_VIEWPORTMULTIPLIER },
  { "RAY_AABB", DAO_INTEGER, Craft::RAY_AABB },
  { "RAY_OBB", DAO_INTEGER, Craft::RAY_OBB },
  { "RAY_TRIANGLE", DAO_INTEGER, Craft::RAY_TRIANGLE },
  { "RAY_TRIANGLE_UV", DAO_INTEGER, Craft::RAY_TRIANGLE_UV },
  { "EMITTER_SPHERE", DAO_INTEGER, Craft::EMITTER_SPHERE },
  { "EMITTER_BOX", DAO_INTEGER, Craft::EMITTER_BOX },
  { "MM_ABSOLUTE", DAO_INTEGER, Craft::MM_ABSOLUTE },
  { "MM_RELATIVE", DAO_INTEGER, Craft::MM_RELATIVE },
  { "MM_WRAP", DAO_INTEGER, Craft::MM_WRAP },
  { "MM_FREE", DAO_INTEGER, Craft::MM_FREE },
  { "COLLISION_NEVER", DAO_INTEGER, Craft::COLLISION_NEVER },
  { "COLLISION_ACTIVE", DAO_INTEGER, Craft::COLLISION_ACTIVE },
  { "COLLISION_ALWAYS", DAO_INTEGER, Craft::COLLISION_ALWAYS },
  { "SHAPE_BOX", DAO_INTEGER, Craft::SHAPE_BOX },
  { "SHAPE_SPHERE", DAO_INTEGER, Craft::SHAPE_SPHERE },
  { "SHAPE_STATICPLANE", DAO_INTEGER, Craft::SHAPE_STATICPLANE },
  { "SHAPE_CYLINDER", DAO_INTEGER, Craft::SHAPE_CYLINDER },
  { "SHAPE_CAPSULE", DAO_INTEGER, Craft::SHAPE_CAPSULE },
  { "SHAPE_CONE", DAO_INTEGER, Craft::SHAPE_CONE },
  { "SHAPE_TRIANGLEMESH", DAO_INTEGER, Craft::SHAPE_TRIANGLEMESH },
  { "SHAPE_CONVEXHULL", DAO_INTEGER, Craft::SHAPE_CONVEXHULL },
  { "SHAPE_TERRAIN", DAO_INTEGER, Craft::SHAPE_TERRAIN },
  { "CONSTRAINT_FIXED", DAO_INTEGER, Craft::CONSTRAINT_FIXED },
  { "CONSTRAINT_POINT", DAO_INTEGER, Craft::CONSTRAINT_POINT },
  { "CONSTRAINT_HINGE", DAO_INTEGER, Craft::CONSTRAINT_HINGE },
  { "CONSTRAINT_SLIDER", DAO_INTEGER, Craft::CONSTRAINT_SLIDER },
  { "CONSTRAINT_CONETWIST", DAO_INTEGER, Craft::CONSTRAINT_CONETWIST },
  { "MATH_PI", DAO_FLOAT, Craft::MATH_PI },
  { "MATH_HALF_PI", DAO_FLOAT, Craft::MATH_HALF_PI },
  { "MATH_MIN_INT", DAO_INTEGER, Craft::MATH_MIN_INT },
  { "MATH_MAX_INT", DAO_INTEGER, Craft::MATH_MAX_INT },
  { "MATH_MIN_UNSIGNED", DAO_INTEGER, Craft::MATH_MIN_UNSIGNED },
  { "MATH_MAX_UNSIGNED", DAO_INTEGER, Craft::MATH_MAX_UNSIGNED },
  { "MATH_EPSILON", DAO_FLOAT, Craft::MATH_EPSILON },
  { "MATH_LARGE_EPSILON", DAO_FLOAT, Craft::MATH_LARGE_EPSILON },
  { "MATH_MIN_NEARCLIP", DAO_FLOAT, Craft::MATH_MIN_NEARCLIP },
  { "MATH_MAX_FOV", DAO_FLOAT, Craft::MATH_MAX_FOV },
  { "MATH_LARGE_VALUE", DAO_FLOAT, Craft::MATH_LARGE_VALUE },
  { "MATH_INFINITY", DAO_FLOAT, Craft::MATH_INFINITY },
  { "MATH_DEGTORAD", DAO_FLOAT, Craft::MATH_DEGTORAD },
  { "MATH_DEGTORAD_2", DAO_FLOAT, Craft::MATH_DEGTORAD_2 },
  { "MATH_RADTODEG", DAO_FLOAT, Craft::MATH_RADTODEG },
  { "SCAN_FILES", DAO_INTEGER, Craft::SCAN_FILES },
  { "SCAN_DIRS", DAO_INTEGER, Craft::SCAN_DIRS },
  { "SCAN_HIDDEN", DAO_INTEGER, Craft::SCAN_HIDDEN },
  { "QUALITY_LOW", DAO_INTEGER, Craft::QUALITY_LOW },
  { "QUALITY_MEDIUM", DAO_INTEGER, Craft::QUALITY_MEDIUM },
  { "QUALITY_HIGH", DAO_INTEGER, Craft::QUALITY_HIGH },
  { "QUALITY_MAX", DAO_INTEGER, Craft::QUALITY_MAX },
  { "NUM_OCTANTS", DAO_INTEGER, Craft::NUM_OCTANTS },
  { "ROOT_INDEX", DAO_INTEGER, Craft::ROOT_INDEX },
  { "CHANNEL_POSITION", DAO_INTEGER, Craft::CHANNEL_POSITION },
  { "CHANNEL_ROTATION", DAO_INTEGER, Craft::CHANNEL_ROTATION },
  { "CHANNEL_SCALE", DAO_INTEGER, Craft::CHANNEL_SCALE },
  { "STREAM_BUFFER_LENGTH", DAO_INTEGER, Craft::STREAM_BUFFER_LENGTH },
  { "DEBUGHUD_SHOW_NONE", DAO_INTEGER, Craft::DEBUGHUD_SHOW_NONE },
  { "DEBUGHUD_SHOW_STATS", DAO_INTEGER, Craft::DEBUGHUD_SHOW_STATS },
  { "DEBUGHUD_SHOW_MODE", DAO_INTEGER, Craft::DEBUGHUD_SHOW_MODE },
  { "DEBUGHUD_SHOW_PROFILER", DAO_INTEGER, Craft::DEBUGHUD_SHOW_PROFILER },
  { "DEBUGHUD_SHOW_ALL", DAO_INTEGER, Craft::DEBUGHUD_SHOW_ALL },
  { NULL, 0, 0 }
};

#ifdef __cplusplus
extern "C"{
#endif

static DaoFunctionEntry dao_Craft_UIKit_Funcs[] = 
{
  { NULL, NULL }
};


#ifdef __cplusplus
}
#endif

static DaoNumberEntry dao_Craft_UIKit_Nums[] = 
{
  { "UI_WIDGET_VISIBILITY_VISIBLE", DAO_INTEGER, Craft::UIKit::UI_WIDGET_VISIBILITY_VISIBLE },
  { "UI_WIDGET_VISIBILITY_INVISIBLE", DAO_INTEGER, Craft::UIKit::UI_WIDGET_VISIBILITY_INVISIBLE },
  { "UI_WIDGET_VISIBILITY_GONE", DAO_INTEGER, Craft::UIKit::UI_WIDGET_VISIBILITY_GONE },
  { "UI_GRAVITY_NONE", DAO_INTEGER, Craft::UIKit::UI_GRAVITY_NONE },
  { "UI_GRAVITY_LEFT", DAO_INTEGER, Craft::UIKit::UI_GRAVITY_LEFT },
  { "UI_GRAVITY_RIGHT", DAO_INTEGER, Craft::UIKit::UI_GRAVITY_RIGHT },
  { "UI_GRAVITY_TOP", DAO_INTEGER, Craft::UIKit::UI_GRAVITY_TOP },
  { "UI_GRAVITY_BOTTOM", DAO_INTEGER, Craft::UIKit::UI_GRAVITY_BOTTOM },
  { "UI_GRAVITY_LEFT_RIGHT", DAO_INTEGER, Craft::UIKit::UI_GRAVITY_LEFT_RIGHT },
  { "UI_GRAVITY_TOP_BOTTOM", DAO_INTEGER, Craft::UIKit::UI_GRAVITY_TOP_BOTTOM },
  { "UI_GRAVITY_ALL", DAO_INTEGER, Craft::UIKit::UI_GRAVITY_ALL },
  { "UI_GRAVITY_DEFAULT", DAO_INTEGER, Craft::UIKit::UI_GRAVITY_DEFAULT },
  { "UI_EVENT_TYPE_CLICK", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_CLICK },
  { "UI_EVENT_TYPE_LONG_CLICK", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_LONG_CLICK },
  { "UI_EVENT_TYPE_POINTER_DOWN", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_POINTER_DOWN },
  { "UI_EVENT_TYPE_POINTER_UP", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_POINTER_UP },
  { "UI_EVENT_TYPE_POINTER_MOVE", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_POINTER_MOVE },
  { "UI_EVENT_TYPE_RIGHT_POINTER_DOWN", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_RIGHT_POINTER_DOWN },
  { "UI_EVENT_TYPE_RIGHT_POINTER_UP", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_RIGHT_POINTER_UP },
  { "UI_EVENT_TYPE_WHEEL", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_WHEEL },
  { "UI_EVENT_TYPE_CHANGED", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_CHANGED },
  { "UI_EVENT_TYPE_KEY_DOWN", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_KEY_DOWN },
  { "UI_EVENT_TYPE_KEY_UP", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_KEY_UP },
  { "UI_EVENT_TYPE_SHORTCUT", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_SHORTCUT },
  { "UI_EVENT_TYPE_CONTEXT_MENU", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_CONTEXT_MENU },
  { "UI_EVENT_TYPE_FILE_DROP", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_FILE_DROP },
  { "UI_EVENT_TYPE_TAB_CHANGED", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_TAB_CHANGED },
  { "UI_EVENT_TYPE_CUSTOM", DAO_INTEGER, Craft::UIKit::UI_EVENT_TYPE_CUSTOM },
  { "UI_WIDGET_Z_REL_BEFORE", DAO_INTEGER, Craft::UIKit::UI_WIDGET_Z_REL_BEFORE },
  { "UI_WIDGET_Z_REL_AFTER", DAO_INTEGER, Craft::UIKit::UI_WIDGET_Z_REL_AFTER },
  { "UI_TEXT_ALIGN_LEFT", DAO_INTEGER, Craft::UIKit::UI_TEXT_ALIGN_LEFT },
  { "UI_TEXT_ALIGN_RIGHT", DAO_INTEGER, Craft::UIKit::UI_TEXT_ALIGN_RIGHT },
  { "UI_TEXT_ALIGN_CENTER", DAO_INTEGER, Craft::UIKit::UI_TEXT_ALIGN_CENTER },
  { "UI_WIDGET_STATE_NONE", DAO_INTEGER, Craft::UIKit::UI_WIDGET_STATE_NONE },
  { "UI_WIDGET_STATE_DISABLED", DAO_INTEGER, Craft::UIKit::UI_WIDGET_STATE_DISABLED },
  { "UI_WIDGET_STATE_FOCUSED", DAO_INTEGER, Craft::UIKit::UI_WIDGET_STATE_FOCUSED },
  { "UI_WIDGET_STATE_PRESSED", DAO_INTEGER, Craft::UIKit::UI_WIDGET_STATE_PRESSED },
  { "UI_WIDGET_STATE_SELECTED", DAO_INTEGER, Craft::UIKit::UI_WIDGET_STATE_SELECTED },
  { "UI_WIDGET_STATE_HOVERED", DAO_INTEGER, Craft::UIKit::UI_WIDGET_STATE_HOVERED },
  { "UI_WIDGET_STATE_ALL", DAO_INTEGER, Craft::UIKit::UI_WIDGET_STATE_ALL },
  { "UI_AXIS_X", DAO_INTEGER, Craft::UIKit::UI_AXIS_X },
  { "UI_AXIS_Y", DAO_INTEGER, Craft::UIKit::UI_AXIS_Y },
  { "UI_SIZE_DEP_NONE", DAO_INTEGER, Craft::UIKit::UI_SIZE_DEP_NONE },
  { "UI_SIZE_DEP_WIDTH_DEPEND_ON_HEIGHT", DAO_INTEGER, Craft::UIKit::UI_SIZE_DEP_WIDTH_DEPEND_ON_HEIGHT },
  { "UI_SIZE_DEP_HEIGHT_DEPEND_ON_WIDTH", DAO_INTEGER, Craft::UIKit::UI_SIZE_DEP_HEIGHT_DEPEND_ON_WIDTH },
  { "UI_SIZE_DEP_BOTH", DAO_INTEGER, Craft::UIKit::UI_SIZE_DEP_BOTH },
  { "UI_EDIT_TYPE_TEXT", DAO_INTEGER, Craft::UIKit::UI_EDIT_TYPE_TEXT },
  { "UI_EDIT_TYPE_SEARCH", DAO_INTEGER, Craft::UIKit::UI_EDIT_TYPE_SEARCH },
  { "UI_EDIT_TYPE_PASSWORD", DAO_INTEGER, Craft::UIKit::UI_EDIT_TYPE_PASSWORD },
  { "UI_EDIT_TYPE_EMAIL", DAO_INTEGER, Craft::UIKit::UI_EDIT_TYPE_EMAIL },
  { "UI_EDIT_TYPE_PHONE", DAO_INTEGER, Craft::UIKit::UI_EDIT_TYPE_PHONE },
  { "UI_EDIT_TYPE_URL", DAO_INTEGER, Craft::UIKit::UI_EDIT_TYPE_URL },
  { "UI_EDIT_TYPE_NUMBER", DAO_INTEGER, Craft::UIKit::UI_EDIT_TYPE_NUMBER },
  { "UI_LAYOUT_SIZE_GRAVITY", DAO_INTEGER, Craft::UIKit::UI_LAYOUT_SIZE_GRAVITY },
  { "UI_LAYOUT_SIZE_PREFERRED", DAO_INTEGER, Craft::UIKit::UI_LAYOUT_SIZE_PREFERRED },
  { "UI_LAYOUT_SIZE_AVAILABLE", DAO_INTEGER, Craft::UIKit::UI_LAYOUT_SIZE_AVAILABLE },
  { "UI_LAYOUT_DISTRIBUTION_PREFERRED", DAO_INTEGER, Craft::UIKit::UI_LAYOUT_DISTRIBUTION_PREFERRED },
  { "UI_LAYOUT_DISTRIBUTION_AVAILABLE", DAO_INTEGER, Craft::UIKit::UI_LAYOUT_DISTRIBUTION_AVAILABLE },
  { "UI_LAYOUT_DISTRIBUTION_GRAVITY", DAO_INTEGER, Craft::UIKit::UI_LAYOUT_DISTRIBUTION_GRAVITY },
  { "UI_LAYOUT_POSITION_CENTER", DAO_INTEGER, Craft::UIKit::UI_LAYOUT_POSITION_CENTER },
  { "UI_LAYOUT_POSITION_LEFT_TOP", DAO_INTEGER, Craft::UIKit::UI_LAYOUT_POSITION_LEFT_TOP },
  { "UI_LAYOUT_POSITION_RIGHT_BOTTOM", DAO_INTEGER, Craft::UIKit::UI_LAYOUT_POSITION_RIGHT_BOTTOM },
  { "UI_LAYOUT_POSITION_GRAVITY", DAO_INTEGER, Craft::UIKit::UI_LAYOUT_POSITION_GRAVITY },
  { "UI_LAYOUT_DISTRIBUTION_POSITION_CENTER", DAO_INTEGER, Craft::UIKit::UI_LAYOUT_DISTRIBUTION_POSITION_CENTER },
  { "UI_LAYOUT_DISTRIBUTION_POSITION_LEFT_TOP", DAO_INTEGER, Craft::UIKit::UI_LAYOUT_DISTRIBUTION_POSITION_LEFT_TOP },
  { "UI_LAYOUT_DISTRIBUTION_POSITION_RIGHT_BOTTOM", DAO_INTEGER, Craft::UIKit::UI_LAYOUT_DISTRIBUTION_POSITION_RIGHT_BOTTOM },
  { "UI_SCROLL_MODE_X_Y", DAO_INTEGER, Craft::UIKit::UI_SCROLL_MODE_X_Y },
  { "UI_SCROLL_MODE_Y", DAO_INTEGER, Craft::UIKit::UI_SCROLL_MODE_Y },
  { "UI_SCROLL_MODE_Y_AUTO", DAO_INTEGER, Craft::UIKit::UI_SCROLL_MODE_Y_AUTO },
  { "UI_SCROLL_MODE_X_AUTO_Y_AUTO", DAO_INTEGER, Craft::UIKit::UI_SCROLL_MODE_X_AUTO_Y_AUTO },
  { "UI_SCROLL_MODE_OFF", DAO_INTEGER, Craft::UIKit::UI_SCROLL_MODE_OFF },
  { "UI_WINDOW_SETTINGS_NONE", DAO_INTEGER, Craft::UIKit::UI_WINDOW_SETTINGS_NONE },
  { "UI_WINDOW_SETTINGS_TITLEBAR", DAO_INTEGER, Craft::UIKit::UI_WINDOW_SETTINGS_TITLEBAR },
  { "UI_WINDOW_SETTINGS_RESIZABLE", DAO_INTEGER, Craft::UIKit::UI_WINDOW_SETTINGS_RESIZABLE },
  { "UI_WINDOW_SETTINGS_CLOSE_BUTTON", DAO_INTEGER, Craft::UIKit::UI_WINDOW_SETTINGS_CLOSE_BUTTON },
  { "UI_WINDOW_SETTINGS_CAN_ACTIVATE", DAO_INTEGER, Craft::UIKit::UI_WINDOW_SETTINGS_CAN_ACTIVATE },
  { "UI_WINDOW_SETTINGS_DEFAULT", DAO_INTEGER, Craft::UIKit::UI_WINDOW_SETTINGS_DEFAULT },
  { "UI_MESSAGEWINDOW_SETTINGS_OK", DAO_INTEGER, Craft::UIKit::UI_MESSAGEWINDOW_SETTINGS_OK },
  { "UI_MESSAGEWINDOW_SETTINGS_OK_CANCEL", DAO_INTEGER, Craft::UIKit::UI_MESSAGEWINDOW_SETTINGS_OK_CANCEL },
  { "UI_MESSAGEWINDOW_SETTINGS_YES_NO", DAO_INTEGER, Craft::UIKit::UI_MESSAGEWINDOW_SETTINGS_YES_NO },
  { NULL, 0, 0 }
};

#ifdef __cplusplus
extern "C"{
#endif

int DaoCraftEngine_OnLoad( DaoVmSpace *vms, DaoNamespace *ns )
{
	DaoNamespace *aux = DaoVmSpace_LinkModule( vms, ns, "aux" );
	if( aux == NULL ) return 1;
	DaoNamespace *tb = DaoVmSpace_GetNamespace( vms, "tb" );
	DaoNamespace *Craft = DaoVmSpace_GetNamespace( vms, "Craft" );
	DaoNamespace *Craft_UIKit = DaoNamespace_GetNamespace( Craft, "UIKit" );
	DaoNamespace_AddConstNumbers( ns, dao__Nums );
	DaoNamespace_AddConstValue( ns, "tb", (DaoValue*) tb );
	DaoNamespace_AddConstNumbers( tb, dao_tb_Nums );
	DaoNamespace_AddConstValue( ns, "Craft", (DaoValue*) Craft );
	DaoNamespace_AddConstNumbers( Craft, dao_Craft_Nums );
	DaoNamespace_AddConstNumbers( Craft_UIKit, dao_Craft_UIKit_Nums );
	DaoNamespace_WrapType( ns, dao_Craft_Matrix4_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Matrix3_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Vector3_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Quaternion_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Vector2_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_IntVector2_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Vector4_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Matrix3x4_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Plane_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Rect_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Sphere_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_BoundingBox_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Frustum_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Polyhedron_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Ray_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_IntRect_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Color_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_StringHash_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_StringVector_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_VariantMap_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_RefCounted_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Variant_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Spline_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Context_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_EventHandler_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Object_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_TypeInfo_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_ObjectFactory_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Timer_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_HiresTimer_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Time_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Mutex_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Condition_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Thread_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Serializer_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Deserializer_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_File_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_FileSystem_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_FileWatcher_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_PackageEntry_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_PackageFile_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Resource_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_CompressedLevel_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Image_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Localization_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_XMLFile_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_XPathQuery_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_XPathResultSet_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_XMLElement_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Texture_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Material_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_ResourceCache_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Serializable_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Animatable_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_Node_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_Scene_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_ValueAnimation_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_ObjectAnimation_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Component_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_Camera_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_Connection_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_SceneResolver_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_ScriptComponent_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_DaoComponent_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_AnimationController_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_Drawable_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_CustomGeometry_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_RigidBody_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_CollisionShape_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_Octant_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Octree_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_SplinePath_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_UnknownComponent_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_ScriptComponentFile_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_DaoComponentFile_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Graphics_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_Light_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_Viewport_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_RenderSurface_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Renderer_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_BiasParameters_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_CascadeParameters_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_FocusParameters_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Pass_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Technique_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Geometry_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Texture2D_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_TextureCube_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_FrameInfo_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Shader_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_ShaderVariation_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_ShaderProgram_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_RenderTargetInfo_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_RenderPathCommand_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_RenderPath_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_RayOctreeQuery_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_View_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_StaticModel_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_AnimatedModel_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_Terrain_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_Bone_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Skeleton_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Model_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_AnimationKeyFrame_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_AnimationTrack_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_AnimationTriggerPoint_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Animation_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_AnimationStateTrack_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_AnimationState_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_AnimationControl_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Skybox_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_StaticModelGroup_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_Billboard_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_BillboardSet_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_ColorFrame_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_TextureFrame_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_ParticleEffect_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Particle_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_ParticleEmitter_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_TerrainPatch_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_Sound_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_SoundSource_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_SoundListener_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_Audio_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_SoundStream_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_SoundSource3D_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_TouchState_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_JoystickState_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Input_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Constraint_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_PhysicsWorld_Core, DAO_CDATA, DAO_CTYPE_UNITHREAD );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIWidget_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIView_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UILayoutParams_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIFontDescription_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UISelectList_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIPreferredSize_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIDragObject_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIButton_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UICheckBox_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIClickLabel_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIContainer_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIDimmer_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIDragDrop_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIEditField_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIImageWidget_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIInlineSelect_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UILayout_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIListView_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UISelectItemSource_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UISelectItem_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIMenuWindow_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIMenuItem_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIMenuItemSource_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIPopupWindow_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIRenderer_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UISceneView_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_SceneViewWidget_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIScrollContainer_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UISection_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UISelectDropdown_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UISeparator_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UISkinImage_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UITabContainer_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UITextField_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UITextureWidget_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIWindow_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UIMessageWindow_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_UIKit_UI_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_Engine_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_DebugHud_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapType( ns, dao_Craft_DaoPlayer_Core, DAO_CDATA, 0 );
	DaoNamespace_WrapFunctions( ns, dao__Funcs );
	DaoNamespace_WrapFunctions( tb, dao_tb_Funcs );
	DaoNamespace_WrapFunctions( Craft, dao_Craft_Funcs );
	DaoNamespace_WrapFunctions( Craft_UIKit, dao_Craft_UIKit_Funcs );
	return 0;
}

#ifdef __cplusplus
}
#endif

