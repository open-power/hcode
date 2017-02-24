/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_scominit.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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

#include "p9_sgpe_stop.h"
#include "p9_sgpe_stop_exit_marks.h"
#include "p9_hcode_image_defines.H"

extern SgpeStopRecord G_sgpe_stop_record;

int
p9_hcd_cache_scominit(uint32_t quad, uint32_t m_ex, int is_stop8)
{
    uint32_t   rc                                          = SGPE_STOP_SUCCESS;
    uint32_t   attr_proc_fabric_addr_bar_mode_small_system = 0; // default large
    uint32_t   attr_proc_fabric_pump_mode_chip_is_node     = 0; // default group
    uint32_t   ex_loop                                     = 0;
    uint32_t   ex_count                                    = 0;
    uint32_t   ex_mask                                     = 0;
    uint32_t   ex_index                                    = 0;
    data64_t   scom_data                                   = {0};
    ocb_qcsr_t qcsr                                        = {0};
    sgpeHeader_t* pSgpeImgHdr = (sgpeHeader_t*)(SGPE_IMAGE_SRAM_BASE + SGPE_HEADER_IMAGE_OFFSET);

    if (pSgpeImgHdr->g_sgpe_reserve_flags & BIT32(16))
    {
        attr_proc_fabric_addr_bar_mode_small_system = 1;
    }

    if (pSgpeImgHdr->g_sgpe_reserve_flags & BIT64(17))
    {
        attr_proc_fabric_pump_mode_chip_is_node = 1;
    }

    // Note: Epsilon settings are done via image build and scom restore(scomcust), not here

    if (!is_stop8) // Quad overall + L3/NCU(except L2) settings goes here
    {
        PK_TRACE("Enable DTS via THERM_MODE_REG[5,6-9,20-21]");
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_THERM_MODE_REG, quad), scom_data.value);
        scom_data.words.upper |= BIT32(5);     // DTS sampling enable
        scom_data.words.upper |= BITS32(6, 4); // sample pulse count
        scom_data.words.upper |= BITS32(20, 2);// DTS loop1 enable
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_THERM_MODE_REG, quad), scom_data.value);

        // read partial good exes for LCO setup below
        do
        {
            qcsr.value = in32(OCB_QCSR);
        }
        while (qcsr.fields.change_in_progress);

        for (ex_loop = 0; ex_loop < 12; ex_loop++)
        {
            if (qcsr.value & BIT32(ex_loop))
            {
                ex_count++;
            }
        }

        PK_TRACE_DBG("Reading QCSR: %x, ex_count: %x", qcsr.value, ex_count);

        for (ex_mask = 2; ex_mask; ex_mask--)
        {
            if (m_ex & ex_mask)
            {
                ex_index = ex_mask & 1;
                PK_TRACE_DBG("Stop11: Working on EX%d", ex_index);

                // p9_l3_scom: EX_L3_MODE_REG0

                PK_TRACE("Setup L3_LCO_TARGET_ID/VICTIMS via EX_L3_MODE_REG1[2-5,6-21]");
                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG1, quad, ex_index), scom_data.value);
                scom_data.words.upper &= ~BITS32(2, 20);
                scom_data.words.upper |= ((quad << SHIFT32(4)) | (ex_index << SHIFT32(5)));
                scom_data.words.upper |= ((qcsr.value & BITS32(0, 12)) >> 6);

                if (ex_count > 1)
                {
                    PK_TRACE("Assert L3_LCO_ENABLE_CFG via EX_L3_MODE_REG1[0]");
                    scom_data.words.upper |= BIT32(0);
                }
                else
                {
                    PK_TRACE("Drop L3_LCO_ENABLE_CFG via EX_L3_MODE_REG1[0]");
                    scom_data.words.upper &= ~BIT32(0);
                }

                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG1, quad, ex_index), scom_data.value);

                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG0, quad, ex_index),
                            scom_data.value);
                scom_data.words.upper &= ~(BIT32(1) | BITS32(14, 8) | BIT32(22));
                scom_data.words.upper |= (BIT32(2) | BIT32(11) | BIT32(17) | BIT32(19));

                if (attr_proc_fabric_addr_bar_mode_small_system)
                {
                    scom_data.words.upper |= BIT32(22);
                }

                if (ex_count == 2)
                {
                    PK_TRACE("Assert L3_DYN_LCO_BLK_DIS_CFG via EX_L3_MODE_REG0[9]");
                    scom_data.words.upper |= BIT32(9);
                }
                else
                {
                    PK_TRACE("Drop L3_DYN_LCO_BLK_DIS_CFG via EX_L3_MODE_REG0[9]");
                    scom_data.words.upper &= ~BIT32(9);
                }

                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG0, quad, ex_index),
                            scom_data.value);

                // p9_ncu_scom: EX_NCU_MODE_REG

                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_NCU_MODE_REG, quad, ex_index),
                            scom_data.value);
                scom_data.words.upper &= ~BIT32(9);

                if (attr_proc_fabric_addr_bar_mode_small_system)
                {
                    scom_data.words.upper |= BIT32(9);
                }

                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_NCU_MODE_REG, quad, ex_index),
                            scom_data.value);

                // p9_ncu_scom: EX_NCU_MODE_REG2

                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_NCU_MODE_REG2, quad, ex_index),
                            0x1402220100000000);
            }
        }
    }
    else
    {
        for (ex_mask = 2; ex_mask; ex_mask--)
        {
            if (m_ex & ex_mask)
            {
                ex_index = ex_mask & 1;
                PK_TRACE_DBG("Stop8: Working on EX%d", ex_index);

                // p9_l2_scom: EX_L2_MODE_REG0
                // L3_MODE0[11] L3_ADDR_HASH_EN_CFG must be set along with
                // L2_MODE0[21] CFG_HASH_L3_ADDR_EN before drop cache chiplet fence
                // if that L2 region is clocked and L2 snoop disable is dropped

                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_L2_MODE_REG0, quad, ex_index),
                            scom_data.value);
                scom_data.words.lower |= BIT64SH(38);
                scom_data.words.upper |= BIT32(21);
                scom_data.words.upper &= ~BIT32(23);

                if (attr_proc_fabric_addr_bar_mode_small_system)
                {
                    scom_data.words.upper |= BIT32(23);
                }

                if (attr_proc_fabric_pump_mode_chip_is_node)
                {
                    scom_data.words.lower &= ~BIT64SH(38);
                }

                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_L2_MODE_REG0, quad, ex_index),
                            scom_data.value);

                // p9_l2_scom: EX_L2_MODE_REG1

                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_L2_MODE_REG1, quad, ex_index),
                            scom_data.value);
                scom_data.words.upper &= BITS32(4, 8);
                scom_data.words.upper |= (BIT32(7) | BIT32(9));
                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_L2_MODE_REG1, quad, ex_index),
                            scom_data.value);
            }
        }
    }

    return rc;
}
