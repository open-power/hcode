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

int
p9_hcd_cache_startclocks(uint8_t quad)
{
    int      rc = SGPE_STOP_SUCCESS;
    uint64_t data;

    // -------------------------------
    // Prepare to cache startclocks
    // -------------------------------

    /// @todo Drop the Pervasive THOLD, was in p8 code, where in p9?

    PK_TRACE("Enable L3 EDRAM/LCO setup on both EXs");
    GPE_PUTSCOM(EQ_NET_CTRL0_WOR, QUAD_ADDR_BASE, quad, BIT64(23) | BIT64(24));
    // 0x0 -> 0x8 -> 0xC -> 0xE -> 0xF to turn on edram
    GPE_PUTSCOM(EQ_QPPM_QCCR_WOR, QUAD_ADDR_BASE, quad, BIT64(0) | BIT64(4));
    GPE_PUTSCOM(EQ_QPPM_QCCR_WOR, QUAD_ADDR_BASE, quad, BIT64(1) | BIT64(5));
    GPE_PUTSCOM(EQ_QPPM_QCCR_WOR, QUAD_ADDR_BASE, quad, BIT64(2) | BIT64(6));
    GPE_PUTSCOM(EQ_QPPM_QCCR_WOR, QUAD_ADDR_BASE, quad, BIT64(3) | BIT64(7));

    /// @todo get next step from perv, but not in p8 code, necessary?
    PK_TRACE("Drop Vital Fence via CPLT_CTRL1[3]");
    GPE_PUTSCOM(EQ_CPLT_CTRL1_CLEAR, QUAD_ADDR_BASE, quad, BIT64(3));

    PK_TRACE("Reset abstclk & syncclk muxsel(io_clk_sel) via CPLT_CTRL0[0:1]");
    GPE_PUTSCOM(EQ_CPLT_CTRL0_CLEAR, QUAD_ADDR_BASE, quad, BIT64(0) | BIT64(1));

    PK_TRACE("Set abist_mode_dc for cache chiplet(cache recovery) via BIST[1]");
    GPE_GETSCOM(EQ_BIST, QUAD_ADDR_BASE, quad, data);
    data |= BIT64(1);
    GPE_PUTSCOM(EQ_BIST, QUAD_ADDR_BASE, quad, data);

    /// @todo set fabric node/chip ID values(read from nest chiplet) still need?
    /// @todo force chiplet out of flush?

    // -------------------------------
    // Start L3 Clock
    // -------------------------------

    // @todo put this into dpll_setup?
    //PK_TRACE("Switch L3 glsmux to DPLL output");
    //GPE_PUTSCOM(EQ_PPM_CGCR_OR, BIT64(3)));

    PK_TRACE("Set all bits to zero prior clock start via SCAN_REGION_TYPE");
    GPE_PUTSCOM(EQ_SCAN_REGION_TYPE, QUAD_ADDR_BASE, quad, 0);

    PK_TRACE("Start clock(arrays+nsl clock region) via CLK_REGION");
    data = 0x5F3C000000006000;
    GPE_PUTSCOM(EQ_CLK_REGION, QUAD_ADDR_BASE, quad, data);

    PK_TRACE("Start clock(sl+refresh clock region) via CLK_REGION");
    data = 0x5F3C00000000E000;
    GPE_PUTSCOM(EQ_CLK_REGION, QUAD_ADDR_BASE, quad,  data);

    // Read Clock Status Register (Cache chiplet)
    // check for bits 4:14 eq. zero, no tholds on
    PK_TRACE("Poll for L3 clock running");

    do
    {
        GPE_GETSCOM(EQ_CLOCK_STAT_SL, QUAD_ADDR_BASE, quad, data);
    }
    while(!(data & BITS64(4, 11)));

    PK_TRACE("L3 clock running now");

    // @todo
    // deskew_init()
///// put everything below in l2_startclocks /////
    /*
        // -------------------------------
        // Start L2 Clock
        // -------------------------------

        PK_TRACE("Switch L2 glsmux to DPLL output");
        GPE_PUTSCOM(EQ_QPPM_QACCR_SCOM2, QUAD_ADDR_BASE, quad, BIT64(19));
        GPE_PUTSCOM(EQ_QPPM_QACCR_SCOM2, QUAD_ADDR_BASE, quad, BIT64(39));

        PK_TRACE("Raise L2 clock sync enable");
        GPE_PUTSCOM(EQ_QPPM_QACCR_SCOM2, QUAD_ADDR_BASE, quad, BIT64(13));
        GPE_PUTSCOM(EQ_QPPM_QACCR_SCOM2, QUAD_ADDR_BASE, quad, BIT64(33));

        PK_TRACE("Poll for clock sync done to raise on EX L2s");
        do {
            GPE_GETSCOM(EQ_QPPM_QACSR, QUAD_ADDR_BASE, quad, data);
        } while(((data & 0x3) != 3));
        PK_TRACE("EX L2s clock sync done");

        PK_TRACE("Start clock(arrays+nsl clock region) via CLK_REGION");
        data = 0x50C0000000006000;
        GPE_PUTSCOM(EQ_CLK_REGION, QUAD_ADDR_BASE, quad, data);

        PK_TRACE("Start clock(sl+refresh clock region) via CLK_REGION");
        data = 0x50C000000000E000;
        GPE_PUTSCOM(EQ_CLK_REGION, QUAD_ADDR_BASE, quad, data);

        // Read Clock Status Register (Cache chiplet)
        // check for bits 4:14 eq. zero, no tholds on
        PK_TRACE("Poll for L2 clock running");
        do {
            GPE_GETSCOM(EQ_CLOCK_STAT_SL, QUAD_ADDR_BASE, quad, data);
        } while(!(data & BITS64(4, 11)));
        PK_TRACE("L2 clock running now");

        // -------------------------------
        // Cleaning up
        // -------------------------------

        /// @todo Check the Global Checkstop FIR of dedicated EX chiplet
        /// @todo Ben's workaround at model e9025, move clear align/flush to end

        /// @todo what are the remaining fences to drop?
        PK_TRACE("Drop remaining fences via CPLT_CTRL1");
        GPE_PUTSCOM(EQ_CPLT_CTRL1_CLEAR, QUAD_ADDR_BASE, quad, 0xEFFF700000000000);

        PK_TRACE("Drop chiplet fence via NET_CTRL0[18]");
        GPE_PUTSCOM(EQ_NET_CTRL0_WAND, QUAD_ADDR_BASE, quad, ~BIT64(18));

        PK_TRACE("Drop fence to allow PCB operations to chiplet via NET_CTRL0[25]");
        GPE_PUTSCOM(EQ_NET_CTRL0_WAND, QUAD_ADDR_BASE, quad, ~BIT64(25));

        PK_TRACE("Clear force_align via CPLT_CTRL0[3]");
        GPE_PUTSCOM(EQ_CPLT_CTRL0_CLEAR, QUAD_ADDR_BASE, quad, BIT64(3));

        PK_TRACE("Clear flushmode_inhibit via CPLT_CTRL0[2]");
        GPE_PUTSCOM(EQ_CPLT_CTRL0_CLEAR, QUAD_ADDR_BASE, quad, BIT64(2));
    */
    return rc;
}
