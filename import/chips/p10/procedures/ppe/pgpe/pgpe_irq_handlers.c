/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_irq_handlers.c $    */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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

//Local Functions

//IPC
void pgpe_irq_ipc_init();

//FAULT
void pgpe_irq_occ_fault_handler();
void pgpe_irq_qme_fault_handler();
void pgpe_irq_xgpe_fault_handler();
void pgpe_irq_pvref_fault_handler();
void pgpe_irq_xstop_handler();
void pgpe_ipc_done_hook();

// IRQ handler table
IOTA_BEGIN_TASK_TABLE
IOTA_TASK(pgpe_irq_fault_handler),
          IOTA_TASK(pgpe_irq_pbax_handler),
          IOTA_TASK(ipc_irq_handler),
          IOTA_TASK(pgpe_irq_pcb1_handler),
          IOTA_TASK(IOTA_NO_TASK)
          IOTA_END_TASK_TABLE;

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
IPC_HANDLER_DEFAULT                                 // 8
IPC_HANDLER_DEFAULT                                 // 9
IPC_HANDLER_DEFAULT                                 // 10
IPC_HANDLER_DEFAULT                                 // 11
IPC_HANDLER_DEFAULT                                 // 12
IPC_HANDLER_DEFAULT                                 // 13
IPC_HANDLER_DEFAULT                                 // 14
IPC_HANDLER_DEFAULT                                 // 15
IPC_ST_FUNC_TABLE_END


void pgpe_irq_init()
{
    //Init IPC
    pgpe_irq_ipc_init();

    //Init FIT
    IOTA_FIT_HANDLER(pgpe_irq_fit_handler);

    //Init OCC Heartbeatloss //TBD
}


void pgpe_irq_fit_handler()
{
    //TBD
    static  uint32_t i = 0;
    i++;
}

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
    ipc_set_done_hook((void*)pgpe_ipc_done_hook);
}

void pgpe_ipc_done_hook()
{
    PK_TRACE("IPC Done Hook");
}

//
//  pgpe_irq_ipc_405_start_stop
//
//  IPC function called upon receiving 'Pstate Start/Stop' IPC from OCC.
//
//
void pgpe_irq_ipc_405_start_stop(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE("IPC Pstate Start Stop");

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
    PK_TRACE("IPC: Clips");

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
    PK_TRACE("IPC: Set PMCR");

    /* \\TBD
    if(in32(G_OCB_OCCFLG2) & BIT32(OCCFLG2_PGPE_HCODE_PSTATE_REQ_ERR_INJ))
    {
        // Clear the injection so things are not permenently stuck
        out32(G_OCB_OCCFLG2_CLR, BIT32(OCCFLG2_PGPE_HCODE_PSTATE_REQ_ERR_INJ));
        PK_TRACE_ERR("SET PMCR IPC ERROR INJECT TRAP");
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
    PK_TRACE("IPC: WOF CTRL");
    //ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    //ipcmsg_wof_control_t* args = (ipcmsg_wof_control_t*)async_cmd->cmd_data;

    /*if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack == 0)
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
        pgpe_optrace(UNEXPECTED_ERROR);
        PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_IPC_ACK_BAD_RC);
    }*/
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
    PK_TRACE("IPC:_WOF VFRT");
    //ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    //ipcmsg_wof_vfrt_t* args = (ipcmsg_wof_vfrt_t*)async_cmd->cmd_data;

    /*
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
        pgpe_optrace(UNEXPECTED_ERROR);
        PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_IPC_ACK_BAD_RC);
    }*/
}



void pgpe_irq_pcb1_handler()
{
}

void pgpe_irq_fault_handler()
{
}

void pgpe_irq_pbax_handler()
{
}

void pgpe_irq_occ_fault_handler()
{
}

void pgpe_irq_qme_fault_handler()
{
}

void pgpe_irq_xgpe_fault_handler()
{
}

void pgpe_irq_pvref_fault_handler()
{
}

void pgpe_irq_xstop_handler()
{
}
