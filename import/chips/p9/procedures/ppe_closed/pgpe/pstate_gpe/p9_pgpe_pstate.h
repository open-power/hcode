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


#define VRATIO_ROUNDING_ADJUST  24        //VFRT tables are built assuming we truncate
#define MAX_VRATIO              65535    // (2^16) - 1

enum IPC_PEND_TBL
{
    IPC_PEND_PSTATE_START_STOP        =     0,
    IPC_PEND_SGPE_ACTIVE_CORES_UPDT   =     1,
    IPC_PEND_SGPE_ACTIVE_QUADS_UPDT   =     2,
    IPC_PEND_CLIP_UPDT                =     3,
    IPC_PEND_WOF_CTRL                 =     4,
    IPC_PEND_WOF_VFRT                 =     5,
    IPC_PEND_SET_PMCR_REQ             =     6,
    IPC_ACK_CTRL_STOP_UPDT            =     7,
    IPC_ACK_SUSPEND_STOP              =     8,
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
    PSTATE_STOP_PENDING                         =    2, //Pstate Stop Pending
    PSTATE_SAFE_MODE_PENDING                    =    3, //Safe Mode Pending
    PSTATE_SAFE_MODE                            =    4, //Safe Mode
    PSTATE_STOPPED                              =    5, //Pstates are stopped
    PSTATE_PM_SUSPEND_PENDING                   =    6, //PM Complex Suspend Pending
    PSTATE_PM_SUSPENDED                         =    7  //PM Complex Suspend
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

enum PGPE_CORE_THROTTLE
{
    // Include core offline, address error, and timeout. The timeout is
    // included to avoid an extra mtmsr in the event we need to cleanup
    // from SW407201
    MSR_THROTTLE_MASK               = 0x29000000,
    WORKAROUND_SCOM_MULTICAST_WRITE = 0x69010800,
    THROTTLE_SCOM_MULTICAST_WRITE   = 0x69010A9E,
    CORE_IFU_THROTTLE               = 0x80000000,
    CORE_SLOWDOWN                   = 0x10000000,
    CORE_THROTTLE_OFF               = 0x0,
    NO_RETRY                        = 0,
    RETRY                           = 1
};

enum OCCLFIR_PGPE
{
    OCCLFIR_PROLONGED_DROOP_DETECTED = 60
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
    uint8_t pstatesStatus;                  //1
    uint8_t safePstate;                     //2
    uint8_t pmcrOwner;                      //3
    uint8_t wofStatus;                      //4 wof status
    uint8_t pad0;                           //5
    uint8_t wofClip;                        //6 wof clip
    uint8_t psClipMax[MAX_QUADS],           //12 higher numbered(min freq and volt)
            psClipMin[MAX_QUADS];           //18 lower numbered(max freq and volt)
    uint8_t coresPSRequest[MAX_CORES];      //42 per core requested pstate
    uint8_t quadPSComputed[MAX_QUADS];      //48 computed Pstate per quad
    uint8_t globalPSComputed;               //49 computed global Pstate
    uint8_t pad1;                           //50
    uint8_t quadPSTarget[MAX_QUADS];        //56 target Pstate per quad
    uint8_t globalPSTarget;                 //57 target global Pstate
    uint8_t pad2;                           //58
    uint8_t quadPSCurr[MAX_QUADS];          //64 target Pstate per quad
    uint8_t globalPSCurr;                   //65 target global Pstate
    uint8_t pad3;                           //66
    uint8_t quadPSNext[MAX_QUADS];          //72 target Pstate per quad
    uint8_t globalPSNext;                   //73
    uint8_t pad4[3];                        //76
    uint32_t eVidCurr, eVidNext;            //84
    ipc_req_t ipcPendTbl[MAX_IPC_PEND_TBL_ENTRIES]; //156(9entries*8bytes)
    HomerVFRTLayout_t* pVFRT; //160
    quad_state0_t* pQuadState0; //164
    quad_state1_t* pQuadState1; //168
    requested_active_quads_t* pReqActQuads; //172
    PkSemaphore sem_process_req; //184
    PkSemaphore sem_actuate; //196
    PkSemaphore sem_sgpe_wait;//208
    uint32_t activeQuads, activeDB, pendQuadsRegisterReceive, pendQuadsRegisterProcess; //212,216,220,224
    uint32_t activeCores, numActiveCores, numSortCores; //228,232,236
    uint32_t vratio, fratio;//240, 244,
    uint16_t vindex, findex;//246, 248
    uint32_t pendingPminClipBcast, pendingPmaxClipBcast;//252,256
    uint32_t semProcessPosted, semProcessSrc;//260,264
    uint32_t quadsNACKed, cntNACKs, quadsCntNACKs[MAX_QUADS];//268,272,296
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
void p9_pgpe_send_db3_high_priority_pstate(uint32_t coresVector, uint32_t ackVector);
void p9_pgpe_wait_cme_db_ack(uint32_t coresVector);
void p9_pgpe_pstate_start(uint32_t pstate_start_origin);
void p9_pgpe_wait_cme_db_ack(uint32_t coresVector);
void p9_pgpe_pstate_start(uint32_t pstate_start_origin);
void p9_pgpe_pstate_set_pmcr_owner(uint32_t owner);
void p9_pgpe_pstate_stop();
void p9_pgpe_pstate_clip_bcast(uint32_t clip_type);
void p9_pgpe_pstate_process_quad_entry_notify(uint32_t quadsAffected);
void p9_pgpe_pstate_process_quad_entry_done(uint32_t quadsAffected);
void p9_pgpe_pstate_process_quad_exit(uint32_t quadsAffected);
void p9_pgpe_pstate_wof_ctrl(uint32_t action);
void p9_pgpe_pstate_send_ctrl_stop_updt(uint32_t ctrl);
void p9_pgpe_pstate_apply_safe_clips();
void p9_pgpe_pstate_safe_mode();
void p9_pgpe_pstate_send_suspend_stop();
void p9_pgpe_pstate_pm_complex_suspend();
void p9_pgpe_pstate_pmsr_updt(uint32_t command, uint32_t targetCoresVector, uint32_t quadsAckVector);
int32_t p9_pgpe_pstate_at_target();
void p9_pgpe_pstate_do_step();
void p9_pgpe_pstate_updt_ext_volt(uint32_t tgtEVid);
void p9_pgpe_pstate_ipc_rsp_cb_sem_post(ipc_msg_t* msg, void* arg);
void p9_pgpe_pstate_write_core_throttle(uint32_t throttleData, uint32_t enable_retry);
#endif //
