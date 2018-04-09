/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/utils/plat_ring_traverse.C $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2018                                                    */
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


#include "plat_ring_traverse.H"
#include "p9_hcode_image_defines.H"


///
/// @brief This is a plat specific (SGPE Plat) function that locates the
///        Ring Container in the image and calls the functin to decompress the
///        RS4 string and apply it to the hardware.
/// @param i_target The target of Ring apply.
/// @param i_ringID The Ring ID that identifies the ring to be applied.
/// @return FAPI2_RC_SUCCESS on success, else error code.
///
fapi2::ReturnCode findRS4InImageAndApply(
    const fapi2::Target<fapi2::TARGET_TYPE_ALL>& i_target,
    const RingID i_ringID,
    const fapi2::RingMode i_ringMode)
{
    fapi2::ReturnCode l_rc;

    do
    {
        // Determine the Offset ID and Ring Type for the given Ring ID.
        uint32_t l_torOffset = 0;
        RingType_t l_ringType = COMMON_RING;
        ChipletData_t l_chipletData;
        l_chipletData.iv_base_chiplet_number = 0;
        l_chipletData.iv_num_common_rings = 0;
        l_chipletData.iv_num_instance_rings = 0;
        l_chipletData.iv_num_instance_rings_scan_addrs = 0;
        l_chipletData.iv_num_common_ring_variants = 0;
        uint16_t* l_ringTorAddr = NULL;
        uint32_t* l_sectionAddr = NULL;
        bool l_override = false;

        l_torOffset = (INSTANCE_RING_MASK & (RING_PROPERTIES[i_ringID].iv_torOffSet));
        l_ringType  = (INSTANCE_RING_MARK & RING_PROPERTIES[i_ringID].iv_torOffSet) ?
                      INSTANCE_RING : COMMON_RING;

        sgpeHeader_t* l_hcodeLayout = (sgpeHeader_t*)(OCC_SRAM_SGPE_HEADER_ADDR);

        l_chipletData = g_eqData;

        uint32_t l_chipletID = i_target.getChipletNumber();

        if(INSTANCE_RING == l_ringType)
        {
            if (l_hcodeLayout->g_sgpe_spec_ring_occ_offset == 0)
            {
                break;
            }

            l_sectionAddr =
                (uint32_t*)(OCC_SRAM_SGPE_BASE_ADDR + l_hcodeLayout->g_sgpe_spec_ring_occ_offset);

            if ( l_chipletID >= l_chipletData.iv_base_chiplet_number)
            {
                uint32_t l_ex_number = 0;
                uint8_t l_chipletOffset = (l_chipletID - l_chipletData.iv_base_chiplet_number);

                if (fapi2::TARGET_TYPE_EX & (i_target.getTargetType()))
                {
                    l_ex_number = (i_target.getTargetNumber()) % 2;
                    PK_TRACE_DBG ("l_chipletID %d l_ex_number %d", l_chipletID, l_ex_number);
                }

                l_ringTorAddr =  reinterpret_cast<uint16_t*>(l_sectionAddr ) + ((l_chipletOffset *
                                 12) + (l_torOffset + l_ex_number));
            }
        }
        else
        {
            if (l_hcodeLayout->g_sgpe_cmn_ring_occ_offset == 0)
            {
                break;
            }

            l_sectionAddr =
                (uint32_t*)(OCC_SRAM_SGPE_BASE_ADDR + l_hcodeLayout->g_sgpe_cmn_ring_occ_offset);

            l_ringTorAddr = reinterpret_cast<uint16_t*>(l_sectionAddr) + (l_torOffset);

        }

        if((l_ringTorAddr) && (*l_ringTorAddr != 0))
        {
            if ( ( (i_ringID >= eq_ana_bndy_bucket_0) && (i_ringID <= eq_ana_bndy_bucket_25) ) ||
                 ( i_ringID == eq_ana_bndy_bucket_l3dcc ) ||
                 ( (i_ringID >= eq_ana_bndy_bucket_26) && (i_ringID <= eq_ana_bndy_bucket_41) ) )
            {
                l_override = true;
            }

            uint8_t* l_addr = (uint8_t*)(l_sectionAddr);
            uint8_t* l_rs4Address = (uint8_t*)(l_addr + *l_ringTorAddr);
            l_rc = rs4DecompressionSvc(i_target, l_rs4Address, l_override, l_ringType, i_ringMode);
        }
        else
        {
            PK_TRACE_DBG("No data for this ringId %d in .RING section", i_ringID);
        }

        if(INSTANCE_RING != l_ringType)
        {
            if (l_hcodeLayout->g_sgpe_cmn_ring_ovrd_occ_offset == 0)
            {
                PK_TRACE_DBG("No data in override ring section");
                break;
            }

            l_sectionAddr =
                (uint32_t*)(OCC_SRAM_SGPE_BASE_ADDR + l_hcodeLayout->g_sgpe_cmn_ring_ovrd_occ_offset);

            l_ringTorAddr = reinterpret_cast<uint16_t*>(l_sectionAddr) + (l_torOffset);


            if((l_ringTorAddr) && (*l_ringTorAddr != 0))
            {
                uint8_t* l_addr = (uint8_t*)(l_sectionAddr);
                uint8_t* l_rs4Address = (uint8_t*)(l_addr + *l_ringTorAddr);
                l_rc = rs4DecompressionSvc(i_target, l_rs4Address, true, l_ringType, i_ringMode);
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
