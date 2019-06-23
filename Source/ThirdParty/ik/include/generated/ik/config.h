/* --------------------------------------------------------------
 * Configures prerequisite for this library
 * --------------------------------------------------------------*/

#ifndef IK_CONFIG_HPP
    #define IK_CONFIG_HPP

    /* --------------------------------------------------------------
     * build settings
     * --------------------------------------------------------------*/

    #define ik_real float
    #define IK_RESTRICT restrict

    #define IK_HAVE_STDINT_H
/* #undef IK_MEMORY_DEBUGGING */
/* #undef IK_DOT_OUTPUT */

    #ifdef IK_MEMORY_DEBUGGING
/* #undef IK_MEMORY_BACKTRACE */
    #endif

    /* --------------------------------------------------------------
     * common include files
     * --------------------------------------------------------------*/

    #include "ik/export.h"
    #include "ik/types.h"

    #ifdef IK_HAVE_STDINT_H
        #include <stdint.h>
    #else
        #include "ik/pstdint.h"
    #endif

#endif /* IK_CONFIG_HPP */
