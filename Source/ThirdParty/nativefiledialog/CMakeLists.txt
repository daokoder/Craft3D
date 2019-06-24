
# Define target name
set (TARGET_NAME nativefiledialog)

set (STATIC_LIBRARY_TARGETS ${STATIC_LIBRARY_TARGETS} ${TARGET_NAME} PARENT_SCOPE)


set (SOURCE_FILES nfd_common.c nfd.h)

if (APPLE)
    set (SOURCE_FILES ${SOURCE_FILES} nfd_cocoa.m )
endif( APPLE)

if (WIN32)
    set (SOURCE_FILES ${SOURCE_FILES} nfd_win.cpp )
endif( WIN32)

if (LINUX)
    set (SOURCE_FILES ${SOURCE_FILES} nfd_gtk.c )    
    include_directories(${GTK3_INCLUDE_DIRS})
    link_directories(${GTK3_LIBRARY_DIRS})
    add_definitions(${GTK3_CFLAGS_OTHER})

endif(LINUX)


add_library(nativefiledialog ${SOURCE_FILES})
target_include_directories(nativefiledialog PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


# Install headers for building and using the Craft library (install dependency for InputEvents.h)
install_header_files (DIRECTORY ./ DESTINATION ${DEST_INCLUDE_DIR}/ThirdParty/nativefiledialog FILES_MATCHING PATTERN *.h USE_FILE_SYMLINK)    # Note: the trailing slash is significant
