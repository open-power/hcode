/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwp/p10_qme_putringutils.H $  */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2020                                                    */
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
/// @file   p10_putringutils.H
/// @brief  Headers and Constants used by rs4 decompression and
///         ring SCAN/ROTATE functionality
///
// *HWP HW Owner:       Greg Still <stillgs@us.ibm.com>
// *HWP FW Owner:       Prem S Jha <premjha2@in.ibm.com>
// *HWP Team:           PM
// *HWP Level:          2
// *HWP Consumed by:    QME

// *INDENT-OFF*

#ifndef _P10_PUTRINGUTILS_H_
#define _P10_PUTRINGUTILS_H_

#include <p10_ringId.H>
#include <stdint.h>
#include <common_ringId.H>
#include <fapi2.H>
#include <hw_access_def.H>
#include <p10_hcd_common.H>

/**
 * @brief  helper function to swizzle given input data
 * @note   swizles bytes to handle endianess issue.
 */

#ifdef _BIG_ENDIAN

// NOP if it is a big endian system
#define rev_16(WORD) WORD
#define rev_32(WORD) WORD
#define rev_64(WORD) WORD

#else

#define rev_16(WORD) \
    ( (((WORD) >> 8) & 0x00FF) | (((WORD) << 8) & 0xFF00) )

#define rev_32(WORD) \
    ( (((WORD) >> 24) & 0x000000FF) | (((WORD) >>  8) & 0x0000FF00) | \
      (((WORD) <<  8) & 0x00FF0000) | (((WORD) << 24) & 0xFF000000) )

#define rev_64(WORD) \
      ((((WORD) >> 56) & 0x00000000000000FF) | \
      (((WORD) >> 40) & 0x000000000000FF00) |  \
      (((WORD) >> 24) & 0x0000000000FF0000) |  \
      (((WORD) >>  8) & 0x00000000FF000000) |  \
      (((WORD) <<  8) & 0x000000FF00000000) |  \
      (((WORD) << 24) & 0x0000FF0000000000) |  \
      (((WORD) << 40) & 0x00FF000000000000) |  \
      (((WORD) << 56) & 0xFF00000000000000) )
#endif
//
// Constants and Structures
//

#define SIXTYFOUR_BIT_HEADER 64

/// @brief Constants for operations performed by putRing function.
enum opType_t
{
    ROTATE  =   0,    ///< Indicates a Rotate operation on the ring
    SCAN    =   1     ///< Indicates a Scan operation on the ring
};

/// @brief  Various RS4 packages CME putring expects
enum rs4Type_t
{
    REGULAR             =   0x00,   //Regular RS4
    CMSK                =   0x01,   //CMSK RS4
    STUMPED_RING        =   0x02    //Stumped Ring
};

extern "C"
{

typedef fapi2::ReturnCode ( *p10_qme_putringutils_FP_t ) (
                    const fapi2::Target<fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST >& i_target,
                    uint8_t* i_rs4,
                    enum QME_SCOM_CONTROLS i_scomOp,
                    enum rs4Type_t i_rs4Type );

/// @brief Function to decompress the RS4 and apply the Ring data
/// @param[in] i_target         fapi2 multicast target for core
/// @param[in] i_rs4            points to start of RS4 ring container
/// @param[in] i_scom_op        scom control value like queue/non-queue
/// @param[in] i_rs4Type        RS4 package type e.g. CMSK, STUMPED etc
/// @note      regular interface for QME putring HWP.
fapi2::ReturnCode p10_qme_putringutils(
                    const fapi2::Target<fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST >& i_target,
                    uint8_t* i_rs4,
                    enum QME_SCOM_CONTROLS i_scomOp,
                    enum rs4Type_t i_rs4Type );

/// @brief Function to decompress the RS4 and apply the Ring data
/// @param[in] i_target         fapi2 multicast target for core
/// @param[in] i_rs4            points to start of RS4 ring container
/// @param[in] i_scom_op        scom control value like queue/non-queue
/// @param[in] i_rs4Type        RS4 package type e.g. CMSK, STUMPED etc
/// @param[in] i_ringMode       different ring access operation mode
/// @note QME hcode interface for putring
fapi2::ReturnCode p10_putRingUtils(
                    const fapi2::Target<fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST >& i_target,
                    uint8_t* i_rs4,
                    enum QME_SCOM_CONTROLS i_scomOp,
                    enum rs4Type_t i_rs4Type,
                    const fapi2::RingMode i_ringMode );

} //extern "C"
#endif
