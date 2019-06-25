
# Craft Game Engine


**Craft** is a free lightweight, cross-platform 2D and 3D game engine implemented in C++ and released under the MIT license. Forked from Urho3D.


Craft is mostly the same as Urho3D, except the following main differences:
  * Craft uses the ENU (X: East, Y: North, Z: Up) coordinate system;
  * Craft includes a UI module (Source/Craft/UIKit) based on the Turbo Badger UI library;
  * Craft includes a Script module to simplify integration with other scripting languages;
  * Craft supports scripting using the Dao programming language (work in progress);

The UIKit and Script modules are ported from the Atomic Game Engine (which is also an Urho3D fork). A few other changes have also been ported from Atomic to Craft. Additional changes (with respect to Urho3D) have also been made to support Qt5 integration and automatic binding generation for Dao.

