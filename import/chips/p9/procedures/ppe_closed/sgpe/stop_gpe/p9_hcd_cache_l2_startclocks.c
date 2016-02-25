/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_l2_startclocks.c $ */
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
p9_hcd_cache_l2_startclocks(uint32_t quad, uint32_t ex)
{
    int      rc = SGPE_STOP_SUCCESS;
    uint64_t scom_data;

    // do this again here for stop8 in addition to dpll_setup
    PK_TRACE("4S8: Switch L2 glsmux select to DPLL output");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_OR, quad), BITS64(34, 2));

    PK_TRACE("Setup OPCG_ALIGN Register");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_OPCG_ALIGN, quad), scom_data);
    scom_data = scom_data & (BITS64(0, 4) & BITS64(12, 8) & BITS64(52, 12));
    scom_data = scom_data | (BIT64(1) | BIT64(3) | BIT64(59));
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_OPCG_ALIGN, quad), scom_data);

    PK_TRACE("Drop L2 Regional Fences");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL1_CLEAR, quad),
                ((uint64_t)ex << SHIFT64(9)));

    // align_chiplets()

    PK_TRACE("Set flushmode_inhibit via CPLT_CTRL0[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_OR, quad), BIT64(2));

    PK_TRACE("Set force_align via CPLT_CTRL0[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_OR, quad), BIT64(3));

    PK_TRACE("Set/Unset clear_chiplet_is_aligned via SYNC_CONFIG[7]");
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

    PK_TRACE("Clear force_align via CPLT_CTRL0[3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_CLEAR, quad), BIT64(3));

    PK_TRACE("Raise clock sync enable before switch to dpll");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_OR, quad), (ex << SHIFT64(37)));

    PK_TRACE("Poll for clock sync done to raise");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QACSR, quad), scom_data);
    }
    while(!(scom_data & (ex << SHIFT64(37))));

    MARK_TRAP(SX_L2_STARTCLOCKS_GRID)

    // -------------------------------
    // Start L2 Clock
    // -------------------------------

    PK_TRACE("Set all bits to zero prior clock start via SCAN_REGION_TYPE");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_SCAN_REGION_TYPE, quad), 0);

    PK_TRACE("Start clock(arrays+nsl clock region) via CLK_REGION");
    scom_data = 0x4000000000006000 | ((uint64_t)ex << SHIFT64(9));
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad), scom_data);

    PK_TRACE("Start clock(sl+refresh clock region) via CLK_REGION");
    scom_data = 0x400000000000E000 | ((uint64_t)ex << SHIFT64(9));
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLK_REGION, quad), scom_data);

    PK_TRACE("Polling for clocks starting via CLOCK_STAT_SL");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_CLOCK_STAT_SL, quad), scom_data);
    }
    while(((~scom_data >> SHIFT64(9)) & ex) != ex);

    PK_TRACE("L2 clock is now running");

    MARK_TRAP(SX_L2_STARTCLOCKS_DONE)

    PK_TRACE("Drop TLBIE Quiesce");

    if (ex & FST_EX_IN_QUAD)
    {
        GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SICR_CLR, quad, 0), BIT64(21));
    }

    if (ex & SND_EX_IN_QUAD)
    {
        GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SICR_CLR, quad, 1), BIT64(21));
    }

    PK_TRACE("Clear flushmode_inhibit via CPLT_CTRL0[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_CPLT_CTRL0_CLEAR, quad), BIT64(2));

    PK_TRACE("Drop L2 Snoop Disable");

    if (ex & FST_EX_IN_QUAD)
    {
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_L2_RCMD_DIS_REG, quad, 0), 0);
    }

    if (ex & SND_EX_IN_QUAD)
    {
        GPE_PUTSCOM(GPE_SCOM_ADDR_EX(EX_PM_L2_RCMD_DIS_REG, quad, 1), 0);
    }

    return rc;
}
