/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe.c $                 */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020,2021                                                    */
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
#include "ppe42_cache.h"



GPE_BUFFER(ipc_async_cmd_t G_ipc_msg_xgpe_pgpe);
GPE_BUFFER(ipcmsg_req_beacon_stop_t G_xgpe_beacon_req);

//
//  xgpe_pgpe_beacon_stop_req
//
//  IPC function called to PGPE for beacon stop
//
//
void xgpe_pgpe_beacon_stop_req()
{
    PK_TRACE("IPC BEACON req");
    int rc;
    G_xgpe_beacon_req.fields.return_code = 0;
    G_xgpe_beacon_req.fields.req_type = REQUEST_BEACON_STOP;
    G_ipc_msg_xgpe_pgpe.cmd_data = &G_xgpe_beacon_req;
    ipc_init_msg(&G_ipc_msg_xgpe_pgpe.cmd,
                 IPC_MSGID_XGPE_PGPE_BEACON_STOP,
                 (void*)NULL,
                 (void*)NULL);

    //send the command
    rc = ipc_send_cmd(&G_ipc_msg_xgpe_pgpe.cmd);

    if(rc)
    {
        PK_TRACE_ERR("Failed to send beacon req to pgpe");
        //TODO: Error Log
    }
}
