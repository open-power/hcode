/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_thread_actuate_pstates.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2019                                                    */
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
    occFlag.value = in32(G_OCB_OCCFLG);

    if (occFlag.value & BIT32(PGPE_PSTATE_PROTOCOL_ACTIVATE))
    {
        for (q = 0; q < MAX_QUADS; q++)
        {
            G_pgpe_pstate_record.psClipMax[q] = G_pgpe_pstate_record.safePstate;
            G_pgpe_pstate_record.psClipMin[q] = G_gppb->operating_points[ULTRA].pstate;
        }

        //Mask all external interrupts. Timers are still enabled
        pk_irq_sub_critical_enter(&ctx);
        p9_pgpe_pstate_start(PSTATE_START_OCC_FLAG);
        G_pgpe_optrace_data.word[0] = (START_STOP_FLAG << 24) | (G_pgpe_pstate_record.psComputed.fields.glb << 16) | (in32(
                                          G_OCB_QCSR) >> 16);
        p9_pgpe_optrace(PRC_START_STOP);
        pk_irq_sub_critical_exit(&ctx);
    }


    // Set OCC Scratch2[PGPE_ACTIVE] and start updating beacon,
    // so that external world knows that PGPE is UP
    G_pgpe_pstate_record.updatePGPEBeacon = 1;
    occScr2 = in32(G_OCB_OCCS2);
    occScr2 |= BIT32(PGPE_ACTIVE);
    out32(G_OCB_OCCS2, occScr2);
    PK_TRACE_INF("Setting PGPE_ACTIVE in OCC SCRATCH2 addr %X = %X", G_OCB_OCCS2, occScr2);

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
            //If a VDM prolonged droop happened, then we set G_OCB_OCCFLG[PGPE_PM_RESET_SUPPRESS]
            //It should be cleared once VDM prolonged droop condition has subsided and all pending IPCs
            //from OCC have been processed and acked. Note, that pending processing and pending ack are
            //only set inside IPC handler, and it's possible that while PGPE is stuck in the VDM prolonged
            //droop loop(the p9_pgpe_pstate_do_step function call) an IPC interrupt happened, so
            //PGPE must be given a change to take IPC interrupt and see if any other IPC from OCC
            //needs processing.
            if ((in32(G_OCB_OCCFLG) & BIT32(PGPE_PM_RESET_SUPPRESS)))
            {
                if ((G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack == 0) &&
                    (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack == 0)  &&
                    (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack == 0)  &&
                    (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_processing == 0) &&
                    (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_processing == 0)  &&
                    (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_processing == 0))
                {
                    out32(G_OCB_OCCFLG_CLR, BIT32(PGPE_PM_RESET_SUPPRESS));
                    PK_TRACE_INF("ACT_TH: PM_RESET_SUPP=0");
                }
            }

            //Actuate step(if needed)
            if ((p9_pgpe_pstate_at_target() == 0) ||
                (p9_pgpe_pstate_at_wov_target() == 0))
            {
                pk_irq_sub_critical_enter(&ctx);

                //We check that pstates are active after entering critical section
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
                //Enter sub-critical section
                //Process any pending ACKs in sub-critical section. Otherwise, it's possible that the inrange check
                //below is interrupted, and new clips are calculated
                //Also, we enter sub-critical section only if some action is pending. If, move this above the
                //if statement, then we will unnessarily enter/exit sub-critical section.
                pk_irq_sub_critical_enter(&ctx);

                inRange = 1;
                uint32_t minPS;

                for (q = 0; q < MAX_QUADS; q++)
                {
                    if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
                    {
                        minPS = G_pgpe_pstate_record.psClipMin[q];

                        if (G_pgpe_pstate_record.wofStatus == WOF_ENABLED)
                        {
                            //If WOF_CLIP is between thermal clips, then pull down(higher value) mininum pstate
                            if ((G_pgpe_pstate_record.wofClip <= G_pgpe_pstate_record.psClipMax[q]) &&
                                (minPS < G_pgpe_pstate_record.wofClip))
                            {
                                minPS = G_pgpe_pstate_record.wofClip;
                                //If WOF_CLIP is lower(higher value) than the thermal max clips, then pull down(higher value)
                                //for mininum pstate to thermal max clip
                            }
                            else if (G_pgpe_pstate_record.wofClip >= G_pgpe_pstate_record.psClipMax[q])
                            {
                                minPS = G_pgpe_pstate_record.psClipMax[q];
                            }
                        }

                        //Make sure that minPS is not below(higher value/low freq-volt) than safePstate
                        minPS = (minPS > G_pgpe_pstate_record.safePstate) ? G_pgpe_pstate_record.safePstate : minPS;

                        if (G_pgpe_pstate_record.psCurr.fields.quads[q] > G_pgpe_pstate_record.psClipMax[q] ||
                            G_pgpe_pstate_record.psCurr.fields.quads[q] <  minPS ||
                            G_pgpe_pstate_record.psCurr.fields.glb > G_pgpe_pstate_record.psClipMax[q] ||
                            G_pgpe_pstate_record.psCurr.fields.glb <  minPS)

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

                        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd;
                        ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
                        args->msg_cb.rc = PGPE_RC_SUCCESS;
                        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack = 0;
                        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd, IPC_RC_SUCCESS);
                        p9_pgpe_optrace(ACK_CLIP_UPDT);
                        restore_irq = 1;
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

                            if (args_wof_vfrt->active_quads ==  G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads)
                            {
                                p9_pgpe_pstate_process_quad_exit_notify(args->fields.requested_quads << 2);
                                args->fields.return_active_quads = args_wof_vfrt->active_quads >> 2;
                                args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
                                G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 0;
                                ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd, IPC_RC_SUCCESS);
                                p9_pgpe_optrace(ACK_QUAD_ACTV);
                                GPE_PUTSCOM(G_OCB_OCCFLG_CLR, BIT32(REQUESTED_ACTIVE_QUAD_UPDATE));//Clear OCCFLG[REQUESTED_ACTIVE_QUAD_UPDATE]

                            }
                        }

                        restore_irq = 1;
                    }

                    if ((G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack == 1) &&
                        (G_pgpe_pstate_record.wofStatus == WOF_ENABLED))
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
                        args->fields.return_active_cores = G_pgpe_pstate_record.activeCores >> 8;
                        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack = 0;
                        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd, IPC_RC_SUCCESS);
                        args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
                        p9_pgpe_optrace(ACK_CORES_ACTV);
                        restore_irq = 1;
                    }

                }

                pk_irq_sub_critical_exit(&ctx); //Exit sub-critical section
            } //Pending ACKs

            //Check if IPC should be opened again
            if (restore_irq == 1)
            {
                PK_TRACE_INF("ACT_TH: IRQ Restore");
                restore_irq = 0;
                pk_irq_vec_restore(&ctx);
            }
        }//End PstateStatus = PSTATE_ACTIVE loop


        //Do processing inside sub-critical section, so as to not get conflict
        //with external interrupts
        pk_irq_sub_critical_enter(&ctx);

        PK_TRACE_DBG("ACT_TH: PSTATE_ACTIVE loop end)");

        //PSTATE_SAFE_MODE_PENDING is set if, pstates are active and PM_COMPLEX_SUSPEND requested.
        //OR, if SAFE MODE is requested
        if (G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE_PENDING)
        {
            p9_pgpe_pstate_safe_mode();
        }

        //PSTATE_PM_SUSPEND_PENDING is directly set if PM_COMPLEX_SUSPEND is requested
        //and pstates aren't active. Or, if PM_COMPLEX_SUSPEND is requested and pstates
        //are active, and system has moved to Psafe(done by p9_pgpe_pstate_safe_mode() above)
        //This check must come after the possible p9_pgpe_pstate_safe_mode() call above
        if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING)
        {
            p9_pgpe_pstate_pm_complex_suspend();
        }

        if (G_pgpe_pstate_record.pstatesStatus == PSTATE_STOP_PENDING)
        {
            p9_pgpe_pstate_stop();
        }

        pk_irq_sub_critical_exit(&ctx);

    }//Thread loop
}
