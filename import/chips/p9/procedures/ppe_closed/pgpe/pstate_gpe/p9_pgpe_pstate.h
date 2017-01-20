/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_pstate.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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
#ifndef _P9_PGPE_PSTATE_HEADER_
#define _P9_PGPE_PSTATE_HEADER_

#include "pk.h"
#include "ipc_api.h"
#include "ipc_async_cmd.h"

#define MAX_IPC_PEND_TBL_ENTRIES                9
#define IPC_PEND_PSTATE_START                   0
#define IPC_PEND_PSTATE_STOP                    1
#define IPC_PEND_SGPE_ACTIVE_CORES_UPDT         2
#define IPC_PEND_SGPE_ACTIVE_QUADS_UPDT         3
#define IPC_PEND_CLIP_UPDT                      4
#define IPC_PEND_WOF_CTRL                       5
#define IPC_PEND_WOF_VFRT                       6
#define IPC_PEND_SET_PMCR_REQ                   7
#define IPC_PEND_SGPE_SUSPEND_PSTATES           8


#define ALL_QUADS_BIT_MASK      QUAD0_BIT_MASK | QUAD1_BIT_MASK | \
    QUAD2_BIT_MASK | QUAD3_BIT_MASK | \
    QUAD4_BIT_MASK | QUAD5_BIT_MASK
#define QUAD0_BIT_MASK          0x80
#define QUAD1_BIT_MASK          0x40
#define QUAD2_BIT_MASK          0x20
#define QUAD3_BIT_MASK          0x10
#define QUAD4_BIT_MASK          0x8
#define QUAD5_BIT_MASK          0x4

enum PSTATE_STATUS
{
    PSTATE_DISABLE       =    0,
    PSTATE_START_PENDING =    1,
    PSTATE_SUSPENDED     =    3,
    PSTATE_ENABLE        =    4
};

//
//Task list entry
//
typedef struct ipc_req
{
    ipc_msg_t* cmd;
    uint8_t pending_ack;
    uint8_t pending_processing;
} ipc_req_t;

//
//Functions called by threads
//
void p9_pgpe_pstate_init();
void p9_pgpe_pstate_update(uint8_t* quadPstates);
void p9_pgpe_pstate_do_auction(uint8_t quadAuctionRequest);
void p9_pgpe_pstate_calc_wof();
void p9_pgpe_pstate_apply_clips();
void p9_pgpe_pstate_ipc_rsp_cb_sem_post(ipc_msg_t* msg, void* arg);

#endif //
