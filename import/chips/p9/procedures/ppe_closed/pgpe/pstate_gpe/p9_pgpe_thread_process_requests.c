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
GPE_BUFFER(extern ipcmsg_p2s_ctrl_stop_updates_t G_sgpe_control_updt);
extern ipc_async_cmd_t G_ipc_msg_pgpe_sgpe;

//
//Local Function Prototypes
//
void p9_pgpe_process_sgpe_updt_active_cores();
void p9_pgpe_process_sgpe_updt_active_quads();
void p9_pgpe_process_start_stop();
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
        /*pk_critical_section_enter(&ctx);
        pk_irq_save_and_set_mask(0);
        pk_critical_section_exit(&ctx);*/
        pk_irq_sub_critical_enter(&ctx);

        G_pgpe_pstate_record.alreadySemPosted  = 0;
        restore_irq  = 1;

        PK_TRACE_DBG("PROCTH: Process Task\n");

        //Go through IPC Pending Table
        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing == 1)
        {
            p9_pgpe_process_sgpe_updt_active_cores();

            if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_processing == 1)
        {
            p9_pgpe_process_sgpe_updt_active_quads();

            if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_processing == 1)
        {
            p9_pgpe_process_start_stop();

            /*if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START].pending_ack == 1 ||
               G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_STOP].pending_ack == 1) {
                restore_irq = 0;
            }*/
        }

        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_SUSPEND_PSTATES].pending_processing == 1)
        {
            p9_pgpe_process_sgpe_suspend_pstates();

            if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_SUSPEND_PSTATES].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_processing == 1)
        {
            p9_pgpe_process_clip_updt();

            if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_processing)
        {
            p9_pgpe_process_wof_ctrl();

            if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_processing == 1)
        {
            p9_pgpe_process_wof_vfrt();

            if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].pending_processing == 1)
        {
            p9_pgpe_process_set_pmcr_req();

            if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        pk_irq_sub_critical_exit(&ctx);
        //pk_irq_vec_restore(&ctx); //End Sub-Critical Section

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

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd;
    ipcmsg_s2p_update_active_cores_t* args = (ipcmsg_s2p_update_active_cores_t*)async_cmd->cmd_data;

    //If in PM_SUSPENDED state, then ack back with error
    if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED)
    {
        PK_TRACE_DBG("PROCTH: PM Suspended\n");
        args->fields.return_code = SGPE_PGPE_RC_PM_COMPLEX_SUSPEND;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd, IPC_RC_SUCCESS);
        pk_halt();
    }
    else
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing = 0;

        if(G_pgpe_pstate_record.wofEnabled == 0)
        {
            PK_TRACE_DBG("PROCTH: C Updt(WOF_Disabled)\n");
            args->fields.return_code = PGPE_WOF_RC_NOT_ENABLED;
            G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack = 0;
            ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd, IPC_RC_SUCCESS);
        }
        else
        {
            //Update Shared Memory Region
            G_pgpe_pstate_record.pQuadState0->fields.active_cores = (args->fields.active_cores >> 8);
            G_pgpe_pstate_record.pQuadState1->fields.active_cores = (args->fields.active_cores & 0xFF) << 8;

            //Do auction and wof calculation
            p9_pgpe_pstate_do_auction(ALL_QUADS_BIT_MASK);
            p9_pgpe_pstate_calc_wof();

            //If ENTRY type then send ACK to SGPE immediately
            //Otherwise, wait to ACK until WOF Clip has been applied(from actuate_pstate thread)
            if (args->fields.update_type == UPDATE_ACTIVE_TYPE_ENTRY)
            {
                PK_TRACE_DBG("PROCTH: Core Entry ACK back to SGPE\n");
                args->fields.return_code = SGPE_PGPE_IPC_RC_SUCCESS;
                G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack = 0;
                ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd, IPC_RC_SUCCESS);
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
    PK_TRACE_DBG("PROCTH: Q Updt Start\n");

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd;
    ipcmsg_s2p_update_active_quads_t* args = (ipcmsg_s2p_update_active_quads_t*)async_cmd->cmd_data;
    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_processing = 0;

    //If in PM_SUSPENDED state, then ack back with error
    if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED ||
        G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
        G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
    {
        args->fields.return_code = SGPE_PGPE_RC_PM_COMPLEX_SUSPEND;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd, IPC_RC_SUCCESS);
        pk_halt();
    }
    else
    {

        //ENTRY
        if (args->fields.update_type == UPDATE_ACTIVE_TYPE_ENTRY)
        {
            //Update Shared Memory Region
            PK_TRACE_DBG("PROCTH: Q Updt Entry, Req_Q: 0x%x\n", (uint32_t)(args->fields.requested_quads));
            G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads &= (~(args->fields.requested_quads << 2));

            //For Entry ACK back to SGPE right away
            args->fields.return_code = SGPE_PGPE_IPC_RC_SUCCESS;
            G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 0;
            ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd, IPC_RC_SUCCESS);
            PK_TRACE_DBG("PROCTH: Q Updt Entry, ACK sent to SGPE\n");

            //If WOF Enabled, then interlock with OCC
            if(G_pgpe_pstate_record.wofEnabled == 1)
            {
                GPE_PUTSCOM(OCB_OCCFLG_OR, BIT32(REQUESTED_ACTIVE_QUAD_UPDATE));//Set OCCFLG[REQUESTED_ACTIVE_QUAD_UPDATE]
            }
            else
            {
                p9_pgpe_pstate_process_quad_entry(args->fields.requested_quads << 2);
            }
        }
        //EXIT
        else
        {
            //Update Shared Memory Region
            PK_TRACE_DBG("PROCTH: Q Updt Exit, Req_Q: 0x%x\n", (uint32_t)(args->fields.requested_quads));
            G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads |= (args->fields.requested_quads << 2);

            //WOF Enabled
            if(G_pgpe_pstate_record.wofEnabled == 1)
            {
                GPE_PUTSCOM(OCB_OCCFLG_OR, BIT32(REQUESTED_ACTIVE_QUAD_UPDATE));//Set OCCFLG[REQUESTED_ACTIVE_QUAD_UPDATE]
            }
            else
            {
                p9_pgpe_pstate_process_quad_exit(args->fields.requested_quads << 2);
            }
        }
    }

    PK_TRACE_DBG("PROCTH: Quad Updt End\n");
}

void p9_pgpe_process_start_stop()
{
    PK_TRACE_DBG("PROCTH: Start/Stop Entry\n");
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd;
    ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;

    if(G_pgpe_header_data->g_pgpe_qm_flags & OCC_IPC_IMMEDIATE_RESP)
    {
        PK_TRACE_DBG("START_STOP: Imm\n");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd, IPC_RC_SUCCESS);
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_ack = 0;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_processing = 0;
    }
    else if(G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
            G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED ||
            G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
    {
        PK_TRACE_DBG("START_STOP: PM_SUSP/Safe\n");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd, IPC_RC_SUCCESS);
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_ack = 0;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_processing = 0;
    }
    else
    {
        //If Start
        if (args->action == PGPE_ACTION_PSTATE_START)
        {
            if(G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT || G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED)
            {
                p9_pgpe_pstate_start(PSTATE_START_OCC_IPC);
                pk_semaphore_post(&G_pgpe_pstate_record.sem_actuate);
            }
            else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
            {
                PK_TRACE_DBG("START_STOP: PMCR OWNER Change to %d \n", args->pmcr_owner);
                p9_pgpe_pstate_set_pmcr_owner(args->pmcr_owner);
                args->msg_cb.rc = PGPE_RC_SUCCESS;
                G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_processing = 0;
                G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_ack = 0;
                ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd, IPC_RC_SUCCESS);
            }
            else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_SUSPENDED_WHILE_ACTIVE ||
                     G_pgpe_pstate_record.pstatesStatus ==  PSTATE_SUSPENDED_WHILE_STOPPED_INIT)
            {
                PK_TRACE_DBG("START_STOP: Q Entry Pending\n");
                //do nothing (change ownership upon quad_entry)
            }
        }
        else
        {
            if(G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT
               || G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED
               || G_pgpe_pstate_record.pstatesStatus == PSTATE_SUSPENDED_WHILE_STOPPED_INIT)
            {
                PK_TRACE_DBG("START_STOP: Already Stopped\n");
                args->msg_cb.rc = PGPE_RC_REQ_PSTATE_ALREADY_STOPPED;
                ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd, IPC_RC_SUCCESS);
                G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_ack = 0;
                G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_processing = 0;
            }
            else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
            {
                p9_pgpe_pstate_stop();
            }
            else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_SUSPENDED_WHILE_ACTIVE )
            {
                PK_TRACE_DBG("START_STOP: Q Entry Pending\n");
                //do nothing (pstate stop upon quad entry)
            }
        }
    }

    PK_TRACE_DBG("PROCTH: Start/Stop End\n");
}

void p9_pgpe_process_sgpe_suspend_pstates()
{
    PK_TRACE_DBG("PROCTH: Susp Pst Entry\n");
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_SUSPEND_PSTATES].cmd;
    ipcmsg_s2p_suspend_pstate_t* args = (ipcmsg_s2p_suspend_pstate_t*)async_cmd->cmd_data;
    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_SUSPEND_PSTATES].pending_processing = 0;

    //If in PM_SUSPENDED state, then ack back with error
    if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED ||
        G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
        G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE )
    {
        PK_TRACE_DBG("PROCTH: Susp Pst while SUSPEND/SAFE\n");
        args->fields.return_code = SGPE_PGPE_RC_PM_COMPLEX_SUSPEND;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_SUSPEND_PSTATES].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_SUSPEND_PSTATES].cmd, IPC_RC_SUCCESS);
        pk_halt();
    }
    else if(G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT ||
            G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED ||
            G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
    {
        args->fields.return_code = SGPE_PGPE_IPC_RC_SUCCESS;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_SUSPEND_PSTATES].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_SUSPEND_PSTATES].cmd, IPC_RC_SUCCESS);

        if(G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
        {
            PK_TRACE_DBG("PROCTH: Susp Pst while ACTIVE\n");
            G_pgpe_pstate_record.pstatesStatus = PSTATE_SUSPENDED_WHILE_ACTIVE;
        }
        else
        {
            G_pgpe_pstate_record.pstatesStatus = PSTATE_SUSPENDED_WHILE_STOPPED_INIT;
            PK_TRACE_DBG("PROCTH: Susp Pst while STOPPED_INIT\n");
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
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd;
    ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;

    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_processing = 0;

    if(G_pgpe_header_data->g_pgpe_qm_flags & OCC_IPC_IMMEDIATE_RESP)
    {
        PK_TRACE_DBG("PROCTH: Clip Updt Imme\n");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        ack = 1;
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
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
            G_pgpe_pstate_record.psClipMax[q] = args->ps_val_clip_min[q];
            G_pgpe_pstate_record.psClipMin[q] = args->ps_val_clip_max[q];
        }

        p9_pgpe_pstate_apply_clips(&G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT]);

        if (G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT || G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED)
        {
            args->msg_cb.rc = PGPE_RC_SUCCESS;
            ack = 1;
        }
    }

    //Clips ACKed in error cases or if Pstates are not active
    if (ack == 1)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd, IPC_RC_SUCCESS);
    }

    PK_TRACE_DBG("PROCTH: Clip Upd Exit\n");
}

//
//p9_pgpe_process_wof_ctrl
//
void p9_pgpe_process_wof_ctrl()
{
    PK_TRACE_DBG("PROCTH: WOF Ctrl Enter\n");

    uint32_t ack_now = 1;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].cmd;
    ipcmsg_wof_control_t* args = (ipcmsg_wof_control_t*)async_cmd->cmd_data;

    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_processing = 0;

    if((G_pgpe_header_data->g_pgpe_qm_flags & OCC_IPC_IMMEDIATE_RESP) ||
       (G_pgpe_header_data->g_pgpe_qm_flags & WOF_IPC_IMMEDIATE_RESP))
    {
        PK_TRACE_DBG("PROCTH: WOF Ctrl Imme\n");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
    {
        PK_TRACE_DBG("PROCTH: WOF Ctrl PMSUSP/Safe\n");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;
    }
    else if(G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT || G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED)
    {
        PK_TRACE_DBG("PROCTH: WOF Ctrl PSStop/Init\n");
        args->msg_cb.rc = PGPE_RC_PSTATES_NOT_STARTED;
    }
    else
    {

        //If WOF ON
        if (args->action == PGPE_ACTION_WOF_ON)
        {
            if(G_pgpe_pstate_record.wofEnabled == 0)
            {
                PK_TRACE_DBG("PROCTH: WOF Ctrl=ON,WOF_Enabled=0\n");
#if SGPE_IPC_ENABLED == 1
                /*uint32_t rc;
                PkMachineContext  ctx;
                //Send "Disable Core Stop Updates" IPC to SGPE
                G_sgpe_control_updt.fields.return_code = 0x0;
                G_sgpe_control_updt.fields.action = CTRL_STOP_UPDT_ENABLE_CORE;
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
                    G_pgpe_pstate_record.pQuadState0->fields.active_cores = G_sgpe_control_updt.fields.active_cores >> 8;
                    G_pgpe_pstate_record.pQuadState1->fields.active_cores = G_sgpe_control_updt.fields.active_cores & 0xFF;
                    G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads = G_sgpe_control_updt.fields.active_quads;
                }
                else
                {
                    pk_halt();
                }
                */
#endif// _SGPE_IPC_ENABLED_

                G_pgpe_pstate_record.wofEnabled = 1;
                p9_pgpe_pstate_calc_wof();
                ack_now = 0;
            }
            else
            {
                args->msg_cb.rc = PGPE_RC_WOF_ALREADY_ON;
                PK_TRACE_DBG("PROCTH: WOF Ctrl=ON,WOF_Enabled=1\n");
            }
        }
        else if (args->action == PGPE_ACTION_WOF_OFF)
        {
            if(G_pgpe_pstate_record.wofEnabled == 1)
            {
                PK_TRACE_DBG("PROCTH: WOF Ctrl=OFF,WOF_Enabled=1\n");
#if SGPE_IPC_ENABLED == 1
                /*        uint32_t rc;
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
                            G_pgpe_pstate_record.pQuadState0->fields.active_cores = G_sgpe_control_updt.fields.active_cores >> 8;
                            G_pgpe_pstate_record.pQuadState1->fields.active_cores = G_sgpe_control_updt.fields.active_cores & 0xFF;
                            G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads = G_sgpe_control_updt.fields.active_quads;
                        }
                        else
                        {
                            pk_halt();
                        }*/

#endif// _SGPE_IPC_ENABLED_

                G_pgpe_pstate_record.wofEnabled = 0;
            }
            else
            {
                args->msg_cb.rc = PGPE_RC_WOF_ALREADY_OFF;
                PK_TRACE_DBG("PROCTH: WOF Ctrl=OFF,WOF_Enabled=0\n");
            }
        }
    }

    if (ack_now == 1)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].cmd, IPC_RC_SUCCESS);
    }


    PK_TRACE_DBG("PROCTH: WOF Ctrl Exit\n");
}

//
//p9_pgpe_process_wof_vfrt
//
void p9_pgpe_process_wof_vfrt()
{
    PK_TRACE_DBG("PROCTH: WOF VFRT Enter\n");
    uint32_t ack_now = 1;

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].cmd;
    ipcmsg_wof_vfrt_t* args = (ipcmsg_wof_vfrt_t*)async_cmd->cmd_data;

    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_processing = 0;

    if((G_pgpe_header_data->g_pgpe_qm_flags & OCC_IPC_IMMEDIATE_RESP) ||
       (G_pgpe_header_data->g_pgpe_qm_flags & WOF_IPC_IMMEDIATE_RESP))
    {
        PK_TRACE_DBG("PROCTH: WOF VFRT Imme\n");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
    {
        PK_TRACE_DBG("PROCTH: WOF VFRT PMSUSP/Safe\n");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;
    }
    else if(G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED || G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT)
    {
        PK_TRACE_DBG("PROCTH: WOF VFRT PSStop/Init\n");
        args->msg_cb.rc = PGPE_RC_PSTATES_NOT_STARTED;
    }
    else
    {
        if(args->homer_vfrt_ptr == NULL)
        {
            PK_TRACE_INF("PROCTH: NULL VFRT Ptr");
            pk_halt();
        }

        //Update VFRT pointer
        G_pgpe_pstate_record.pVFRT = args->homer_vfrt_ptr;
        PK_TRACE_INF("PROCTH: VFRT Table");
        PK_TRACE_INF("Mgc=0x%x, ver=%d, vdnid=%x,VddQAId=%x", G_pgpe_pstate_record.pVFRT->vfrtHeader.magic_number,
                     G_pgpe_pstate_record.pVFRT->vfrtHeader.type_version,
                     G_pgpe_pstate_record.pVFRT->vfrtHeader.res_vdnId,
                     G_pgpe_pstate_record.pVFRT->vfrtHeader.VddId_QAId);

        if(G_pgpe_pstate_record.wofEnabled == 1)
        {
            p9_pgpe_pstate_calc_wof();
            ack_now = 0;
        }
        else
        {
            args->msg_cb.rc = PGPE_RC_SUCCESS;
        }
    }

    if (ack_now == 1)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].cmd, IPC_RC_SUCCESS);
    }

    PK_TRACE_DBG("PROCTH: WOF VFRT Exit\n");
}

//
//p9_pgpe_process_set_pmcr_req
//
void p9_pgpe_process_set_pmcr_req()
{
    PK_TRACE_DBG("PROCTH: Set PMCR Enter\n");

    uint32_t q, c;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].cmd;
    ipcmsg_set_pmcr_t* args = (ipcmsg_set_pmcr_t*)async_cmd->cmd_data;

    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].pending_processing = 0;

    if(G_pgpe_header_data->g_pgpe_qm_flags & OCC_IPC_IMMEDIATE_RESP)
    {
        PK_TRACE_DBG("PROCTH: Set PMCR Imme\n");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
    }
    else  if(G_pgpe_pstate_record.pmcrOwner != PMCR_OWNER_OCC)
    {
        PK_TRACE_DBG("PROCTH: !OCC_PMCR_OWNER\n");
        args->msg_cb.rc = PGPE_RC_OCC_NOT_PMCR_OWNER;
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT || G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED)
    {
        PK_TRACE_DBG("PROCTH: Pstates !Started\n");
        args->msg_cb.rc = PGPE_RC_PSTATES_NOT_STARTED;
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
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
                G_pgpe_pstate_record.coresPSRequest[c] = (args->pmcr[q] >> 48) & 0x00FF;
            }

            PK_TRACE_DBG("PROCTH: coresPSReq: 0x%x\n", G_pgpe_pstate_record.coresPSRequest[q * CORES_PER_QUAD]);
        }

        p9_pgpe_pstate_do_auction(ALL_QUADS_BIT_MASK);
        p9_pgpe_pstate_apply_clips();

        args->msg_cb.rc = PGPE_RC_SUCCESS; //Return Code
    }

    //Ack back to OCC
    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].pending_ack = 0;
    ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].cmd, IPC_RC_SUCCESS);

    PK_TRACE_DBG("PROCTH: Set PMCR Exit\n");
}
