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
#include "wof_sgpe_pgpe_api.h"
#include "p9_dd1_doorbell_wr.h"
#include "avs_driver.h"
#include "p9_pgpe_optrace.h"

//
//Externs and Globals
//
extern TraceData_t G_pgpe_optrace_data;
extern PgpePstateRecord G_pgpe_pstate_record;
extern ipc_async_cmd_t G_ipc_msg_pgpe_sgpe;
GPE_BUFFER(extern ipcmsg_p2s_ctrl_stop_updates_t G_sgpe_control_updt);
extern GlobalPstateParmBlock* G_gppb;

//
//Thread Actuate PStates
//
//One of the two threads for PGPE. Main purpose of this thread is to do
//frequency/voltage actuation by communicating with CMEs.
void p9_pgpe_thread_actuate_pstates(void* arg)
{
    PK_TRACE_DBG("ACT_TH: Started");
    uint32_t inRange, q  = 0;
    PkMachineContext  ctx;
    uint32_t restore_irq = 0;
    ocb_occflg_t occFlag;
    uint32_t occScr2;

    //Setup pcb_type4 and check for qCME registration
    p9_pgpe_pstate_setup_process_pcb_type4();

    //Upon PGPE Boot, if OCC_FLAGS[PGPE_PSTATE_PROTOCOL_ACTIVATE] is set, then we start Pstart here, and not wait
    //for an IPC to come from OCC
    occFlag.value = in32(OCB_OCCFLG);

    if (occFlag.value & BIT32(PGPE_PSTATE_PROTOCOL_ACTIVATE))
    {
        for (q = 0; q < MAX_QUADS; q++)
        {
            G_pgpe_pstate_record.psClipMax[q] = G_gppb->operating_points[POWERSAVE].pstate;
            G_pgpe_pstate_record.psClipMin[q] = G_gppb->operating_points[ULTRA].pstate;
        }

        //Mask all external interrupts. Timers are still enabled
        pk_irq_sub_critical_enter(&ctx);
        p9_pgpe_pstate_start(PSTATE_START_OCC_FLAG);
        G_pgpe_optrace_data.word[0] = (START_STOP_FLAG << 24) | (G_pgpe_pstate_record.globalPSComputed << 16) | (in32(
                                          OCB_QCSR) >> 16);
        p9_pgpe_optrace(PRC_START_STOP);
        pk_irq_sub_critical_exit(&ctx);
    }


    // Set OCC Scratch2[PGPE_ACTIVE], so that external world knows that PGPE is UP
    occScr2 = in32(OCB_OCCS2);
    occScr2 |= BIT32(PGPE_ACTIVE);
    out32(OCB_OCCS2, occScr2);
    PK_TRACE_INF("Setting PGPE_ACTIVE in OCC SCRATCH2 addr %X = %X", OCB_OCCS2, occScr2);

    //Thread Loop
    while(1)
    {
        //If already active, then skip waiting for an OCC Pstate Start IPC
        if (G_pgpe_pstate_record.pstatesStatus != PSTATE_ACTIVE)
        {
            PK_TRACE_DBG("ACT_TH: Pend(waiting for Pstate Start)");
            pk_semaphore_pend(&(G_pgpe_pstate_record.sem_actuate), PK_WAIT_FOREVER);
            wrteei(1);

        }


        restore_irq = 0;

        //Loop while Pstate is ACTIVE
        while(G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
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

            //Process any pending ACKs
            if ((G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack == 1) ||
                (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack == 1) ||
                (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack == 1) ||
                (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack == 1))
            {
                inRange = 1;
                uint32_t minPS;

                for (q = 0; q < MAX_QUADS; q++)
                {
                    if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
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
                        pk_irq_sub_critical_enter(&ctx);

                        //Notify CMEs about Updated Pmin and Pmax
                        if (G_pgpe_pstate_record.pendingPminClipBcast)
                        {
                            p9_pgpe_pstate_clip_bcast(DB0_CLIP_BCAST_TYPE_PMIN);
                            G_pgpe_pstate_record.pendingPminClipBcast = 0;
                        }

                        if (G_pgpe_pstate_record.pendingPmaxClipBcast)
                        {
                            p9_pgpe_pstate_clip_bcast(DB0_CLIP_BCAST_TYPE_PMAX);
                            G_pgpe_pstate_record.pendingPmaxClipBcast = 0;
                        }

                        pk_irq_sub_critical_exit(&ctx);

                        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd;
                        ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
                        args->msg_cb.rc = PGPE_RC_SUCCESS;
                        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack = 0;
                        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd, IPC_RC_SUCCESS);
                        p9_pgpe_optrace(ACK_CLIP_UPDT);
                    }

                    if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack == 1)
                    {
                        p9_pgpe_pstate_update_wof_state();
                        ipc_async_cmd_t* async_cmd_wof_vfrt = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].cmd;
                        ipcmsg_wof_vfrt_t* args_wof_vfrt = (ipcmsg_wof_vfrt_t*)async_cmd_wof_vfrt->cmd_data;
                        args_wof_vfrt->msg_cb.rc = PGPE_RC_SUCCESS;
                        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack = 0;
                        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].cmd, IPC_RC_SUCCESS);
                        p9_pgpe_optrace(ACK_WOF_VFRT);

                        //See if ACTIVE QUADS ack is pending
                        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack == 1)
                        {
                            ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd;
                            ipcmsg_s2p_update_active_quads_t* args = (ipcmsg_s2p_update_active_quads_t*)async_cmd->cmd_data;
                            args->fields.return_active_quads = args_wof_vfrt->active_quads;
                            args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
                            G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 0;
                            ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd, IPC_RC_SUCCESS);
                            p9_pgpe_optrace(ACK_QUAD_ACTV);
                        }
                    }

                    if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack == 1)
                    {
                        p9_pgpe_pstate_update_wof_state();
                        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].cmd;
                        ipcmsg_wof_control_t* args = (ipcmsg_wof_control_t*)async_cmd->cmd_data;
                        args->msg_cb.rc = PGPE_RC_SUCCESS;
                        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack = 0;
                        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].cmd, IPC_RC_SUCCESS);
                        p9_pgpe_optrace(ACK_WOF_CTRL);
                    }

                    if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack == 1)
                    {
                        p9_pgpe_pstate_update_wof_state();
                        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd;
                        ipcmsg_s2p_update_active_cores_t* args = (ipcmsg_s2p_update_active_cores_t*)async_cmd->cmd_data;
                        args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
                        args->fields.return_active_cores = G_pgpe_pstate_record.activeCores;
                        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack = 0;
                        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd, IPC_RC_SUCCESS);
                        p9_pgpe_optrace(ACK_CORES_ACTV);
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
