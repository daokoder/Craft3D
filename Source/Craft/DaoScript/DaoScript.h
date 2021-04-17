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

#ifndef __DAO_SCRIPT_H__
#define __DAO_SCRIPT_H__

#include "DaoVM.h"


namespace Craft
{


class CRAFT_API DaoScript : public Object
{
    CRAFT_OBJECT(DaoScript,Object);

public:
    /// Construct.
    DaoScript(Context* context);
    /// Destruct.
    virtual ~DaoScript();

	bool Initialize( DaoVmSpace *vmSpace );

	bool IsComponentEnabled() const { return enableComponent; }
	void SetComponentEnabled( bool enable ) { enableComponent = enable; }

	DaoVmSpace*   GetMainVmSpace() const { return mainVmSpace; }
	DaoNamespace* GetModuleNamespace() const { return moduleNS; }

	virtual DaoNamespace* LoadScript( DaoVmSpace *vmspace, const char *file );

    /// Returns NULL if a VM for player already exists
    DaoVM* InstantiateVM( void *player );

    /// Gets a VM for the given player
    inline DaoVM* GetVM( void *player ) {
        return vms_[player];
    }

    /// Closes the VM for the given player
    void ShutdownVM( void *player );

    static Context* GetContext() { return scriptContext_; }

protected:

    static WeakPtr<Context> scriptContext_;

    HashMap<void*, SharedPtr<DaoVM> > vms_;
	DaoVmSpace   *mainVmSpace;
	DaoNamespace *moduleNS;
	bool enableComponent;

};

/// Register DaoScript library objects.
void CRAFT_API RegisterDaoScriptLibrary(Context* context);

}

#endif
