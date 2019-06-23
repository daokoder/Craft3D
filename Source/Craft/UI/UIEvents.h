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

namespace Craft
{

/// Global mouse click in the UI. Sent by the UI subsystem.
CRAFT_EVENT(E_UIMOUSECLICK, UIMouseClick)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
    CRAFT_PARAM(P_BUTTON, Button);                // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
}

/// Global mouse click end in the UI. Sent by the UI subsystem.
CRAFT_EVENT(E_UIMOUSECLICKEND, UIMouseClickEnd)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_BEGINELEMENT, BeginElement);    // UIElement pointer
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
    CRAFT_PARAM(P_BUTTON, Button);                // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
}

/// Global mouse double click in the UI. Sent by the UI subsystem.
CRAFT_EVENT(E_UIMOUSEDOUBLECLICK, UIMouseDoubleClick)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
    CRAFT_PARAM(P_XBEGIN, XBegin);                // int
    CRAFT_PARAM(P_YBEGIN, YBegin);                // int
    CRAFT_PARAM(P_BUTTON, Button);                // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
}

/// Mouse click on a UI element. Parameters are same as in UIMouseClick event, but is sent by the element.
CRAFT_EVENT(E_CLICK, Click)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
    CRAFT_PARAM(P_BUTTON, Button);                // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
}

/// Mouse click end on a UI element. Parameters are same as in UIMouseClickEnd event, but is sent by the element.
CRAFT_EVENT(E_CLICKEND, ClickEnd)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_BEGINELEMENT, BeginElement);    // UIElement pointer
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
    CRAFT_PARAM(P_BUTTON, Button);                // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
}

/// Mouse double click on a UI element. Parameters are same as in UIMouseDoubleClick event, but is sent by the element.
CRAFT_EVENT(E_DOUBLECLICK, DoubleClick)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
    CRAFT_PARAM(P_XBEGIN, XBegin);                // int
    CRAFT_PARAM(P_YBEGIN, YBegin);                // int
    CRAFT_PARAM(P_BUTTON, Button);                // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
}

/// Drag and drop test.
CRAFT_EVENT(E_DRAGDROPTEST, DragDropTest)
{
    CRAFT_PARAM(P_SOURCE, Source);                // UIElement pointer
    CRAFT_PARAM(P_TARGET, Target);                // UIElement pointer
    CRAFT_PARAM(P_ACCEPT, Accept);                // bool
}

/// Drag and drop finish.
CRAFT_EVENT(E_DRAGDROPFINISH, DragDropFinish)
{
    CRAFT_PARAM(P_SOURCE, Source);                // UIElement pointer
    CRAFT_PARAM(P_TARGET, Target);                // UIElement pointer
    CRAFT_PARAM(P_ACCEPT, Accept);                // bool
}

/// Focus element changed.
CRAFT_EVENT(E_FOCUSCHANGED, FocusChanged)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_CLICKEDELEMENT, ClickedElement); // UIElement pointer
}

/// UI element name changed.
CRAFT_EVENT(E_NAMECHANGED, NameChanged)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
}

/// UI element resized.
CRAFT_EVENT(E_RESIZED, Resized)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_WIDTH, Width);                  // int
    CRAFT_PARAM(P_HEIGHT, Height);                // int
    CRAFT_PARAM(P_DX, DX);                        // int
    CRAFT_PARAM(P_DY, DY);                        // int
}

/// UI element positioned.
CRAFT_EVENT(E_POSITIONED, Positioned)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
}

/// UI element visibility changed.
CRAFT_EVENT(E_VISIBLECHANGED, VisibleChanged)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_VISIBLE, Visible);              // bool
}

/// UI element focused.
CRAFT_EVENT(E_FOCUSED, Focused)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_BYKEY, ByKey);                  // bool
}

/// UI element defocused.
CRAFT_EVENT(E_DEFOCUSED, Defocused)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
}

/// UI element layout updated.
CRAFT_EVENT(E_LAYOUTUPDATED, LayoutUpdated)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
}

/// UI button pressed.
CRAFT_EVENT(E_PRESSED, Pressed)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
}

/// UI button was pressed, then released.
CRAFT_EVENT(E_RELEASED, Released)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
}

/// UI checkbox toggled.
CRAFT_EVENT(E_TOGGLED, Toggled)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_STATE, State);                  // bool
}

/// UI slider value changed
CRAFT_EVENT(E_SLIDERCHANGED, SliderChanged)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_VALUE, Value);                  // float
}

/// UI slider being paged.
CRAFT_EVENT(E_SLIDERPAGED, SliderPaged)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_OFFSET, Offset);                // int
    CRAFT_PARAM(P_PRESSED, Pressed);              // bool
}

/// UI progressbar value changed
CRAFT_EVENT(E_PROGRESSBARCHANGED, ProgressBarChanged)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_VALUE, Value);                  // float
}

/// UI scrollbar value changed.
CRAFT_EVENT(E_SCROLLBARCHANGED, ScrollBarChanged)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_VALUE, Value);                  // float
}

/// UI scrollview position changed.
CRAFT_EVENT(E_VIEWCHANGED, ViewChanged)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
}

/// UI modal changed (currently only Window has modal flag).
CRAFT_EVENT(E_MODALCHANGED, ModalChanged)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_MODAL, Modal);                  // bool
}

/// Text entry into a LineEdit. The text can be modified in the event data.
CRAFT_EVENT(E_TEXTENTRY, TextEntry)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_TEXT, Text);                    // String [in/out]
}

/// Editable text changed
CRAFT_EVENT(E_TEXTCHANGED, TextChanged)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_TEXT, Text);                    // String
}

/// Text editing finished (enter pressed on a LineEdit)
CRAFT_EVENT(E_TEXTFINISHED, TextFinished)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_TEXT, Text);                    // String
    CRAFT_PARAM(P_VALUE, Value);                  // Float
}

/// Menu selected.
CRAFT_EVENT(E_MENUSELECTED, MenuSelected)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
}

/// Listview or DropDownList item selected.
CRAFT_EVENT(E_ITEMSELECTED, ItemSelected)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_SELECTION, Selection);          // int
}

/// Listview item deselected.
CRAFT_EVENT(E_ITEMDESELECTED, ItemDeselected)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_SELECTION, Selection);          // int
}

/// Listview selection change finished.
CRAFT_EVENT(E_SELECTIONCHANGED, SelectionChanged)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
}

/// Listview item clicked. If this is a left-click, also ItemSelected event will be sent. If this is a right-click, only this event is sent.
CRAFT_EVENT(E_ITEMCLICKED, ItemClicked)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_ITEM, Item);                    // UIElement pointer
    CRAFT_PARAM(P_SELECTION, Selection);          // int
    CRAFT_PARAM(P_BUTTON, Button);                // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
}

/// Listview item double clicked.
CRAFT_EVENT(E_ITEMDOUBLECLICKED, ItemDoubleClicked)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_ITEM, Item);                    // UIElement pointer
    CRAFT_PARAM(P_SELECTION, Selection);          // int
    CRAFT_PARAM(P_BUTTON, Button);                // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
}

/// LineEdit or ListView unhandled key pressed.
CRAFT_EVENT(E_UNHANDLEDKEY, UnhandledKey)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_KEY, Key);                      // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
}

/// Fileselector choice.
CRAFT_EVENT(E_FILESELECTED, FileSelected)
{
    CRAFT_PARAM(P_FILENAME, FileName);            // String
    CRAFT_PARAM(P_FILTER, Filter);                // String
    CRAFT_PARAM(P_OK, OK);                        // bool
}

/// MessageBox acknowlegement.
CRAFT_EVENT(E_MESSAGEACK, MessageACK)
{
    CRAFT_PARAM(P_OK, OK);                        // bool
}

/// A child element has been added to an element. Sent by the UI root element, or element-event-sender if set.
CRAFT_EVENT(E_ELEMENTADDED, ElementAdded)
{
    CRAFT_PARAM(P_ROOT, Root);                    // UIElement pointer
    CRAFT_PARAM(P_PARENT, Parent);                // UIElement pointer
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
}

/// A child element is about to be removed from an element. Sent by the UI root element, or element-event-sender if set.
CRAFT_EVENT(E_ELEMENTREMOVED, ElementRemoved)
{
    CRAFT_PARAM(P_ROOT, Root);                    // UIElement pointer
    CRAFT_PARAM(P_PARENT, Parent);                // UIElement pointer
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
}

/// Hovering on an UI element has started
CRAFT_EVENT(E_HOVERBEGIN, HoverBegin)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
    CRAFT_PARAM(P_ELEMENTX, ElementX);            // int
    CRAFT_PARAM(P_ELEMENTY, ElementY);            // int
}

/// Hovering on an UI element has ended
CRAFT_EVENT(E_HOVEREND, HoverEnd)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
}

/// Drag behavior of a UI Element has started
CRAFT_EVENT(E_DRAGBEGIN, DragBegin)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
    CRAFT_PARAM(P_ELEMENTX, ElementX);            // int
    CRAFT_PARAM(P_ELEMENTY, ElementY);            // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_NUMBUTTONS, NumButtons);        // int
}

/// Drag behavior of a UI Element when the input device has moved
CRAFT_EVENT(E_DRAGMOVE, DragMove)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
    CRAFT_PARAM(P_DX, DX);                        // int
    CRAFT_PARAM(P_DY, DY);                        // int
    CRAFT_PARAM(P_ELEMENTX, ElementX);            // int
    CRAFT_PARAM(P_ELEMENTY, ElementY);            // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_NUMBUTTONS, NumButtons);        // int
}

/// Drag behavior of a UI Element has finished
CRAFT_EVENT(E_DRAGEND, DragEnd)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
    CRAFT_PARAM(P_ELEMENTX, ElementX);            // int
    CRAFT_PARAM(P_ELEMENTY, ElementY);            // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_NUMBUTTONS, NumButtons);        // int
}

/// Drag of a UI Element was canceled by pressing ESC
CRAFT_EVENT(E_DRAGCANCEL, DragCancel)
{
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
    CRAFT_PARAM(P_ELEMENTX, ElementX);            // int
    CRAFT_PARAM(P_ELEMENTY, ElementY);            // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_NUMBUTTONS, NumButtons);        // int
}

/// A file was drag-dropped into the application window. Includes also coordinates and UI element if applicable
CRAFT_EVENT(E_UIDROPFILE, UIDropFile)
{
    CRAFT_PARAM(P_FILENAME, FileName);            // String
    CRAFT_PARAM(P_ELEMENT, Element);              // UIElement pointer
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
    CRAFT_PARAM(P_ELEMENTX, ElementX);            // int (only if element is non-null)
    CRAFT_PARAM(P_ELEMENTY, ElementY);            // int (only if element is non-null)
}

}
