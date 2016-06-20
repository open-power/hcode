/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/utils/plat_ring_traverse.c $ */
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

#include "plat_ring_traverse.h"
#include "p9_hcode_image_defines.H"



#define CME_SRAM_BASE 0xFFFF8000
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
    const RingID i_ringID)
{
    int l_rc = 0;

    do
    {
        // Determine the Offset ID and Ring Type for the given Ring ID.
        uint32_t l_torOffset = 0;
        RINGTYPE l_ringType = COMMON_RING;
        SectionTOR_t* l_sectionTOR;
        struct CHIPLET_DATA l_chipletData;
        l_chipletData.iv_base_chiplet_number = 0;
        l_chipletData.iv_num_common_rings = 0;
        l_chipletData.iv_num_instance_rings = 0;
        l_chipletData.iv_num_variants = 0;
        uint32_t l_sectionOffset = 0;
        uint8_t l_chipletID = 0;

        getRingProperties(i_ringID, &l_torOffset, &l_ringType);

        if(INVALID_RING == l_torOffset)
        {
            break;
        }

        CmeHcodeLayout_t* l_hcodeLayout = (CmeHcodeLayout_t*)(CME_SRAM_BASE);

        cmeHeader_t* l_cmeHeader =
            (cmeHeader_t*) & l_hcodeLayout->elements.imgHeader;


        l_chipletData = g_ecData;

        if(INSTANCE_RING == l_ringType)
        {
            l_sectionTOR =
                (SectionTOR_t*)(l_cmeHeader->g_cme_core_spec_ring_offset);
            l_sectionOffset = l_sectionTOR->TOC_EC_INSTANCE_RING;
            l_chipletID = i_core + l_chipletData.iv_base_chiplet_number;
        }
        else
        {
            l_sectionTOR =
                (SectionTOR_t*)(l_cmeHeader->g_cme_common_ring_offset);
            l_sectionOffset = l_sectionTOR->TOC_EC_COMMON_RING;
        }

        // Determine the section TOR address for the ring
        uint32_t* l_sectionAddr =
            (uint32_t*)(CME_SRAM_BASE +
                        l_cmeHeader->g_cme_common_ring_offset + l_sectionOffset);

        if(INSTANCE_RING == l_ringType)
        {
            if ( l_chipletID > l_chipletData.iv_base_chiplet_number)
            {
                uint8_t l_chipletOffset =
                    (l_chipletID - l_chipletData.iv_base_chiplet_number);
                l_sectionAddr += (l_chipletOffset *
                                  (l_chipletData.iv_num_instance_rings *
                                   l_chipletData.iv_num_variants));
            }
            else
            {
                l_sectionAddr +=
                    (l_chipletData.iv_num_instance_rings *
                     l_chipletData.iv_num_variants);
            }
        }

        // The ring variants in section TOR are expected to be in the sequence -
        // 1. Base
        // 2. Risk Level

        // TOR records of Ring TOR are 2 bytes in size.
        uint16_t* l_ringTorAddr = (uint16_t*)(l_sectionAddr) +
                                  (l_torOffset * l_chipletData.iv_num_variants);

        if(*l_ringTorAddr != 0)
        {
            uint8_t* l_addr = (uint8_t*)(l_sectionAddr);
            uint8_t* l_rs4Address = (uint8_t*)(l_addr + *l_ringTorAddr);
            l_rc = rs4DecompressionSvc(i_core, i_scom_op, l_rs4Address);
        }
    }
    while(0);

    return l_rc;
}
