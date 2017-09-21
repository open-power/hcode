/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_pstate.h $ */
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
#ifndef _P9_PGPE_PSTATE_HEADER_
#define _P9_PGPE_PSTATE_HEADER_

#include "pk.h"
#include "ipc_api.h"
#include "ipc_async_cmd.h"
#include "pstate_pgpe_occ_api.h"
#include "wof_sgpe_pgpe_api.h"
#include "p9_pgpe_header.h"


enum IPC_PEND_TBL
{
    IPC_PEND_PSTATE_START_STOP        =     0,
    IPC_PEND_SGPE_ACTIVE_CORES_UPDT   =     1,
    IPC_PEND_SGPE_ACTIVE_QUADS_UPDT   =     2,
    IPC_PEND_CLIP_UPDT                =     3,
    IPC_PEND_WOF_CTRL                 =     4,
    IPC_PEND_WOF_VFRT                 =     5,
    IPC_PEND_SET_PMCR_REQ             =     6,
    IPC_ACK_CTRL_STOP_CORE_ENABLE     =     7,
    IPC_ACK_CTRL_STOP_CORE_DISABLE    =     8,
    MAX_IPC_PEND_TBL_ENTRIES          =     9
};

enum QUAD_BIT_MASK
{
    QUAD0_BIT_MASK   =  0x80,
    QUAD1_BIT_MASK   =  0x40,
    QUAD2_BIT_MASK   =  0x20,
    QUAD3_BIT_MASK   =  0x10,
    QUAD4_BIT_MASK   =  0x8,
    QUAD5_BIT_MASK   =  0x4
};

enum PSTATE_STATUS
{
    PSTATE_INIT                                 =    0, //PGPE Booted
    PSTATE_ACTIVE                               =    1, //Pstates are active
    PSTATE_SAFE_MODE                            =    4,  //Safe Mode
    PSTATE_STOPPED                              =    5, //Pstates are stopped
    PSTATE_PM_SUSPEND_PENDING                   =    6, //PM Complex Suspend Pending
    PSTATE_PM_SUSPENDED                         =    7 //PM Complex Suspend
};

enum WOF_STATUS
{
    WOF_DISABLED                                =    0, //PGPE Booted
    WOF_DISABLE_PENDING                         =    1, //Pstates are active
    WOF_ENABLED                                 =    2 //Pstates are active
};

enum PSTATE_DB0
{
    PGPE_DB0_UNICAST        = 0,
    PGPE_DB0_MULTICAST      = 1,
    PGPE_DB0_ACK_WAIT_CME   = 0,
    PGPE_DB0_ACK_SKIP       = 1
};

enum SEMAPHORE_PROCESS_POST_SRC
{
    SEM_PROCESS_SRC_IPI2_IRQ    = 0x1,
    SEM_PROCESS_SRC_TYPE4_IRQ   = 0x2
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
    uint8_t wofStatus;                      //wof status
    uint8_t pad0;
    uint8_t wofClip;                        //wof clip
    uint8_t psClipMax[MAX_QUADS],           //higher numbered(min freq and volt)
            psClipMin[MAX_QUADS];           //lower numbered(max freq and volt)
    uint8_t coresPSRequest[MAX_CORES];      //per core requested pstate
    uint8_t quadPSComputed[MAX_QUADS];      //computed Pstate per quad
    uint8_t globalPSComputed;               //computed global Pstate
    uint8_t pad1;
    uint8_t quadPSTarget[MAX_QUADS];        //target Pstate per quad
    uint8_t globalPSTarget;                 //target global Pstate
    uint8_t pad2;
    uint8_t quadPSCurr[MAX_QUADS];          //target Pstate per quad
    uint8_t globalPSCurr;                   //target global Pstate
    uint8_t pad3;
    uint8_t quadPSNext[MAX_QUADS];          //target Pstate per quad
    uint8_t globalPSNext;
    uint8_t pad4;
    uint8_t quadPSAtStop11[MAX_QUADS];      //target Pstate per quad
    uint8_t pad5[2];
    uint32_t eVidCurr, eVidNext;
    ipc_req_t ipcPendTbl[MAX_IPC_PEND_TBL_ENTRIES];
    HomerVFRTLayout_t* pVFRT;
    quad_state0_t* pQuadState0;
    quad_state1_t* pQuadState1;
    requested_active_quads_t* pReqActQuads;
    PkSemaphore sem_process_req;
    PkSemaphore sem_actuate;
    PkSemaphore sem_sgpe_wait;
    uint32_t activeQuads, activeDB, pendQuadsRegisterReceive, pendQuadsRegisterProcess;
    uint32_t activeCores, numActiveCores, numConfCores;
    uint32_t vratio, fratio;
    uint16_t vindex, findex;
    uint32_t pendingPminClipBcast, pendingPmaxClipBcast;
    uint32_t semProcessPosted, semProcessSrc;
} PgpePstateRecord __attribute__ ((aligned (8)));


//
//Functions called by threads
//
void p9_pgpe_pstate_init();
void p9_pgpe_pstate_setup_process_pcb_type4();
void p9_pgpe_pstate_do_auction();
void p9_pgpe_pstate_apply_clips();
void p9_pgpe_pstate_calc_wof();
void p9_pgpe_pstate_updt_actual_quad(uint32_t q);
void p9_pgpe_pstate_update_wof_state();
void p9_pgpe_pstate_freq_updt();
void p9_pgpe_send_db0(uint64_t db0, uint32_t coresVector, uint32_t type, uint32_t process_ack, uint32_t ackVector);
void p9_pgpe_wait_cme_db_ack(uint32_t coresVector);
void p9_pgpe_pstate_start(uint32_t pstate_start_origin);
void p9_pgpe_pstate_set_pmcr_owner(uint32_t owner);
void p9_pgpe_pstate_stop();
void p9_pgpe_pstate_clip_bcast(uint32_t clip_type);
void p9_pgpe_pstate_process_quad_entry_notify(uint32_t quadsAffected);
void p9_pgpe_pstate_process_quad_entry_done(uint32_t quadsAffected);
void p9_pgpe_pstate_process_quad_exit(uint32_t quadsAffected);
void p9_pgpe_pstate_wof_ctrl(uint32_t action, uint32_t activeCores, uint32_t activeQuads);
void p9_pgpe_pstate_send_ctrl_stop_updt(uint32_t ctrl);
void p9_pgpe_pstate_apply_safe_clips();
void p9_pgpe_pstate_safe_mode();
void p9_pgpe_pstate_send_suspend_stop();
int32_t p9_pgpe_pstate_at_target();
void p9_pgpe_pstate_do_step();
void p9_pgpe_pstate_updt_ext_volt(uint32_t tgtEVid);
void p9_pgpe_pstate_ipc_rsp_cb_sem_post(ipc_msg_t* msg, void* arg);
#endif //
