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

#include "../Core/Profiler.h"
#include "../Core/CoreEvents.h"

#include "../IO/File.h"
#include "../IO/Log.h"
#include "../IO/FileSystem.h"
#include "../IO/PackageFile.h"

#include "../Resource/ResourceCache.h"

#include "DaoVM.h"
#include "DaoScript.h"

#ifdef HAS_DAO_CRAFT_MODULE
#include "dao_CraftEngine.h"
#endif

#ifdef __cplusplus
extern "C"{
#endif

void DaoCraft_ContextKey( Craft::Context *ctx )
{
}

Craft::Context* DaoCraft_GetContext( DaoProcess *proc )
{
	return Craft::DaoScript::GetContext();
	//return (Craft::Context*) DaoVmSpace_GetSpaceData( proc->vmSpace, (void*) DaoCraft_ContextKey );
}

#ifdef __cplusplus
}
#endif



namespace Craft
{

DaoVM::DaoVM(Context* context) :
    Object(context),
    vmSpace(NULL)
{
	deleteVMS = false;
	vmSpace = NULL;
	mainNS = NULL;
	mainUpdate = NULL;

#if 0
    SharedPtr<JSEventDispatcher> dispatcher(new JSEventDispatcher(context_));
    context_->RegisterSubsystem(dispatcher);
    context_->AddGlobalEventListener(dispatcher);
#endif

}

DaoVM::~DaoVM()
{
	if( vmSpace != NULL ){
		//RefCounted::RemoveRefCountedDeletedFunction( OnRefCountedDeleted, vmSpace );
		if( deleteVMS ) DaoVmSpace_TryDelete( vmSpace );
	}
#if 0
    context_->RemoveGlobalEventListener(context_->GetSubsystem<JSEventDispatcher>());
    context_->RemoveSubsystem(JSEventDispatcher::GetTypeStatic());
#endif

}

DaoVmSpace* DaoVM::InitVmSpace( DaoVmSpace *vmspace, DaoPlayer *player )
{
	vmSpace = vmspace;

	if( vmSpace == NULL ){
		deleteVMS = true;
		vmSpace = DaoVmSpace_New();
	}

	//RefCounted::AddRefCountedDeletedFunction( OnRefCountedDeleted, vmSpace );

	Vector<String> resourcePaths = GetSubsystem<ResourceCache>()->GetResourceDirs();
	for (unsigned i = resourcePaths.Size(); i > 0; --i){
		DaoVmSpace_AddPath( vmSpace, resourcePaths[i-1].CString() );
	}

#ifdef HAS_DAO_CRAFT_MODULE
	DaoNamespace *moduleNS = DaoVmSpace_GetNamespace( vmSpace, "CraftModule" );
	DaoNamespace *daoNS = DaoVmSpace_GetNamespace( vmSpace, "dao" );
	DaoNamespace *craftNS = DaoVmSpace_GetNamespace( vmSpace, "Craft" );
	DaoNamespace *playerNS = DaoVmSpace_GetNamespace( vmSpace, "CraftPlayer" );

	// Make sure namespace Craft is accessible in the UIKit namespace for wrapping UIKit:
	DaoNamespace_AddConstValue( daoNS, "Craft", (DaoValue*) craftNS );

	DaoCraftEngine_OnLoad( vmSpace, moduleNS );

	DaoNamespace_AddConstValue( playerNS, "Craft", (DaoValue*) craftNS );
	DaoNamespace_AddConstValue( daoNS, "CraftPlayer", (DaoValue*) playerNS );

	DaoNamespace_AddParent( daoNS, moduleNS );
#endif

	DaoVmSpace_SetSpaceData( vmSpace, (void*) DaoCraft_ContextKey, GetContext() );

	//printf( "InitVmSpace: VMS = %p; NS = %p;\n", vmSpace, daoNS );

    // handle this elsewhere?
    SubscribeToEvents();

	return vmSpace;
}


void DaoVM::SubscribeToEvents()
{
    SubscribeToEvent(E_UPDATE, CRAFT_HANDLER(DaoVM, HandleUpdate));
}

void DaoVM::HandleUpdate(StringHash eventType, VariantMap& eventData)
{
	//printf( "DaoVM::HandleUpdate()\n" );

    CRAFT_PROFILE(DaoVM_HandleUpdate);

	if( mainUpdate != NULL ){
		DaoProcess *proc = DaoVmSpace_MainProcess( vmSpace );
		DaoProcess_Call( proc, mainUpdate, NULL, NULL, 0 );
	}
}

void DaoVM::SendDaoErrorEvent(const String& filename)
{
}


bool DaoVM::ExecuteScript(const String& scriptPath)
{
    String path = scriptPath;
    if ( !path.StartsWith("Scripts/") ) path = "Scripts/" + path;

	DaoScript* daoscript = GetSubsystem<DaoScript>();
	return daoscript->LoadScript( vmSpace, path.CString() ) != NULL;

	//return DaoVmSpace_Load( vmSpace, path.CString() ) != NULL;  // Load and run the script;
}

bool DaoVM::ExecuteFile(File *file)
{
    if (!file) return false;

    String source;

    file->ReadText(source);

	return DaoVmSpace_Eval( vmSpace, source.CString() ) != NULL;
}

bool DaoVM::ExecuteMain()
{
	bool maindao = GetSubsystem<ResourceCache>()->Exists("Scripts/main.dao");
	bool maindac = GetSubsystem<ResourceCache>()->Exists("Scripts/main.dac");

	if( ! (maindao || maindac) ) return true;

	DaoScript* daoscript = GetSubsystem<DaoScript>();

	mainNS = daoscript->LoadScript( vmSpace, "Scripts/main" );
	//mainNS = DaoVmSpace_Load( vmSpace, "Scripts/main" );
	if( mainNS != NULL ){
		DaoValue *value = DaoNamespace_FindData( mainNS, "__dao_craft_main_update" );
		mainUpdate = DaoValue_CastRoutine( value );
	}
	return mainNS != NULL;
}

void DaoVM::OnRefCountedDeleted( RefCounted* ref, void *ud )
{
	DaoVmSpace *vmspace = (DaoVmSpace*) ud;
	DaoVmSpace_ReleaseCdata( vmspace, NULL, ref );
}

}
