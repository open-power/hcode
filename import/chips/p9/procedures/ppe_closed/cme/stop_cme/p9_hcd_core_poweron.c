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
    uint64_t scom_data;

    PK_TRACE("Set core glsmux reset");
    CME_PUTSCOM(C_PPM_CGCR, core, BIT64(0));

#if !EPM_P9_TUNNING
    // vdd_pfet_force_state == 00 (Nop)
    PK_TRACE("Make sure we are not forcing PFET for VDD off");
    CME_GETSCOM(PPM_PFCS, core, CME_SCOM_AND, scom_data);

    if (scom_data & BITS64(0, 2))
    {
        return CME_STOP_ENTRY_VDD_PFET_NOT_IDLE;
    }

    // vdd_pfet_val/sel_override     = 0 (disbaled)
    // vdd_pfet_regulation_finger_en = 0 (controled by FSM)
    PK_TRACE("Prepare PFET Controls");
    CME_PUTSCOM(PPM_PFCS_CLR, core, BIT64(4) | BIT64(5) | BIT64(8));
#endif

    // vdd_pfet_force_state = 11 (Force Von)
    PK_TRACE("Power Off Core VDD");
    CME_PUTSCOM(PPM_PFCS_OR, core, BITS64(0, 2));

    PK_TRACE("Poll for power gate sequencer state: 0x8 (FSM Idle)");

    do
    {
        CME_GETSCOM(PPM_PFCS, core, CME_SCOM_AND, scom_data);
    }
    while(!(scom_data & BIT64(42)));

    MARK_TRAP(SX_POWERON_DONE)

#if !EPM_P9_TUNNING
    PK_TRACE("Optional: Poll for vdd_pg_sel being: 0x0");

    do
    {
        CME_GETSCOM(PPM_PFCS, core, CME_SCOM_AND, scom_data);
    }
    while(scom_data & BIT64(46));

    MARK_TRAP(SX_POWERON_PG_SEL)

    // vdd_pfet_force_state = 00 (Nop)
    PK_TRACE("Turn Off Force Von");
    CME_PUTSCOM(PPM_PFCS_CLR, core, BITS64(0, 2));
#endif

    return rc;
}
