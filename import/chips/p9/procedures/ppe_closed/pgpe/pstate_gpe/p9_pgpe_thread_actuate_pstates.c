/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_thread_actuate_pstates.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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
#include "pk.h"
#include "p9_pgpe.h"
#include "p9_pgpe_header.h"
#include "p9_pgpe_pstate.h"
#include "ipc_api.h"
#include "ipc_async_cmd.h"
#include "p9_pgpe_gppb.h"
#include "pstate_pgpe_occ_api.h"
#include "ipc_messages.h"
#include "p9_dd1_doorbell_wr.h"
#include "avs_driver.h"


//Local Function Prototypes
void p9_pgpe_thread_actuate_init_actual_quad();

//
//External Global Data
//
extern PgpePstateRecord G_pgpe_pstate_record;
extern ipc_async_cmd_t G_ipc_msg_pgpe_sgpe;
GPE_BUFFER(extern ipcmsg_p2s_ctrl_stop_updates_t G_sgpe_control_updt);
extern GlobalPstateParmBlock* G_gppb;

//Payload data non-cacheable region for IPCs sent to SGPE
//
//Thread Actuate PStates
//
void p9_pgpe_thread_actuate_pstates(void* arg)
{
    PK_TRACE_DBG("ACT_TH: Started");
    uint32_t inRange, q  = 0;
    PkMachineContext  ctx;
    uint32_t restore_irq = 0;

    pk_semaphore_create(&(G_pgpe_pstate_record.sem_actuate), 0, 1);
    pk_semaphore_create(&(G_pgpe_pstate_record.sem_sgpe_wait), 0, 1);

    PK_TRACE_DBG("ACT_TH: Inited");

    //Initialize Shared SRAM to a known state
    p9_pgpe_thread_actuate_init_actual_quad();


    //Upon PGPE Boot, if OCC_FLAGS[PGPE_PSTATE_PROTOCOL_ACTIVATE] is set, then we start Pstart here, and not wait
    //for an IPC to come from OCC
    ocb_occflg_t occFlag;
    occFlag.value = in32(OCB_OCCFLG);

    if (occFlag.value & BIT32(PGPE_PSTATE_PROTOCOL_ACTIVATE))
    {
        for (q = 0; q < MAX_QUADS; q++)
        {
            G_pgpe_pstate_record.psClipMax[q] = G_gppb->operating_points[POWERSAVE].pstate;
            G_pgpe_pstate_record.psClipMin[q] = G_gppb->operating_points[ULTRA].pstate;
        }

        p9_pgpe_pstate_start(PSTATE_START_OCC_FLAG);
    }

    p9_pgpe_pstate_setup_process_pcb_type4(); //Setup pcb_type4 and check for qCME registration

    // Set OCC Scratch2[PGPE_ACTIVE]
    uint32_t occScr2 = in32(OCB_OCCS2);
    occScr2 |= BIT32(PGPE_ACTIVE);
    PK_TRACE_INF("Setting PGPE_ACTIVE in OCC SCRATCH2 addr %X = %X", OCB_OCCS2, occScr2);
    out32(OCB_OCCS2, occScr2);

    //Thread Loop
    while(1)
    {
        //If already active, then skip waiting for an OCC Pstate Start IPC
        if (G_pgpe_pstate_record.pstatesStatus != PSTATE_ACTIVE)
        {
            PK_TRACE_DBG("ACT_TH: Pend");
            pk_semaphore_pend(&(G_pgpe_pstate_record.sem_actuate), PK_WAIT_FOREVER);
            wrteei(1);

        }

        //Loop while Pstate is enabled
        PK_TRACE_DBG("ACT_TH: Status=%d", G_pgpe_pstate_record.pstatesStatus);

        restore_irq = 0;

        while(G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE
              || G_pgpe_pstate_record.pstatesStatus == PSTATE_SUSPENDED_WHILE_ACTIVE)
        {
            if(G_pgpe_pstate_record.pstatesStatus != PSTATE_SUSPENDED_WHILE_ACTIVE)
            {
                //Actuate step(if needed)
                if(p9_pgpe_pstate_at_target() == 0)
                {
                    //We check that pstates are active after entering critical section
                    //It's possible that some IPC which is processed by PROCESS THREAD
                    //has updated the PstatesState to a !PSTATE_ACTIVE state
                    pk_irq_sub_critical_enter(&ctx);

                    if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
                    {
                        p9_pgpe_pstate_do_step();
                    }

                    pk_irq_sub_critical_exit(&ctx);
                }

                //Check if CLIP_UPDT is pending and Pstates are clipped
                if ((G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack == 1) ||
                    (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack == 1) ||
                    (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack == 1))
                {
                    inRange = 1;
                    uint32_t minPS;

                    for (q = 0; q < MAX_QUADS; q++)
                    {
                        if((G_pgpe_pstate_record.quadsActive & (0x80 >> q)))
                        {
                            minPS = G_pgpe_pstate_record.psClipMin[q];

                            if (G_pgpe_pstate_record.wofEnabled)
                            {
                                if ((G_pgpe_pstate_record.wofClip <= G_pgpe_pstate_record.psClipMax[q]) &&
                                    (minPS < G_pgpe_pstate_record.wofClip))
                                {
                                    minPS = G_pgpe_pstate_record.wofClip;
                                }
                            }

                            if (G_pgpe_pstate_record.quadPSCurr[q] > G_pgpe_pstate_record.psClipMax[q] ||
                                G_pgpe_pstate_record.quadPSCurr[q] <  minPS)
                            {
                                inRange = 0;
                            }
                        }
                    }

                    //ACK any pending and unmask IPC interrupt
                    if (inRange == 1)
                    {
                        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack == 1)
                        {
                            ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd;
                            ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
                            args->msg_cb.rc = PGPE_RC_SUCCESS;
                            G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack = 0;
                            ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd, IPC_RC_SUCCESS);
                        }

                        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack == 1)
                        {
                            p9_pgpe_pstate_update_wof_state();
                            ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].cmd;
                            ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
                            args->msg_cb.rc = PGPE_RC_SUCCESS;
                            G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack = 0;
                            ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].cmd, IPC_RC_SUCCESS);
                        }

                        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack == 1)
                        {
                            p9_pgpe_pstate_update_wof_state();
                            ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].cmd;
                            ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
                            args->msg_cb.rc = PGPE_RC_SUCCESS;
                            G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack = 0;
                            ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].cmd, IPC_RC_SUCCESS);
                        }

                        restore_irq = 1;
                    }
                } //Pending ACKs

                //Check if IPC should be opened again
                if (restore_irq == 1)
                {
                    PK_TRACE_DBG("ACT_TH: IRQ Restore");
                    restore_irq = 0;
                    pk_irq_vec_restore(&ctx);
                }
            }
            else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_SUSPENDED_WHILE_ACTIVE)
            {
                pk_semaphore_pend(&(G_pgpe_pstate_record.sem_actuate), PK_WAIT_FOREVER);
            }
        }

        if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING
            || G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
        {
            //Actuate to PSAFE Pstate
            while (p9_pgpe_pstate_at_target() == 0)
            {
                pk_irq_sub_critical_enter(&ctx);
                p9_pgpe_pstate_do_step();
                pk_irq_sub_critical_exit(&ctx);
            }

            if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING)
            {
                p9_pgpe_pstate_send_suspend_stop(); //Notify SGPE
            }
            else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
            {
                uint32_t occScr2 = in32(OCB_OCCS2);
                occScr2 |= BIT32(PGPE_SAFE_MODE_ACTIVE);
                out32(OCB_OCCS2, occScr2);
            }
        }
    }//Thread loop
}



void p9_pgpe_thread_actuate_init_actual_quad()
{
    G_pgpe_pstate_record.pQuadState0->fields.quad0_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.quad1_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.quad2_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.quad3_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.active_cores = 0;

    G_pgpe_pstate_record.pQuadState1->fields.quad4_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState1->fields.quad5_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState1->fields.active_cores = 0x0;
    G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads = 0x0;

}
