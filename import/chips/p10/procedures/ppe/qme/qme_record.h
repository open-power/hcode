/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_record.h $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020,2022                                                    */
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
///#define CISR_TRACE 1

typedef struct
{
    // Header and Enables
    // 1
    uint32_t    scoreboard_version;
    uint32_t    scoreboard_size;
    uint32_t    chip_dd_level;
    uint32_t    git_head;
    // 2
    uint32_t    quad_id;            // PIR[28:31]
    uint32_t    hcode_func_enabled; // See above enum QME_HCODE_FUNCTIONAL_ENABLES
    uint32_t    stop_level_enabled; // Stop2:bit2, Stop5:bit5, Stop11:bit11
    uint32_t    fused_core_enabled; // when fused always pair mode
    // 3
    uint32_t    mma_modes_enabled;  // POff:0b001, POff_Delay:0b010(Dynamic), POn:0b100(Static)
    uint32_t    mma_pwoff_dec_ticks;// number of ticks of dec timer to poweroff mma
    uint32_t    mma_pwoff_dec_val;  // dec value to setup for each dec tick
    uint32_t    dds_sync_req;       // 0xFC auto 0xFD disable

    // Wof and Pstate and Doorbells
    //   Note: PMCR and throttle are handled by HW
    //   can add PMCR data collection
    //   if profile/debug is needed
    //   Same with DB1 reserved by XGPE
    // 4
    uint32_t    doorbell2_msg;
    uint32_t    doorbell1_msg;
    uint32_t    doorbell0_msg;
    uint32_t    uih_status;         // upper 16b actual irq, lower 16b phantom

    // State of Cores
    // 5
    uint32_t    c_configured;       // Configured Cores
    uint32_t    c_in_error;         // Core encountered error and garded
    uint32_t    c_all_stop_mask;    // stop masks that applying to the uih override
    uint32_t    c_stop1_targets;
    // 6
    uint32_t    c_special_wakeup_rise_mask;
    uint32_t    c_special_wakeup_fall_mask;
    uint32_t    c_regular_wakeup_mask;
    uint32_t    c_pm_state_active_mask;
    // 7
    uint32_t    c_block_stop_done;
    uint32_t    c_block_stop_req;
    uint32_t    c_block_wake_done;
    uint32_t    c_block_wake_req;
    // 8
    uint32_t    c_block_wake_override;
    uint32_t    c_fused_spwu_rise_einr;
    uint32_t    c_special_wakeup_done;
    uint32_t    c_hostboot_cores;
    // 9
    uint32_t    c_cache_only_enabled;  //FW cache only cores
    uint32_t    c_lpar_mode_enabled;   //FW Core enabled multi lpar mode
    uint32_t    c_fit_stop11_requested;//FW request stop11 entry without stop
    uint32_t    c_auto_stop11_wakeup;  //FW auto stop11 wakeup vector
    // 10
    uint32_t    c_stop2_reached; // PIG TypeA 8:11
    uint32_t    c_stop3_reached; // PIG TypeA 12:15
    uint32_t    c_stop5_reached;
    uint32_t    c_stop11_reached;// PIG TypeA 20:23

    // Stop and Wakeup Processing
    // 11
    uint32_t    c_pm_state_active_fast_req;
    uint32_t    c_regular_wakeup_fast_req;
    uint32_t    c_pm_state_active_slow_req;
    uint32_t    c_regular_wakeup_slow_req;
    // 12
    uint32_t    c_special_wakeup_rise_req;
    uint32_t    c_special_wakeup_fall_req;
    uint32_t    c_special_wakeup_exit_pending;
    uint32_t    c_special_wakeup_abort_pending;
    // 13
    uint32_t    c_regular_wakeup_fast_before_pair;
    uint32_t    c_regular_wakeup_slow_before_pair;
    uint32_t    c_special_wakeup_rise_before_pair;
    uint32_t    c_special_wakeup_fall_before_pair;
    // 14
    uint32_t    c_pm_state[4];
    // 15
    uint32_t    c_stop2_enter_targets;
    uint32_t    c_stop3_enter_targets;
    uint32_t    c_stop5_enter_targets;
    uint32_t    c_stop11_enter_targets;
    // 16
    uint32_t    c_l2_purge_catchup_targets;
    uint32_t    c_stop3or5_catchup_targets;
    uint32_t    c_l2_purge_abort_targets;
    uint32_t    c_ncu_purge_abort_targets;
    // 17
    uint32_t    c_stop3or5_abort_targets;
    uint32_t    c_xstop_clock_abort_targets;
    uint32_t    c_xstop_power_abort_targets;
    uint32_t    c_stop2_exit_express;
    // 18
    uint32_t    c_stop2_exit_targets;
    uint32_t    c_stop3_exit_targets;
    uint32_t    c_stop5_exit_targets;
    uint32_t    c_stop11_exit_targets;
    // 19
    uint32_t    c_stop2p_exit_targets;//core_scom after stop2 exit for stop5/11
    uint32_t    spurr_freq_ref_upper; //init before core_scominit
    uint32_t    c_mma_active_req;
    uint32_t    c_mma_available;      // invert PIG TypeA 16:19
    // 20
    uint32_t    c_mma_poweroff_count[4];

    // Errlog
    // 21
    uint16_t    pad_zeros; // do not use this
    uint16_t    errl_panic;
    uint32_t    errl_data0;
    uint32_t    errl_data1;
    uint32_t    errl_data2;
    // 22
    uint16_t    c_failed_ring[4]; // Field needs to be at 8B boundary
    uint32_t    c_scan_failed;
    uint32_t    bce_buf_content_type;//bce paging content selection
    // 23
    uint32_t    c_self_fault_vector;
    uint32_t    c_self_failed;
    uint32_t    cts_timeout_count;// self restore
    uint32_t    msg_snd_interrupt;// msgsnd vector
    // 24
    uint32_t    c_in_recovery;    // Deadly paint
    uint32_t    recovery_ongoing;
    uint32_t    c_block_wake_fused;
    uint32_t    c_block_stop_fused;
    // 25
    uint32_t    scratchA;
    uint32_t    scratchB;
    uint64_t    qme_lfir;
    // 26,27
    uint64_t    core_fir[4];
    // 28
    uint32_t    stop11_counter[4];
    // 29,30,31,32
    uint32_t    c_tfac_c2s_retry_limit[4];
    uint32_t    c_tfac_c2s_retry_total[4];
    uint32_t    c_tfac_s2c_retry_limit[4];
    uint32_t    c_tfac_s2c_retry_total[4];
#ifdef CISR_TRACE
    // 33,34,35,36,37,38,39,40,41,42
    uint32_t    cisr0_s11e[4];
    uint32_t    cisr1_s11e[4];
    uint32_t    cisr0_rwus[4];
    uint32_t    cisr1_rwus[4];
    uint32_t    cisr0_rwuf[4];
    uint32_t    cisr1_rwuf[4];
    uint32_t    cisr0_sNx[4];
    uint32_t    cisr1_sNx[4];
    uint32_t    cisr0_s1x[4];
    uint32_t    cisr1_s1x[4];
#endif
    /*DEBUG_ONLY
    uint32_t    cisr0_idle[4];
    uint32_t    cisr1_idle[4];
        uint32_t    c_act_stop_level[4];
        uint32_t    t_old_pls[4][4];
        uint32_t    t_new_pls[4][4];
    */
} QmeRecord __attribute__ ((aligned (4)));

#endif //__QME_RECORD_H__
