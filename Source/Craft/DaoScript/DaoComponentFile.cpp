//
// Copyright (c) 2019 the Craft Engine project.
// Copyright (c) 2016, Limin Fu
// 
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//

#include <../Core/Context.h>
#include <../IO/Deserializer.h>
#include <../IO/Log.h>
#include <../Core/Profiler.h>
#include <../Resource/ResourceCache.h>
#include <../IO/Serializer.h>

#include "DaoComponentFile.h"
#include "DaoComponent.h"
#include "DaoVM.h"
#include "DaoScript.h"

#ifdef DCRAFT_DAOSCRIPT_WRAPPED
#include "dao_CraftEngine.h"
#endif


namespace Craft
{

DaoComponentFile::DaoComponentFile(Context* context) :
    ScriptComponentFile(context)
{
	vmspace = NULL;
	nspace = NULL;
	klass = NULL;
	reloaded = false;
}

DaoComponentFile::~DaoComponentFile()
{
	printf( "DaoComponentFile::~DaoComponentFile()\n" );
}

void DaoComponentFile::RegisterObject(Context* context)
{
    context->RegisterFactory<DaoComponentFile>();
}

bool DaoComponentFile::PushModule()
{
    //if (context_->GetEditorContext()) return false; // TODO;

    const String& path = GetName();
    String pathName, fileName, ext;
    SplitPath(path, pathName, fileName, ext);

    if (path.Contains('/') || path.Contains('\\')){
        pathName += "/" + fileName;
    }else{
        pathName = fileName;
	}

	DaoPlayer *player = context_->GetSubsystem<DaoPlayer>();
	Craft::DaoScript* daoscript = context_->GetSubsystem<Craft::DaoScript>();
	DaoNamespace *prevNS = nspace;
    DaoVM* vm = daoscript->GetVM( player );

	vmspace = vm->GetVmSpace();

	printf( "DaoComponentFile::PushModule(): %p %p %p %s\n", player, vm, vmspace, pathName.CString() );

	nspace = daoscript->LoadScript( vmspace, pathName.CString() );

	reloaded = prevNS != NULL and nspace != prevNS;
	//nspace = DaoVmSpace_Load( vmspace, pathName.CString() );

	//klass = DaoValue_CastClass( DaoNamespace_FindData( nspace, "RoboManComponent" ) );

	printf( "DaoComponentFile::PushModule(): %p\n", nspace );

	if( nspace == NULL ) return 0;

#ifdef DCRAFT_DAOSCRIPT_WRAPPED
	DaoType *type_DaoComponent = DaoVmSpace_GetType( vmspace, dao_Craft_DaoComponent_Core );
	int i;
	for(i=0; i<nspace->constants->size; ++i){
		DaoClass *K = DaoValue_CastClass( nspace->constants->items.pConst[i]->value );
		if( K != NULL ) printf( "%s\n", K->className->chars );
		if( K != NULL && K->nameSpace != nspace ) continue;
		if( K != NULL ) printf( "%s\n", K->className->chars );
		if( K != NULL and DaoType_ChildOf( K->objType, type_DaoComponent ) ){
			klass = K;
			break;
		}
	}
#endif

	return nspace != NULL;
}

DaoComponent* DaoComponentFile::CreateDaoComponent()
{
	printf( "DaoComponentFile::CreateDaoComponent()\n" );
#ifdef DCRAFT_DAOSCRIPT_WRAPPED
	if( klass == NULL ) return new DaoComponent(context_);

	DaoRoutine *routine = klass->initRoutines;
	DaoVmSpace *vmspace = klass->nameSpace->vmSpace;
	DaoType *type_DaoComponent = DaoVmSpace_GetType( vmspace, dao_Craft_DaoComponent_Core );
	DaoType *type_Context = DaoVmSpace_GetType( vmspace, dao_Craft_Context_Core );
	bool passContext = false;

	routine = DaoRoutine_ResolveByType( routine, klass->objType, NULL, 0 );
	if( routine == NULL ){
		routine = DaoRoutine_ResolveByType( routine, klass->objType, & type_Context, 1 );
		passContext = true;
	}
	if( routine == NULL ) return new DaoComponent(context_);

	DaoObject *object = DaoObject_New( klass );
	DaoProcess *process = DaoVmSpace_AcquireProcess( vmspace );

	DaoGC_IncRC( (DaoValue*) object );
	object->isInited = 1;
	if( not passContext ){
		DaoProcess_Call( process, routine, (DaoValue*) object, NULL, 0 );
	}else{
		DaoCdata *ctx = DaoProcess_NewCdata( process, type_Context, (void*) context_, 0 );
		DaoValue **args = DaoProcess_GetLastValues( process, 1 );
		DaoProcess_Call( process, routine, (DaoValue*) object, args, 1 );
	}
	DaoVmSpace_ReleaseProcess( vmspace, process );

	printf( "DaoComponentFile::CreateDaoComponent() %s %p %i\n", klass->className->chars, object, object->refCount );
	printf( "Constructor: %s %s\n", routine->routName->chars, routine->nameSpace->name->chars );

	DaoCdata *cdata = DaoValue_CastCdata( (DaoValue*) object, type_DaoComponent );
	if( cdata == NULL || cdata->data == NULL ){
		DaoGC_DecRC( (DaoValue*) object );
		return new DaoComponent(context_);
	}

	DaoComponent *component = (DaoComponent*) cdata->data;

	printf( "DaoComponentFile::CreateDaoComponent() %p\n", component );

	component->SetObject( object );
	components.Push( component );
	DaoGC_DecRC( (DaoValue*) object );
	return component;
#else
	return new DaoComponent(context_);
#endif
}

bool DaoComponentFile::InitModule()
{
    //if (context_->GetEditorContext()) return true; // TODO;

    if (!PushModule()) return false;

    return true;
}


bool DaoComponentFile::BeginLoad(Deserializer& source)
{
    if (!InitModule()) return false;

    SetMemoryUse(0);

    return true;
}

bool DaoComponentFile::EndLoad()
{
	printf( "DaoComponentFile::EndLoad()\n" );
	if( not reloaded ) return true;

	Vector<DaoComponent*> coms = components;
	components.Clear();

	int i;
	for(i=0; i<coms.Size(); ++i){
		Node *node = coms[i]->GetNode();
		int id = coms[i]->GetID();
		coms[i]->Remove();
		DaoComponent *com = CreateDaoComponent();
		if( com ){
			node->AddComponent( com, id, REPLICATED );
			com->Start();
		}
	}

	return true;
}

bool DaoComponentFile::Save(Serializer& dest) const
{
    return true;
}



}