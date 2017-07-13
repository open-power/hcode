/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_stop_threads.c $ */
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
#include "p9_sgpe_irq.h"

extern SgpeStopRecord G_sgpe_stop_record;



void
p9_sgpe_stop_exit_thread(void* arg)
{
    PkMachineContext  ctx;

    while(1)
    {
        // Thread goes to sleep
        pk_semaphore_pend(&(G_sgpe_stop_record.sem[1]), PK_WAIT_FOREVER);

        G_sgpe_stop_record.wof.status_stop = STATUS_PROCESSING;
        wrteei(1);

        // The actual exit sequence
        p9_sgpe_stop_exit();

        if ((!G_sgpe_stop_record.group.core[VECTOR_ENTRY]) &&
            (!G_sgpe_stop_record.group.qswu[VECTOR_ENTRY]))
        {

#if !SKIP_IPC

            if (G_sgpe_stop_record.wof.status_stop == STATUS_SUSPENDING)
            {
                p9_sgpe_stop_suspend_all_cmes();
            }
            else if (G_sgpe_stop_record.wof.status_stop != STATUS_SUSPENDED)
            {
                G_sgpe_stop_record.wof.status_stop = STATUS_IDLE;
#endif

                if (G_sgpe_stop_record.wof.update_pgpe &
                    IPC_SGPE_PGPE_UPDATE_CTRL_ONGOING)
                {
                    p9_sgpe_ack_pgpe_ctrl_stop_updates();
                }

                PK_TRACE_INF("Setup: Exit Done,no Entry Request.Enable Type2/3/6 Interrupt");
                g_oimr_override &= ~(BIT64(48) | BIT64(51));
                pk_irq_vec_restore(&ctx);

#if !SKIP_IPC

            }

#endif

        }
    }
}



void
p9_sgpe_stop_enter_thread(void* arg)
{
    PkMachineContext ctx;

    while(1)
    {
        // Thread goes to sleep
        pk_semaphore_pend(&(G_sgpe_stop_record.sem[0]), PK_WAIT_FOREVER);

        G_sgpe_stop_record.wof.status_stop = STATUS_PROCESSING;
        wrteei(1);

        // The actual entry sequence
        p9_sgpe_stop_entry();

#if !SKIP_IPC

        if (G_sgpe_stop_record.wof.status_stop == STATUS_SUSPENDING)
        {
            p9_sgpe_stop_suspend_all_cmes();
        }
        else if (G_sgpe_stop_record.wof.status_stop != STATUS_SUSPENDED)
        {
            G_sgpe_stop_record.wof.status_stop = STATUS_IDLE;

#endif

            if (G_sgpe_stop_record.wof.update_pgpe &
                IPC_SGPE_PGPE_UPDATE_CTRL_ONGOING)
            {
                p9_sgpe_ack_pgpe_ctrl_stop_updates();
            }

            PK_TRACE_INF("Setup: Entry done. Enable Type2/3/6 Interrupt");
            g_oimr_override &= ~(BIT64(48) | BIT64(51));
            pk_irq_vec_restore(&ctx);

#if !SKIP_IPC

        }

#endif

    }
}
