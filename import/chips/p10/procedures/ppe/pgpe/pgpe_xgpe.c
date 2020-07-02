/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_xgpe.c $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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
#include "pgpe_xgpe.h"
#include "ppe42_cache.h"



GPE_BUFFER(ipc_async_cmd_t G_ipc_msg_pgpe_xgpe);
GPE_BUFFER(ipcmsg_p2x_update_vret_t G_xgpe_vret_updt);

void pgpe_xgpe_send_vret_updt(uint32_t update_type)
{
    int rc;
    G_xgpe_vret_updt.fields.return_code = 0;
    G_xgpe_vret_updt.fields.update_type = update_type;
    G_ipc_msg_pgpe_xgpe.cmd_data = &G_xgpe_vret_updt;
    ipc_init_msg(&G_ipc_msg_pgpe_xgpe.cmd,
                 IPC_MSGID_PGPE_XGPE_VRET_UPDT,
                 (void*)NULL,
                 (void*)NULL);

    //send the command
    rc = ipc_send_cmd(&G_ipc_msg_pgpe_xgpe.cmd);

    if(rc)
    {
        //TODO: Error Log
    }

}
