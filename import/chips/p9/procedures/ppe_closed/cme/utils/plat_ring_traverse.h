/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/utils/plat_ring_traverse.h $ */
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

#ifndef _PLAT_RING_TRAVERSE_H_
#define _PLAT_RING_TRAVERSE_H_

#include "p9_putringutils.h" // for RS4 decompression utilities

/// @brief This structure represents the layout of the Section-TOR
///        Section-TOR has the offsets to the different chiplet's
///        Common Ring section and Instance Ring section
typedef struct SectionTOR
{
    uint32_t TOC_PERV_COMMON_RING;   // Offset of Perv Common Ring section
    uint32_t TOC_PERV_INSTANCE_RING; // Offset of Perv Instance Ring section

    uint32_t TOC_N0_COMMON_RING;   // Offset of N0 Common Ring section
    uint32_t TOC_N0_INSTANCE_RING; // Offset of N0 Instance Ring section

    uint32_t TOC_N1_COMMON_RING;   // Offset of N1 Common Ring section
    uint32_t TOC_N1_INSTANCE_RING; // Offset of N1 Instance Ring section

    uint32_t TOC_N2_COMMON_RING;   // Offset of N2 Common Ring section
    uint32_t TOC_N2_INSTANCE_RING; // Offset of N2 Instance Ring section

    uint32_t TOC_N3_COMMON_RING;   // Offset of N3 Common Ring section
    uint32_t TOC_N3_INSTANCE_RING; // Offset of N3 Instance Ring section

    uint32_t TOC_XB_COMMON_RING;   // Offset of XB Common Ring section
    uint32_t TOC_XB_INSTANCE_RING; // Offset of XB Instance Ring section

    uint32_t TOC_MC_COMMON_RING;   // Offset of MC Common Ring section
    uint32_t TOC_MC_INSTANCE_RING; // Offset of MC Instance Ring section

    uint32_t TOC_OB_COMMON_RING;   // Offset of OB Common Ring section
    uint32_t TOC_OB_INSTANCE_RING; // Offset of OB Instance Ring section

    uint32_t TOC_PCI0_COMMON_RING;   // Offset of PCI0 Common Ring section
    uint32_t TOC_PCI0_INSTANCE_RING; // Offset of PCI0 Instance Ring section

    uint32_t TOC_PCI1_COMMON_RING;   // Offset of PCI1 Common Ring section
    uint32_t TOC_PCI1_INSTANCE_RING; // Offset of PCI1 Instance Ring section

    uint32_t TOC_PCI2_COMMON_RING;   // Offset of PCI2 Common Ring section
    uint32_t TOC_PCI2_INSTANCE_RING; // Offset of PCI2 Instance Ring section

    uint32_t TOC_EQ_COMMON_RING;   // Offset of Quad Common Ring section
    uint32_t TOC_EQ_INSTANCE_RING; // Offset of Quad Instance Ring section

    uint32_t TOC_EC_COMMON_RING;   // Offset of Core Common Ring section
    uint32_t TOC_EC_INSTANCE_RING; // Offset of Core Instance Ring section
} SectionTOR_t;


///
/// @brief This is a plat specific (CME) function that locates the
///        Ring Container in the image and calls the functin to decompress the
///        RS4 string and apply it to the hardware.
//  @param[in] i_core - core select value
//  @param[in] i_scom_op - scom control value like queue/non-queue
/// @param i_ringID The Ring ID that identifies the ring to be applied.
///
int findRS4InImageAndApply(
    enum CME_CORE_MASKS i_core,
    enum CME_SCOM_CONTROLS i_scom_op,
    const RingID i_ringID);

#endif
