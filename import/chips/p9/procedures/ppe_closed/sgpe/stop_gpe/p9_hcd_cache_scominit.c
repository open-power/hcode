/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_scominit.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2018                                                    */
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

#include "p9_sgpe_stop_exit_marks.h"

extern SgpeStopRecord G_sgpe_stop_record;

inline __attribute__((always_inline))
void
p9_hcd_cache_scominit(uint32_t quad, uint32_t m_ex, int is_stop8)
{
    uint32_t      attr_proc_fabric_pump_mode_chip_is_node = 0; // default chip_is_group
    uint32_t      ex_loop                                 = 0;
    uint32_t      ex_count                                = 0;
    uint32_t      ex_mask                                 = 0;
    uint32_t      ex_index                                = 0;
    data64_t      scom_data                               = {0};
    ocb_qcsr_t    qcsr                                    = {0};
    sgpeHeader_t* pSgpeImgHdr = (sgpeHeader_t*)(OCC_SRAM_SGPE_HEADER_ADDR);
    uint16_t      addr_extension = pSgpeImgHdr->g_sgpe_addr_extension;

    if (pSgpeImgHdr->g_sgpe_reserve_flags & SGPE_PROC_FAB_PUMP_MODE_BIT_POS)
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
            ex_index = ex_mask & 1;

            if (!(m_ex & ex_mask))
            {
                PK_TRACE("Apply EQ_FIR_MASK to Deconfigured EQ[%x]EX[%x]", quad, ex_index);
                GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_FIR_MASK, quad), scom_data.value);
                scom_data.words.upper |= ((BIT32(4) | BIT32(6) | BIT32(8) | BIT32(11)) >> ex_index);
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_FIR_MASK, quad), scom_data.value);
            }
            else
            {
                PK_TRACE_DBG("Stop11: Working on EX%d", ex_index);

                // p9_l3_scom: EX_L3_MODE_REG1

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

                // p9_l3_scom: EX_L3_MODE_REG0
                // EXP.L3.L3_MISC.L3CERRS.L3_DMAP_CI_EN_CFG
                // EXP.L3.L3_MISC.L3CERRS.L3_RDSN_LINEDEL_UE_EN
                // EXP.L3.L3_MISC.L3CERRS.L3_CERRS_PF_CFG_SKIP_GRP_SCOPE_EN
                // EXP.L3.L3_MISC.L3CERRS.L3_SCOM_CP_ME_DROP_OVERRIDE (Only set After NDD20)
                // EXP.L3.L3_MISC.L3CERRS.L3_ADDR_HASH_EN_CFG
                // EXP.L3.L3_MISC.L3CERRS.L3_SYSMAP_SM_NOT_LG_SEL
                // EXP.L3.L3_MISC.L3CERRS.L3_HANG_POLL_PULSE_DIV
                // EXP.L3.L3_MISC.L3CERRS.L3_DATA_POLL_PULSE_DIV
                // EXP.L3.L3_MISC.L3CERRS.L3_CERRS_LRU_DECR_EN_CFG
                // EXP.L3.L3_MISC.L3CERRS.L3_CFG_CHIP_ADDR_EXT_MASK_EN

                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG0, quad, ex_index),
                            scom_data.value);
                scom_data.words.upper &= ~(BIT32(1) | BITS32(14, 8) | BIT32(22));
                scom_data.words.upper |= (BIT32(2) | BIT32(11) | BITS32(17, 2));

#if NIMBUS_DD_LEVEL != 10

                scom_data.words.upper |=  (BIT32(5) | BIT32(30));

                if (attr_proc_fabric_pump_mode_chip_is_node)
                {
                    scom_data.words.upper &= ~BIT32(5);
                }

#endif

#if NIMBUS_DD_LEVEL != 10 && NIMBUS_DD_LEVEL != 20

                if (!(pSgpeImgHdr->g_sgpe_reserve_flags & SGPE_ENABLE_MEM_EARLY_DATA_SCOM_POS))
                {
                    scom_data.words.upper |= BIT32(6);
                }

#endif

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

                if (addr_extension != 0)
                {
                    scom_data.words.upper |= (((uint32_t) addr_extension) >> 7);
                }

                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG0, quad, ex_index),
                            scom_data.value);

                // p9_ncu_scom: EX_NCU_MODE_REG
                // EXP.NC.NCMISC.NCSCOMS.SYSMAP_SM_NOT_LG_SEL
                // EXP.NC.NCMISC.NCSCOMS.TLBIE_PACING_CNT_EN
                // EXP.NC.NCMISC.NCSCOMS.TLBIE_DEC_RATE   0x10
                // EXP.NC.NCMISC.NCSCOMS.TLBIE_INC_RATE   0xF
                // EXP.NC.NCMISC.NCSCOMS.TLBIE_CNT_THRESH 0x4
                // EXP.NC.NCMISC.NCSCOMS.SKIP_GRP_SCOPE_EN
                // EXP.NC.NCMISC.NCSCOMS.SYSMAP_PB_CHIP_ADDR_EXT_MASK_EN

                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_NCU_MODE_REG, quad, ex_index),
                            scom_data.value);
                scom_data.words.upper &= ~BIT32(9);

                if (addr_extension != 0)
                {
                    scom_data.words.lower |= (((uint32_t) addr_extension) << 4);
                }

#if NIMBUS_DD_LEVEL != 10

                scom_data.words.upper &= ~(BITS32(11, 21));
                scom_data.words.upper |= BIT32(10);
                scom_data.words.upper |= BIT32(14);
                scom_data.words.upper |= BITS32(23, 4);

                scom_data.words.lower &= ~(BITS64SH(32, 3));
                scom_data.words.lower |= BIT64SH(32);
                scom_data.words.lower |= BIT64SH(51);

                if (attr_proc_fabric_pump_mode_chip_is_node)
                {
                    scom_data.words.lower &= ~BIT64SH(51);
                }

#endif

                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_NCU_MODE_REG, quad, ex_index),
                            scom_data.value);

                // p9_ncu_scom: EX_NCU_MODE_REG2
                // EXP.NC.NCMISC.NCSCOMS.HANG_POLL_PULSE_DIV
                // EXP.NC.NCMISC.NCSCOMS.MASTER_CP_DATA_POLL_PULSE_DIV
                // EXP.NC.NCMISC.NCSCOMS.TLB_SNOOP_DATA_POLL_PULSE_DIV
                // EXP.NC.NCMISC.NCSCOMS.TLB_STG1_HANG_POLL_PULSE_DIV
                // EXP.NC.NCMISC.NCSCOMS.TLB_STG2_HANG_POLL_PULSE_DIV
                // EXP.NC.NCMISC.NCSCOMS.MASTER_TLB_DATA_POLL_PULSE_DIV

                scom_data.words.lower = 0;
                scom_data.words.upper = (BITS32(3, 2) | BIT32(13) | BIT32(18) | BIT32(22) | BIT32(29));

                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_NCU_MODE_REG2, quad, ex_index),
                            scom_data.value);

                // p9_ncu_scom: EX_NCU_MODE_REG3
                // EXP.NC.NCMISC.NCSCOMS.TLBIE_STALL_EN
                // EXP.NC.NCMISC.NCSCOMS.TLBIE_STALL_THRESHOLD
                // EXP.NC.NCMISC.NCSCOMS.TLBIE_STALL_CMPLT_CNT
                // EXP.NC.NCMISC.NCSCOMS.TLBIE_STALL_DELAY_CNT
                // EXP.NC.NCMISC.NCSCOMS.TLBIE_PACING_MST_DLY_EN

                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_NCU_MODE_REG3, quad, ex_index),
                            scom_data.value);

                scom_data.words.upper &= ~BITS32(0, 16);
                scom_data.words.upper |= (BITS32(0, 3) | BIT32(5) | BITS32(12, 4));

#if NIMBUS_DD_LEVEL != 10

                scom_data.words.upper |= BIT32(16);

#endif

                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_NCU_MODE_REG3, quad, ex_index),
                            scom_data.value);
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
                // EXP.L2.L2MISC.L2CERRS.CFG_SYSMAP_SM_NOT_LG_SEL
                // EXP.L2.L2MISC.L2CERRS.CFG_SKIP_GRP_SCOPE_EN
                // EXP.L2.L2MISC.L2CERRS.CFG_HASH_L3_ADDR_EN
                // EXP.L2.L2MISC.L2CERRS.CFG_CAC_ERR_REPAIR_EN

                // L3_MODE0[11] L3_ADDR_HASH_EN_CFG must be set along with
                // L2_MODE0[21] CFG_HASH_L3_ADDR_EN before drop cache chiplet fence
                // if that L2 region is clocked and L2 snoop disable is dropped

                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_L2_MODE_REG0, quad, ex_index),
                            scom_data.value);
                scom_data.words.lower |= BIT64SH(38);
                // HW415945 -- disable bypass
#if CUMULUS_DD_LEVEL == 10
                scom_data.words.upper &= ~BIT32(15);
#else
                scom_data.words.upper |= BIT32(15);
#endif
                scom_data.words.upper |= BIT32(21);
                scom_data.words.upper &= ~BIT32(23);

                if (attr_proc_fabric_pump_mode_chip_is_node)
                {
                    scom_data.words.lower &= ~BIT64SH(38);
                }

                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_L2_MODE_REG0, quad, ex_index),
                            scom_data.value);

                // p9_l2_scom: EX_L2_MODE_REG1
                // EXP.L2.L2MISC.L2CERRS.HANG_POLL_PULSE_DIV
                // EXP.L2.L2MISC.L2CERRS.DATA_POLL_PULSE_DIV
                // EXP.L2.L2MISC.L2CERRS.SYSMAP_PB_CHIP_ADDR_EXT_MASK_EN

                GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_L2_MODE_REG1, quad, ex_index),
                            scom_data.value);
                scom_data.words.upper &= BITS32(4, 8);
                scom_data.words.upper |= BITS32(7, 2);

                if (addr_extension != 0)
                {
                    scom_data.words.lower |= (((uint32_t) addr_extension) << 16);
                }

                GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_L2_MODE_REG1, quad, ex_index),
                            scom_data.value);
            }
        }
    }
}
