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

extern CmeStopRecord G_cme_stop_record;

void
p9_cme_stop_event_handler(void* arg, PkIrqId irq)
{
    MARK_TRAP(STOP_EVENT_HANDLER)
    PK_TRACE("SE-IRQ: %d", irq);

    if (irq == IRQ_STOP_C0 || irq == IRQ_STOP_C1)
    {
        out32(CME_LCL_EIMR_OR, BITS32(20, 2));
    }

    if (irq >= IRQ_PC_C0 && irq <= IRQ_SWU_C1)
    {
        out32(CME_LCL_EIMR_OR, BITS32(12, 6));
    }

    pk_semaphore_post((PkSemaphore*)arg);
}

void
p9_cme_stop_doorbell_handler(void* arg, PkIrqId irq)
{
    int rc = 0;
    MARK_TRAP(STOP_DOORBELL_HANDLER)
    PK_TRACE("DB-IRQ: %d", irq);

    out32_sh(CME_LCL_EIMR_OR, BIT32(irq - 32));
    out32_sh(CME_LCL_EISR_CLR, BIT32(irq - 32));

    if (irq == IRQ_DB1_C0)
    {
        CME_PUTSCOM(CPPM_CMEDB1, CME_MASK_C0, 0);
        out32(CME_LCL_EIMR_CLR, BIT32(12) | BIT32(14) | BIT32(16));
    }

    if (irq == IRQ_DB1_C1)
    {
        CME_PUTSCOM(CPPM_CMEDB1, CME_MASK_C1, 0);
        out32(CME_LCL_EIMR_CLR, BIT32(13) | BIT32(15) | BIT32(17));
    }

    // TODO mask pc_itr_pending as workaround for double interrupts of pc and rwu
    out32(CME_LCL_EIMR_OR, BITS32(12, 2));
}
