/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/ippe/ioa/p9_a_common.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2018                                                    */
/* [+] International Business Machines Corp.                              */
/*                                                                        */
/*                                                                        */
/* Licensed under the Apache License, Version 2.0 (the "License");        */
/* you may not use this file except in compliance with the License.       */
/* You may obtain a copy of the License at                                */
/*                                                                        */
/*     http://www.apache.org/licenses/LICENSE-2.0                         */
/*                                                                        */
/* Unless required by applicable law or agreed to in writing, software    */
/* distributed under the License is distributed on an "AS IS" BASIS,      */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or        */
/* implied. See the License for the specific language governing           */
/* permissions and limitations under the License.                         */
/*                                                                        */
/* IBM_PROLOG_END_TAG                                                     */
///
/// @file p9_a_common.C
/// @brief IO Common Functions.
///-----------------------------------------------------------------------------
/// *HWP HWP Owner        : Chris Steffen <cwsteffen@us.ibm.com>
/// *HWP HWP Backup Owner : Gary Peterson <garyp@us.ibm.com>
/// *HWP FW Owner         : Jamie Knight <rjknight@us.ibm.com>
/// *HWP Team             : IO
/// *HWP Level            : 3
/// *HWP Consumed by      : FSP:HB
///-----------------------------------------------------------------------------
///
/// @verbatim
/// a Common Functions
//
/// @endverbatim
///----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//  Includes
//-----------------------------------------------------------------------------
#include "p9_a_common.h"

//-----------------------------------------------------------------------------
//  Function Declarations
//-----------------------------------------------------------------------------
void localPut( const uint32_t i_addr, const uint64_t i_data)
{

    uint64_t volatile* gcrPortAddr = (uint64_t*)(0xC0000000 | i_addr);

    (*gcrPortAddr) = i_data;

    return;
}

uint64_t localGet( const uint32_t i_addr )
{
    uint64_t volatile* gcrPortAddr = (uint64_t*)(0xC0000000 | i_addr);
    return ( *gcrPortAddr );
}

void setFir()
{
    uint64_t volatile* firAddr = (uint64_t*)(0xC0000240);

    ( *firAddr ) = 0x1; // Any write will trigger the FIR, regardless of data

    return;
}
