/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_ipc_handlers.c $ */
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
#include "ppe42_cache.h"
#include "ipc_api.h"
#include "ipc_async_cmd.h"
#include "p9_pgpe_header.h"
#include "pstate_pgpe_occ_api.h"
#include "ipc_messages.h"
#include "occhw_shared_data.h"
#include "p9_pgpe_ipc_handlers.h"
#include "p9_pgpe_pstate.h"
#include "qppm_firmware_registers.h"
#include "qppm_register_addresses.h"

//
//#Defines
//

//
//External Global Data
//
extern ipc_req_t G_ipc_pend_tbl[MAX_IPC_PEND_TBL_ENTRIES];
extern uint32_t G_pstatesStatus;
extern PgpePstateRecord G_pgpe_pstate_record;
extern uint32_t G_already_sem_posted;
//extern uint8_t G_pmcrOwner;
extern PgpeHeader_t* G_pgpe_header_data;

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

    for (i = 0; i < MAX_IPC_PEND_TBL_ENTRIES; i++)
    {
        G_ipc_pend_tbl[i].cmd = NULL;
        G_ipc_pend_tbl[i].pending_ack = 0;
        G_ipc_pend_tbl[i].pending_processing = 0;
    }

    G_already_sem_posted = 0;
}

//
//p9_pgpe_ipc_405_start_stop
//
//IPC function called upon receiving 'Pstate Start/Stop' IPC from OCC
//
void p9_pgpe_ipc_405_start_stop(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_DBG("START_STOP: Entry\n");

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;

    if(G_pgpe_header_data->g_pgpe_qm_flags & OCC_IPC_IMMEDIATE_RESP)
    {
        PK_TRACE_DBG("START_STOP: Imm\n");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
        G_ipc_pend_tbl[IPC_PEND_PSTATE_START].pending_ack = 0;
        G_ipc_pend_tbl[IPC_PEND_PSTATE_START].pending_processing = 0;

        //Yes, here we post to process thread when START/STOP is rcv.
        //This is done to ensure that pk_irq_vec_restore is called correctly
        //We can call it here, but other IPCs could be processed in this invocation
        //of IPC interrupt handler and pk_irq_vec_restore can get called twice.
        //Much cleaner to call it always from process thread.
        if (G_already_sem_posted == 0)
        {
            pk_semaphore_post(&G_pgpe_pstate_record.sem_process_req);
            G_already_sem_posted  = 1;
        }
    }
    else
    {
        //START
        if (args->action == PGPE_ACTION_PSTATE_START)
        {
            if (G_ipc_pend_tbl[IPC_PEND_PSTATE_START].pending_ack == 0)
            {
                if(G_pstatesStatus == PSTATE_DISABLE)
                {
                    PK_TRACE_DBG("START_STOP: Start Rcvd\n");

                    //Add task
                    G_ipc_pend_tbl[IPC_PEND_PSTATE_START].cmd = cmd;
                    G_ipc_pend_tbl[IPC_PEND_PSTATE_START].pending_ack = 1;
                    G_ipc_pend_tbl[IPC_PEND_PSTATE_START].pending_processing = 0;

                    //Post to Actuate Thread
                    pk_semaphore_post(&G_pgpe_pstate_record.sem_actuate);
                }
                else
                {
                    PK_TRACE_DBG("START_STOP: Pstate Already Started\n");
                    args->msg_cb.rc = PGPE_RC_REQ_PSTATE_ALREADY_STARTED;
                    ipc_send_rsp(cmd, IPC_RC_SUCCESS);
                }
            }
            else
            {
                PK_TRACE_DBG("START_STOP: Duplicate\n");
                args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
                ipc_send_rsp(cmd, IPC_RC_SUCCESS);
            }
        }
        //STOP
        else if(args->action == PGPE_ACTION_PSTATE_STOP)
        {
            PK_TRACE_DBG("START_STOP: Stop Rcvd\n");

            if (G_ipc_pend_tbl[IPC_PEND_PSTATE_STOP].pending_ack == 0)
            {
                if(G_pstatesStatus == PSTATE_DISABLE)
                {
                    PK_TRACE_DBG("START_STOP: Pstate Already Stopped\n");
                    args->msg_cb.rc = PGPE_RC_REQ_PSTATE_ALREADY_SUSPENDED;
                    ipc_send_rsp(cmd, IPC_RC_SUCCESS);
                }
                else
                {
                    G_pstatesStatus = PSTATE_DISABLE;
                    G_ipc_pend_tbl[IPC_PEND_PSTATE_STOP].cmd = cmd;
                    G_ipc_pend_tbl[IPC_PEND_PSTATE_STOP].pending_ack = 1;
                    G_ipc_pend_tbl[IPC_PEND_PSTATE_STOP].pending_processing = 0;

                }
            }
            else
            {
                PK_TRACE_DBG("START_STOP: Duplicate\n");
                args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
                ipc_send_rsp(cmd, IPC_RC_SUCCESS);
            }
        }
    }

    PK_TRACE_DBG("START_STOP: Exit\n");
}

//
//p9_pgpe_ipc_405_clips
//
//IPC function called upon receiving 'Clip Update' IPC from OCC
//
void p9_pgpe_ipc_405_clips(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_DBG("405_CLIPS: Entry\n");
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    ipcmsg_set_pmcr_t* args = (ipcmsg_set_pmcr_t*)async_cmd->cmd_data;

    if (G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT].pending_ack == 0)
    {
        G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT].cmd = cmd;
        G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT].pending_processing = 1;
        G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT].pending_ack = 1;
    }
    else
    {
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
    }

    if (G_already_sem_posted == 0)
    {
        pk_semaphore_post(&G_pgpe_pstate_record.sem_process_req);
        G_already_sem_posted  = 1;
    }

    PK_TRACE_DBG("405_CLIPS: Exit\n");
}

//
//p9_pgpe_ipc_405_set_pmcr
//
//IPC function called upon receiving 'Set PMCR' IPC from OCC
//
void p9_pgpe_ipc_405_set_pmcr(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_DBG("405_SET_PMCR: Entry\n");
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    ipcmsg_set_pmcr_t* args = (ipcmsg_set_pmcr_t*)async_cmd->cmd_data;

    if (G_ipc_pend_tbl[IPC_PEND_SET_PMCR_REQ].pending_ack == 0)
    {
        G_ipc_pend_tbl[IPC_PEND_SET_PMCR_REQ].cmd = cmd;
        G_ipc_pend_tbl[IPC_PEND_SET_PMCR_REQ].pending_processing = 1;
        G_ipc_pend_tbl[IPC_PEND_SET_PMCR_REQ].pending_ack = 1;
    }
    else
    {
        PK_TRACE_DBG("405_SET_PMCR: Duplicate\n");
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
    }

    if (G_already_sem_posted == 0)
    {
        pk_semaphore_post(&G_pgpe_pstate_record.sem_process_req);
        G_already_sem_posted  = 1;
    }

    PK_TRACE_DBG("405_SET_PMCR: Exit\n");
}

//
//p9_pgpe_ipc_405_wof_control
//
//IPC function called upon receiving 'WOF Control' IPC from OCC
//
void p9_pgpe_ipc_405_wof_control(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_DBG("405_WOF_CTRL: Entry\n");
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    ipcmsg_wof_control_t* args = (ipcmsg_wof_control_t*)async_cmd->cmd_data;

    if (G_ipc_pend_tbl[IPC_PEND_WOF_CTRL].pending_ack == 0)
    {
        G_ipc_pend_tbl[IPC_PEND_WOF_CTRL].cmd = cmd;
        G_ipc_pend_tbl[IPC_PEND_WOF_CTRL].pending_processing = 1;
        G_ipc_pend_tbl[IPC_PEND_WOF_CTRL].pending_ack = 1;
    }
    else
    {
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
    }

    if (G_already_sem_posted == 0)
    {
        pk_semaphore_post(&G_pgpe_pstate_record.sem_process_req);
        G_already_sem_posted  = 1;
    }

    PK_TRACE_DBG("405_WOF_CTRL: Exit\n");
}

//
//p9_pgpe_ipc_405_wof_vfrt
//
//IPC function called upon receiving 'WOF VFRT' IPC from OCC
//
void p9_pgpe_ipc_405_wof_vfrt(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_DBG("405_WOF_VFRT: Entry\n");
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    ipcmsg_wof_vfrt_t* args = (ipcmsg_wof_vfrt_t*)async_cmd->cmd_data;

    if (G_ipc_pend_tbl[IPC_PEND_WOF_VFRT].pending_ack == 0)
    {
        G_ipc_pend_tbl[IPC_PEND_WOF_VFRT].cmd = cmd;
        G_ipc_pend_tbl[IPC_PEND_WOF_VFRT].pending_processing = 1;
        G_ipc_pend_tbl[IPC_PEND_WOF_VFRT].pending_ack = 1;
    }
    else
    {
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
    }

    if (G_already_sem_posted == 0)
    {
        pk_semaphore_post(&G_pgpe_pstate_record.sem_process_req);
        G_already_sem_posted  = 1;
    }

    PK_TRACE_DBG("405_WOF_VFRT: Exit\n");
}

//
//p9_pgpe_ipc_sgpe_suspend_pstates
//
//IPC function called upon receiving 'Suspend PStates' IPC from SGPE
//
void p9_pgpe_ipc_sgpe_suspend_pstates(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_DBG("SGPE_SUSPEND_PSTATES: Entry\n");

    if (G_ipc_pend_tbl[IPC_PEND_SGPE_SUSPEND_PSTATES].pending_ack == 0 &&
        G_ipc_pend_tbl[IPC_PEND_SGPE_SUSPEND_PSTATES].pending_processing == 0)
    {
        G_ipc_pend_tbl[IPC_PEND_SGPE_SUSPEND_PSTATES].cmd = cmd;
        G_ipc_pend_tbl[IPC_PEND_SGPE_SUSPEND_PSTATES].pending_processing = 1;
        G_ipc_pend_tbl[IPC_PEND_SGPE_SUSPEND_PSTATES].pending_ack = 1;
    }
    else
    {
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
        ipcmsg_s2p_suspend_pstate_t* args =
            (ipcmsg_s2p_suspend_pstate_t*)async_cmd->cmd_data;
        args->fields.return_code = SGPE_PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
    }

    if (G_already_sem_posted == 0)
    {
        pk_semaphore_post(&G_pgpe_pstate_record.sem_process_req);
        G_already_sem_posted  = 1;
    }

    PK_TRACE_DBG("SGPE_SUSPEND_PSTATES: Exit\n");
}

//
//p9_pgpe_ipc_sgpe_updt_active_cores
//
//IPC function called upon receiving 'Update Active Cores' IPC from SGPE
//
void p9_pgpe_ipc_sgpe_updt_active_cores(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_DBG("SGPE_UPDT_CORES: Entry\n");

    if (G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack == 0 &&
        G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing == 0)
    {
        G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd = cmd;
        G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing = 1;
        G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack = 1;
    }
    else
    {
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
        ipcmsg_s2p_update_active_cores_t* args =
            (ipcmsg_s2p_update_active_cores_t*)async_cmd->cmd_data;
        args->fields.return_code  = SGPE_PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
    }

    if (G_already_sem_posted == 0)
    {
        pk_semaphore_post(&G_pgpe_pstate_record.sem_process_req);
        G_already_sem_posted  = 1;
    }

    PK_TRACE_DBG("SGPE_UPDT_CORES: Exit\n");
}

//
//p9_pgpe_ipc_sgpe_updt_active_quads
//
//IPC function called upon receiving 'Update Active Quads' IPC from SGPE
//
void p9_pgpe_ipc_sgpe_updt_active_quads(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_DBG("SGPE_UPDT_QUADS: Entry\n");

    if (G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack == 0 &&
        G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_processing == 0 &&
        G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack == 0 &&
        G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing == 0)
    {
        G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd = cmd;
        G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_processing = 1;
        G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 1;

    }
    else
    {
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
        ipcmsg_s2p_update_active_quads_t* args =
            (ipcmsg_s2p_update_active_quads_t*)async_cmd->cmd_data;
        args->fields.return_code = SGPE_PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
    }

    if (G_already_sem_posted == 0)
    {
        pk_semaphore_post(&G_pgpe_pstate_record.sem_process_req);
        G_already_sem_posted  = 1;
    }

    PK_TRACE_DBG("SGPE_UPDT_QUADS: Exit\n");
}
