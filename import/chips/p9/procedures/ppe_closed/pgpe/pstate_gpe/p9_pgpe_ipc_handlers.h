/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_ipc_handlers.h $ */
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
#ifndef _P9_PGPE_IPC_H_
#define _P9_PGPE_IPC_H_

#include "pk.h"


//
// IPC Initialization and done hook
void p9_pgpe_ipc_init();
void p9_pgpe_ipc_irq_done_hook();

//
//405 IPCs
//
void p9_pgpe_ipc_405_start_stop(ipc_msg_t* cmd, void* arg);
void p9_pgpe_ipc_405_clips(ipc_msg_t* cmd, void* arg);
void p9_pgpe_ipc_405_set_pmcr(ipc_msg_t* cmd, void* arg);
void p9_pgpe_ipc_405_wof_control(ipc_msg_t* cmd, void* arg);
void p9_pgpe_ipc_405_wof_vfrt(ipc_msg_t* cmd, void* arg);

//
//SGPE IPCs
//
void p9_pgpe_ipc_sgpe_updt_active_cores(ipc_msg_t* cmd, void* arg);
void p9_pgpe_ipc_sgpe_updt_active_quads(ipc_msg_t* cmd, void* arg);
void p9_pgpe_ipc_ack_sgpe_ctrl_stop_updt_core_enable(ipc_msg_t* msg, void* arg);
void p9_pgpe_ipc_ack_sgpe_ctrl_stop_updt_core_disable(ipc_msg_t* msg, void* arg);

#endif //_P9_PGPE_IPC_H_
