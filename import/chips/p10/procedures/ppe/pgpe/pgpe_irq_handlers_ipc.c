/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_irq_handlers_ipc.c $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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
#include "pgpe.h"
#include "pgpe_irq_handlers.h"
#include "pgpe_event_table.h"


// Function table for multi target (common) functions
IPC_MT_FUNC_TABLE_START
IPC_HANDLER_DEFAULT                          // 0
IPC_HANDLER_DEFAULT                          // 1
IPC_HANDLER_DEFAULT                          // 2
IPC_HANDLER_DEFAULT                          // 3
IPC_HANDLER_DEFAULT                          // 4
IPC_HANDLER_DEFAULT                          // 5
IPC_HANDLER_DEFAULT                          // 6
IPC_HANDLER_DEFAULT                          // 7
IPC_MT_FUNC_TABLE_END
//

// IPC function table for single target functions
IPC_ST_FUNC_TABLE_START
//(function, arg)
IPC_HANDLER_DEFAULT                                 // 0
IPC_HANDLER(pgpe_irq_ipc_405_start_stop, NULL)      // 1
IPC_HANDLER(pgpe_irq_ipc_405_clips, NULL)           // 2
IPC_HANDLER(pgpe_irq_ipc_405_set_pmcr, NULL)        // 3
IPC_HANDLER(pgpe_irq_ipc_405_wof_control, NULL)     // 4
IPC_HANDLER(pgpe_irq_ipc_405_wof_vfrt, NULL)        // 5
IPC_HANDLER_DEFAULT                                 // 6
IPC_HANDLER_DEFAULT                                 // 7
IPC_HANDLER(pgpe_irq_ipc_xgpe_stop_beacon, NULL)    // 8
IPC_HANDLER_DEFAULT                                 // 9
IPC_HANDLER_DEFAULT                                 // 10
IPC_HANDLER_DEFAULT                                 // 11
IPC_HANDLER_DEFAULT                                 // 12
IPC_HANDLER_DEFAULT                                 // 13
IPC_HANDLER_DEFAULT                                 // 14
IPC_HANDLER_DEFAULT                                 // 15
IPC_ST_FUNC_TABLE_END

//
//  pgpe_irq_ipc_init
//
//  Called during PGPE initialziation to enable IPC functions
//  and initialize static ipc task list
//
void pgpe_irq_ipc_init()
{
    ipc_init();
    ipc_enable();
}

//
//  pgpe_irq_ipc_405_start_stop
//
//  IPC function called upon receiving 'Pstate Start/Stop' IPC from OCC.
//
//
void pgpe_irq_ipc_405_start_stop(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC: Pstate Start Stop");

    if(pgpe_event_tbl_get_status(EV_IPC_PSTATE_START_STOP) != EVENT_INACTIVE)
    {
        //Ack Here with an error
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
        ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
    }
    else
    {
        pgpe_event_tbl_set(EV_IPC_PSTATE_START_STOP, EVENT_PENDING, (void*)cmd);
    }
}

//
//  pgpe_irq_ipc_405_clips
//
//  IPC function called upon receiving 'Clip Update' IPC from OCC
//
//  We store the pointer to ipc msg in the static event table, and mark
//  that this IPC event is pending. Also, a check is done
//  to ensure that previous IPC of this type has been ACKed because OCC
//  should never send another IPC of same type if one is already pending
//
void pgpe_irq_ipc_405_clips(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC: Clips cmd=0x%x", (uint32_t)cmd);

    if(pgpe_event_tbl_get_status(EV_IPC_CLIP_UPDT) != EVENT_INACTIVE)
    {
        //Ack Here with an error
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
        ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
    }
    else
    {
        pgpe_event_tbl_set(EV_IPC_CLIP_UPDT, EVENT_PENDING, (void*)cmd);
    }
}

//
//  pgpe_irq_ipc_405_set_pmcr
//
//  IPC function called upon receiving 'Set PMCR' IPC from OCC
//
//  We store the pointer to ipc msg in the static event table, and mark
//  that this IPC event is pending. Also, a check is done
//  to ensure that previous IPC of this type has been ACKed because OCC
//  should never send another IPC of same type if one is already pending
//
void pgpe_irq_ipc_405_set_pmcr(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC: Set PMCR");

    /* \\TBD
    if(in32(G_OCB_OCCFLG2) & BIT32(OCCFLG2_PGPE_HCODE_PSTATE_REQ_ERR_INJ))
    {
        // Clear the injection so things are not permenently stuck
        out32(G_OCB_OCCFLG2_CLR, BIT32(OCCFLG2_PGPE_HCODE_PSTATE_REQ_ERR_INJ));
        PK_TRACE_INF_ERR("SET PMCR IPC ERROR INJECT TRAP");
        PK_PANIC(PGPE_SET_PMCR_TRAP_INJECT);
    }*/
    if(pgpe_event_tbl_get_status(EV_IPC_SET_PMCR) != EVENT_INACTIVE)
    {
        //Ack Here with an error
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
        ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
    }
    else
    {
        pgpe_event_tbl_set(EV_IPC_SET_PMCR, EVENT_PENDING, (void*)cmd);
    }
}

//
//  pgpe_irq_ipc_405_wof_control
//
//  IPC function called upon receiving 'WOF Control' IPC from OCC
//
//  We store the pointer to ipc msg in the static ipcPendTbl, and mark
//  that this IPC needs to be processed and acked. Also, a check is done
//  to ensure that previous IPC of this type has been ACKed because OCC
//  should never send another IPC of same type if one is already pending.
//
//
void pgpe_irq_ipc_405_wof_control(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC: WOF CTRL");

    if(pgpe_event_tbl_get_status(EV_IPC_WOF_CTRL) != EVENT_INACTIVE)
    {
        //Ack Here with an error
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
        ipcmsg_wof_control_t* args = (ipcmsg_wof_control_t*)async_cmd->cmd_data;
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
    }
    else
    {
        pgpe_event_tbl_set(EV_IPC_WOF_CTRL, EVENT_PENDING, (void*)cmd);
    }

}

//
//  pgpe_irq_ipc_405_wof_vfrt
//
//  IPC function called upon receiving 'WOF VFRT' IPC from OCC
//
//  We store the pointer to ipc msg in the static ipcPendTbl, and mark
//  that this IPC needs to be processed and acked. Also, a check is done
//  to ensure that previous IPC of this type has been ACKed because OCC
//  should never send another IPC of same type if one is already pending.
//
void pgpe_irq_ipc_405_wof_vfrt(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC:_WOF VRT");

    if(pgpe_event_tbl_get_status(EV_IPC_WOF_VRT) != EVENT_INACTIVE)
    {
        //Ack Here with an error
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
        ipcmsg_wof_vrt_t* args = (ipcmsg_wof_vrt_t*)async_cmd->cmd_data;
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
    }
    else
    {
        pgpe_event_tbl_set(EV_IPC_WOF_VRT, EVENT_PENDING, (void*)cmd);
    }
}

//
//  pgpe_irq_ipc_xgpe_stop_beacon
//
//  IPC function called upon receiving 'Stop Beacon' IPC from XGPE.
//
//
void pgpe_irq_ipc_xgpe_stop_beacon(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC: Stop Beacon");

    if(pgpe_event_tbl_get_status(EV_IPC_STOP_BEACON) != EVENT_INACTIVE)
    {
        //Ack Here with an error
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
        ipcmsg_wof_vrt_t* args = (ipcmsg_wof_vrt_t*)async_cmd->cmd_data;
        args->msg_cb.rc = PGPE_RC_REQ_WHILE_PENDING_ACK;
        ipc_send_rsp(cmd, IPC_RC_SUCCESS);
    }
    else
    {
        pgpe_event_tbl_set(EV_IPC_STOP_BEACON, EVENT_PENDING, (void*)cmd);
    }

}
