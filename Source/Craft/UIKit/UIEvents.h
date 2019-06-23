//
// Copyright (c) 2014-2015, THUNDERBEAST GAMES LLC All rights reserved
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

namespace Craft {

namespace UIKit
{

// UIUpdate event which is sent post engine update, ensuring all input events have been processed
CRAFT_EVENT(E_UIUPDATE, UIUpdate)
{

}

CRAFT_EVENT(E_WIDGETEVENT, WidgetEvent)
{
    CRAFT_PARAM(P_HANDLER, Handler);           // UIWidget pointer of widget's OnEvent we are in
    CRAFT_PARAM(P_TARGET, Target);             // UIWidget pointer
    CRAFT_PARAM(P_TYPE, Type);                 // enum UI_EVENT_TYPE
    CRAFT_PARAM(P_X, X);                       // int
    CRAFT_PARAM(P_Y, Y);                       // int
    CRAFT_PARAM(P_DELTAX, DeltaX);             // int
    CRAFT_PARAM(P_DELTAY, DeltaY);             // int
    CRAFT_PARAM(P_COUNT, Count);               // int
    CRAFT_PARAM(P_KEY, Key);                   // int
    CRAFT_PARAM(P_SPECIALKEY, SpecialKey);     // enum SPECIAL_KEY
    CRAFT_PARAM(P_MODIFIERKEYS, ModifierKeys); // enum MODIFIER_KEYS
    CRAFT_PARAM(P_REFID, RefID);               // string (TBID)
    CRAFT_PARAM(P_TOUCH, Touch);               // bool

    // EventHandled can be set by event receivers to stop event bubble
    CRAFT_PARAM(P_HANDLED, Handled);               // [OUT] -> bool

}

CRAFT_EVENT(E_WIDGETLOADED, WidgetLoaded)
{
    CRAFT_PARAM(P_WIDGET, Widget);             // UIWidget pointer
}

CRAFT_EVENT(E_WIDGETFOCUSCHANGED, WidgetFocusChanged)
{
    CRAFT_PARAM(P_WIDGET, Widget);             // UIWidget pointer
    CRAFT_PARAM(P_FOCUSED, Focused);             // bool
}


CRAFT_EVENT(E_WIDGETDELETED, WidgetDeleted)
{
    CRAFT_PARAM(P_WIDGET, Widget);             // UIWidget pointer
}

CRAFT_EVENT(E_DRAGBEGIN, DragBegin)
{
    CRAFT_PARAM(P_TARGET, Source);             // UIWidget source
    CRAFT_PARAM(P_DRAGOBJECT, DragObject);     // UIDragObject pointer
}

CRAFT_EVENT(E_DRAGENTERWIDGET, DragEnterWidget)
{
    CRAFT_PARAM(P_WIDGET, Widget);             // UIWidget pointer
    CRAFT_PARAM(P_DRAGOBJECT, DragObject);     // UIDragObject pointer
}

CRAFT_EVENT(E_DRAGEXITWIDGET, DragExitWidget)
{
    CRAFT_PARAM(P_WIDGET, Widget);             // UIWidget pointer
    CRAFT_PARAM(P_DRAGOBJECT, DragObject);     // UIDragObject pointer
}

CRAFT_EVENT(E_DRAGENDED, DragEnded)
{
    CRAFT_PARAM(P_TARGET, Target);             // UIWidget pointer
    CRAFT_PARAM(P_DRAGOBJECT, DragObject);     // UIDragObject pointer
}


CRAFT_EVENT(E_POPUPMENUSELECT, PopupMenuSelect)
{
    CRAFT_PARAM(P_BUTTON, Button);             // UIButton that created popup
    CRAFT_PARAM(P_REFID, RefID);             // string tbid
}

CRAFT_EVENT(E_UISHORTCUT, UIShortcut)
{
    CRAFT_PARAM(P_KEY, Key);                    // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int

}

CRAFT_EVENT(E_WINDOWCLOSED, WindowClosed)
{
    CRAFT_PARAM(P_WINDOW, Window);               // UIWindow
}

CRAFT_EVENT(E_UIWIDGETFOCUSCHANGED, UIWidgetFocusChanged)
{
    CRAFT_PARAM(P_WIDGET, Widget);             // UIWidget pointer
    CRAFT_PARAM(P_FOCUSED, Focused);             // bool
}
CRAFT_EVENT(E_UIWIDGETFOCUSESCAPED, UIWidgetFocusEscaped)
{
}

CRAFT_EVENT(E_UIWIDGETEDITCANCELED, UIWidgetEditCanceled)
{
    CRAFT_PARAM(P_WIDGET, Widget);         // UIWidget pointer
}

CRAFT_EVENT(E_UIWIDGETEDITCOMPLETE, UIWidgetEditComplete)
{
    CRAFT_PARAM(P_WIDGET, Widget);             // UIWidget pointer
}

CRAFT_EVENT(E_UIUNHANDLEDSHORTCUT, UIUnhandledShortcut)
{
    CRAFT_PARAM(P_REFID, RefID); // string tbid
}

CRAFT_EVENT(E_UILISTVIEWSELECTIONCHANGED, UIListViewSelectionChanged)
{
    CRAFT_PARAM(P_REFID, RefID); // string tbid
    CRAFT_PARAM(P_SELECTED, Selected);        // bool
}

/// event for PromptWindow
CRAFT_EVENT(E_UIPROMPTCOMPLETE, UIPromptComplete)
{
    CRAFT_PARAM(P_TITLE, Title);  // string
    CRAFT_PARAM(P_REASON, Reason);  // string
    CRAFT_PARAM(P_SELECTED, Selected);  // string
}

/// event for FinderWindow
CRAFT_EVENT(E_UIFINDERCOMPLETE, UIFinderComplete)
{
    CRAFT_PARAM(P_TITLE, Title);  // string
    CRAFT_PARAM(P_REASON, Reason);  // string
    CRAFT_PARAM(P_SELECTED, Selected);  // string
}

}}
