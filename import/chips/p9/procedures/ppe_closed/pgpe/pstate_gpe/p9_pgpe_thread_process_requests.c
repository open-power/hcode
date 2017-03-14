/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_thread_process_requests.c $ */
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
#include "p9_pgpe.h"
#include "gpehw_common.h"
#include "p9_pgpe_pstate.h"
#include "pstate_pgpe_occ_api.h"
#include "ipc_messages.h"
#include "ipc_api.h"
#include "ipc_async_cmd.h"
#include "p9_pgpe_header.h"

//
//External Global Data
//
extern PgpePstateRecord G_pgpe_pstate_record;
extern PgpeHeader_t* G_pgpe_header_data;
extern uint32_t G_pstatesStatus;               //pstates_enabled/disable
extern uint8_t G_wofEnabled;               //pstates_enabled/disable
extern uint8_t G_wofPending;                   //wof enable pending
extern VFRT_Hcode_t* G_vfrt_ptr;
extern ipc_req_t G_ipc_pend_tbl[MAX_IPC_PEND_TBL_ENTRIES];
extern uint8_t G_psClipMax[MAX_QUADS],
       G_psClipMin[MAX_QUADS];         //pmin and pmax clips
extern uint8_t G_coresPSRequest[MAX_CORES];    //per core requested pstate
extern uint32_t G_already_sem_posted;
extern quad_state0_t* G_quadState0;
extern quad_state1_t* G_quadState1;
extern requested_active_quads_t* G_reqActQuads;
extern ipc_async_cmd_t G_ipc_msg_pgpe_sgpe;
extern uint8_t G_pmcrOwner;
GPE_BUFFER(extern ipcmsg_p2s_ctrl_stop_updates_t G_sgpe_control_updt);

//
//Local Function Prototypes
//
void p9_pgpe_process_sgpe_updt_active_cores();
void p9_pgpe_process_sgpe_updt_active_quads();
void p9_pgpe_process_sgpe_suspend_pstates();
void p9_pgpe_process_clip_updt();
void p9_pgpe_process_wof_ctrl();
void p9_pgpe_process_wof_vfrt();
void p9_pgpe_process_set_pmcr_req();

//
//Process Request Thread
//
void p9_pgpe_thread_process_requests(void* arg)
{
    PK_TRACE_DBG("PROCTH:Started\n");

    uint32_t restore_irq;
    PkMachineContext  ctx;

    //Initialization
    pk_semaphore_create(&(G_pgpe_pstate_record.sem_process_req), 0, 1);

    //IPC Init
    p9_pgpe_ipc_init();

#if EPM_P9_TUNING
    asm volatile ("tw 0, 31, 0");
#endif

    PK_TRACE_INF("PROCTH:Inited; PGPE_ACTIVE set\n");

    while(1)
    {
        //pend on semaphore
        pk_semaphore_pend(&(G_pgpe_pstate_record.sem_process_req), PK_WAIT_FOREVER);
        wrteei(1);

        //Enter Sub-Critical Section. Timer Interrupts are enabled
        pk_critical_section_enter(&ctx);
        pk_irq_save_and_set_mask(0);
        pk_critical_section_exit(&ctx);

        G_already_sem_posted  = 0;
        restore_irq  = 1;

        PK_TRACE_DBG("PROCTH: Process Task\n");

        //Go through IPC Pending Table
        if (G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing)
        {
            p9_pgpe_process_sgpe_updt_active_cores();

            if(G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if (G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_processing)
        {
            p9_pgpe_process_sgpe_updt_active_quads();

            if(G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if (G_ipc_pend_tbl[IPC_PEND_SGPE_SUSPEND_PSTATES].pending_processing)
        {
            p9_pgpe_process_sgpe_suspend_pstates();

            if(G_ipc_pend_tbl[IPC_PEND_SGPE_SUSPEND_PSTATES].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if (G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT].pending_processing)
        {
            p9_pgpe_process_clip_updt();

            if(G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if (G_ipc_pend_tbl[IPC_PEND_WOF_CTRL].pending_processing)
        {
            p9_pgpe_process_wof_ctrl();

            if(G_ipc_pend_tbl[IPC_PEND_WOF_CTRL].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if (G_ipc_pend_tbl[IPC_PEND_WOF_VFRT].pending_processing)
        {
            p9_pgpe_process_wof_vfrt();

            if(G_ipc_pend_tbl[IPC_PEND_WOF_VFRT].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if (G_ipc_pend_tbl[IPC_PEND_SET_PMCR_REQ].pending_processing)
        {
            p9_pgpe_process_set_pmcr_req();

            if(G_ipc_pend_tbl[IPC_PEND_SET_PMCR_REQ].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        //Pstate START/STOP IPCs are processed and acked in actuate thread,
        //so don't call pk_irq_vec_restore if they are pending.
        if(G_ipc_pend_tbl[IPC_PEND_PSTATE_START].pending_ack == 1 ||
           G_ipc_pend_tbl[IPC_PEND_PSTATE_STOP].pending_ack == 1 )
        {
            restore_irq = 0;
        }

        pk_irq_vec_restore(&ctx); //End Sub-Critical Section

        //Restore IPC if no pending acks. Otherwise, actuate thread will
        //eventually restore IPC interrupt
        if (restore_irq == 1)
        {
            PK_TRACE_DBG("PROCTH: IRQ Restore\n");
            pk_irq_vec_restore(&ctx);
        }
    }
}

//
//p9_pgpe_process_sgpe_updt_active_cores
//
void p9_pgpe_process_sgpe_updt_active_cores()
{
    PK_TRACE_DBG("PROCTH: Core Updt Entry\n");

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd;
    ipcmsg_s2p_update_active_cores_t* args = (ipcmsg_s2p_update_active_cores_t*)async_cmd->cmd_data;

    //If in PM_SUSPENDED state, then ack back with error
    if (G_pstatesStatus == PSTATE_PM_SUSPENDED )
    {
        args->fields.return_code = SGPE_PGPE_RC_PM_COMPLEX_SUSPEND;
        G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack = 0;
        ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd, IPC_RC_SUCCESS);
        pk_halt();
    }
    //Active quad updates should only be received if Pstates and WOF are enabled.
    //However, if we have start pending, then we should not process is here. Once,
    //actuate thread completes actuate_start, it checks for any pending_processing tasks,
    //if there are any it post to process thread(this thread). This cmd will get processed
    //then
    else if(G_pstatesStatus != PSTATE_START_PENDING)
    {
        G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing = 0;

        if(G_pstatesStatus == PSTATE_STOPPED || G_pstatesStatus == PSTATE_INIT || G_wofEnabled == 0)
        {
            if(G_pstatesStatus == PSTATE_STOPPED || G_pstatesStatus == PSTATE_INIT)
            {
                PK_TRACE_DBG("PROCTH: C Updt(Pstate !Started)\n");
                args->fields.return_code = PGPE_RC_PSTATES_NOT_STARTED;
            }
            else
            {
                PK_TRACE_DBG("PROCTH: C Updt(WOF_Disabled)\n");
                args->fields.return_code = PGPE_WOF_RC_NOT_ENABLED;
            }

            G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack = 0;
            ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd, IPC_RC_SUCCESS);
        }
        else
        {
            //Update Shared Memory Region
            G_quadState0->fields.active_cores = (args->fields.active_cores >> 8);
            G_quadState1->fields.active_cores = (args->fields.active_cores & 0xFF) << 8;

            //Do auction and wof calculation
            p9_pgpe_pstate_do_auction(ALL_QUADS_BIT_MASK);
            p9_pgpe_pstate_calc_wof();

            //If ENTRY type then send ACK to SGPE immediately
            //Otherwise, wait to ACK until WOF Clip has been applied(from actuate_pstate thread)
            if (args->fields.update_type == UPDATE_ACTIVE_TYPE_ENTRY)
            {
                args->fields.return_code = SGPE_PGPE_IPC_RC_SUCCESS;
                G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack = 0;
                ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd, IPC_RC_SUCCESS);
            }
        }
    }

    PK_TRACE_DBG("PROCTH: Core Updt Exit\n");
}

//
//p9_pgpe_process_sgpe_updt_active_quads
//
void p9_pgpe_process_sgpe_updt_active_quads()
{
    PK_TRACE_DBG("PROCTH: Quad Updt Entry\n");

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd;
    ipcmsg_s2p_update_active_quads_t* args = (ipcmsg_s2p_update_active_quads_t*)async_cmd->cmd_data;

    //If in PM_SUSPENDED state, then ack back with error
    if (G_pstatesStatus == PSTATE_PM_SUSPENDED )
    {
        args->fields.return_code = SGPE_PGPE_RC_PM_COMPLEX_SUSPEND;
        G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 0;
        ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd, IPC_RC_SUCCESS);
        pk_halt();
    }
    //Active quad updates should only be received if Pstates are enabled.
    //However, if we have start pending, then we should not process it here. Once,
    //actuate thread completes actuate_start, it checks for any pending_processing tasks,
    //if there are any it post to process thread(this thread). This cmd will get processed
    //then
    else if(G_pstatesStatus != PSTATE_START_PENDING)
    {
        G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_processing = 0;

        if(G_pstatesStatus == PSTATE_INIT || G_pstatesStatus == PSTATE_STOPPED)
        {
            PK_TRACE_DBG("PROCTH: Q Updt(Pstate Stopped)\n");
            args->fields.return_code = PGPE_RC_PSTATES_NOT_STARTED;
            G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 0;
            ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd, IPC_RC_SUCCESS);
        }
        else
        {
            //Update Shared Memory Region
            PK_TRACE_DBG("PROCTH: Q Updt, Req_Q: 0x%x\n", (uint32_t)(args->fields.requested_quads));

            //If ENTRY then ACK to SGPE immediately
            if (args->fields.update_type == UPDATE_ACTIVE_TYPE_ENTRY)
            {
                G_reqActQuads->fields.requested_active_quads &= (~(args->fields.requested_quads << 2));
                args->fields.return_code = SGPE_PGPE_IPC_RC_SUCCESS;
                G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 0;
                ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd, IPC_RC_SUCCESS);
            }
            else
            {
                G_reqActQuads->fields.requested_active_quads |= (args->fields.requested_quads << 2);
            }

            if(G_wofEnabled == 1)
            {
                //Set OCCFLG[REQUESTED_ACTIVE_QUAD_UPDATE]
                GPE_PUTSCOM(OCB_OCCFLG_OR, BIT32(30));
            }
            else
            {
                //Do auction
                p9_pgpe_pstate_do_auction(ALL_QUADS_BIT_MASK);
                p9_pgpe_pstate_apply_clips();
            }
        }
    }

    PK_TRACE_DBG("PROCTH: Quad Updt Exit\n");
}

void p9_pgpe_process_sgpe_suspend_pstates()
{
    PK_TRACE_DBG("PROCTH: Susp Pst Entry\n");
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_ipc_pend_tbl[IPC_PEND_SGPE_SUSPEND_PSTATES].cmd;
    ipcmsg_s2p_suspend_pstate_t* args = (ipcmsg_s2p_suspend_pstate_t*)async_cmd->cmd_data;

    //If in PM_SUSPENDED state, then ack back with error
    if (G_pstatesStatus == PSTATE_PM_SUSPENDED )
    {
        args->fields.return_code = SGPE_PGPE_RC_PM_COMPLEX_SUSPEND;
        G_ipc_pend_tbl[IPC_PEND_SGPE_SUSPEND_PSTATES].pending_ack = 0;
        ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_SGPE_SUSPEND_PSTATES].cmd, IPC_RC_SUCCESS);
        pk_halt();
        //Active quad updates should only be received if Pstates are enabled.
        //However, if we have start pending, then we should not process it here. Once,
        //actuate thread completes actuate_start, it checks for any pending_processing tasks,
        //if there are any it posts to process thread(this thread).
        //This cmd will get processed then
    }
    else if(G_pstatesStatus != PSTATE_START_PENDING)
    {
        G_ipc_pend_tbl[IPC_PEND_SGPE_SUSPEND_PSTATES].pending_processing = 0;

        if(G_pstatesStatus == PSTATE_INIT || G_pstatesStatus == PSTATE_STOPPED)
        {
            PK_TRACE_DBG("PROCTH: Susp Pst(Pstate !Started)\n");
            args->fields.return_code = PGPE_RC_PSTATES_NOT_STARTED;
            G_ipc_pend_tbl[IPC_PEND_SGPE_SUSPEND_PSTATES].pending_ack = 0;
            ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_SGPE_SUSPEND_PSTATES].cmd, IPC_RC_SUCCESS);
        }
        else
        {
            G_pstatesStatus = PSTATE_SUSPENDED;
        }
    }

    PK_TRACE_DBG("PROCTH: Susp Pst Exit\n");
}

//
//p9_pgpe_process_clip_updt
//
void p9_pgpe_process_clip_updt()
{
    PK_TRACE_DBG("PROCTH: Clip Updt Entry\n");

    uint32_t q, ack = 0;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT].cmd;
    ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;

    G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT].pending_processing = 0;

    if(G_pgpe_header_data->g_pgpe_qm_flags & OCC_IPC_IMMEDIATE_RESP)
    {
        PK_TRACE_DBG("PROCTH: Clip Updt Imme\n");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        ack = 1;
    }
    else if (G_pstatesStatus == PSTATE_PM_SUSPENDED ||
             G_pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
             G_pstatesStatus == PSTATE_SAFE_MODE)
    {
        PK_TRACE_DBG("PROCTH: Clip Updt PMSUSP/Safe\n");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;
        ack = 1;
    }
    else
    {
        //IPC from 405 treats clip_min as Pstate for min frequency(higher numbered)
        //and clip_max as Pstate for max frequency(lower numbered). However, PGPE
        //Hcode stores them with reverse interpretation.
        for (q = 0; q < MAX_QUADS; q++)
        {
            G_psClipMax[q] = args->ps_val_clip_min[q];
            G_psClipMin[q] = args->ps_val_clip_max[q];
        }

        p9_pgpe_pstate_apply_clips(&G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT]);

        if (G_pstatesStatus == PSTATE_INIT || G_pstatesStatus == PSTATE_STOPPED)
        {
            args->msg_cb.rc = PGPE_RC_SUCCESS;
            ack = 1;
        }
    }

    //Clips ACKed in error cases or if Pstates are not active
    if (ack == 1)
    {
        G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT].pending_ack = 0;
        ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT].cmd, IPC_RC_SUCCESS);
    }

    PK_TRACE_DBG("PROCTH: Clip Upd Exit\n");
}

//
//p9_pgpe_process_wof_ctrl
//
void p9_pgpe_process_wof_ctrl()
{
    PK_TRACE_DBG("PROCTH: WOF Ctrl Enter\n");

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_ipc_pend_tbl[IPC_PEND_WOF_CTRL].cmd;
    ipcmsg_wof_control_t* args = (ipcmsg_wof_control_t*)async_cmd->cmd_data;

    G_ipc_pend_tbl[IPC_PEND_WOF_CTRL].pending_processing = 0;

    if(G_pgpe_header_data->g_pgpe_qm_flags & OCC_IPC_IMMEDIATE_RESP)
    {
        PK_TRACE_DBG("PROCTH: WOF Ctrl Updt Imme\n");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
    }
    else if (G_pstatesStatus == PSTATE_PM_SUSPENDED ||
             G_pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
             G_pstatesStatus == PSTATE_SAFE_MODE)
    {
        PK_TRACE_DBG("PROCTH: Clip Updt PMSUSP/Safe\n");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;
    }
    else if(G_pstatesStatus == PSTATE_INIT || G_pstatesStatus == PSTATE_STOPPED)
    {
        args->msg_cb.rc = PGPE_RC_PSTATES_NOT_STARTED;
    }
    else
    {
        args->msg_cb.rc = PGPE_RC_SUCCESS;

        //If WOF ON
        if (args->action == PGPE_ACTION_WOF_ON)
        {
            if(G_wofEnabled == 0)
            {
                G_wofPending = 1;
            }
        }
        else if (args->action == PGPE_ACTION_WOF_OFF)
        {
            if(G_wofEnabled == 1)
            {
#if SGPE_IPC_ENABLED == 1
                uint32_t rc;
                PkMachineContext  ctx;
                //Send "Disable Core Stop Updates" IPC to SGPE
                G_sgpe_control_updt.fields.return_code = 0x0;
                G_sgpe_control_updt.fields.action = CTRL_STOP_UPDT_DISABLE_CORE;
                G_ipc_msg_pgpe_sgpe.cmd_data = &G_sgpe_control_updt;
                ipc_init_msg(&G_ipc_msg_pgpe_sgpe.cmd,
                             IPC_MSGID_PGPE_SGPE_CONTROL_STOP_UPDATES,
                             p9_pgpe_pstate_ipc_rsp_cb_sem_post,
                             (void*)&G_pgpe_pstate_record.sem_sgpe_wait);

                //send the command
                rc = ipc_send_cmd(&G_ipc_msg_pgpe_sgpe.cmd);

                if(rc)
                {
                    pk_halt();
                }

                //Wait for SGPE ACK with alive Quads
                pk_irq_vec_restore(&ctx);
                pk_semaphore_pend(&(G_pgpe_pstate_record.sem_actuate), PK_WAIT_FOREVER);

                if (G_sgpe_control_updt.fields.return_code == SGPE_PGPE_IPC_RC_SUCCESS)
                {
                    //Update Shared Memory Region
                    G_quadState0->fields.active_cores = G_sgpe_control_updt.fields.active_cores >> 8;
                    G_quadState1->fields.active_cores = G_sgpe_control_updt.fields.active_cores & 0xFF;
                    G_reqActQuads->fields.requested_active_quads = G_sgpe_control_updt.fields.active_quads;
                }
                else
                {
                    pk_halt();
                }

#endif// _SGPE_IPC_ENABLED_
            }
        }
    }

    G_ipc_pend_tbl[IPC_PEND_WOF_CTRL].pending_ack = 0;
    ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_WOF_CTRL].cmd, IPC_RC_SUCCESS);

    PK_TRACE_DBG("PROCTH: WOF Ctrl Exit\n");
}

//
//p9_pgpe_process_wof_vfrt
//
void p9_pgpe_process_wof_vfrt()
{
    PK_TRACE_DBG("PROCTH: WOF VFRT Enter\n");

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_ipc_pend_tbl[IPC_PEND_WOF_VFRT].cmd;
    ipcmsg_wof_vfrt_t* args = (ipcmsg_wof_vfrt_t*)async_cmd->cmd_data;

    G_ipc_pend_tbl[IPC_PEND_WOF_VFRT].pending_processing = 0;

    if(G_pgpe_header_data->g_pgpe_qm_flags & OCC_IPC_IMMEDIATE_RESP)
    {
        PK_TRACE_DBG("PROCTH: WOF VFRT Imme\n");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
    }
    else if (G_pstatesStatus == PSTATE_PM_SUSPENDED ||
             G_pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
             G_pstatesStatus == PSTATE_SAFE_MODE)
    {
        PK_TRACE_DBG("PROCTH: Clip Updt PMSUSP/Safe\n");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;
    }
    else if(G_pstatesStatus == PSTATE_STOPPED || G_pstatesStatus == PSTATE_INIT ||
            (G_wofEnabled == 0 && G_wofPending == 0))
    {
        args->msg_cb.rc = PGPE_RC_PSTATES_NOT_STARTED;
    }
    else
    {
        //Update VFRT pointer
        G_vfrt_ptr = args->vfrt_ptr;

        //If active_quads field of this IPC matches requested active quads
        //in Shared SRAM, then clear OCCFLG[REQUESTED_ACTIVE_QUAD_UPDATE]
        if (args->active_quads == G_reqActQuads->fields.requested_active_quads)
        {
            GPE_PUTSCOM(OCB_OCCFLG_CLR, BIT32(30));
            p9_pgpe_pstate_calc_wof();
        }

        if (G_wofPending == 1)
        {
            G_wofEnabled = 1;
            G_wofPending = 0;

#if SGPE_IPC_ENABLED == 1
            uint32_t rc;
            PkMachineContext  ctx;
            //Send "Disable Core Stop Updates" IPC to SGPE
            G_sgpe_control_updt.fields.return_code = 0x0;
            G_sgpe_control_updt.fields.action = CTRL_STOP_UPDT_DISABLE_CORE;
            G_ipc_msg_pgpe_sgpe.cmd_data = &G_sgpe_control_updt;
            ipc_init_msg(&G_ipc_msg_pgpe_sgpe.cmd,
                         IPC_MSGID_PGPE_SGPE_CONTROL_STOP_UPDATES,
                         p9_pgpe_pstate_ipc_rsp_cb_sem_post,
                         (void*)&G_pgpe_pstate_record.sem_sgpe_wait);

            //send the command
            rc = ipc_send_cmd(&G_ipc_msg_pgpe_sgpe.cmd);

            if(rc)
            {
                pk_halt();
            }

            //Wait for SGPE ACK with alive Quads
            pk_irq_vec_restore(&ctx);
            pk_semaphore_pend(&(G_pgpe_pstate_record.sem_actuate), PK_WAIT_FOREVER);

            if (G_sgpe_control_updt.fields.return_code == SGPE_PGPE_IPC_RC_SUCCESS)
            {
                //Update Shared Memory Region
                G_quadState0->fields.active_cores = G_sgpe_control_updt.fields.active_cores >> 8;
                G_quadState1->fields.active_cores = G_sgpe_control_updt.fields.active_cores & 0xFF;
                G_reqActQuads->fields.requested_active_quads = G_sgpe_control_updt.fields.active_quads;
            }
            else
            {
                pk_halt();
            }

#endif// _SGPE_IPC_ENABLED_
        }

        args->msg_cb.rc = PGPE_RC_SUCCESS;
    }

    G_ipc_pend_tbl[IPC_PEND_WOF_VFRT].pending_ack = 0;
    ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_WOF_VFRT].cmd, IPC_RC_SUCCESS);

    PK_TRACE_DBG("PROCTH: WOF VFRT Exit\n");
}

//
//p9_pgpe_process_set_pmcr_req
//
void p9_pgpe_process_set_pmcr_req()
{
    PK_TRACE_DBG("PROCTH: Set PMCR Enter\n");

    uint32_t q, c;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_ipc_pend_tbl[IPC_PEND_SET_PMCR_REQ].cmd;
    ipcmsg_set_pmcr_t* args = (ipcmsg_set_pmcr_t*)async_cmd->cmd_data;

    G_ipc_pend_tbl[IPC_PEND_SET_PMCR_REQ].pending_processing = 0;

    if(G_pgpe_header_data->g_pgpe_qm_flags & OCC_IPC_IMMEDIATE_RESP)
    {
        PK_TRACE_DBG("PROCTH: Set PMCR Imme\n");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
    }
    else  if(G_pmcrOwner != PMCR_OWNER_OCC)
    {
        PK_TRACE_DBG("PROCTH: !OCC_PMCR_OWNER\n");
        args->msg_cb.rc = PGPE_RC_OCC_NOT_PMCR_OWNER;
    }
    else if (G_pstatesStatus == PSTATE_INIT || G_pstatesStatus == PSTATE_STOPPED)
    {
        PK_TRACE_DBG("PROCTH: Pstates !Started\n");
        args->msg_cb.rc = PGPE_RC_PSTATES_NOT_STARTED;
    }
    else if (G_pstatesStatus == PSTATE_PM_SUSPENDED ||
             G_pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
             G_pstatesStatus == PSTATE_SAFE_MODE)
    {
        PK_TRACE_DBG("PROCTH: Clip Updt PMSUSP/Safe\n");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;
    }
    else
    {
        PK_TRACE_DBG("PROCTH: Upd coresPSReq\n");

        for (q = 0; q < MAX_QUADS; q++)
        {
            for (c = (q * CORES_PER_QUAD); c < (q + 1)*CORES_PER_QUAD; c++)
            {
                G_coresPSRequest[c] = (args->pmcr[q] >> 48) & 0x00FF;
            }

            PK_TRACE_DBG("PROCTH: coresPSReq: 0x%x\n", G_coresPSRequest[q * CORES_PER_QUAD]);
        }

        p9_pgpe_pstate_do_auction(ALL_QUADS_BIT_MASK);
        p9_pgpe_pstate_apply_clips();

        args->msg_cb.rc = PGPE_RC_SUCCESS; //Return Code
    }

    //Ack back to OCC
    G_ipc_pend_tbl[IPC_PEND_SET_PMCR_REQ].pending_ack = 0;
    ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_SET_PMCR_REQ].cmd, IPC_RC_SUCCESS);

    PK_TRACE_DBG("PROCTH: Set PMCR Exit\n");
}
