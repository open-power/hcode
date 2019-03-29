/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_event_manager.c $   */
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
#include "pgpe_event_manager.h"
#include "pgpe_event_table.h"
#include "pgpe_event_process.h"

//Data
pgpe_event_manager_t G_pgpe_event_manager;
//uint32_t G_i;


//Local Functions
void pgpe_event_manager_run_booted();
void pgpe_event_manager_run_active();
void pgpe_event_manager_run_stopped();
void pgpe_event_manager_run_safe_mode();
void pgpe_event_manager_run_pm_suspend();
void pgpe_event_manager_upd_state(uint32_t status);


void pgpe_event_manager_init()
{
    G_pgpe_event_manager.pgpe_state_machine_status  = PGPE_SM_BOOTED;
}

void pgpe_event_manager_upd_state(uint32_t status)
{
    G_pgpe_event_manager.pgpe_state_machine_status  = status;
}


//
//
//
void pgpe_event_manager_run()
{

    PK_TRACE("Event Manager Init");
    out32(G_OCB_OCCFLG2, 0x00008000);

    while(1)
    {
        /*
        if(G_i == 0) {
            PK_TRACE("In while loop i=%d",G_i);
            G_i++;
        }*/
        // \\TBD: Need way to avoid this switch. Better way might be to call
        // a function pointer which is updated state transition
        //  \\TBD: Need a way to better check for events. Perhaps, make use of cntlzw instruction.
        //  That way can support upto 32 events. Will need to come up with events priority. Events
        //  priority can also be dependent on state.
        switch(G_pgpe_event_manager.pgpe_state_machine_status)
        {
            case PGPE_SM_INIT:
            case PGPE_SM_BOOTED:
                pgpe_event_manager_run_booted();
                break;

            case PGPE_SM_ACTIVE:
                pgpe_event_manager_run_active();
                break;

            case PGPE_SM_STOPPED:
                pgpe_event_manager_run_stopped();
                break;

            case PGPE_SM_SAFE_MODE:
                pgpe_event_manager_run_safe_mode();
                break;

            case PGPE_SM_PM_SUSPEND:
                pgpe_event_manager_run_pm_suspend();
                break;

            default:
                //TBD Most likely halt because PGPE data got corrupted
                break;
        }
    }
}


void pgpe_event_manager_run_booted()
{
    event_t* e;

    do
    {
        //Process
        //OCC_FAULT, QME_FAULT, XGPE_FAULT, and PVREF_FAULT
        //If any fault, then mark next state as SAFE_MODE and break

        //PM Complex Suspend
        //Skip Safe Mode processing. Only PM Complex Suspend
        //mark next state PM_COMPLEX_SUSPEND and break

        //Safe Mode
        //Process Safe Mode, but mark error no actuation can be done)
        //mark next state as SAFE_MODE and break

        //WOF_CTRL, PMCR_REQUEST
        //Ack with bad rc

        //PMCR_PCB
        //Do nothing

        e = pgpe_event_tbl_get(EV_IPC_CLIP_UPDT);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_clip_update_w_ack(e->args);
        }

        e = pgpe_event_tbl_get(EV_IPC_PSTATE_START_STOP);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_pstate_start_stop(e->args);
            //Mark next state as PSTATE_ACTIVE if pstate went active
            pgpe_event_manager_upd_state(PGPE_SM_ACTIVE);
        }
    }
    while(0);
}


void pgpe_event_manager_run_active()
{
    event_t* e;

    do
    {
        //Process
        //OCC_FAULT, QME_FAULT, XGPE_FAULT, and PVREF_FAULT
        //If any fault, then mark next state as SAFE_MODE and break

        //PM Complex Suspend
        //Do Safe Mode Processing
        //Mark next state as SAFE_MODE and keep PM_COMPLEX_SUSPEND event active and break

        //Safe Mode
        //Process Safe Mode
        //mark next state as SAFE_MODE and break

        //PSTATE_STOP(SCOM)
        //If pstate stopped, then mark next state as STOPPED and break

        //PSTATE_START_STOP
        e = pgpe_event_tbl_get(EV_IPC_PSTATE_START_STOP);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_pstate_start_stop(e->args);
            //If pstate stopped, then mark next state as STOPPED and break
            //pgpe_event_manager_upd_state(PGPE_SM_STOPPED);
            //break;
        }

        //CLIP UPDATE
        e = pgpe_event_tbl_get(EV_IPC_CLIP_UPDT);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_clip_update(e->args);
        }

        //WOF_CTRL,
        //Process

        //IPC_WOF VRT
        //Process

        //PMCR_REQUEST
        //Process
        e = pgpe_event_tbl_get(EV_IPC_SET_PMCR);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_pmcr_request(e->args);
        }

        //PMCR_PCB
        //Process

        //Do actuation

        //Do post actuation
        //WOF_VRT
        //CLIP_UPDATE
    }
    while(0);
}

void pgpe_event_manager_run_stopped()
{
    //Process
    //IPC_CLIP_UPDT
    //IPC_PSTATE_START_STOP
    //SAFE_MODE
    //PM_COMPLEX_SUSPEND
    //OCC_FAULT, QME_FAULT, XGPE_FAULT, and PVREF_FAULT
    event_t* e;

    do
    {
        //Process
        //OCC_FAULT, QME_FAULT, XGPE_FAULT, and PVREF_FAULT
        //If any fault, then mark next state as SAFE_MODE and break

        //PM Complex Suspend
        //Skip Safe Mode processing. Only PM Complex Suspend
        //mark next state PM_COMPLEX_SUSPEND and break

        //Safe Mode
        //Process Safe Mode, but mark error no actuation can be done)
        //mark next state as SAFE_MODE and break

        //WOF_CTRL, PMCR_REQUEST
        //Ack with bad rc

        //PMCR_PCB
        //Do nothing

        e = pgpe_event_tbl_get(EV_IPC_CLIP_UPDT);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_clip_update_w_ack(e->args);
        }

        e = pgpe_event_tbl_get(EV_IPC_PSTATE_START_STOP);

        if (e->status == EVENT_PENDING)
        {
            pgpe_process_pstate_start_stop(e->args);
            //mark next state as PSTATE_ACTIVE
        }
    }
    while(0);
}


void pgpe_event_manager_run_safe_mode()
{
    //Process
    //PM_COMPLEX_SUSPEND
    //OCC_FAULT, QME_FAULT, XGPE_FAULT, and PVREF_FAULT
    //event_t* e;

    do
    {
        //Process
        //OCC_FAULT, QME_FAULT, XGPE_FAULT, and PVREF_FAULT

        //PM Complex Suspend
        //Do PM Complex Suspend
        //Mark next state PM_COMPLEX_SUSPEND and break

        //Safe Mode
        //Do nothing

        //WOF_CTRL, PMCR_REQUEST, PMCR_PCB, CLIP_UPDATE, PSTATE_START_STOP
        //Ack with bad rc

    }
    while(0);

}

void pgpe_event_manager_run_pm_suspend()
{
    //event_t* e;

    do
    {
        //Process
        //OCC_FAULT, QME_FAULT, XGPE_FAULT, and PVREF_FAULT

        //PM Complex Suspend
        //Do nothing

        //Safe Mode
        //Do nothing

        //WOF_CTRL, PMCR_REQUEST, PMCR_PCB, CLIP_UPDATE, PSTATE_START_STOP
        //Ack with bad rc

    }
    while(0);


}
