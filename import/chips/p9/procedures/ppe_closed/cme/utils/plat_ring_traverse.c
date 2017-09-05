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
#include "p9_ringid_cme.h"
#include "p9_cme_stop.h"
#include "p9_scan_compression.H"
#include "p9_putringutils.h"

enum
{
    RING_TYPE_OFFSET    =   3,
    RING_SIZE_OFFSET    =   4,
    CMSK_SUPPORTED      =   1,
};

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
        uint32_t  l_sectionAddr = 0;
        uint16_t* l_ringTorAddr = 0;
        enum CME_SCOM_CONTROLS l_scomOp;

        l_torOffset = (INSTANCE_RING_MASK & (RING_PROPERTIES[i_ringID].iv_torOffSet));
        l_ringType  = (INSTANCE_RING_MARK & RING_PROPERTIES[i_ringID].iv_torOffSet) ?
                      INSTANCE_RING : COMMON_RING;

        uint8_t* pCmeImage = (uint8_t*)(CME_SRAM_BASE_ADDR);

        cmeHeader_t* l_cmeHeader = (cmeHeader_t*) ( pCmeImage + CME_INT_VECTOR_SIZE );

#if defined(USE_CME_QUEUED_SCAN)
        l_scomOp = CME_SCOM_QUEUED;
#else
        l_scomOp = i_scom_op;
#endif

        l_chipletData = g_ecData;

        if(INSTANCE_RING == l_ringType)
        {
            if (!(l_cmeHeader->g_cme_core_spec_ring_offset))
            {
                break;
            }

            l_sectionAddr = (CME_SRAM_BASE_ADDR + (l_cmeHeader->g_cme_core_spec_ring_offset << 5));

            l_ringTorAddr =  (uint16_t*)(l_sectionAddr ) + (((i_core & 0x01) *
                             l_chipletData.iv_num_instance_rings ) + (l_torOffset));
        }
        else
        {
            if (!(l_cmeHeader->g_cme_common_ring_offset))
            {
                break;
            }

            l_sectionAddr = (CME_SRAM_BASE_ADDR + l_cmeHeader->g_cme_common_ring_offset);

            // TOR records of Ring TOR are 2 bytes in size.
            l_ringTorAddr = (uint16_t*)(l_sectionAddr) + (l_torOffset);


        }

        if((l_ringTorAddr) && (*l_ringTorAddr != 0))
        {
            uint8_t* l_addr = (uint8_t*)(l_sectionAddr);
            uint8_t* l_rs4Address = (uint8_t*)(l_addr + *l_ringTorAddr);
            enum rs4Type_t rs4Type;
            rs4Type = REGULAR;

            if( CMSK_SUPPORTED == *( l_rs4Address + RING_TYPE_OFFSET ) )
            {
                //if a CMSK is supported, First scan CMSK ring
                rs4DecompressionSvc( i_core, l_scomOp, l_rs4Address, 0, CMSK );
                rs4Type = STUMPED_RING;
            }


            //This RS4 can be a STUMP ring or a regular RS4
            rs4DecompressionSvc( i_core, l_scomOp, l_rs4Address, 0, rs4Type );
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

            l_sectionAddr = (CME_SRAM_BASE_ADDR + l_cmeHeader->g_cme_cmn_ring_ovrd_offset);

            // TOR records of Ring TOR are 2 bytes in size.
            l_ringTorAddr = (uint16_t*)(l_sectionAddr) + (l_torOffset);

            if((l_ringTorAddr) && (*l_ringTorAddr != 0))
            {
                uint8_t* l_addr = (uint8_t*)(l_sectionAddr);
                uint8_t* l_rs4Address = (uint8_t*)(l_addr + *l_ringTorAddr );
                rs4DecompressionSvc(i_core, l_scomOp, l_rs4Address, 1, REGULAR );
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
