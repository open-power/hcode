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
#include "pgpe_gppb.h"
#include "pgpe_avsbus_driver.h"
#include "p10_oci_proc.H"

pgpe_occ_t G_pgpe_occ;
void pgpe_occ_sample_i_v_values();
void pgpe_occ_produce_fit_i_v_values();

void pgpe_occ_init()
{

    G_pgpe_occ.pwof_val = (pgpe_wof_values_t*)(pgpe_header_get(g_wof_state_addr));

    //\TODO: RTC: 214486 Scale this based on nest frequency and FIT TSEL.
    //
    //Currently, this number is based assuming FIT tick
    //of 131us and nest frequency of 2Ghz
    G_pgpe_occ.max_tb_delta = 4096;
    G_pgpe_occ.prev_tb = 0;
    G_pgpe_occ.present_tb = 0;
    G_pgpe_occ.vdd_accum = 0;
    G_pgpe_occ.vcs_accum = 0;
    G_pgpe_occ.idd_accum = 0;
    G_pgpe_occ.ics_accum = 0;
    G_pgpe_occ.fit_tick = 0;
    G_pgpe_occ.wof_tick = 4; //TODO RTC: 214486 This WOF_TICK_TIME/FIT_TICK_TIME. Should get it from somewhere else
}

void pgpe_occ_update_beacon()
{
    if (pgpe_pstate_get(update_pgpe_beacon) == 1)
    {
        //write to SRAM
        *((uint32_t*)(pgpe_header_get(g_pgpe_beacon_addr))) = *((uint32_t*)(pgpe_header_get(g_pgpe_beacon_addr))) + 1;
    }
}

void pgpe_occ_produce_wof_i_v_values()
{
    pgpe_occ_produce_fit_i_v_values();

    if (G_pgpe_occ.fit_tick == G_pgpe_occ.wof_tick)
    {
        G_pgpe_occ.vdd_avg_mv = G_pgpe_occ.vdd_wof_avg_accum_mv / G_pgpe_occ.wof_tick;
        G_pgpe_occ.vcs_avg_mv = G_pgpe_occ.vcs_wof_avg_accum_mv / G_pgpe_occ.wof_tick;
        G_pgpe_occ.idd_avg_ma = G_pgpe_occ.idd_wof_avg_accum_ma / G_pgpe_occ.wof_tick;
        G_pgpe_occ.ics_avg_ma = G_pgpe_occ.ics_wof_avg_accum_ma / G_pgpe_occ.wof_tick;

        //Write to SRAM
        G_pgpe_occ.pwof_val->dw1.fields.idd_avg_ma = G_pgpe_occ.idd_avg_ma;
        G_pgpe_occ.pwof_val->dw1.fields.ics_avg_ma = G_pgpe_occ.ics_avg_ma;
        G_pgpe_occ.pwof_val->dw2.fields.vdd_avg_mv = G_pgpe_occ.vdd_avg_mv;
        G_pgpe_occ.pwof_val->dw2.fields.vcs_avg_mv = G_pgpe_occ.vcs_avg_mv;
        G_pgpe_occ.fit_tick = 0;;
    }
}

void pgpe_occ_produce_fit_i_v_values()
{
    pgpe_occ_sample_i_v_values();

    G_pgpe_occ.vdd_fit_avg_mv = G_pgpe_occ.vdd_tb_accum / G_pgpe_occ.max_tb_delta;
    G_pgpe_occ.vcs_fit_avg_mv = G_pgpe_occ.vcs_tb_accum / G_pgpe_occ.max_tb_delta;
    G_pgpe_occ.idd_fit_avg_ma = G_pgpe_occ.idd_tb_accum / G_pgpe_occ.max_tb_delta;
    G_pgpe_occ.ics_fit_avg_ma = G_pgpe_occ.ics_tb_accum / G_pgpe_occ.max_tb_delta;

    G_pgpe_occ.vdd_wof_avg_accum_mv += G_pgpe_occ.vdd_fit_avg_mv;
    G_pgpe_occ.vcs_wof_avg_accum_mv += G_pgpe_occ.vcs_fit_avg_mv;
    G_pgpe_occ.idd_wof_avg_accum_ma += G_pgpe_occ.idd_fit_avg_ma;
    G_pgpe_occ.ics_wof_avg_accum_ma += G_pgpe_occ.ics_fit_avg_ma;

    G_pgpe_occ.idd_tb_accum = 0;
    G_pgpe_occ.ics_tb_accum = 0;
    G_pgpe_occ.vdd_tb_accum = 0;
    G_pgpe_occ.vcs_tb_accum = 0;

    G_pgpe_occ.fit_tick++;
}

void pgpe_occ_sample_i_v_values()
{
    //Read OTBR
    G_pgpe_occ.present_tb = in32(TP_TPCHIP_OCC_OCI_OCB_OTBR);

    uint32_t idd_ma, ics_ma, delta_tb;

    //Read IDD and ICS
    pgpe_avsbus_current_read(pgpe_gppb_get(avs_bus_topology.vdd_avsbus_num),
                             pgpe_gppb_get(avs_bus_topology.vdd_avsbus_rail),
                             &idd_ma);
    pgpe_avsbus_current_read(pgpe_gppb_get(avs_bus_topology.vcs_avsbus_num),
                             pgpe_gppb_get(avs_bus_topology.vcs_avsbus_rail),
                             &ics_ma);

    //Calculate delta_tb while accounting for OTBR rollover
    if(G_pgpe_occ.present_tb > G_pgpe_occ.prev_tb)
    {
        delta_tb = G_pgpe_occ.present_tb - G_pgpe_occ.prev_tb;
    }
    else
    {
        delta_tb = G_pgpe_occ.present_tb - G_pgpe_occ.prev_tb + 0xFFFFFFFF;
    }

    G_pgpe_occ.idd_tb_accum = idd_ma * delta_tb;
    G_pgpe_occ.ics_tb_accum = ics_ma * delta_tb;
    G_pgpe_occ.vdd_tb_accum = pgpe_pstate_get(vdd_curr) * delta_tb;
    G_pgpe_occ.vcs_tb_accum = pgpe_pstate_get(vcs_curr) * delta_tb;

    G_pgpe_occ.prev_tb = G_pgpe_occ.present_tb;
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
