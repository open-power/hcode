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
#include "pk.h"
#include "p9_ringid_cme.h"
#include "p9_cme_stop.h"




void getRingProperties(const RingID i_ringId,
                       uint32_t* o_torOffset,
                       RINGTYPE* o_ringType)
{
    do
    {
        // Determine the TOR ID
        *o_torOffset =
            (INSTANCE_RING_MASK & (RING_PROPERTIES[i_ringId].iv_torOffSet));

        // Determine Ring Type
        if(INSTANCE_RING_MARK & (RING_PROPERTIES[i_ringId].iv_torOffSet))
        {
            *o_ringType = INSTANCE_RING;
        }
        else
        {
            *o_ringType = COMMON_RING;
        }
    }
    while(0);
}
///
/// @brief This is a plat specific (CME) function that locates the
///        Ring Container in the image and calls the functin to decompress the
///        RS4 string and apply it to the hardware.
//  @param[in] i_core - core select value
//  @param[in] i_scom_op - scom control value like queue/non-queue
/// @param i_ringID The Ring ID that identifies the ring to be applied.
///
int putRing(
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
        struct CHIPLET_DATA l_chipletData;
        l_chipletData.iv_base_chiplet_number = 0;
        l_chipletData.iv_num_common_rings = 0;
        l_chipletData.iv_num_instance_rings = 0;
        l_chipletData.iv_num_variants = 0;
        uint8_t l_chipletID = 0;
        uint32_t* l_sectionAddr = 0;
        uint16_t* l_ringTorAddr = 0;
        enum CME_SCOM_CONTROLS l_scomOp;

        getRingProperties(i_ringID, &l_torOffset, &l_ringType);

        uint8_t* pCmeImage = (uint8_t*)(CME_SRAM_BASE);

        cmeHeader_t* l_cmeHeader = (cmeHeader_t*) ( pCmeImage + CME_INT_VECTOR_SIZE );

        l_scomOp = (l_cmeHeader->g_cme_mode_flags & QUEUED_SCAN_DISABLE) ? i_scom_op : CME_SCOM_QUEUED;

        l_chipletData = g_ecData;

        if(INSTANCE_RING == l_ringType)
        {
            uint8_t l_core = 1;

            if (!(l_cmeHeader->g_cme_core_spec_ring_offset))
            {
                break;
            }

            l_sectionAddr =
                (uint32_t*)(CME_SRAM_BASE + (l_cmeHeader->g_cme_core_spec_ring_offset * 32));

            if (i_core == 2)
            {
                l_core = 0;
            }

            l_chipletID = l_core + l_chipletData.iv_base_chiplet_number;
            uint8_t l_chipletOffset =
                (l_chipletID - l_chipletData.iv_base_chiplet_number);
            l_ringTorAddr =  (uint16_t*)(l_sectionAddr ) + ((l_chipletOffset *
                             l_chipletData.iv_num_instance_rings ) + (l_torOffset));
        }
        else
        {
            if (!(l_cmeHeader->g_cme_common_ring_offset))
            {
                break;
            }

            l_sectionAddr =
                (uint32_t*)(CME_SRAM_BASE + l_cmeHeader->g_cme_common_ring_offset);
            // TOR records of Ring TOR are 2 bytes in size.
            l_ringTorAddr = (uint16_t*)(l_sectionAddr) + (l_torOffset);

        }

        if((l_ringTorAddr) && (*l_ringTorAddr != 0))
        {
            uint8_t* l_addr = (uint8_t*)(l_sectionAddr);
            uint8_t* l_rs4Address = (uint8_t*)(l_addr + *l_ringTorAddr);
            l_rc = rs4DecompressionSvc(i_core, l_scomOp, l_rs4Address, 0);
        }
        else
        {
            PK_TRACE_DBG("No data for this ringId %d in .RING section", i_ringID);
        }

        if(INSTANCE_RING != l_ringType)
        {
            if (!(l_cmeHeader->g_cme_cmn_ring_ovrd_offset))
            {
                break;
            }

            l_sectionAddr =
                (uint32_t*)(CME_SRAM_BASE + l_cmeHeader->g_cme_cmn_ring_ovrd_offset);
            // TOR records of Ring TOR are 2 bytes in size.
            l_ringTorAddr = (uint16_t*)(l_sectionAddr) + (l_torOffset);

            if((l_ringTorAddr) && (*l_ringTorAddr != 0))
            {
                uint8_t* l_addr = (uint8_t*)(l_sectionAddr);
                uint8_t* l_rs4Address = (uint8_t*)(l_addr + *l_ringTorAddr);
                l_rc = rs4DecompressionSvc(i_core, l_scomOp, l_rs4Address, 1);
            }
            else
            {
                PK_TRACE_DBG("No data for this ringId %d in .OVERRIDE section", i_ringID);
            }

        }



    }
    while(0);

    return l_rc;
}
