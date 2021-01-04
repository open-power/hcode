/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_occ.c $             */
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

#include "pgpe_occ.h"
#include "pgpe_event_table.h"
#include "pstate_pgpe_occ_api.h"
#include "pgpe_header.h"
#include "pgpe_pstate.h"
#include "pgpe_gppb.h"
#include "pgpe_avsbus_driver.h"
#include "pgpe_thr_ctrl.h"
#include "pgpe_wov_ocs.h"
#include "p10_oci_proc.H"

pgpe_occ_t G_pgpe_occ __attribute__((section (".data_structs")));
void pgpe_occ_sample_values();
void pgpe_occ_produce_fit_values();

void* pgpe_occ_data_addr()
{
    return &G_pgpe_occ;
}

void pgpe_occ_init()
{

    uint32_t occflg3 = in32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW);

    if(!(occflg3 & BIT32(XGPE_ACTIVE)))
    {
        HcodeOCCSharedData_t* occ_shared_data = (HcodeOCCSharedData_t*)
                                                (pgpe_header_get(g_pgpe_sharedSramAddress));

        occ_shared_data->magic = HCODE_OCC_SHARED_MAGIC_NUMBER_OPS2;
        occ_shared_data->occ_data_offset = offsetof(HcodeOCCSharedData_t, occ_wof_values);
        occ_shared_data->occ_data_length = sizeof(occ_wof_values_t);
        occ_shared_data->pgpe_data_offset = offsetof(HcodeOCCSharedData_t, pgpe_wof_values);
        occ_shared_data->pgpe_data_length = sizeof(pgpe_wof_values_t);
        occ_shared_data->xgpe_data_offset = offsetof(HcodeOCCSharedData_t, xgpe_wof_values);
        occ_shared_data->xgpe_data_length = sizeof(xgpe_wof_values_t);
        occ_shared_data->iddq_data_offset = offsetof(HcodeOCCSharedData_t, iddq_activity_values);
        occ_shared_data->iddq_data_length = sizeof(iddq_activity_t);
        occ_shared_data->error_log_offset = offsetof(HcodeOCCSharedData_t, errlog_idx);
        occ_shared_data->pstate_table_offset = offsetof(HcodeOCCSharedData_t, pstate_table);
        occ_shared_data->iddq_activity_sample_depth =
            8; //TODO RTC: 214486 Determine if this should be an attribute or hard-coded like this
    }

    G_pgpe_occ.pwof_val = (pgpe_wof_values_t*)(pgpe_header_get(g_pgpe_pgpeWofStateAddress));

    //\TODO: RTC: 214486 Scale this based on nest frequency and FIT TSEL.
    //
    //Currently, this number is based assuming FIT tick
    //of 131us and nest frequency of 2Ghz
    G_pgpe_occ.max_tb_delta = 4096;
    G_pgpe_occ.prev_tb = 0;
    G_pgpe_occ.present_tb = 0;
    G_pgpe_occ.vdd_accum = 0;
    G_pgpe_occ.vcs_accum = 0;
    G_pgpe_occ.fit_tick = 0;
    G_pgpe_occ.wof_tick = 4; //TODO RTC: 214486 This WOF_TICK_TIME/FIT_TICK_TIME. Should get it from somewhere else
}

void pgpe_occ_update_beacon()
{
    if (pgpe_pstate_get(update_pgpe_beacon) == 1)
    {
        //write to SRAM
        *((uint32_t*)(pgpe_header_get(g_pgpe_beaconAddress))) = *((uint32_t*)(pgpe_header_get(g_pgpe_beaconAddress))) + 1;
    }
}

void pgpe_occ_produce_wof_values()
{
    pgpe_occ_produce_fit_values();

    if (G_pgpe_occ.fit_tick == G_pgpe_occ.wof_tick)
    {
        if (pgpe_pstate_is_pstate_enabled())
        {
            G_pgpe_occ.pwof_val->dw0.fields.average_pstate = G_pgpe_occ.ps_wof_avg_accum / G_pgpe_occ.wof_tick;
            G_pgpe_occ.pwof_val->dw0.fields.average_frequency_pstate = G_pgpe_occ.ps_freq_wof_avg_accum / G_pgpe_occ.wof_tick;
            G_pgpe_occ.pwof_val->dw0.fields.average_throttle_idx = G_pgpe_occ.thr_idx_wof_avg_accum / G_pgpe_occ.wof_tick;
            G_pgpe_occ.pwof_val->dw2.fields.vdd_avg_mv = G_pgpe_occ.vdd_wof_avg_accum_mv / G_pgpe_occ.wof_tick;
            G_pgpe_occ.pwof_val->dw2.fields.vcs_avg_mv = G_pgpe_occ.vcs_wof_avg_accum_mv / G_pgpe_occ.wof_tick;
            G_pgpe_occ.ps_wof_avg_accum = 0;
            G_pgpe_occ.ps_freq_wof_avg_accum = 0;
            G_pgpe_occ.thr_idx_wof_avg_accum = 0;
            G_pgpe_occ.vdd_wof_avg_accum_mv = 0;
            G_pgpe_occ.vcs_wof_avg_accum_mv = 0;
        }

        if (!pgpe_gppb_get_pgpe_flags(PGPE_FLAG_CURRENT_READ_DISABLE))
        {
            G_pgpe_occ.pwof_val->dw1.fields.idd_avg_10ma =  G_pgpe_occ.idd_wof_avg_accum_ma / G_pgpe_occ.wof_tick;;
            G_pgpe_occ.pwof_val->dw1.fields.ics_avg_10ma = G_pgpe_occ.ics_wof_avg_accum_ma / G_pgpe_occ.wof_tick;
            G_pgpe_occ.pwof_val->dw3.fields.ocs_avg_0p01pct = G_pgpe_occ.ocs_avg_pct_wof_accum / G_pgpe_occ.wof_tick;
            G_pgpe_occ.idd_wof_avg_accum_ma = 0;
            G_pgpe_occ.ics_wof_avg_accum_ma = 0;
            G_pgpe_occ.ocs_avg_pct_wof_accum = 0;
        }

        //PK_TRACE("OCC: woftick vdd_wof=0x%x,vcs_wof=%u,idd_wof=%u,ics_wof=%u",G_pgpe_occ.vdd_wof_avg_accum_mv,G_pgpe_occ.vcs_wof_avg_accum_mv,G_pgpe_occ.idd_wof_avg_accum_ma,G_pgpe_occ.ics_wof_avg_accum_ma);
        //Write to SRAM
        G_pgpe_occ.fit_tick = 0;
    }
}

void pgpe_occ_produce_fit_values()
{
    pgpe_occ_sample_values();

    if (pgpe_pstate_is_pstate_enabled())
    {
        G_pgpe_occ.ps_fit_avg       = G_pgpe_occ.ps_tb_accum / G_pgpe_occ.max_tb_delta;
        G_pgpe_occ.ps_freq_fit_avg  = G_pgpe_occ.ps_freq_tb_accum / G_pgpe_occ.max_tb_delta;
        G_pgpe_occ.ps_wof_avg_accum += G_pgpe_occ.ps_fit_avg;
        G_pgpe_occ.ps_freq_wof_avg_accum += G_pgpe_occ.ps_freq_fit_avg;
        G_pgpe_occ.thr_idx_fit_avg  = G_pgpe_occ.thr_idx_tb_accum / G_pgpe_occ.max_tb_delta;
        G_pgpe_occ.thr_idx_wof_avg_accum += G_pgpe_occ.thr_idx_fit_avg;
        G_pgpe_occ.vdd_fit_avg_mv = G_pgpe_occ.vdd_tb_accum / G_pgpe_occ.max_tb_delta;
        G_pgpe_occ.vcs_fit_avg_mv = G_pgpe_occ.vcs_tb_accum / G_pgpe_occ.max_tb_delta;
        G_pgpe_occ.vdd_wof_avg_accum_mv += G_pgpe_occ.vdd_fit_avg_mv;
        G_pgpe_occ.vcs_wof_avg_accum_mv += G_pgpe_occ.vcs_fit_avg_mv;
        G_pgpe_occ.ps_tb_accum  = 0;
        G_pgpe_occ.ps_freq_tb_accum = 0;
        G_pgpe_occ.vdd_tb_accum = 0;
        G_pgpe_occ.vcs_tb_accum = 0;
        G_pgpe_occ.thr_idx_tb_accum = 0;
    }

    if (!pgpe_gppb_get_pgpe_flags(PGPE_FLAG_CURRENT_READ_DISABLE))
    {
        G_pgpe_occ.idd_fit_avg_ma = G_pgpe_occ.idd_tb_accum / G_pgpe_occ.max_tb_delta;
        G_pgpe_occ.ics_fit_avg_ma = G_pgpe_occ.ics_tb_accum / G_pgpe_occ.max_tb_delta;
        G_pgpe_occ.ocs_avg_pct_fit =  G_pgpe_occ.ocs_avg_pct_tb_accum;
        G_pgpe_occ.idd_wof_avg_accum_ma += G_pgpe_occ.idd_fit_avg_ma;
        G_pgpe_occ.ics_wof_avg_accum_ma += G_pgpe_occ.ics_fit_avg_ma;
        G_pgpe_occ.ocs_avg_pct_wof_accum += G_pgpe_occ.ocs_avg_pct_fit;
        G_pgpe_occ.idd_tb_accum = 0;
        G_pgpe_occ.ics_tb_accum = 0;
        G_pgpe_occ.ocs_avg_pct_tb_accum = 0;
    }

    G_pgpe_occ.fit_tick++;
    //PK_TRACE("OCC: fit vdd_fit=0x%x,vcs_fit=%u,idd_fit=%u,ics_fit=%u",G_pgpe_occ.vdd_fit_avg_mv,G_pgpe_occ.vcs_fit_avg_mv,G_pgpe_occ.idd_fit_avg_ma,G_pgpe_occ.ics_fit_avg_ma);
    //PK_TRACE("OCC: fit vdd_wof=0x%x,vcs_wof=%u,idd_wof=%u,ics_wof=%u",G_pgpe_occ.vdd_wof_avg_accum_mv,G_pgpe_occ.vcs_wof_avg_accum_mv,G_pgpe_occ.idd_wof_avg_accum_ma,G_pgpe_occ.ics_wof_avg_accum_ma);
}

void pgpe_occ_sample_values()
{
    //Read OTBR
    G_pgpe_occ.present_tb = in32(TP_TPCHIP_OCC_OCI_OCB_OTBR);
    uint32_t delta_tb;

    //Calculate delta_tb while accounting for OTBR rollover
    if(G_pgpe_occ.present_tb > G_pgpe_occ.prev_tb)
    {
        delta_tb = G_pgpe_occ.present_tb - G_pgpe_occ.prev_tb;
    }
    else
    {
        delta_tb = G_pgpe_occ.present_tb - G_pgpe_occ.prev_tb + 0xFFFFFFFF;
    }

    //Read IDD and ICS
    //uint32_t idd_ma, ics_ma;

    if (!pgpe_gppb_get_pgpe_flags(PGPE_FLAG_CURRENT_READ_DISABLE))
    {
        pgpe_avsbus_current_read(pgpe_gppb_get_avs_bus_topology_vdd_avsbus_num(),
                                 pgpe_gppb_get_avs_bus_topology_vdd_avsbus_rail(),
                                 &G_pgpe_occ.idd_ma,
                                 CURRENT_SCALE_IDX_VDD);
        pgpe_avsbus_current_read(pgpe_gppb_get_avs_bus_topology_vcs_avsbus_num(),
                                 pgpe_gppb_get_avs_bus_topology_vcs_avsbus_rail(),
                                 &G_pgpe_occ.ics_ma,
                                 CURRENT_SCALE_IDX_VCS);

        //PK_TRACE("OCC: idd_ma=%u, ics_ma=%u, delta_tb=%u",G_pgpe_occ.idd_ma, G_pgpe_occ.ics_ma, delta_tb);
        G_pgpe_occ.idd_tb_accum = G_pgpe_occ.idd_ma * delta_tb;
        G_pgpe_occ.ics_tb_accum = G_pgpe_occ.ics_ma * delta_tb;
        G_pgpe_occ.ocs_avg_pct_tb_accum = pgpe_wov_ocs_is_overcurrent();
    }

    //Pstate, Pstate_Freq, Vdd, Vcs, and throttle index
    if (pgpe_pstate_is_pstate_enabled())
    {
        G_pgpe_occ.ps_tb_accum = (pgpe_pstate_get(pstate_curr) + pgpe_thr_ctrl_get_thr_idx()) * delta_tb;
        G_pgpe_occ.ps_freq_tb_accum = pgpe_pstate_get(pstate_curr) *
                                      delta_tb; //Pstate written to DPLL(no throttle value included)
        G_pgpe_occ.vdd_tb_accum = pgpe_pstate_get(vdd_curr) * delta_tb;
        G_pgpe_occ.vcs_tb_accum = pgpe_pstate_get(vcs_curr) * delta_tb;
        G_pgpe_occ.thr_idx_tb_accum = pgpe_thr_ctrl_get_thr_idx();
    }

    G_pgpe_occ.prev_tb = G_pgpe_occ.present_tb;
    //PK_TRACE("OCC: siv vdd=%u,vcsa=%u,idd=%u,ics=%u",pgpe_pstate_get(vdd_curr),pgpe_pstate_get(vcs_curr),idd_ma,ics_ma);
    //PK_TRACE("OCC: delta_tb=%u, tb=%u",delta_tb,G_pgpe_occ.prev_tb);
    //PK_TRACE("OCC: siv acvdd=%u,acvcsa=%u,acidd=%u,acics=%u",G_pgpe_occ.vdd_tb_accum,G_pgpe_occ.vcs_tb_accum,G_pgpe_occ.idd_tb_accum,G_pgpe_occ.ics_tb_accum);
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
