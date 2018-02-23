/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_ipc_handlers.c $ */
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

#include "p9_sgpe_stop.h"
#include "p9_sgpe_irq.h"
#include "ppe42_cache.h"

extern SgpeStopRecord G_sgpe_stop_record;

GPE_BUFFER(ipc_async_cmd_t                  G_sgpe_ipccmd_to_pgpe);
GPE_BUFFER(ipcmsg_s2p_update_active_cores_t G_sgpe_ipcmsg_update_cores);
GPE_BUFFER(ipcmsg_s2p_update_active_quads_t G_sgpe_ipcmsg_update_quads);

// pgpe send ack back to sgpe upon ipc will trigger interrupt to engage with uih
// which will stack up oimr, such action will require vec_restore to pop up the
// stack again to prevent overflow.
//
// The same time the acks to multiple ipc msgs can stack up in the ipc buffer
// and only wants to do vec_restore once with X msgs/acks read by one uih/ipc operation.
// vec_restore per ipc msg/ack will result uih underflow(thus not doing so in callback).
//
// Therefore using this hook function called per ipc operation after ipc process loop.
// Note now all ipc handlers and callbacks will not do vec_restore. In anoter word,
// one uih engagement should cause one ipc operation and cause one vec_restore
// during which X number of handlers/callbacks can be called and processed.
//

void
p9_sgpe_ipc_uih_done_hook()
{
    PK_TRACE_DBG("IPC: Done Hook, UIH Mask Restored");
    PkMachineContext ctx;
    pk_irq_vec_restore(&ctx);
}

// Update Active Cores/Quads

void
p9_sgpe_ipc_pgpe_ctrl_stop_updates(ipc_msg_t* cmd, void* arg)
{
    PK_TRACE_INF("IPC.PS: Get Control Stop Updates IPC from PGPE");

    G_sgpe_stop_record.wof.updates_cmd = cmd;

    // stop in process
    if (G_sgpe_stop_record.wof.status_stop & STATUS_STOP_PROCESSING)
    {
        // Note: response will be sent by stop threads when ongoing stop is completed
        G_sgpe_stop_record.wof.update_pgpe |= IPC_SGPE_PGPE_UPDATE_CTRL_ONGOING;
    }
    // sgpe idle
    else
    {
        p9_sgpe_ack_pgpe_ctrl_stop_updates();
    }
}


void
p9_sgpe_ack_pgpe_ctrl_stop_updates()
{
    ipc_async_cmd_t* async_cmd =
        (ipc_async_cmd_t*)(G_sgpe_stop_record.wof.updates_cmd);
    ipcmsg_p2s_ctrl_stop_updates_t* msg =
        (ipcmsg_p2s_ctrl_stop_updates_t*)async_cmd->cmd_data;

    if (msg->fields.action < 4)
    {
        //enable:  core = 0b001, quad = 0b010, both = 0b011
        G_sgpe_stop_record.wof.update_pgpe |= msg->fields.action;
    }
    else
    {
        //disable: core = 0b101, quad = 0b110, both = 0b111
        G_sgpe_stop_record.wof.update_pgpe &= ~(msg->fields.action);
    }

    PK_TRACE_INF("IPC.PS: Ack Control Stop Updates IPC to PGPE with Current Action[%x]",
                 G_sgpe_stop_record.wof.update_pgpe);

    msg->fields.return_code  = IPC_SGPE_PGPE_RC_SUCCESS;
    msg->fields.active_quads = G_sgpe_stop_record.group.quad[VECTOR_ACTIVE] >> SHIFT32(5);
    msg->fields.active_cores = G_sgpe_stop_record.group.core[VECTOR_ACTIVE] >> SHIFT32(23);

    ipc_send_rsp(G_sgpe_stop_record.wof.updates_cmd, IPC_RC_SUCCESS);
    G_sgpe_stop_record.wof.update_pgpe &= ~IPC_SGPE_PGPE_UPDATE_CTRL_ONGOING;
}


void
p9_sgpe_ipc_pgpe_update_active_cores(const uint32_t type)
{
    uint32_t rc;

    PK_TRACE_INF("IPC.SP: Message PGPE to Update Active Cores with type[%d]", type);
    G_sgpe_ipcmsg_update_cores.fields.update_type = type;
    G_sgpe_ipcmsg_update_cores.fields.return_code = IPC_SGPE_PGPE_RC_NULL;

    if (type == UPDATE_ACTIVE_CORES_TYPE_EXIT)
    {
        G_sgpe_ipcmsg_update_cores.fields.active_cores =
            G_sgpe_stop_record.group.core[VECTOR_PIGX] >> SHIFT32(23);
    }
    else
    {
        G_sgpe_ipcmsg_update_cores.fields.active_cores =
            G_sgpe_stop_record.group.core[VECTOR_PIGE] >> SHIFT32(23);
    }

    G_sgpe_ipccmd_to_pgpe.cmd_data = &G_sgpe_ipcmsg_update_cores;
    ipc_init_msg(&G_sgpe_ipccmd_to_pgpe.cmd,
                 IPC_MSGID_SGPE_PGPE_UPDATE_ACTIVE_CORES,
                 0, 0);

    rc = ipc_send_cmd(&G_sgpe_ipccmd_to_pgpe.cmd);

    if (rc)
    {
        PK_TRACE_ERR("ERROR: SGPE Updates PGPE with Active Cores Failed. HALT SGPE!");
        PK_PANIC(SGPE_IPC_UPDATE_ACTIVE_CORE_FAILED);
    }
}

void
p9_sgpe_ipc_pgpe_update_active_cores_poll_ack(const uint32_t type)
{
    uint32_t vector_active_cores = 0;

    PK_TRACE_INF("IPC.SP: Poll PGPE Update Active Cores Ack");

    while (G_sgpe_ipcmsg_update_cores.fields.return_code == IPC_SGPE_PGPE_RC_NULL)
    {
        dcbi(((void*)(&G_sgpe_ipcmsg_update_cores)));
    }

    if (G_sgpe_ipcmsg_update_cores.fields.return_code != IPC_SGPE_PGPE_RC_SUCCESS)
    {
        PK_TRACE_ERR("ERROR: SGPE Updates PGPE with Active Cores Bad RC. HALT SGPE!");
        PK_PANIC(SGPE_IPC_UPDATE_ACTIVE_CORE_BAD_RC);
    }

    if (type == UPDATE_ACTIVE_CORES_TYPE_EXIT)
    {
        vector_active_cores =
            (G_sgpe_stop_record.group.core[VECTOR_PIGX] |
             G_sgpe_stop_record.group.core[VECTOR_ACTIVE]) >> SHIFT32(23);
    }
    else
    {
        vector_active_cores =
            ((~G_sgpe_stop_record.group.core[VECTOR_PIGE]) &
             G_sgpe_stop_record.group.core[VECTOR_ACTIVE]) >> SHIFT32(23);

        if (G_sgpe_stop_record.group.core[VECTOR_PIGX])
        {
            vector_active_cores |= G_sgpe_stop_record.group.core[VECTOR_PIGX] >> SHIFT32(23);
        }
    }

    if (G_sgpe_ipcmsg_update_cores.fields.return_active_cores != vector_active_cores)
    {
        PK_TRACE_ERR("ERROR: SGPE Updates PGPE with Active Cores. ActiveCores ret=0x%x, exp.=0x%x. HALT SGPE!",
                     G_sgpe_ipcmsg_update_cores.fields.return_active_cores, vector_active_cores);
        PK_PANIC(SGPE_IPC_UPDATE_ACTIVE_CORE_BAD_LIST);
    }
}


void
p9_sgpe_ipc_pgpe_update_active_quads(const uint32_t type, const uint32_t stage)
{
    uint32_t rc;

    G_sgpe_ipcmsg_update_quads.fields.update_type = type;
    G_sgpe_ipcmsg_update_quads.fields.entry_type = stage;
    G_sgpe_ipcmsg_update_quads.fields.return_code = IPC_SGPE_PGPE_RC_NULL;

    if (type == UPDATE_ACTIVE_CORES_TYPE_EXIT)
    {
        G_sgpe_ipcmsg_update_quads.fields.requested_quads =
            G_sgpe_stop_record.group.quad[VECTOR_EXIT] >> SHIFT32(5);
    }
    else
    {
        G_sgpe_ipcmsg_update_quads.fields.requested_quads =
            G_sgpe_stop_record.group.quad[VECTOR_ENTRY] >> SHIFT32(5);
    }

    PK_TRACE_INF("IPC.SP: Message PGPE to Update Active Quads with type[%d][%d], reqQuads=0x%x", type, stage,
                 G_sgpe_ipcmsg_update_quads.fields.requested_quads);
    G_sgpe_ipccmd_to_pgpe.cmd_data = &G_sgpe_ipcmsg_update_quads;
    ipc_init_msg(&G_sgpe_ipccmd_to_pgpe.cmd,
                 IPC_MSGID_SGPE_PGPE_UPDATE_ACTIVE_QUADS,
                 0, 0);

    rc = ipc_send_cmd(&G_sgpe_ipccmd_to_pgpe.cmd);

    if(rc)
    {
        PK_TRACE_ERR("ERROR: SGPE Updates PGPE with Active Quads Failed. HALT SGPE!");
        PK_PANIC(SGPE_IPC_UPDATE_ACTIVE_QUAD_FAILED);
    }

}

void
p9_sgpe_ipc_pgpe_update_active_quads_poll_ack(const uint32_t type)
{
    PK_TRACE_INF("IPC.SP: Poll PGPE Update Active Quads Ack");

    uint32_t vector_active_quads = 0;

    while (G_sgpe_ipcmsg_update_quads.fields.return_code == IPC_SGPE_PGPE_RC_NULL)
    {
        dcbi(((void*)(&G_sgpe_ipcmsg_update_quads)));
    }

    if (G_sgpe_ipcmsg_update_quads.fields.return_code != IPC_SGPE_PGPE_RC_SUCCESS)
    {
        PK_TRACE_ERR("ERROR: SGPE Updates PGPE with Active Quads Bad RC. HALT SGPE!");
        PK_PANIC(SGPE_IPC_UPDATE_ACTIVE_QUAD_BAD_RC);
    }

    if (type == UPDATE_ACTIVE_QUADS_TYPE_EXIT)
    {
        vector_active_quads =
            (G_sgpe_stop_record.group.quad[VECTOR_EXIT] |
             G_sgpe_stop_record.group.quad[VECTOR_ACTIVE]) >> SHIFT32(5);
    }
    else
    {
        vector_active_quads =
            ((~G_sgpe_stop_record.group.quad[VECTOR_ENTRY]) &
             G_sgpe_stop_record.group.quad[VECTOR_ACTIVE]) >> SHIFT32(5);
    }

    if (G_sgpe_ipcmsg_update_quads.fields.return_active_quads != vector_active_quads)
    {
        PK_TRACE_ERR("ERROR: SGPE Updates PGPE with Active Quads. ActiveQuads ret=0x%x, exp.=0x%x . HALT SGPE!",
                     G_sgpe_ipcmsg_update_quads.fields.return_active_quads, vector_active_quads);
        PK_PANIC(SGPE_IPC_UPDATE_ACTIVE_QUAD_BAD_LIST);
    }
}


// Suspend Stop

void
p9_sgpe_ipc_pgpe_suspend_stop(ipc_msg_t* cmd, void* arg)
{
    G_sgpe_stop_record.wof.suspend_cmd = cmd;
    g_oimr_override |= (BITS64(47, 2) | BITS64(50, 2));

    ipc_async_cmd_t* async_cmd =
        (ipc_async_cmd_t*)(G_sgpe_stop_record.wof.suspend_cmd);
    ipcmsg_p2s_suspend_stop_t* msg =
        (ipcmsg_p2s_suspend_stop_t*)async_cmd->cmd_data;
    G_sgpe_stop_record.wof.suspend_act = msg->fields.command;

    PK_TRACE_INF("IPC.PS: Get Suspend Stop IPC with Action[%x] from PGPE", G_sgpe_stop_record.wof.suspend_act);

    // stop in process
    if (G_sgpe_stop_record.wof.status_stop & STATUS_STOP_PROCESSING)
    {
        // Note: response will be sent by stop threads when suspension is completed
        G_sgpe_stop_record.wof.status_stop |= STATUS_SUSPEND_PENDING;
    }
    // sgpe idle
    else
    {
        p9_sgpe_stop_suspend_all_cmes();
    }
}



void
p9_sgpe_stop_suspend_all_cmes()
{
    uint32_t qloop       = 0;
    uint32_t cloop       = 0;
    uint32_t cpayload_t3 = 0;
    uint32_t req_list    = 0;
    uint32_t ack_list    = 0;
    uint32_t action      = G_sgpe_stop_record.wof.suspend_act;
    uint32_t ack_msg     = (action << 8) | TYPE2_PAYLOAD_SUSPEND_SELECT_MASK | TYPE2_PAYLOAD_SUSPEND_ACK_MASK;

    for(qloop = 0; qloop < MAX_QUADS; qloop++)
    {
        req_list |= p9_sgpe_stop_suspend_db1_cme(qloop, ((action << SHIFT32(6)) | BIT32(7)));
    }

    PK_TRACE_INF("Requested Suspend on cores[%x] with action[%x]", req_list, action);

    while (ack_list != req_list)
    {
        for(cloop = 0; cloop < MAX_CORES; cloop++)
        {
            if ((~ack_list) & req_list & BIT32(cloop))
            {
                cpayload_t3 = in32(OCB_OPIT3CN(cloop));
                PK_TRACE_INF("Read PIG from Core[%d] with payload[%x]", cloop, cpayload_t3);

                if (cpayload_t3 == ack_msg)
                {
                    ack_list |= BIT32(cloop);
                    PK_TRACE_INF("Acked Suspend from cores[%x] with message[%x]", ack_list, ack_msg);

                    // set STOP OVERRIDE MODE/STOP ACTIVE MASK
                    // to convert everything to stop1
                    // Note: not doing this from cme because
                    // suspend_stop and block_exit/entry protocol
                    // shares processing code at CME,
                    // and only want this done under suspend_stop
                    // Note: avoid partial bad cme as sgpe sent pig
                    //       only doing this when suspend all stop
                    if ((action == 0x7) &&
                        (G_sgpe_stop_record.group.core[VECTOR_CONFIG] & BIT32(cloop)))
                    {
                        GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_OR,
                                                      (cloop >> 2), ((cloop & 2) >> 1)), BITS64(16, 2));
                    }
                }
            }
        }
    }

    PK_TRACE_INF("IPC.PS: Ack Suspend Stop IPC to PGPE");

    ipc_async_cmd_t* async_cmd =
        (ipc_async_cmd_t*)(G_sgpe_stop_record.wof.suspend_cmd);
    ipcmsg_p2s_suspend_stop_t* msg =
        (ipcmsg_p2s_suspend_stop_t*)async_cmd->cmd_data;
    msg->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
    ipc_send_rsp(G_sgpe_stop_record.wof.suspend_cmd, IPC_RC_SUCCESS);

    G_sgpe_stop_record.wof.status_stop &= ~STATUS_SUSPEND_PENDING;

    if (action < 4)
    {
        G_sgpe_stop_record.wof.status_stop &= ~action;
    }
    else
    {
        G_sgpe_stop_record.wof.status_stop |= (action & 0x3);
    }
}
