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

//Local Functions
void pgpe_process_pstate_start();
void pgpe_process_pstate_stop();
void pgpe_process_change_pmcr_owner();
void pgpe_process_wof_enable();
void pgpe_process_wof_disable();


void pgpe_process_pstate_start_stop(void* args)
{
    pgpe_occ_send_ipc_ack(EV_IPC_PSTATE_START_STOP, PGPE_RC_SUCCESS);
    pgpe_event_tbl_set_status(EV_IPC_PSTATE_START_STOP, EVENT_INACTIVE);
}

void pgpe_process_pstate_start()
{
}

void pgpe_process_pstate_stop()
{
}

void pgpe_process_change_pmcr_owner(void* args)
{
}

void pgpe_process_clip_update(void* args)
{
    pgpe_occ_send_ipc_ack(EV_IPC_CLIP_UPDT, PGPE_RC_SUCCESS);
    pgpe_event_tbl_set_status(EV_IPC_CLIP_UPDT, EVENT_INACTIVE);
}

void pgpe_process_clip_update_w_ack(void* args)
{
    pgpe_occ_send_ipc_ack(EV_IPC_CLIP_UPDT, PGPE_RC_SUCCESS);
    pgpe_event_tbl_set_status(EV_IPC_CLIP_UPDT, EVENT_INACTIVE);
}

void pgpe_process_pmcr_request(void* args)
{
    pgpe_occ_send_ipc_ack(EV_IPC_SET_PMCR, PGPE_RC_SUCCESS);
    pgpe_event_tbl_set_status(EV_IPC_SET_PMCR, EVENT_INACTIVE);
}

void pgpe_process_wof_ctrl(void* args)
{
    pgpe_occ_send_ipc_ack(EV_IPC_WOF_CTRL, PGPE_RC_SUCCESS);
    pgpe_event_tbl_set_status(EV_IPC_WOF_CTRL, EVENT_INACTIVE);
}

void pgpe_process_wof_enable(void* args)
{
}

void pgpe_process_wof_disable(void* args)
{
}

void pgpe_process_wof_vrt(void* args)
{
    pgpe_occ_send_ipc_ack(EV_IPC_WOF_VRT, PGPE_RC_SUCCESS);
    pgpe_event_tbl_set_status(EV_IPC_WOF_VRT, EVENT_INACTIVE);
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
