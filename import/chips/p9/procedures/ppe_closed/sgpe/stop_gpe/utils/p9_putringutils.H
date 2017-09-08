/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/utils/p9_putringutils.H $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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

/// @file p9_putRingUtils.H
/// @brief Headers and Constants used by rs4 decompression and
/// ring SCAN/ROTATE functionality
///
// *HWP HWP Owner:
// *HWP FW Owner:
// *HWP Team: PM
// *HWP Level: 2
// *HWP Consumed by: SGPE

#ifndef _P9_PUTRINGUTILS_H_
#define _P9_PUTRINGUTILS_H_

#include "return_code.H"
#include "fapi2.H"
#include "p9_ringid_sgpe.H"

namespace RS4
{

//
// Forward Declarations
//




///
/// @brief Return verbatim data from the RS4 string
/// @param[in] i_rs4Str The RS4 scan string
/// @param[in] i_nibbleIndx Index into i_rs4Str that need to converted
///                         into a nibble
/// @param[in] i_nibbleCount The count of nibbles that need to be put
///                          in the return value.
/// @return big-endian-indexed double word
///
uint64_t rs4_get_verbatim(const uint8_t* i_rs4Str,
                          const uint32_t i_nibbleIndx,
                          const uint8_t i_nibbleCount);

}; // end of RS4 namespace

using namespace RS4;
//
// Constants and Structures
//

const uint32_t SCAN_REG_0x00039000 = 0x00039000;
const uint32_t MAX_ROTATE_VALUE = 0x100000;
const uint32_t SCAN_REG_0x00000100 = 0x00000100;
const uint32_t SCAN_REG_0x0003E000 = 0x0003E000;
const uint32_t SCAN_REG_0x00030005 = 0x00030005;
const uint32_t SCAN_REG_0x0003E040 = 0x0003E040;
const uint64_t CHECK_WORD_DATA = 0xa5a5a5a5a5a5a5a5;

const uint32_t SIXTYFOUR_BIT_HEADER = 64;

/// @brief Constants for operations performed by putRing function.
enum opType_t
{
    ROTATE = 0,  ///< Indicates a Rotate operation on the ring
    SCAN = 1     ///< Indicates a Scan operation on the ring
};

//
// Function Definitions
//


/// @brief Function to decompress the RS4 and apply the Ring data
/// @param[in] i_target Chiplet Target of Scan
/// @param[in] i_rs4 The RS4 compressed string
/// @param[in] i_applyOverride 0 - no override 1- override mode
/// @param[in] i_ringType Common or Instance ring
/// @param[in] i_ringMode Ring operation mode.
/// @return FAPI2_RC_SUCCESS if success, else error code.
fapi2::ReturnCode rs4DecompressionSvc(
    const fapi2::Target<fapi2::TARGET_TYPE_ALL>& i_target,
    const uint8_t* i_rs4,
    bool i_applyOverride,
    RINGTYPE i_ringType,
    const fapi2::RingMode i_ringMode);


/// @brief Function to clean up the scan region and type
/// @param[in] i_target Chiplet Target of Scan
//  @param[in] chipletId data from RS4
/// @return FAPI2_RC_SUCCESS if success, else error code.
inline void cleanScanRegionandTypeData(
    const fapi2::Target<fapi2::TARGET_TYPE_ALL>& i_target,
    const uint32_t i_chipletId)
{
    //////////////////////
    //cleanup opcg_reg0
    //////////////////////

    fapi2::buffer<uint64_t> l_data(0);

    fapi2::putScom(i_target, (SCAN_REG_0x00030005 | i_chipletId), l_data);
}

#endif
