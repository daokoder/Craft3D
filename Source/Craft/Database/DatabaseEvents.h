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

#pragma once

#include "../Core/Object.h"
#include "../Database/DbConnection.h"

namespace Craft
{

/// %Database cursor. Event handler could set P_FILTER to true to filter out a row from resultset and P_ABORT to true to stop further cursor events.
CRAFT_EVENT(E_DBCURSOR, DbCursor)
{
    CRAFT_PARAM(P_DBCONNECTION, DbConnection);    // DbConnection pointer
    CRAFT_PARAM(P_RESULTIMPL, ResultImpl);        // Underlying result object pointer (cannot be used in scripting)
    CRAFT_PARAM(P_SQL, SQL);                      // String
    CRAFT_PARAM(P_NUMCOLS, NumCols);              // unsigned
    CRAFT_PARAM(P_COLVALUES, ColValues);          // VariantVector
    CRAFT_PARAM(P_COLHEADERS, ColHeaders);        // StringVector
    CRAFT_PARAM(P_FILTER, Filter);                // bool [in]
    CRAFT_PARAM(P_ABORT, Abort);                  // bool [in]
}

}
