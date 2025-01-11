/*
******************************************************************************
Permanent info
--------------
File:               base/zvdcompiler.h
Original author:    Marat Sungatullin
Purpose:
    compiler detection macros

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

#ifndef ZVD_COMPILER_H
#define ZVD_COMPILER_H

// first compiler detection block
#if defined(__GNUC__)
/// If defined zvd library or larger work are compiled by GNU C compiler
#   define ZVD_GNUC __GNUC__

#else
#   error "zvd: unsupported compiler"

#endif // compiler detection


// GNU C compiler related header for further detections
#if defined(ZVD_GNUC)
#   include "base/zvdgnuc.h"

#endif

#endif // ZVD_COMPILER_H
