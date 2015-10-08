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
p9_hcd_cache_l2_startclocks(uint8_t ex, uint8_t quad)
{
    int      rc = SGPE_STOP_SUCCESS;
    uint64_t scom_data;

    PK_TRACE("Switch glsmux to DPLL output");
    GPE_PUTSCOM(EQ_QPPM_EXCGCR_OR, QUAD_ADDR_BASE, quad, (ex << SHIFT64(35)));

    PK_TRACE("Raise clock sync enable before switch to dpll");
    GPE_PUTSCOM(EQ_QPPM_EXCGCR_OR, QUAD_ADDR_BASE, quad, (ex << SHIFT64(37)));

#if !EPM_P9_TUNING
    PK_TRACE("Poll for clock sync done to raise");

    do
    {
        GPE_GETSCOM(QPPM_QACSR, QUAD_ADDR_BASE, quad, scom_data);
    }
    while(!(scom_data & (ex << SHIFT64(37))));

#endif

    PK_TRACE("Set all bits to zero prior clock start via SCAN_REGION_TYPE");
    GPE_PUTSCOM(EQ_SCAN_REGION_TYPE, QUAD_ADDR_BASE, quad, 0);

    PK_TRACE("Start clock(arrays+nsl clock region) via CLK_REGION");
    scom_data = 0x5000000000006000 | ((uint64_t)ex << SHIFT64(9));
    GPE_PUTSCOM(EQ_CLK_REGION, QUAD_ADDR_BASE, quad, scom_data);

    PK_TRACE("Start clock(sl+refresh clock region) via CLK_REGION");
    scom_data = 0x500000000000E000 | ((uint64_t)ex << SHIFT64(9));
    GPE_PUTSCOM(EQ_CLK_REGION, QUAD_ADDR_BASE, quad, scom_data);

    PK_TRACE("Polling for clocks starting via CLOCK_STAT_SL");

    do
    {
        GPE_GETSCOM(EQ_CLOCK_STAT_SL, QUAD_ADDR_BASE, quad, scom_data);
    }
    while(((~scom_data >> SHIFT64(9)) & ex) != ex);

    PK_TRACE("L2 clock is now running");

    PK_TRACE("Drop remaining fences via CPLT_CTRL1");
    GPE_PUTSCOM(EQ_CPLT_CTRL1_CLEAR, QUAD_ADDR_BASE, quad,
                0xEFFF700000000000);

    PK_TRACE("Drop chiplet fence via NET_CTRL0[18]");
    GPE_PUTSCOM(EQ_NET_CTRL0_WAND, QUAD_ADDR_BASE, quad, ~BIT64(18));

    PK_TRACE("Drop fence to allow PCB operations to chiplet via NET_CTRL0[25]");
    GPE_PUTSCOM(EQ_NET_CTRL0_WAND, QUAD_ADDR_BASE, quad, ~BIT64(25));

    PK_TRACE("Clear force_align via CPLT_CTRL0[3]");
    GPE_PUTSCOM(EQ_CPLT_CTRL0_CLEAR, QUAD_ADDR_BASE, quad, BIT64(3));

    PK_TRACE("Clear flushmode_inhibit via CPLT_CTRL0[2]");
    GPE_PUTSCOM(EQ_CPLT_CTRL0_CLEAR, QUAD_ADDR_BASE, quad, BIT64(2));

    // Drop Quiesce
    return rc;
}
