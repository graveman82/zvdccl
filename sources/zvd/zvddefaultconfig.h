/*
******************************************************************************
Permanent info
--------------
File:               zvdheaderblank.h
Original author:    Marat Sungatullin
Purpose:
    config building of zvd
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

#ifndef ZVD_CONFIG_H
#define ZVD_CONFIG_H

#ifdef ZVD_USE_CUSTOM_CONFIG
#include "zvdcustomconfig.h"
#else
#include "zvddefaultconfig.h"
#endif // zvd config selection

#endif // ZVD_CONFIG_H
