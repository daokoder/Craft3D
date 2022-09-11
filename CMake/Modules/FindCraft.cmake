#
# Copyright (c) 2019 the Craft Engine project.
# Copyright (c) 2008-2019 the Urho3D project.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#

# Find Craft include directories and libraries in the Craft SDK installation or build tree or in Android library
# This module should be able to find Craft automatically when the SDK is installed in a system-wide default location or
# when the Craft Android library has been correctly declared as project dependency
# If the SDK installation location is non-default or the Craft library is not installed at all (i.e. still in its build tree) then
#   use CRAFT_HOME environment variable or build option to specify the location of the non-default SDK installation or build tree
# When setting CRAFT_HOME variable, it should be set to a parent directory containing both the "include" and "lib" subdirectories
#   e.g. set CRAFT_HOME=/home/john/usr/local, if the SDK is installed using DESTDIR=/home/john and CMAKE_INSTALL_PREFIX=/usr/local

#
#  CRAFT_FOUND
#  CRAFT_INCLUDE_DIRS
#  CRAFT_LIBRARIES
#  CRAFT_VERSION
#  CRAFT_64BIT (may be used as input variable for multilib-capable compilers; must always be specified as input variable for MSVC due to CMake/VS generator limitation)
#  CRAFT_LIB_TYPE (may be used as input variable as well to limit the search of library type)
#  CRAFT_OPENGL
#  CRAFT_SSE
#  CRAFT_DATABASE_ODBC
#  CRAFT_DATABASE_SQLITE
#  CRAFT_LUAJIT
#  CRAFT_TESTING
#
# WIN32 only:
#  CRAFT_LIBRARIES_REL
#  CRAFT_LIBRARIES_DBG
#  CRAFT_DLL
#  CRAFT_DLL_REL
#  CRAFT_DLL_DBG
#  CRAFT_D3D11
#
# MSVC only:
#  CRAFT_STATIC_RUNTIME
#

if (WEB)
	set (AUTO_DISCOVER_VARS CRAFT_OPENGL CRAFT_D3D11 CRAFT_DATABASE_ODBC CRAFT_DATABASE_SQLITE CRAFT_LUAJIT CRAFT_TESTING CRAFT_STATIC_RUNTIME)
else ()
	set (AUTO_DISCOVER_VARS CRAFT_OPENGL CRAFT_D3D11 CRAFT_SSE CRAFT_DATABASE_ODBC CRAFT_DATABASE_SQLITE CRAFT_LUAJIT CRAFT_TESTING CRAFT_STATIC_RUNTIME)
endif ()

set (PATH_SUFFIX Craft)
if (CMAKE_PROJECT_NAME STREQUAL Craft AND TARGET Craft)
    # A special case where library location is already known to be in the build tree of Craft project
    set (CRAFT_HOME ${CMAKE_BINARY_DIR})
    set (CRAFT_INCLUDE_DIRS ${CRAFT_HOME}/include ${CRAFT_HOME}/include/Craft/ThirdParty)
    if (CRAFT_PHYSICS)
        # Bullet library depends on its own include dir to be added in the header search path
        # This is more practical than patching its header files in many places to make them work with relative path
        list (APPEND CRAFT_INCLUDE_DIRS ${CRAFT_HOME}/include/Craft/ThirdParty/Bullet)
    endif ()
    if (CRAFT_LUA)
        # ditto for Lua/LuaJIT
        list (APPEND CRAFT_INCLUDE_DIRS ${CRAFT_HOME}/include/Craft/ThirdParty/Lua${JIT})
    endif ()
    set (CRAFT_LIBRARIES Craft)
    set (FOUND_MESSAGE "Found Craft: as CMake target")
    set (CRAFT_COMPILE_RESULT TRUE)
else ()
    if (ANDROID AND GRADLE_BUILD_DIR)
        # Craft AAR is a universal library
        set (CRAFT_HOME ${GRADLE_BUILD_DIR}/tree/${CMAKE_BUILD_TYPE}/${ANDROID_ABI})
    elseif (NOT CRAFT_HOME AND DEFINED ENV{CRAFT_HOME})
        # Library location would be searched (based on CRAFT_HOME variable if provided and in system-wide default location)
        file (TO_CMAKE_PATH "$ENV{CRAFT_HOME}" CRAFT_HOME)
    endif ()
    # Convert to integer literal to match it with our internal cache representation; it also will be used as foreach loop control variable
    if (CRAFT_64BIT)
        set (CRAFT_64BIT 1)
    else ()
        set (CRAFT_64BIT 0)
    endif ()
    # If either of the CRAFT_64BIT or CRAFT_LIB_TYPE or CRAFT_HOME build options changes then invalidate all the caches
    if (NOT CRAFT_64BIT EQUAL CRAFT_FOUND_64BIT OR NOT CRAFT_LIB_TYPE STREQUAL CRAFT_FOUND_LIB_TYPE OR NOT CRAFT_BASE_INCLUDE_DIR MATCHES "^${CRAFT_HOME}/include/Craft$")
        unset (CRAFT_BASE_INCLUDE_DIR CACHE)
        unset (CRAFT_LIBRARIES CACHE)
        unset (CRAFT_FOUND_64BIT CACHE)
        unset (CRAFT_FOUND_LIB_TYPE CACHE)
        unset (CRAFT_COMPILE_RESULT CACHE)
        if (WIN32)
            unset (CRAFT_LIBRARIES_DBG CACHE)
            unset (CRAFT_DLL_REL CACHE)
            unset (CRAFT_DLL_DBG CACHE)
        endif ()
        # Craft prefers static library type by default while CMake prefers shared one, so we need to change CMake preference to agree with Craft
        set (CMAKE_FIND_LIBRARY_SUFFIXES_SAVED ${CMAKE_FIND_LIBRARY_SUFFIXES})
        if (NOT CMAKE_FIND_LIBRARY_SUFFIXES MATCHES ^\\.\(a|lib\))
            list (REVERSE CMAKE_FIND_LIBRARY_SUFFIXES)
        endif ()
        # Cater for the shared library extension in Emscripten build which is ".bc" instead of ".so", and also cater for the module library extension
        if (EMSCRIPTEN)
            string (REPLACE .so .bc CMAKE_FIND_LIBRARY_SUFFIXES "${CMAKE_FIND_LIBRARY_SUFFIXES};.js")   # Stringify for string replacement
        endif ()
        # If library type is specified then only search for the requested library type
        if (NOT MSVC AND CRAFT_LIB_TYPE)      # MSVC static lib and import lib have a same extension, so cannot use it for searches
            if (CRAFT_LIB_TYPE STREQUAL STATIC)
                set (CMAKE_FIND_LIBRARY_SUFFIXES .a)
            elseif (CRAFT_LIB_TYPE STREQUAL SHARED)
                if (MINGW)
                    set (CMAKE_FIND_LIBRARY_SUFFIXES .dll.a)
                elseif (APPLE)
                    set (CMAKE_FIND_LIBRARY_SUFFIXES .dylib)
                elseif (EMSCRIPTEN)
                    set (CMAKE_FIND_LIBRARY_SUFFIXES .bc)
                else ()
                    set (CMAKE_FIND_LIBRARY_SUFFIXES .so)
                endif ()
            elseif (CRAFT_LIB_TYPE STREQUAL MODULE AND EMSCRIPTEN)
                set (CMAKE_FIND_LIBRARY_SUFFIXES .js)
            else ()
                message (FATAL_ERROR "Library type: '${CRAFT_LIB_TYPE}' is not supported")
            endif ()
        endif ()
        # The PATH_SUFFIX does not work for CMake on Windows host system, it actually needs a prefix instead
        if (CMAKE_HOST_WIN32)
            set (CMAKE_SYSTEM_PREFIX_PATH_SAVED ${CMAKE_SYSTEM_PREFIX_PATH})
            string (REPLACE ";" "\\Craft;" CMAKE_SYSTEM_PREFIX_PATH "${CMAKE_SYSTEM_PREFIX_PATH_SAVED};")    # Stringify for string replacement
            if (NOT CRAFT_64BIT)
                list (REVERSE CMAKE_SYSTEM_PREFIX_PATH)
            endif ()
        endif ()
    endif ()
    # CRAFT_HOME variable should be an absolute path, so use a non-rooted search even when we are cross-compiling
    if (CRAFT_HOME)
        list (APPEND CMAKE_PREFIX_PATH ${CRAFT_HOME})
        set (SEARCH_OPT NO_CMAKE_FIND_ROOT_PATH)
    endif ()
    find_path (CRAFT_BASE_INCLUDE_DIR Craft.h PATH_SUFFIXES ${PATH_SUFFIX} ${SEARCH_OPT} DOC "Craft include directory")
    if (CRAFT_BASE_INCLUDE_DIR)
        get_filename_component (CRAFT_INCLUDE_DIRS ${CRAFT_BASE_INCLUDE_DIR} PATH)
        if (NOT CRAFT_HOME)
            # CRAFT_HOME is not set when using SDK installed on system-wide default location, so set it now
            get_filename_component (CRAFT_HOME ${CRAFT_INCLUDE_DIRS} PATH)
        endif ()
        list (APPEND CRAFT_INCLUDE_DIRS ${CRAFT_BASE_INCLUDE_DIR}/ThirdParty)
        if (CRAFT_PHYSICS)
            list (APPEND CRAFT_INCLUDE_DIRS ${CRAFT_BASE_INCLUDE_DIR}/ThirdParty/Bullet)
        endif ()
        if (CRAFT_LUA)
            list (APPEND CRAFT_INCLUDE_DIRS ${CRAFT_BASE_INCLUDE_DIR}/ThirdParty/Lua${JIT})
        endif ()
        # Intentionally do not cache the CRAFT_VERSION as it has potential to change frequently
        file (STRINGS ${CRAFT_BASE_INCLUDE_DIR}/librevision.h CRAFT_VERSION REGEX "^const char\\* revision=\"[^\"]*\".*$")
        string (REGEX REPLACE "^const char\\* revision=\"([^\"]*)\".*$" \\1 CRAFT_VERSION "${CRAFT_VERSION}")      # Stringify to guard against empty variable
        # The library type is baked into export header only for MSVC as it has no other way to differentiate them, fortunately both types cannot coexist for MSVC anyway unlike other compilers
        if (MSVC)
            file (STRINGS ${CRAFT_BASE_INCLUDE_DIR}/Craft.h MSVC_STATIC_LIB REGEX "^#define CRAFT_STATIC_DEFINE$")
        endif ()
    endif ()
    if (CRAFT_64BIT AND MINGW AND CMAKE_CROSSCOMPILING)
        # For 64-bit MinGW on Linux host system, force to search in 'lib64' path even when the Windows platform is not defaulted to use it
        set_property (GLOBAL PROPERTY FIND_LIBRARY_USE_LIB64_PATHS TRUE)
    endif ()
    set (CRAFT_LIB_TYPE_SAVED ${CRAFT_LIB_TYPE})  # We need this to reset the auto-discovered CRAFT_LIB_TYPE variable before looping
    foreach (ABI_64BIT RANGE ${CRAFT_64BIT} 0)
        # Set to search in 'lib' or 'lib64' based on the ABI being tested
        set_property (GLOBAL PROPERTY FIND_LIBRARY_USE_LIB64_PATHS ${ABI_64BIT})    # Leave this global property setting afterwards, do not restore it to its previous value
        find_library (CRAFT_LIBRARIES NAMES Craft PATH_SUFFIXES ${PATH_SUFFIX} ${SEARCH_OPT} DOC "Craft library directory")
        if (WIN32)
            # For Windows platform, give a second chance to search for a debug version of the library
            find_library (CRAFT_LIBRARIES_DBG NAMES Craft_d PATH_SUFFIXES ${PATH_SUFFIX} ${SEARCH_OPT})
            set (CRAFT_LIBRARIES_REL ${CRAFT_LIBRARIES})
            if (NOT CRAFT_LIBRARIES)
                set (CRAFT_LIBRARIES ${CRAFT_LIBRARIES_DBG})
            endif ()
        endif ()
        # Ensure the module has found the right one if the library type is specified
        if (MSVC)
            if (CRAFT_LIB_TYPE)
                if (NOT ((CRAFT_LIB_TYPE STREQUAL STATIC AND MSVC_STATIC_LIB) OR (CRAFT_LIB_TYPE STREQUAL SHARED AND NOT MSVC_STATIC_LIB)))
                    unset (CRAFT_LIBRARIES)    # Not a right type, so nullify the search result
                endif ()
            else ()
                if (MSVC_STATIC_LIB)
                    set (CRAFT_LIB_TYPE STATIC)
                else ()
                    set (CRAFT_LIB_TYPE SHARED)
                endif ()
            endif ()
        elseif (CRAFT_LIBRARIES)
            get_filename_component (EXT ${CRAFT_LIBRARIES} EXT)
            if (EXT STREQUAL .a)
                set (CRAFT_LIB_TYPE STATIC)
                # For Non-MSVC compiler the static define is not baked into the export header file so we need to define it for the try_compile below
                set (COMPILER_STATIC_DEFINE COMPILE_DEFINITIONS -DCRAFT_STATIC_DEFINE)
            else ()
                if (EXT STREQUAL .js)
                    set (CRAFT_LIB_TYPE MODULE)
                else ()
                    set (CRAFT_LIB_TYPE SHARED)
                endif ()
                unset (COMPILER_STATIC_DEFINE)
            endif ()
        endif ()
        # For shared library type, also initialize the CRAFT_DLL variable for later use
        if (WIN32 AND CRAFT_LIB_TYPE STREQUAL SHARED AND CRAFT_HOME)
            find_file (CRAFT_DLL_REL Craft.dll HINTS ${CRAFT_HOME}/bin NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH DOC "Craft release DLL")
            if (CRAFT_DLL_REL)
                list (APPEND CRAFT_DLL ${CRAFT_DLL_REL})
            endif ()
            find_file (CRAFT_DLL_DBG Craft_d.dll HINTS ${CRAFT_HOME}/bin NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH DOC "Craft debug DLL")
            if (CRAFT_DLL_DBG)
                list (APPEND CRAFT_DLL ${CRAFT_DLL_DBG})
            endif ()
        endif ()
        # Ensure the module has found the library with the right ABI for the chosen compiler and CRAFT_64BIT build option (if specified)
        if (CRAFT_COMPILE_RESULT)
            break ()    # Use the cached result instead of redoing try_compile() each time
        elseif (CRAFT_LIBRARIES)
            if (NOT (MSVC OR ANDROID OR ARM OR WEB OR XCODE) AND NOT ABI_64BIT)
                set (COMPILER_32BIT_FLAG -m32)
            endif ()
            # Below variables are loop invariant but there is no harm to keep them here
            if (WIN32)
                set (CMAKE_TRY_COMPILE_CONFIGURATION_SAVED ${CMAKE_TRY_COMPILE_CONFIGURATION})
                if (CRAFT_LIBRARIES_REL)
                    set (CMAKE_TRY_COMPILE_CONFIGURATION Release)
                else ()
                    set (CMAKE_TRY_COMPILE_CONFIGURATION Debug)
                endif ()
            elseif (APPLE AND ARM)
                # Debug build does not produce universal binary library, so we could not test compile against the library
                execute_process (COMMAND lipo -info ${CRAFT_LIBRARIES} COMMAND grep -cq arm RESULT_VARIABLE SKIP_COMPILE_TEST OUTPUT_QUIET ERROR_QUIET)
            endif ()
            set (COMPILER_FLAGS "${COMPILER_32BIT_FLAG} ${CMAKE_REQUIRED_FLAGS}")
            if (SKIP_COMPILE_TEST
                OR CRAFT_LIB_TYPE STREQUAL MODULE                  # Module library type cannot be test linked so just assume it is a valid Craft module for now
                OR CMAKE_PROJECT_NAME STREQUAL Craft-Launcher)     # Workaround initial IDE "gradle sync" error due to library has not been built yet
                set (CRAFT_COMPILE_RESULT 1)
            else ()
                while (NOT CRAFT_COMPILE_RESULT)
                    try_compile (CRAFT_COMPILE_RESULT ${CMAKE_BINARY_DIR} ${CMAKE_CURRENT_LIST_DIR}/CheckUrhoLibrary.cpp
                        CMAKE_FLAGS -DCOMPILE_DEFINITIONS:STRING=${COMPILER_FLAGS} -DLINK_LIBRARIES:STRING=${CRAFT_LIBRARIES} -DINCLUDE_DIRECTORIES:STRING=${CRAFT_INCLUDE_DIRS} ${COMPILER_STATIC_DEFINE} ${COMPILER_STATIC_RUNTIME_FLAGS}
                        OUTPUT_VARIABLE TRY_COMPILE_OUT)
                    if (MSVC AND NOT CRAFT_COMPILE_RESULT AND NOT COMPILER_STATIC_RUNTIME_FLAGS)
                        # Give a second chance for MSVC to use static runtime flag
                        if (CRAFT_LIBRARIES_REL)
                            set (COMPILER_STATIC_RUNTIME_FLAGS COMPILE_DEFINITIONS /MT)
                        else ()
                            set (COMPILER_STATIC_RUNTIME_FLAGS COMPILE_DEFINITIONS /MTd)
                        endif ()
                    else ()
                        break ()    # Other compilers break immediately rendering the while-loop a no-ops
                    endif ()
                endwhile ()
            endif ()
            set (CRAFT_COMPILE_RESULT ${CRAFT_COMPILE_RESULT} CACHE INTERNAL "FindCraft module's compile result")
            if (CRAFT_COMPILE_RESULT)
                # Auto-discover build options used by the found library and export header
                file (READ ${CRAFT_BASE_INCLUDE_DIR}/Craft.h EXPORT_HEADER)
                if (APPLE AND ARM)
                    # Since Craft library for Apple/ARM platforms is a universal binary (except when it was a Debug build), we need another way to find out the compiler ABI the library was built for
                    execute_process (COMMAND lipo -info ${CRAFT_LIBRARIES} COMMAND grep -c x86_64 OUTPUT_VARIABLE ABI_64BIT ERROR_QUIET OUTPUT_STRIP_TRAILING_WHITESPACE)
                elseif (MSVC)
                    if (COMPILER_STATIC_RUNTIME_FLAGS)
                        set (EXPORT_HEADER "${EXPORT_HEADER}#define CRAFT_STATIC_RUNTIME\n")
                    endif ()
                endif ()
                set (CRAFT_64BIT ${ABI_64BIT} CACHE BOOL "Enable 64-bit build, the value is auto-discovered based on the found Craft library" FORCE) # Force it as it is more authoritative than user-specified option
                set (CRAFT_LIB_TYPE ${CRAFT_LIB_TYPE} CACHE STRING "Craft library type, the value is auto-discovered based on the found Craft library" FORCE) # Use the Force, Luke
                foreach (VAR ${AUTO_DISCOVER_VARS})
                    if (EXPORT_HEADER MATCHES "#define ${VAR}")
                        set (AUTO_DISCOVERED_${VAR} 1)
                    else ()
                        set (AUTO_DISCOVERED_${VAR} 0)
                    endif ()
                    set (AUTO_DISCOVERED_${VAR} ${AUTO_DISCOVERED_${VAR}} CACHE INTERNAL "Auto-discovered ${VAR} build option")
                endforeach ()
                break ()
            else ()
                # Prepare for the second attempt by resetting the variables as necessary
                set (CRAFT_LIB_TYPE ${CRAFT_LIB_TYPE_SAVED})
                unset (CRAFT_LIBRARIES CACHE)
            endif ()
        endif ()
        # Break if the compiler is not multilib-capable
        if (MSVC OR ANDROID OR ARM OR WEB)
            break ()
        endif ()
    endforeach ()
    # If both the non-debug and debug version of the libraries are found on Windows platform then use them both
    if (CRAFT_LIBRARIES_REL AND CRAFT_LIBRARIES_DBG)
        set (CRAFT_LIBRARIES ${CRAFT_LIBRARIES_REL} ${CRAFT_LIBRARIES_DBG})
    endif ()
    # Ensure auto-discovered variables always prevail over user settings in all the subsequent cmake rerun (even without redoing try_compile)
    foreach (VAR ${AUTO_DISCOVER_VARS})
        if (DEFINED ${VAR} AND DEFINED AUTO_DISCOVERED_${VAR})  # Cannot combine these two ifs due to variable expansion error when it is not defined
            if ((${VAR} AND NOT ${AUTO_DISCOVERED_${VAR}}) OR (NOT ${VAR} AND ${AUTO_DISCOVERED_${VAR}}))
                message (WARNING "Conflicting ${VAR} build option is ignored.")
                unset (${VAR} CACHE)
            endif ()
        endif ()
        set (${VAR} ${AUTO_DISCOVERED_${VAR}})
    endforeach ()
    # Restore CMake global settings
    if (CMAKE_FIND_LIBRARY_SUFFIXES_SAVED)
        set (CMAKE_FIND_LIBRARY_SUFFIXES ${CMAKE_FIND_LIBRARY_SUFFIXES_SAVED})
    endif ()
    if (CMAKE_SYSTEM_PREFIX_PATH_SAVED)
        set (CMAKE_SYSTEM_PREFIX_PATH ${CMAKE_SYSTEM_PREFIX_PATH_SAVED})
    endif ()
    if (CMAKE_TRY_COMPILE_CONFIGURATION_SAVED)
        set (CMAKE_TRY_COMPILE_CONFIGURATION ${CMAKE_TRY_COMPILE_CONFIGURATION_SAVED})
    endif ()
endif ()

if (CRAFT_INCLUDE_DIRS AND CRAFT_LIBRARIES AND CRAFT_LIB_TYPE AND CRAFT_COMPILE_RESULT)
    set (CRAFT_FOUND 1)
    if (NOT FOUND_MESSAGE)
        set (FOUND_MESSAGE "Found Craft: ${CRAFT_LIBRARIES}")
        if (CRAFT_VERSION)
            set (FOUND_MESSAGE "${FOUND_MESSAGE} (found version \"${CRAFT_VERSION}\")")
        endif ()
    endif ()
    include (FindPackageMessage)
    find_package_message (Craft ${FOUND_MESSAGE} "[${CRAFT_LIBRARIES}][${CRAFT_INCLUDE_DIRS}]")
    set (CRAFT_HOME ${CRAFT_HOME} CACHE PATH "Path to Craft build tree or SDK installation location" FORCE)
    set (CRAFT_FOUND_64BIT ${CRAFT_64BIT} CACHE INTERNAL "True when 64-bit ABI was being used when test compiling Craft library")
    set (CRAFT_FOUND_LIB_TYPE ${CRAFT_LIB_TYPE} CACHE INTERNAL "Lib type (if specified) when Craft library was last found")
elseif (Craft_FIND_REQUIRED)
    if (ANDROID)
        set (NOT_FOUND_MESSAGE "For Android platform, double check if you have specified to use the same ANDROID_ABI as the Craft Android Library, especially when you are not using universal AAR.")
    endif ()
    if (CRAFT_LIB_TYPE)
        set (NOT_FOUND_MESSAGE "Ensure the specified location contains the Craft library of the requested library type. ${NOT_FOUND_MESSAGE}")
    endif ()
    message (FATAL_ERROR
        "Could NOT find compatible Craft library in Craft SDK installation or build tree or in Android library. "
        "Use CRAFT_HOME environment variable or build option to specify the location of the non-default SDK installation or build tree. ${NOT_FOUND_MESSAGE} ${TRY_COMPILE_OUT}")
endif ()

mark_as_advanced (CRAFT_BASE_INCLUDE_DIR CRAFT_LIBRARIES CRAFT_LIBRARIES_DBG CRAFT_DLL_REL CRAFT_DLL_DBG)
