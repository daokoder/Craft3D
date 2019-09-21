#
# Copyright (c) 2019 the Craft Game Engine project.
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

# Define target name for Dao library
set (TARGET_NAME Dao)

# Define source files
define_source_files (GLOB_CPP_PATTERNS kernel/*.c modules/auxlib/*.c modules/stream/*.c GLOB_H_PATTERNS kernel/*.h modules/auxlib/*.h modules/stream/*.h EXCLUDE_PATTERNS kernel/daoMain.c)

add_definitions (-DTARGET_PLAT="\\\"${CMAKE_SYSTEM_NAME}\\\"")
add_definitions (-DDAO_WITH_NUMARRAY)

list (APPEND INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/kernel)
list (APPEND INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/modules/auxlib)

# Define dependency libs
if (READLINE_FOUND)
    add_definitions (-DDAO_USE_READLINE)
    list (APPEND INCLUDE_DIRS ${READLINE_INCLUDE_DIRS})
    list (APPEND LIBS ${READLINE_LIBRARIES})
endif ()

if (CMAKE_HOST_APPLE)
    add_definitions (-DUNIX)
    add_definitions (-DMACOSX)
elseif (CMAKE_HOST_WIN32)
    add_definitions (-DWIN32)
elseif (CMAKE_HOST_UNIX)
	if (CMAKE_SYSTEM_NAME STREQUAL Linux)
		add_definitions (-DUNIX)
		add_definitions (-DLINUX)
	elseif (CMAKE_SYSTEM_NAME STREQUAL FreeBSD)
		add_definitions (-DUNIX)
		add_definitions (-DBSD)
	elseif (CMAKE_SYSTEM_NAME STREQUAL OpenBSD)
		add_definitions (-DUNIX)
		add_definitions (-DBSD)
	elseif (CMAKE_SYSTEM_NAME STREQUAL MinGW)
		add_definitions (-DWIN32)
	endif ()
endif ()

# Setup target
setup_library ()

# Install headers for building and using the Craft library (no direct dependencies but library user may need them)
install_header_files (DIRECTORY ./ DESTINATION ${DEST_INCLUDE_DIR}/ThirdParty/Dao FILES_MATCHING PATTERN *.h)  # Note: the trailing slash is significant

