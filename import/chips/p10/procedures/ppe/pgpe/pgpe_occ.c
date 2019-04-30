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
#include "pgpe_header.h"
#include "pgpe_pstate.h"

/*
typedef struct iddq_counters {
    uint32_t core_off[MAX_CORES];
    uint32_t core_vmin_off[MAX_CORES];
    uint32_t core_mma_off[MAX_CORES];
    uint32_t l3_off[MAX_CORES];
} iddq_counters_t;*/

//iddq_counters_t G_iddq;
//uint32_t G_vratio_avg;

void pgpe_occ_init()
{
    /*
    uint32_t c;
    for (c = 0; c < MAX_CORES; c++) {
        if (in32(OCB_OCI_CCSR) & CORE_MASK(c)) {
            G_iddq.core_off[c] = 0;
            G_iddq.core_vmin_off[c] = 0;
            G_iddq.core_mma_off[c] = 0;
            G_iddq.l3_off[c] = 0;
        }
    }
    G_vratio_avg = 0;*/
}

void pgpe_occ_update_beacon()
{
    if (pgpe_pstate_get(update_pgpe_beacon) == 1)
    {
        //write to SRAM
        *((uint32_t*)(pgpe_header_get(g_pgpe_beacon_addr))) = *((uint32_t*)(pgpe_header_get(g_pgpe_beacon_addr))) + 1;
    }
}

void pgpe_occ_produce_wof_values()
{
}

void pgpe_occ_compute_wof_iddq_values()
{
    /*  uint32_t c;
        for (c = 0; c < MAX_CORES; c++) {
            if (in32(OCB_OCI_CCSR) & CORE_MASK(c)) {
                //If core[c] is ON
                    //sample core[c] MMA state
                    //if core mma is OFF, g_core_mma_off[c]++
                //else if core[c] is Vmin, g_core_vmin[c]++
                //else if core[c] is OFF, g_core_off[c]++
                //if L3 core is off, g_l3_off[c]++
            } else {
                //g_core_off[c]++;
                //g_l3_off[c]++;
            }
        }*/
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
