/*
******************************************************************************
Permanent info
--------------
File:               zvdint.h
Original author:    Marat Sungatullin
Purpose:
    integer types and constants.
Created:            jan 13, 2012
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

#ifndef ZVD_INT_H
#define ZVD_INT_H

#include "base/zvdplatform.h"

#ifdef ZVD_CPP2011
#   include <cstdint>
#endif

#ifdef ZVD_CPP2011
typedef std::int8_t ZvdInt8;
typedef std::int16_t ZvdInt16;
typedef std::int32_t ZvdInt32;
typedef std::int64_t ZvdInt64;

typedef std::uint8_t ZvdUInt8;
typedef std::uint16_t ZvdUInt16;
typedef std::uint32_t ZvdUInt32;
typedef std::uint64_t ZvdUInt64;

#else

typedef signed char ZvdInt8;
typedef short ZvdInt16;
typedef int ZvdInt32;
typedef long long ZvdInt64;

typedef unsigned char ZvdUInt8;
typedef unsigned short ZvdUInt16;
typedef unsigned int ZvdUInt32;
typedef unsigned long long ZvdUInt64;

#endif

#endif // ZVD_INT_H
