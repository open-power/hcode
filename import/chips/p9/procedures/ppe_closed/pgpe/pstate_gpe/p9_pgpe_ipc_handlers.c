/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_ipc_handlers.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2018                                                    */
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
#include "ppe42_cache.h"
#include "ipc_api.h"
#include "ipc_async_cmd.h"
#include "p9_pgpe_header.h"
#include "pstate_pgpe_occ_api.h"
#include "wof_sgpe_pgpe_api.h"
#include "occhw_shared_data.h"
#include "p9_pgpe_ipc_handlers.h"
#include "p9_pgpe_pstate.h"
#include "qppm_firmware_registers.h"
#include "qppm_register_addresses.h"
#include "p9_pgpe_optrace.h"

//
//#Defines
//

//
//External Global Data
//
extern PgpeHeader_t* G_pgpe_header_data;
extern PgpePstateRecord G_pgpe_pstate_record;
extern TraceData_t G_pgpe_optrace_data;

//
//p9_pgpe_ipc_init
//
//Called during PGPE initialziation to enable IPC functions
//and init task list
//
void p9_pgpe_ipc_init()
{
    uint32_t i;

    ipc_init();
    ipc_enable();
    ipc_set_done_hook(*p9_pgpe_ipc_irq_done_hook);

    for (i = 0; i < MAX_IPC_PEND_TBL_ENTRIES; i++)
    {
        G_pgpe_pstate_record.ipcPendTbl[i].cmd = NULL;
        G_pgpe_pstate_record.ipcPendTbl[i].pending_ack = 0;
        G_pgpe_pstate_record.ipcPendTbl[i].pending_processing = 0;
    }

}

//
//p9_pgpe_ipc_irq_done_hook
//
void p9_pgpe_ipc_irq_done_hook()
{
    PK_TRACE_INF("IPC: Done Hook");

    if (G_pgpe_pstate_record.semProcessPosted == 0)
    {
        PK_TRACE_INF("IPC: Done Hook Posted");
        G_pgpe_pstate_record.semProcessPosted = 1;
        pk_semaphore_post(&G_pgpe_pstate_record.sem_process_req);
    }

    G_pgpe_pstate_record.semProcessSrc |= SEM_PROCESS_SRC_IPI2_IRQ;
}

//
//p9_pgpe_ipc_405_start_stop
//
//IPC function called upon receiving 'Pstate Start/Stop' IPC from OCC
//
void p9_pgpe_ipc_405_start_stop(ipc_msg_t* cmd, void* arg)
{

    PK_TRACE_INF("IPC: Start/Stop");

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;

    if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_ack == 0)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd = cmd;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_processing = 1;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_ack = 1;
    }
    else
    {
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
        G_pgpe_optrace_data.word[0] = PGPE_OP_PSTATE_START_STOP_WHILE_PENDING;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
        PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_IPC_ACK_BAD_RC);
    }
}

//
//p9_pgpe_ipc_405_clips
//
//IPC function called upon receiving 'Clip Update' IPC from OCC
//
void p9_pgpe_ipc_405_clips(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC: Clips");
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;

    if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack == 0)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd = cmd;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_processing = 1;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack = 1;
    }
    else
    {
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
        G_pgpe_optrace_data.word[0] = PGPE_OP_CLIP_UPDT_IN_WHILE_PENDING;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
        PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_IPC_ACK_BAD_RC);
    }
}

//
//p9_pgpe_ipc_405_set_pmcr
//
//IPC function called upon receiving 'Set PMCR' IPC from OCC
//
void p9_pgpe_ipc_405_set_pmcr(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC: Set PMCR");

    if(in32(G_OCB_OCCFLG2) & BIT32(OCCFLG2_PGPE_HCODE_PSTATE_REQ_ERR_INJ))
    {
        PK_TRACE_ERR("SET PMCR IPC ERROR INJECT TRAP");
        PK_PANIC(PGPE_SET_PMCR_TRAP_INJECT);
    }

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    ipcmsg_set_pmcr_t* args = (ipcmsg_set_pmcr_t*)async_cmd->cmd_data;

    if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].pending_ack == 0)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].cmd = cmd;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].pending_processing = 1;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].pending_ack = 1;
    }
    else
    {
        PK_TRACE_DBG("IPC: Set PMCR while pending");
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
        G_pgpe_optrace_data.word[0] = PGPE_OP_SET_PMCR_WHILE_PENDING;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
        PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_IPC_ACK_BAD_RC);
    }
}

//
//p9_pgpe_ipc_405_wof_control
//
//IPC function called upon receiving 'WOF Control' IPC from OCC
//
void p9_pgpe_ipc_405_wof_control(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC: WOF CTRL");
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    ipcmsg_wof_control_t* args = (ipcmsg_wof_control_t*)async_cmd->cmd_data;

    if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack == 0)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].cmd = cmd;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_processing = 1;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack = 1;
    }
    else
    {
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
        G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_CTRL_WHILE_PENDING;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
        PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_IPC_ACK_BAD_RC);
    }
}

//
//p9_pgpe_ipc_405_wof_vfrt
//
//IPC function called upon receiving 'WOF VFRT' IPC from OCC
//
void p9_pgpe_ipc_405_wof_vfrt(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC:_WOF VFRT");
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    ipcmsg_wof_vfrt_t* args = (ipcmsg_wof_vfrt_t*)async_cmd->cmd_data;

    if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack == 0)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].cmd = cmd;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_processing = 1;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack = 1;
    }
    else
    {
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
        G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_VFRT_WHILE_PENDING;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
        PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_IPC_ACK_BAD_RC);
    }
}

//
//p9_pgpe_ipc_sgpe_updt_active_cores
//
//IPC function called upon receiving 'Update Active Cores' IPC from SGPE
//
void p9_pgpe_ipc_sgpe_updt_active_cores(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC: Updt Cores");

    if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack == 0 &&
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing == 0)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd = cmd;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing = 1;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack = 1;
    }
    else
    {
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
        ipcmsg_s2p_update_active_cores_t* args =
            (ipcmsg_s2p_update_active_cores_t*)async_cmd->cmd_data;
        args->fields.return_code  = IPC_SGPE_PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
        G_pgpe_optrace_data.word[0] = PGPE_OP_CORES_ACTIVE_WHILE_PENDING;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
        PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_IPC_ACK_BAD_RC);
    }
}

//
//p9_pgpe_ipc_sgpe_updt_active_quads
//
//IPC function called upon receiving 'Update Active Quads' IPC from SGPE
//
void p9_pgpe_ipc_sgpe_updt_active_quads(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC: Updt Quads");

    if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack == 0 &&
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_processing == 0 &&
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack == 0 &&
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing == 0)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd = cmd;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_processing = 1;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 1;

    }
    else
    {
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
        ipcmsg_s2p_update_active_quads_t* args =
            (ipcmsg_s2p_update_active_quads_t*)async_cmd->cmd_data;
        args->fields.return_code = IPC_SGPE_PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
        G_pgpe_optrace_data.word[0] = PGPE_OP_QUADS_ACTIVE_WHILE_PENDING;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
        PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_IPC_ACK_BAD_RC);
    }
}


void p9_pgpe_ipc_ack_sgpe_ctrl_stop_updt(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC: Ctrl Stop Updt ACKed");

    G_pgpe_pstate_record.ipcPendTbl[IPC_ACK_CTRL_STOP_UPDT].cmd = cmd;
    G_pgpe_pstate_record.ipcPendTbl[IPC_ACK_CTRL_STOP_UPDT].pending_processing = 1;
}

void p9_pgpe_ipc_ack_sgpe_suspend_stop(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC: Suspend Stop ACKed");

    G_pgpe_pstate_record.ipcPendTbl[IPC_ACK_SUSPEND_STOP].cmd = cmd;
    G_pgpe_pstate_record.ipcPendTbl[IPC_ACK_SUSPEND_STOP].pending_processing = 1;
}
