/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_event_manager.c $   */
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
#include "pgpe_event_manager.h"
#include "pgpe_event_table.h"
#include "pgpe_event_process.h"
#include "pgpe_pstate.h"
#include "pgpe_occ.h"
#include "pgpe_dpll.h"
#include "p10_oci_proc.H"

//Data
pgpe_event_manager_t G_pgpe_event_manager __attribute__((section (".data_structs")));

//Local Functions
void pgpe_event_manager_run_booted_or_stopped();
void pgpe_event_manager_run_active();
void pgpe_event_manager_run_safe_mode();
void pgpe_event_manager_upd_state(uint32_t status);


void pgpe_event_manager_init()
{
    PK_TRACE("PEM: Init");
    G_pgpe_event_manager.pgpe_state_machine_status  = PGPE_SM_BOOTED;
}

inline void* pgpe_event_manager_data_addr()
{
    return &G_pgpe_event_manager;
}

void pgpe_event_manager_upd_state(uint32_t status)
{
    G_pgpe_event_manager.pgpe_state_machine_status  = status;
}

void pgpe_event_manager_task_init()
{
    out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_WO_OR, BIT32(PGPE_ACTIVE));
}

//
//
//
void pgpe_event_manager_run()
{


    uint32_t done;

    do
    {
        // \\ \todo: Need way to avoid this switch. Better way might be to call
        // a function pointer which is updated state transition
        //  \\ \todo: Need a way to better check for events. Perhaps, make use of cntlzw instruction.
        //  That way can support upto 32 events. Will need to come up with events priority. Events
        //  priority can also be dependent on state.
        done = 1;

        switch(G_pgpe_event_manager.pgpe_state_machine_status)
        {
            case PGPE_SM_INIT:
            case PGPE_SM_BOOTED:
                pgpe_event_manager_run_booted_or_stopped();
                break;

            case PGPE_SM_ACTIVE:
                pgpe_event_manager_run_active();

                if(!pgpe_pstate_is_at_target())
                {
                    done = 0;
                }

                break;

            case PGPE_SM_STOPPED:
                pgpe_event_manager_run_booted_or_stopped();
                break;

            case PGPE_SM_SAFE_MODE:
                pgpe_event_manager_run_safe_mode();
                break;

            default:
                // \todo Most likely halt because PGPE data got corrupted
                break;
        }
    }
    while(!done);
}


void pgpe_event_manager_run_booted_or_stopped()
{
    event_t* e;

    do
    {
        //Process \\todo
        //OCC_FAULT, QME_FAULT, XGPE_FAULT, and PVREF_FAULT
        //If any fault, then mark next state as SAFE_MODE and break

        //Safe Mode
        //Process Safe Mode, but mark error no actuation can be done)
        //mark next state as SAFE_MODE and break
        e = pgpe_event_tbl_get(EV_SAFE_MODE);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_safe_mode(e->args);
            pgpe_event_manager_upd_state(PGPE_SM_SAFE_MODE);
            break; //Don't process any other pending requests
        }

        //WOF_CTRL
        //Ack with bad rc
        e = pgpe_event_tbl_get(EV_IPC_WOF_CTRL);

        if (e->status == EVENT_PENDING)
        {
            pgpe_occ_send_ipc_ack_cmd_rc((ipc_msg_t*)e->args, PGPE_RC_PSTATES_NOT_STARTED);
            pgpe_event_tbl_set_status(EV_IPC_WOF_CTRL, EVENT_INACTIVE);
        }

        //WOF_VRT
        e = pgpe_event_tbl_get(EV_IPC_WOF_VRT);

        if (e->status == EVENT_PENDING)
        {
            pgpe_occ_send_ipc_ack_cmd_rc((ipc_msg_t*)e->args, PGPE_RC_PSTATES_NOT_STARTED);
            pgpe_event_tbl_set_status(EV_IPC_WOF_VRT, EVENT_INACTIVE);
        }

        //SET_PMCR IPC
        //Ack with bad rc
        e = pgpe_event_tbl_get(EV_IPC_SET_PMCR);

        if (e->status == EVENT_PENDING)
        {
            pgpe_occ_send_ipc_ack_cmd_rc((ipc_msg_t*)e->args, PGPE_RC_PSTATES_NOT_STARTED);
            pgpe_event_tbl_set_status(EV_IPC_SET_PMCR, EVENT_INACTIVE);
        }

        //PMCR_PCB
        e = pgpe_event_tbl_get(EV_PCB_SET_PMCR);

        if (e->status == EVENT_PENDING)
        {
            //\todo This should never happen. TBD Should this be an error??
            pgpe_event_tbl_set_status(EV_PCB_SET_PMCR, EVENT_INACTIVE);
        }

        //CLIP_UPDT
        e = pgpe_event_tbl_get(EV_IPC_CLIP_UPDT);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_clip_update_w_ack(e->args);
        }

        //PSTART_START_STOP
        e = pgpe_event_tbl_get(EV_IPC_PSTATE_START_STOP);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_pstate_start_stop(e->args);

            //Mark next state as PSTATE_ACTIVE if pstates are enabled
            if (pgpe_pstate_is_pstate_enabled())
            {
                pgpe_event_manager_upd_state(PGPE_SM_ACTIVE);
            }
        }
    }
    while(0);
}


void pgpe_event_manager_run_active()
{
    event_t* e;

    do
    {
        //Process \\todo
        //OCC_FAULT, QME_FAULT, XGPE_FAULT, and PVREF_FAULT
        //If any fault, then mark next state as SAFE_MODE and break

        //Safe Mode \\todo
        //Process Safe Mode
        //mark next state as SAFE_MODE and break
        e = pgpe_event_tbl_get(EV_SAFE_MODE);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_safe_mode(e->args);
            pgpe_event_manager_upd_state(PGPE_SM_SAFE_MODE);
            break; //Don't process any other pending requests
        }

        //PSTATE_STOP(SCOM) \\todo
        //If pstate stopped, then mark next state as STOPPED and break

        //PSTATE_START_STOP
        e = pgpe_event_tbl_get(EV_IPC_PSTATE_START_STOP);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_pstate_start_stop(e->args);

            //If pstate stopped, then mark next state as STOPPED and break
            if (!pgpe_pstate_is_pstate_enabled())
            {
                pgpe_event_manager_upd_state(PGPE_SM_STOPPED);
            }

            break;
        }

        //CLIP UPDATE
        e = pgpe_event_tbl_get(EV_IPC_CLIP_UPDT);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_clip_update(e->args);
        }

        //WOF_CTRL
        e = pgpe_event_tbl_get(EV_IPC_WOF_CTRL);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_wof_ctrl(e->args);
        }

        //IPC_WOF VRT
        e = pgpe_event_tbl_get(EV_IPC_WOF_VRT);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_wof_vrt(e->args);
        }

        //PMCR_REQUEST
        //Process
        e = pgpe_event_tbl_get(EV_IPC_SET_PMCR);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_pmcr_request(e->args);
        }

        //PMCR_PCB
        //Process
        e = pgpe_event_tbl_get(EV_PCB_SET_PMCR);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_pcb_pmcr_request(e->args);
            pgpe_event_tbl_set_status(EV_PCB_SET_PMCR, EVENT_INACTIVE);
        }

        //Do actuation
        if(!pgpe_pstate_is_at_target())
        {
            pgpe_pstate_actuate_step();
        }

        //Do post actuation
        //WOF_CTRL
        e = pgpe_event_tbl_get(EV_IPC_WOF_CTRL);

        if (e->status == EVENT_PENDING_ACTUATION)
        {
            pgpe_process_wof_ctrl_post_actuate();
        }

        //WOF_VRT
        e = pgpe_event_tbl_get(EV_IPC_WOF_VRT);

        if (e->status == EVENT_PENDING_ACTUATION)
        {
            pgpe_process_wof_vrt_post_actuate();
        }

        //CLIP_UPDATE
        e = pgpe_event_tbl_get(EV_IPC_CLIP_UPDT);

        if (e->status == EVENT_PENDING_ACTUATION)
        {
            pgpe_process_clip_update_post_actuate();
        }

    }
    while(0);
}

void pgpe_event_manager_run_safe_mode()
{
    //Process
    //OCC_FAULT, QME_FAULT, XGPE_FAULT, and PVREF_FAULT
    event_t* e;

    do
    {
        //Process
        //OCC_FAULT, QME_FAULT, XGPE_FAULT, and PVREF_FAULT

        //Safe Mode
        //Do nothing
        e = pgpe_event_tbl_get(EV_SAFE_MODE);

        if (e->status == EVENT_PENDING)
        {
            pgpe_event_tbl_set_status(EV_SAFE_MODE, EVENT_INACTIVE);
        }

        //WOF_CTRL, PMCR_REQUEST, PMCR_PCB, CLIP_UPDATE, PSTATE_START_STOP
        //Ack with bad rc
        //WOF_CTRL
        //Ack with bad rc
        e = pgpe_event_tbl_get(EV_IPC_WOF_CTRL);

        if (e->status == EVENT_PENDING)
        {
            pgpe_occ_send_ipc_ack_cmd_rc((ipc_msg_t*)e->args, PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE);
            pgpe_event_tbl_set_status(EV_IPC_WOF_CTRL, EVENT_INACTIVE);
        }

        //WOF_VRT
        e = pgpe_event_tbl_get(EV_IPC_WOF_VRT);

        if (e->status == EVENT_PENDING)
        {
            pgpe_occ_send_ipc_ack_cmd_rc((ipc_msg_t*)e->args, PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE);
            pgpe_event_tbl_set_status(EV_IPC_WOF_VRT, EVENT_INACTIVE);
        }

        //SET_PMCR IPC
        //Ack with bad rc
        e = pgpe_event_tbl_get(EV_IPC_SET_PMCR);

        if (e->status == EVENT_PENDING)
        {
            pgpe_occ_send_ipc_ack_cmd_rc((ipc_msg_t*)e->args, PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE);
            pgpe_event_tbl_set_status(EV_IPC_SET_PMCR, EVENT_INACTIVE);
        }

        //PMCR_PCB
        e = pgpe_event_tbl_get(EV_PCB_SET_PMCR);

        if (e->status == EVENT_PENDING)
        {
            //\todo This should never happen. TBD Should this be an error??
            pgpe_event_tbl_set_status(EV_PCB_SET_PMCR, EVENT_INACTIVE);
        }

        //CLIP_UPDT
        e = pgpe_event_tbl_get(EV_IPC_CLIP_UPDT);

        if (e->status == EVENT_PENDING)
        {
            pgpe_occ_send_ipc_ack_cmd_rc((ipc_msg_t*)e->args, PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE);
            pgpe_event_tbl_set_status(EV_IPC_CLIP_UPDT, EVENT_INACTIVE);
        }

        //PSTART_START_STOP
        e = pgpe_event_tbl_get(EV_IPC_PSTATE_START_STOP);

        if (e->status == EVENT_PENDING)
        {
            pgpe_occ_send_ipc_ack_cmd_rc((ipc_msg_t*)e->args, PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE);
            pgpe_event_tbl_set_status(EV_IPC_PSTATE_START_STOP, EVENT_INACTIVE);
        }

    }
    while(0);

}
