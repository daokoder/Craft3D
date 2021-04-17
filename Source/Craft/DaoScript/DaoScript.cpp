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

#include "../Core/CoreEvents.h"
#include "../Engine/EngineEvents.h"
#include "../IO/File.h"
#include "../IO/Log.h"
#include "../Core/ProcessUtils.h"
#include "../Core/Profiler.h"
#include "../Resource/ResourceCache.h"
#include "../Scene/Scene.h"

#include "DaoScript.h"
#include "DaoComponent.h"
#include "DaoComponentFile.h"
#include "DaoVM.h"

#ifdef HAS_DAO_CRAFT_MODULE
#include "dao_CraftEngine.h"
#endif


namespace Craft
{

WeakPtr<Context> DaoScript::scriptContext_;



DaoScript::DaoScript(Context* context) :
    Object(context)
{
    RegisterDaoScriptLibrary(context_);
    scriptContext_ = context;
	enableComponent = true;
	moduleNS = NULL;
}

DaoScript::~DaoScript()
{
}

bool DaoScript::Initialize( DaoVmSpace *vmSpace )
{
	if( vmSpace == NULL ) vmSpace = DaoInit(NULL);

	mainVmSpace = vmSpace;

	return true;
}

DaoNamespace* DaoScript::LoadScript( DaoVmSpace *vmspace, const char *file )
{
	return DaoVmSpace_Load( vmspace, file );
}

DaoVM* DaoScript::InstantiateVM( void *player )
{
    if (vms_.Contains(player)) return NULL;

    DaoVM* vm = new DaoVM(context_);
    vms_[player] = vm;
    return vm;

}

void DaoScript::ShutdownVM( void *player )
{
    vms_.Erase(player);
}

void RegisterDaoScriptLibrary(Context* context)
{
	DaoComponentFile::RegisterObject(context);
	DaoComponent::RegisterObject(context);
}

}
