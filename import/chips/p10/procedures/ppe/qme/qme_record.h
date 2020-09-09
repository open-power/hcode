/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_record.h $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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

#ifndef __QME_RECORD_H__
#define __QME_RECORD_H__

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

    uint32_t    mma_enabled;        // POff:0b001, POff_Delay:0b010(Dynamic), POn:0b100(Static)
    uint32_t    throttle_enabled;   // Enable Hcode Core Throttling
    uint32_t    pmcr_fwd_enabled;   // Enable QMCR and PMCRS auto updates
    uint32_t    uih_status;         // upper 16b actual irq, lower 16b phantom

    // Wof and Pstate and Doorbells
    //   Note: PMCR is handled by HW
    //   can add PMCR data collection
    //   if profile/debug is needed
    //   Same with DB1 reserved by XGPE

    uint32_t    doorbell2_msg;
    uint32_t    doorbell1_msg;
    uint32_t    doorbell0_msg;
    uint32_t    quad_id;            // PIR[28:31]

    // State of Cores

    uint32_t    c_configured;       // Configured Cores
    uint32_t    c_in_error;         // Core encountered error and garded
    uint32_t    c_all_stop_mask;    // stop masks that applying to the uih override
    uint32_t    c_stop1_targets;

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
    uint32_t    c_hostboot_cores;

    uint32_t    c_stop2_reached;
    uint32_t    c_stop3_reached;
    uint32_t    c_stop5_reached;
    uint32_t    c_stop11_reached;

    // Stop and Wakeup Processing

    uint32_t    c_pm_state_active_fast_req;
    uint32_t    c_regular_wakeup_fast_req;
    uint32_t    c_pm_state_active_slow_req;
    uint32_t    c_regular_wakeup_slow_req;

    uint32_t    c_special_wakeup_rise_req;
    uint32_t    c_special_wakeup_fall_req;
    uint32_t    c_special_wakeup_exit_pending;
    uint32_t    c_special_wakeup_abort_pending;

    uint32_t    c_pm_state[4];

    uint32_t    c_stop2_enter_targets;
    uint32_t    c_stop3_enter_targets;
    uint32_t    c_stop5_enter_targets;
    uint32_t    c_stop11_enter_targets;

    uint32_t    c_mma_poweron_done;
    uint32_t    c_mma_poweron_req;
    uint32_t    c_l2_purge_catchup_targets;
    uint32_t    c_stop3or5_catchup_targets;

    uint32_t    c_l2_purge_abort_targets;
    uint32_t    c_ncu_purge_abort_targets;
    uint32_t    c_stop3or5_abort_targets;
    uint32_t    c_stop2_exit_express;

    uint32_t    c_stop2_exit_targets;
    uint32_t    c_stop3_exit_targets;
    uint32_t    c_stop5_exit_targets;
    uint32_t    c_stop11_exit_targets;

    uint32_t    c_act_stop_level[4];
    uint32_t    t_old_pls[4][4];
    uint32_t    t_new_pls[4][4];

    uint32_t    c_tfac_c2s_retry_limit[4];
    uint32_t    c_tfac_c2s_retry_total[4];
    uint32_t    c_tfac_s2c_retry_limit[4];
    uint32_t    c_tfac_s2c_retry_total[4];

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

    uint32_t    cts_timeout_count;
    uint32_t    bce_buf_content_type;

} QmeRecord __attribute__ ((aligned (4)));

#endif //__QME_RECORD_H__
