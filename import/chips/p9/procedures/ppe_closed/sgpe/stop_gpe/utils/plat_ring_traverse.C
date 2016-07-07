/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/utils/plat_ring_traverse.C $ */
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


#include "plat_ring_traverse.H"
#include "p9_hcode_image_defines.H"



const uint32_t SGPE_SRAM_BASE = 0xFFF30000;
const uint32_t SGPE_IMAGE_HEADER_OFFSET = 0x180;
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
    const RingID i_ringID)
{
    fapi2::ReturnCode l_rc;

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

        getRingProperties(i_ringID, &l_torOffset, &l_ringType);

        sgpeHeader_t* l_hcodeLayout = (sgpeHeader_t*)(SGPE_SRAM_BASE +
                                      SGPE_IMAGE_HEADER_OFFSET);

        l_chipletData = g_eqData;

        uint32_t l_chipletID = i_target.getChipletNumber();
        // Determine the section TOR address for the ring
        uint32_t* l_sectionAddr =
            (uint32_t*)(SGPE_SRAM_BASE + SGPE_IMAGE_HEADER_OFFSET +
                        l_hcodeLayout->g_sgpe_cmn_ring_occ_offset);

        if(INSTANCE_RING == l_ringType)
        {
            l_sectionAddr =
                (uint32_t*)(SGPE_SRAM_BASE + SGPE_IMAGE_HEADER_OFFSET +
                            l_hcodeLayout->g_sgpe_spec_ring_occ_offset);

            l_sectionAddr += ((l_chipletID -
                               l_chipletData.iv_base_chiplet_number) * l_chipletData.iv_num_variants);
        }

        // TOR records of Ring TOR are 2 bytes in size.
        uint16_t* l_ringTorAddr = (uint16_t*)(l_sectionAddr) +
                                  (l_torOffset * l_chipletData.iv_num_variants);

        if(*l_ringTorAddr != 0)
        {
            uint8_t* l_addr = (uint8_t*)(l_sectionAddr);
            uint8_t* l_rs4Address = (uint8_t*)(l_addr + *l_ringTorAddr);
            l_rc = rs4DecompressionSvc(i_target, l_rs4Address);
        }
    }
    while(0);

    return l_rc;
}
