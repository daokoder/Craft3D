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

#ifndef __DAO_VM_H__
#define __DAO_VM_H__

#include <../Core/Context.h>
#include <../Core/Object.h>
#include <../Container/List.h>

#include <../IO/Log.h>
#include <../IO/FileSystem.h>
#include "DaoPlayer.h"

//#define DAOVM_DEBUG


#include "dao.h"

#ifdef __cplusplus
extern "C"{
#endif

#include "daoVmspace.h"
#include "daoNamespace.h"
#include "daoClass.h"
#include "daoObject.h"
#include "daoRoutine.h"

extern Craft::Context* DaoCraft_GetContext( DaoProcess *proc );

#ifdef __cplusplus
}
#endif


namespace Craft
{

class CRAFT_API DaoVM : public Object
{

    CRAFT_OBJECT(DaoVM,Object);

public:
    DaoVM(Context* context);
    virtual ~DaoVM();

    void InitVmSpace( DaoVmSpace *vmspace, DaoPlayer *player );

    bool ExecuteFile(File* file);

    bool ExecuteScript(const String& scriptPath); // Resources/Scripts/*.dao

    bool ExecuteMain(); // Resources/Script/main.dao

    inline DaoVmSpace* GetVmSpace() { return vmSpace; }

    void SetModuleSearchPaths(const String& searchPath)
    {
        moduleSearchPath_ = searchPath.Split(';');
        for (unsigned i = 0; i < moduleSearchPath_.Size(); i++)
        {
            moduleSearchPath_[i] = AddTrailingSlash(moduleSearchPath_[i]);
        }
    }

    const Vector<String>& GetModuleSearchPaths()
    {
        return moduleSearchPath_;
    }


    void SetLastModuleSearchFile(const String& fileName) { lastModuleSearchFilename_ = fileName; }

    const String& GetLastModuleSearchFile() { return lastModuleSearchFilename_; }

    const String& GetErrorString() { return errorString_; }

    void SendDaoErrorEvent(const String& filename = String::EMPTY);

	static void OnRefCountedDeleted( RefCounted* ref, void *ud );

private:

    void SubscribeToEvents();
    void HandleUpdate(StringHash eventType, VariantMap& eventData);

	bool           deleteVMS;
    DaoVmSpace    *vmSpace;
	DaoNamespace  *mainNS;
	DaoRoutine    *mainUpdate;

    Vector<String> moduleSearchPath_;
    String lastModuleSearchFilename_;

    String errorString_;
};

}

#endif
