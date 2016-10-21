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

/// @brief Byte-reverse a 64-bit integer
/// @param[in] i_x 64-bit word that need to be byte reversed
/// @return Byte reversed 64-bit word
uint64_t rs4_revle64(const uint64_t i_x);

///
/// @brief Decode an unsigned integer from a 4-bit octal stop code.
/// @param[in] i_rs4Str The RS4 scan string
/// @param[in] i_nibbleIndx Index into i_rs4Str that has the stop-code
/// @param[out] o_numRotate No.of rotates decoded from the stop-code.
/// @return The number of nibbles decoded.
///
uint64_t stop_decode(const uint8_t* i_rs4Str,
                     uint32_t i_nibbleIndx,
                     uint64_t& o_numRotate);

///
/// @brief Return a big-endian-indexed nibble from a byte string
/// @param[in] i_rs4Str The RS4 scan string
/// @param[in] i_nibbleIndx Index into i_rs4Str that need to converted
///                         into a nibble
/// @return big-endian-indexed nibble
///
uint8_t rs4_get_nibble(const uint8_t* i_rs4Str, const uint32_t i_nibbleIndx);

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

///
/// @brief This structure represents the header information that preceeds the
///        RS4 compressed string.
/// @note This structure will only be used to typecast the address of the
///       RS4 header and then to dereference the offsets represented by the
///       structure members.
///       This structure need to be identical to similarly named structure
///       used in generating a Ring Container.
///
struct CompressedScanData
{
    /// Magic number - See \ref scan_compression_magic
    uint32_t iv_magic;

    /// Compressed Size. Total size in bytes, including the container header
    uint32_t iv_size;

    /// Reserved to the algorithm
    uint32_t iv_algorithmReserved;

    /// Length of the original scan chain in bits
    uint32_t iv_length;

    /// The 64 bits of Scan Select register value
    uint64_t iv_scanSelect;

    /// Data structure (header) version
    uint8_t iv_headerVersion;

    /// Flush-state optimization
    /// Normally, modifying the state of the ring requires XOR-ing the
    /// difference state (the compressed state) with the current ring state as
    /// it will appear in the Scan Data Register. If the current state of the
    /// ring is the scan-0 flush state, then by definition the Scan Data
    /// Register is always 0. Therefore we can simply write the difference to
    /// the Scan Data Register rather than using a read-XOR-write.
    uint8_t iv_flushOptimization;

    /// Ring ID uniquely identifying the repair name.
    uint8_t iv_ringId;

    /// 7-bit pervasive chiplet Id + Multicast bit
    uint8_t iv_chipletId;
};

//
// Function Definitions
//
void getRingProperties(const RingID i_ringId,
                       uint32_t* o_torOffset,
                       RINGTYPE* o_ringType);


/// @brief Function to apply the Ring data using the standard-scan method
/// @param[in] i_target Chiplet Target of Scan
//  @param[in] i_chipletId data from RS4
/// @param[in] i_operation Type of operation to perform - ROTATE/SCAN
/// @param[in] i_opVal Number of bits for the operation
/// @param[in] i_scanData This value has to be scanned when i_operation is SCAN
/// @return FAPI2_RC_SUCCESS if success, else error code.
fapi2::ReturnCode standardScan(
    const fapi2::Target<fapi2::TARGET_TYPE_ALL>& i_target,
    const uint32_t i_chipletId,
    enum opType_t i_operation,
    uint64_t i_opVal,
    uint64_t i_scanData);





/// @brief Function to reader the header data from the ring and verify it.
/// @param[in] i_target Chiplet Target of Scan
/// @param[in] i_header The header data that is expected.
//  @param[in] i_chipletId data from RS4
/// @return FAPI2_RC_SUCCESS if success, else error code.
fapi2::ReturnCode verifyHeader(const fapi2::Target<fapi2::TARGET_TYPE_ALL>&
                               i_target,
                               const uint64_t i_header,
                               const uint32_t i_chipletId);


/// @brief Function to decompress the RS4 and apply the Ring data
/// @param[in] i_target Chiplet Target of Scan
/// @param[in] i_rs4 The RS4 compressed string
/// @param[in] i_applyOverride 0 - no override 1- override mode
/// @param[in] i_ringType Common or Instance ring
/// @return FAPI2_RC_SUCCESS if success, else error code.
fapi2::ReturnCode rs4DecompressionSvc(
    const fapi2::Target<fapi2::TARGET_TYPE_ALL>& i_target,
    const uint8_t* i_rs4,
    bool i_applyOverride,
    RINGTYPE i_ringType);


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


/// @brief Function to set the Scan Region
/// @param[in] i_target Chiplet Target of Scan
/// @param[in] i_scanRegion Value to be set to select a Scan Region
//  @param[in] i_chipletId data from RS4
/// @return FAPI2_RC_SUCCESS if success, else error code.
inline void setupScanRegion(const fapi2::Target<fapi2::TARGET_TYPE_ALL>&
                            i_target,
                            uint64_t i_scanRegion,
                            const uint32_t i_chipletId)
{

    // **************************
    // Setup Scan-Type and Region
    // **************************
    fapi2::buffer<uint64_t> l_scanRegion(i_scanRegion);

    fapi2::putScom(i_target, (SCAN_REG_0x00030005 | i_chipletId), l_scanRegion);

}

/// @brief Function to write the header data to the ring.
/// @param[in] i_target Chiplet Target of Scan
/// @param[in] i_header The header data that is to be written.
//  @param[in] i_chipletId data from RS4
/// @return FAPI2_RC_SUCCESS if success, else error code.
inline void writeHeader(const fapi2::Target<fapi2::TARGET_TYPE_ALL>&
                        i_target,
                        const uint64_t i_header,
                        const uint32_t i_chipletId)
{
    fapi2::putScom(i_target, (SCAN_REG_0x0003E040 | i_chipletId), i_header);
}
#endif
