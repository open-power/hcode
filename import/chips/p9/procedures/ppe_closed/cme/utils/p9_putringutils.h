/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/utils/p9_putringutils.h $ */
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
/// @file p9_putringutils.h
/// @brief Headers and Constants used by rs4 decompression and
/// ring SCAN/ROTATE functionality
///
// *HWP HWP Owner: Michael Floyd <mfloyd@us.ibm.com>
// *HWP HWP Backup Owner: Greg Still <stillgs@us.ibm.com>
// *HWP FW Owner: Prasad Ranganath <prasadbgr@in.ibm.com>
// *HWP Team: PM
// *HWP Level: 2
// *HWP Consumed by: CME

#ifndef _P9_PUTRINGUTILS_H_
#define _P9_PUTRINGUTILS_H_

#include <cmehw_common.h>
#include "p9_ringid_cme_enums.h"


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
uint32_t stop_decode(const uint8_t* i_rs4Str,
                     uint32_t i_nibbleIndx,
                     uint32_t* o_numRotate);

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


//
// Constants and Structures
//


#define SIXTYFOUR_BIT_HEADER 64

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
typedef struct CompressedScanData
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

    uint32_t iv_reserved;
} CompressedScanData_t;

//
// Function Definitions
//

/// @brief Function to apply the Ring data using the queue method
//  @param[in] i_core - core select value
//  @param[in] i_scom_op - scom control value like queue/non-queue
//  @param[in] i_chipletId data from RS4
/// @param[in] i_operation Type of operation to perform - ROTATE/SCAN
/// @param[in] i_opVal Number of bits for the operation
/// @param[in] i_scanData This value has to be scanned when i_operation is SCAN
void queuedScan(
    enum CME_CORE_MASKS i_core,
    enum CME_SCOM_CONTROLS i_scom_op,
    enum opType_t i_operation,
    uint32_t i_opVal,
    uint64_t i_scanData);


/// @brief Function to reader the header data from the ring and verify it.
//  @param[in] i_core - core select value
//  @param[in] i_scom_op - scom control value like queue/non-queue
/// @param[in] i_header The header data that is expected.
//  @param[in] i_chipletId data from RS4
int verifyHeader(enum CME_CORE_MASKS i_core,
                 enum CME_SCOM_CONTROLS i_scom_op,
                 const uint64_t i_header);

/// @brief Function to decompress the RS4 and apply the Ring data
//  @param[in] i_core - core select value
//  @param[in] i_scom_op - scom control value like queue/non-queue
/// @param[in] i_rs4 The RS4 compressed string
//  @param[in] i_applyOverride- 0 (no override) 1 (override mode)
int rs4DecompressionSvc(
    enum CME_CORE_MASKS i_core,
    enum CME_SCOM_CONTROLS i_scom_op,
    uint8_t* i_rs4,
    uint8_t i_applyOverride);


#endif
