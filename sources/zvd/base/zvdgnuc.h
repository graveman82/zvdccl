/*
******************************************************************************
Permanent info
--------------
File:               base/zvdgnuc.h
Original author:    Marat Sungatullin
Purpose:
    GNU C compiler detection macros

Created:            jan 11, 2012
License:

    Copyright 2012-2025 Marat Sungatullin

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.


Additional info
----------------
Modification authors:


******************************************************************************
*/

#ifndef ZVD_GNUC_H
#define ZVD_GNUC_H

// correct header validation
#if !defined(ZVD_GNUC)
#   error "zvd: this file must be included by zvdcompiler.h"
#endif // correct header validation


#define ZVD_GCC_VER_PACKED_TO_INT(major,minor,patch) \
(major * 10000 + minor * 100 + patch)

#define ZVD_GCC_CUR_VER_PACKED_TO_INT \
ZVD_GCC_VER_PACKED_TO_INT(__GNUC__,__GNUC_MINOR__,__GNUC_PATCHLEVEL__)

#define ZVD_GCC_VER_LESS(major,minor,patch) \
(ZVD_GCC_CUR_VER_PACKED_TO_INT < ZVD_GCC_VER_PACKED_TO_INT(major,minor,patch))
/**  GCC version helper

Usage
    @code
// Test for GCC >= 8.2.1
//#if ZVD_GCC_VER_LESS(8,2,1)
//#error too old version of gcc
//#endif
    @endcode

*/

#endif // ZVD_GNUC_H
