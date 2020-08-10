/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwp/p10_qme_ring_traverse.H $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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

/// @file   p10_qme_ring_traverse.H
/// @brief  Interface for functions traversing QME TOR logic.
///
// *HWP HW Owner:       Greg Still  <stillgs@us.ibm.com>
// *HWP FW Owner:       Prem S Jha  <premjha2@in.ibm.com>
// *HWP Team:           PM
// *HWP Level:          2
// *HWP Consumed by:    QME
// *INDENT-OFF*
#ifndef _QME_RING_TRAVERSE_H_
#define _QME_RING_TRAVERSE_H_

#include "p10_qme_putringutils.H"
#include "p10_hcd_common.H"
#include "p10_hcode_image_defines.H"
/*
//FIXME added to be able to compile the commit standalone.
//Eventually it needs to be removed. We need use definition in
//p10_hcode_image_defines.H
struct  __attribute__((packed, aligned(64))) QmeHeader_t
{
    uint64_t    g_qme_magic_number;
    uint32_t    g_qme_hcode_offset;
    uint32_t    g_qme_hcode_length;
    uint32_t    g_qme_common_ring_offset;
    uint32_t    g_qme_cmn_ring_ovrd_offset;
    uint32_t    g_qme_common_ring_length;
    uint32_t    g_qme_pstate_region_offset;
    uint32_t    g_qme_pstate_region_length;
    uint32_t    g_qme_inst_spec_ring_offset;
    uint32_t    g_qme_max_spec_ring_length;
    uint32_t    g_qme_scom_offset;
    uint32_t    g_qme_scom_length;
    uint32_t    g_qme_attr_tank_address;
    uint16_t    g_qme_location_id;
    uint16_t    g_qme_reserve;
    uint32_t    g_qme_timebase_hz;
    uint64_t    g_qme_cpmr_PhyAddr;
    uint64_t    g_qme_unsec_cpmr_PhyAddr;
    uint32_t    g_qme_custom_length;
};
*/
/// @brief This structure represents the layout of the Section-TOR
///        Section-TOR has the offsets to the different chiplet's
///        Common Ring section and Instance Ring section
/// @note  Used only for override ring scanning. TOR for override ring
///        binary is same for QME and SBE.
///
struct SectionTOR
{
    TorOffset_t TOC_PERV_COMMON_RING;      // Offset of Perv Common Ring section
    TorOffset_t TOC_PERV_INSTANCE_RING;    // Offset of Perv Instance Ring section

    TorOffset_t TOC_N0_COMMON_RING;        // Offset of N0 Common Ring section
    TorOffset_t TOC_N0_INSTANCE_RING;      // Offset of N0 Instance Ring section

    TorOffset_t TOC_N1_COMMON_RING;        // Offset of N1 Common Ring section
    TorOffset_t TOC_N1_INSTANCE_RING;      // Offset of N1 Instance Ring section

    TorOffset_t TOC_PCI_COMMON_RING;       // Offset of PCI Common Ring section
    TorOffset_t TOC_PCI_INSTANCE_RING;     // Offset of PCI Instance Ring section

    TorOffset_t TOC_MC_COMMON_RING;        // Offset of MC Common Ring section
    TorOffset_t TOC_MC_INSTANCE_RING;      // Offset of MC Instance Ring section

    TorOffset_t TOC_PAU0_COMMON_RING;      // Offset of PAU0 Common Ring section
    TorOffset_t TOC_PAU0_INSTANCE_RING;    // Offset of PAU0 Instance Ring section

    TorOffset_t TOC_PAU1_COMMON_RING;      // Offset of PAU1 Common Ring section
    TorOffset_t TOC_PAU1_INSTANCE_RING;    // Offset of PAU1 Instance Ring section

    TorOffset_t TOC_PAU2_COMMON_RING;      // Offset of PAU2 Common Ring section
    TorOffset_t TOC_PAU2_INSTANCE_RING;    // Offset of PAU2 Instance Ring section

    TorOffset_t TOC_PAU3_COMMON_RING;      // Offset of PAU3 Common Ring section
    TorOffset_t TOC_PAU3_INSTANCE_RING;    // Offset of PAU3 Instance Ring section

    TorOffset_t TOC_AXON0_COMMON_RING;     // Offset of AXON0 Common Ring section
    TorOffset_t TOC_AXON0_INSTANCE_RING;   // Offset of AXON0 Instance Ring section

    TorOffset_t TOC_AXON1_COMMON_RING;    // Offset of AXON1 Common Ring section
    TorOffset_t TOC_AXON1_INSTANCE_RING;   // Offset of AXON1 Instance Ring section

    TorOffset_t TOC_AXON2_COMMON_RING;    // Offset of AXON2 Common Ring section
    TorOffset_t TOC_AXON2_INSTANCE_RING;  // Offset of AXON2 Instance Ring section

    TorOffset_t TOC_AXON3_COMMON_RING;    // Offset of AXON3 Common Ring section
    TorOffset_t TOC_AXON3_INSTANCE_RING;   // Offset of AXON3 Instance Ring section

    TorOffset_t TOC_AXON4_COMMON_RING;    // Offset of AXON4 Common Ring section
    TorOffset_t TOC_AXON4_INSTANCE_RING;   // Offset of AXON4 Instance Ring section

    TorOffset_t TOC_AXON5_COMMON_RING;    // Offset of AXON5 Common Ring section
    TorOffset_t TOC_AXON5_INSTANCE_RING;   // Offset of AXON5 Instance Ring section

    TorOffset_t TOC_AXON6_COMMON_RING;    // Offset of AXON6 Common Ring section
    TorOffset_t TOC_AXON6_INSTANCE_RING;   // Offset of AXON6 Instance Ring section

    TorOffset_t TOC_AXON7_COMMON_RING;    // Offset of AXON7 Common Ring section
    TorOffset_t TOC_AXON7_INSTANCE_RING;   // Offset of AXON7 Instance Ring section

    TorOffset_t TOC_EQ_COMMON_RING;        // Offset of Quad Common Ring section
    TorOffset_t TOC_EQ_INSTANCE_RING;      // Offset of Quad Instance Ring section
};

///
/// @brief This is a plat pecific (SBE Plat) function that locates the
///        Ring Container in the image and calls the functin to decompress the
///        RS4 string and apply it to the hardware.
/// @param[in] i_target             The target of Ring apply.
/// @param[in] i_pRingSectn         Point to the TOR ring section (ie, to the TOR hdr)
/// @param[in] i_ringId             The Ring ID that identifies the ring to be applied.
/// @param[in] i_scomOp             different scom operation mode
/// @param[in] i_ringMode           different ring access operation mode
/// @return FAPI2_RC_SUCCESS on success, else error code.
///
fapi2::ReturnCode getRS4ImageFromTor(
                const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST > & i_target,
                uint8_t* i_pRingSectn ,
                const RingId_t i_ringId,
                enum QME_SCOM_CONTROLS i_scomOp,
                const fapi2::RingMode i_ringMode );

/// @brief       This is a hcode interface to QME scanning.
/// @param[in]   i_target    fapi2 target for P10 multicast core
/// @param[in]   i_ringId    The Ring ID that identifies the ring to be scanned.
/// @param[in]   i_ringMode  different ring access operation mode
/// @return FAPI2_RC_SUCCESS on success, else error code.
fapi2::ReturnCode putRingQme(
            const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST > & i_target,
            const RingId_t i_ringId,
            const fapi2::RingMode i_ringMode = fapi2::RING_MODE_HEADER_CHECK );

extern "C"
{

typedef fapi2::ReturnCode( *p10_qme_ring_traverse_FP_t )
            ( uint8_t* i_pImgPtr,
              const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST > & i_target,
              const RingId_t i_ringId,
              enum QME_SCOM_CONTROLS i_scomOp );

///
/// @brief     entry point for QME ring traveral wrapper.
/// @param[in] i_target         The target of Ring apply.
/// @param[in] i_ringId         The Ring ID that identifies the ring to be scanned.
/// @param[in] i_scomOp         different scom operation mode
/// @return FAPI2_RC_SUCCESS on success, else error code.
///
fapi2::ReturnCode p10_qme_ring_traverse( uint8_t* i_pImgPtr,
        const fapi2::Target < fapi2::TARGET_TYPE_CORE | fapi2::TARGET_TYPE_MULTICAST > & i_target,
        const RingId_t i_ringId,
        QME_SCOM_CONTROLS i_scomOp );

}

#endif  //_QME_RING_TRAVERSE_H_
