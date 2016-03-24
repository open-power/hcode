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

int
p9_hcd_core_chiplet_reset(uint32_t core)
{
    int rc = CME_STOP_SUCCESS;
    //uint64_t scom_data,
    uint32_t loop;

    PK_TRACE("Init NET_CTRL0[1,3-5,11-14,18,22,26],step needed for hotplug");
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
    PPE_WAIT_CORE_CYCLES(loop, 400);

    PK_TRACE("Flip core glsmux to DPLL via PPM_CGCR[3]");
    CME_PUTSCOM(C_PPM_CGCR, core, BIT64(3));

    PK_TRACE("Assert chiplet enable via NET_CTRL0[0]");
    CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(0));

    PK_TRACE("Drop PCB endpoint reset via NET_CTRL0[1]");
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(1));

    PK_TRACE("Drop chiplet electrical fence via NET_CTRL0[26]");
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(26));

    PK_TRACE("Drop PCB fence via NET_CTRL0[25]");
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(25));

#if !SKIP_SCAN0
    // Marker for scan0
    MARK_TRAP(SX_CHIPLET_RESET_SCAN0)
#endif

    return rc;
}
