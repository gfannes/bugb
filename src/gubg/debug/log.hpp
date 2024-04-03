#ifndef HEADER_gubg_debug_log_hpp_ALREAD_INCLUDED
#define HEADER_gubg_debug_log_hpp_ALREAD_INCLUDED

#ifndef GUBG_DEBUG_LOG_ACTIVE
    #include <gubg/platform.h>
    #if GUBG_PLATFORM_DEBUG
        #define GUBG_DEBUG_LOG_ACTIVE 1
    #else
        #define GUBG_DEBUG_LOG_ACTIVE 0
    #endif
#endif

#if GUBG_DEBUG_LOG_ACTIVE
    #include <gubg/debug/log/cout.hpp>
#else
    #include <gubg/debug/log/noop.hpp>
#endif

#endif
