
# Define target name
set (TARGET_NAME TurboBadger)

set (STATIC_LIBRARY_TARGETS ${STATIC_LIBRARY_TARGETS} ${TARGET_NAME} PARENT_SCOPE)


include_directories("${CMAKE_CURRENT_SOURCE_DIR}" ../FreeType/include ../SDL/include ../SDL/include/generated)

if(APPLE)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-exceptions -Wall -Wextra -Wno-unused-parameter")
  add_definitions(-DMACOSX)
endif(APPLE)

#add_definitions(-DNDEBUG)
add_definitions(-DTB_FONT_RENDERER_FREETYPE)
#add_definitions(-DTB_FONT_RENDERER_STB)

if (CRAFT_OPENGL)
    add_definitions(-DCRAFT_OPENGL=1)
elseif (CRAFT_D3D11)
    add_definitions(-DCRAFT_D3D11=1)
endif ()

# Define source files
file (GLOB C_FILES *.cpp image/*.cpp animation/*.cpp parser/*.cpp renderers/*.cpp utf8/*.cpp)
file (GLOB H_FILES *.h image/*.h animation/*.h parser/*.h renderers/*.h utf8/*.h)
set (SOURCE_FILES ${C_FILES} ${H_FILES})

add_library(TurboBadger ${SOURCE_FILES})
target_include_directories(TurboBadger SYSTEM BEFORE PUBLIC .)
if (NOT MSVC)
    target_compile_options(TurboBadger PRIVATE -std=gnu++11)
endif ()


# Install headers for building and using the Craft library (install dependency for InputEvents.h)
install_header_files (DIRECTORY ./ DESTINATION ${DEST_INCLUDE_DIR}/ThirdParty/TurboBadger FILES_MATCHING PATTERN *.h USE_FILE_SYMLINK)    # Note: the trailing slash is significant
