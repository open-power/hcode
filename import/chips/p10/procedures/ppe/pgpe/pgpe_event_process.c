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
#include "p10_oci_proc_6.H"
#include "p10_oci_proc_7.H"
#include "p10_scom_eq_7.H"
#include "pgpe_resclk.h"
#include "pgpe_thr_ctrl.h"

//Local Functions
void pgpe_process_pstate_start();
void pgpe_process_pstate_stop();
void pgpe_process_set_pmcr_owner();
void pgpe_process_clip_update_post_actuate();
void pgpe_process_wof_enable();
void pgpe_process_wof_disable();
void pgpe_process_wof_ctrl_post_actuate();
void pgpe_process_wof_vrt_post_actuate();


void pgpe_process_pstate_start_stop(void* eargs)
{
    PK_TRACE("PEP: PS Start Stop");

    ipc_msg_t* cmd = (ipc_msg_t*)eargs;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    //Start
    if (args->action == PGPE_ACTION_PSTATE_START)
    {
        //If NOT immediate mode, then process this IPC. Otherwise, we ACK back with success
        if(pgpe_gppb_get_pgpe_flags(PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
        {

            //Check for PMCR onwer validity
            if ((args->pmcr_owner == PMCR_OWNER_HOST) ||
                (args->pmcr_owner == PMCR_OWNER_OCC)  ||
                (args->pmcr_owner == PMCR_OWNER_CHAR))
            {
                //If pstate is NOT enabled, run pstate start protocol.
                //Otherwise, only update owner
                if(!pgpe_pstate_is_pstate_enabled())
                {
                    pgpe_process_pstate_start();
                }

                pgpe_process_set_pmcr_owner(args->pmcr_owner);
            }
            else
            {
                PK_TRACE("PEP: Invalid PMCR Owner");
                args->msg_cb.rc = PGPE_RC_INVALID_PMCR_OWNER;
            }
        }
        else
        {
            PK_TRACE("PEP: PS Start Imm Mode");
            pgpe_pstate_set(pstate_status, PSTATE_STATUS_ENABLED);
        }

    }
    //Stop
    else
    {
        //If NOT immediate mode, then process this IPC. Otherwise, we ACK back with success
        if(pgpe_gppb_get_pgpe_flags(PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
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
            PK_TRACE("PEP: PS Stop Imm Mode");
            pgpe_pstate_set(pstate_status, PSTATE_STATUS_DISABLED);
        }
    }


    pgpe_occ_send_ipc_ack_cmd(cmd);
    pgpe_event_tbl_set_status(EV_IPC_PSTATE_START_STOP, EVENT_INACTIVE);
}

void pgpe_process_pstate_start()
{
    PK_TRACE("PSS: PS Start");
    //Read DPLL frequency
    uint32_t sync_pstate;
    uint32_t voltage, vcs_before_vdd = 0;
    int32_t move_frequency;
    dpll_stat_t dpll;
    dpll.value = pgpe_dpll_get_dpll();

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
        PK_TRACE("PSS: sync_ps > clip_min=0x%x, setting sync_ps=0x%x", pgpe_pstate_get(clip_min), sync_pstate);
        move_frequency = -1;
    }

    if (sync_pstate > pgpe_pstate_get(clip_max))
    {
        sync_pstate = pgpe_pstate_get(clip_max);
        PK_TRACE("PSS: sync_ps > clip_max=0x%x, setting sync_ps=0x%x", pgpe_pstate_get(clip_max), sync_pstate);
        move_frequency = 1;
    }

    pgpe_pstate_set(pstate_target, sync_pstate);
    pgpe_pstate_set(pstate_next, sync_pstate);

    //Read the external VDD and VCS
    pgpe_avsbus_voltage_read(pgpe_gppb_get(avs_bus_topology.vdd_avsbus_num),
                             pgpe_gppb_get(avs_bus_topology.vdd_avsbus_rail),
                             &voltage);
    pgpe_pstate_set(vdd_curr_ext, voltage);
    pgpe_avsbus_voltage_read(pgpe_gppb_get(avs_bus_topology.vcs_avsbus_num),
                             pgpe_gppb_get(avs_bus_topology.vcs_avsbus_rail),
                             &voltage);
    pgpe_pstate_set(vcs_curr_ext, voltage);

    PK_TRACE("PSS: vdd=%u vcs=%u", pgpe_pstate_get(vdd_curr_ext), pgpe_pstate_get(vcs_curr_ext));

    //If frequency moving down, then adjust frequency
    if (move_frequency < 0 )
    {
        pgpe_dpll_write(pgpe_pstate_get(pstate_next));
    }

    //Determine external VRM set points for sync pstate taking into account the
    //system design parameters
    pgpe_pstate_set(vdd_next, pgpe_pstate_intp_vdd_from_ps(pgpe_pstate_get(pstate_next),
                    VPD_PT_SET_BIASED) ); //\todo use correct format for scale
    pgpe_pstate_set(vcs_next, pgpe_pstate_intp_vcs_from_ps(pgpe_pstate_get(pstate_next),
                    VPD_PT_SET_BIASED) );//\todo use correct format for scale
    pgpe_pstate_set(vdd_next_uplift, pgpe_pstate_intp_vddup_from_ps(pgpe_pstate_get(pstate_next), VPD_PT_SET_BIASED, 1));
    pgpe_pstate_set(vcs_next_uplift, pgpe_pstate_intp_vcsup_from_ps(pgpe_pstate_get(pstate_next), VPD_PT_SET_BIASED));
    pgpe_pstate_set(vdd_next_ext, pgpe_pstate_get(vdd_next) + pgpe_pstate_get(vdd_next_uplift));
    pgpe_pstate_set(vcs_next_ext, pgpe_pstate_get(vcs_next) + pgpe_pstate_get(vcs_next_uplift));

    PK_TRACE("PSS: vdd_next=%u vdd_next_up=%u, vdd_next_ext=%u",
             pgpe_pstate_get(vdd_next),
             pgpe_pstate_get(vdd_next_uplift),
             pgpe_pstate_get(vdd_next_ext));
    PK_TRACE("PSS: vcs_next=%u vcs_next_up=%u, vcs_next_ext=%u",
             pgpe_pstate_get(vcs_next),
             pgpe_pstate_get(vcs_next_uplift),
             pgpe_pstate_get(vcs_next_ext));

    //Perform voltage adjustment
    //If new external VRM(VDD and VCS) set points different from present value, then
    //move VDD and/or VCS
    if ((pgpe_pstate_get(vdd_curr_ext) > pgpe_pstate_get(vdd_next_ext))
        && (pgpe_pstate_get(vcs_curr_ext) > pgpe_pstate_get(vcs_next_ext)))
    {
        vcs_before_vdd = 0;
    }
    else
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
        pgpe_dpll_write(pgpe_pstate_get(pstate_next));
    }

    pgpe_pstate_update_vdd_vcs_ps(); //Set current equal to next

    //Write PMSR
    pgpe_pstate_pmsr_updt();
    pgpe_pstate_pmsr_write();

    //Enable resonant clocks //\todo Lookup PGPE_FLAGS[resclk_disable]
    pgpe_resclk_enable(pgpe_pstate_get(pstate_curr));

    //Setup DDS delay values
    //Enable the DDS across all good cores

    //Change pstate status to START
    pgpe_pstate_set(pstate_status, PSTATE_STATUS_ENABLED);

    //Set OCCFLG2[PSTATE_PROTOCOL_ACTIVE]
    out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_WO_OR, BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE));
}

void pgpe_process_pstate_stop()
{
    PK_TRACE("PEP: PS Stop");

    //Disable PCB Type1(PMCR)
    out32(TP_TPCHIP_OCC_OCI_OCB_OIMR0_WO_OR, BIT32(17));//Disable PCB_Type1

    //Disable resonant clocks
    pgpe_resclk_disable();

    //DDS left untouched

    //Disable WOF
    pgpe_process_wof_disable();

    //\todo RTC: 214485
    //Disable WOV(undervolting/overvolting)

    //Change pstate status to STOP
    pgpe_pstate_set(pstate_status, PSTATE_STATUS_DISABLED);

    //Clear OCCFLG2[PSTATE_PROTOCOL_ACTIVE]
    out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_WO_CLEAR, BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE));
}

void pgpe_process_set_pmcr_owner(PMCR_OWNER owner)
{

    PK_TRACE("PEP: PS Owner %d", owner);
    //Set the PMCR owner
    pgpe_pstate_set(pmcr_owner, owner);

    //Enable/Disable PCB_Type1(PMCR Request Processing)
    if ((owner == PMCR_OWNER_HOST) || (owner == PMCR_OWNER_CHAR))
    {
        out32(TP_TPCHIP_OCC_OCI_OCB_OIMR0_WO_CLEAR, BIT32(17));//Enable PCB_Type1
        PPE_PUTSCOM_MC_Q(QME_QMCR_WO_OR, BIT64(8)); //Enable AUTO_PMCR_UPDATE
    }
    else
    {
        out32(TP_TPCHIP_OCC_OCI_OCB_OIMR0_WO_OR, BIT32(17));//Disable PCB_Type1
    }

    //Enable SCOM writes to PMCR if characterization mode
    if ((owner == PMCR_OWNER_CHAR))
    {
        PPE_PUTSCOM_MC_Q(QME_QMCR_WO_OR, BIT64(0));
    }
}

void pgpe_process_clip_update(void* eargs)
{
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    PK_TRACE("PEP: Clip Updt");

    if(pgpe_gppb_get_pgpe_flags(PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
    {
        pgpe_pstate_set(clip_min, args->ps_val_clip_max);
        pgpe_pstate_set(clip_max, args->ps_val_clip_min);

        pgpe_pstate_compute();
        pgpe_pstate_apply_clips();
        pgpe_event_tbl_set_status(EV_IPC_CLIP_UPDT, EVENT_PENDING_ACTUATION);
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

    if(pgpe_gppb_get_pgpe_flags(PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
    {
        pgpe_pstate_set(clip_min, args->ps_val_clip_max);
        pgpe_pstate_set(clip_max, args->ps_val_clip_min);

        pgpe_pstate_compute();
        pgpe_pstate_apply_clips();
    }

    pgpe_occ_send_ipc_ack_cmd(cmd);
    pgpe_event_tbl_set_status(EV_IPC_CLIP_UPDT, EVENT_INACTIVE);
}

void pgpe_process_clip_update_post_actuate()
{
    PK_TRACE("PEP: Clip Updt Post Actuate");

    if(pgpe_pstate_is_clip_bounded())
    {
        PK_TRACE("PEP: PS Clips Bounded");
        pgpe_occ_send_ipc_ack_type_rc(EV_IPC_CLIP_UPDT, PGPE_RC_SUCCESS);
        pgpe_event_tbl_set_status(EV_IPC_CLIP_UPDT, EVENT_INACTIVE);


        //Update PMSR
        pgpe_pstate_pmsr_updt();
        pgpe_pstate_pmsr_write();
    }
}

void pgpe_process_pmcr_request(void* eargs)
{
    PK_TRACE("PEP: PS PMCR");
    ipc_msg_t* cmd = (ipc_msg_t*)eargs;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_set_pmcr_t* args = (ipcmsg_set_pmcr_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    uint32_t i = 0;

    if(pgpe_gppb_get_pgpe_flags(PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
    {
        for (i = 0; i < MAX_QUADS; i++)
        {
            pgpe_pstate_set_ps_request(i, ((args->pmcr >> 48) & 0x00FF));
        }

        pgpe_pstate_compute();
        pgpe_pstate_apply_clips();
    }

    pgpe_occ_send_ipc_ack_cmd(cmd);
    pgpe_event_tbl_set_status(EV_IPC_SET_PMCR, EVENT_INACTIVE);
}

void pgpe_process_pcb_pmcr_request(void* eargs)
{
    PK_TRACE("PEP: PCB PMCR");
    pcb_set_pmcr_args_t* args = (pcb_set_pmcr_args_t*)eargs;
    PkMachineContext ctx;
    uint32_t q;

    //This is make sure that PCB Type1 interrupt can't
    //come in between and overwrite the PCB args.
    pk_critical_section_enter(&ctx);

    for (q = 0; q < MAX_QUADS; q++)
    {
        if(args->ps_valid[q])
        {
            pgpe_pstate_set_ps_request(q, (args->ps_request[q] & 0xFF));
            args->ps_valid[q] = 0;
        }
    }

    pk_critical_section_exit(&ctx);

    pgpe_pstate_compute();
    pgpe_pstate_apply_clips();

    pgpe_event_tbl_set_status(EV_PCB_SET_PMCR, EVENT_INACTIVE);
}

void pgpe_process_wof_ctrl(void* eargs)
{
    PK_TRACE("PEP: WOF CTRL");
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_wof_control_t* args = (ipcmsg_wof_control_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs
    uint32_t ack_now = 1;

    if(args->action == PGPE_ACTION_WOF_ON)
    {
        if(pgpe_gppb_get_pgpe_flags(PGPE_FLAG_WOF_IPC_IMMEDIATE_MODE) == 0)
        {
            pgpe_process_wof_enable();
            pgpe_event_tbl_set_status(EV_IPC_WOF_CTRL, EVENT_PENDING_ACTUATION);
            ack_now = 0;
        }
        else
        {
            pgpe_pstate_set(wof_status, WOF_STATUS_ENABLED);
        }
    }
    else if(args->action == PGPE_ACTION_WOF_OFF)
    {
        pgpe_process_wof_disable();
        pgpe_occ_send_ipc_ack_cmd((ipc_msg_t*)eargs);
        pgpe_event_tbl_set_status(EV_IPC_WOF_CTRL, EVENT_INACTIVE);
        pgpe_pstate_set(wof_status, WOF_STATUS_DISABLED);
    }
    else
    {
        //todo RTC: 214435 ERROR
    }

    if(ack_now)
    {
        pgpe_occ_send_ipc_ack_cmd((ipc_msg_t*)eargs);
        pgpe_event_tbl_set_status(EV_IPC_WOF_CTRL, EVENT_INACTIVE);
    }
}

void pgpe_process_wof_enable(ipcmsg_wof_control_t* args)
{
    if(!pgpe_pstate_is_pstate_enabled())
    {
        //\\todo RTC: 214435 INFO_ERROR
        //PGPE_RC_PSTATES_NOT_STARTED
    }

    //if wof already enabled
    if(pgpe_pstate_is_wof_enabled())
    {
        //\\todo RTC: 214435 INFO_ERROR
    }

    if(pgpe_pstate_get(vrt) == NULL)
    {
        //\\todo RTC: 214435 ERROR
        //PGPE_RC_WOF_START_WITHOUT_VRT
    }

    //Do wof_calc
    pgpe_pstate_compute_vratio(pgpe_pstate_get(pstate_curr));
    pgpe_pstate_compute_vindex();
    pgpe_pstate_set(clip_wof, pgpe_pstate_get(vrt)->data[pgpe_pstate_get(vindex)]);
    PK_TRACE("PEP: Vratio=0x%x, Vindex=0x%x, Clip_WOF=0x%x", pgpe_pstate_get(vratio_inst),
             pgpe_pstate_get(vindex),
             pgpe_pstate_get(clip_wof));

    pgpe_pstate_compute();
    pgpe_pstate_apply_clips();
}

void pgpe_process_wof_disable()
{
    if(!pgpe_pstate_is_wof_enabled())
    {
        //\\todo RTC: 214435 INFO_ERROR
    }

    if(!pgpe_pstate_is_pstate_enabled())
    {
        //\\todo RTC: 214435 INFO_ERROR
    }

    //Set WOF Clip used by pstate actuation to 0(remove clip)
    pgpe_pstate_set(clip_wof, 0);

}

void pgpe_process_wof_ctrl_post_actuate()
{
    PK_TRACE("PEP: WOF CTRL Post Actuate");

    if(pgpe_pstate_is_wof_clip_bounded())
    {
        PK_TRACE("PEP: WOF Clip Bounded");
        pgpe_occ_send_ipc_ack_type_rc(EV_IPC_WOF_CTRL, PGPE_RC_SUCCESS);
        pgpe_event_tbl_set_status(EV_IPC_WOF_CTRL, EVENT_INACTIVE);
        pgpe_pstate_set(wof_status, WOF_STATUS_ENABLED);
    }
}

void pgpe_process_wof_vrt(void* eargs)
{
    PK_TRACE("PEP: WOF VRT");
    ipc_msg_t* cmd = (ipc_msg_t*)eargs;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)eargs;
    ipcmsg_wof_vrt_t* args = (ipcmsg_wof_vrt_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS; //Assume IPC will process ok. Any error case set other RCs

    if(pgpe_gppb_get_pgpe_flags(PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) == 0)
    {
        //Check that VRT pointer is not NULL
        if (args->idd_vrt_ptr == NULL)
        {
            PK_TRACE("PEP: NULL VRT");
            //\todo Error
        }

        pgpe_pstate_set_vrt(args->idd_vrt_ptr);
        PK_TRACE("PEP: VRT_PTR=0x%x", (uint32_t)args->idd_vrt_ptr);

        //If WOF is enabled
        if(pgpe_pstate_is_wof_enabled())
        {
            //Do vratio instantaneous calculation
            pgpe_pstate_compute_vratio(pgpe_pstate_get(pstate_curr));
            pgpe_pstate_compute_vindex();
            pgpe_pstate_set(clip_wof, args->idd_vrt_ptr->data[pgpe_pstate_get(vindex)]);
            PK_TRACE("PEP: Vratio=0x%x, Vindex=0x%x, Clip_WOF=0x%x", pgpe_pstate_get(vratio_inst),
                     pgpe_pstate_get(vindex),
                     pgpe_pstate_get(clip_wof));
            pgpe_event_tbl_set_status(EV_IPC_WOF_VRT, EVENT_PENDING_ACTUATION);

            pgpe_pstate_compute();
            pgpe_pstate_apply_clips();
        }
        else
        {
            //ACK back
            pgpe_occ_send_ipc_ack_cmd(cmd);
            pgpe_event_tbl_set_status(EV_IPC_WOF_VRT, EVENT_INACTIVE);
        }
    }
    else
    {
        pgpe_occ_send_ipc_ack_cmd((ipc_msg_t*)eargs);
        pgpe_event_tbl_set_status(EV_IPC_WOF_VRT, EVENT_INACTIVE);
    }

}

void pgpe_process_wof_vrt_post_actuate()
{
    PK_TRACE("PEP: WOF VRT Post Actuate");

    if(pgpe_pstate_is_wof_clip_bounded())
    {
        PK_TRACE("PEP: WOF Clip Bounded");
        pgpe_occ_send_ipc_ack_type_rc(EV_IPC_WOF_VRT, PGPE_RC_SUCCESS);
        pgpe_event_tbl_set_status(EV_IPC_WOF_VRT, EVENT_INACTIVE);

        if(pgpe_pstate_get(clip_wof) >= pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, POWERSAVE))
        {
            pgpe_thr_ctrl_update(pgpe_pstate_get(clip_wof));
        }
        else
        {
            pgpe_thr_ctrl_update(pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, POWERSAVE));
        }
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
