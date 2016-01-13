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
    uint64_t data, loop;

    PK_TRACE("Init NETWORK_CONTROL0, step needed for hotplug");
    CME_PUTSCOM(CPPM_NC0INDIR_OR, core, NET_CTRL0_INIT_VECTOR);

    PK_TRACE("ONLY till TP030: SET VITL_PHASE=1");
    CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(8));
    PPE_WAIT_CORE_CYCLES(loop, 50);

    MARK_TRAP(SX_CHIPLET_RESET_GLSMUX_RESET)

    PK_TRACE("Init Core Glitchless Mux Reset/Select via CLOCK_GRID_CTRL[0:3]");
    CME_PUTSCOM(C_PPM_CGCR, core, BIT64(3));

    PK_TRACE("Clear PCB Endpoint Reset via NET_CTRL0[1]");
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(1));
    PPE_WAIT_CORE_CYCLES(loop, 50);

    PK_TRACE("Remove chiplet electrical fence via NET_CTRL0[26]");
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(26));

    PK_TRACE("ONLY till TP030: SET SYNC_PULSE_DELAY=0b0011");
    CME_GETSCOM(C_SYNC_CONFIG, core, CME_SCOM_AND, data);
    data = data | 0x3000000000000000;
    data = data & 0x3FFFFFFFFFFFFFFF;
    CME_PUTSCOM(C_SYNC_CONFIG, core, data);

#if !SKIP_SCAN0
    // Marker for scan0
    MARK_TRAP(SX_CHIPLET_RESET_SCAN0)
#endif

    return rc;
}
