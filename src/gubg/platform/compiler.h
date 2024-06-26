#ifndef HEADER_gubg_platform_compiler_h_ALREADY_INCLUDED
#define HEADER_gubg_platform_compiler_h_ALREADY_INCLUDED

#if defined(__GNUC__)
    #define GUBG_PLATFORM_COMPILER "gcc"
    #define GUBG_PLATFORM_COMPILER_GCC 1
    #define GUBG_PLATFORM_COMPILER_VERSION (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)
#endif

#if defined(_MSC_VER)
    #define GUBG_PLATFORM_COMPILER "msvc"
    #define GUBG_PLATFORM_COMPILER_MSVC 1
    #define GUBG_PLATFORM_COMPILER_VERSION (_MSC_FULL_VER / 1000)
#endif

#if defined(NDEBUG)
    #define GUBG_PLATFORM_DEBUG 0
#else
    #define GUBG_PLATFORM_DEBUG 1
#endif

#endif
