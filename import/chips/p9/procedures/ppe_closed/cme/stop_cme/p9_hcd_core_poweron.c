/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_hcd_core_poweron.c $ */
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
p9_hcd_core_poweron(uint32_t core)
{
    int rc = CME_STOP_SUCCESS;

    PK_TRACE("Drop chiplet enable via NET_CTRL0[0]");
    CME_PUTSCOM(CPPM_NC0INDIR_CLR, core, BIT64(0));

    PK_TRACE("Assert PCB fence via NET_CTRL0[25]");
    CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(25));

    PK_TRACE("Assert chiplet electrical fence via NET_CTRL0[26]");
    CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(26));

    PK_TRACE("Assert vital thold via NET_CTRL0[16]");
    CME_PUTSCOM(CPPM_NC0INDIR_OR, core, BIT64(16));

    PK_TRACE("Assert core glsmux reset via PPM_CGCR[0]");
    CME_PUTSCOM(C_PPM_CGCR, core, BIT64(0));

#if !STOP_PRIME
    uint64_t scom_data;

    // vdd_pfet_val/sel_override     = 0 (disbaled)
    // vdd_pfet_regulation_finger_en = 0 (controled by FSM)
    PK_TRACE("Prepare PFET Controls");
    CME_PUTSCOM(PPM_PFCS_CLR, core, BIT64(4) | BIT64(5) | BIT64(8));

    // Serialize only the PFET power-on for the Core Pair
    if (core & CME_MASK_C0)
    {
        // vdd_pfet_force_state = 11 (Force Von)
        PK_TRACE("Power Off Core VDD");
        CME_PUTSCOM(PPM_PFCS_OR, CME_MASK_C0, BITS64(0, 2));

        PK_TRACE("Poll for power gate sequencer state: 0x8 (FSM Idle)");

        do
        {
            CME_GETSCOM(PPM_PFCS, CME_MASK_C0, CME_SCOM_AND, scom_data);
        }
        while(!(scom_data & BIT64(42)));
    }

    if (core & CME_MASK_C1)
    {
        // vdd_pfet_force_state = 11 (Force Von)
        PK_TRACE("Power Off Core VDD");
        CME_PUTSCOM(PPM_PFCS_OR, CME_MASK_C1, BITS64(0, 2));

        PK_TRACE("Poll for power gate sequencer state: 0x8 (FSM Idle)");

        do
        {
            CME_GETSCOM(PPM_PFCS, CME_MASK_C1, CME_SCOM_AND, scom_data);
        }
        while(!(scom_data & BIT64(42)));
    }

    // vdd_pfet_force_state = 00 (Nop)
    PK_TRACE("Turn Off Force Von");
    CME_PUTSCOM(PPM_PFCS_CLR, core, BITS64(0, 2));
#endif

    return rc;
}
