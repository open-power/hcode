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

void
p9_hcd_cache_startclocks(uint32_t quad, uint32_t ex)
{
    uint32_t   id_vector = 0;
    uint32_t   ex_mask   = 0;
    uint32_t   bitloc    = 0;
    data64_t   scom_data = {0};

    sgpeHeader_t* pSgpeImgHdr = (sgpeHeader_t*)(OCC_SRAM_SGPE_HEADER_ADDR);
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
    for (ex_mask = 2; ex_mask; ex_mask--)
    {
        if (ex & ex_mask)
        {
            bitloc = (ex_mask & 1) << 2;

            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(bitloc));
#if !EPM_P9_TUNING
            PPE_WAIT_CORE_CYCLES(48000);
#endif
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64((bitloc + 1)));
#if !EPM_P9_TUNING
            PPE_WAIT_CORE_CYCLES(4000);
#endif
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64((bitloc + 2)));
#if !EPM_P9_TUNING
            PPE_WAIT_CORE_CYCLES(16000);
#endif
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64((bitloc + 3)));
#if !EPM_P9_TUNING
            PPE_WAIT_CORE_CYCLES(4000);
#endif
        }
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
    scom_data.words.lower &= ~(BITS64SH(48, 7) | BITS64SH(56, 5));
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
        PK_PANIC(SGPE_STOP_EXIT_EQ_STARTCLK_FAILED);
    }

    PK_TRACE("Cache clocks running now");

    // -------------------------------
    // Cleaning up
    // -------------------------------

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
}
