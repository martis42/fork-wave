/*=============================================================================
    Boost.Wave: A Standard compliant C++ preprocessor library
    http://www.boost.org/

    Copyright (c) 2026 Martin Medler. Distributed under the Boost
    Software License, Version 1.0. (See accompanying file
    LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/

// A function like macro can be used as alias to the special macro __has_include

//O --c++17
//O -Werror

// point system path to this directory
//O -S.

#define HAS_INCLUDE(x) __has_include(x)
#if HAS_INCLUDE(<t_2_035.cpp>)
#define FOUND_SELF_VIA_ALIAS
#else
#warning has_include could not find this file through an alias
#endif

//H 10: t_2_035.cpp(18): #define
//H 08: t_2_035.cpp(18): HAS_INCLUDE(x)=__has_include(x)
//H 10: t_2_035.cpp(19): #if
//H 00: t_2_035.cpp(19): HAS_INCLUDE(<t_2_035.cpp>), [t_2_035.cpp(18): HAS_INCLUDE(x)=__has_include(x)]
//H 02: __has_include(<t_2_035.cpp>)
//H 03: 1
//H 11: t_2_035.cpp(19): #if HAS_INCLUDE(<t_2_035.cpp>): 1
//H 10: t_2_035.cpp(20): #define
//H 08: t_2_035.cpp(20): FOUND_SELF_VIA_ALIAS=
//H 10: t_2_035.cpp(21): #else
