/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_hcd_core_chiplet_reset.c $ */
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

#include "p9_cme_stop.h"
#include "p9_cme_stop_exit_marks.h"

enum P9_HCD_CORE_CHIPLET_RESET_CONSTANTS
{
    // (1)PCB_EP_RESET
    // (2)CLK_ASYNC_RESET
    // (3)PLL_TEST_EN
    // (4)PLLRST
    // (5)PLLBYP
    // (11)EDIS
    // (12)VITL_MPW1
    // (13)VITL_MPW2
    // (14)VITL_MPW3
    // (16)VITL_THOLD
    // (18)FENCE_EN
    // (22)FUNC_CLKSEL
    // (25)PCB_FENCE
    // (26)LVLTRANS_FENCE
    C_NET_CTRL0_INIT_VECTOR = (BIT64(1) | BITS64(3, 3) | BITS64(11, 4) |
                               BIT64(16) | BIT64(18) | BIT64(22) | BITS64(25, 2))
};

void
p9_hcd_core_chiplet_reset(uint32_t core)
{
    data64_t scom_data = {0};

    PK_TRACE("Init NET_CTRL0[1,3-5,11-14,16,18,22,25,26],step needed for hotplug");
    CME_PUTSCOM(CPPM_NC0INDIR_OR,  core, C_NET_CTRL0_INIT_VECTOR);
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, ~(C_NET_CTRL0_INIT_VECTOR | BIT64(2)));

    PK_TRACE("Flip core glsmux to refclk via PPM_CGCR[3]");
    CME_PUTSCOM(C_PPM_CGCR, core, BIT64(0));

    PK_TRACE("Assert core progdly and DCC bypass via NET_CTRL1[1,2]");
    CME_PUTSCOM(CPPM_NC1INDIR_OR, core, BITS64(1, 2));

    PK_TRACE("Drop vital thold via NET_CTRL0[16]");
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(16));

    PK_TRACE("Drop core glsmux reset via PPM_CGCR[0]");
    CME_PUTSCOM(C_PPM_CGCR, core, 0);

    PK_TRACE("Flip core glsmux to DPLL via PPM_CGCR[3]");
    CME_PUTSCOM(C_PPM_CGCR, core, BIT64(3));
    // 200 core clocks
    PPE_WAIT_CORE_CYCLES(200);

    PK_TRACE("Assert chiplet enable via NET_CTRL0[0]");
    CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(0));

    PK_TRACE("Drop PCB endpoint reset via NET_CTRL0[1]");
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(1));

    PK_TRACE("Drop chiplet electrical fence via NET_CTRL0[26]");
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(26));

    PK_TRACE("Drop PCB fence via NET_CTRL0[25]");
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(25));

#if defined(USE_CME_QUEUED_SCOM) && defined(USE_PPE_IMPRECISE_MODE)

    // execute sync before change pcbmux to prevent queued scom issues
    sync();

#endif

    // HW390253: The core clock controller itself is clocked at 2:1 versus the core clock,
    // so it will introduce an additional 2:1 into whatever scan raito is set up. Hence,
    // to get the core to scan at 4:1, need to put a scan ratio of 2:1 if run at pll speed.
    PK_TRACE("Set scan ratio to 2:1 in non-bypass mode via OPCG_ALIGN[47-51]");
    CME_GETSCOM(C_OPCG_ALIGN, core, CME_SCOM_AND, scom_data.value);
    scom_data.words.lower &= ~BITS64SH(47, 5);
#if !EPM_P9_TUNING
    scom_data.words.lower |= BIT32(19);
#endif
    CME_PUTSCOM(C_OPCG_ALIGN, core, scom_data.value);

    // Marker for scan0
    MARK_TRAP(SX_CHIPLET_RESET_SCAN0)
#if !SKIP_SCAN0
    p9_hcd_core_scan0(core, SCAN0_REGION_ALL, SCAN0_TYPE_GPTR_REPR_TIME);
    p9_hcd_core_scan0(core, SCAN0_REGION_ALL, SCAN0_TYPE_ALL_BUT_GPTR_REPR_TIME);
#endif

    /// @todo RTC166918 add VDM_ENABLE attribute control
    PK_TRACE("Assert vdm enable via CPPM_VDMCR[0]");
    CME_PUTSCOM(PPM_VDMCR_OR, core, BIT64(0));

    /// content of p9_hcd_core_dcc_skewadjust below:
    PK_TRACE("Drop core DCC bypass via NET_CTRL[1]");
    CME_PUTSCOM(CPPM_NC1INDIR_CLR, core, BIT64(1));

    PK_TRACE("Drop core progdly bypass(skewadjust) via NET_CTRL1[2]");
    CME_PUTSCOM(CPPM_NC1INDIR_CLR, core, BIT64(2));
}
