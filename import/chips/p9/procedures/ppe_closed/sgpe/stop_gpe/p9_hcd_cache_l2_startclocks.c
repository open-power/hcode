/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_l2_startclocks.c $ */
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
p9_hcd_cache_l2_startclocks(uint32_t quad, uint32_t ex)
{
    data64_t scom_data = {0};

    PK_TRACE("Drop L2 Regional Fences via CPLT_CTRL1[8/9]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_CLEAR, quad),
                ((uint64_t)ex << SHIFT64(9)));

    PK_TRACE("Raise clock sync enable before switch to dpll");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_OR, quad),
                ((uint64_t)ex << SHIFT64(37)));

    PK_TRACE("Poll for clock sync done to raise");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QACSR, quad), scom_data.value);
    }
    while((~scom_data.words.lower) & (ex << SHIFT64SH(37)));

    MARK_TRAP(SX_L2_STARTCLOCKS_ALIGN)

    // align_chiplets()

    PK_TRACE("Assert flushmode_inhibit via CPLT_CTRL0[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_OR, quad), BIT64(2));

    PK_TRACE("Assert force_align via CPLT_CTRL0[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_OR, quad), BIT64(3));

    PK_TRACE("Set then unset clear_chiplet_is_aligned via SYNC_CONFIG[7]");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_SYNC_CONFIG, quad), scom_data.value);
    scom_data.words.upper |= BIT32(7);
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

    MARK_TRAP(SX_L2_STARTCLOCKS_REGION)

    PK_TRACE("Drop force_align via CPLT_CTRL0[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_CLEAR, quad), BIT64(3));

    // -------------------------------
    // Start L2 Clock
    // -------------------------------

    PK_TRACE("Clear all bits prior clock start via SCAN_REGION_TYPE");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, quad), 0);

    PK_TRACE("Start clock via CLK_REGION");
    scom_data.value = (CLK_START_CMD | CLK_THOLD_ALL | ((uint64_t)ex << SHIFT64(9)));
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad), scom_data.value);

    PK_TRACE("Polling for clocks starting via CPLT_STAT0[8]");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_STAT0, quad), scom_data.value);
    }
    while((~scom_data.words.upper) & BIT32(8));

    PK_TRACE("Check L2 clock running via CLOCK_STAT_SL[8:9]");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_SL, quad), scom_data.value);

    if (scom_data.words.upper & (ex << SHIFT32(9)))
    {
        PK_TRACE_ERR("ERROR: L2 Clock Start Failed. HALT SGPE!");
        SGPE_STOP_QUAD_ERROR_HANDLER(quad, SGPE_STOP_EXIT_L2_STARTCLK_FAILED);
        return;
    }

    PK_TRACE("L2 clock is now running");

    // -------------------------------
    // Cleaning up
    // -------------------------------

#if !EPM_P9_TUNING

    PK_TRACE("Check Global Xstop FIR of Cache Chiplet After Start L2 Clock");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_XFIR, quad), scom_data.value);

    if (scom_data.words.upper & BITS32(0, 27))
    {
        PK_TRACE_ERR("Cache[%d] Chiplet Global Xstop FIR[%x] Detected After Start L2 Clock. HALT SGPE!",
                     quad, scom_data.words.upper);
        SGPE_STOP_QUAD_ERROR_HANDLER(quad, SGPE_STOP_EXIT_START_L2_XSTOP_ERROR);
        return;
    }

#endif

#if NIMBUS_DD_LEVEL != 10

    PK_TRACE("Drop flushmode_inhibit via CPLT_CTRL0[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_CLEAR, quad), BIT64(2));

#endif

    PK_TRACE("Set parital bad l2/l3 and stopped l2 pscom mask");
    scom_data.value = 0;

    if ((~G_sgpe_stop_record.group.expg[quad]) & FST_EX_IN_QUAD)
    {
        scom_data.value |= (PSCOM_MASK_EX0_L2 | PSCOM_MASK_EX0_L3);
    }
    else if (((~ex) & FST_EX_IN_QUAD) &&
             (G_sgpe_stop_record.state[quad].act_state_x0 >= LEVEL_EX_BASE))
    {
        scom_data.value |= PSCOM_MASK_EX0_L2;
    }

    if ((~G_sgpe_stop_record.group.expg[quad]) & SND_EX_IN_QUAD)
    {
        scom_data.value |= (PSCOM_MASK_EX1_L2 | PSCOM_MASK_EX1_L3);
    }
    else if (((~ex) & SND_EX_IN_QUAD) &&
             (G_sgpe_stop_record.state[quad].act_state_x1 >= LEVEL_EX_BASE))
    {
        scom_data.value |= PSCOM_MASK_EX1_L2;
    }

    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_RING_FENCE_MASK_LATCH, quad), scom_data.value);
}
