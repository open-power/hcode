/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_pstate.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2019                                                    */
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
#include "p9_stop_recovery_trigger.h"

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
    PSTATE_INIT                                 =    0x00000001, //PGPE Booted
    PSTATE_ACTIVE                               =    0x00000002, //Pstates are active
    PSTATE_STOP_PENDING                         =    0x00000004, //Pstate Stop Pending
    PSTATE_SAFE_MODE_PENDING                    =    0x00000008, //Safe Mode Pending
    PSTATE_SAFE_MODE                            =    0x00000010, //Safe Mode
    PSTATE_STOPPED                              =    0x00000020, //Pstates are stopped
    PSTATE_PM_SUSPEND_PENDING                   =    0x00000040, //PM Complex Suspend Pending
    PSTATE_PM_SUSPENDED                         =    0x00000080, //PM Complex Suspend
};

enum WOF_STATUS
{
    WOF_DISABLED                                =    0, //PGPE Booted
    WOF_DISABLE_PENDING                         =    1, //Pstates are active
    WOF_ENABLED                                 =    2 //Pstates are active
};

enum WOV_STATUS
{
    WOV_DISABLED                                = 0x0, //WOV Disabled
    WOV_UNDERVOLT_ENABLED                       = 0x1, //WOV Undervolt Enabled
    WOV_OVERVOLT_ENABLED                        = 0x2, //WOV Overvolt Enabled
};

enum SAFE_MODE_FAULT_INDEX
{
    SAFE_MODE_FAULT_OCC     = 0,
    SAFE_MODE_FAULT_SGPE    = 1,
    SAFE_MODE_FAULT_CME     = 2,
    SAFE_MODE_FAULT_PVREF   = 3
};

enum PSTATE_DB
{
    PGPE_DB_ACK_WAIT_CME        = 0,
    PGPE_DB_ACK_SKIP            = 1,
    PGPE_DB0_TYPE_UNICAST       = 0,
    PGPE_DB0_TYPE_MULTICAST     = 1,
    PGPE_DB3_SKIP_CHECK_NACKS   = 0,
    PGPE_DB3_CHECK_NACKS        = 1,
    PGPE_DB3_SKIP_WRITE_DB0     = 0,
    PGPE_DB3_WRITE_DB0          = 1
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
    MSR_THROTTLE_MASK               = 0x39000000,
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

enum ACTIVE_CORE_UPDATE_ACTION
{
    ACTIVE_CORE_UPDATE_ACTION_ERROR             = 0x0,
    ACTIVE_CORE_UPDATE_ACTION_PROCESS_AND_ACK   = 0x1,
    ACTIVE_CORE_UPDATE_ACTION_ACK_ONLY          = 0x2
};

enum PGPE_FREQ_DIRECTION
{
    PGPE_FREQ_DIRECTION_NO_CHANGE = 0,
    PGPE_FREQ_DIRECTION_DOWN      = -1,
    PGPE_FREQ_DIRECTION_UP        = 1
};

//Task list entry
typedef struct ipc_req
{
    ipc_msg_t* cmd;
    uint8_t pending_ack;
    uint8_t pending_processing;
    uint8_t pad[2];
} ipc_req_t;


typedef union sys_ps
{
    uint64_t value;
    struct
    {
        uint8_t pad;
        uint8_t glb;
        uint8_t quads[6];
    } fields;
} sys_ps_t;

//
// Struct for WOV(Workload Optimized Voltage) data
//
typedef struct wov
{
    uint32_t curr_pct, target_pct;
    uint32_t curr_mv, target_mv;
    uint32_t status;
    uint32_t info;
    uint32_t min_volt, max_volt;
    uint32_t avg_freq_gt_target_freq;
    uint32_t freq_loss_tenths_gt_max_droop_tenths;
    uint32_t avg_freq[MAX_QUADS];
    uint32_t target_freq[MAX_QUADS];
    uint32_t freq_loss_percent_tenths[MAX_QUADS];
    uint32_t frequency_change_direction; //Indicates frequency change direction
    uint32_t freq_changed[MAX_QUADS];
    uint32_t last_qfmr_tb[MAX_QUADS]; //CME_QFMR timebase field
    uint32_t last_qfmr_cycles[MAX_QUADS]; //CME_QFMR cycles field
} wov_t;

//
// PGPE PState
//
// Structure for storing internal PGPE state
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
    sys_ps_t psComputed;                    //48
    sys_ps_t psTarget;                      //56
    sys_ps_t psCurr;                        //64
    sys_ps_t psNext;                        //72
    uint32_t extVrmCurr, extVrmNext;//84
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
    uint32_t errorQuads;
    uint32_t updatePGPEBeacon;
    uint8_t severeFault[4];
    uint32_t pendingActiveQuadUpdtDone;
    uint32_t activeCoreUpdtAction;
    uint32_t biasSyspExtVrmCurr, biasSyspExtVrmNext;
    wov_t wov;
    pgpe_wof_values_t* pWofValues;
    uint32_t produceWOFValues;
    uint32_t prevIdd, prevIdn, prevVdd, prevAvgPstate, prevVratio;
    uint32_t excessiveDroop, vddCurrentThresh;
} PgpePstateRecord __attribute__ ((aligned (8)));


typedef struct db0_parms
{
    uint64_t db0val;
    uint32_t type;
    uint32_t targetCores;
    uint32_t waitForAcks;
    uint32_t expectedAckFrom;
    uint32_t expectedAckValue;
} db0_parms_t;

typedef struct db3_parms
{
    uint64_t db3val;
    uint64_t db0val;
    uint32_t writeDB0;
    uint32_t targetCores;
    uint32_t waitForAcks;
    uint32_t expectedAckFrom;
    uint32_t expectedAckValue;
    uint32_t checkNACKs;
    uint32_t useDB3ValForNacks;
} db3_parms_t;

//
//Functions called by threads
//
//PGPE Boot/Iniitilization/Common
void p9_pgpe_pstate_init();
void p9_pgpe_pstate_setup_process_pcb_type4();
void p9_pgpe_pstate_ipc_rsp_cb_sem_post(ipc_msg_t* msg, void* arg);

//Pstate Calculation and Status Updates
void p9_pgpe_pstate_do_auction();
void p9_pgpe_pstate_apply_clips();
void p9_pgpe_pstate_calc_wof();
void p9_pgpe_pstate_updt_actual_quad();
void p9_pgpe_pstate_update_wof_state();
void p9_pgpe_pstate_update_wof_produced_values();

//CME Communication
void p9_pgpe_send_db0(db0_parms_t p);
void p9_pgpe_send_db3(db3_parms_t p);
void p9_pgpe_wait_cme_db_ack(uint32_t quadAckExpect, uint32_t expectedAck);
void p9_pgpe_pstate_send_pmsr_updt(uint32_t command, uint32_t targetCoresVector, uint32_t quadsAckVector);

//OCC IPC Processing
void p9_pgpe_pstate_start(uint32_t pstate_start_origin);
void p9_pgpe_pstate_set_pmcr_owner(uint32_t owner);
void p9_pgpe_pstate_stop();
void p9_pgpe_pstate_clip_bcast(uint32_t clip_type);
void p9_pgpe_pstate_wof_ctrl(uint32_t action);

//SGPE Comminucation/Processing
void p9_pgpe_pstate_process_quad_entry_notify(uint32_t quadsAffected);
void p9_pgpe_pstate_process_quad_entry_done(uint32_t quadsAffected);
void p9_pgpe_pstate_process_quad_exit_notify(uint32_t quadsAffected);
void p9_pgpe_pstate_process_quad_exit_done();
void p9_pgpe_pstate_send_suspend_stop();
void p9_pgpe_pstate_send_ctrl_stop_updt(uint32_t ctrl);

//Error Handling
void p9_pgpe_pstate_apply_safe_clips();
void p9_pgpe_pstate_safe_mode();
void p9_pgpe_pstate_pm_complex_suspend();
void p9_pgpe_pstate_sgpe_fault();
void p9_pgpe_pstate_cme_fault();
void p9_pgpe_pstate_pvref_fault();
void p9_pgpe_pstate_handle_pending_occ_ack_on_fault();
void p9_pgpe_pstate_handle_pending_sgpe_ack_on_fault();

//Actuation
int32_t p9_pgpe_pstate_at_target();
int32_t p9_pgpe_pstate_at_wov_target();
void p9_pgpe_pstate_do_step();
void p9_pgpe_pstate_updt_ext_volt();
void p9_pgpe_pstate_write_core_throttle(uint32_t throttleData, uint32_t enable_retry);

//Wov
void p9_pgpe_pstate_adjust_wov();
void p9_pgpe_pstate_reset_wov();

#endif //
