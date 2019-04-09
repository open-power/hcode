/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_event_process.c $   */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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
#include "pgpe_event_process.h"
#include "pgpe_event_table.h"
#include "pgpe_occ.h"
#include "pgpe_pstate.h"
#include "pgpe_header.h"
#include "pgpe_dpll.h"
#include "pgpe_gppb.h"
#include "pgpe_avsbus_driver.h"

//Local Functions
void pgpe_process_pstate_start();
void pgpe_process_pstate_stop();
void pgpe_process_set_pmcr_owner();
void pgpe_process_wof_enable();
void pgpe_process_wof_disable();


void pgpe_process_pstate_start_stop(void* eargs)
{
    PK_TRACE("PEP: PS Stop");

    ipc_msg_t* cmd = (ipc_msg_t*)eargs;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    //Start
    if (args->action == PGPE_ACTION_PSTATE_START)
    {
        //If NOT immediate mode, then process this IPC. Otherwise, we ACK back with success
        if((pgpe_header_get(g_pgpe_flags) & PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
        {

            //Check for PMCR onwer validity
            if ((args->pmcr_owner == PMCR_OWNER_HOST) ||
                (args->pmcr_owner == PMCR_OWNER_OCC)  ||
                (args->pmcr_owner == PMCR_OWNER_CHAR))
            {
                //If pstate is NOT enabled, run pstate start protocol.
                //Otherwise, only update owner
                if(pgpe_pstate_is_pstate_enabled())
                {
                    pgpe_process_pstate_start();
                }

                pgpe_process_set_pmcr_owner(args->pmcr_owner);
            }
            else
            {
                args->msg_cb.rc = PGPE_RC_INVALID_PMCR_OWNER;
            }
        }
        else
        {
            pgpe_pstate_set(pstate_status, PSTATE_STATUS_ENABLED);
        }

    }
    //Stop
    else
    {
        //If NOT immediate mode, then process this IPC. Otherwise, we ACK back with success
        if((pgpe_header_get(g_pgpe_flags) & PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
        {
            //Only run Pstate Stop protocol if Pstate is enabled.
            //Otherwise, just ACK back
            if(pgpe_pstate_is_pstate_enabled())
            {
                pgpe_process_pstate_stop();
            }
        }
        else
        {
            pgpe_pstate_set(pstate_status, PSTATE_STATUS_DISABLED);
        }
    }


    pgpe_occ_send_ipc_ack_cmd(cmd);
    pgpe_event_tbl_set_status(EV_IPC_PSTATE_START_STOP, EVENT_INACTIVE);
}

void pgpe_process_pstate_start()
{
    PK_TRACE("PEP: PS Start");
    //Read DPLL frequency
    uint32_t sync_pstate;
    uint32_t voltage, move_frequency, vcs_before_vdd = 0;
    dpll_stat_t dpll;
    GPE_GETSCOM(TPC_DPLL_STAT_REG, dpll.value);

    //2. Determine the highest pstate that matches with the read DPLL frequency
    if (dpll.fields.freqout > pgpe_gppb_get(dpll_pstate0_value))
    {
        sync_pstate = 0;
        move_frequency = -1;
    }
    else
    {
        sync_pstate = pgpe_gppb_get(dpll_pstate0_value) - dpll.fields.freqout;
        move_frequency = 0;
    }

    PK_TRACE("PSS: DPLL=0x%x DPLL0=0x%x syncPS=0x%x", dpll.fields.freqout, pgpe_gppb_get(dpll_pstate0_value), sync_pstate);

    //3. Clip the pstate
    if (sync_pstate < pgpe_pstate_get(clip_min))
    {
        sync_pstate = pgpe_pstate_get(clip_min);
        move_frequency = -1;
    }

    if (sync_pstate > pgpe_pstate_get(clip_max))
    {
        sync_pstate = pgpe_pstate_get(clip_max);
        move_frequency = 1;
    }

    //Read the external VDD and VCS
    pgpe_avsbus_voltage_read(pgpe_gppb_get(avs_bus_topology.vdd_avsbus_num),
                             pgpe_gppb_get(avs_bus_topology.vdd_avsbus_rail),
                             &voltage);
    pgpe_pstate_set(vdd_curr_ext, voltage);
    pgpe_avsbus_voltage_read(pgpe_gppb_get(avs_bus_topology.vcs_avsbus_num),
                             pgpe_gppb_get(avs_bus_topology.vcs_avsbus_rail),
                             &voltage);
    pgpe_pstate_set(vcs_curr_ext, voltage);

    //If frequency moving down, then adjust frequency
    if (move_frequency < 0 )
    {
        pgpe_dpll_write(sync_pstate);
    }

    //Determine external VRM set points for sync pstate taking into account the
    //system design parameters
    pgpe_pstate_set(vdd_next, pgpe_pstate_intp_vdd_from_ps(sync_pstate, VPD_PT_SET_BIASED));
    pgpe_pstate_set(vcs_next, pgpe_pstate_intp_vcs_from_ps(sync_pstate, VPD_PT_SET_BIASED ));
    pgpe_pstate_set(vdd_next_uplift, pgpe_pstate_intp_vddup_from_ps(sync_pstate, VPD_PT_SET_BIASED));
    pgpe_pstate_set(vcs_next_uplift, pgpe_pstate_intp_vcsup_from_ps(sync_pstate, VPD_PT_SET_BIASED));
    pgpe_pstate_set(vdd_next_ext, pgpe_pstate_get(vdd_next) + pgpe_pstate_get(vdd_next_uplift));
    pgpe_pstate_set(vcs_next_ext, pgpe_pstate_get(vcs_next) + pgpe_pstate_get(vcs_next_uplift));

    //Perform voltage adjustment
    //If new external VRM(VDD and VCS) set points different from present value, then
    //move VDD and/or VCS
    if ((pgpe_pstate_get(vdd_curr_ext) > pgpe_pstate_get(vdd_next_ext))
        && (pgpe_pstate_get(vcs_curr_ext) > pgpe_pstate_get(vcs_next_ext)))
    {
        vcs_before_vdd = 0;
    }
    else if ((pgpe_pstate_get(vdd_curr_ext) < pgpe_pstate_get(vdd_next_ext))
             && (pgpe_pstate_get(vcs_curr_ext) < pgpe_pstate_get(vcs_next_ext)))
    {
        vcs_before_vdd = 1;
    }
    else if ((pgpe_pstate_get(vdd_curr_ext) > pgpe_pstate_get(vdd_next_ext))
             && (pgpe_pstate_get(vcs_curr_ext) < pgpe_pstate_get(vcs_next_ext)))
    {
        vcs_before_vdd = 1;
    }
    else if ((pgpe_pstate_get(vdd_curr_ext) < pgpe_pstate_get(vdd_next_ext))
             && (pgpe_pstate_get(vcs_curr_ext) > pgpe_pstate_get(vcs_next_ext)))
    {
        vcs_before_vdd = 1;
    }

    if(vcs_before_vdd)
    {
        pgpe_avsbus_voltage_write(pgpe_gppb_get(avs_bus_topology.vcs_avsbus_num),
                                  pgpe_gppb_get(avs_bus_topology.vcs_avsbus_rail),
                                  pgpe_pstate_get(vcs_next_ext));
        pgpe_avsbus_voltage_write(pgpe_gppb_get(avs_bus_topology.vdd_avsbus_num),
                                  pgpe_gppb_get(avs_bus_topology.vdd_avsbus_rail),
                                  pgpe_pstate_get(vdd_next_ext));
    }
    else
    {
        pgpe_avsbus_voltage_write(pgpe_gppb_get(avs_bus_topology.vdd_avsbus_num),
                                  pgpe_gppb_get(avs_bus_topology.vdd_avsbus_rail),
                                  pgpe_pstate_get(vdd_next_ext));
        pgpe_avsbus_voltage_write(pgpe_gppb_get(avs_bus_topology.vcs_avsbus_num),
                                  pgpe_gppb_get(avs_bus_topology.vcs_avsbus_rail),
                                  pgpe_pstate_get(vcs_next_ext));
    }

    //If frequency moving up, then adjust frequency
    if (move_frequency > 0 )
    {
        pgpe_dpll_write(sync_pstate);
    }

    //Enable the resonant clocks
    //Setup DDS delay values
    //Enable the DDS across all good cores
    //Change pstate status to START
    pgpe_pstate_set(pstate_status, PSTATE_STATUS_ENABLED);
}

void pgpe_process_pstate_stop()
{
    PK_TRACE("PEP: PS Stop");
    //Disable resonant clocks
    //DDS left untouched
    //Disable WOF
    //Disable WOV(undervolting/overvolting)
    //Change pstate status to STOP
    pgpe_pstate_set(pstate_status, PSTATE_STATUS_DISABLED);
}

void pgpe_process_set_pmcr_owner(PMCR_OWNER owner)
{

    PK_TRACE("PEP: PS Owner");
    //Set the PMCR owner
    pgpe_pstate_set(pmcr_owner, owner);

    //\todo
    //If PMCR owner CHAR or HOST
    //Check that PMCR HW assist is enabled
    //if assist not enabled,
    //PGPE checks all the QME Flag[PMCR Ready] bits
    //If check fails, critical error log, and give fail rc back to OCC
}

void pgpe_process_clip_update(void* eargs)
{
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    PK_TRACE("PEP: Clip Updt");

    if((pgpe_header_get(g_pgpe_flags) & PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
    {
        pgpe_pstate_set(clip_min, args->ps_val_clip_min);
        pgpe_pstate_set(clip_max, args->ps_val_clip_max);

        pgpe_pstate_compute();
        pgpe_pstate_apply_clips();
    }
    else
    {
        pgpe_occ_send_ipc_ack_cmd((ipc_msg_t*)eargs);
        pgpe_event_tbl_set_status(EV_IPC_CLIP_UPDT, EVENT_INACTIVE);
    }
}

void pgpe_process_clip_update_w_ack(void* eargs)
{
    ipc_msg_t* cmd = (ipc_msg_t*)eargs;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    PK_TRACE("PEP: Clip Updt w/ack");

    if((pgpe_header_get(g_pgpe_flags) & PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
    {
        pgpe_pstate_set(clip_min, args->ps_val_clip_min);
        pgpe_pstate_set(clip_max, args->ps_val_clip_max);

        pgpe_pstate_compute();
        pgpe_pstate_apply_clips();
    }

    pgpe_occ_send_ipc_ack_cmd(cmd);
    pgpe_event_tbl_set_status(EV_IPC_CLIP_UPDT, EVENT_INACTIVE);
}

void pgpe_process_pmcr_request(void* eargs)
{
    PK_TRACE("PEP: PS PMCR");
    ipc_msg_t* cmd = (ipc_msg_t*)eargs;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_set_pmcr_t* args = (ipcmsg_set_pmcr_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    uint32_t i = 0;

    if((pgpe_header_get(g_pgpe_flags) & PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
    {
        for (i = 0; i < MAX_CORES; i++)
        {
            pgpe_pstate_set_ps_request(i, args->pmcr);
        }

        pgpe_pstate_compute();
        pgpe_pstate_apply_clips();
    }

    pgpe_occ_send_ipc_ack_cmd(cmd);
    pgpe_event_tbl_set_status(EV_IPC_SET_PMCR, EVENT_INACTIVE);
}

void pgpe_process_wof_ctrl(void* eargs)
{
    PK_TRACE("PEP: WOF CTRL");
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_wof_control_t* args = (ipcmsg_wof_control_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    if((pgpe_header_get(g_pgpe_flags) & PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
    {
    }
    else
    {
        pgpe_occ_send_ipc_ack_cmd((ipc_msg_t*)eargs);
        pgpe_event_tbl_set_status(EV_IPC_WOF_CTRL, EVENT_INACTIVE);
    }
}

void pgpe_process_wof_enable()
{
}

void pgpe_process_wof_disable()
{
}

void pgpe_process_wof_vrt(void* eargs)
{
    PK_TRACE("PEP: WOF VRT");
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_wof_vrt_t* args = (ipcmsg_wof_vrt_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    if((pgpe_header_get(g_pgpe_flags) & PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
    {
    }
    else
    {
        pgpe_occ_send_ipc_ack_cmd((ipc_msg_t*)eargs);
        pgpe_event_tbl_set_status(EV_IPC_WOF_VRT, EVENT_INACTIVE);
    }

}

void pgpe_process_safe_mode(void* args)
{
}

void pgpe_process_complex_suspend(void* args)
{
}

void pgpe_process_occ_fault()
{
}

void pgpe_process_qme_fault()
{
}

void pgpe_process_xgpe_fault()
{
}

void pgpe_process_pvref_fault()
{
}
