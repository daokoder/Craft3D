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


//#include <Craft/Engine/EngineConfig.h>  // Not Available in Urho3D;
#include <Craft/Script/ScriptSystem.h>
#include <Craft/UI/UI.h>
#include <Craft/UIKit/UI.h>
#include <Craft/DaoScript/DaoScript.h>
#include "DaoPlayerApp.h"

#ifdef APP_CUSTOM_SETUP
extern void APP_CUSTOM_SETUP( DaoPlayerApp *app );
#endif

#ifdef STANDALONE_APP
CRAFT_DEFINE_APPLICATION_MAIN(DaoPlayerApp)
#endif

#ifdef CRAFT_DEFINE_APPLICATION_MAIN
#undef CRAFT_DEFINE_APPLICATION_MAIN
#endif

#define CRAFT_DEFINE_APPLICATION_MAIN(X)


using namespace Craft;


DaoPlayerApp::DaoPlayerApp( Craft::Context* context )
: Craft::Application( context )
//: CraftPlayer::CraftPlayerApp( context )
{
	daovm = NULL;
	vmSpace = NULL;
}

DaoPlayerApp::~DaoPlayerApp()
{
#ifdef STANDALONE_APP
	DaoQuit();
#endif
}


void DaoPlayerApp::Setup()
{

#ifdef CRAFT_3D
	RegisterEnvironmentLibrary(context_);
#endif

	FileSystem* filesystem = GetSubsystem<FileSystem>();
	context_->RegisterSubsystem(new ScriptSystem(context_));

	ReadEngineConfig();

	//engineParameters_.InsertNew("LogName", filesystem->GetAppPreferencesDir("CraftPlayer", "Logs") + "CraftPlayer.log");

#ifdef STANDALONE_APP
	String path = filesystem->GetProgramDir();

	DaoVmSpace *vmspace = DaoInit( path.CString() );

	path = AddTrailingSlash( path ) + "../Frameworks/lib/dao/modules";
	DaoVmSpace_AddPath( vmspace, path.CString() );

	engineParameters_["WindowWidth"] = 1200;
	engineParameters_["WindowHeight"] = 800;

#ifdef APP_CUSTOM_SETUP
	APP_CUSTOM_SETUP( this );
#endif

#else

	engineParameters_["WindowWidth"] = 900;
	engineParameters_["WindowHeight"] = 600;
	engineParameters_["WindowMaximized"] = false;
	engineParameters_["Borderless"] = true;
#endif

	engineParameters_["FullScreen"] = false;
	engineParameters_["Sound"] = true;

	engineParameters_["LogLevel"] = LOG_DEBUG;

	//	engineParameters_["FlushGPU"] = true;
	//	engineParameters_["Shadows"] = false;
	//	engineParameters_["TripleBuffer"] = true;

	//	CraftPlayer::CraftPlayerApp::Setup();
}

void DaoPlayerApp::Start()
{
	Application::Start();
	//CraftPlayer::CraftPlayerApp::Start();

	UIKit::UI* ui = GetSubsystem<UIKit::UI>();
	ui->Initialize("DefaultUI/language/lng_en.tb.txt");
	ui->LoadDefaultPlayerSkin();

	context_->RegisterSubsystem(new DaoPlayer(context_));

	// Instantiate and register the DaoScript subsystem
	DaoScript* daoscript = new DaoScript(context_);
	context_->RegisterSubsystem(daoscript);
	daoscript->Initialize( vmSpace );


	DaoPlayer *player = context_->GetSubsystem<DaoPlayer>();
	daovm = daoscript->InstantiateVM( player );

	daovm->InitVmSpace( vmSpace, player );

	printf( "DaoPlayerApp::Start()\n" );
	if (!daovm->ExecuteMain()) SendEvent(E_EXITREQUESTED);
}

void DaoPlayerApp::Stop()
{
	HashMap<StringHash, SharedPtr<Object> > systems = context_->GetSubsystems();
	HashMap<StringHash, SharedPtr<Object> >::ConstIterator iter;
	SharedPtr<Object> daoscript;
	StringHash hash( "DaoScript" );

	// Every other subsystems should be removed before the scripting subsystem,
	// so that the wrapping objects can be garbaged-collected properly:
	for(iter=systems.Begin(); iter!=systems.End(); ++iter){
		//printf( "DaoPlayerApp::Stop(): %s\n", iter->second_->GetTypeName().CString() );
		if( iter->first_ == hash ) daoscript = iter->second_;
		context_->RemoveSubsystem( iter->first_ );
	}

	systems.Clear();  // Ensure the destruction of all other subsystems!
	daoscript = NULL;

	Application::Stop();
}

void DaoPlayerApp::ReadEngineConfig()
{
	FileSystem* fileSystem = GetSubsystem<FileSystem>();
	String filename = fileSystem->GetProgramDir() + "Settings/Engine.json";

	if (!fileSystem->FileExists(filename))
		return;

#if 0
	if (EngineConfig::LoadFromFile(context_, filename))
	{
		EngineConfig::ApplyConfig(engineParameters_);
	}
#endif // TODO;
}


void DaoCraftBundleApp_Setup( DaoPlayerApp *app )
{
	FileSystem* filesystem = app->GetSubsystem<FileSystem>();
	String cmdpath = filesystem->GetProgramDir();
	String resroot = AddTrailingSlash( cmdpath ) + "../Resources/";
	String respath;

	respath += resroot + "Engine/CoreData;";
	respath += resroot + "Engine/PlayerData;";
	respath += resroot + "Game/Cache;";
	respath += resroot + "Game/Resources;";

	app->GetParameters()[ "ResourcePaths" ] = respath;
	app->GetParameters()[ "FrameLimiter" ] = true;
	app->GetParameters()[ "MultiSample" ] = 4;

	printf( ">>>>>>>>>>>>>>>>>>>>>>> DaoCraftBundleApp_Setup\n" );
}


