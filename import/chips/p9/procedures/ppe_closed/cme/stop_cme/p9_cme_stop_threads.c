/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop_threads.c $ */
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
#include "p9_cme_irq.h"

extern CmeStopRecord G_cme_stop_record;
extern CmeRecord G_cme_record;



void
p9_cme_stop_eval_eimr_override()
{
    g_eimr_override      &= ~(BITS64(12, 6) | BITS64(20, 2));
    data64_t mask_irqs    = {0};
    mask_irqs.words.lower = 0;

    mask_irqs.words.upper =
        ((((~G_cme_record.core_enabled) |
           G_cme_stop_record.core_running    |
           G_cme_stop_record.core_blockpc    |
           G_cme_stop_record.core_blockwu) & CME_MASK_BC) << SHIFT32(13)) |
#if SPWU_AUTO
        ((((~G_cme_record.core_enabled) |
           G_cme_stop_record.core_running) & CME_MASK_BC) << SHIFT32(15)) |
#endif
        ((((~G_cme_record.core_enabled) |
           G_cme_stop_record.core_running) & CME_MASK_BC) << SHIFT32(17)) |
        (((~(G_cme_record.core_enabled  &
             G_cme_stop_record.core_running) &
           G_cme_stop_record.core_blockey) & CME_MASK_BC) << SHIFT32(21));

    g_eimr_override |= mask_irqs.value;
}



void
p9_cme_stop_enter_thread(void* arg)
{
    PkMachineContext  ctx __attribute__((unused));

#if !defined(__IOTA__)

    while(1)
    {
        // Thread goes to sleep
        pk_semaphore_pend(&(G_cme_stop_record.sem[0]), PK_WAIT_FOREVER);
        wrteei(1);

        // The actual entry sequence
        p9_cme_stop_entry();

        // re-evaluate g_eimr_override then restore eimr
        p9_cme_stop_eval_eimr_override();
        pk_irq_vec_restore(&ctx);
    }

#endif
}



void
p9_cme_stop_exit_thread(void* arg)
{
    PkMachineContext  ctx __attribute__((unused));

    //--------------------------------------------------------------------------
    // Starting Thread Loop
    //--------------------------------------------------------------------------
#if !defined(__IOTA__)

    while(1)
    {
        // Thread goes to sleep
        pk_semaphore_pend(&(G_cme_stop_record.sem[1]), PK_WAIT_FOREVER);
        wrteei(1);

        // The actual exit sequence
        p9_cme_stop_exit();

        // re-evaluate g_eimr_override then restore eimr
        p9_cme_stop_eval_eimr_override();
        pk_irq_vec_restore(&ctx);
    }

#endif
}
