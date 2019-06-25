#
#

if (NOT DAO_CRAFT_PLAYER)
    return ()
endif ()

# Define target name
set (TARGET_NAME DaoCraftPlayer)

# Define source files
define_source_files ()
if (NOT WEB)
    define_resource_dirs (EXTRA_DIRS ${CMAKE_SOURCE_DIR}/bin/Autoload)
endif ()

# Setup target with resource copying
setup_main_executable (NOBUNDLE)

list (APPEND INCLUDE_DIRS ${CMAKE_SOURCE_DIR}/Source/ThirdParty/Dao/kernel)
list (APPEND LIBS ${CMAKE_SOURCE_DIR}/Source/ThirdParty/Dao/lib/libdao.dylib)

add_definitions( -DSTANDALONE_APP )

include_directories( ${INCLUDE_DIRS} )
target_link_libraries( ${TARGET_NAME} ${LIBS} )

# Symlink/copy helper shell scripts or batch files to invoke CraftPlayer
if (NOT IOS AND NOT TVOS AND NOT ANDROID AND NOT WEB AND NOT CMAKE_BINARY_DIR STREQUAL CMAKE_SOURCE_DIR)
    # Ensure the output directory exist before creating the symlinks
    file (MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
    file (GLOB FILES RELATIVE ${CMAKE_SOURCE_DIR}/bin ${CMAKE_SOURCE_DIR}/bin/*${SCRIPT_EXT})
    foreach (FILE ${FILES})
        create_symlink (${CMAKE_SOURCE_DIR}/bin/${FILE} ${CMAKE_BINARY_DIR}/bin/${FILE} FALLBACK_TO_COPY)
    endforeach ()
endif ()
