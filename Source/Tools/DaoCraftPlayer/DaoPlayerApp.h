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

#ifndef __DAO_PLAYER_APP_H__
#define __DAO_PLAYER_APP_H__

#include <Craft/Engine/Engine.h>
#include <Craft/Engine/Application.h>
#include <Craft/Graphics/Graphics.h>
#include <Craft/UI/UI.h>
#include <Craft/Input/InputEvents.h>
#include <Craft/Input/Input.h>
#include <Craft/DaoScript/DaoPlayer.h>
#include <Craft/DaoScript/DaoScript.h>
#include <Craft/DaoScript/DaoVM.h>



class DaoPlayerApp : public Craft::Application
{
	CRAFT_OBJECT(DaoPlayerApp,Craft::Application);

public:
	DaoPlayerApp( Craft::Context* context );
	~DaoPlayerApp();

	Craft::Engine* GetEngine(){ return engine_; }
	Craft::VariantMap& GetParameters(){ return engineParameters_; }

	void SetVmSpace( DaoVmSpace *vmspace ) { vmSpace = vmspace; }

	virtual void Setup();
	virtual void Start();
	virtual void Stop();

protected:

	void ReadEngineConfig();

	Craft::DaoVM  *daovm;
	DaoVmSpace    *vmSpace;
};

#endif
