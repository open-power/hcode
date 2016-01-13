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
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, quad), NET_CTRL0_INIT_VECTOR);

    MARK_TRAP(SX_CHIPLET_RESET_GLSMUX_RESET)

    PK_TRACE("Init Cache Glitchless Mux Reset/Select via CLOCK_GRID_CTRL[0:3]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_PPM_CGCR, quad), 0);

    PK_TRACE("Init L2 Glitchless Mux Reset/Select via EXCLK_GRID_CTRL[32:33]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_CLR, quad), BITS64(32, 4));

    PK_TRACE("Clear PCB Endpoint Reset via NET_CTRL0[1]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(1));

    PK_TRACE("Remove chiplet electrical fence via NET_CTRL0[26]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(26));

#if !SKIP_SCAN0
    // Marker for scan0
    MARK_TRAP(SX_CHIPLET_RESET_SCAN0)
#endif

    return rc;
}
