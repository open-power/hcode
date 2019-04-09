/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_occ.c $             */
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

#include "pgpe_occ.h"
#include "pgpe_event_table.h"
#include "pstate_pgpe_occ_api.h"


void pgpe_occ_update_beacon()
{
}

void pgpe_occ_produce_wof_values()
{
}

void pgpe_occ_produce_wof_iddq_values()
{
}

void pgpe_occ_send_ipc_ack_cmd(ipc_msg_t* cmd)
{
    PK_TRACE("IPC ACK: cmd=0x%x", (uint32_t)cmd);
    ipc_send_rsp(cmd, IPC_RC_SUCCESS);
}

void pgpe_occ_send_ipc_ack_cmd_rc(ipc_msg_t* cmd, uint32_t msg_rc)
{
    PK_TRACE("IPC ACK: rc=%d", msg_rc);
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    ipcmsg_base_t* args = (ipcmsg_base_t*)async_cmd->cmd_data;
    args->rc = msg_rc;
    ipc_send_rsp(cmd, IPC_RC_SUCCESS);
}

void pgpe_occ_send_ipc_ack_type_rc(uint32_t ipc_type, uint32_t msg_rc)
{
    PK_TRACE("IPC ACK: type=%d, rc=%d", ipc_type, msg_rc);
    ipc_msg_t* cmd = (ipc_msg_t*)pgpe_event_tbl_get_args(ipc_type);
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)cmd;
    ipcmsg_base_t* args = (ipcmsg_base_t*)async_cmd->cmd_data;
    args->rc = msg_rc;
    ipc_send_rsp(cmd, IPC_RC_SUCCESS);
}
