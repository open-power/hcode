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
p9_hcd_cache_chiplet_reset(uint8_t quad)
{
    int rc = SGPE_STOP_SUCCESS;

    PK_TRACE("Init NETWORK_CONTROL0, step needed for hotplug");
    GPE_PUTSCOM(EQ_NET_CTRL0_WOR, QUAD_ADDR_BASE, quad, NET_CTRL0_INIT_VECTOR);

    PK_TRACE("Init Cache Glitchless Mux Reset/Select via CLOCK_GRID_CTRL[0:3]");
    GPE_PUTSCOM(PPM_CGCR_OR,  QUAD_ADDR_BASE, quad, BIT64(0));
    GPE_PUTSCOM(PPM_CGCR_CLR, QUAD_ADDR_BASE, quad, BIT64(3));

    MARK_TRAP(SX_CHIPLET_RESET_GLSMUX_RESET)

    PK_TRACE("Clear Cache Glitchless Mux Async Reset via CLOCK_GRID_CTRL[0]");
    GPE_PUTSCOM(PPM_CGCR_CLR, QUAD_ADDR_BASE, quad, BIT64(0));

    PK_TRACE("Clear PCB Endpoint Reset via NET_CTRL0[1]");
    GPE_PUTSCOM(EQ_NET_CTRL0_WAND, QUAD_ADDR_BASE, quad, ~BIT64(1));

    // needed by sbe
    //PK_TRACE("Reset PCB Slave Error Register");
    //CME_PUTSCOM(C_ERROR_REG, core, BITS64(0,64));

    PK_TRACE("Remove chiplet electrical fence via NET_CTRL0[26]");
    GPE_PUTSCOM(EQ_NET_CTRL0_WAND, QUAD_ADDR_BASE, quad, ~BIT64(26));

    // needed by sbe
    //PK_TRACE("Configure HANG_PULSE1 for chiplet hang counters");
    //CME_PUTSCOM(C_HANG_PULSE_1_REG, core, HANG_PULSE1_INIT_VECTOR);

#if !SKIP_SCAN0
    // Marker for scan0
    MARK_TRAP(SX_CHIPLET_RESET_SCAN0)
#endif

    return rc;
}
