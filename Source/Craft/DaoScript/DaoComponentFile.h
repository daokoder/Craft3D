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

#ifndef __DAO_COMPONENT_FILE_H__
#define __DAO_COMPONENT_FILE_H__

#include "../Resource/Resource.h"
#include "../Container/ArrayPtr.h"
#include "../Container/List.h"

#include "../Script/ScriptComponentFile.h"

#include "DaoVM.h"


namespace Craft
{

class DaoComponent;

/// Dao script file resource:
class CRAFT_API DaoComponentFile : public ScriptComponentFile
{
    CRAFT_OBJECT(DaoComponentFile,ScriptComponentFile);

public:

    DaoComponentFile(Context* context);
    virtual ~DaoComponentFile();

    static void RegisterObject(Context* context);

    virtual bool BeginLoad(Deserializer& source);
    virtual bool EndLoad();
    virtual bool Save(Serializer& dest) const;

    DaoComponent* CreateDaoComponent();

    bool PushModule();

	DaoNamespace* GetDaoNamespace(){ return nspace; }
	DaoClass* GetDaoClass(){ return klass; }

private:

    bool InitModule();

	Vector<DaoComponent*>  components;

	DaoVmSpace    *vmspace;
	DaoNamespace  *nspace;
	DaoClass      *klass;

    bool scriptClass_;
	bool reloaded;
};

}

#endif
