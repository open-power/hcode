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
#include "wof_sgpe_pgpe_api.h"
#include "ipc_api.h"
#include "ipc_async_cmd.h"
#include "p9_pgpe_header.h"
#include "p9_pgpe_optrace.h"

//
//External Global Data
//
extern TraceData_t G_pgpe_optrace_data;
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
void p9_pgpe_process_clip_updt();
void p9_pgpe_process_wof_ctrl();
void p9_pgpe_process_wof_vfrt();
void p9_pgpe_process_set_pmcr_req();

//
//Process Request Thread
//
void p9_pgpe_thread_process_requests(void* arg)
{
    PK_TRACE_DBG("PTH:Started");

    uint32_t restore_irq;
    PkMachineContext  ctx;

    //IPC Init
    p9_pgpe_ipc_init();

#if EPM_P9_TUNING
    asm volatile ("tw 0, 31, 0");
#endif

    PK_TRACE_INF("PTH:Inited");

    while(1)
    {
        //pend on semaphore
        pk_semaphore_pend(&(G_pgpe_pstate_record.sem_process_req), PK_WAIT_FOREVER);
        wrteei(1);

        //Enter Sub-Critical Section. Timer Interrupts are enabled
        pk_irq_sub_critical_enter(&ctx);

        restore_irq  = 1;

        PK_TRACE_DBG("PTH: Process Task");

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

        }

        if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_processing == 1)
        {
            p9_pgpe_process_start_stop();
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

        //Restore IPC if no pending acks. Otherwise, actuate thread will
        //eventually restore IPC interrupt
        if (restore_irq == 1)
        {
            PK_TRACE_DBG("PTH: IRQ Restore");
            pk_irq_vec_restore(&ctx);
        }
    }
}

//
//p9_pgpe_process_sgpe_updt_active_cores
//
void p9_pgpe_process_sgpe_updt_active_cores()
{
    PK_TRACE_DBG("PTH: Core Updt Entry");
    uint32_t c, ack_now = 1;

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd;
    ipcmsg_s2p_update_active_cores_t* args = (ipcmsg_s2p_update_active_cores_t*)async_cmd->cmd_data;

    //If in PM_SUSPENDED state, then ack back with error
    if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED)
    {
        PK_TRACE_DBG("PTH: PM Suspended");
        args->fields.return_code = IPC_SGPE_PGPE_RC_PM_COMPLEX_SUSPEND;
        G_pgpe_optrace_data.word[0] = PGPE_OP_CORES_ACTIVE_IN_PM_SUSP;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
    }
    else
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing = 0;

        if(G_pgpe_pstate_record.wofEnabled == 0)
        {
            PK_TRACE_DBG("PTH: C Updt(WOF_Disabled)");
            args->fields.return_code = PGPE_WOF_RC_NOT_ENABLED;
            G_pgpe_optrace_data.word[0] = PGPE_OP_CORES_ACTIVE_IN_WOF_DISABLED;
            p9_pgpe_optrace(UNEXPECTED_ERROR);
        }
        else
        {
            //Update Shared Memory Region
            G_pgpe_pstate_record.pQuadState0->fields.active_cores = (args->fields.active_cores >> 8);
            G_pgpe_pstate_record.pQuadState1->fields.active_cores = (args->fields.active_cores & 0xFF) << 8;

            PK_TRACE_DBG("PTH: Core Updt type=%u activeCores=0x%x)", args->fields.update_type, args->fields.active_cores);

            //Store separately as shared SRAM location is split
            G_pgpe_pstate_record.activeCores = args->fields.active_cores;
            G_pgpe_pstate_record.numActiveCores = 0;

            for (c = 0; c < MAX_CORES; c++)
            {
                if (c & G_pgpe_pstate_record.activeCores)
                {
                    G_pgpe_pstate_record.numActiveCores += 1;
                }
            }

            //OP_TRACE(Do before auction and wof calculation)
            G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24)  |
                                          ((args->fields.update_type == UPDATE_ACTIVE_CORES_TYPE_ENTRY) ? 0x2000000 : 0x1000000) |
                                          (G_pgpe_pstate_record.activeCores >> 8);
            p9_pgpe_optrace(PRC_CORES_ACTV);

            //Do auction and wof calculation
            p9_pgpe_pstate_do_auction();
            p9_pgpe_pstate_calc_wof();

            //If ENTRY type then send ACK to SGPE immediately
            //Otherwise, wait to ACK until WOF Clip has been applied(from actuate_pstate thread)
            if (args->fields.update_type == UPDATE_ACTIVE_CORES_TYPE_ENTRY)
            {
                PK_TRACE_DBG("PTH: Core Entry ACK back to SGPE");
                args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
                PK_TRACE_DBG("PTH: Core Updt ENTRY ACKed");
            }
            else
            {
                ack_now = 0;
            }
        }
    }

    if (ack_now == 1)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd, IPC_RC_SUCCESS);
        p9_pgpe_optrace(ACK_CORES_ACTV);
    }

    PK_TRACE_DBG("PTH: Core Updt Exit");
}

//
//p9_pgpe_process_sgpe_updt_active_quads
//
void p9_pgpe_process_sgpe_updt_active_quads()
{
    PK_TRACE_DBG("PTH: Quad Updt Start");
    uint32_t ack_now = 1;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd;
    ipcmsg_s2p_update_active_quads_t* args = (ipcmsg_s2p_update_active_quads_t*)async_cmd->cmd_data;
    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_processing = 0;

    //If in PM_SUSPENDED state, then ack back with error
    if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED ||
        G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
        G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
    {
        args->fields.return_code = IPC_SGPE_PGPE_RC_PM_COMPLEX_SUSPEND;
        G_pgpe_optrace_data.word[0] = PGPE_OP_QUADS_ACTIVE_IN_PM_SUSP;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
    }
    else
    {
        uint32_t SS;

        if(args->fields.update_type == UPDATE_ACTIVE_QUADS_TYPE_ENTRY) //entry
        {
            SS = (args->fields.entry_type == UPDATE_ACTIVE_QUADS_ENTRY_TYPE_NOTIFY) ? 0x2 : 0x3;
        }
        else //exit
        {
            SS = 0x1;
        }


        //ENTRY
        if (args->fields.update_type == UPDATE_ACTIVE_QUADS_TYPE_ENTRY)
        {
            if (args->fields.entry_type == UPDATE_ACTIVE_QUADS_ENTRY_TYPE_NOTIFY)
            {
                p9_pgpe_pstate_process_quad_entry_notify(args->fields.requested_quads << 2);
            }
            else
            {
                p9_pgpe_pstate_process_quad_entry_done(args->fields.requested_quads << 2);
            }

            args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
        }
        //EXIT
        else
        {
            //Update Shared Memory Region
            G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads |= (args->fields.requested_quads << 2);

            //WOF Enabled
            if(G_pgpe_pstate_record.wofEnabled == 1)
            {
                GPE_PUTSCOM(OCB_OCCFLG_OR, BIT32(REQUESTED_ACTIVE_QUAD_UPDATE));//Set OCCFLG[REQUESTED_ACTIVE_QUAD_UPDATE]
                ack_now = 0;
            }
            else
            {
                p9_pgpe_pstate_process_quad_exit(args->fields.requested_quads << 2);
                args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
            }
        }

        G_pgpe_optrace_data.word[0] = (args->fields.requested_quads << 26) |
                                      (SS << 24) |
                                      (G_pgpe_pstate_record.activeCores >> 8);
        p9_pgpe_optrace(PRC_QUAD_ACTV);
    }

    if (ack_now == 1)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd, IPC_RC_SUCCESS);
        p9_pgpe_optrace(ACK_QUAD_ACTV);
    }

    PK_TRACE_DBG("PTH: Quad Updt End");
}

void p9_pgpe_process_start_stop()
{
    PK_TRACE_DBG("PTH: Start/Stop Entry");
    uint32_t ack_now = 1;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd;
    ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;


    if(G_pgpe_header_data->g_pgpe_qm_flags & BIT16(PGPE_HEADER_FLAGS_OCC_IPC_IMMEDIATE_MODE))
    {
        PK_TRACE_DBG("START_STOP: Imm");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        G_pgpe_optrace_data.word[0] = (START_STOP_IPC << 24) |
                                      (G_pgpe_pstate_record.globalPSComputed << 16) |
                                      (in32(OCB_QCSR) >> 16);
        p9_pgpe_optrace(PRC_START_STOP);

    }
    else if(G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
            G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED ||
            G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
    {
        PK_TRACE_DBG("START_STOP: PM_SUSP/Safe");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;
        G_pgpe_optrace_data.word[0] = PGPE_OP_PSTATE_START_IN_PM_SUSP;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
    }
    else
    {
        //If Start
        if (args->action == PGPE_ACTION_PSTATE_START)
        {
            if(G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT || G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED)
            {
                p9_pgpe_pstate_start(PSTATE_START_OCC_IPC);
                args->msg_cb.rc = PGPE_RC_SUCCESS;
                pk_semaphore_post(&G_pgpe_pstate_record.sem_actuate);
            }
            else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
            {
                PK_TRACE_DBG("START_STOP: PMCR OWNER Change to %d ", args->pmcr_owner);
                p9_pgpe_pstate_set_pmcr_owner(args->pmcr_owner);
                args->msg_cb.rc = PGPE_RC_SUCCESS;
            }

            G_pgpe_optrace_data.word[0] = (args->pmcr_owner << 25 ) |
                                          (1 << 24) |
                                          (G_pgpe_pstate_record.globalPSCurr << 16) |
                                          (in32(OCB_QCSR) >> 16);
            p9_pgpe_optrace(PRC_START_STOP);
        }
        else
        {
            if(G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT
               || G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED)
            {
                PK_TRACE_DBG("START_STOP: Already Stopped");
                args->msg_cb.rc = PGPE_RC_REQ_PSTATE_ALREADY_STOPPED;
                G_pgpe_optrace_data.word[0] = PGPE_OP_PSTATE_STOP_IN_PSTATE_STOPPED;
                p9_pgpe_optrace(UNEXPECTED_ERROR);
            }
            else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
            {
                p9_pgpe_pstate_stop();
                args->msg_cb.rc = PGPE_RC_SUCCESS;
                G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.globalPSCurr << 16) |
                                              (in32(OCB_QCSR) >> 16);
                p9_pgpe_optrace(PRC_START_STOP);
            }
        }
    }

    if (ack_now == 1)
    {
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd, IPC_RC_SUCCESS);
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_ack = 0;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_processing = 0;
        p9_pgpe_optrace(ACK_START_STOP);
    }

    PK_TRACE_DBG("PTH: Start/Stop End");
}


//
//p9_pgpe_process_clip_updt
//
void p9_pgpe_process_clip_updt()
{
    PK_TRACE_DBG("PTH: Clip Updt Entry");

    uint32_t q, ack_now = 1;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd;
    ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;

    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_processing = 0;

    if(G_pgpe_header_data->g_pgpe_qm_flags & BIT16(PGPE_HEADER_FLAGS_OCC_IPC_IMMEDIATE_MODE))
    {
        PK_TRACE_DBG("PTH: Clip Updt Imme");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.psClipMax[0] << 24) |
                                      (G_pgpe_pstate_record.psClipMax[1] << 16) |
                                      (G_pgpe_pstate_record.psClipMax[2] << 8)  |
                                      (G_pgpe_pstate_record.psClipMax[3]);
        G_pgpe_optrace_data.word[1] = (G_pgpe_pstate_record.psClipMax[4] << 24) |
                                      (G_pgpe_pstate_record.psClipMax[5] << 16) |
                                      (G_pgpe_pstate_record.psClipMin[0] << 8)  |
                                      (G_pgpe_pstate_record.psClipMin[1]);
        G_pgpe_optrace_data.word[2] = (G_pgpe_pstate_record.psClipMin[2] << 24) |
                                      (G_pgpe_pstate_record.psClipMin[3] << 16) |
                                      (G_pgpe_pstate_record.psClipMin[4] << 8)  |
                                      (G_pgpe_pstate_record.psClipMin[5]);
        p9_pgpe_optrace(PRC_CLIP_UPDT);
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
    {
        PK_TRACE_DBG("PTH: Clip Updt PMSUSP/Safe");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;
        G_pgpe_optrace_data.word[0] = PGPE_OP_CLIP_UPDT_IN_PM_SUSP;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
    }
    else
    {
        //IPC from 405 treats clip_min as Pstate for min frequency(higher numbered)
        //and clip_max as Pstate for max frequency(lower numbered). However, PGPE
        //Hcode stores them with reverse interpretation.
        for (q = 0; q < MAX_QUADS; q++)
        {
            if (G_pgpe_pstate_record.psClipMax[q] != args->ps_val_clip_min[q])
            {
                G_pgpe_pstate_record.psClipMax[q] = args->ps_val_clip_min[q];
                G_pgpe_pstate_record.pendingPminClipBcast = 1;
            }

            if (G_pgpe_pstate_record.psClipMin[q] != args->ps_val_clip_max[q])
            {
                G_pgpe_pstate_record.psClipMin[q] = args->ps_val_clip_max[q];
                G_pgpe_pstate_record.pendingPmaxClipBcast = 1;
            }
        }

        G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.psClipMax[0] << 24) |
                                      (G_pgpe_pstate_record.psClipMax[1] << 16) |
                                      (G_pgpe_pstate_record.psClipMax[2] << 8)  |
                                      (G_pgpe_pstate_record.psClipMax[3]);
        G_pgpe_optrace_data.word[1] = (G_pgpe_pstate_record.psClipMax[4] << 24) |
                                      (G_pgpe_pstate_record.psClipMax[5] << 16) |
                                      (G_pgpe_pstate_record.psClipMin[0] << 8) |
                                      (G_pgpe_pstate_record.psClipMin[1]);
        G_pgpe_optrace_data.word[2] = (G_pgpe_pstate_record.psClipMin[2] << 24) |
                                      (G_pgpe_pstate_record.psClipMin[3] << 16) |
                                      (G_pgpe_pstate_record.psClipMin[4] << 8)  |
                                      (G_pgpe_pstate_record.psClipMin[5]);
        p9_pgpe_optrace(PRC_CLIP_UPDT);

        p9_pgpe_pstate_apply_clips(&G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT]);

        //If CLIP_UPDT before Pstate Start, then ack now. Otherwise, ACK
        //after actuation
        if (G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT || G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED)
        {
            args->msg_cb.rc = PGPE_RC_SUCCESS;
        }
        else
        {
            ack_now = 0;
        }
    }


    //Clips ACKed in error cases or if Pstates are not active yet
    if (ack_now == 1)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd, IPC_RC_SUCCESS);
        p9_pgpe_optrace(ACK_CLIP_UPDT);
    }

    PK_TRACE_DBG("PTH: Clip Upd Exit");
}

//
//p9_pgpe_process_wof_ctrl
//
void p9_pgpe_process_wof_ctrl()
{
    PK_TRACE_DBG("PTH: WOF Ctrl Enter");

    uint32_t ack_now = 1;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].cmd;
    ipcmsg_wof_control_t* args = (ipcmsg_wof_control_t*)async_cmd->cmd_data;


    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_processing = 0;

    if((G_pgpe_header_data->g_pgpe_qm_flags & BIT16(PGPE_HEADER_FLAGS_OCC_IPC_IMMEDIATE_MODE)) ||
       (G_pgpe_header_data->g_pgpe_qm_flags & BIT16(PGPE_HEADER_FLAGS_WOF_IPC_IMMEDIATE_MODE)))
    {
        PK_TRACE_DBG("PTH: WOF Ctrl Imme");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) |
                                      (args->action << 16) |
                                      (in32(OCB_QCSR) >> 16);
        p9_pgpe_optrace(PRC_WOF_CTRL);
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
    {
        PK_TRACE_DBG("PTH: WOF Ctrl PMSUSP/Safe");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;
        G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_CTRL_IN_PM_SUSP;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
    }
    else if(G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT || G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED)
    {
        PK_TRACE_DBG("PTH: WOF Ctrl PSStop/Init");
        args->msg_cb.rc = PGPE_RC_PSTATES_NOT_STARTED;
        G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_CTRL_IN_PSTATE_STOPPED;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
    }
    else
    {

        //If WOF ON
        if (args->action == PGPE_ACTION_WOF_ON)
        {
            if(G_pgpe_pstate_record.wofEnabled == 0)
            {
                PK_TRACE_DBG("PTH: WOF Ctrl=ON,WOF_Enabled=0");

                if ((G_pgpe_header_data->g_pgpe_qm_flags & BIT16(PGPE_HEADER_FLAGS_ENABLE_VRATIO)) ||
                    (G_pgpe_header_data->g_pgpe_qm_flags & BIT16(PGPE_HEADER_FLAGS_VRATIO_MODIFIER)))
                {
#if SGPE_IPC_ENABLED == 1
                    uint32_t rc;
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
                        PGPE_PANIC_AND_TRACE(PGPE_SGPE_IPC_SEND_BAD_RC);
                    }

                    //Wait for SGPE ACK with alive Quads
                    pk_irq_vec_restore(&ctx);
                    pk_semaphore_pend(&(G_pgpe_pstate_record.sem_actuate), PK_WAIT_FOREVER);

                    if (G_sgpe_control_updt.fields.return_code == IPC_SGPE_PGPE_RC_SUCCESS)
                    {
                        //Update Shared Memory Region
                        G_pgpe_pstate_record.pQuadState0->fields.active_cores = G_sgpe_control_updt.fields.active_cores >> 8;
                        G_pgpe_pstate_record.pQuadState1->fields.active_cores = (G_sgpe_control_updt.fields.active_cores & 0xFF) << 8;
                        G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads = G_sgpe_control_updt.fields.active_quads;
                    }
                    else
                    {
                        PGPE_PANIC_AND_TRACE(PGPE_SGPE_CTRL_STOP_UPDT_BAD_ACK);
                    }

#endif// _SGPE_IPC_ENABLED_
                }

                G_pgpe_pstate_record.wofEnabled = 1;
                p9_pgpe_pstate_calc_wof();
                ack_now = 0;
                G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) |
                                              (args->action << 16) |
                                              (in32(OCB_QCSR) >> 16);
                p9_pgpe_optrace(PRC_WOF_CTRL);
            }
            else
            {
                args->msg_cb.rc = PGPE_RC_WOF_ALREADY_ON;
                PK_TRACE_DBG("PTH: WOF Ctrl=ON,WOF_Enabled=1");
                G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_CTRL_ENABLE_WHEN_ENABLED;
                p9_pgpe_optrace(UNEXPECTED_ERROR);
            }
        }
        else if (args->action == PGPE_ACTION_WOF_OFF)
        {
            if(G_pgpe_pstate_record.wofEnabled == 1)
            {
                PK_TRACE_DBG("PTH: WOF Ctrl=OFF,WOF_Enabled=1");

                if ((G_pgpe_header_data->g_pgpe_qm_flags & BIT16(PGPE_HEADER_FLAGS_ENABLE_VRATIO)) ||
                    (G_pgpe_header_data->g_pgpe_qm_flags & BIT16(PGPE_HEADER_FLAGS_VRATIO_MODIFIER)))
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
                        PGPE_PANIC_AND_TRACE(PGPE_SGPE_IPC_SEND_BAD_RC);
                    }

                    //Wait for SGPE ACK with alive Quads
                    pk_irq_vec_restore(&ctx);
                    pk_semaphore_pend(&(G_pgpe_pstate_record.sem_actuate), PK_WAIT_FOREVER);

                    if (G_sgpe_control_updt.fields.return_code == SGPE_PGPE_IPC_RC_SUCCESS)
                    {
                        //Update Shared Memory Region
                        G_pgpe_pstate_record.pQuadState0->fields.active_cores = G_sgpe_control_updt.fields.active_cores >> 8;
                        G_pgpe_pstate_record.pQuadState1->fields.active_cores = (G_sgpe_control_updt.fields.active_cores & 0xFF) << 8;
                        G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads = G_sgpe_control_updt.fields.active_quads;
                    }
                    else
                    {
                        PGPE_PANIC_AND_TRACE(PGPE_SGPE_CTRL_STOP_UPDT_BAD_ACK);
                    }
                }

#endif// _SGPE_IPC_ENABLED_

                G_pgpe_pstate_record.wofEnabled = 0;
                G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) |
                                              (args->action << 16) | (in32(OCB_QCSR) >> 16);
                p9_pgpe_optrace(PRC_WOF_CTRL);
            }
            else
            {
                args->msg_cb.rc = PGPE_RC_WOF_ALREADY_OFF;
                PK_TRACE_DBG("PTH: WOF Ctrl=OFF,WOF_Enabled=0");
                G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_CTRL_DISABLE_WHEN_DISABLED;
                p9_pgpe_optrace(UNEXPECTED_ERROR);
            }
        }
    }

    if (ack_now == 1)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].cmd, IPC_RC_SUCCESS);
        p9_pgpe_optrace(ACK_WOF_CTRL);
    }

    PK_TRACE_DBG("PTH: WOF Ctrl Exit");
}

//
//p9_pgpe_process_wof_vfrt
//
void p9_pgpe_process_wof_vfrt()
{
    PK_TRACE_DBG("PTH: WOF VFRT Enter");
    uint32_t ack_now = 1;

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].cmd;
    ipcmsg_wof_vfrt_t* args = (ipcmsg_wof_vfrt_t*)async_cmd->cmd_data;

    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_processing = 0;

    if((G_pgpe_header_data->g_pgpe_qm_flags & BIT16(PGPE_HEADER_FLAGS_OCC_IPC_IMMEDIATE_MODE)) ||
       (G_pgpe_header_data->g_pgpe_qm_flags & BIT16(PGPE_HEADER_FLAGS_WOF_IPC_IMMEDIATE_MODE)))
    {
        PK_TRACE_DBG("PTH: WOF VFRT Imme");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        G_pgpe_optrace_data.word[0] = 0;
        G_pgpe_optrace_data.word[1] = 0;
        p9_pgpe_optrace(PRC_WOF_VFRT);
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
    {
        PK_TRACE_DBG("PTH: WOF VFRT PMSUSP/Safe");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;
        G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_VFRT_IN_SAFE_MODE;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
    }
    else if(G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED || G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT)
    {
        PK_TRACE_DBG("PTH: WOF VFRT PSStop/Init");
        args->msg_cb.rc = PGPE_RC_PSTATES_NOT_STARTED;
        G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_VFRT_IN_PSTATE_STOPPED;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
    }
    else
    {
        if(args->homer_vfrt_ptr == NULL)
        {
            PK_TRACE_ERR("PTH: NULL VFRT Ptr");
            PGPE_PANIC_AND_TRACE(PGPE_NULL_VFRT_POINTER);
        }

        //Update VFRT pointer
        G_pgpe_pstate_record.pVFRT = args->homer_vfrt_ptr;
        PK_TRACE_INF("PTH: VFRT Table");
        PK_TRACE_INF("Mgc=0x%x, ver=%d, vdnid=%x,VddQAId=%x", G_pgpe_pstate_record.pVFRT->vfrtHeader.magic_number,
                     G_pgpe_pstate_record.pVFRT->vfrtHeader.type_version,
                     G_pgpe_pstate_record.pVFRT->vfrtHeader.res_vdnId,
                     G_pgpe_pstate_record.pVFRT->vfrtHeader.VddId_QAId);
        G_pgpe_optrace_data.word[0] = ((G_pgpe_pstate_record.pVFRT->vfrtHeader.magic_number << 16) |
                                       G_pgpe_pstate_record.pVFRT->vfrtHeader.reserved);
        G_pgpe_optrace_data.word[1] = ((G_pgpe_pstate_record.pVFRT->vfrtHeader.type_version << 24) |
                                       (G_pgpe_pstate_record.pVFRT->vfrtHeader.res_vdnId    << 16) |
                                       (G_pgpe_pstate_record.pVFRT->vfrtHeader.VddId_QAId   << 8)  |
                                       G_pgpe_pstate_record.pVFRT->vfrtHeader.rsvd_QAId);
        p9_pgpe_optrace(PRC_WOF_VFRT);

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
        p9_pgpe_optrace(ACK_WOF_VFRT);
    }

    PK_TRACE_DBG("PTH: WOF VFRT Exit");
}

//
//p9_pgpe_process_set_pmcr_req
//
void p9_pgpe_process_set_pmcr_req()
{
    PK_TRACE_DBG("PTH: Set PMCR Enter");

    uint32_t q, c;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].cmd;
    ipcmsg_set_pmcr_t* args = (ipcmsg_set_pmcr_t*)async_cmd->cmd_data;

    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].pending_processing = 0;

    if(G_pgpe_header_data->g_pgpe_qm_flags & BIT16(PGPE_HEADER_FLAGS_OCC_IPC_IMMEDIATE_MODE))
    {
        PK_TRACE_DBG("PTH: Set PMCR Imme");
        p9_pgpe_optrace(PRC_SET_PMCR);
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.quadPSTarget[0] << 24) |
                                      (G_pgpe_pstate_record.quadPSTarget[1] << 16) |
                                      (G_pgpe_pstate_record.quadPSTarget[2] << 8) |
                                      G_pgpe_pstate_record.quadPSTarget[3];
        G_pgpe_optrace_data.word[1] = (G_pgpe_pstate_record.quadPSTarget[4] << 24) |
                                      (G_pgpe_pstate_record.quadPSTarget[5] << 16) |
                                      G_pgpe_pstate_record.globalPSTarget << 8;
        p9_pgpe_optrace(PRC_SET_PMCR);
    }
    else  if(G_pgpe_pstate_record.pmcrOwner != PMCR_OWNER_OCC)
    {
        PK_TRACE_DBG("PTH: !OCC_PMCR_OWNER");
        args->msg_cb.rc = PGPE_RC_OCC_NOT_PMCR_OWNER;
        G_pgpe_optrace_data.word[0] = PGPE_OP_SET_PMCR_AND_PMCR_OWNER_NOT_OCC;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT || G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED)
    {
        PK_TRACE_DBG("PTH: Pstates !Started");
        args->msg_cb.rc = PGPE_RC_PSTATES_NOT_STARTED;
        G_pgpe_optrace_data.word[0] = PGPE_OP_SET_PMCR_IN_PSTATE_STOPPED;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPENDED ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING ||
             G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
    {
        PK_TRACE_DBG("PTH: Set PMCR in PM_Susp/Safe");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;
        G_pgpe_optrace_data.word[0] = PGPE_OP_SET_PMCR_IN_PM_SUSP;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
    }
    else
    {
        PK_TRACE_DBG("PTH: Upd coresPSReq");

        for (q = 0; q < MAX_QUADS; q++)
        {
            for (c = (q * CORES_PER_QUAD); c < (q + 1)*CORES_PER_QUAD; c++)
            {
                G_pgpe_pstate_record.coresPSRequest[c] = (args->pmcr[q] >> 48) & 0x00FF;
            }

            PK_TRACE_DBG("PTH: coresPSReq: 0x%x", G_pgpe_pstate_record.coresPSRequest[q * CORES_PER_QUAD]);
        }

        //PGPE Trace(PRC_SET_PMCR)
        G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.coresPSRequest[0] << 24) |
                                      (G_pgpe_pstate_record.coresPSRequest[4] << 16) |
                                      (G_pgpe_pstate_record.coresPSRequest[8] << 8) |
                                      G_pgpe_pstate_record.coresPSRequest[12];
        G_pgpe_optrace_data.word[1] = (G_pgpe_pstate_record.coresPSRequest[16] << 24) |
                                      (G_pgpe_pstate_record.coresPSRequest[20] << 16) |
                                      G_pgpe_pstate_record.globalPSCurr << 8;
        p9_pgpe_optrace(PRC_SET_PMCR);

        p9_pgpe_pstate_do_auction();
        p9_pgpe_pstate_apply_clips();

        args->msg_cb.rc = PGPE_RC_SUCCESS; //Return Code
    }

    //Ack back to OCC
    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].pending_ack = 0;
    ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].cmd, IPC_RC_SUCCESS);

    PK_TRACE_DBG("PTH: Set PMCR Exit");
}
