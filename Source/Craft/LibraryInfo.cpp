//
// Copyright (c) 2008-2019 the Urho3D project.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#include "Precompiled.h"

#include "LibraryInfo.h"
#include "librevision.h"

namespace Craft
{

const char* GetRevision()
{
    return revision;
}

const char* GetCompilerDefines()
{
    return ""
#ifdef CRAFT_OPENGL
    "#define CRAFT_OPENGL\n"
#elif defined(CRAFT_D3D11)
    "#define CRAFT_D3D11\n"
#endif
#ifdef CRAFT_SSE
    "#define CRAFT_SSE\n"
#endif
#ifdef CRAFT_DATABASE_ODBC
    "#define CRAFT_DATABASE_ODBC\n"
#elif defined(CRAFT_DATABASE_SQLITE)
    "#define CRAFT_DATABASE_SQLITE\n"
#endif
#ifdef CRAFT_LUAJIT
    "#define CRAFT_LUAJIT\n"
#endif
#ifdef CRAFT_TESTING
    "#define CRAFT_TESTING\n"
#endif
    ;
}

}
