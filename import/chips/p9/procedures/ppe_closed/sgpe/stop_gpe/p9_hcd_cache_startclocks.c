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
    uint64_t data, loop;

    // -------------------------------
    // Prepare to cache startclocks
    // -------------------------------

    PK_TRACE("Enable L3 EDRAM/LCO setup on both EXs");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, quad), BIT64(23) | BIT64(24));

    // 0x0 -> 0x8 -> 0xC -> 0xE -> 0xF to turn on edram
    // stagger EDRAM turn-on per EX (not both at same time)
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(0));
    PPE_WAIT_CORE_CYCLES(loop, 100);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(1));
    PPE_WAIT_CORE_CYCLES(loop, 100);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(2));
    PPE_WAIT_CORE_CYCLES(loop, 100);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(3));
    PPE_WAIT_CORE_CYCLES(loop, 100);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(4));
    PPE_WAIT_CORE_CYCLES(loop, 100);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(5));
    PPE_WAIT_CORE_CYCLES(loop, 100);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(6));
    PPE_WAIT_CORE_CYCLES(loop, 100);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_QCCR_WOR, quad), BIT64(7));
    PPE_WAIT_CORE_CYCLES(loop, 100);

    PK_TRACE("Setup OPCG_ALIGN Register");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_OPCG_ALIGN, quad), data);
    data = data & (BITS64(0, 4) & BITS64(12, 8) & BITS64(52, 12));
    data = data | (BIT64(1) | BIT64(3) | BIT64(59));
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_OPCG_ALIGN, quad), data);

    PK_TRACE("Drop partial good fences via CPLT_CTRL1");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_CLEAR, quad),
                0xFFFF700000000000);

    PK_TRACE("Drop vital fence via CPLT_CTRL1[4]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_CLEAR, quad), BIT64(3));

    PK_TRACE("Reset abstclk & syncclk muxsel(io_clk_sel) via CPLT_CTRL0[0:1]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_CLEAR, quad), BIT64(0) | BIT64(1));

    /// @todo set fabric node/chip ID values(read from nest chiplet) still need?

    PK_TRACE("Set flushmode_inhibit via CPLT_CTRL0[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_OR, quad), BIT64(2));

    PK_TRACE("Set force_align via CPLT_CTRL0[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_OR, quad), BIT64(3));

    /// align chiplets

    PK_TRACE("Clear force_align via CPLT_CTRL0[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_CLEAR, quad), BIT64(3));

    // -------------------------------
    // Start L3 Clock
    // -------------------------------

    PK_TRACE("Set all bits to zero prior clock start via SCAN_REGION_TYPE");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, quad), 0);

    PK_TRACE("Start clock(arrays+nsl clock region) via CLK_REGION");
    data = 0x5F3C000000006000;
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad), data);

    PK_TRACE("Start clock(sl+refresh clock region) via CLK_REGION");
    data = 0x5F3C00000000E000;
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad), data);

    // Read Clock Status Register (Cache chiplet)
    // check for bits 4:14 eq. zero, no tholds on
    PK_TRACE("Poll for L3 clock running");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_SL, quad), data);
    }
    while((~data & (BITS64(4, 4) | BITS64(10, 4))) != (BITS64(4, 4) | BITS64(10, 4)));

    PK_TRACE("L3 clock running now");

    // @todo
    // deskew_init()

    // -------------------------------
    // Cleaning up
    // -------------------------------

    PK_TRACE("Drop chiplet fence via NET_CTRL0[18]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(18));

    PK_TRACE("Drop fence to allow PCB operations to chiplet via NET_CTRL0[25]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(25));

    /// @todo Check the Global Checkstop FIR of dedicated EX chiplet

    PK_TRACE("Clear flushmode_inhibit via CPLT_CTRL0[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_CLEAR, quad), BIT64(2));

    uint32_t ex = 2;

    PK_TRACE("Drop refresh quiesce");
    GPE_GETSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, quad, ex), data);
    data &= ~BIT64(7);
    GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_DRAM_REF_REG, quad, ex), data);

    PK_TRACE("Drop LCO Disable");
    GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_LCO_DIS_REG, quad, ex), 0);

    return rc;
}
