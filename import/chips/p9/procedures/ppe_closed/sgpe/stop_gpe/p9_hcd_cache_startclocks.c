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
p9_hcd_cache_startclocks(uint32_t quad, uint32_t ex)
{
    int      rc = SGPE_STOP_SUCCESS;
    uint64_t scom_data, loop;

    // -------------------------------
    // Prepare to cache startclocks
    // -------------------------------

    PK_TRACE("Sequence EX-L3 EDRAM enables via QPPM_QCCR[0-7]");

    // 0x0 -> 0x8 -> 0xC -> 0xE -> 0xF to turn on edram
    // stagger EDRAM turn-on per EX (not both at same time)
    if (ex & FST_EX_IN_QUAD)
    {
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(0));
        //PPE_WAIT_CORE_CYCLES(loop, 48000);
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(1));
        //PPE_WAIT_CORE_CYCLES(loop, 4000);
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(2));
        //PPE_WAIT_CORE_CYCLES(loop, 16000);
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(3));
        //PPE_WAIT_CORE_CYCLES(loop, 4000);
    }

    if (ex & SND_EX_IN_QUAD)
    {
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(4));
        //PPE_WAIT_CORE_CYCLES(loop, 100);
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(5));
        //PPE_WAIT_CORE_CYCLES(loop, 100);
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(6));
        //PPE_WAIT_CORE_CYCLES(loop, 100);
        GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(7));
        //PPE_WAIT_CORE_CYCLES(loop, 100);
    }

    PK_TRACE("Set inop_align/wait/wait_cycles via OPCG_ALIGN[0-3,12-19,52-63]");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_OPCG_ALIGN, quad), scom_data);
    scom_data = scom_data & ~(BITS64(0, 4) & BITS64(12, 8) & BITS64(52, 12));
    scom_data = scom_data | (BIT64(1) | BIT64(3) | BIT64(59));
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_OPCG_ALIGN, quad), scom_data);

    PK_TRACE("Drop partial good fences via CPLT_CTRL1[3-14]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_CLEAR, quad),
                0xFFFF700000000000);

    PK_TRACE("Drop vital fence via CPLT_CTRL1[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_CLEAR, quad), BIT64(3));

    PK_TRACE("Reset abstclk & syncclk muxsel(io_clk_sel) via CPLT_CTRL0[0:1]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_CLEAR, quad), BIT64(0) | BIT64(1));

    /// @todo set fabric node/chip ID values(read from nest chiplet) still need?

    // align_chiplets()

    PK_TRACE("Assert flushmode_inhibit via CPLT_CTRL0[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_OR, quad), BIT64(2));

    PK_TRACE("Assert force_align via CPLT_CTRL0[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_OR, quad), BIT64(3));

    PK_TRACE("Set then unset clear_chiplet_is_aligned via SYNC_CONFIG[7]");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_SYNC_CONFIG, quad), scom_data);
    scom_data = scom_data | BIT64(7);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SYNC_CONFIG, quad), scom_data);
    scom_data = scom_data & ~BIT64(7);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SYNC_CONFIG, quad), scom_data);

    PK_TRACE("Check chiplet_is_aligned");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_STAT0, quad), scom_data);
    }
    while(~scom_data & BIT64(9));

    PK_TRACE("Drop force_align via CPLT_CTRL0[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_CLEAR, quad), BIT64(3));
    PPE_WAIT_CORE_CYCLES(loop, 450);

    // -------------------------------
    // Start L3 Clock
    // -------------------------------

    PK_TRACE("Clear all bits prior start cache clocks via SCAN_REGION_TYPE");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, quad), 0);

    PK_TRACE("Start cache clocks(arrays+nsl clock region) via CLK_REGION");
    scom_data = 0x4C3C000000006000 | ((uint64_t)ex << SHIFT64(7));
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad), scom_data);

    PK_TRACE("Start cache clocks(sl+refresh clock region) via CLK_REGION");
    scom_data = 0x4C3C00000000E000 | ((uint64_t)ex << SHIFT64(7));
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad), scom_data);

    // Read Clock Status Register (Cache chiplet)
    // check for bits 4:14 eq. zero, no tholds on
    PK_TRACE("Poll for cache clocks running");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_SL, quad), scom_data);
    }
    while((scom_data &
           (BITS64(4, 2) | ((uint64_t)ex << SHIFT64(7)) | BITS64(10, 4))) != 0);

    PK_TRACE("Cache clocks running now");

    MARK_TRAP(SX_CACHE_STARTCLOCKS_DONE)

    // @todo
    // deskew_init()

    // -------------------------------
    // Cleaning up
    // -------------------------------

    PK_TRACE("Drop chiplet fence via NET_CTRL0[18]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(18));

    /// @todo Check the Global Checkstop FIR of dedicated EX chiplet

    PK_TRACE("Drop flushmode_inhibit via CPLT_CTRL0[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_CLEAR, quad), BIT64(2));


    PK_TRACE("Drop refresh quiesce");

    if (ex & FST_EX_IN_QUAD)
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, quad, 0), scom_data);
        scom_data &= ~BIT64(7);
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, quad, 0), scom_data);
    }

    if (ex & SND_EX_IN_QUAD)
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, quad, 1), scom_data);
        scom_data &= ~BIT64(7);
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, quad, 1), scom_data);
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
