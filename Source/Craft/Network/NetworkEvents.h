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

/// Server connection established.
CRAFT_EVENT(E_SERVERCONNECTED, ServerConnected)
{
}

/// Server connection disconnected.
CRAFT_EVENT(E_SERVERDISCONNECTED, ServerDisconnected)
{
}

/// Server connection failed.
CRAFT_EVENT(E_CONNECTFAILED, ConnectFailed)
{
}

/// New client connection established.
CRAFT_EVENT(E_CLIENTCONNECTED, ClientConnected)
{
    CRAFT_PARAM(P_CONNECTION, Connection);        // Connection pointer
}

/// Client connection disconnected.
CRAFT_EVENT(E_CLIENTDISCONNECTED, ClientDisconnected)
{
    CRAFT_PARAM(P_CONNECTION, Connection);        // Connection pointer
}

/// Client has sent identity: identity map is in the event data.
CRAFT_EVENT(E_CLIENTIDENTITY, ClientIdentity)
{
    CRAFT_PARAM(P_CONNECTION, Connection);        // Connection pointer
    CRAFT_PARAM(P_ALLOW, Allow);                  // bool
}

/// Client has informed to have loaded the scene.
CRAFT_EVENT(E_CLIENTSCENELOADED, ClientSceneLoaded)
{
    CRAFT_PARAM(P_CONNECTION, Connection);        // Connection pointer
}

/// Unhandled network message received.
CRAFT_EVENT(E_NETWORKMESSAGE, NetworkMessage)
{
    CRAFT_PARAM(P_CONNECTION, Connection);        // Connection pointer
    CRAFT_PARAM(P_MESSAGEID, MessageID);          // int
    CRAFT_PARAM(P_DATA, Data);                    // Buffer
}

/// About to send network update on the client or server.
CRAFT_EVENT(E_NETWORKUPDATE, NetworkUpdate)
{
}

/// Network update has been sent on the client or server.
CRAFT_EVENT(E_NETWORKUPDATESENT, NetworkUpdateSent)
{
}

/// Scene load failed, either due to file not found or checksum error.
CRAFT_EVENT(E_NETWORKSCENELOADFAILED, NetworkSceneLoadFailed)
{
    CRAFT_PARAM(P_CONNECTION, Connection);      // Connection pointer
}

/// Remote event: adds Connection parameter to the event data.
CRAFT_EVENT(E_REMOTEEVENTDATA, RemoteEventData)
{
    CRAFT_PARAM(P_CONNECTION, Connection);      // Connection pointer
}

/// Server refuses client connection because of the ban.
CRAFT_EVENT(E_NETWORKBANNED, NetworkBanned)
{
}

/// Server refuses connection because of invalid password.
CRAFT_EVENT(E_NETWORKINVALIDPASSWORD, NetworkInvalidPassword)
{
}

/// When LAN discovery found hosted server.
CRAFT_EVENT(E_NETWORKHOSTDISCOVERED, NetworkHostDiscovered)
{
    CRAFT_PARAM(P_ADDRESS, Address);   // String
    CRAFT_PARAM(P_PORT, Port);         // int
    CRAFT_PARAM(P_BEACON, Beacon);     // VariantMap
}

/// NAT punchtrough succeeds.
CRAFT_EVENT(E_NETWORKNATPUNCHTROUGHSUCCEEDED, NetworkNatPunchtroughSucceeded)
{
	CRAFT_PARAM(P_ADDRESS, Address);   // String
	CRAFT_PARAM(P_PORT, Port);         // int
}

/// NAT punchtrough fails.
CRAFT_EVENT(E_NETWORKNATPUNCHTROUGHFAILED, NetworkNatPunchtroughFailed)
{
	CRAFT_PARAM(P_ADDRESS, Address);   // String
	CRAFT_PARAM(P_PORT, Port);         // int
}

/// Connecting to NAT master server failed.
CRAFT_EVENT(E_NATMASTERCONNECTIONFAILED, NetworkNatMasterConnectionFailed)
{
    CRAFT_PARAM(P_ADDRESS, Address);   // String
    CRAFT_PARAM(P_PORT, Port);         // int
}

/// Connecting to NAT master server succeeded.
CRAFT_EVENT(E_NATMASTERCONNECTIONSUCCEEDED, NetworkNatMasterConnectionSucceeded)
{
    CRAFT_PARAM(P_ADDRESS, Address);   // String
    CRAFT_PARAM(P_PORT, Port);         // int
}

}
