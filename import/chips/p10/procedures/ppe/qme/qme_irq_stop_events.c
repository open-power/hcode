/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_irq_stop_events.c $   */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2020                                                    */
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

#include "qme.h"
#include "iota_trace.h"

extern QmeRecord G_qme_record;

/*
void
qme_eval_eimr_override()
{
    wrteei(0);

    g_eimr_override      &= ~BITS64(12, 10);
    data64_t mask_irqs    = {0};
    mask_irqs.words.lower = 0;

    mask_irqs.words.upper =
        ((((~G_cme_record.core_enabled)   |
           G_qme_record.core_running |
           G_qme_record.core_errored |
           G_qme_record.core_blockpc |
           G_qme_record.core_blockwu |
           G_qme_record.core_suspendwu) & CME_MASK_BC) << SHIFT32(13)) |
#if SPWU_AUTO
        ((((~G_cme_record.core_enabled)   |
           G_qme_record.core_running |
           G_qme_record.core_errored) & CME_MASK_BC) << SHIFT32(15)) |
#else
        ((((~G_qme_record.core_running) &
           (G_qme_record.core_blockwu |
            G_qme_record.core_suspendwu)) & CME_MASK_BC) << SHIFT32(15)) |
#endif
        ((((~G_cme_record.core_enabled)   |
           G_qme_record.core_running |
           G_qme_record.core_errored |
           G_qme_record.core_blockwu |
           G_qme_record.core_suspendwu) & CME_MASK_BC) << SHIFT32(17)) |
        ((((~G_cme_record.core_enabled)      |
           (~G_qme_record.core_running) |
           G_qme_record.core_errored    |
           G_qme_record.core_in_spwu    |
           G_qme_record.core_blockey    |
           G_qme_record.core_vdm_droop  |
           G_qme_record.core_suspendey) & CME_MASK_BC) << SHIFT32(21));

    g_eimr_override |= mask_irqs.value;

    if (G_qme_record.core_vdm_droop)
    {
        out32(G_CME_LCL_FLAGS_OR, BIT32(CME_FLAGS_DROOP_SUSPEND_ENTRY));
    }
    else
    {
        out32(G_CME_LCL_FLAGS_CLR, BIT32(CME_FLAGS_DROOP_SUSPEND_ENTRY));
    }

    wrteei(1);
}
*/

void
qme_special_wakeup_event()
{
    PK_TRACE("Event: Special Wakeup");

}

void
qme_regular_wakeup_event()
{
    PK_TRACE("Event: Regular Wakeup");
}

void
qme_pm_state_active_event()
{
    PK_TRACE("Event: PM State Active");
}


void
qme_mma_active_event(uint32_t task_idx)
{
    PK_TRACE("Event: MMA Active");
}
