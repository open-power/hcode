/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_chiplet_reset.c $ */
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
p9_hcd_cache_chiplet_reset(uint32_t quad)
{
    int rc = SGPE_STOP_SUCCESS;
    uint64_t scom_data;

    PK_TRACE("Init NET_CTRL0[1-5,12-14,18,22,26],step needed for hotplug");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, quad), NET_CTRL0_INIT_VECTOR);

    PK_TRACE("Assert Progdly/DCC bypass,L2 DCC reset via NET_CTRL1[1,2,23,24]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL1_WOR, quad), (BITS64(1, 2) | BITS64(23, 2)));

    PK_TRACE("Assert DPLL ff_bypass via QPPM_DPLL_CTRL[2]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_DPLL_CTRL_OR, quad), BIT64(2));

    PK_TRACE("Drop vital thold via NET_CTRL0[16]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(16));

    MARK_TRAP(SX_CHIPLET_RESET_GLSMUX_RESET)

    PK_TRACE("Drop L3 glsmux reset and select refclk via PPM_CGCR[0:3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_PPM_CGCR, quad), 0);

    PK_TRACE("Drop L2 glsmux reset and select refclk via QPPM_EXCGCR[32:35]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_CLR, quad), BITS64(32, 4));

    PK_TRACE("Assert chiplet enable via NET_CTRL0[0]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, quad), BIT64(0));

    PK_TRACE("Drop PCB endpoint reset via NET_CTRL0[1]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(1));

    PK_TRACE("Drop chiplet electrical fence via NET_CTRL0[26]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(26));

    PK_TRACE("Drop PCB fence via NET_CTRL0[25]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(25));

    PK_TRACE("Set scan ratio to 1:1 in bypass mode via OPCG_ALIGN[47-51]");
    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(EQ_OPCG_ALIGN, quad), scom_data);
    scom_data &= ~BITS64(47, 5);
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_OPCG_ALIGN, quad), scom_data);

#if !SKIP_SCAN0
    // Marker for scan0
    MARK_TRAP(SX_CHIPLET_RESET_SCAN0)
#endif

    /// @todo scan_with_setpulse_module(l3 dcc)

    PK_TRACE("Drop L3 DCC bypass via NET_CTRL1[1]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL1_WAND, quad), ~BIT64(1));


    return rc;
}
