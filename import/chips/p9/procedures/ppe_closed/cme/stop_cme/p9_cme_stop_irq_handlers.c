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

void
p9_cme_stop_enter_handler(void* arg, PkIrqId irq)
{
    // Disable Fired IRQ First
    out32(CME_LCL_EIMR_OR, BIT32(irq));

    // If any are asserted, post cme_stop_entry_thread semaphore
    //if (irq == IRQ_STOP_C0 || irq == IRQ_STOP_C1) {
    PK_TRACE("SE-IRQ: %d", irq);
    pk_semaphore_post((PkSemaphore*)arg);
    //}
}

void
p9_cme_stop_exit_handler(void* arg, PkIrqId irq)
{
    // Disable Fired IRQ First
    out32(CME_LCL_EIMR_OR, BIT32(irq));

    // If any are asserted, call cme_stop_exit() aka core_runinit()
    //if (irq >= IRQ_PC_C0 && irq <= IRQ_SWU_C1) {
    PK_TRACE("SX-IRQ: %d", irq);

    if (p9_cme_stop_exit())
    {
        pk_halt();
    }

    //}
}

void
p9_cme_stop_doorbell_handler(void* arg, PkIrqId irq)
{
    // Unmask Stop and Wakeup Interrupts
    if (irq == IRQ_DB1_C0)
    {
        out32(CME_LCL_EIMR_CLR, BIT32(12) | BIT32(14) | BIT32(16) | BIT32(20));
    }

    if (irq == IRQ_DB1_C1)
    {
        out32(CME_LCL_EIMR_CLR, BIT32(13) | BIT32(15) | BIT32(17) | BIT32(21));
    }
}
