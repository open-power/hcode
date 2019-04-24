/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme.h $                   */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2017,2019                                                    */
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
#ifndef _QME_H_
#define _QME_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "iota.h"
#include "iota_trace.h"
#include "iota_uih_cfg.h"

#include "ppe42.h"
#include "ppe42_scom.h"

#include "ppehw_common.h"
#include "qmehw_common.h"
#include "qmehw_interrupts.h"

#include "qme_marks.h"
#include "qme_addresses.h"

#include "p10_pm_hcd_flags.h"
#define   QME_IMAGE_SOURCE
#include "p10_hcd_common.H"
//#include "p9_hcode_image_defines.H"


enum STOP_LEVELS
{
    STOP_LEVEL_2         = 2,
    STOP_LEVEL_3         = 3,
    STOP_LEVEL_5         = 5,
    STOP_LEVEL_11        = 11,
    STOP_LEVEL_POWOFF    = 5
};

enum STOP_STATE_HISTORY_BIT_MASKS
{
    SSH_STOP_GATED       = BIT32(0),
    SSH_TRANS_ENTRY      = BIT32(2),
    SSH_TRANS_EXIT       = BITS32(2, 2),
    SSH_REQ_ENABLE       = BIT32(12),
    SSH_ACT_ENABLE       = BIT32(13),
    SSH_SELF_SAVE        = BIT32(30),
    SSH_SELF_RESTORE     = BIT32(31)
};

enum STOP_STATE_HISTORY_VECTORS
{
    SSH_EXIT_COMPLETE    = 0,
    SSH_EXIT_IN_SESSION  = (SSH_STOP_GATED  | SSH_TRANS_EXIT),
    SSH_ACT_LEVEL_UPDATE = (SSH_STOP_GATED  | SSH_ACT_ENABLE),
    SSH_REQ_LEVEL_UPDATE = (SSH_TRANS_ENTRY | SSH_REQ_ENABLE),

    SSH_REQ_LV2_UPDATE   = (SSH_REQ_LEVEL_UPDATE | BIT32(6)),
    SSH_ACT_LV2_COMPLETE = (SSH_ACT_LEVEL_UPDATE | BIT32(10)),
    SSH_ACT_LV2_CONTINUE = (SSH_ACT_LV2_COMPLETE | SSH_TRANS_ENTRY),

    SSH_REQ_LV3_UPDATE   = (SSH_REQ_LEVEL_UPDATE | BITS32(6, 2)),
    SSH_ACT_LV3_COMPLETE = (SSH_ACT_LEVEL_UPDATE | BITS32(10, 2)),
    SSH_ACT_LV3_CONTINUE = (SSH_ACT_LV3_COMPLETE | SSH_TRANS_ENTRY),

    SSH_REQ_LV5_UPDATE   = (SSH_REQ_LEVEL_UPDATE | BIT32(5) | BIT32(7)),
    SSH_ACT_LV5_COMPLETE = (SSH_ACT_LEVEL_UPDATE | BIT32(9) | BIT32(11)),
    SSH_ACT_LV5_CONTINUE = (SSH_ACT_LV5_COMPLETE | SSH_TRANS_ENTRY),

    SSH_REQ_LV11_UPDATE  = (SSH_REQ_LEVEL_UPDATE | BIT32(4) | BITS32(6, 2)),
    SSH_ACT_LV11_COMPLETE = (SSH_ACT_LEVEL_UPDATE | BIT32(8) | BITS32(10, 2))
};

enum QME_BLOCK_ENTRY_EXIT
{
    STOP_BLOCK_ENCODE                 = 0x7, //0bxxx for message encodings of (un)block
    STOP_BLOCK_ACTION                 = 0x4, //0b1xx for block, 0b0xx for unblock
    STOP_BLOCK_EXIT                   = 0x2, //0bY10 for (un)block exit
    STOP_BLOCK_ENTRY                  = 0x1  //0bY01 for (un)block entry
};

enum QME_PIG_TYPES
{
    PIG_TYPE_0                        = 0x0,
    PIG_TYPE_1                        = 0x1,
    PIG_TYPE_2                        = 0x2,
    PIG_TYPE_3                        = 0x3,
    PIG_TYPE_4                        = 0x4,
    PIG_TYPE_5                        = 0x5,
    PIG_TYPE_6                        = 0x6,
    PIG_TYPE_7                        = 0x7,
    PIG_TYPE_8                        = 0x8,
    PIG_TYPE_9                        = 0x9,
    PIG_TYPE_A                        = 0xA,
    PIG_TYPE_B                        = 0xB,
    PIG_TYPE_C                        = 0xC,
    PIG_TYPE_D                        = 0xD,
    PIG_TYPE_E                        = 0xE,
    PIG_TYPE_F                        = 0xF
};

enum QME_STOP_SRR1
{
    MOST_STATE_LOSS                   = 3,
    SOME_STATE_LOSS_BUT_NOT_TIMEBASE  = 2,
    NO_STATE_LOSS                     = 1
};

enum QME_HCODE_FUNCTIONAL_ENABLES
{
    QME_SPWU_PROTOCOL_CHECK_ENABLE    = BIT32(0),
    QME_CLOCK_STATUS_CHECK_ENABLE     = BIT32(1),
    QME_POWER_LOSS_ESL_CHECK_ENABLE   = BIT32(2),
    QME_L2_PURGE_CATCHUP_PATH_ENABLE  = BIT32(3),
    QME_L2_PURGE_ABORT_PATH_ENABLE    = BIT32(4),
    QME_NCU_PURGE_ABORT_PATH_ENABLE   = BIT32(5),
    QME_STOP3OR5_CATCHUP_PATH_ENABLE  = BIT32(6),
    QME_STOP3OR5_ABORT_PATH_ENABLE    = BIT32(7)
};

#define ENABLED_HCODE_FUNCTIONS 0xFF000000
#define QME_SCOREBOARD_VERSION  0x514d4531 //QME1

typedef struct
{
    // Header and Enables

    uint32_t    scoreboard_version;
    uint32_t    scoreboard_size;
    uint32_t    chip_dd_level;
    uint32_t    git_head;

    uint32_t    timers_enabled;     // FIT: 0b001, DEC: 0b010, DOG:0b100
    uint32_t    hcode_func_enabled; // See above enum QME_HCODE_FUNCTIONAL_ENABLES
    uint32_t    stop_level_enabled; // Stop2:bit2, Stop5:bit5, Stop11:bit11
    uint32_t    fused_core_enabled; // HwFused:0b01, HcodePaired:0b10

    uint32_t    mma_enabled;        // POff:0b001, POff_Delay:0b010, POn:0b100
    uint32_t    throttle_enabled;   // Enable Hcode Core Throttling
    uint32_t    pmcr_fwd_enabled;   // Enable QMCR and PMCRS auto updates
    uint32_t    wof_control_status;

    // Wof and Pstate and Doorbells
    //   Note: PMCR is handled by HW
    //   can add PMCR data collection
    //   if profile/debug is needed
    //   Same with DB1 reserved by XGPE

    uint32_t    safe_mode_status;
    uint32_t    doorbell2_msg;
    uint32_t    doorbell1_msg;
    uint32_t    doorbell0_msg;

    uint32_t    c_doorbella_req;
    uint32_t    c_doorbella_msg;
    uint32_t    c_doorbellb_reg;
    uint32_t    c_doorbellb_msg;

    uint32_t    c_throttle_done;
    uint32_t    c_throttle_req;
    uint32_t    c_mma_poweron_done;
    uint32_t    c_mma_poweron_req;

    // State of Cores

    uint32_t    c_configured;       // Configured Cores
    uint32_t    c_in_error;         // Core encountered error and garded
    uint32_t    c_all_stop_mask;    // stop masks that applying to the uih override
    uint32_t    uih_status;         // upper 16b actual irq, lower 16b phantom

    uint32_t    c_special_wakeup_rise_mask;
    uint32_t    c_special_wakeup_fall_mask;
    uint32_t    c_regular_wakeup_mask;
    uint32_t    c_pm_state_active_mask;

    uint32_t    c_block_stop_done;
    uint32_t    c_block_stop_req;
    uint32_t    c_block_wake_done;
    uint32_t    c_block_wake_req;

    uint32_t    c_special_wakeup_source;
    uint32_t    c_special_wakeup_error; //2nd 8bits spwu_drop, 3rd 8bits spwu_on_active, 4th 8bits spwu_on_stop
    uint32_t    c_special_wakeup_done;
    uint32_t    c_stop0_targets;

    uint32_t    c_stop2_reached;
    uint32_t    c_stop3_reached;
    uint32_t    c_stop5_reached;
    uint32_t    c_stop11_reached;

    // Stop and Wakeup Processing

    uint32_t    c_pm_state_active_fast_req;
    uint32_t    c_regular_wakeup_fast_req;
    uint32_t    c_pm_state_active_slow_req;
    uint32_t    c_regular_wakeup_slow_reg;

    uint32_t    c_special_wakeup_rise_req;
    uint32_t    c_special_wakeup_fall_req;
    uint32_t    c_special_wakeup_exit_pending;
    uint32_t    c_special_wakeup_abort_pending;

    uint32_t    c_pm_state[4];

    uint32_t    c_stop2_enter_targets;
    uint32_t    c_stop3_enter_targets;
    uint32_t    c_stop5_enter_targets;
    uint32_t    c_stop11_enter_targets;

    uint32_t    c_l2_purge_catchup_targets;
    uint32_t    c_stop3or5_catchup_targets;
    uint32_t    tbd0;
    uint32_t    tbd1;

    uint32_t    c_l2_purge_abort_targets;
    uint32_t    c_ncu_purge_abort_targets;
    uint32_t    c_stop3or5_abort_targets;
    uint32_t    c_stop2_exit_express;

    uint32_t    c_stop2_exit_targets;
    uint32_t    c_stop3_exit_targets;
    uint32_t    c_stop5_exit_targets;
    uint32_t    c_stop11_exit_targets;

    // Hipri IRQ and Error Records

    uint32_t    qme_debugger;
    uint32_t    pgpe_hb_loss;
    uint32_t    pv_ref_failed;
    uint32_t    quad_checkstop;

    //applies to all below:
    //1st Half for Entry, 2nd Half for Exit

    uint32_t    c_checkstop;
    uint32_t    c_clock_failed;
    uint32_t    l3_clock_failed;
    uint32_t    mma_clock_failed;

    uint32_t    c_rvrm_failed;
    uint32_t    c_pfet_failed;
    uint32_t    l3_pfet_failed;
    uint32_t    mma_pfet_failed;

    uint32_t    c_resclk_failed;
    uint32_t    c_vdm_failed;
    uint32_t    c_scan_failed;
    uint32_t    c_self_failed;

} QmeRecord __attribute__ ((aligned (4)));

// QME Generic Functions
void qme_init();
void qme_eval_eimr_override();
void qme_send_pig_packet(uint32_t);

// QME Stop Functions
void qme_stop_entry();
void qme_stop_exit();
void qme_parse_pm_state_active_fast();
void qme_core_handoff_pc(uint32_t, uint32_t);

// QME Interrupt Events Handling
void qme_top_priority_event();
void qme_doorbell2_event();
void qme_doorbell1_event();
void qme_special_wakeup_rise_event();
void qme_special_wakeup_fall_event();
void qme_regular_wakeup_fast_event();
void qme_pmcr_update_event();
void qme_doorbell0_event();
void qme_mma_active_event();
void qme_pm_state_active_fast_event();
void qme_regular_wakeup_slow_event();
void qme_pm_state_active_slow_event();

// QME Timer Handlers
void qme_fit_handler();
void qme_dec_handler();

#ifdef __cplusplus
}  // extern "C"
#endif

#endif //_P9_QME_H_
