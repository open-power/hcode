/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop_irq_handlers.c $ */
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
#include "p9_cme_stop_enter_marks.h"
#include "p9_cme_irq.h"

extern CmeStopRecord G_cme_stop_record;

void
p9_cme_stop_event_handler(void* arg, PkIrqId irq)
{
    MARK_TRAP(STOP_EVENT_HANDLER)
    PK_TRACE("SE-IRQ: %d", irq);
    pk_semaphore_post((PkSemaphore*)arg);

    // Important: g_eimr_override at any time should mask wakeup interrupts of
    //            running core(s), the override vector should change after each
    //            entry and exit as core state is changed.
    // For Entry, mask the following interrupts via unified interrupt handler:
    //   lower priority interrupts than pm_active, and both pm_active (catchup)
    //   wakeup interrupts of the entering core(s) should still be masked
    //   via g_eimr_override (abortion), stopped core can still exit any time
    //   as their wakeup interrupts should be unmasked
    // After Entry, unmask the following interrupts via pk_irq_vec_restore:
    //   priority group on stack, likely at least both pm_active unmasked
    //   (stopped core cannot get extra pm_active, untouched core can enter)
    //   here needs to use g_eimr_override to mask wakeup of running core(s)
    //   wakeup of the stopped core(s) should be already unmasked by default
    //   (when restored, previous masked wakeups are being unmasked as well)
    // For Exit, mask the following interrupts via unified interrupt handler:
    //   lower priority interrupts than wakeup, including DB2+pm_active(catchup)
    // After Exit, unmask the following interrupts via pk_irq_vec_restore:
    //   priority group on stack, likely at least wakeup and DB2 unmasked
    //   here needs to use g_eimr_override to mask wakeup of exited core(s)
}

void
p9_cme_stop_doorbell_handler(void* arg, PkIrqId irq)
{
    int               rc = 0;
    PkMachineContext  ctx;
    MARK_TRAP(STOP_DOORBELL_HANDLER)
    PK_TRACE("DB-IRQ: %d", irq);

    out32_sh(CME_LCL_EIMR_OR, BIT32(irq - 32));
    out32_sh(CME_LCL_EISR_CLR, BIT32(irq - 32));

    if (irq == IRQ_DB1_C0)
    {
        CME_PUTSCOM(CPPM_CMEDB1, CME_MASK_C0, 0);
        g_eimr_override &= ~IRQ_VEC_WAKE_C0;
        //out32(CME_LCL_EIMR_CLR, BIT32(12) | BIT32(14) | BIT32(16));
    }

    if (irq == IRQ_DB1_C1)
    {
        CME_PUTSCOM(CPPM_CMEDB1, CME_MASK_C1, 0);
        g_eimr_override &= ~IRQ_VEC_WAKE_C1;
        //out32(CME_LCL_EIMR_CLR, BIT32(13) | BIT32(15) | BIT32(17));
    }

    pk_irq_vec_restore(&ctx);
}
