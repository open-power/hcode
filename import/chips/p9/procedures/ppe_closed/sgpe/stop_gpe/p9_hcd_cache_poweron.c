/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_hcd_cache_poweron.c $ */
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

void
p9_hcd_cache_poweron(uint32_t quad)
{
    PK_TRACE("Drop chiplet enable via NET_CTRL0[0]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WAND, quad), ~BIT64(0));

    PK_TRACE("Assert L2 glsmux reset via QPPM_EXCGCR[32:33]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_QPPM_EXCGCR_OR, quad), BITS64(32, 2));

    PK_TRACE("Assert cache glsmux reset via PPM_CGCR[0]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_PPM_CGCR, quad), BIT64(0));

    PK_TRACE("Assert analog logic fence via QPPM_PFCS[11]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_OR, quad), BIT64(11));

    PK_TRACE("Assert PCB fence via NET_CTRL0[25]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, quad), BIT64(25));

    PK_TRACE("Assert chiplet electrical fence via NET_CTRL0[26]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, quad), BIT64(26));

    PK_TRACE("Assert vital thold via NET_CTRL0[16]");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(EQ_NET_CTRL0_WOR, quad), BIT64(16));

#if !STOP_PRIME
    uint64_t scom_data;

    // vdd_pfet_val/sel_override     = 0 (disbaled)
    // vcs_pfet_val/sel_override     = 0 (disbaled)
    // vdd_pfet_regulation_finger_en = 0 (controled by FSM)
    PK_TRACE("Prepare PFET Controls");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_CLR, quad),
                BITS64(4, 4) | BIT64(8));

    // vdd_pfet_force_state = 11 (Force Von)
    PK_TRACE("Power On Cache VDD");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_OR, quad), BITS64(0, 2));

    PK_TRACE("Poll for vdd_pfets_enabled_sense");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFSNS, quad), scom_data);
    }
    while(!(scom_data & BIT64(0)));

#if !HW388878_NDD1_VCS_POWER_ON_IN_CHIPLET_RESET_FIX
    // vcs_pfet_force_state = 11 (Force Von)
    PK_TRACE("Power On Cache VCS");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_OR, quad), BITS64(2, 2));

    PK_TRACE("Poll for vcs_pfets_enabled_sense");

    do
    {
        GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFSNS, quad), scom_data);
    }
    while(!(scom_data & BIT64(2)));

    // vdd_pfet_force_state = 00 (Nop)
    // vcs_pfet_force_state = 00 (Nop)
    PK_TRACE("Turn Off Force Von");
    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(PPM_PFCS_CLR, quad), BITS64(0, 4));
#endif
#endif
}
