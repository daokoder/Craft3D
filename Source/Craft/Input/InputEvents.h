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
#include "../Input/InputConstants.h"


namespace Craft
{

/// Mouse button pressed.
CRAFT_EVENT(E_MOUSEBUTTONDOWN, MouseButtonDown)
{
    CRAFT_PARAM(P_BUTTON, Button);                // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
}

/// Mouse button released.
CRAFT_EVENT(E_MOUSEBUTTONUP, MouseButtonUp)
{
    CRAFT_PARAM(P_BUTTON, Button);                // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
}

/// Mouse moved.
CRAFT_EVENT(E_MOUSEMOVE, MouseMove)
{
    CRAFT_PARAM(P_X, X);                          // int (only when mouse visible)
    CRAFT_PARAM(P_Y, Y);                          // int (only when mouse visible)
    CRAFT_PARAM(P_DX, DX);                        // int
    CRAFT_PARAM(P_DY, DY);                        // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
}

/// Mouse wheel moved.
CRAFT_EVENT(E_MOUSEWHEEL, MouseWheel)
{
    CRAFT_PARAM(P_WHEEL, Wheel);                  // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
}

/// Key pressed.
CRAFT_EVENT(E_KEYDOWN, KeyDown)
{
    CRAFT_PARAM(P_KEY, Key);                      // int
    CRAFT_PARAM(P_SCANCODE, Scancode);            // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
    CRAFT_PARAM(P_REPEAT, Repeat);                // bool
}

/// Key released.
CRAFT_EVENT(E_KEYUP, KeyUp)
{
    CRAFT_PARAM(P_KEY, Key);                      // int
    CRAFT_PARAM(P_SCANCODE, Scancode);            // int
    CRAFT_PARAM(P_BUTTONS, Buttons);              // int
    CRAFT_PARAM(P_QUALIFIERS, Qualifiers);        // int
}

/// Text input event.
CRAFT_EVENT(E_TEXTINPUT, TextInput)
{
    CRAFT_PARAM(P_TEXT, Text);                    // String
}

/// Text editing event.
CRAFT_EVENT(E_TEXTEDITING, TextEditing)
{
    CRAFT_PARAM(P_COMPOSITION, Composition);      // String
    CRAFT_PARAM(P_CURSOR, Cursor);                // int
    CRAFT_PARAM(P_SELECTION_LENGTH, SelectionLength);  // int
}

/// Joystick connected.
CRAFT_EVENT(E_JOYSTICKCONNECTED, JoystickConnected)
{
    CRAFT_PARAM(P_JOYSTICKID, JoystickID);        // int
}

/// Joystick disconnected.
CRAFT_EVENT(E_JOYSTICKDISCONNECTED, JoystickDisconnected)
{
    CRAFT_PARAM(P_JOYSTICKID, JoystickID);        // int
}

/// Joystick button pressed.
CRAFT_EVENT(E_JOYSTICKBUTTONDOWN, JoystickButtonDown)
{
    CRAFT_PARAM(P_JOYSTICKID, JoystickID);        // int
    CRAFT_PARAM(P_BUTTON, Button);                // int
}

/// Joystick button released.
CRAFT_EVENT(E_JOYSTICKBUTTONUP, JoystickButtonUp)
{
    CRAFT_PARAM(P_JOYSTICKID, JoystickID);        // int
    CRAFT_PARAM(P_BUTTON, Button);                // int
}

/// Joystick axis moved.
CRAFT_EVENT(E_JOYSTICKAXISMOVE, JoystickAxisMove)
{
    CRAFT_PARAM(P_JOYSTICKID, JoystickID);        // int
    CRAFT_PARAM(P_AXIS, Button);                  // int
    CRAFT_PARAM(P_POSITION, Position);            // float
}

/// Joystick POV hat moved.
CRAFT_EVENT(E_JOYSTICKHATMOVE, JoystickHatMove)
{
    CRAFT_PARAM(P_JOYSTICKID, JoystickID);        // int
    CRAFT_PARAM(P_HAT, Button);                   // int
    CRAFT_PARAM(P_POSITION, Position);            // int
}

/// Finger pressed on the screen.
CRAFT_EVENT(E_TOUCHBEGIN, TouchBegin)
{
    CRAFT_PARAM(P_TOUCHID, TouchID);              // int
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
    CRAFT_PARAM(P_PRESSURE, Pressure);            // float
}

/// Finger released from the screen.
CRAFT_EVENT(E_TOUCHEND, TouchEnd)
{
    CRAFT_PARAM(P_TOUCHID, TouchID);              // int
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
}

/// Finger moved on the screen.
CRAFT_EVENT(E_TOUCHMOVE, TouchMove)
{
    CRAFT_PARAM(P_TOUCHID, TouchID);              // int
    CRAFT_PARAM(P_X, X);                          // int
    CRAFT_PARAM(P_Y, Y);                          // int
    CRAFT_PARAM(P_DX, DX);                        // int
    CRAFT_PARAM(P_DY, DY);                        // int
    CRAFT_PARAM(P_PRESSURE, Pressure);            // float
}

/// A touch gesture finished recording.
CRAFT_EVENT(E_GESTURERECORDED, GestureRecorded)
{
    CRAFT_PARAM(P_GESTUREID, GestureID);          // unsigned
}

/// A recognized touch gesture was input by the user.
CRAFT_EVENT(E_GESTUREINPUT, GestureInput)
{
    CRAFT_PARAM(P_GESTUREID, GestureID);          // unsigned
    CRAFT_PARAM(P_CENTERX, CenterX);              // int
    CRAFT_PARAM(P_CENTERY, CenterY);              // int
    CRAFT_PARAM(P_NUMFINGERS, NumFingers);        // int
    CRAFT_PARAM(P_ERROR, Error);                  // float
}

/// Pinch/rotate multi-finger touch gesture motion update.
CRAFT_EVENT(E_MULTIGESTURE, MultiGesture)
{
    CRAFT_PARAM(P_CENTERX, CenterX);              // int
    CRAFT_PARAM(P_CENTERY, CenterY);              // int
    CRAFT_PARAM(P_NUMFINGERS, NumFingers);        // int
    CRAFT_PARAM(P_DTHETA, DTheta);                // float (degrees)
    CRAFT_PARAM(P_DDIST, DDist);                  // float
}

/// A file was drag-dropped into the application window.
CRAFT_EVENT(E_DROPFILE, DropFile)
{
    CRAFT_PARAM(P_FILENAME, FileName);            // String
}

/// Application input focus or minimization changed.
CRAFT_EVENT(E_INPUTFOCUS, InputFocus)
{
    CRAFT_PARAM(P_FOCUS, Focus);                  // bool
    CRAFT_PARAM(P_MINIMIZED, Minimized);          // bool
}

/// OS mouse cursor visibility changed.
CRAFT_EVENT(E_MOUSEVISIBLECHANGED, MouseVisibleChanged)
{
    CRAFT_PARAM(P_VISIBLE, Visible);              // bool
}

/// Mouse mode changed.
CRAFT_EVENT(E_MOUSEMODECHANGED, MouseModeChanged)
{
    CRAFT_PARAM(P_MODE, Mode);                    // MouseMode
    CRAFT_PARAM(P_MOUSELOCKED, MouseLocked);      // bool
}

/// Application exit requested.
CRAFT_EVENT(E_EXITREQUESTED, ExitRequested)
{
}

/// Raw SDL input event.
CRAFT_EVENT(E_SDLRAWINPUT, SDLRawInput)
{
    CRAFT_PARAM(P_SDLEVENT, SDLEvent);           // SDL_Event*
    CRAFT_PARAM(P_CONSUMED, Consumed);           // bool
}

/// Input handling begins.
CRAFT_EVENT(E_INPUTBEGIN, InputBegin)
{
}

/// Input handling ends.
CRAFT_EVENT(E_INPUTEND, InputEnd)
{
}

}
