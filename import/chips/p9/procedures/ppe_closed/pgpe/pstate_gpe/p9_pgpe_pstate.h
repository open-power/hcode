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
#include "pstate_pgpe_occ_api.h"
#include "ipc_messages.h"
#include "p9_pgpe_header.h"


#define MAX_IPC_PEND_TBL_ENTRIES                9
#define IPC_PEND_PSTATE_START_STOP              0
#define IPC_PEND_SGPE_ACTIVE_CORES_UPDT         1
#define IPC_PEND_SGPE_ACTIVE_QUADS_UPDT         2
#define IPC_PEND_CLIP_UPDT                      3
#define IPC_PEND_WOF_CTRL                       4
#define IPC_PEND_WOF_VFRT                       5
#define IPC_PEND_SET_PMCR_REQ                   6
#define IPC_PEND_SGPE_SUSPEND_PSTATES           7

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
    PSTATE_INIT                                 =    0, //PGPE Booted
    PSTATE_ACTIVE                               =    1, //Pstates are active
    PSTATE_STOPPED                              =    2, //Pstates are stopped
    PSTATE_SUSPENDED_WHILE_STOPPED_INIT         =    3, //Suspended by SGPE IPC
    PSTATE_SUSPENDED_WHILE_ACTIVE               =    4, //Suspended by SGPE IPC
    PSTATE_PM_SUSPEND_PENDING                   =    5, //PM Complex Suspend Pending
    PSTATE_PM_SUSPENDED                         =    6, //PM Complex Suspend
    PSTATE_SAFE_MODE                            =    7  //Safe Mode
};

//Task list entry
typedef struct ipc_req
{
    ipc_msg_t* cmd;
    uint8_t pending_ack;
    uint8_t pending_processing;
    uint8_t pad[2];
} ipc_req_t;

/// PGPE PState
typedef struct
{
    uint8_t pstatesStatus;
    uint8_t safePstate;
    uint8_t pmcrOwner;
    uint8_t wofEnabled;                   //wof enable/disable
    uint8_t wofPending;                   //wof enable pending
    uint8_t wofClip;                      //wof clip
    uint8_t psClipMax[MAX_QUADS],         //higher numbered(min freq and volt)
            psClipMin[MAX_QUADS];         //lower numbered(max freq and volt)
    uint8_t coresPSRequest[MAX_CORES];    //per core requested pstate
    uint8_t quadPSComputed[MAX_QUADS];    //computed Pstate per quad
    uint8_t globalPSComputed;             //computed global Pstate
    uint8_t pad0;
    uint8_t quadPSTarget[MAX_QUADS];      //target Pstate per quad
    uint8_t globalPSTarget;               //target global Pstate
    uint8_t pad1;
    uint8_t quadPSCurr[MAX_QUADS];      //target Pstate per quad
    uint8_t globalPSCurr;               //target global Pstate
    uint8_t pad2;
    uint8_t quadPSNext[MAX_QUADS];      //target Pstate per quad
    uint8_t globalPSNext;
    uint8_t pad3;
    uint8_t quadPSAtStop11[MAX_QUADS];  //target Pstate per quad
    uint8_t pad4[2];
    uint16_t alreadySemPosted;
    uint32_t eVidCurr, eVidNext;
    ipc_req_t ipcPendTbl[MAX_IPC_PEND_TBL_ENTRIES];
    HomerVFRTLayout_t* pVFRT;
    quad_state0_t* pQuadState0;
    quad_state1_t* pQuadState1;
    requested_active_quads_t* pReqActQuads;
    PkSemaphore sem_process_req;
    PkSemaphore sem_actuate;
    PkSemaphore sem_sgpe_wait;
    uint32_t quadsActive;
} PgpePstateRecord;


//
//Functions called by threads
//
void p9_pgpe_pstate_init();
void p9_pgpe_pstate_update(uint8_t* quadPstates);
void p9_pgpe_pstate_do_auction(uint8_t quadAuctionRequest);
void p9_pgpe_pstate_calc_wof();
void p9_pgpe_pstate_update_wof_state();
void p9_pgpe_pstate_apply_clips();
void p9_pgpe_pstate_ipc_rsp_cb_sem_post(ipc_msg_t* msg, void* arg);
void p9_pgpe_pstate_pm_complex_suspend();
void p9_pgpe_pstate_send_suspend_stop();
void p9_pgpe_pstate_safe_mode();
void p9_pgpe_pstate_apply_safe_clips();
int32_t p9_pgpe_pstate_at_target();
void p9_pgpe_pstate_do_step();
//void p9_pgpe_pstate_do_suspend();
void p9_pgpe_pstate_set_pmcr_owner(uint32_t owner);
void p9_pgpe_wait_cme_db_ack(uint32_t activeCores);
void p9_pgpe_pstate_updt_ext_volt(uint32_t tgtEVid);
void p9_pgpe_pstate_process_quad_entry(uint32_t quadsAffected);
void p9_pgpe_pstate_process_quad_exit(uint32_t quadsAffected);
void p9_pgpe_pstate_start(uint32_t pstate_start_origin);
void p9_pgpe_pstate_stop();
#endif //
