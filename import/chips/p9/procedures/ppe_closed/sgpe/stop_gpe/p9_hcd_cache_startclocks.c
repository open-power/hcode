/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_startclocks.c $ */
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

int
p9_hcd_cache_startclocks(uint32_t quad, uint32_t ex)
{
    int        rc = SGPE_STOP_SUCCESS;
    int        exloop, excount = 0;
    uint32_t   id_vector;
    data64_t   scom_data;
    ocb_qcsr_t qcsr;

    sgpeHeader_t* pSgpeImgHdr = (sgpeHeader_t*)(SGPE_IMAGE_SRAM_BASE + SGPE_HEADER_IMAGE_OFFSET);
    id_vector = pSgpeImgHdr->g_sgpe_location_id;

    // -------------------------------
    // Prepare to cache startclocks
    // -------------------------------

    PK_TRACE("Sequence EX-L3 EDRAM enables via QPPM_QCCR[0-7]");

    // QCCR[0/4] EDRAM_ENABLE_DC
    // QCCR[1/5] EDRAM_VWL_ENABLE_DC
    // QCCR[2/6] L3_EX0/1_EDRAM_VROW_VBLH_ENABLE_DC
    // QCCR[3/7] EDRAM_VPP_ENABLE_DC
    // 0x0 -> 0x8 -> 0xC -> 0xE -> 0xF to turn on edram
    // stagger EDRAM turn-on per EX (not both at same time)
    if (ex & FST_EX_IN_QUAD)
    {
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(0));
#if !EPM_P9_TUNING
        PPE_WAIT_CORE_CYCLES(48000);
#endif
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(1));
#if !EPM_P9_TUNING
        PPE_WAIT_CORE_CYCLES(4000);
#endif
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(2));
#if !EPM_P9_TUNING
        PPE_WAIT_CORE_CYCLES(16000);
#endif
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(3));
#if !EPM_P9_TUNING
        PPE_WAIT_CORE_CYCLES(4000);
#endif
    }

    if (ex & SND_EX_IN_QUAD)
    {
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(4));
#if !EPM_P9_TUNING
        PPE_WAIT_CORE_CYCLES(48000);
#endif
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(5));
#if !EPM_P9_TUNING
        PPE_WAIT_CORE_CYCLES(4000);
#endif
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(6));
#if !EPM_P9_TUNING
        PPE_WAIT_CORE_CYCLES(16000);
#endif
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(7));
#if !EPM_P9_TUNING
        PPE_WAIT_CORE_CYCLES(4000);
#endif
    }

    PK_TRACE("Assert cache EX1 ID bit2");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_OR, quad), BIT64(6));

    PK_TRACE("Set inop_align/wait/wait_cycles via OPCG_ALIGN[0-3,12-19,52-63]");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_OPCG_ALIGN, quad), scom_data.value);
    scom_data.value &= ~(BITS64(0, 4) | BITS64(12, 8) | BITS64(52, 12));
    scom_data.value |=  (BIT64(1) | BIT64(3) | BIT64(59));
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_OPCG_ALIGN, quad), scom_data.value);

    PK_TRACE("Drop partial good fences via CPLT_CTRL1[4,5,6/7,11,12/13]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_CLEAR, quad),
                (CLK_REGION_ALL_BUT_EX_DPLL  |
                 ((uint64_t)ex << SHIFT64(7)) |
                 ((uint64_t)ex << SHIFT64(13))));

    PK_TRACE("Drop vital fence via CPLT_CTRL1[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_CLEAR, quad), BIT64(3));

    PK_TRACE("Reset abstclk & syncclk muxsel(io_clk_sel) via CPLT_CTRL0[0:1]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_CLEAR, quad), BIT64(0) | BIT64(1));

    PK_TRACE("Set fabric chiplet ID values via EQ_CPLT_CONF0[48-51,52-54,56-60]");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CONF0, quad), scom_data.value);
    scom_data.words.lower &= ~(BITS32(16, 7) | BITS32(24, 5));
    scom_data.words.lower |= id_vector;
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CONF0, quad), scom_data.value);

    // align_chiplets()

    PK_TRACE("Assert flushmode_inhibit via CPLT_CTRL0[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_OR, quad), BIT64(2));

    PK_TRACE("Assert force_align via CPLT_CTRL0[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_OR, quad), BIT64(3));

    PK_TRACE("Set then unset clear_chiplet_is_aligned via SYNC_CONFIG[7]");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_SYNC_CONFIG, quad), scom_data.value);
    scom_data.words.upper |=  BIT32(7);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SYNC_CONFIG, quad), scom_data.value);
    scom_data.words.upper &= ~BIT32(7);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SYNC_CONFIG, quad), scom_data.value);

    // 255 cache cycles
    PPE_WAIT_CORE_CYCLES(510);

    PK_TRACE("Check chiplet_is_aligned");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_STAT0, quad), scom_data.value);
    }
    while((~scom_data.words.upper) & BIT32(9));

    MARK_TRAP(SX_CACHE_STARTCLOCKS_REGION)

    PK_TRACE("Drop force_align via CPLT_CTRL0[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_CLEAR, quad), BIT64(3));

    // -------------------------------
    // Start L3 Clock
    // -------------------------------

    PK_TRACE("Clear all bits prior start cache clocks via SCAN_REGION_TYPE");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, quad), 0);

    PK_TRACE("Start cache clocks via CLK_REGION");
    scom_data.value = (CLK_START_CMD | CLK_THOLD_ALL   |
                       CLK_REGION_ALL_BUT_EX_DPLL      |
                       ((uint64_t)ex << SHIFT64(7))    |
                       ((uint64_t)ex << SHIFT64(13)));
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad), scom_data.value);

    // Read Clock Status Register (Cache chiplet)
    // check for bits 4:14 eq. zero, no tholds on
    PK_TRACE("Poll for cache clocks running via CPLT_STAT0[8]");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_STAT0, quad), scom_data.value);
    }
    while((~scom_data.words.upper) & BIT32(8));

    PK_TRACE("Check cache clock running via CLOCK_STAT_SL[4-14]");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_SL, quad), scom_data.value);

    if (scom_data.value & (CLK_REGION_ALL_BUT_EX_DPLL      |
                           ((uint64_t)ex << SHIFT64(7))    |
                           ((uint64_t)ex << SHIFT64(13))))
    {
        PK_TRACE("Cache clock start failed");
        pk_halt();
    }

    PK_TRACE("Cache clocks running now");

    /// @todo deskew_init()

    // -------------------------------
    // Cleaning up
    // -------------------------------

    // The LCO programming for the istep 16 use-case needs to be done
    // before the chiplet fence is dropped.

    // read partial good exes
    do
    {
        qcsr.value = in32(OCB_QCSR);
    }
    while (qcsr.fields.change_in_progress);

    for (exloop = 0; exloop < 12; exloop++)
    {
        if (qcsr.value & BIT32(exloop))
        {
            excount++;
        }
    }

    PK_TRACE_DBG("Reading QCSR: %x, excount: %x", qcsr.value, excount);

    if (ex & FST_EX_IN_QUAD)
    {
        PK_TRACE("Setup L3_LCO_TARGET_ID/VICTIMS on ex0 via EX_L3_MODE_REG1[2-5,6-21]");
        GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG1, quad, 0), scom_data.value);
        scom_data.words.upper &= ~BITS32(2, 20);
        scom_data.words.upper |= (quad << SHIFT32((5 - 1)));
        scom_data.words.upper |= ((qcsr.value & BITS32(0, 12)) >> 6);

        if (excount > 1)
        {
            PK_TRACE("Assert L3_LCO_ENABLE_CFG on ex0 via EX_L3_MODE_REG1[0]");
            scom_data.words.upper |= BIT32(0);
        }
        else
        {
            PK_TRACE("Drop L3_LCO_ENABLE_CFG on ex0 via EX_L3_MODE_REG1[0]");
            scom_data.words.upper &= ~BIT32(0);
        }

        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG1, quad, 0), scom_data.value);
        GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG0, quad, 0), scom_data.value);

        if (excount == 2)
        {
            PK_TRACE("Assert L3_DYN_LCO_BLK_DIS_CFG on ex0 via EX_L3_MODE_REG0[9]");
            scom_data.words.upper |= BIT32(9);
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG0, quad, 0), scom_data.value);
        }
        else
        {
            PK_TRACE("Drop L3_DYN_LCO_BLK_DIS_CFG on ex0 via EX_L3_MODE_REG0[9]");
            scom_data.words.upper &= ~BIT32(9);
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG0, quad, 0), scom_data.value);
        }
    }

    if (ex & SND_EX_IN_QUAD)
    {
        PK_TRACE("Setup L3_LCO_TARGET_ID/VICTIMS on ex1 via EX_L3_MODE_REG1[2-5,6-21]");
        GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG1, quad, 1), scom_data.value);
        scom_data.words.upper &= ~BITS32(2, 20);
        scom_data.words.upper |= ((quad << SHIFT32((5 - 1))) | BIT32(5));
        scom_data.words.upper |= ((qcsr.value & BITS32(0, 12)) >> 6);

        if (excount > 1)
        {
            PK_TRACE("Assert L3_LCO_ENABLE_CFG on ex1 via EX_L3_MODE_REG1[0]");
            scom_data.words.upper |= BIT32(0);
        }
        else
        {
            PK_TRACE("Drop L3_LCO_ENABLE_CFG on ex1 via EX_L3_MODE_REG1[0]");
            scom_data.words.upper &= ~BIT32(0);
        }

        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG1, quad, 1), scom_data.value);
        GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG0, quad, 1), scom_data.value);

        if (excount == 2)
        {
            PK_TRACE("Assert L3_DYN_LCO_BLK_DIS_CFG on ex1 via EX_L3_MODE_REG0[9]");
            scom_data.words.upper |= BIT32(9);
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG0, quad, 1), scom_data.value);
        }
        else
        {
            PK_TRACE("Drop L3_DYN_LCO_BLK_DIS_CFG on ex1 via EX_L3_MODE_REG0[9]");
            scom_data.words.upper &= ~BIT32(9);
            GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_L3_MODE_REG0, quad, 1), scom_data.value);
        }
    }

    PK_TRACE("Drop chiplet fence via NET_CTRL0[18]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(18));

    /// @todo RTC166917 Check the Global Checkstop FIR

#if NIMBUS_DD_LEVEL != 1

    PK_TRACE("Drop flushmode_inhibit via CPLT_CTRL0[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_CLEAR, quad), BIT64(2));

#endif

    PK_TRACE("Set all l2s and partial bad l3 pscom mask");
    scom_data.value = PSCOM_MASK_ALL_L2;

    if ((~ex) & FST_EX_IN_QUAD)
    {
        scom_data.value |= PSCOM_MASK_EX0_L3;
    }

    if ((~ex) & SND_EX_IN_QUAD)
    {
        scom_data.value |= PSCOM_MASK_EX1_L3;
    }

    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_RING_FENCE_MASK_LATCH, quad), scom_data.value);

    PK_TRACE("Drop refresh quiesce");

    if (ex & FST_EX_IN_QUAD)
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, quad, 0), scom_data.value);
        scom_data.words.upper &= ~BIT32(7);
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, quad, 0), scom_data.value);
    }

    if (ex & SND_EX_IN_QUAD)
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, quad, 1), scom_data.value);
        scom_data.words.upper &= ~BIT32(7);
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, quad, 1), scom_data.value);
    }

    PK_TRACE("Drop LCO Disable");

    if (ex & FST_EX_IN_QUAD)
    {
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_LCO_DIS_REG, quad, 0), 0);
    }

    if (ex & SND_EX_IN_QUAD)
    {
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_LCO_DIS_REG, quad, 1), 0);
    }

    return rc;
}
