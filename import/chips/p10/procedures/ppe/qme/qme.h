/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme.h $                   */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2017,2021                                                    */
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
#include "qme_service_codes.h"
#include "p10_pm_hcd_flags.h"
#define   QME_IMAGE_SOURCE
#include "p10_hcd_common.H"

#include "p10_hcode_image_defines.H"
#include "p10_hcd_memmap_qme_sram.H"

#include "errlutil.h"
#include "qme_errl_utils.h"
#include "qme_record.h"

extern uint32_t G_IsSimics;

enum STOP_LEVELS
{
    STOP_LEVEL_2         = 2,
    STOP_LEVEL_3         = 3,
    STOP_LEVEL_5         = 5,
    STOP_LEVEL_6         = 6,
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
    SSH_ENTRY_IN_SESSION = (SSH_STOP_GATED  | SSH_TRANS_ENTRY),
    SSH_ACT_LEVEL_UPDATE = (SSH_STOP_GATED  | SSH_ACT_ENABLE),
    SSH_REQ_LEVEL_UPDATE = (SSH_TRANS_ENTRY | SSH_REQ_ENABLE |
                            SSH_ACT_ENABLE | BIT32(11)), // Update actual = 1

    SSH_REQ_LV2_UPDATE   = (SSH_REQ_LEVEL_UPDATE | BIT32(6)),
    SSH_ACT_LV2_COMPLETE = (SSH_ACT_LEVEL_UPDATE | BIT32(10)),
    SSH_ACT_LV2_CONTINUE = (SSH_ACT_LV2_COMPLETE | SSH_TRANS_ENTRY),

    SSH_REQ_LV3_UPDATE   = (SSH_REQ_LEVEL_UPDATE | BITS32(6, 2)),
    SSH_ACT_LV3_COMPLETE = (SSH_ACT_LEVEL_UPDATE | BITS32(10, 2)),
    SSH_ACT_LV3_CONTINUE = (SSH_ACT_LV3_COMPLETE | SSH_TRANS_ENTRY),

    SSH_REQ_LV5_UPDATE   = (SSH_REQ_LEVEL_UPDATE | BIT32(5) | BIT32(7)),
    SSH_ACT_LV5_COMPLETE = (SSH_ACT_LEVEL_UPDATE | BIT32(9) | BIT32(11)),
    SSH_ACT_LV5_CONTINUE = (SSH_ACT_LV5_COMPLETE | SSH_TRANS_ENTRY),

    SSH_ACT_LV6_COMPLETE = (SSH_ACT_LEVEL_UPDATE | BITS32(9, 2)), //used only for cache-only mode

    SSH_REQ_LV11_UPDATE  = (SSH_REQ_LEVEL_UPDATE | BIT32(4) | BITS32(6, 2)),
    SSH_ACT_LV11_COMPLETE = (SSH_ACT_LEVEL_UPDATE | BIT32(8) | BITS32(10, 2))
};

enum STOP_BLOCK_ENTRY_EXIT
{
    STOP_BLOCK_ENCODE                 = 0x7, //0bxxx for message encodings of (un)block
    STOP_BLOCK_ACTION                 = 0x4, //0b1xx for block, 0b0xx for unblock
    STOP_BLOCK_EXIT                   = 0x2, //0bY10 for (un)block exit
    STOP_BLOCK_ENTRY                  = 0x1  //0bY01 for (un)block entry
};

enum STOP_REPORT_SRR1
{
    MOST_STATE_LOSS                   = 3,
    SOME_STATE_LOSS_BUT_NOT_TIMEBASE  = 2,
    NO_STATE_LOSS                     = 1
};

enum SR_FAILURE_CODE
{
    SR_SUCCESS          =    0,
    SLAVE_THRD_FAIL     =    1,
    MASTER_THRD_FAIL    =    2,
};

enum SPR_SELF_ACTIONS
{
    SPR_SELF_SAVE       =   0x00,
    SPR_SELF_RESTORE    =   0x01,
};

enum MMA_POWER_OFF_MODE
{
    MMA_POFF_ALWAYS     =   0x00,
    MMA_POFF_STATIC     =   0x01,
    MMA_POFF_DYNAMIC    =   0x02,
};

//Return codes associated with Block Copy Engine.
typedef enum
{
    BLOCK_COPY_SUCCESS      = 0,
    BLOCK_COPY_FAILED       = 1,
    BLOCK_COPY_BUSY         = 2
} BceReturnCode_t;

enum BCE_BUF_CONTENT_TYPE
{
    NONE            =    0,
    CMN_RING        =    1,
    INST_RING       =    2,
    SCOM_RESTORE    =    3,
    OVRRIDES        =    4,
    ALL             =    5,
    AUTO_WAKUP_VECT =    6,
};

enum BCE_SCOPE
{
    QME_COMMON   = 0,
    QME_SPECIFIC = 1,
};

// todo
// (auto) pmcr fwd enable, throttle enable,
// pstate enable, wof enable, safe mode enable
#define ENABLED_HCODE_FUNCTIONS 0x1FFFF000

enum QME_HCODE_FUNCTIONAL_ENABLES
{
    // Software Checks
    QME_AUTO_STOP11_WAKEUP_ENABLE     = BIT32(0),
    QME_POWER_LOSS_ESL_CHECK_ENABLE   = BIT32(1),
    QME_CONTINUE_SERVICE_ON_PANIC     = BIT32(2),
    // Stop Catchup/Abort Path Switches
    QME_L2_PURGE_CATCHUP_PATH_ENABLE  = BIT32(3),
    QME_L2_PURGE_ABORT_PATH_ENABLE    = BIT32(4),
    QME_NCU_PURGE_ABORT_PATH_ENABLE   = BIT32(5),
    QME_STOP3OR5_CATCHUP_PATH_ENABLE  = BIT32(6),
    QME_STOP3OR5_ABORT_PATH_ENABLE    = BIT32(7),
    // HWP Switches
    QME_SELF_RESTORE_ENABLE           = BIT32(8),
    QME_SELF_SAVE_ENABLE              = BIT32(9),
    QME_BLOCK_COPY_SCAN_ENABLE        = BIT32(10),
    QME_BLOCK_COPY_SCOM_ENABLE        = BIT32(11),
    QME_HWP_SCOM_CUST_ENABLE          = BIT32(12),
    QME_HWP_SCOM_INIT_ENABLE          = BIT32(13),
    QME_HWP_SCAN_INIT_ENABLE          = BIT32(14),
    QME_HWP_ARRAYINIT_ENABLE          = BIT32(15),
    QME_HWP_SCANFLUSH_ENABLE          = BIT32(16),
    QME_HWP_PFET_CTRL_ENABLE          = BIT32(17),
    // Modes Switches
    QME_PIG_TYPEA_ENABLE              = BIT32(18),
    QME_EPM_BROADSIDE_ENABLE          = BIT32(19),
    QME_RUNN_MODE_ENABLE              = BIT32(20),
    QME_CONTAINED_MODE_ENABLE         = BIT32(21),
    QME_SMF_SUPPORT_ENABLE            = BIT32(22)
};

// QME Generic Functions
void qme_panic_handler();
void qme_init();
void qme_eval_eimr_override();
void qme_send_pig_packet(uint32_t);
void qme_block_copy_start(uint32_t, uint32_t, uint32_t, uint32_t, enum BCE_SCOPE );
void qme_block_copy_core_data( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t );
BceReturnCode_t qme_block_copy_check();

// QME Stop Functions
void qme_parse_pm_state_active_fast();
void qme_mma_stop_exit(uint32_t);
void qme_stop_entry();
void qme_stop_exit();
void qme_stop_self_execute(uint32_t, uint32_t);
uint8_t get_core_pos( uint32_t i_mask );
void qme_stop_self_complete(uint32_t, uint32_t);
void qme_stop_report_pls_srr1(uint32_t);
void qme_stop11_msgsnd_injection(uint32_t);

#ifdef __cplusplus
//only C++ supports passing by reference
void qme_stop_handoff_pc(uint32_t, uint32_t&);
#endif

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
