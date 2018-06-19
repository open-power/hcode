/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/ippe/ioa/p9_a_common.h $ */
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
/// @file p9_a_common.h
/// @brief Abus Common Functions.
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
/// Abus Common Functions
///
/// @endverbatim
///----------------------------------------------------------------------------
#ifndef _NV_LIB_H_
#define _NV_LIB_H_
//-----------------------------------------------------------------------------
//  Includes
//-----------------------------------------------------------------------------
#include <stdint.h>

// Local PPE Register Addresses
#define WORK1_REG     0x0260
#define WORK2_REG     0x0270
#define FLAGS_REG     0x0280
#define FLAGS_SET_REG 0x0290
#define FLAGS_CLR_REG 0x02A0

// Local Registers
void     localPut( const uint32_t i_addr, const uint64_t i_data);
uint64_t localGet( const uint32_t i_addr );
void     setFir  ();


////////////////////////////////////////////////////////////////////////////////////////////
// MATH FUNCTIONS
// Most of these are so simple they should remain inline.
// Some can even be converted to macros (if careful to avoid double evaluation).
////////////////////////////////////////////////////////////////////////////////////////////

// Absolute value function to replace stdlib::abs()
static inline int abs( const int v )
{
    return ((v < 0) ? -v : v);
}

// Min/Max functions. MIN/MAX macros also exist in pk.h
static inline int min( const int a, const int b )
{
    return ((a < b) ? a : b);
}
static inline int max( const int a, const int b )
{
    return ((a > b) ? a : b);
}

//Convert a two's complement value to an integer, length is number of bits of input (two's complement) value
static inline int twosCompToInt( const int val, const int length)
{
    int ret_val = 0;
    int max = 1 << ( length - 1 );

    if ( val >= max )
    {
        ret_val = val - ( 2 * max );
    }
    else
    {
        ret_val = val;
    }

    return ret_val;
}

//Convert a signed-magnitude value to an integer, length is number of bits of input (signed-magnitude) value
static inline int signedMagToInt( const int val, const int length )
{
    int mask = (1 << (length - 1)) - 1;
    int ret_val = val & mask;

    if (val > ret_val)
    {
        ret_val = -ret_val;
    }

    return ret_val;
}

//Convert an integer to a signed-magnitude value, length is number of bits of output (signed-magnitude) value
static inline int intToSignedMag( const int val, const int length )
{
    int mag = (val < 0) ? -val : val; //abs(val);
    int sign = (val < 0) ? (1 << (length - 1)) : 0;
    return (sign | mag);
}

#endif //_ABUS_LIB_H_
