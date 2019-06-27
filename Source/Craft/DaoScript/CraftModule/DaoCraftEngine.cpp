
#include "dao_CraftEngine.h"
#include <../Graphics/OpenGL/OGLGraphicsImpl.h>

using namespace Craft;

#ifdef __cplusplus
extern "C"{
#endif

#include "daoNamespace.h"
#include "daoRoutine.h"
#include "daoValue.h"
#include "daoType.h"

#ifdef __cplusplus
}
#endif


void Dao_Craft_LockHandleGC()
{
	if( DaoVmSpace_MasterVmSpace() ) DaoVmSpace_Lock( DaoVmSpace_MasterVmSpace() );
}

void Dao_Craft_UnlockHandleGC()
{
	if( DaoVmSpace_MasterVmSpace() ) DaoVmSpace_Unlock( DaoVmSpace_MasterVmSpace() );
}

int Craft_Referenced( Craft::RefCounted *obj )
{
	if( dynamic_cast<DaoCxxVirt_Craft_RefCounted*>( obj ) == NULL ){
		CRAFT_LOGWARNING( "Craft_Referenced() is called on an unwrapped atomic object!" );
	}
	return obj->Refs() > 0;
}

int Craft_Subscribed( Craft::EventHandler *obj )
{
	return obj->GetEventType().Value() != 0;
}


Craft::StringHash DaoCraft_MakeStringHash( DaoProcess *proc, const Craft::String & source )
{
	if( source.Length() == 0 || source[0] != ':' ) return Craft::StringHash( source );

	Craft::Context *context = DaoCraft_GetContext( proc );
	Craft::DaoPlayer *player = context->GetSubsystem<Craft::DaoPlayer>();
	char buffer[20];
	snprintf( buffer, sizeof(buffer), "%p", player );

	return Craft::StringHash( Craft::String(buffer) + source );
}


bool WidgetBase::OnEventType( const tb::TBWidgetEvent &ev  )
{
	int cs = 0;
	switch( ev.type ){
	case tb::EVENT_TYPE_CLICK:               return OnClick( cs );
	case tb::EVENT_TYPE_LONG_CLICK:          return OnLongClick( cs );
	case tb::EVENT_TYPE_POINTER_DOWN:        return OnLeftButtonDown( cs );
	case tb::EVENT_TYPE_POINTER_UP:          return OnLeftButtonUp( cs );
	case tb::EVENT_TYPE_RIGHT_POINTER_DOWN:  return OnRightButtonDown( cs );
	case tb::EVENT_TYPE_RIGHT_POINTER_UP:    return OnRightButtonUp( cs );
	case tb::EVENT_TYPE_KEY_DOWN: return OnKeyDown(cs,ev.key, ev.special_key, ev.modifierkeys);
	case tb::EVENT_TYPE_KEY_UP:   return OnKeyUp(cs, ev.key, ev.special_key, ev.modifierkeys );
	case tb::EVENT_TYPE_CHANGED:  return OnChange( cs );
	}
	return false;
}

String& DaoCxx_Craft_ScriptComponent::GetComponentClassName() const
{
	static String name;
	return name;
}

bool DaoCxx_Craft_UIKit_UIWidget::OnEvent(const tb::TBWidgetEvent &ev)
{
	if( OnEventType( ev.type ) ) return true;
	return UIWidget::OnEvent( ev );
}

bool DaoCxx_Craft_UIKit_UIButton::OnEvent(const tb::TBWidgetEvent &ev)
{
	if( OnEventType( ev.type ) ) return true;
	return UIButton::OnEvent( ev );
}

bool DaoCxx_Craft_UIKit_UICheckBox::OnEvent(const tb::TBWidgetEvent &ev)
{
	if( OnEventType( ev.type ) ) return true;
	return UICheckBox::OnEvent( ev );
}

bool DaoCxx_Craft_UIKit_UIClickLabel::OnEvent(const tb::TBWidgetEvent &ev)
{
	if( OnEventType( ev.type ) ) return true;
	return UIClickLabel::OnEvent( ev );
}

bool DaoCxx_Craft_UIKit_UIEditField::OnEvent(const tb::TBWidgetEvent &ev)
{
	if( ev.type == EVENT_TYPE_CUSTOM && ev.ref_id == TBIDC("edit_complete") ){
		return OnCompletion();
	}
	if( OnEventType( ev.type ) ) return true;
	return UIEditField::OnEvent( ev );
}

bool DaoCxx_Craft_UIKit_UIMenuWindow::OnEvent(const tb::TBWidgetEvent &ev)
{
	if( OnEventType( ev.type ) ) return true;
	return UIMenuWindow::OnEvent( ev );
}

bool DaoCxx_Craft_UIKit_UIPopupWindow::OnEvent(const tb::TBWidgetEvent &ev)
{
	if( OnEventType( ev.type ) ) return true;
	return UIPopupWindow::OnEvent( ev );
}

bool DaoCxx_Craft_UIKit_UISelectDropdown::OnEvent(const tb::TBWidgetEvent &ev)
{
	if( OnEventType( ev.type ) ) return true;
	return UISelectDropdown::OnEvent( ev );
}

bool DaoCxx_Craft_UIKit_UIListView::OnEvent(const tb::TBWidgetEvent &ev)
{
	if( OnEventType( ev.type ) ) return true;
	return UIListView::OnEvent( ev );
}

bool DaoCxx_Craft_UIKit_UISelectList::OnEvent(const tb::TBWidgetEvent &ev)
{
	if( OnEventType( ev.type ) ) return true;
	return UISelectList::OnEvent( ev );
}

bool DaoCxx_Craft_UIKit_UITextField::OnEvent(const tb::TBWidgetEvent &ev)
{
	if( OnEventType( ev.type ) ) return true;
	return UITextField::OnEvent( ev );
}

bool DaoCxx_Craft_UIKit_UIMessageWindow::OnEvent(const tb::TBWidgetEvent &ev)
{
	if( ev.type == tb::EVENT_TYPE_CLICK and (ev.ref_id) ){
		int cs = 0;
		if( OnClick( cs, (ev.ref_id) ) ) return true;
	}
	if( OnEventType( ev.type ) ) return true;
	return UIMessageWindow::OnEvent( ev );
}




#ifdef __cplusplus
extern "C"{
#endif


DaoType* dao_Craft_Vector2_CheckGetField( DaoType *self, DaoString *field, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	DString *name = field->value;
	if( name->size == 1 && name->chars[0] >= 'x' && name->chars[0] <= 'y' ) return vms->typeFloat;
	return DaoCstruct_CheckGetField( self, field, rout );
}

DaoValue* dao_Craft_Vector2_DoGetField( DaoValue *self, DaoString *field, DaoProcess *proc )
{
	Vector2 *object = (Vector2*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector2_Core );
	if( field->value->size == 1 ){
		switch( field->value->chars[0] - 'x' ){
		case 0 : DaoProcess_PutFloat( proc, object->x_ ); return NULL;
		case 1 : DaoProcess_PutFloat( proc, object->y_ ); return NULL;
		default: break;
		}
	}
	return DaoCstruct_DoGetField( self, field, proc );
}

int dao_Craft_Vector2_CheckSetField( DaoType *self, DaoString *field, DaoType *value, DaoRoutine *rout )
{
	DString *name = field->value;
	if( name->size == 1 && name->chars[0] >= 'x' && name->chars[0] <= 'y' ){
		if( value->tid >= DAO_BOOLEAN && value->tid <= DAO_FLOAT ) return DAO_OK;
		return DAO_ERROR_VALUE;
	}
	return DAO_ERROR_FIELD;
}

int dao_Craft_Vector2_DoSetField( DaoValue *self, DaoString *field, DaoValue *value, DaoProcess *proc )
{
	Vector2 *object = (Vector2*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector2_Core );
	float f;

	if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;

	f = DaoValue_GetFloat( value );
	if( field->value->size == 1 ){
		switch( field->value->chars[0] - 'x' ){
		case 0 : object->x_ = f; return DAO_OK;
		case 1 : object->y_ = f; return DAO_OK;
		default: return DAO_ERROR_FIELD;
		}
	}
	return DAO_ERROR_FIELD;
}


DaoType* dao_Craft_Vector2_CheckGetItem( DaoType *self, DaoType *index[], int N, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	if( N != 1 ) return NULL;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return NULL;
	return vms->typeFloat;
}

DaoValue* dao_Craft_Vector2_DoGetItem( DaoValue *self, DaoValue *index[], int N, DaoProcess *proc )
{
	Vector2 *object = (Vector2*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector2_Core );
	if( N != 1 ) return NULL;

	dao_integer idx = DaoValue_GetInteger( index[0] );

	dao_float element = 0.0;
	switch( idx ){
	case 0 : element = object->x_; break;
	case 1 : element = object->y_; break;
	default: return NULL; // TODO;
	}
	DaoProcess_PutFloat( proc, element );
	return NULL;
}

int dao_Craft_Vector2_CheckSetItem( DaoType *self, DaoType *index[], int N, DaoType *value, DaoRoutine *rout )
{
	if( N != 1 ) return DAO_ERROR_INDEX;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return DAO_ERROR_INDEX;
	if( value->tid == DAO_NONE || value->tid > DAO_FLOAT ) return DAO_ERROR_VALUE;
	return DAO_OK;
}

int dao_Craft_Vector2_DoSetItem( DaoValue *self, DaoValue *index[], int N, DaoValue *value, DaoProcess *proc )
{
	Vector2 *object = (Vector2*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector2_Core );

	if( N != 1 ) return DAO_ERROR_INDEX;
	if( value->type == DAO_NONE || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;

	dao_integer idx = DaoValue_GetInteger( index[0] );
	dao_float element = DaoValue_GetFloat( value );

	switch( idx ){
	case 0 : object->x_ = element; break;
	case 1 : object->y_ = element; break;
	default: return DAO_ERROR_INDEX; // TODO;
	}
	return DAO_OK;
}

DaoType* dao_Craft_Vector2_CheckUnary( DaoType *self, DaoVmCode *op, DaoRoutine *rout )
{
	if( op->code != DVM_MINUS ) return NULL;
	return self;
}

DaoValue* dao_Craft_Vector2_DoUnary( DaoValue *self, DaoVmCode *op, DaoProcess *proc )
{
	Vector2 *object = (Vector2*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector2_Core );

	if( op->code != DVM_MINUS ) return NULL;
	if( op->c == op->a ){
		*object = - *object;
		return self;
	}
	DaoProcess_PutCdataTC( proc, new Vector2( - *object ), dao_Craft_Vector2_Core );
	return NULL;
}

DaoType* dao_Craft_Vector2_CheckBinary( DaoType *self, DaoVmCode *op, DaoType *operands[2], DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	switch( op->code ){
	case DVM_ADD : case DVM_SUB :
	case DVM_MUL : case DVM_DIV :
	case DVM_EQ  : case DVM_NE :
		break;
	default: return NULL;
	}

	if( ! DaoType_ChildOf( operands[0], self ) ) return NULL;
	if( ! DaoType_ChildOf( operands[1], self ) ){
		if( operands[1]->tid == DAO_NONE || operands[1]->tid > DAO_FLOAT ) return NULL;
	}

	switch( op->code ){
	case DVM_ADD : case DVM_SUB :
	case DVM_MUL : case DVM_DIV :
		return self;
	case DVM_EQ  : case DVM_NE :
		return vms->typeBool;
	default: return NULL;
	}
	return NULL;
}

DaoValue* dao_Craft_Vector2_DoBinary( DaoValue *self, DaoVmCode *op, DaoValue *operands[2], DaoProcess *proc )
{
	Vector2 *A = (Vector2*) DaoValue_TryCastCdataTC( operands[0], dao_Craft_Vector2_Core );
	Vector2 *B = (Vector2*) DaoValue_TryCastCdataTC( operands[1], dao_Craft_Vector2_Core );
	Vector2 *C = (Vector2*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector2_Core );
	Vector2 res;

	if( A == NULL ) return NULL;
	if( B == NULL && operands[1]->type >= DAO_BOOLEAN && operands[1]->type <= DAO_FLOAT ){
		dao_float F = DaoValue_GetFloat( operands[1] );
		switch( op->code ){
		case DVM_MUL : res = *A * F; break;
		case DVM_DIV : res = *A / F; break;
		default: return NULL;
		}
		if( op->c == op->a ){
			*C = res;
			return self;
		}
		DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Vector2_Core );
		return NULL;
	}

	if( A == NULL || B == NULL || C == NULL ) return NULL;

	switch( op->code ){
	case DVM_ADD : res = *A + *B; break;
	case DVM_SUB : res = *A - *B; break;
	case DVM_MUL : res = *A * *B; break;
	case DVM_DIV : res = *A / *B; break;
	case DVM_EQ  : DaoProcess_PutBoolean( proc, *A == *B ); return NULL;
	case DVM_NE  : DaoProcess_PutBoolean( proc, *A != *B ); return NULL;
	default: return NULL;
	}
	if( op->c == op->a || op->c == op->b ){
		*C = res;
		return self;
	}
	DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Vector2_Core );
	return NULL;
}





DaoType* dao_Craft_IntVector2_CheckGetField( DaoType *self, DaoString *field, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	DString *name = field->value;
	if( name->size == 1 && name->chars[0] >= 'x' && name->chars[0] <= 'y' ) return vms->typeFloat;
	return DaoCstruct_CheckGetField( self, field, rout );
}

DaoValue* dao_Craft_IntVector2_DoGetField( DaoValue *self, DaoString *field, DaoProcess *proc )
{
	IntVector2 *object = (IntVector2*) DaoValue_TryCastCdataTC( self, dao_Craft_IntVector2_Core );
	if( field->value->size == 1 ){
		switch( field->value->chars[0] - 'x' ){
		case 0 : DaoProcess_PutFloat( proc, object->x_ ); return NULL;
		case 1 : DaoProcess_PutFloat( proc, object->y_ ); return NULL;
		default: break;
		}
	}
	return DaoCstruct_DoGetField( self, field, proc );
}

int dao_Craft_IntVector2_CheckSetField( DaoType *self, DaoString *field, DaoType *value, DaoRoutine *rout )
{
	DString *name = field->value;
	if( name->size == 1 && name->chars[0] >= 'x' && name->chars[0] <= 'y' ){
		if( value->tid >= DAO_BOOLEAN && value->tid <= DAO_FLOAT ) return DAO_OK;
		return DAO_ERROR_VALUE;
	}
	return DAO_ERROR_FIELD;
}

int dao_Craft_IntVector2_DoSetField( DaoValue *self, DaoString *field, DaoValue *value, DaoProcess *proc )
{
	IntVector2 *object = (IntVector2*) DaoValue_TryCastCdataTC( self, dao_Craft_IntVector2_Core );
	float f;

	if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;

	f = DaoValue_GetFloat( value );
	if( field->value->size == 1 ){
		switch( field->value->chars[0] - 'x' ){
		case 0 : object->x_ = f; return DAO_OK;
		case 1 : object->y_ = f; return DAO_OK;
		default: return DAO_ERROR_FIELD;
		}
	}
	return DAO_ERROR_FIELD;
}


DaoType* dao_Craft_IntVector2_CheckGetItem( DaoType *self, DaoType *index[], int N, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	if( N != 1 ) return NULL;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return NULL;
	return vms->typeFloat;
}

DaoValue* dao_Craft_IntVector2_DoGetItem( DaoValue *self, DaoValue *index[], int N, DaoProcess *proc )
{
	IntVector2 *object = (IntVector2*) DaoValue_TryCastCdataTC( self, dao_Craft_IntVector2_Core );
	if( N != 1 ) return NULL;

	dao_integer idx = DaoValue_GetInteger( index[0] );

	dao_float element = 0.0;
	switch( idx ){
	case 0 : element = object->x_; break;
	case 1 : element = object->y_; break;
	default: return NULL; // TODO;
	}
	DaoProcess_PutFloat( proc, element );
	return NULL;
}

int dao_Craft_IntVector2_CheckSetItem( DaoType *self, DaoType *index[], int N, DaoType *value, DaoRoutine *rout )
{
	if( N != 1 ) return DAO_ERROR_INDEX;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return DAO_ERROR_INDEX;
	if( value->tid == DAO_NONE || value->tid > DAO_FLOAT ) return DAO_ERROR_VALUE;
	return DAO_OK;
}

int dao_Craft_IntVector2_DoSetItem( DaoValue *self, DaoValue *index[], int N, DaoValue *value, DaoProcess *proc )
{
	IntVector2 *object = (IntVector2*) DaoValue_TryCastCdataTC( self, dao_Craft_IntVector2_Core );

	if( N != 1 ) return DAO_ERROR_INDEX;
	if( value->type == DAO_NONE || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;

	dao_integer idx = DaoValue_GetInteger( index[0] );
	dao_float element = DaoValue_GetFloat( value );

	switch( idx ){
	case 0 : object->x_ = element; break;
	case 1 : object->y_ = element; break;
	default: return DAO_ERROR_INDEX; // TODO;
	}
	return DAO_OK;
}

DaoType* dao_Craft_IntVector2_CheckUnary( DaoType *self, DaoVmCode *op, DaoRoutine *rout )
{
	if( op->code != DVM_MINUS ) return NULL;
	return self;
}

DaoValue* dao_Craft_IntVector2_DoUnary( DaoValue *self, DaoVmCode *op, DaoProcess *proc )
{
	IntVector2 *object = (IntVector2*) DaoValue_TryCastCdataTC( self, dao_Craft_IntVector2_Core );

	if( op->code != DVM_MINUS ) return NULL;
	if( op->c == op->a ){
		*object = - *object;
		return self;
	}
	DaoProcess_PutCdataTC( proc, new IntVector2( - *object ), dao_Craft_IntVector2_Core );
	return NULL;
}

DaoType* dao_Craft_IntVector2_CheckBinary( DaoType *self, DaoVmCode *op, DaoType *operands[2], DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	switch( op->code ){
	case DVM_ADD : case DVM_SUB :
	case DVM_MUL : case DVM_DIV :
	case DVM_EQ  : case DVM_NE :
		break;
	default: return NULL;
	}

	if( ! DaoType_ChildOf( operands[0], self ) ) return NULL;
	if( ! DaoType_ChildOf( operands[1], self ) ){
		if( operands[1]->tid == DAO_NONE || operands[1]->tid > DAO_FLOAT ) return NULL;
	}else if( op->code == DVM_MUL || op->code == DVM_DIV ){
		return NULL;
	}

	switch( op->code ){
	case DVM_ADD : case DVM_SUB :
	case DVM_MUL : case DVM_DIV :
		return self;
	case DVM_EQ  : case DVM_NE :
		return vms->typeBool;
	default: return NULL;
	}
	return NULL;
}

DaoValue* dao_Craft_IntVector2_DoBinary( DaoValue *self, DaoVmCode *op, DaoValue *operands[2], DaoProcess *proc )
{
	IntVector2 *A = (IntVector2*) DaoValue_TryCastCdataTC( operands[0], dao_Craft_IntVector2_Core );
	IntVector2 *B = (IntVector2*) DaoValue_TryCastCdataTC( operands[1], dao_Craft_IntVector2_Core );
	IntVector2 *C = (IntVector2*) DaoValue_TryCastCdataTC( self, dao_Craft_IntVector2_Core );
	IntVector2 res;

	if( A == NULL ) return NULL;
	if( B == NULL && operands[1]->type >= DAO_BOOLEAN && operands[1]->type <= DAO_FLOAT ){
		dao_float F = DaoValue_GetFloat( operands[1] );
		switch( op->code ){
		case DVM_MUL : res = *A * F; break;
		case DVM_DIV : res = *A / F; break;
		default: return NULL;
		}
		if( op->c == op->a ){
			*C = res;
			return self;
		}
		DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_IntVector2_Core );
		return NULL;
	}

	if( A == NULL || B == NULL || C == NULL ) return NULL;

	switch( op->code ){
	case DVM_ADD : res = *A + *B; break;
	case DVM_SUB : res = *A - *B; break;
	case DVM_EQ  : DaoProcess_PutBoolean( proc, *A == *B ); return NULL;
	case DVM_NE  : DaoProcess_PutBoolean( proc, *A != *B ); return NULL;
	default: return NULL;
	}
	if( op->c == op->a || op->c == op->b ){
		*C = res;
		return self;
	}
	DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_IntVector2_Core );
	return NULL;
}





DaoType* dao_Craft_Vector3_CheckGetField( DaoType *self, DaoString *field, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	DString *name = field->value;
	if( name->size == 1 && name->chars[0] >= 'x' && name->chars[0] <= 'z' ) return vms->typeFloat;
	return DaoCstruct_CheckGetField( self, field, rout );
}

DaoValue* dao_Craft_Vector3_DoGetField( DaoValue *self, DaoString *field, DaoProcess *proc )
{
	Vector3 *object = (Vector3*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector3_Core );
	if( field->value->size == 1 ){
		switch( field->value->chars[0] - 'x' ){
		case 0 : DaoProcess_PutFloat( proc, object->x_ ); return NULL;
		case 1 : DaoProcess_PutFloat( proc, object->y_ ); return NULL;
		case 2 : DaoProcess_PutFloat( proc, object->z_ ); return NULL;
		default: break;
		}
	}
	return DaoCstruct_DoGetField( self, field, proc );
}

int dao_Craft_Vector3_CheckSetField( DaoType *self, DaoString *field, DaoType *value, DaoRoutine *rout )
{
	DString *name = field->value;
	if( name->size == 1 && name->chars[0] >= 'x' && name->chars[0] <= 'z' ){
		if( value->tid >= DAO_BOOLEAN && value->tid <= DAO_FLOAT ) return DAO_OK;
		return DAO_ERROR_VALUE;
	}
	return DAO_ERROR_FIELD;
}

int dao_Craft_Vector3_DoSetField( DaoValue *self, DaoString *field, DaoValue *value, DaoProcess *proc )
{
	Vector3 *object = (Vector3*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector3_Core );
	dao_float f;

	if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;

	f = DaoValue_GetFloat( value );
	if( field->value->size == 1 ){
		switch( field->value->chars[0] - 'x' ){
		case 0 : object->x_ = f; return DAO_OK;
		case 1 : object->y_ = f; return DAO_OK;
		case 2 : object->z_ = f; return DAO_OK;
		default: return DAO_ERROR_FIELD;
		}
	}
	return DAO_ERROR_FIELD;
}


DaoType* dao_Craft_Vector3_CheckGetItem( DaoType *self, DaoType *index[], int N, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	if( N != 1 ) return NULL;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return NULL;
	return vms->typeFloat;
}

DaoValue* dao_Craft_Vector3_DoGetItem( DaoValue *self, DaoValue *index[], int N, DaoProcess *proc )
{
	Vector3 *object = (Vector3*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector3_Core );
	if( N != 1 ) return NULL;

	dao_integer idx = DaoValue_GetInteger( index[0] );

	dao_float element = 0.0;
	switch( idx ){
	case 0 : element = object->x_; break;
	case 1 : element = object->y_; break;
	case 2 : element = object->z_; break;
	default: return NULL; // TODO;
	}
	DaoProcess_PutFloat( proc, element );
	return NULL;
}

int dao_Craft_Vector3_CheckSetItem( DaoType *self, DaoType *index[], int N, DaoType *value, DaoRoutine *rout )
{
	if( N != 1 ) return DAO_ERROR_INDEX;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return DAO_ERROR_INDEX;
	if( value->tid == DAO_NONE || value->tid > DAO_FLOAT ) return DAO_ERROR_VALUE;
	return DAO_OK;
}

int dao_Craft_Vector3_DoSetItem( DaoValue *self, DaoValue *index[], int N, DaoValue *value, DaoProcess *proc )
{
	Vector3 *object = (Vector3*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector3_Core );

	if( N != 1 ) return DAO_ERROR_INDEX;
	if( value->type == DAO_NONE || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;

	dao_integer idx = DaoValue_GetInteger( index[0] );
	dao_float element = DaoValue_GetFloat( value );

	switch( idx ){
	case 0 : object->x_ = element; break;
	case 1 : object->y_ = element; break;
	case 2 : object->z_ = element; break;
	default: return DAO_ERROR_INDEX; // TODO;
	}
	return DAO_OK;
}

DaoType* dao_Craft_Vector3_CheckUnary( DaoType *self, DaoVmCode *op, DaoRoutine *rout )
{
	if( op->code != DVM_MINUS ) return NULL;
	return self;
}

DaoValue* dao_Craft_Vector3_DoUnary( DaoValue *self, DaoVmCode *op, DaoProcess *proc )
{
	Vector3 *object = (Vector3*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector3_Core );

	if( op->code != DVM_MINUS ) return NULL;
	if( op->c == op->a ){
		*object = - *object;
		return self;
	}
	DaoProcess_PutCdataTC( proc, new Vector3( - *object ), dao_Craft_Vector3_Core );
	return NULL;
}

DaoType* dao_Craft_Vector3_CheckBinary( DaoType *self, DaoVmCode *op, DaoType *operands[2], DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	switch( op->code ){
	case DVM_ADD : case DVM_SUB :
	case DVM_MUL : case DVM_DIV :
	case DVM_EQ  : case DVM_NE :
		break;
	default: return NULL;
	}

	if( ! DaoType_ChildOf( operands[0], self ) ) return NULL;
	if( ! DaoType_ChildOf( operands[1], self ) ){
		if( operands[1]->tid == DAO_NONE || operands[1]->tid > DAO_FLOAT ) return NULL;
	}

	switch( op->code ){
	case DVM_ADD : case DVM_SUB :
	case DVM_MUL : case DVM_DIV :
		return self;
	case DVM_EQ  : case DVM_NE :
		return vms->typeBool;
	default: return NULL;
	}
	return NULL;
}

DaoValue* dao_Craft_Vector3_DoBinary( DaoValue *self, DaoVmCode *op, DaoValue *operands[2], DaoProcess *proc )
{
	Vector3 *A = (Vector3*) DaoValue_TryCastCdataTC( operands[0], dao_Craft_Vector3_Core );
	Vector3 *B = (Vector3*) DaoValue_TryCastCdataTC( operands[1], dao_Craft_Vector3_Core );
	Vector3 *C = (Vector3*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector3_Core );
	Vector3 res;

	if( A == NULL ) return NULL;
	if( B == NULL && operands[1]->type >= DAO_BOOLEAN && operands[1]->type <= DAO_FLOAT ){
		dao_float F = DaoValue_GetFloat( operands[1] );
		switch( op->code ){
		case DVM_MUL : res = *A * F; break;
		case DVM_DIV : res = *A / F; break;
		default: return NULL;
		}
		if( op->c == op->a ){
			*C = res;
			return self;
		}
		DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Vector3_Core );
		return NULL;
	}

	if( A == NULL || B == NULL || C == NULL ) return NULL;

	switch( op->code ){
	case DVM_ADD : res = *A + *B; break;
	case DVM_SUB : res = *A - *B; break;
	case DVM_MUL : res = *A * *B; break;
	case DVM_DIV : res = *A / *B; break;
	case DVM_EQ  : DaoProcess_PutBoolean( proc, *A == *B ); return NULL;
	case DVM_NE  : DaoProcess_PutBoolean( proc, *A != *B ); return NULL;
	default: return NULL;
	}
	if( op->c == op->a || op->c == op->b ){
		*C = res;
		return self;
	}
	DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Vector3_Core );
	return NULL;
}





DaoType* dao_Craft_Vector4_CheckGetField( DaoType *self, DaoString *field, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	DString *name = field->value;
	if( name->size == 1 && name->chars[0] >= 'w' && name->chars[0] <= 'z' ) return vms->typeFloat;
	return DaoCstruct_CheckGetField( self, field, rout );
}

DaoValue* dao_Craft_Vector4_DoGetField( DaoValue *self, DaoString *field, DaoProcess *proc )
{
	Vector4 *object = (Vector4*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector4_Core );
	if( field->value->size == 1 ){
		switch( field->value->chars[0] - 'w' ){
		case 0 : DaoProcess_PutFloat( proc, object->w_ ); return NULL;
		case 1 : DaoProcess_PutFloat( proc, object->x_ ); return NULL;
		case 2 : DaoProcess_PutFloat( proc, object->y_ ); return NULL;
		case 3 : DaoProcess_PutFloat( proc, object->z_ ); return NULL;
		default: break;
		}
	}
	return DaoCstruct_DoGetField( self, field, proc );
}

int dao_Craft_Vector4_CheckSetField( DaoType *self, DaoString *field, DaoType *value, DaoRoutine *rout )
{
	DString *name = field->value;
	if( name->size == 1 && name->chars[0] >= 'w' && name->chars[0] <= 'z' ){
		if( value->tid >= DAO_BOOLEAN && value->tid <= DAO_FLOAT ) return DAO_OK;
		return DAO_ERROR_VALUE;
	}
	return DAO_ERROR_FIELD;
}

int dao_Craft_Vector4_DoSetField( DaoValue *self, DaoString *field, DaoValue *value, DaoProcess *proc )
{
	Vector4 *object = (Vector4*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector4_Core );
	float f;

	if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;

	f = DaoValue_GetFloat( value );
	if( field->value->size == 1 ){
		switch( field->value->chars[0] - 'w' ){
		case 0 : object->w_ = f; return DAO_OK;
		case 1 : object->x_ = f; return DAO_OK;
		case 2 : object->y_ = f; return DAO_OK;
		case 3 : object->z_ = f; return DAO_OK;
		default: return DAO_ERROR_FIELD;
		}
	}
	return DAO_ERROR_FIELD;
}


DaoType* dao_Craft_Vector4_CheckGetItem( DaoType *self, DaoType *index[], int N, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	if( N != 1 ) return NULL;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return NULL;
	return vms->typeFloat;
}

DaoValue* dao_Craft_Vector4_DoGetItem( DaoValue *self, DaoValue *index[], int N, DaoProcess *proc )
{
	Vector4 *object = (Vector4*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector4_Core );
	if( N != 1 ) return NULL;

	dao_integer idx = DaoValue_GetInteger( index[0] );

	dao_float element = 0.0;
	switch( idx ){
	case 0 : element = object->x_; break;
	case 1 : element = object->y_; break;
	case 2 : element = object->z_; break;
	case 3 : element = object->w_; break;
	default: return NULL; // TODO;
	}
	DaoProcess_PutFloat( proc, element );
	return NULL;
}

int dao_Craft_Vector4_CheckSetItem( DaoType *self, DaoType *index[], int N, DaoType *value, DaoRoutine *rout )
{
	if( N != 1 ) return DAO_ERROR_INDEX;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return DAO_ERROR_INDEX;
	if( value->tid == DAO_NONE || value->tid > DAO_FLOAT ) return DAO_ERROR_VALUE;
	return DAO_OK;
}

int dao_Craft_Vector4_DoSetItem( DaoValue *self, DaoValue *index[], int N, DaoValue *value, DaoProcess *proc )
{
	Vector4 *object = (Vector4*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector4_Core );

	if( N != 1 ) return DAO_ERROR_INDEX;
	if( value->type == DAO_NONE || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;

	dao_integer idx = DaoValue_GetInteger( index[0] );
	dao_float element = DaoValue_GetFloat( value );

	switch( idx ){
	case 0 : object->x_ = element; break;
	case 1 : object->y_ = element; break;
	case 2 : object->z_ = element; break;
	case 3 : object->w_ = element; break;
	default: return DAO_ERROR_INDEX; // TODO;
	}
	return DAO_OK;
}

DaoType* dao_Craft_Vector4_CheckUnary( DaoType *self, DaoVmCode *op, DaoRoutine *rout )
{
	if( op->code != DVM_MINUS ) return NULL;
	return self;
}

DaoValue* dao_Craft_Vector4_DoUnary( DaoValue *self, DaoVmCode *op, DaoProcess *proc )
{
	Vector4 *object = (Vector4*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector4_Core );

	if( op->code != DVM_MINUS ) return NULL;
	if( op->c == op->a ){
		*object = - *object;
		return self;
	}
	DaoProcess_PutCdataTC( proc, new Vector4( - *object ), dao_Craft_Vector4_Core );
	return NULL;
}

DaoType* dao_Craft_Vector4_CheckBinary( DaoType *self, DaoVmCode *op, DaoType *operands[2], DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	switch( op->code ){
	case DVM_ADD : case DVM_SUB :
	case DVM_MUL : case DVM_DIV :
	case DVM_EQ  : case DVM_NE :
		break;
	default: return NULL;
	}

	if( ! DaoType_ChildOf( operands[0], self ) ) return NULL;
	if( ! DaoType_ChildOf( operands[1], self ) ){
		if( operands[1]->tid == DAO_NONE || operands[1]->tid > DAO_FLOAT ) return NULL;
	}

	switch( op->code ){
	case DVM_ADD : case DVM_SUB :
	case DVM_MUL : case DVM_DIV :
		return self;
	case DVM_EQ  : case DVM_NE :
		return vms->typeBool;
	default: return NULL;
	}
	return NULL;
}

DaoValue* dao_Craft_Vector4_DoBinary( DaoValue *self, DaoVmCode *op, DaoValue *operands[2], DaoProcess *proc )
{
	Vector4 *A = (Vector4*) DaoValue_TryCastCdataTC( operands[0], dao_Craft_Vector4_Core );
	Vector4 *B = (Vector4*) DaoValue_TryCastCdataTC( operands[1], dao_Craft_Vector4_Core );
	Vector4 *C = (Vector4*) DaoValue_TryCastCdataTC( self, dao_Craft_Vector4_Core );
	Vector4 res;

	if( A == NULL ) return NULL;
	if( B == NULL && operands[1]->type >= DAO_BOOLEAN && operands[1]->type <= DAO_FLOAT ){
		dao_float F = DaoValue_GetFloat( operands[1] );
		switch( op->code ){
		case DVM_MUL : res = *A * F; break;
		case DVM_DIV : res = *A / F; break;
		default: return NULL;
		}
		if( op->c == op->a ){
			*C = res;
			return self;
		}
		DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Vector4_Core );
		return NULL;
	}

	if( A == NULL || B == NULL || C == NULL ) return NULL;

	switch( op->code ){
	case DVM_ADD : res = *A + *B; break;
	case DVM_SUB : res = *A - *B; break;
	case DVM_MUL : res = *A * *B; break;
	case DVM_DIV : res = *A / *B; break;
	case DVM_EQ  : DaoProcess_PutBoolean( proc, *A == *B ); return NULL;
	case DVM_NE  : DaoProcess_PutBoolean( proc, *A != *B ); return NULL;
	default: return NULL;
	}
	if( op->c == op->a || op->c == op->b ){
		*C = res;
		return self;
	}
	DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Vector4_Core );
	return NULL;
}





DaoType* dao_Craft_Quaternion_CheckGetField( DaoType *self, DaoString *field, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	DString *name = field->value;
	if( name->size == 1 && name->chars[0] >= 'w' && name->chars[0] <= 'z' ) return vms->typeFloat;
	return DaoCstruct_CheckGetField( self, field, rout );
}

DaoValue* dao_Craft_Quaternion_DoGetField( DaoValue *self, DaoString *field, DaoProcess *proc )
{
	Quaternion *object = (Quaternion*) DaoValue_TryCastCdataTC( self, dao_Craft_Quaternion_Core );
	if( field->value->size == 1 ){
		switch( field->value->chars[0] - 'w' ){
		case 0 : DaoProcess_PutFloat( proc, object->w_ ); return NULL;
		case 1 : DaoProcess_PutFloat( proc, object->x_ ); return NULL;
		case 2 : DaoProcess_PutFloat( proc, object->y_ ); return NULL;
		case 3 : DaoProcess_PutFloat( proc, object->z_ ); return NULL;
		default: break;
		}
	}
	return DaoCstruct_DoGetField( self, field, proc );
}

int dao_Craft_Quaternion_CheckSetField( DaoType *self, DaoString *field, DaoType *value, DaoRoutine *rout )
{
	DString *name = field->value;
	if( name->size == 1 && name->chars[0] >= 'w' && name->chars[0] <= 'z' ){
		if( value->tid >= DAO_BOOLEAN && value->tid <= DAO_FLOAT ) return DAO_OK;
		return DAO_ERROR_VALUE;
	}
	return DAO_ERROR_FIELD;
}

int dao_Craft_Quaternion_DoSetField( DaoValue *self, DaoString *field, DaoValue *value, DaoProcess *proc )
{
	Quaternion *object = (Quaternion*) DaoValue_TryCastCdataTC( self, dao_Craft_Quaternion_Core );
	dao_float f;

	if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;

	f = DaoValue_GetFloat( value );
	if( field->value->size == 1 ){
		switch( field->value->chars[0] - 'w' ){
		case 0 : object->w_ = f; return DAO_OK;
		case 1 : object->x_ = f; return DAO_OK;
		case 2 : object->y_ = f; return DAO_OK;
		case 3 : object->z_ = f; return DAO_OK;
		default: return DAO_ERROR_FIELD;
		}
	}
	return DAO_ERROR_FIELD;
}

DaoType* dao_Craft_Quaternion_CheckGetItem( DaoType *self, DaoType *index[], int N, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	if( N != 1 ) return NULL;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return NULL;
	return vms->typeFloat;
}

DaoValue* dao_Craft_Quaternion_DoGetItem( DaoValue *self, DaoValue *index[], int N, DaoProcess *proc )
{
	Quaternion *object = (Quaternion*) DaoValue_TryCastCdataTC( self, dao_Craft_Quaternion_Core );
	if( N != 1 ) return NULL;

	dao_integer idx = DaoValue_GetInteger( index[0] );

	dao_float element = 0.0;
	switch( idx ){
	case 0 : element = object->w_; break;
	case 1 : element = object->x_; break;
	case 2 : element = object->y_; break;
	case 3 : element = object->z_; break;
	default: return NULL; // TODO;
	}
	DaoProcess_PutFloat( proc, element );
	return NULL;
}

int dao_Craft_Quaternion_CheckSetItem( DaoType *self, DaoType *index[], int N, DaoType *value, DaoRoutine *rout )
{
	if( N != 1 ) return DAO_ERROR_INDEX;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return DAO_ERROR_INDEX;
	if( value->tid == DAO_NONE || value->tid > DAO_FLOAT ) return DAO_ERROR_VALUE;
	return DAO_OK;
}

int dao_Craft_Quaternion_DoSetItem( DaoValue *self, DaoValue *index[], int N, DaoValue *value, DaoProcess *proc )
{
	Quaternion *object = (Quaternion*) DaoValue_TryCastCdataTC( self, dao_Craft_Quaternion_Core );

	if( N != 1 ) return DAO_ERROR_INDEX;
	if( value->type == DAO_NONE || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;

	dao_integer idx = DaoValue_GetInteger( index[0] );
	dao_float element = DaoValue_GetFloat( value );

	switch( idx ){
	case 0 : object->w_ = element; break;
	case 1 : object->x_ = element; break;
	case 2 : object->y_ = element; break;
	case 3 : object->z_ = element; break;
	default: return DAO_ERROR_INDEX; // TODO;
	}
	return DAO_OK;
}

DaoType* dao_Craft_Quaternion_CheckUnary( DaoType *self, DaoVmCode *op, DaoRoutine *rout )
{
	if( op->code != DVM_MINUS ) return NULL;
	return self;
}

DaoValue* dao_Craft_Quaternion_DoUnary( DaoValue *self, DaoVmCode *op, DaoProcess *proc )
{
	Quaternion *object = (Quaternion*) DaoValue_TryCastCdataTC( self, dao_Craft_Quaternion_Core );

	if( op->code != DVM_MINUS ) return NULL;
	if( op->c == op->a ){
		*object = - *object;
		return self;
	}
	DaoProcess_PutCdataTC( proc, new Quaternion( - *object ), dao_Craft_Quaternion_Core );
	return NULL;
}

DaoType* dao_Craft_Quaternion_CheckBinary( DaoType *self, DaoVmCode *op, DaoType *operands[2], DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	DaoType *type_Vector3 = DaoVmSpace_GetType( vms, dao_Craft_Vector3_Core );

	switch( op->code ){
	case DVM_ADD : case DVM_SUB : case DVM_MUL :
	case DVM_EQ  : case DVM_NE :
		break;
	default: return NULL;
	}

	if( ! DaoType_ChildOf( operands[0], self ) ) return NULL;
	if( ! DaoType_ChildOf( operands[1], self ) ){
		if( op->code == DVM_MUL && DaoType_ChildOf( operands[1], type_Vector3 ) ){
			return type_Vector3;
		}else{
			if( operands[1]->tid == DAO_NONE || operands[1]->tid > DAO_FLOAT ) return NULL;
		}
	}

	switch( op->code ){
	case DVM_ADD : case DVM_SUB : case DVM_MUL :
		return self;
	case DVM_EQ  : case DVM_NE :
		return vms->typeBool;
	default: return NULL;
	}
	return NULL;
}

DaoValue* dao_Craft_Quaternion_DoBinary( DaoValue *self, DaoVmCode *op, DaoValue *operands[2], DaoProcess *proc )
{
	Quaternion *A = (Quaternion*) DaoValue_TryCastCdataTC( operands[0], dao_Craft_Quaternion_Core );
	Quaternion *B = (Quaternion*) DaoValue_TryCastCdataTC( operands[1], dao_Craft_Quaternion_Core );
	Quaternion *C = (Quaternion*) DaoValue_TryCastCdataTC( self, dao_Craft_Quaternion_Core );
	Quaternion res;

	if( A == NULL ) return NULL;
	if( B == NULL ){
		if( operands[1]->type >= DAO_BOOLEAN && operands[1]->type <= DAO_FLOAT ){
			dao_float F = DaoValue_GetFloat( operands[1] );
			if( op->code == DVM_MUL ){
				res = *A * F;
			}else{
				return NULL;
			}
			if( op->c == op->a ){
				*C = res;
				return self;
			}
			DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Quaternion_Core );
			return NULL;
		}else{
			Vector3 *V = (Vector3*) DaoValue_TryCastCdataTC( operands[1], dao_Craft_Vector3_Core );
			if( V != NULL && op->code == DVM_MUL ){
				if( op->c == op->b ){
					*V = *A * *V;
					return self;
				}else{
					Vector3 res = *A * *V;
					DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Vector3_Core );
					return NULL;
				}
			}
		}
	}

	if( A == NULL || B == NULL || C == NULL ) return NULL;

	switch( op->code ){
	case DVM_ADD : res = *A + *B; break;
	case DVM_SUB : res = *A - *B; break;
	case DVM_MUL : res = *A * *B; break;
	case DVM_EQ  : DaoProcess_PutBoolean( proc, *A == *B ); return NULL;
	case DVM_NE  : DaoProcess_PutBoolean( proc, *A != *B ); return NULL;
	default: return NULL;
	}
	if( op->c == op->a || op->c == op->b ){
		*C = res;
		return self;
	}
	DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Quaternion_Core );
	return NULL;
}





DaoType* dao_Craft_Matrix3_CheckGetItem( DaoType *self, DaoType *index[], int N, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	if( N != 2 ) return NULL;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return NULL;
	if( index[1]->tid == DAO_NONE || index[1]->tid > DAO_FLOAT ) return NULL;
	return vms->typeFloat;
}

DaoValue* dao_Craft_Matrix3_DoGetItem( DaoValue *self, DaoValue *index[], int N, DaoProcess *proc )
{
	Matrix3 *mat = (Matrix3*) DaoValue_TryCastCdataTC( self, dao_Craft_Matrix3_Core );

	if( N != 2 ) return NULL;
	if( index[0]->type == DAO_NONE || index[0]->type > DAO_FLOAT ) return NULL;
	if( index[1]->type == DAO_NONE || index[1]->type > DAO_FLOAT ) return NULL;

	dao_integer i = DaoValue_GetInteger( index[0] );
	dao_integer j = DaoValue_GetInteger( index[1] );
	if( i < 0 || j < 0 || i >= 3 || j >= 3 ){
		DaoProcess_RaiseError( proc, "Index::Range", "" );
		return NULL;
	}
	DaoProcess_PutFloat( proc, mat->Data()[ 3*i + j ] );
	return NULL;
}

int dao_Craft_Matrix3_CheckSetItem( DaoType *self, DaoType *index[], int N, DaoType *value, DaoRoutine *rout )
{
	if( N != 2 ) return DAO_ERROR_INDEX;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return DAO_ERROR_INDEX;
	if( index[1]->tid == DAO_NONE || index[1]->tid > DAO_FLOAT ) return DAO_ERROR_INDEX;
	if( value->tid == DAO_NONE || value->tid > DAO_FLOAT ) return DAO_ERROR_VALUE;
	return DAO_OK;
}

int dao_Craft_Matrix3_DoSetItem( DaoValue *self, DaoValue *index[], int N, DaoValue *value, DaoProcess *proc )
{
	Matrix3 *mat = (Matrix3*) DaoValue_TryCastCdataTC( self, dao_Craft_Matrix3_Core );

	if( N != 2 ) return DAO_ERROR_INDEX;
	if( index[0]->type == DAO_NONE || index[0]->type > DAO_FLOAT ) return DAO_ERROR_INDEX;
	if( index[1]->type == DAO_NONE || index[1]->type > DAO_FLOAT ) return DAO_ERROR_INDEX;

	dao_integer i = DaoValue_GetInteger( index[0] );
	dao_integer j = DaoValue_GetInteger( index[1] );
	if( i < 0 || j < 0 || i >= 3 || j >= 3 ) return DAO_ERROR_INDEX_RANGE;
	if( value->type == DAO_NONE || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;

	float *data = (float*) mat->Data();
	data[ 3*i + j ] = DaoValue_GetFloat( value );
	return DAO_OK;
}

DaoType* dao_Craft_Matrix3_CheckUnary( DaoType *self, DaoVmCode *op, DaoRoutine *rout )
{
	return NULL;
}

DaoValue* dao_Craft_Matrix3_DoUnary( DaoValue *self, DaoVmCode *op, DaoProcess *proc )
{
	return NULL;
}

DaoType* dao_Craft_Matrix3_CheckBinary( DaoType *self, DaoVmCode *op, DaoType *operands[2], DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	DaoType *type_Vector3 = DaoVmSpace_GetType( vms, dao_Craft_Vector3_Core );

	switch( op->code ){
	case DVM_ADD : case DVM_SUB : case DVM_MUL :
	case DVM_EQ  : case DVM_NE :
		break;
	default: return NULL;
	}

	if( ! DaoType_ChildOf( operands[0], self ) ) return NULL;
	if( ! DaoType_ChildOf( operands[1], self ) ){
		if( op->code == DVM_MUL && DaoType_ChildOf( operands[1], type_Vector3 ) ){
			return type_Vector3;
		}else{
			if( operands[1]->tid == DAO_NONE || operands[1]->tid > DAO_FLOAT ) return NULL;
		}
	}

	switch( op->code ){
	case DVM_ADD : case DVM_SUB : case DVM_MUL :
		return self;
	case DVM_EQ  : case DVM_NE :
		return vms->typeBool;
	default: return NULL;
	}
	return NULL;
}

DaoValue* dao_Craft_Matrix3_DoBinary( DaoValue *self, DaoVmCode *op, DaoValue *operands[2], DaoProcess *proc )
{
	Matrix3 *A = (Matrix3*) DaoValue_TryCastCdataTC( operands[0], dao_Craft_Matrix3_Core );
	Matrix3 *B = (Matrix3*) DaoValue_TryCastCdataTC( operands[1], dao_Craft_Matrix3_Core );
	Matrix3 *C = (Matrix3*) DaoValue_TryCastCdataTC( self, dao_Craft_Matrix3_Core );
	Matrix3 res;

	if( A == NULL ) return NULL;
	if( B == NULL ){
		if( operands[1]->type >= DAO_BOOLEAN && operands[1]->type <= DAO_FLOAT ){
			dao_float F = DaoValue_GetFloat( operands[1] );
			if( op->code == DVM_MUL ){
				res = *A * F;
			}else{
				return NULL;
			}
			if( op->c == op->a ){
				*C = res;
				return self;
			}
			DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Matrix3_Core );
			return NULL;
		}else{
			Vector3 *V = (Vector3*) DaoValue_TryCastCdataTC( operands[1], dao_Craft_Vector3_Core );
			if( V != NULL && op->code == DVM_MUL ){
				if( op->c == op->b ){
					*V = *A * *V;
					return self;
				}else{
					Vector3 res = *A * *V;
					DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Vector3_Core );
					return NULL;
				}
			}
		}
	}

	if( A == NULL || B == NULL || C == NULL ) return NULL;

	switch( op->code ){
	case DVM_ADD : res = *A + *B; break;
	case DVM_SUB : res = *A - *B; break;
	case DVM_MUL : res = *A * *B; break;
	case DVM_EQ  : DaoProcess_PutBoolean( proc, *A == *B ); return NULL;
	case DVM_NE  : DaoProcess_PutBoolean( proc, *A != *B ); return NULL;
	default: return NULL;
	}
	if( op->c == op->a || op->c == op->b ){
		*C = res;
		return self;
	}
	DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Matrix3_Core );
	return NULL;
}





DaoType* dao_Craft_Matrix3x4_CheckGetItem( DaoType *self, DaoType *index[], int N, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	if( N != 2 ) return NULL;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return NULL;
	if( index[1]->tid == DAO_NONE || index[1]->tid > DAO_FLOAT ) return NULL;
	return vms->typeFloat;
}

DaoValue* dao_Craft_Matrix3x4_DoGetItem( DaoValue *self, DaoValue *index[], int N, DaoProcess *proc )
{
	Matrix3x4 *mat = (Matrix3x4*) DaoValue_TryCastCdataTC( self, dao_Craft_Matrix3x4_Core );

	if( N != 2 ) return NULL;
	if( index[0]->type == DAO_NONE || index[0]->type > DAO_FLOAT ) return NULL;
	if( index[1]->type == DAO_NONE || index[1]->type > DAO_FLOAT ) return NULL;

	dao_integer i = DaoValue_GetInteger( index[0] );
	dao_integer j = DaoValue_GetInteger( index[1] );
	if( i < 0 || j < 0 || i >= 3 || j >= 4 ){
		DaoProcess_RaiseError( proc, "Index::Range", "" );
		return NULL;
	}
	DaoProcess_PutFloat( proc, mat->Data()[ 4*i + j ] );
	return NULL;
}

int dao_Craft_Matrix3x4_CheckSetItem( DaoType *self, DaoType *index[], int N, DaoType *value, DaoRoutine *rout )
{
	if( N != 2 ) return DAO_ERROR_INDEX;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return DAO_ERROR_INDEX;
	if( index[1]->tid == DAO_NONE || index[1]->tid > DAO_FLOAT ) return DAO_ERROR_INDEX;
	if( value->tid == DAO_NONE || value->tid > DAO_FLOAT ) return DAO_ERROR_VALUE;
	return DAO_OK;
}

int dao_Craft_Matrix3x4_DoSetItem( DaoValue *self, DaoValue *index[], int N, DaoValue *value, DaoProcess *proc )
{
	Matrix3x4 *mat = (Matrix3x4*) DaoValue_TryCastCdataTC( self, dao_Craft_Matrix3x4_Core );

	if( N != 2 ) return DAO_ERROR_INDEX;
	if( index[0]->type == DAO_NONE || index[0]->type > DAO_FLOAT ) return DAO_ERROR_INDEX;
	if( index[1]->type == DAO_NONE || index[1]->type > DAO_FLOAT ) return DAO_ERROR_INDEX;

	dao_integer i = DaoValue_GetInteger( index[0] );
	dao_integer j = DaoValue_GetInteger( index[1] );
	if( i < 0 || j < 0 || i >= 3 || j >= 4 ) return DAO_ERROR_INDEX_RANGE;
	if( value->type == DAO_NONE || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;

	float *data = (float*) mat->Data();
	data[ 4*i + j ] = DaoValue_GetFloat( value );
	return DAO_OK;
}

DaoType* dao_Craft_Matrix3x4_CheckUnary( DaoType *self, DaoVmCode *op, DaoRoutine *rout )
{
	return NULL;
}

DaoValue* dao_Craft_Matrix3x4_DoUnary( DaoValue *self, DaoVmCode *op, DaoProcess *proc )
{
	return NULL;
}

DaoType* dao_Craft_Matrix3x4_CheckBinary( DaoType *self, DaoVmCode *op, DaoType *operands[2], DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	DaoType *type_Vector3 = DaoVmSpace_GetType( vms, dao_Craft_Vector3_Core );
	DaoType *type_Vector4 = DaoVmSpace_GetType( vms, dao_Craft_Vector4_Core );
	DaoType *type_Matrix4 = DaoVmSpace_GetType( vms, dao_Craft_Matrix4_Core );

	switch( op->code ){
	case DVM_ADD : case DVM_SUB : case DVM_MUL :
	case DVM_EQ  : case DVM_NE :
		break;
	default: return NULL;
	}

	if( ! DaoType_ChildOf( operands[0], self ) ) return NULL;
	if( ! DaoType_ChildOf( operands[1], self ) ){
		if( op->code == DVM_MUL && DaoType_ChildOf( operands[1], type_Vector3 ) ){
			return type_Vector3;
		}else if( op->code == DVM_MUL && DaoType_ChildOf( operands[1], type_Vector4 ) ){
			return type_Vector3;
		}else if( op->code == DVM_MUL && DaoType_ChildOf( operands[1], type_Matrix4 ) ){
			return type_Matrix4;
		}else{
			if( operands[1]->tid == DAO_NONE || operands[1]->tid > DAO_FLOAT ) return NULL;
		}
	}

	switch( op->code ){
	case DVM_ADD : case DVM_SUB : case DVM_MUL :
		return self;
	case DVM_EQ  : case DVM_NE :
		return vms->typeBool;
	default: return NULL;
	}
	return NULL;
}

DaoValue* dao_Craft_Matrix3x4_DoBinary( DaoValue *self, DaoVmCode *op, DaoValue *operands[2], DaoProcess *proc )
{
	Matrix3x4 *A = (Matrix3x4*) DaoValue_TryCastCdataTC( operands[0], dao_Craft_Matrix3x4_Core );
	Matrix3x4 *B = (Matrix3x4*) DaoValue_TryCastCdataTC( operands[1], dao_Craft_Matrix3x4_Core );
	Matrix3x4 *C = (Matrix3x4*) DaoValue_TryCastCdataTC( self, dao_Craft_Matrix3x4_Core );
	Matrix3x4 res;

	if( A == NULL ) return NULL;
	if( B == NULL ){
		if( operands[1]->type >= DAO_BOOLEAN && operands[1]->type <= DAO_FLOAT ){
			dao_float F = DaoValue_GetFloat( operands[1] );
			if( op->code == DVM_MUL ){
				res = *A * F;
			}else{
				return NULL;
			}
			if( op->c == op->a ){
				*C = res;
				return self;
			}
			DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Matrix3x4_Core );
			return NULL;
		}else if( op->code == DVM_MUL ){
			DaoValue *B = operands[1];
			Vector3 *V3;
			Vector4 *V4;
			Matrix4 *M4;
			if( (V3 = (Vector3*) DaoValue_TryCastCdataTC( B, dao_Craft_Vector3_Core )) != NULL ){
				if( op->c == op->b ){
					*V3 = *A * *V3;
					return self;
				}else{
					Vector3 res = *A * *V3;
					DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Vector3_Core );
					return NULL;
				}
			}else if( (V4 = (Vector4*) DaoValue_TryCastCdataTC( B, dao_Craft_Vector4_Core )) != NULL ){
				Vector3 res = *A * *V4;
				DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Vector3_Core );
				return NULL;
			}else if( (M4 = (Matrix4*) DaoValue_TryCastCdataTC( B, dao_Craft_Matrix4_Core )) != NULL ){
				if( op->c == op->b ){
					*M4 = *A * *M4;
					return self;
				}else{
					Matrix4 res = *A * *M4;
					DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Matrix4_Core );
					return NULL;
				}
			}
		}
	}

	if( A == NULL || B == NULL || C == NULL ) return NULL;

	switch( op->code ){
	case DVM_ADD : res = *A + *B; break;
	case DVM_SUB : res = *A - *B; break;
	case DVM_MUL : res = *A * *B; break;
	case DVM_EQ  : DaoProcess_PutBoolean( proc, *A == *B ); return NULL;
	case DVM_NE  : DaoProcess_PutBoolean( proc, *A != *B ); return NULL;
	default: return NULL;
	}
	if( op->c == op->a || op->c == op->b ){
		*C = res;
		return self;
	}
	DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Matrix3x4_Core );
	return NULL;
}





DaoType* dao_Craft_Matrix4_CheckGetItem( DaoType *self, DaoType *index[], int N, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	if( N != 2 ) return NULL;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return NULL;
	if( index[1]->tid == DAO_NONE || index[1]->tid > DAO_FLOAT ) return NULL;
	return vms->typeFloat;
}

DaoValue* dao_Craft_Matrix4_DoGetItem( DaoValue *self, DaoValue *index[], int N, DaoProcess *proc )
{
	Matrix4 *mat = (Matrix4*) DaoValue_TryCastCdataTC( self, dao_Craft_Matrix4_Core );

	if( N != 2 ) return NULL;
	if( index[0]->type == DAO_NONE || index[0]->type > DAO_FLOAT ) return NULL;
	if( index[1]->type == DAO_NONE || index[1]->type > DAO_FLOAT ) return NULL;

	dao_integer i = DaoValue_GetInteger( index[0] );
	dao_integer j = DaoValue_GetInteger( index[1] );
	if( i < 0 || j < 0 || i >= 4 || j >= 4 ){
		DaoProcess_RaiseError( proc, "Index::Range", "" );
		return NULL;
	}
	DaoProcess_PutFloat( proc, mat->Data()[ 4*i + j ] );
	return NULL;
}

int dao_Craft_Matrix4_CheckSetItem( DaoType *self, DaoType *index[], int N, DaoType *value, DaoRoutine *rout )
{
	if( N != 2 ) return DAO_ERROR_INDEX;
	if( index[0]->tid == DAO_NONE || index[0]->tid > DAO_FLOAT ) return DAO_ERROR_INDEX;
	if( index[1]->tid == DAO_NONE || index[1]->tid > DAO_FLOAT ) return DAO_ERROR_INDEX;
	if( value->tid == DAO_NONE || value->tid > DAO_FLOAT ) return DAO_ERROR_VALUE;
	return DAO_OK;
}

int dao_Craft_Matrix4_DoSetItem( DaoValue *self, DaoValue *index[], int N, DaoValue *value, DaoProcess *proc )
{
	Matrix4 *mat = (Matrix4*) DaoValue_TryCastCdataTC( self, dao_Craft_Matrix4_Core );

	if( N != 2 ) return DAO_ERROR_INDEX;
	if( index[0]->type == DAO_NONE || index[0]->type > DAO_FLOAT ) return DAO_ERROR_INDEX;
	if( index[1]->type == DAO_NONE || index[1]->type > DAO_FLOAT ) return DAO_ERROR_INDEX;

	dao_integer i = DaoValue_GetInteger( index[0] );
	dao_integer j = DaoValue_GetInteger( index[1] );
	if( i < 0 || j < 0 || i >= 4 || j >= 4 ) return DAO_ERROR_INDEX_RANGE;
	if( value->type == DAO_NONE || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;

	float *data = (float*) mat->Data();
	data[ 4*i + j ] = DaoValue_GetFloat( value );
	return DAO_OK;
}

DaoType* dao_Craft_Matrix4_CheckUnary( DaoType *self, DaoVmCode *op, DaoRoutine *rout )
{
	return NULL;
}

DaoValue* dao_Craft_Matrix4_DoUnary( DaoValue *self, DaoVmCode *op, DaoProcess *proc )
{
	return NULL;
}

DaoType* dao_Craft_Matrix4_CheckBinary( DaoType *self, DaoVmCode *op, DaoType *operands[2], DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	DaoType *type_Vector4 = DaoVmSpace_GetType( vms, dao_Craft_Vector4_Core );

	switch( op->code ){
	case DVM_ADD : case DVM_SUB : case DVM_MUL :
	case DVM_EQ  : case DVM_NE :
		break;
	default: return NULL;
	}

	if( ! DaoType_ChildOf( operands[0], self ) ) return NULL;
	if( ! DaoType_ChildOf( operands[1], self ) ){
		if( op->code == DVM_MUL && DaoType_ChildOf( operands[1], type_Vector4 ) ){
			return type_Vector4;
		}else{
			if( operands[1]->tid == DAO_NONE || operands[1]->tid > DAO_FLOAT ) return NULL;
		}
	}

	switch( op->code ){
	case DVM_ADD : case DVM_SUB : case DVM_MUL :
		return self;
	case DVM_EQ  : case DVM_NE :
		return vms->typeBool;
	default: return NULL;
	}
	return NULL;
}

DaoValue* dao_Craft_Matrix4_DoBinary( DaoValue *self, DaoVmCode *op, DaoValue *operands[2], DaoProcess *proc )
{
	Matrix4 *A = (Matrix4*) DaoValue_TryCastCdataTC( operands[0], dao_Craft_Matrix4_Core );
	Matrix4 *B = (Matrix4*) DaoValue_TryCastCdataTC( operands[1], dao_Craft_Matrix4_Core );
	Matrix4 *C = (Matrix4*) DaoValue_TryCastCdataTC( self, dao_Craft_Matrix4_Core );
	Matrix4 res;

	if( A == NULL ) return NULL;
	if( B == NULL ){
		if( operands[1]->type >= DAO_BOOLEAN && operands[1]->type <= DAO_FLOAT ){
			dao_float F = DaoValue_GetFloat( operands[1] );
			if( op->code == DVM_MUL ){
				res = *A * F;
			}else{
				return NULL;
			}
			if( op->c == op->a ){
				*C = res;
				return self;
			}
			DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Matrix4_Core );
			return NULL;
		}else{
			Vector4 *V = (Vector4*) DaoValue_TryCastCdataTC( operands[1], dao_Craft_Vector4_Core );
			if( V != NULL && op->code == DVM_MUL ){
				if( op->c == op->b ){
					*V = *A * *V;
					return self;
				}else{
					Vector4 res = *A * *V;
					DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Vector4_Core );
					return NULL;
				}
			}
		}
	}

	if( A == NULL || B == NULL || C == NULL ) return NULL;

	switch( op->code ){
	case DVM_ADD : res = *A + *B; break;
	case DVM_SUB : res = *A - *B; break;
	case DVM_MUL : res = *A * *B; break;
	case DVM_EQ  : DaoProcess_PutBoolean( proc, *A == *B ); return NULL;
	case DVM_NE  : DaoProcess_PutBoolean( proc, *A != *B ); return NULL;
	default: return NULL;
	}
	if( op->c == op->a || op->c == op->b ){
		*C = res;
		return self;
	}
	DaoProcess_CopyCdataTC( proc, (void*) & res, dao_Craft_Matrix4_Core );
	return NULL;
}





void dao_Craft_Object_SubscribeToEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Object* self = (Craft::Object*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Object_Core );
	Craft::String eventKey( DaoValue_TryGetChars( _p[1] ) );
	Craft::EventHandler* handler = (Craft::EventHandler*) DaoValue_TryCastCdataTC( _p[2], dao_Craft_EventHandler_Core );

	self->SubscribeToEvent( DaoCraft_MakeStringHash( _proc, eventKey ), handler );
}

void dao_Craft_Object_SubscribeToEvent_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Object* self = (Craft::Object*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Object_Core );
	Craft::Object* sender = (Craft::Object*) DaoValue_TryCastCdataTC( _p[1], dao_Craft_Object_Core );
	Craft::String eventKey( DaoValue_TryGetChars( _p[2] ) );
	Craft::EventHandler* handler = (Craft::EventHandler*) DaoValue_TryCastCdataTC( _p[3], dao_Craft_EventHandler_Core );

	self->SubscribeToEvent( sender, DaoCraft_MakeStringHash( _proc, eventKey ), handler );
}

void dao_Craft_Object_UnsubscribeFromEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Object* self = (Craft::Object*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Object_Core );
	Craft::String eventKey( DaoValue_TryGetChars( _p[1] ) );

	self->UnsubscribeFromEvent( DaoCraft_MakeStringHash( _proc, eventKey ) );
}

void dao_Craft_Object_UnsubscribeFromEvent_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Object* self = (Craft::Object*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Object_Core );
	Craft::Object* sender = (Craft::Object*) DaoValue_TryCastCdataTC( _p[1], dao_Craft_Object_Core );
	Craft::String eventKey( DaoValue_TryGetChars( _p[2] ) );

	self->UnsubscribeFromEvent( sender, DaoCraft_MakeStringHash( _proc, eventKey ) );
}

void dao_Craft_Object_SendEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Object* self = (Craft::Object*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Object_Core );
	Craft::String eventKey( DaoValue_TryGetChars( _p[1] ) );

	self->SendEvent( DaoCraft_MakeStringHash( _proc, eventKey ) );
}

void dao_Craft_Object_SendEvent_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Object* self = (Craft::Object*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Object_Core );
	Craft::String eventKey( DaoValue_TryGetChars( _p[1] ) );
	Craft::VariantMap* eventData = (Craft::VariantMap*) DaoValue_TryCastCdataTC( _p[2], dao_Craft_VariantMap_Core );

	self->SendEvent( DaoCraft_MakeStringHash( _proc, eventKey ), *eventData );
}

void dao_Craft_Object_HasSubscribedToEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Object* self = (Craft::Object*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Object_Core );
	Craft::String eventKey( DaoValue_TryGetChars( _p[1] ) );

	bool res = self->HasSubscribedToEvent( DaoCraft_MakeStringHash( _proc, eventKey ) );
	DaoProcess_PutBoolean( _proc, (dao_boolean) res );
}

void dao_Craft_Object_HasSubscribedToEvent_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Object* self = (Craft::Object*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Object_Core );
	Craft::Object* sender = (Craft::Object*) DaoValue_TryCastCdataTC( _p[1], dao_Craft_Object_Core );
	Craft::String eventKey( DaoValue_TryGetChars( _p[2] ) );

	bool res = self->HasSubscribedToEvent( sender, DaoCraft_MakeStringHash( _proc, eventKey ) );
	DaoProcess_PutBoolean( _proc, (dao_boolean) res );
}




void dao_Craft_Material_Clone( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Material* self = (Craft::Material*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Material_Core );
	char *__chars_cloneName = DaoValue_TryGetChars( _p[1] );
	Craft::String cloneName( __chars_cloneName );

	Craft::SharedPtr<Craft::Material> _Clone = self->Clone( cloneName );
	DaoProcess_WrapCdataTC( _proc, (void*) _Clone.Get(), dao_Craft_Material_Core );
}




DaoType* dao_Craft_RigidBody_CheckGetField( DaoType *self, DaoString *field, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	DaoType *type_Vector3 = DaoVmSpace_GetType( vms, dao_Craft_Vector3_Core );
	DaoType *type_Quaternion = DaoVmSpace_GetType( vms, dao_Craft_Quaternion_Core );
	DString *name = field->value;

	if( name->chars[0] < 'a' || name->chars[0] > 'z' ){
		return DaoCstruct_CheckGetField( self, field, rout );
	}

	switch( (name->chars[0] - 'a') | ((name->size+1) << 5) ){
	case ('m'-'a') | (sizeof("mass")<<5):
		if( strcmp( name->chars, "mass" ) == 0 ) return vms->typeFloat;
		break;
	case ('p'-'a') | (sizeof("position")<<5):
		if( strcmp( name->chars, "position" ) == 0 ) return type_Vector3;
		break;
	case ('r'-'a') | (sizeof("rotation")<<5):
		if( strcmp( name->chars, "rotation" ) == 0 ) return type_Quaternion;
		break;
	case ('l'-'a') | (sizeof("linearVelocity")<<5):
		if( strcmp( name->chars, "linearVelocity" ) == 0 ) return type_Vector3;
		break;
	case ('l'-'a') | (sizeof("linearFactor")<<5):
		if( strcmp( name->chars, "linearFactor" ) == 0 ) return type_Vector3;
		break;
	case ('l'-'a') | (sizeof("linearRestThreshold")<<5):
		if( strcmp( name->chars, "linearRestThreshold" ) == 0 ) return vms->typeFloat;
		break;
	case ('l'-'a') | (sizeof("linearDamping")<<5):
		if( strcmp( name->chars, "linearDamping" ) == 0 ) return vms->typeFloat;
		break;
	case ('a'-'a') | (sizeof("angularVelocity")<<5):
		if( strcmp( name->chars, "angularVelocity" ) == 0 ) return type_Vector3;
		break;
	case ('a'-'a') | (sizeof("angularFactor")<<5):
		if( strcmp( name->chars, "angularFactor" ) == 0 ) return type_Vector3;
		break;
	case ('a'-'a') | (sizeof("angularRestThreshold")<<5):
		if( strcmp( name->chars, "angularRestThreshold" ) == 0 ) return vms->typeFloat;
		break;
	case ('a'-'a') | (sizeof("angularDamping")<<5):
		if( strcmp( name->chars, "angularDamping" ) == 0 ) return vms->typeFloat;
		break;
	case ('f'-'a') | (sizeof("friction")<<5):
		if( strcmp( name->chars, "friction" ) == 0 ) return vms->typeFloat;
		break;
	case ('a'-'a') | (sizeof("anisotropicFriction")<<5):
		if( strcmp( name->chars, "anisotropicFriction" ) == 0 ) return type_Vector3;
		break;
	case ('r'-'a') | (sizeof("rollingFriction")<<5):
		if( strcmp( name->chars, "rollingFriction" ) == 0 ) return vms->typeFloat;
		break;
	case ('r'-'a') | (sizeof("restitution")<<5):
		if( strcmp( name->chars, "restitution" ) == 0 ) return vms->typeFloat;
		break;
	case ('c'-'a') | (sizeof("contactProcessingThreshold")<<5):
		if( strcmp( name->chars, "contactProcessingThreshold" ) == 0 ) return vms->typeFloat;
		break;
#if 0
	case ('c'-'a') | (sizeof("ccdRadius")<<5):
		if( strcmp( name->chars, "ccdRadius" ) == 0 ) return vms->typeFloat;
		break;
	case ('c'-'a') | (sizeof("ccdMotionThreshold")<<5):
		if( strcmp( name->chars, "ccdMotionThreshold" ) == 0 ) return vms->typeFloat;
		break;
#endif
	case ('u'-'a') | (sizeof("useGravity")<<5):
		if( strcmp( name->chars, "useGravity" ) == 0 ) return vms->typeBool;
		break;
	case ('g'-'a') | (sizeof("gravityOverride")<<5):
		if( strcmp( name->chars, "gravityOverride" ) == 0 ) return type_Vector3;
		break;
	case ('c'-'a') | (sizeof("centerOfMass")<<5):
		if( strcmp( name->chars, "centerOfMass" ) == 0 ) return type_Vector3;
		break;
	case ('i'-'a') | (sizeof("isKinematic")<<5):
		if( strcmp( name->chars, "isKinematic" ) == 0 ) return vms->typeBool;
		break;
	case ('i'-'a') | (sizeof("isTrigger")<<5):
		if( strcmp( name->chars, "isTrigger" ) == 0 ) return vms->typeBool;
		break;
	case ('i'-'a') | (sizeof("isActive")<<5):
		if( strcmp( name->chars, "isActive" ) == 0 ) return vms->typeBool;
		break;
	case ('c'-'a') | (sizeof("collisionLayer")<<5):
		if( strcmp( name->chars, "collisionLayer" ) == 0 ) return vms->typeInt;
		break;
	case ('c'-'a') | (sizeof("collisionMask")<<5):
		if( strcmp( name->chars, "collisionMask" ) == 0 ) return vms->typeInt;
		break;
	case ('c'-'a') | (sizeof("collisionEventMode")<<5):
		if( strcmp( name->chars, "collisionEventMode" ) == 0 ) return vms->typeInt;
		break;
	}
	return DaoCstruct_CheckGetField( self, field, rout );
}

DaoValue* dao_Craft_RigidBody_DoGetField( DaoValue *self, DaoString *field, DaoProcess *proc )
{
	DaoVmSpace *vms = proc->vmSpace;
	DaoType *type_Vector3 = DaoVmSpace_GetType( vms, dao_Craft_Vector3_Core );
	RigidBody *body = (RigidBody*) DaoValue_TryCastCdataTC( self, dao_Craft_RigidBody_Core );
	DString *name = field->value;

	if( name->chars[0] < 'a' || name->chars[0] > 'z' ){
		return DaoCstruct_DoGetField( self, field, proc );
	}

	int resint = 0;
	bool resbool = false;
	float resfloat = 0.0;
	Vector3 resvector;
	Quaternion resquat;
	DaoType *restype = NULL;

	switch( (name->chars[0] - 'a') | ((name->size+1) << 5) ){
	case ('m'-'a') | (sizeof("mass")<<5):
		if( strcmp( name->chars, "mass" ) != 0 ) break;
		restype = vms->typeFloat;
		resfloat = body->GetMass();
		break;
	case ('p'-'a') | (sizeof("position")<<5):
		if( strcmp( name->chars, "position" ) != 0 ) break;
		restype = type_Vector3;
		resvector = body->GetPosition();
		break;
	case ('r'-'a') | (sizeof("rotation")<<5):
		if( strcmp( name->chars, "rotation" ) != 0 ) break;
		resquat = body->GetRotation();
		DaoProcess_CopyCdataTC( proc, (void*) & resquat, dao_Craft_Quaternion_Core );
		return NULL;
	case ('l'-'a') | (sizeof("linearVelocity")<<5):
		if( strcmp( name->chars, "linearVelocity" ) != 0 ) break;
		restype = type_Vector3;
		resvector = body->GetLinearVelocity();
		break;
	case ('l'-'a') | (sizeof("linearFactor")<<5):
		if( strcmp( name->chars, "linearFactor" ) != 0 ) break;
		restype = type_Vector3;
		resvector = body->GetLinearFactor();
		break;
	case ('l'-'a') | (sizeof("linearRestThreshold")<<5):
		if( strcmp( name->chars, "linearRestThreshold" ) != 0 ) break;
		restype = vms->typeFloat;
		resfloat = body->GetLinearRestThreshold();
		break;
	case ('l'-'a') | (sizeof("linearDamping")<<5):
		if( strcmp( name->chars, "linearDamping" ) != 0 ) break;
		restype = vms->typeFloat;
		resfloat = body->GetLinearDamping();
		break;
	case ('a'-'a') | (sizeof("angularVelocity")<<5):
		if( strcmp( name->chars, "angularVelocity" ) != 0 ) break;
		restype = type_Vector3;
		resvector = body->GetAngularVelocity();
		break;
	case ('a'-'a') | (sizeof("angularFactor")<<5):
		if( strcmp( name->chars, "angularFactor" ) != 0 ) break;
		restype = type_Vector3;
		resvector = body->GetAngularFactor();
		break;
	case ('a'-'a') | (sizeof("angularRestThreshold")<<5):
		if( strcmp( name->chars, "angularRestThreshold" ) != 0 ) break;
		restype = vms->typeFloat;
		resfloat = body->GetAngularRestThreshold();
		break;
	case ('a'-'a') | (sizeof("angularDamping")<<5):
		if( strcmp( name->chars, "angularDamping" ) != 0 ) break;
		restype = vms->typeFloat;
		resfloat = body->GetAngularDamping();
		break;
	case ('f'-'a') | (sizeof("friction")<<5):
		if( strcmp( name->chars, "friction" ) != 0 ) break;
		restype = vms->typeFloat;
		resfloat = body->GetFriction();
		break;
	case ('a'-'a') | (sizeof("anisotropicFriction")<<5):
		if( strcmp( name->chars, "anisotropicFriction" ) != 0 ) break;
		restype = type_Vector3;
		resvector = body->GetAnisotropicFriction();
		break;
	case ('r'-'a') | (sizeof("rollingFriction")<<5):
		if( strcmp( name->chars, "rollingFriction" ) != 0 ) break;
		restype = vms->typeFloat;
		resfloat = body->GetRollingFriction();
		break;
	case ('r'-'a') | (sizeof("restitution")<<5):
		if( strcmp( name->chars, "restitution" ) != 0 ) break;
		restype = vms->typeFloat;
		resfloat = body->GetRestitution();
		break;
	case ('c'-'a') | (sizeof("contactProcessingThreshold")<<5):
		if( strcmp( name->chars, "contactProcessingThreshold" ) != 0 ) break;
		restype = vms->typeFloat;
		resfloat = body->GetContactProcessingThreshold();
		break;
#if 0
	case ('c'-'a') | (sizeof("ccdRadius")<<5):
		if( strcmp( name->chars, "ccdRadius" ) != 0 ) break;
		restype = vms->typeFloat;
		resfloat = body->GetCcdRadius();
		break;
	case ('c'-'a') | (sizeof("ccdMotionThreshold")<<5):
		if( strcmp( name->chars, "ccdMotionThreshold" ) != 0 ) break;
		restype = vms->typeFloat;
		resfloat = body->GetCcdMotionThreshold();
		break;
#endif
	case ('u'-'a') | (sizeof("useGravity")<<5):
		if( strcmp( name->chars, "useGravity" ) != 0 ) break;
		restype = vms->typeBool;
		resbool = body->GetUseGravity();
		break;
	case ('g'-'a') | (sizeof("gravityOverride")<<5):
		if( strcmp( name->chars, "gravityOverride" ) != 0 ) break;
		restype = type_Vector3;
		resvector = body->GetGravityOverride();
		break;
	case ('c'-'a') | (sizeof("centerOfMass")<<5):
		if( strcmp( name->chars, "centerOfMass" ) != 0 ) break;
		restype = type_Vector3;
		resvector = body->GetCenterOfMass();
		break;
	case ('i'-'a') | (sizeof("isKinematic")<<5):
		if( strcmp( name->chars, "isKinematic" ) != 0 ) break;
		restype = vms->typeBool;
		resbool = body->IsKinematic();
		break;
	case ('i'-'a') | (sizeof("isTrigger")<<5):
		if( strcmp( name->chars, "isTrigger" ) != 0 ) break;
		restype = vms->typeBool;
		resbool = body->IsTrigger();
		break;
	case ('i'-'a') | (sizeof("isActive")<<5):
		if( strcmp( name->chars, "isActive" ) != 0 ) break;
		restype = vms->typeBool;
		resbool = body->IsActive();
		break;
	case ('c'-'a') | (sizeof("collisionLayer")<<5):
		if( strcmp( name->chars, "collisionLayer" ) != 0 ) break;
		restype = vms->typeInt;
		resint = body->GetCollisionLayer();
		break;
	case ('c'-'a') | (sizeof("collisionMask")<<5):
		if( strcmp( name->chars, "collisionMask" ) != 0 ) break;
		restype = vms->typeInt;
		resint = body->GetCollisionMask();
		break;
	case ('c'-'a') | (sizeof("collisionEventMode")<<5):
		if( strcmp( name->chars, "collisionEventMode" ) != 0 ) break;
		restype = vms->typeInt;
		resint = body->GetCollisionEventMode();
		break;
	}
	if( restype == vms->typeBool ){
		DaoProcess_PutBoolean( proc, resbool );
		return NULL;
	}else if( restype == vms->typeInt ){
		DaoProcess_PutInteger( proc, resint );
		return NULL;
	}else if( restype == vms->typeFloat ){
		DaoProcess_PutFloat( proc, resfloat );
		return NULL;
	}else if( restype == type_Vector3 ){
		DaoProcess_CopyCdataTC( proc, (void*) & resvector, dao_Craft_Vector3_Core );
		return NULL;
	}
	return DaoCstruct_DoGetField( self, field, proc );
}

int dao_Craft_RigidBody_CheckSetField( DaoType *self, DaoString *field, DaoType *value, DaoRoutine *rout )
{
	DaoVmSpace *vms = rout->nameSpace->vmSpace;
	DaoType *type_Vector3 = DaoVmSpace_GetType( vms, dao_Craft_Vector3_Core );
	DaoType *type_Quaternion = DaoVmSpace_GetType( vms, dao_Craft_Quaternion_Core );
	DString *name = field->value;

	if( name->chars[0] < 'a' || name->chars[0] > 'z' ) return DAO_ERROR_FIELD;

	switch( (name->chars[0] - 'a') | ((name->size+1) << 5) ){
	case ('m'-'a') | (sizeof("mass")<<5):
		if( strcmp( name->chars, "mass" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeFloat, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('p'-'a') | (sizeof("position")<<5):
		if( strcmp( name->chars, "position" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, type_Vector3, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('r'-'a') | (sizeof("rotation")<<5):
		if( strcmp( name->chars, "rotation" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, type_Quaternion, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('l'-'a') | (sizeof("linearVelocity")<<5):
		if( strcmp( name->chars, "linearVelocity" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, type_Vector3, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('l'-'a') | (sizeof("linearFactor")<<5):
		if( strcmp( name->chars, "linearFactor" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, type_Vector3, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('l'-'a') | (sizeof("linearRestThreshold")<<5):
		if( strcmp( name->chars, "linearRestThreshold" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeFloat, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('l'-'a') | (sizeof("linearDamping")<<5):
		if( strcmp( name->chars, "linearDamping" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeFloat, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('a'-'a') | (sizeof("angularVelocity")<<5):
		if( strcmp( name->chars, "angularVelocity" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, type_Vector3, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('a'-'a') | (sizeof("angularFactor")<<5):
		if( strcmp( name->chars, "angularFactor" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, type_Vector3, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('a'-'a') | (sizeof("angularRestThreshold")<<5):
		if( strcmp( name->chars, "angularRestThreshold" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeFloat, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('a'-'a') | (sizeof("angularDamping")<<5):
		if( strcmp( name->chars, "angularDamping" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeFloat, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('f'-'a') | (sizeof("friction")<<5):
		if( strcmp( name->chars, "friction" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeFloat, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('a'-'a') | (sizeof("anisotropicFriction")<<5):
		if( strcmp( name->chars, "anisotropicFriction" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, type_Vector3, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('r'-'a') | (sizeof("rollingFriction")<<5):
		if( strcmp( name->chars, "rollingFriction" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeFloat, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('r'-'a') | (sizeof("restitution")<<5):
		if( strcmp( name->chars, "restitution" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeFloat, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('c'-'a') | (sizeof("contactProcessingThreshold")<<5):
		if( strcmp( name->chars, "contactProcessingThreshold" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeFloat, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
#if 0
	case ('c'-'a') | (sizeof("ccdRadius")<<5):
		if( strcmp( name->chars, "ccdRadius" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeFloat, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('c'-'a') | (sizeof("ccdMotionThreshold")<<5):
		if( strcmp( name->chars, "ccdMotionThreshold" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeFloat, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
#endif
	case ('u'-'a') | (sizeof("useGravity")<<5):
		if( strcmp( name->chars, "useGravity" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeBool, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('g'-'a') | (sizeof("gravityOverride")<<5):
		if( strcmp( name->chars, "gravityOverride" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, type_Vector3, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('c'-'a') | (sizeof("centerOfMass")<<5):
		if( strcmp( name->chars, "centerOfMass" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, type_Vector3, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('i'-'a') | (sizeof("isKinematic")<<5):
		if( strcmp( name->chars, "isKinematic" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeBool, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('i'-'a') | (sizeof("isTrigger")<<5):
		if( strcmp( name->chars, "isTrigger" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeBool, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('i'-'a') | (sizeof("isActive")<<5):
		if( strcmp( name->chars, "isActive" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeBool, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('c'-'a') | (sizeof("collisionLayer")<<5):
		if( strcmp( name->chars, "collisionLayer" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeInt, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('c'-'a') | (sizeof("collisionMask")<<5):
		if( strcmp( name->chars, "collisionMask" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeInt, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	case ('c'-'a') | (sizeof("collisionEventMode")<<5):
		if( strcmp( name->chars, "collisionEventMode" ) != 0 ) return DAO_ERROR_FIELD;
		if( DaoType_MatchTo( value, vms->typeInt, NULL ) == 0 ) return DAO_ERROR_VALUE;
		return DAO_OK;
	}
	return DAO_ERROR_FIELD;
}

int dao_Craft_RigidBody_DoSetField( DaoValue *self, DaoString *field, DaoValue *value, DaoProcess *proc )
{
	RigidBody *body = (RigidBody*) DaoValue_TryCastCdataTC( self, dao_Craft_RigidBody_Core );
	DString *name = field->value;

	if( name->chars[0] < 'a' || name->chars[0] > 'z' ) return DAO_ERROR_FIELD;

	Vector3 *vec3;
	Quaternion *quat;

	switch( (name->chars[0] - 'a') | ((name->size+1) << 5) ){
	case ('m'-'a') | (sizeof("mass")<<5):
		if( strcmp( name->chars, "mass" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetMass( DaoValue_GetFloat( value ) );
		return DAO_OK;
	case ('p'-'a') | (sizeof("position")<<5):
		if( strcmp( name->chars, "position" ) != 0 ) break;
		vec3 = (Vector3*) DaoValue_TryCastCdataTC( value, dao_Craft_Vector3_Core );
		if( vec3 == NULL ) return DAO_ERROR_VALUE;
		body->SetPosition( *vec3 );
		return DAO_OK;
	case ('r'-'a') | (sizeof("rotation")<<5):
		if( strcmp( name->chars, "rotation" ) != 0 ) break;
		quat = (Quaternion*) DaoValue_TryCastCdataTC( value, dao_Craft_Quaternion_Core );
		if( quat == NULL ) return DAO_ERROR_VALUE;
		body->SetRotation( *quat );
		return DAO_OK;
	case ('l'-'a') | (sizeof("linearVelocity")<<5):
		if( strcmp( name->chars, "linearVelocity" ) != 0 ) break;
		vec3 = (Vector3*) DaoValue_TryCastCdataTC( value, dao_Craft_Vector3_Core );
		if( vec3 == NULL ) return DAO_ERROR_VALUE;
		body->SetLinearVelocity( *vec3 );
		return DAO_OK;
	case ('l'-'a') | (sizeof("linearFactor")<<5):
		if( strcmp( name->chars, "linearFactor" ) != 0 ) break;
		vec3 = (Vector3*) DaoValue_TryCastCdataTC( value, dao_Craft_Vector3_Core );
		if( vec3 == NULL ) return DAO_ERROR_VALUE;
		body->SetLinearFactor( *vec3 );
		return DAO_OK;
	case ('l'-'a') | (sizeof("linearRestThreshold")<<5):
		if( strcmp( name->chars, "linearRestThreshold" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetLinearRestThreshold( DaoValue_GetFloat( value ) );
		return DAO_OK;
	case ('l'-'a') | (sizeof("linearDamping")<<5):
		if( strcmp( name->chars, "linearDamping" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetLinearDamping( DaoValue_GetFloat( value ) );
		return DAO_OK;
	case ('a'-'a') | (sizeof("angularVelocity")<<5):
		if( strcmp( name->chars, "angularVelocity" ) != 0 ) break;
		vec3 = (Vector3*) DaoValue_TryCastCdataTC( value, dao_Craft_Vector3_Core );
		if( vec3 == NULL ) return DAO_ERROR_VALUE;
		body->SetAngularVelocity( *vec3 );
		return DAO_OK;
	case ('a'-'a') | (sizeof("angularFactor")<<5):
		if( strcmp( name->chars, "angularFactor" ) != 0 ) break;
		vec3 = (Vector3*) DaoValue_TryCastCdataTC( value, dao_Craft_Vector3_Core );
		if( vec3 == NULL ) return DAO_ERROR_VALUE;
		body->SetAngularFactor( *vec3 );
		return DAO_OK;
	case ('a'-'a') | (sizeof("angularRestThreshold")<<5):
		if( strcmp( name->chars, "angularRestThreshold" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetAngularRestThreshold( DaoValue_GetFloat( value ) );
		return DAO_OK;
	case ('a'-'a') | (sizeof("angularDamping")<<5):
		if( strcmp( name->chars, "angularDamping" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetAngularDamping( DaoValue_GetFloat( value ) );
		return DAO_OK;
	case ('f'-'a') | (sizeof("friction")<<5):
		if( strcmp( name->chars, "friction" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetFriction( DaoValue_GetFloat( value ) );
		return DAO_OK;
	case ('a'-'a') | (sizeof("anisotropicFriction")<<5):
		if( strcmp( name->chars, "anisotropicFriction" ) != 0 ) break;
		vec3 = (Vector3*) DaoValue_TryCastCdataTC( value, dao_Craft_Vector3_Core );
		if( vec3 == NULL ) return DAO_ERROR_VALUE;
		body->SetAnisotropicFriction( *vec3 );
		return DAO_OK;
	case ('r'-'a') | (sizeof("rollingFriction")<<5):
		if( strcmp( name->chars, "rollingFriction" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetRollingFriction( DaoValue_GetFloat( value ) );
		return DAO_OK;
	case ('r'-'a') | (sizeof("restitution")<<5):
		if( strcmp( name->chars, "restitution" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetRestitution( DaoValue_GetFloat( value ) );
		return DAO_OK;
	case ('c'-'a') | (sizeof("contactProcessingThreshold")<<5):
		if( strcmp( name->chars, "contactProcessingThreshold" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetContactProcessingThreshold( DaoValue_GetFloat( value ) );
		return DAO_OK;
#if 0
	case ('c'-'a') | (sizeof("ccdRadius")<<5):
		if( strcmp( name->chars, "ccdRadius" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetCcdRadius( DaoValue_GetFloat( value ) );
		return DAO_OK;
	case ('c'-'a') | (sizeof("ccdMotionThreshold")<<5):
		if( strcmp( name->chars, "ccdMotionThreshold" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetCcdMotionThreshold( DaoValue_GetFloat( value ) );
		return DAO_OK;
#endif
	case ('u'-'a') | (sizeof("useGravity")<<5):
		if( strcmp( name->chars, "useGravity" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetUseGravity( DaoValue_GetInteger( value ) );
		return DAO_OK;
	case ('g'-'a') | (sizeof("gravityOverride")<<5):
		if( strcmp( name->chars, "gravityOverride" ) != 0 ) break;
		vec3 = (Vector3*) DaoValue_TryCastCdataTC( value, dao_Craft_Vector3_Core );
		if( vec3 == NULL ) return DAO_ERROR_VALUE;
		body->SetGravityOverride( *vec3 );
		return DAO_OK;
	case ('i'-'a') | (sizeof("kinematic")<<5):
		if( strcmp( name->chars, "kinematic" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetKinematic( DaoValue_GetInteger( value ) );
		return DAO_OK;
	case ('i'-'a') | (sizeof("trigger")<<5):
		if( strcmp( name->chars, "trigger" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetTrigger( DaoValue_GetInteger( value ) );
		return DAO_OK;
	case ('c'-'a') | (sizeof("collisionLayer")<<5):
		if( strcmp( name->chars, "collisionLayer" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetCollisionLayer( DaoValue_GetInteger( value ) );
		return DAO_OK;
	case ('c'-'a') | (sizeof("collisionMask")<<5):
		if( strcmp( name->chars, "collisionMask" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetCollisionMask( DaoValue_GetInteger( value ) );
		return DAO_OK;
	case ('c'-'a') | (sizeof("collisionEventMode")<<5):
		if( strcmp( name->chars, "collisionEventMode" ) != 0 ) break;
		if( value->type < DAO_BOOLEAN || value->type > DAO_FLOAT ) return DAO_ERROR_VALUE;
		body->SetCollisionEventMode( (CollisionEventMode) DaoValue_GetInteger( value ) );
		return DAO_OK;
	}
	return DAO_ERROR_FIELD;
}



void dao_Craft_Node_GetChildren( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Node* self = (Node*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Node_Core );
	DaoList *daolist = DaoProcess_PutList( _proc );
	const Vector<SharedPtr<Node> > nodes = self->GetChildren();
    for (unsigned i = 0; i < nodes.Size(); i++) {
		DaoCdata *cdata = DaoCdata_WrapTC( _proc->vmSpace, dao_Craft_Node_Core, nodes[i] );
		DaoList_Append( daolist, (DaoValue*) cdata );
	}
}

void dao_Craft_Node_GetComponents( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	DaoList *daolist = DaoProcess_PutList( _proc );
	Node* self = (Node*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Node_Core );
	char *name_chars = DaoValue_TryGetChars( _p[1] );
	Craft::String name( name_chars );
	bool recursive = (bool) DaoValue_TryGetBoolean( _p[2] );
	PODVector<Component*> coms;

	self->GetComponents( coms, name, recursive );
    for (unsigned i = 0; i < coms.Size(); i++) {
		DaoCdata *cdata = DaoCdata_WrapTC( _proc->vmSpace, dao_Craft_Component_Core, coms[i] );
		DaoList_Append( daolist, (DaoValue*) cdata );
	}
}

void dao_Craft_Node_GetAnimationController( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Node* self = (Node*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Node_Core );
	bool recursive = (bool) DaoValue_TryGetBoolean( _p[1] );

	Component* _GetComponent = self->GetComponent( StringHash( "AnimationController" ), recursive );
	AnimationController *AC = (AnimationController*) _GetComponent;
	if( AC ){
		DaoProcess_WrapCdataTC( _proc, (void*) AC, dao_Craft_AnimationController_Core );
	}else{
		DaoProcess_PutNone( _proc );
	}
}

void dao_Craft_Node_GetDaoComponent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Node* self = (Node*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Node_Core );
	char *name_chars = DaoValue_TryGetChars( _p[1] );
	Craft::String name( name_chars );
	bool recursive = (bool) DaoValue_TryGetBoolean( _p[2] );

    PODVector<DaoComponent*> components;
    self->GetComponents<DaoComponent>(components, recursive);

    for (unsigned i = 0; i < components.Size(); i++) {
        DaoComponent* component = components[i];
        if (component->MatchScriptName(name)) {
			DaoProcess_WrapCdataTC( _proc, (void*) component, dao_Craft_DaoComponent_Core );
            return;
        }
    }
	DaoProcess_PutNone( _proc );
}

void dao_Craft_Node_GetOrCreateDaoComponent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Node* self = (Craft::Node*)DaoValue_TryCastCdataTC( _p[0], dao_Craft_Node_Core );
	Craft::CreateMode mode = (Craft::CreateMode) DaoValue_TryGetInteger( _p[1] );
	unsigned int id = (unsigned int) DaoValue_TryGetInteger( _p[2] );

	Craft::DaoComponent* _component = self->GetOrCreateComponent<DaoComponent>( mode, id );
	DaoProcess_WrapCdataTC( _proc, (void*) _component, dao_Craft_DaoComponent_Core );
}

void dao_Craft_Node_CreateDaoComponent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Node* self = (Craft::Node*)DaoValue_TryCastCdataTC( _p[0], dao_Craft_Node_Core );
	Craft::CreateMode mode = (Craft::CreateMode) DaoValue_TryGetInteger( _p[1] );
	unsigned int id = (unsigned int) DaoValue_TryGetInteger( _p[2] );

	Craft::DaoComponent* _component = self->CreateComponent<DaoComponent>( mode, id );
	DaoProcess_WrapCdataTC( _proc, (void*) _component, dao_Craft_DaoComponent_Core );
}

void dao_Craft_Node_CreateCustomGeometry( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Node* self = (Node*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Node_Core );
	CustomGeometry *body = self->CreateComponent<CustomGeometry>();
	DaoProcess_WrapCdataTC( _proc, (void*) body, dao_Craft_CustomGeometry_Core );
}

void dao_Craft_Node_GetCustomGeometry( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Node* self = (Node*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Node_Core );
	CustomGeometry *body = self->GetComponent<CustomGeometry>();
	if( body ){
		DaoProcess_WrapCdataTC( _proc, (void*) body, dao_Craft_CustomGeometry_Core );
	}else{
		DaoProcess_PutNone( _proc );
	}
}

void dao_Craft_Node_CreateRigidBody( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Node* self = (Node*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Node_Core );
	RigidBody *body = self->CreateComponent<RigidBody>();
	DaoProcess_WrapCdataTC( _proc, (void*) body, dao_Craft_RigidBody_Core );
}

void dao_Craft_Node_GetRigidBody( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Node* self = (Node*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Node_Core );
	RigidBody *body = self->GetComponent<RigidBody>();
	if( body ){
		DaoProcess_WrapCdataTC( _proc, (void*) body, dao_Craft_RigidBody_Core );
	}else{
		DaoProcess_PutNone( _proc );
	}
}

void dao_Craft_Node_GetOctree( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Node* self = (Node*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Node_Core );
	Octree *tree = self->GetComponent<Octree>();
	if( tree ){
		DaoProcess_WrapCdataTC( _proc, (void*) tree, dao_Craft_Octree_Core );
	}else{
		DaoProcess_PutNone( _proc );
	}
}

void dao_Craft_Node_CreateCollisionShape( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Node* self = (Node*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Node_Core );
	CollisionShape *shape = self->CreateComponent<CollisionShape>();
	DaoProcess_WrapCdataTC( _proc, (void*) shape, dao_Craft_CollisionShape_Core );
}

void dao_Craft_Node_GetCollisionShape( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Node* self = (Node*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Node_Core );
	CollisionShape *shape = self->GetComponent<CollisionShape>();
	if( shape ){
		DaoProcess_WrapCdataTC( _proc, (void*) shape, dao_Craft_CollisionShape_Core );
	}else{
		DaoProcess_PutNone( _proc );
	}
}



void dao_Craft_DaoComponent_SetData( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	DaoComponent* self = (DaoComponent*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_DaoComponent_Core );
	char *key = DaoValue_TryGetChars( _p[1] );
	self->SetData( key, _p[2] );
}

void dao_Craft_DaoComponent_GetData( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	DaoComponent* self = (DaoComponent*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_DaoComponent_Core );
	char *key = DaoValue_TryGetChars( _p[1] );
	DaoValue *data = self->GetData( key );
	if( data ){
		DaoProcess_PutValue( _proc, data );
	}else{
		DaoProcess_PutNone( _proc );
	}
}

void dao_Craft_Octree_RaycastSingle( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Octree* self = (Octree*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Octree_Core );
	Craft::Ray* ray = (Craft::Ray*) DaoValue_TryCastCdataTC( _p[1], dao_Craft_Ray_Core );
	dao_float maxdist = DaoValue_GetFloat( _p[2] );
	dao_integer texuv = DaoValue_GetInteger( _p[3] );
	RayQueryLevel level = texuv ? RAY_TRIANGLE_UV : RAY_TRIANGLE;
	PODVector<RayQueryResult> results;
	RayOctreeQuery query( results, *ray, level, maxdist, DRAWABLE_GEOMETRY );

	self->RaycastSingle( query );
	if( results.Size() ){
		RayQueryResult result = results[0];
		DaoProcess_NewCdataTC( _proc, dao_Craft_Drawable_Core, result.drawable_, 0 );
		DaoProcess_NewCdataTC( _proc, dao_Craft_Node_Core, result.node_, 0 );
		DaoProcess_NewCdataTC( _proc, dao_Craft_Vector3_Core, & result.position_, 0 );
		DaoProcess_NewCdataTC( _proc, dao_Craft_Vector3_Core, & result.normal_, 0 );
		DaoProcess_NewCdataTC( _proc, dao_Craft_Vector2_Core, & result.textureUV_, 0 );
		DaoProcess_NewFloat( _proc, (dao_float) result.distance_ );
		DaoProcess_PutTuple( _proc, -6 );
	}else{
		DaoProcess_PutNone( _proc );
	}
}

void dao_Craft_Scene_GetMainCamera( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Scene *self = (Scene*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Scene_Core );
	PODVector<Node*> cameraNodes;
	Camera *camera = 0;
	int i;

	self->GetChildrenWithComponent(cameraNodes, Camera::GetTypeStatic(), false);
	for(i=0; i<cameraNodes.Size(); ++i){
		if( cameraNodes[i]->GetName() == "MainCamera" ){
			camera = cameraNodes[i]->GetComponent<Camera>();
		}
	}
	if( camera == NULL && cameraNodes.Size() ){
		camera = cameraNodes[0]->GetComponent<Camera>();
	}
	if( camera ){
		DaoProcess_WrapCdataTC( _proc, (void*) camera, dao_Craft_Camera_Core );
	}else{
		DaoProcess_PutNone( _proc );
	}
}


void dao_Craft_Input_Input_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Context* context = DaoCraft_GetContext( _proc );
	Craft::Input *input = context->GetSubsystem<Craft::Input>();

	if( input != NULL ){
		DaoProcess_WrapCdataTC( _proc, input, dao_Craft_Input_Core );
		return;
	}

	DaoCxx_Craft_Input *_self = new DaoCxx_Craft_Input( context );
	_self->DaoInitWrapper( DaoProcess_GetVmSpace(_proc) );
	DaoProcess_PutValue( _proc, (DaoValue*) _self->dao_cdata );
}


void dao_Craft_Renderer_Renderer_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Context* context = DaoCraft_GetContext( _proc );
	Craft::Renderer *renderer = context->GetSubsystem<Craft::Renderer>();

	if( renderer != NULL ){
		DaoProcess_WrapCdataTC( _proc, renderer, dao_Craft_Renderer_Core );
		return;
	}

	DaoCxx_Craft_Renderer *_self = new DaoCxx_Craft_Renderer( context );
	_self->DaoInitWrapper( DaoProcess_GetVmSpace(_proc) );
	DaoProcess_PutValue( _proc, (DaoValue*) _self->dao_cdata );
}


void dao_Craft_Graphics_Graphics_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Context* context = DaoCraft_GetContext( _proc );
	Craft::Graphics *graphics = context->GetSubsystem<Craft::Graphics>();

	if( graphics != NULL ){
		DaoProcess_WrapCdataTC( _proc, graphics, dao_Craft_Graphics_Core );
		return;
	}

	DaoCxx_Craft_Graphics *_self = new DaoCxx_Craft_Graphics( context );
	_self->DaoInitWrapper( DaoProcess_GetVmSpace(_proc) );
	DaoProcess_PutValue( _proc, (DaoValue*) _self->dao_cdata );
}

void dao_Craft_Texture2D_GetData( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Texture2D* self = (Craft::Texture2D*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_Texture2D_Core );
	unsigned int level = (unsigned int) DaoValue_TryGetInteger( _p[1] );
	Craft::Image* image = (Craft::Image*) DaoValue_TryCastCdataTC( _p[2], dao_Craft_Image_Core );

	unsigned width = self->GetLevelWidth( level );
	unsigned height = self->GetLevelHeight( level );
	unsigned depth = self->GetLevelDepth( level );
	unsigned components = self->GetComponents();

	if( width * height * depth * components == 0 ){
		DaoProcess_PutBoolean( _proc, 0 );
		return;
	}

	image->SetSize( width, height, depth, components );

	//unsigned target = self->GetTarget();
	//glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image->GetData());

	bool _GetData = self->GetData( level, image->GetData() );
	DaoProcess_PutBoolean( _proc, (dao_boolean) _GetData );
}

void dao_Craft_ResourceCache_ResourceCache_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Context* context = DaoCraft_GetContext( _proc );
	Craft::ResourceCache *cache = context->GetSubsystem<Craft::ResourceCache>();

	if( cache != NULL ){
		DaoProcess_WrapCdataTC( _proc, cache, dao_Craft_ResourceCache_Core );
		return;
	}

	DaoCxx_Craft_ResourceCache *_self = new DaoCxx_Craft_ResourceCache( context );
	_self->DaoInitWrapper( DaoProcess_GetVmSpace(_proc) );
	DaoProcess_PutValue( _proc, (DaoValue*) _self->dao_cdata );
}

void dao_Craft_ResourceCache_GetImage( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	ResourceCache* self = (ResourceCache*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_ResourceCache_Core );
	Craft::String name( DaoValue_TryGetChars( _p[1] ) );
	Image *body = self->GetResource<Image>( name );
	if( body ){
		DaoProcess_WrapCdataTC( _proc, (void*) body, dao_Craft_Image_Core );
	}else{
		DaoProcess_PutNone( _proc );
	}
}

void dao_Craft_ResourceCache_GetMaterial( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	ResourceCache* self = (ResourceCache*) DaoValue_TryCastCdataTC( _p[0], dao_Craft_ResourceCache_Core );
	Craft::String name( DaoValue_TryGetChars( _p[1] ) );
	Material *body = self->GetResource<Material>( name );
	if( body ){
		DaoProcess_WrapCdataTC( _proc, (void*) body, dao_Craft_Material_Core );
	}else{
		DaoProcess_PutNone( _proc );
	}
}


void dao_Craft_Engine_Engine_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Context* context = DaoCraft_GetContext( _proc );
	Craft::Engine *graphics = context->GetSubsystem<Craft::Engine>();

	if( graphics != NULL ){
		DaoProcess_WrapCdataTC( _proc, graphics, dao_Craft_Engine_Core );
		return;
	}

	DaoCxx_Craft_Engine *_self = new DaoCxx_Craft_Engine( context );
	_self->DaoInitWrapper( DaoProcess_GetVmSpace(_proc) );
	DaoProcess_PutValue( _proc, (DaoValue*) _self->dao_cdata );
}


void dao_Craft_DaoPlayer_DaoPlayer_dao_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Craft::Context *context = DaoCraft_GetContext( _proc );
	Craft::DaoPlayer *player = context->GetSubsystem<Craft::DaoPlayer>();

	if( player != NULL ){
		DaoProcess_WrapCdataTC( _proc, player, dao_Craft_DaoPlayer_Core );
		return;
	}

	DaoCxx_Craft_DaoPlayer *_self = new DaoCxx_Craft_DaoPlayer( context );
	_self->DaoInitWrapper( DaoProcess_GetVmSpace(_proc) );
	DaoProcess_PutValue( _proc, (DaoValue*) _self->dao_cdata );
}


void dao_Craft_SplitPath( DaoProcess *_proc, DaoValue *_p[], int _n )
{
}

#ifdef __cplusplus
}
#endif
