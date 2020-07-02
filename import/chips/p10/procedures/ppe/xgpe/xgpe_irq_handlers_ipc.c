/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_irq_handlers_ipc.c $ */
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
#include "xgpe.h"
#include "pstate_pgpe_xgpe_api.h"

extern iddq_state_t G_iddq;
void xgpe_irq_ipc_vret_update(ipc_msg_t* cmd, void* arg);

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
IPC_HANDLER(xgpe_irq_ipc_vret_update, NULL)         // 1
IPC_HANDLER_DEFAULT                                 // 2
IPC_HANDLER_DEFAULT                                 // 3
IPC_HANDLER_DEFAULT                                 // 4
IPC_HANDLER_DEFAULT                                 // 5
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

void xgpe_irq_ipc_init()
{
    ipc_init();
    ipc_enable();
}

//
//  xgpe_irq_ipc_vret_update
//
//  IPC function called upon receiving 'Pstate Start/Stop' IPC from OCC.
//
//
void xgpe_irq_ipc_vret_update(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE("IPC VRET Update");

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    ipcmsg_p2x_update_vret_t* args = (ipcmsg_p2x_update_vret_t*)async_cmd->cmd_data;

    if (args->fields.update_type == UPDATE_VRET_TYPE_CLEAR)
    {
        G_iddq.override_vret = 0;
    }
    else
    {
        G_iddq.override_vret = 1;
    }

    args->fields.return_code = PGPE_RC_REQ_WHILE_PENDING_ACK;
    ipc_send_rsp(cmd, IPC_RC_SUCCESS);
}
