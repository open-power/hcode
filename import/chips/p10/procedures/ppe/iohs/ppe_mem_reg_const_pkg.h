/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/ppe_mem_reg_const_pkg.h $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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
//- *!***************************************************************************
//- *! FILENAME    : ppe_reg_const_pkg.h
//- *! TITLE       : PPE Register Constants Package Header
//- *! DESCRIPTION : Constants containing register info for use by PPE
//- *!
//- *!
//- *! OWNER NAME  : John Rell III       Email: jgrell@us.ibm.com
//- *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
//- *!
//- *!***************************************************************************

#ifndef _PPE_MEM_REG_CONST_PKG_H_
#define _PPE_MEM_REG_CONST_PKG_H_



#define amp_setting_ovr_enb_addr                   0b110100000
#define amp_setting_ovr_enb_startbit               10
#define amp_setting_ovr_enb_width                  1
#define amp_setting_ovr_enb_endbit                 10
#define amp_setting_ovr_enb_shift                  5
#define amp_setting_ovr_enb_mask                   0x20


#define bist_in_hold_loop_addr                     0b111001011
#define bist_in_hold_loop_startbit                 1
#define bist_in_hold_loop_width                    1
#define bist_in_hold_loop_endbit                   1
#define bist_in_hold_loop_shift                    14
#define bist_in_hold_loop_mask                     0x4000


#define bist_in_progress_addr                      0b111001011
#define bist_in_progress_startbit                  0
#define bist_in_progress_width                     1
#define bist_in_progress_endbit                    0
#define bist_in_progress_shift                     15
#define bist_in_progress_mask                      0x8000


#define bist_internal_error_addr                   0b111001011
#define bist_internal_error_startbit               6
#define bist_internal_error_width                  1
#define bist_internal_error_endbit                 6
#define bist_internal_error_shift                  9
#define bist_internal_error_mask                   0x200


#define bist_other_fail_addr                       0b111001011
#define bist_other_fail_startbit                   4
#define bist_other_fail_width                      1
#define bist_other_fail_endbit                     4
#define bist_other_fail_shift                      11
#define bist_other_fail_mask                       0x800


#define bist_overall_pass_addr                     0b111001011
#define bist_overall_pass_startbit                 5
#define bist_overall_pass_width                    1
#define bist_overall_pass_endbit                   5
#define bist_overall_pass_shift                    10
#define bist_overall_pass_mask                     0x400


#define bist_rx_fail_addr                          0b111001011
#define bist_rx_fail_startbit                      2
#define bist_rx_fail_width                         1
#define bist_rx_fail_endbit                        2
#define bist_rx_fail_shift                         13
#define bist_rx_fail_mask                          0x2000


#define bist_spare_0_addr                          0b111001011
#define bist_spare_0_startbit                      7
#define bist_spare_0_width                         1
#define bist_spare_0_endbit                        7
#define bist_spare_0_shift                         8
#define bist_spare_0_mask                          0x100


#define bist_spare_1_addr                          0b111001011
#define bist_spare_1_startbit                      8
#define bist_spare_1_width                         1
#define bist_spare_1_endbit                        8
#define bist_spare_1_shift                         7
#define bist_spare_1_mask                          0x80


#define bist_tx_fail_addr                          0b111001011
#define bist_tx_fail_startbit                      3
#define bist_tx_fail_width                         1
#define bist_tx_fail_endbit                        3
#define bist_tx_fail_shift                         12
#define bist_tx_fail_mask                          0x1000


#define jump_table_used_addr                       0b000001111
#define jump_table_used_startbit                   4
#define jump_table_used_width                      1
#define jump_table_used_endbit                     4
#define jump_table_used_shift                      11
#define jump_table_used_mask                       0x800


#define lanes_pon_00_15_addr                       0b111001110
#define lanes_pon_00_15_startbit                   0
#define lanes_pon_00_15_width                      16
#define lanes_pon_00_15_endbit                     15
#define lanes_pon_00_15_shift                      0
#define lanes_pon_00_15_mask                       0xffff


#define lanes_pon_16_23_addr                       0b111001111
#define lanes_pon_16_23_startbit                   0
#define lanes_pon_16_23_width                      8
#define lanes_pon_16_23_endbit                     7
#define lanes_pon_16_23_shift                      8
#define lanes_pon_16_23_mask                       0xff00


#define loff_setting_ovr_enb_addr                  0b110100000
#define loff_setting_ovr_enb_startbit              9
#define loff_setting_ovr_enb_width                 1
#define loff_setting_ovr_enb_endbit                9
#define loff_setting_ovr_enb_shift                 6
#define loff_setting_ovr_enb_mask                  0x40


#define poff_avg_a_addr                            0b000001010
#define poff_avg_a_startbit                        0
#define poff_avg_a_width                           7
#define poff_avg_a_endbit                          6
#define poff_avg_a_shift                           9
#define poff_avg_a_mask                            0xfe00


#define poff_avg_b_addr                            0b000001010
#define poff_avg_b_startbit                        7
#define poff_avg_b_width                           7
#define poff_avg_b_endbit                          13
#define poff_avg_b_shift                           2
#define poff_avg_b_mask                            0x1fc


#define ppe_channel_loss_addr                      0b110000100
#define ppe_channel_loss_startbit                  11
#define ppe_channel_loss_width                     2
#define ppe_channel_loss_endbit                    12
#define ppe_channel_loss_shift                     3
#define ppe_channel_loss_mask                      0x18


#define ppe_ctle_peak1_disable_addr                0b111100000
#define ppe_ctle_peak1_disable_startbit            8
#define ppe_ctle_peak1_disable_width               1
#define ppe_ctle_peak1_disable_endbit              8
#define ppe_ctle_peak1_disable_shift               7
#define ppe_ctle_peak1_disable_mask                0x80


#define ppe_ctle_peak1_peak2_disable_alias_addr    0b111100000
#define ppe_ctle_peak1_peak2_disable_alias_startbit   8
#define ppe_ctle_peak1_peak2_disable_alias_width   2
#define ppe_ctle_peak1_peak2_disable_alias_endbit   9
#define ppe_ctle_peak1_peak2_disable_alias_shift   6
#define ppe_ctle_peak1_peak2_disable_alias_mask    0xc0


#define ppe_ctle_peak2_disable_addr                0b111100000
#define ppe_ctle_peak2_disable_startbit            9
#define ppe_ctle_peak2_disable_width               1
#define ppe_ctle_peak2_disable_endbit              9
#define ppe_ctle_peak2_disable_shift               6
#define ppe_ctle_peak2_disable_mask                0x40


#define ppe_data_rate_addr                         0b110000100
#define ppe_data_rate_startbit                     9
#define ppe_data_rate_width                        2
#define ppe_data_rate_endbit                       10
#define ppe_data_rate_shift                        5
#define ppe_data_rate_mask                         0x60


#define ppe_debug_state_addr                       0b110110000
#define ppe_debug_state_startbit                   0
#define ppe_debug_state_width                      16
#define ppe_debug_state_endbit                     15
#define ppe_debug_state_shift                      0
#define ppe_debug_state_mask                       0xffff


#define ppe_debug_stopwatch_time_us_addr           0b111001010
#define ppe_debug_stopwatch_time_us_startbit       0
#define ppe_debug_stopwatch_time_us_width          16
#define ppe_debug_stopwatch_time_us_endbit         15
#define ppe_debug_stopwatch_time_us_shift          0
#define ppe_debug_stopwatch_time_us_mask           0xffff


#define ppe_eoff_edge_hysteresis_addr              0b110001011
#define ppe_eoff_edge_hysteresis_startbit          3
#define ppe_eoff_edge_hysteresis_width             3
#define ppe_eoff_edge_hysteresis_endbit            5
#define ppe_eoff_edge_hysteresis_shift             10
#define ppe_eoff_edge_hysteresis_mask              0x1c00


#define ppe_last_cal_time_us_addr                  0b111000111
#define ppe_last_cal_time_us_startbit              0
#define ppe_last_cal_time_us_width                 16
#define ppe_last_cal_time_us_endbit                15
#define ppe_last_cal_time_us_shift                 0
#define ppe_last_cal_time_us_mask                  0xffff


#define ppe_lte_gain_disable_addr                  0b110001011
#define ppe_lte_gain_disable_startbit              13
#define ppe_lte_gain_disable_width                 1
#define ppe_lte_gain_disable_endbit                13
#define ppe_lte_gain_disable_shift                 2
#define ppe_lte_gain_disable_mask                  0x4


#define ppe_lte_gain_zero_disable_alias_addr       0b110001011
#define ppe_lte_gain_zero_disable_alias_startbit   13
#define ppe_lte_gain_zero_disable_alias_width      2
#define ppe_lte_gain_zero_disable_alias_endbit     14
#define ppe_lte_gain_zero_disable_alias_shift      1
#define ppe_lte_gain_zero_disable_alias_mask       0x6


#define ppe_lte_hysteresis_addr                    0b110001011
#define ppe_lte_hysteresis_startbit                0
#define ppe_lte_hysteresis_width                   3
#define ppe_lte_hysteresis_endbit                  2
#define ppe_lte_hysteresis_shift                   13
#define ppe_lte_hysteresis_mask                    0xe000


#define ppe_lte_zero_disable_addr                  0b110001011
#define ppe_lte_zero_disable_startbit              14
#define ppe_lte_zero_disable_width                 1
#define ppe_lte_zero_disable_endbit                14
#define ppe_lte_zero_disable_shift                 1
#define ppe_lte_zero_disable_mask                  0x2


#define ppe_pr_offset_applied_addr                 0b000000100
#define ppe_pr_offset_applied_startbit             15
#define ppe_pr_offset_applied_width                1
#define ppe_pr_offset_applied_endbit               15
#define ppe_pr_offset_applied_shift                0
#define ppe_pr_offset_applied_mask                 0x1


#define ppe_pr_offset_d_override_addr              0b110101010
#define ppe_pr_offset_d_override_startbit          0
#define ppe_pr_offset_d_override_width             5
#define ppe_pr_offset_d_override_endbit            4
#define ppe_pr_offset_d_override_shift             11
#define ppe_pr_offset_d_override_mask              0xf800


#define ppe_pr_offset_e_override_addr              0b110101010
#define ppe_pr_offset_e_override_startbit          5
#define ppe_pr_offset_e_override_width             5
#define ppe_pr_offset_e_override_endbit            9
#define ppe_pr_offset_e_override_shift             6
#define ppe_pr_offset_e_override_mask              0x7c0


#define ppe_pr_offset_pause_addr                   0b110101010
#define ppe_pr_offset_pause_startbit               10
#define ppe_pr_offset_pause_width                  1
#define ppe_pr_offset_pause_endbit                 10
#define ppe_pr_offset_pause_shift                  5
#define ppe_pr_offset_pause_mask                   0x20


#define ppe_recal_not_run_sim_mode_addr            0b110000100
#define ppe_recal_not_run_sim_mode_startbit        4
#define ppe_recal_not_run_sim_mode_width           4
#define ppe_recal_not_run_sim_mode_endbit          7
#define ppe_recal_not_run_sim_mode_shift           8
#define ppe_recal_not_run_sim_mode_mask            0xf00


#define ppe_servo_status0_addr                     0b110111010
#define ppe_servo_status0_startbit                 0
#define ppe_servo_status0_width                    16
#define ppe_servo_status0_endbit                   15
#define ppe_servo_status0_shift                    0
#define ppe_servo_status0_mask                     0xffff


#define ppe_servo_status1_addr                     0b110111011
#define ppe_servo_status1_startbit                 0
#define ppe_servo_status1_width                    16
#define ppe_servo_status1_endbit                   15
#define ppe_servo_status1_shift                    0
#define ppe_servo_status1_mask                     0xffff


#define ppe_thread_lock_sim_mode_addr              0b110000100
#define ppe_thread_lock_sim_mode_startbit          0
#define ppe_thread_lock_sim_mode_width             4
#define ppe_thread_lock_sim_mode_endbit            3
#define ppe_thread_lock_sim_mode_shift             12
#define ppe_thread_lock_sim_mode_mask              0xf000


#define ppe_thread_loop_count_addr                 0b110110001
#define ppe_thread_loop_count_startbit             0
#define ppe_thread_loop_count_width                16
#define ppe_thread_loop_count_endbit               15
#define ppe_thread_loop_count_shift                0
#define ppe_thread_loop_count_mask                 0xffff


#define ppe_tx_zcal_meas_filter_depth_addr         0b110010010
#define ppe_tx_zcal_meas_filter_depth_startbit     4
#define ppe_tx_zcal_meas_filter_depth_width        5
#define ppe_tx_zcal_meas_filter_depth_endbit       8
#define ppe_tx_zcal_meas_filter_depth_shift        7
#define ppe_tx_zcal_meas_filter_depth_mask         0xf80


#define ppe_tx_zcal_meas_max_addr                  0b110010011
#define ppe_tx_zcal_meas_max_startbit              7
#define ppe_tx_zcal_meas_max_width                 7
#define ppe_tx_zcal_meas_max_endbit                13
#define ppe_tx_zcal_meas_max_shift                 2
#define ppe_tx_zcal_meas_max_mask                  0x1fc


#define ppe_tx_zcal_meas_min_addr                  0b110010011
#define ppe_tx_zcal_meas_min_startbit              0
#define ppe_tx_zcal_meas_min_width                 7
#define ppe_tx_zcal_meas_min_endbit                6
#define ppe_tx_zcal_meas_min_shift                 9
#define ppe_tx_zcal_meas_min_mask                  0xfe00


#define ppe_tx_zcal_reset_time_us_addr             0b110010010
#define ppe_tx_zcal_reset_time_us_startbit         0
#define ppe_tx_zcal_reset_time_us_width            4
#define ppe_tx_zcal_reset_time_us_endbit           3
#define ppe_tx_zcal_reset_time_us_shift            12
#define ppe_tx_zcal_reset_time_us_mask             0xf000


#define rx_a_bad_dfe_conv_addr                     0b000000100
#define rx_a_bad_dfe_conv_startbit                 8
#define rx_a_bad_dfe_conv_width                    1
#define rx_a_bad_dfe_conv_endbit                   8
#define rx_a_bad_dfe_conv_shift                    7
#define rx_a_bad_dfe_conv_mask                     0x80


#define rx_a_bank_sync_done_addr                   0b000000110
#define rx_a_bank_sync_done_startbit               8
#define rx_a_bank_sync_done_width                  1
#define rx_a_bank_sync_done_endbit                 8
#define rx_a_bank_sync_done_shift                  7
#define rx_a_bank_sync_done_mask                   0x80


#define rx_a_ber_done_addr                         0b000000110
#define rx_a_ber_done_startbit                     12
#define rx_a_ber_done_width                        1
#define rx_a_ber_done_endbit                       12
#define rx_a_ber_done_shift                        3
#define rx_a_ber_done_mask                         0x8


#define rx_a_ctle_gain_done_addr                   0b000000110
#define rx_a_ctle_gain_done_startbit               1
#define rx_a_ctle_gain_done_width                  1
#define rx_a_ctle_gain_done_endbit                 1
#define rx_a_ctle_gain_done_shift                  14
#define rx_a_ctle_gain_done_mask                   0x4000


#define rx_a_ctle_peak1_done_addr                  0b000000110
#define rx_a_ctle_peak1_done_startbit              4
#define rx_a_ctle_peak1_done_width                 1
#define rx_a_ctle_peak1_done_endbit                4
#define rx_a_ctle_peak1_done_shift                 11
#define rx_a_ctle_peak1_done_mask                  0x800


#define rx_a_ctle_peak2_done_addr                  0b000000110
#define rx_a_ctle_peak2_done_startbit              5
#define rx_a_ctle_peak2_done_width                 1
#define rx_a_ctle_peak2_done_endbit                5
#define rx_a_ctle_peak2_done_shift                 10
#define rx_a_ctle_peak2_done_mask                  0x400


#define rx_a_ddc_done_addr                         0b000000110
#define rx_a_ddc_done_startbit                     11
#define rx_a_ddc_done_width                        1
#define rx_a_ddc_done_endbit                       11
#define rx_a_ddc_done_shift                        4
#define rx_a_ddc_done_mask                         0x10


#define rx_a_ddc_hyst_left_edge_addr               0b000001100
#define rx_a_ddc_hyst_left_edge_startbit           0
#define rx_a_ddc_hyst_left_edge_width              5
#define rx_a_ddc_hyst_left_edge_endbit             4
#define rx_a_ddc_hyst_left_edge_shift              11
#define rx_a_ddc_hyst_left_edge_mask               0xf800


#define rx_a_ddc_hyst_right_edge_addr              0b000001100
#define rx_a_ddc_hyst_right_edge_startbit          5
#define rx_a_ddc_hyst_right_edge_width             5
#define rx_a_ddc_hyst_right_edge_endbit            9
#define rx_a_ddc_hyst_right_edge_shift             6
#define rx_a_ddc_hyst_right_edge_mask              0x7c0


#define rx_a_dfe_done_addr                         0b000000110
#define rx_a_dfe_done_startbit                     10
#define rx_a_dfe_done_width                        1
#define rx_a_dfe_done_endbit                       10
#define rx_a_dfe_done_shift                        5
#define rx_a_dfe_done_mask                         0x20


#define rx_a_dfe_h1_done_addr                      0b000000110
#define rx_a_dfe_h1_done_startbit                  9
#define rx_a_dfe_h1_done_width                     1
#define rx_a_dfe_h1_done_endbit                    9
#define rx_a_dfe_h1_done_shift                     6
#define rx_a_dfe_h1_done_mask                      0x40


#define rx_a_eoff_done_addr                        0b000000110
#define rx_a_eoff_done_startbit                    2
#define rx_a_eoff_done_width                       1
#define rx_a_eoff_done_endbit                      2
#define rx_a_eoff_done_shift                       13
#define rx_a_eoff_done_mask                        0x2000


#define rx_a_lane_hist_min_eye_width_addr          0b000001100
#define rx_a_lane_hist_min_eye_width_startbit      10
#define rx_a_lane_hist_min_eye_width_width         6
#define rx_a_lane_hist_min_eye_width_endbit        15
#define rx_a_lane_hist_min_eye_width_shift         0
#define rx_a_lane_hist_min_eye_width_mask          0x3f


#define rx_a_last_eye_height_addr                  0b000001000
#define rx_a_last_eye_height_startbit              0
#define rx_a_last_eye_height_width                 7
#define rx_a_last_eye_height_endbit                6
#define rx_a_last_eye_height_shift                 9
#define rx_a_last_eye_height_mask                  0xfe00


#define rx_a_latch_offset_done_addr                0b000000110
#define rx_a_latch_offset_done_startbit            0
#define rx_a_latch_offset_done_width               1
#define rx_a_latch_offset_done_endbit              0
#define rx_a_latch_offset_done_shift               15
#define rx_a_latch_offset_done_mask                0x8000


#define rx_a_lte_gain_done_addr                    0b000000110
#define rx_a_lte_gain_done_startbit                6
#define rx_a_lte_gain_done_width                   1
#define rx_a_lte_gain_done_endbit                  6
#define rx_a_lte_gain_done_shift                   9
#define rx_a_lte_gain_done_mask                    0x200


#define rx_a_lte_zero_done_addr                    0b000000110
#define rx_a_lte_zero_done_startbit                7
#define rx_a_lte_zero_done_width                   1
#define rx_a_lte_zero_done_endbit                  7
#define rx_a_lte_zero_done_shift                   8
#define rx_a_lte_zero_done_mask                    0x100


#define rx_a_quad_phase_done_addr                  0b000000110
#define rx_a_quad_phase_done_startbit              3
#define rx_a_quad_phase_done_width                 1
#define rx_a_quad_phase_done_endbit                3
#define rx_a_quad_phase_done_shift                 12
#define rx_a_quad_phase_done_mask                  0x1000


#define rx_a_step_done_alias_addr                  0b000000110
#define rx_a_step_done_alias_startbit              0
#define rx_a_step_done_alias_width                 13
#define rx_a_step_done_alias_endbit                12
#define rx_a_step_done_alias_shift                 3
#define rx_a_step_done_alias_mask                  0xfff8


#define rx_amp_gain_cnt_max_addr                   0b110000011
#define rx_amp_gain_cnt_max_startbit               8
#define rx_amp_gain_cnt_max_width                  4
#define rx_amp_gain_cnt_max_endbit                 11
#define rx_amp_gain_cnt_max_shift                  4
#define rx_amp_gain_cnt_max_mask                   0xf0


#define rx_b_bank_sync_done_addr                   0b000000111
#define rx_b_bank_sync_done_startbit               8
#define rx_b_bank_sync_done_width                  1
#define rx_b_bank_sync_done_endbit                 8
#define rx_b_bank_sync_done_shift                  7
#define rx_b_bank_sync_done_mask                   0x80


#define rx_b_ber_done_addr                         0b000000111
#define rx_b_ber_done_startbit                     12
#define rx_b_ber_done_width                        1
#define rx_b_ber_done_endbit                       12
#define rx_b_ber_done_shift                        3
#define rx_b_ber_done_mask                         0x8


#define rx_b_ctle_gain_done_addr                   0b000000111
#define rx_b_ctle_gain_done_startbit               1
#define rx_b_ctle_gain_done_width                  1
#define rx_b_ctle_gain_done_endbit                 1
#define rx_b_ctle_gain_done_shift                  14
#define rx_b_ctle_gain_done_mask                   0x4000


#define rx_b_ctle_peak1_done_addr                  0b000000111
#define rx_b_ctle_peak1_done_startbit              4
#define rx_b_ctle_peak1_done_width                 1
#define rx_b_ctle_peak1_done_endbit                4
#define rx_b_ctle_peak1_done_shift                 11
#define rx_b_ctle_peak1_done_mask                  0x800


#define rx_b_ctle_peak2_done_addr                  0b000000111
#define rx_b_ctle_peak2_done_startbit              5
#define rx_b_ctle_peak2_done_width                 1
#define rx_b_ctle_peak2_done_endbit                5
#define rx_b_ctle_peak2_done_shift                 10
#define rx_b_ctle_peak2_done_mask                  0x400


#define rx_b_ddc_done_addr                         0b000000111
#define rx_b_ddc_done_startbit                     11
#define rx_b_ddc_done_width                        1
#define rx_b_ddc_done_endbit                       11
#define rx_b_ddc_done_shift                        4
#define rx_b_ddc_done_mask                         0x10


#define rx_b_ddc_hyst_left_edge_addr               0b000001101
#define rx_b_ddc_hyst_left_edge_startbit           0
#define rx_b_ddc_hyst_left_edge_width              5
#define rx_b_ddc_hyst_left_edge_endbit             4
#define rx_b_ddc_hyst_left_edge_shift              11
#define rx_b_ddc_hyst_left_edge_mask               0xf800


#define rx_b_ddc_hyst_right_edge_addr              0b000001101
#define rx_b_ddc_hyst_right_edge_startbit          5
#define rx_b_ddc_hyst_right_edge_width             5
#define rx_b_ddc_hyst_right_edge_endbit            9
#define rx_b_ddc_hyst_right_edge_shift             6
#define rx_b_ddc_hyst_right_edge_mask              0x7c0


#define rx_b_dfe_done_addr                         0b000000111
#define rx_b_dfe_done_startbit                     10
#define rx_b_dfe_done_width                        1
#define rx_b_dfe_done_endbit                       10
#define rx_b_dfe_done_shift                        5
#define rx_b_dfe_done_mask                         0x20


#define rx_b_dfe_h1_done_addr                      0b000000111
#define rx_b_dfe_h1_done_startbit                  9
#define rx_b_dfe_h1_done_width                     1
#define rx_b_dfe_h1_done_endbit                    9
#define rx_b_dfe_h1_done_shift                     6
#define rx_b_dfe_h1_done_mask                      0x40


#define rx_b_eoff_done_addr                        0b000000111
#define rx_b_eoff_done_startbit                    2
#define rx_b_eoff_done_width                       1
#define rx_b_eoff_done_endbit                      2
#define rx_b_eoff_done_shift                       13
#define rx_b_eoff_done_mask                        0x2000


#define rx_b_lane_hist_min_eye_width_addr          0b000001101
#define rx_b_lane_hist_min_eye_width_startbit      10
#define rx_b_lane_hist_min_eye_width_width         6
#define rx_b_lane_hist_min_eye_width_endbit        15
#define rx_b_lane_hist_min_eye_width_shift         0
#define rx_b_lane_hist_min_eye_width_mask          0x3f


#define rx_b_last_eye_height_addr                  0b000001000
#define rx_b_last_eye_height_startbit              7
#define rx_b_last_eye_height_width                 7
#define rx_b_last_eye_height_endbit                13
#define rx_b_last_eye_height_shift                 2
#define rx_b_last_eye_height_mask                  0x1fc


#define rx_b_latch_offset_done_addr                0b000000111
#define rx_b_latch_offset_done_startbit            0
#define rx_b_latch_offset_done_width               1
#define rx_b_latch_offset_done_endbit              0
#define rx_b_latch_offset_done_shift               15
#define rx_b_latch_offset_done_mask                0x8000


#define rx_b_lte_gain_done_addr                    0b000000111
#define rx_b_lte_gain_done_startbit                6
#define rx_b_lte_gain_done_width                   1
#define rx_b_lte_gain_done_endbit                  6
#define rx_b_lte_gain_done_shift                   9
#define rx_b_lte_gain_done_mask                    0x200


#define rx_b_lte_zero_done_addr                    0b000000111
#define rx_b_lte_zero_done_startbit                7
#define rx_b_lte_zero_done_width                   1
#define rx_b_lte_zero_done_endbit                  7
#define rx_b_lte_zero_done_shift                   8
#define rx_b_lte_zero_done_mask                    0x100


#define rx_b_quad_phase_done_addr                  0b000000111
#define rx_b_quad_phase_done_startbit              3
#define rx_b_quad_phase_done_width                 1
#define rx_b_quad_phase_done_endbit                3
#define rx_b_quad_phase_done_shift                 12
#define rx_b_quad_phase_done_mask                  0x1000


#define rx_b_step_done_alias_addr                  0b000000111
#define rx_b_step_done_alias_startbit              0
#define rx_b_step_done_alias_width                 13
#define rx_b_step_done_alias_endbit                12
#define rx_b_step_done_alias_shift                 3
#define rx_b_step_done_alias_mask                  0xfff8


#define rx_bad_eye_opt_height_addr                 0b000000101
#define rx_bad_eye_opt_height_startbit             1
#define rx_bad_eye_opt_height_width                1
#define rx_bad_eye_opt_height_endbit               1
#define rx_bad_eye_opt_height_shift                14
#define rx_bad_eye_opt_height_mask                 0x4000


#define rx_bad_eye_opt_width_addr                  0b000000101
#define rx_bad_eye_opt_width_startbit              0
#define rx_bad_eye_opt_width_width                 1
#define rx_bad_eye_opt_width_endbit                0
#define rx_bad_eye_opt_width_shift                 15
#define rx_bad_eye_opt_width_mask                  0x8000


#define rx_bank_sync_fail_addr                     0b000000101
#define rx_bank_sync_fail_startbit                 10
#define rx_bank_sync_fail_width                    1
#define rx_bank_sync_fail_endbit                   10
#define rx_bank_sync_fail_shift                    5
#define rx_bank_sync_fail_mask                     0x20


#define rx_ber_fail_addr                           0b000000101
#define rx_ber_fail_startbit                       15
#define rx_ber_fail_width                          1
#define rx_ber_fail_endbit                         15
#define rx_ber_fail_shift                          0
#define rx_ber_fail_mask                           0x1


#define rx_clr_lane_recal_cnt_addr                 0b000000001
#define rx_clr_lane_recal_cnt_startbit             0
#define rx_clr_lane_recal_cnt_width                1
#define rx_clr_lane_recal_cnt_endbit               0
#define rx_clr_lane_recal_cnt_shift                15
#define rx_clr_lane_recal_cnt_mask                 0x8000


#define rx_cmd_init_done_addr                      0b000000100
#define rx_cmd_init_done_startbit                  6
#define rx_cmd_init_done_width                     1
#define rx_cmd_init_done_endbit                    6
#define rx_cmd_init_done_shift                     9
#define rx_cmd_init_done_mask                      0x200


#define rx_ctle_gain_fail_addr                     0b000000101
#define rx_ctle_gain_fail_startbit                 2
#define rx_ctle_gain_fail_width                    1
#define rx_ctle_gain_fail_endbit                   2
#define rx_ctle_gain_fail_shift                    13
#define rx_ctle_gain_fail_mask                     0x2000


#define rx_ctle_gain_max_check_addr                0b110100001
#define rx_ctle_gain_max_check_startbit            7
#define rx_ctle_gain_max_check_width               4
#define rx_ctle_gain_max_check_endbit              10
#define rx_ctle_gain_max_check_shift               5
#define rx_ctle_gain_max_check_mask                0x1e0


#define rx_ctle_gain_min_check_addr                0b110100001
#define rx_ctle_gain_min_check_startbit            11
#define rx_ctle_gain_min_check_width               4
#define rx_ctle_gain_min_check_endbit              14
#define rx_ctle_gain_min_check_shift               1
#define rx_ctle_gain_min_check_mask                0x1e


#define rx_ctle_hysteresis_addr                    0b110001110
#define rx_ctle_hysteresis_startbit                5
#define rx_ctle_hysteresis_width                   2
#define rx_ctle_hysteresis_endbit                  6
#define rx_ctle_hysteresis_shift                   9
#define rx_ctle_hysteresis_mask                    0x600


#define rx_ctle_mode_addr                          0b110001110
#define rx_ctle_mode_startbit                      4
#define rx_ctle_mode_width                         1
#define rx_ctle_mode_endbit                        4
#define rx_ctle_mode_shift                         11
#define rx_ctle_mode_mask                          0x800


#define rx_ctle_peak1_fail_addr                    0b000000101
#define rx_ctle_peak1_fail_startbit                6
#define rx_ctle_peak1_fail_width                   1
#define rx_ctle_peak1_fail_endbit                  6
#define rx_ctle_peak1_fail_shift                   9
#define rx_ctle_peak1_fail_mask                    0x200


#define rx_ctle_peak1_max_check_addr               0b110100100
#define rx_ctle_peak1_max_check_startbit           0
#define rx_ctle_peak1_max_check_width              5
#define rx_ctle_peak1_max_check_endbit             4
#define rx_ctle_peak1_max_check_shift              11
#define rx_ctle_peak1_max_check_mask               0xf800


#define rx_ctle_peak1_min_check_addr               0b110100100
#define rx_ctle_peak1_min_check_startbit           5
#define rx_ctle_peak1_min_check_width              5
#define rx_ctle_peak1_min_check_endbit             9
#define rx_ctle_peak1_min_check_shift              6
#define rx_ctle_peak1_min_check_mask               0x7c0


#define rx_ctle_peak2_fail_addr                    0b000000101
#define rx_ctle_peak2_fail_startbit                7
#define rx_ctle_peak2_fail_width                   1
#define rx_ctle_peak2_fail_endbit                  7
#define rx_ctle_peak2_fail_shift                   8
#define rx_ctle_peak2_fail_mask                    0x100


#define rx_ctle_peak2_max_check_addr               0b110101001
#define rx_ctle_peak2_max_check_startbit           0
#define rx_ctle_peak2_max_check_width              5
#define rx_ctle_peak2_max_check_endbit             4
#define rx_ctle_peak2_max_check_shift              11
#define rx_ctle_peak2_max_check_mask               0xf800


#define rx_ctle_peak2_min_check_addr               0b110101001
#define rx_ctle_peak2_min_check_startbit           5
#define rx_ctle_peak2_min_check_width              5
#define rx_ctle_peak2_min_check_endbit             9
#define rx_ctle_peak2_min_check_shift              6
#define rx_ctle_peak2_min_check_mask               0x7c0


#define rx_ctle_quad_diff_thresh_addr              0b110001110
#define rx_ctle_quad_diff_thresh_startbit          7
#define rx_ctle_quad_diff_thresh_width             3
#define rx_ctle_quad_diff_thresh_endbit            9
#define rx_ctle_quad_diff_thresh_shift             6
#define rx_ctle_quad_diff_thresh_mask              0x1c0


#define rx_current_cal_lane_addr                   0b110110100
#define rx_current_cal_lane_startbit               2
#define rx_current_cal_lane_width                  5
#define rx_current_cal_lane_endbit                 6
#define rx_current_cal_lane_shift                  9
#define rx_current_cal_lane_mask                   0x3e00


#define rx_dc_enable_latch_offset_cal_addr         0b110001101
#define rx_dc_enable_latch_offset_cal_startbit     0
#define rx_dc_enable_latch_offset_cal_width        1
#define rx_dc_enable_latch_offset_cal_endbit       0
#define rx_dc_enable_latch_offset_cal_shift        15
#define rx_dc_enable_latch_offset_cal_mask         0x8000


#define rx_dc_step_cntl_opt_alias_addr             0b110001101
#define rx_dc_step_cntl_opt_alias_startbit         0
#define rx_dc_step_cntl_opt_alias_width            2
#define rx_dc_step_cntl_opt_alias_endbit           1
#define rx_dc_step_cntl_opt_alias_shift            14
#define rx_dc_step_cntl_opt_alias_mask             0xc000


#define rx_dccal_done_addr                         0b000000100
#define rx_dccal_done_startbit                     1
#define rx_dccal_done_width                        1
#define rx_dccal_done_endbit                       1
#define rx_dccal_done_shift                        14
#define rx_dccal_done_mask                         0x4000


#define rx_ddc_fail_addr                           0b000000101
#define rx_ddc_fail_startbit                       14
#define rx_ddc_fail_width                          1
#define rx_ddc_fail_endbit                         14
#define rx_ddc_fail_shift                          1
#define rx_ddc_fail_mask                           0x2


#define rx_ddc_hysteresis_addr                     0b110001110
#define rx_ddc_hysteresis_startbit                 13
#define rx_ddc_hysteresis_width                    2
#define rx_ddc_hysteresis_endbit                   14
#define rx_ddc_hysteresis_shift                    1
#define rx_ddc_hysteresis_mask                     0x6


#define rx_ddc_measure_limited_addr                0b000000100
#define rx_ddc_measure_limited_startbit            12
#define rx_ddc_measure_limited_width               1
#define rx_ddc_measure_limited_endbit              12
#define rx_ddc_measure_limited_shift               3
#define rx_ddc_measure_limited_mask                0x8


#define rx_ddc_min_err_lim_addr                    0b110001110
#define rx_ddc_min_err_lim_startbit                10
#define rx_ddc_min_err_lim_width                   3
#define rx_ddc_min_err_lim_endbit                  12
#define rx_ddc_min_err_lim_shift                   3
#define rx_ddc_min_err_lim_mask                    0x38


#define rx_dfe_ap_addr                             0b000001001
#define rx_dfe_ap_startbit                         8
#define rx_dfe_ap_width                            8
#define rx_dfe_ap_endbit                           15
#define rx_dfe_ap_shift                            0
#define rx_dfe_ap_mask                             0xff


#define rx_dfe_clkadj_coeff_addr                   0b110001011
#define rx_dfe_clkadj_coeff_startbit               6
#define rx_dfe_clkadj_coeff_width                  7
#define rx_dfe_clkadj_coeff_endbit                 12
#define rx_dfe_clkadj_coeff_shift                  3
#define rx_dfe_clkadj_coeff_mask                   0x3f8


#define rx_dfe_debug_addr                          0b111001001
#define rx_dfe_debug_startbit                      0
#define rx_dfe_debug_width                         16
#define rx_dfe_debug_endbit                        15
#define rx_dfe_debug_shift                         0
#define rx_dfe_debug_mask                          0xffff


#define rx_dfe_fail_addr                           0b000000101
#define rx_dfe_fail_startbit                       13
#define rx_dfe_fail_width                          1
#define rx_dfe_fail_endbit                         13
#define rx_dfe_fail_shift                          2
#define rx_dfe_fail_mask                           0x4


#define rx_dfe_full_mode_addr                      0b110000100
#define rx_dfe_full_mode_startbit                  8
#define rx_dfe_full_mode_width                     1
#define rx_dfe_full_mode_endbit                    8
#define rx_dfe_full_mode_shift                     7
#define rx_dfe_full_mode_mask                      0x80


#define rx_dfe_full_quad_addr                      0b000000100
#define rx_dfe_full_quad_startbit                  13
#define rx_dfe_full_quad_width                     2
#define rx_dfe_full_quad_endbit                    14
#define rx_dfe_full_quad_shift                     1
#define rx_dfe_full_quad_mask                      0x6


#define rx_dfe_h1_fail_addr                        0b000000101
#define rx_dfe_h1_fail_startbit                    12
#define rx_dfe_h1_fail_width                       1
#define rx_dfe_h1_fail_endbit                      12
#define rx_dfe_h1_fail_shift                       3
#define rx_dfe_h1_fail_mask                        0x8


#define rx_dfe_max_check_addr                      0b110100110
#define rx_dfe_max_check_startbit                  0
#define rx_dfe_max_check_width                     8
#define rx_dfe_max_check_endbit                    7
#define rx_dfe_max_check_shift                     8
#define rx_dfe_max_check_mask                      0xff00


#define rx_dfe_min_check_addr                      0b110100111
#define rx_dfe_min_check_startbit                  0
#define rx_dfe_min_check_width                     8
#define rx_dfe_min_check_endbit                    7
#define rx_dfe_min_check_shift                     8
#define rx_dfe_min_check_mask                      0xff00


#define rx_disable_bank_pdwn_addr                  0b110000011
#define rx_disable_bank_pdwn_startbit              12
#define rx_disable_bank_pdwn_width                 1
#define rx_disable_bank_pdwn_endbit                12
#define rx_disable_bank_pdwn_shift                 3
#define rx_disable_bank_pdwn_mask                  0x8


#define rx_enable_auto_recal_addr                  0b000000000
#define rx_enable_auto_recal_startbit              1
#define rx_enable_auto_recal_width                 1
#define rx_enable_auto_recal_endbit                1
#define rx_enable_auto_recal_shift                 14
#define rx_enable_auto_recal_mask                  0x4000


#define rx_enable_lane_cal_copy_addr               0b110000011
#define rx_enable_lane_cal_copy_startbit           13
#define rx_enable_lane_cal_copy_width              1
#define rx_enable_lane_cal_copy_endbit             13
#define rx_enable_lane_cal_copy_shift              2
#define rx_enable_lane_cal_copy_mask               0x4


#define rx_enable_lane_cal_lte_copy_addr           0b110000011
#define rx_enable_lane_cal_lte_copy_startbit       14
#define rx_enable_lane_cal_lte_copy_width          1
#define rx_enable_lane_cal_lte_copy_endbit         14
#define rx_enable_lane_cal_lte_copy_shift          1
#define rx_enable_lane_cal_lte_copy_mask           0x2


#define rx_eo_converged_end_count_addr             0b110000011
#define rx_eo_converged_end_count_startbit         0
#define rx_eo_converged_end_count_width            4
#define rx_eo_converged_end_count_endbit           3
#define rx_eo_converged_end_count_shift            12
#define rx_eo_converged_end_count_mask             0xf000


#define rx_eo_enable_bank_sync_addr                0b110001001
#define rx_eo_enable_bank_sync_startbit            6
#define rx_eo_enable_bank_sync_width               1
#define rx_eo_enable_bank_sync_endbit              6
#define rx_eo_enable_bank_sync_shift               9
#define rx_eo_enable_bank_sync_mask                0x200


#define rx_eo_enable_ctle_peak_cal_addr            0b110001001
#define rx_eo_enable_ctle_peak_cal_startbit        2
#define rx_eo_enable_ctle_peak_cal_width           1
#define rx_eo_enable_ctle_peak_cal_endbit          2
#define rx_eo_enable_ctle_peak_cal_shift           13
#define rx_eo_enable_ctle_peak_cal_mask            0x2000


#define rx_eo_enable_ddc_addr                      0b110001001
#define rx_eo_enable_ddc_startbit                  5
#define rx_eo_enable_ddc_width                     1
#define rx_eo_enable_ddc_endbit                    5
#define rx_eo_enable_ddc_shift                     10
#define rx_eo_enable_ddc_mask                      0x400


#define rx_eo_enable_dfe_cal_addr                  0b110001001
#define rx_eo_enable_dfe_cal_startbit              4
#define rx_eo_enable_dfe_cal_width                 1
#define rx_eo_enable_dfe_cal_endbit                4
#define rx_eo_enable_dfe_cal_shift                 11
#define rx_eo_enable_dfe_cal_mask                  0x800


#define rx_eo_enable_dfe_full_cal_addr             0b110001001
#define rx_eo_enable_dfe_full_cal_startbit         8
#define rx_eo_enable_dfe_full_cal_width            1
#define rx_eo_enable_dfe_full_cal_endbit           8
#define rx_eo_enable_dfe_full_cal_shift            7
#define rx_eo_enable_dfe_full_cal_mask             0x80


#define rx_eo_enable_edge_offset_cal_addr          0b110001001
#define rx_eo_enable_edge_offset_cal_startbit      1
#define rx_eo_enable_edge_offset_cal_width         1
#define rx_eo_enable_edge_offset_cal_endbit        1
#define rx_eo_enable_edge_offset_cal_shift         14
#define rx_eo_enable_edge_offset_cal_mask          0x4000


#define rx_eo_enable_lte_cal_addr                  0b110001001
#define rx_eo_enable_lte_cal_startbit              3
#define rx_eo_enable_lte_cal_width                 1
#define rx_eo_enable_lte_cal_endbit                3
#define rx_eo_enable_lte_cal_shift                 12
#define rx_eo_enable_lte_cal_mask                  0x1000


#define rx_eo_enable_quad_phase_cal_addr           0b110001001
#define rx_eo_enable_quad_phase_cal_startbit       7
#define rx_eo_enable_quad_phase_cal_width          1
#define rx_eo_enable_quad_phase_cal_endbit         7
#define rx_eo_enable_quad_phase_cal_shift          8
#define rx_eo_enable_quad_phase_cal_mask           0x100


#define rx_eo_enable_vga_cal_addr                  0b110001001
#define rx_eo_enable_vga_cal_startbit              0
#define rx_eo_enable_vga_cal_width                 1
#define rx_eo_enable_vga_cal_endbit                0
#define rx_eo_enable_vga_cal_shift                 15
#define rx_eo_enable_vga_cal_mask                  0x8000


#define rx_eo_step_cntl_opt_alias_addr             0b110001001
#define rx_eo_step_cntl_opt_alias_startbit         0
#define rx_eo_step_cntl_opt_alias_width            9
#define rx_eo_step_cntl_opt_alias_endbit           8
#define rx_eo_step_cntl_opt_alias_shift            7
#define rx_eo_step_cntl_opt_alias_mask             0xff80


#define rx_eo_vga_ctle_loop_not_converged_addr     0b000000100
#define rx_eo_vga_ctle_loop_not_converged_startbit   7
#define rx_eo_vga_ctle_loop_not_converged_width    1
#define rx_eo_vga_ctle_loop_not_converged_endbit   7
#define rx_eo_vga_ctle_loop_not_converged_shift    8
#define rx_eo_vga_ctle_loop_not_converged_mask     0x100


#define rx_eoff_fail_addr                          0b000000101
#define rx_eoff_fail_startbit                      4
#define rx_eoff_fail_width                         1
#define rx_eoff_fail_endbit                        4
#define rx_eoff_fail_shift                         11
#define rx_eoff_fail_mask                          0x800


#define rx_eoff_max_check_addr                     0b110100011
#define rx_eoff_max_check_startbit                 0
#define rx_eoff_max_check_width                    8
#define rx_eoff_max_check_endbit                   7
#define rx_eoff_max_check_shift                    8
#define rx_eoff_max_check_mask                     0xff00


#define rx_eoff_min_check_addr                     0b110100011
#define rx_eoff_min_check_startbit                 8
#define rx_eoff_min_check_width                    8
#define rx_eoff_min_check_endbit                   15
#define rx_eoff_min_check_shift                    0
#define rx_eoff_min_check_mask                     0xff


#define rx_eoff_poff_fail_addr                     0b000000101
#define rx_eoff_poff_fail_startbit                 5
#define rx_eoff_poff_fail_width                    1
#define rx_eoff_poff_fail_endbit                   5
#define rx_eoff_poff_fail_shift                    10
#define rx_eoff_poff_fail_mask                     0x400


#define rx_epoff_max_check_addr                    0b110101000
#define rx_epoff_max_check_startbit                0
#define rx_epoff_max_check_width                   8
#define rx_epoff_max_check_endbit                  7
#define rx_epoff_max_check_shift                   8
#define rx_epoff_max_check_mask                    0xff00


#define rx_epoff_min_check_addr                    0b110101000
#define rx_epoff_min_check_startbit                8
#define rx_epoff_min_check_width                   8
#define rx_epoff_min_check_endbit                  15
#define rx_epoff_min_check_shift                   0
#define rx_epoff_min_check_mask                    0xff


#define rx_eye_height_min_check_addr               0b110100000
#define rx_eye_height_min_check_startbit           0
#define rx_eye_height_min_check_width              7
#define rx_eye_height_min_check_endbit             6
#define rx_eye_height_min_check_shift              9
#define rx_eye_height_min_check_mask               0xfe00


#define rx_eye_width_min_check_addr                0b110100001
#define rx_eye_width_min_check_startbit            0
#define rx_eye_width_min_check_width               7
#define rx_eye_width_min_check_endbit              6
#define rx_eye_width_min_check_shift               9
#define rx_eye_width_min_check_mask                0xfe00


#define rx_fail_flag_addr                          0b111001011
#define rx_fail_flag_startbit                      12
#define rx_fail_flag_width                         1
#define rx_fail_flag_endbit                        12
#define rx_fail_flag_shift                         3
#define rx_fail_flag_mask                          0x8


#define rx_h1_coef_addr                            0b000001110
#define rx_h1_coef_startbit                        0
#define rx_h1_coef_width                           8
#define rx_h1_coef_endbit                          7
#define rx_h1_coef_shift                           8
#define rx_h1_coef_mask                            0xff00


#define rx_h2_coef_addr                            0b000001110
#define rx_h2_coef_startbit                        8
#define rx_h2_coef_width                           8
#define rx_h2_coef_endbit                          15
#define rx_h2_coef_shift                           0
#define rx_h2_coef_mask                            0xff


#define rx_h3_coef_addr                            0b000001001
#define rx_h3_coef_startbit                        0
#define rx_h3_coef_width                           8
#define rx_h3_coef_endbit                          7
#define rx_h3_coef_shift                           8
#define rx_h3_coef_mask                            0xff00


#define rx_hist_min_eye_height_addr                0b110110011
#define rx_hist_min_eye_height_startbit            8
#define rx_hist_min_eye_height_width               7
#define rx_hist_min_eye_height_endbit              14
#define rx_hist_min_eye_height_shift               1
#define rx_hist_min_eye_height_mask                0xfe


#define rx_hist_min_eye_height_lane_addr           0b110110010
#define rx_hist_min_eye_height_lane_startbit       11
#define rx_hist_min_eye_height_lane_width          5
#define rx_hist_min_eye_height_lane_endbit         15
#define rx_hist_min_eye_height_lane_shift          0
#define rx_hist_min_eye_height_lane_mask           0x1f


#define rx_hist_min_eye_height_valid_addr          0b110101100
#define rx_hist_min_eye_height_valid_startbit      8
#define rx_hist_min_eye_height_valid_width         1
#define rx_hist_min_eye_height_valid_endbit        8
#define rx_hist_min_eye_height_valid_shift         7
#define rx_hist_min_eye_height_valid_mask          0x80


#define rx_hist_min_eye_width_addr                 0b110110011
#define rx_hist_min_eye_width_startbit             0
#define rx_hist_min_eye_width_width                8
#define rx_hist_min_eye_width_endbit               7
#define rx_hist_min_eye_width_shift                8
#define rx_hist_min_eye_width_mask                 0xff00


#define rx_hist_min_eye_width_lane_addr            0b110101100
#define rx_hist_min_eye_width_lane_startbit        3
#define rx_hist_min_eye_width_lane_width           5
#define rx_hist_min_eye_width_lane_endbit          7
#define rx_hist_min_eye_width_lane_shift           8
#define rx_hist_min_eye_width_lane_mask            0x1f00


#define rx_hist_min_eye_width_mode_addr            0b110000011
#define rx_hist_min_eye_width_mode_startbit        4
#define rx_hist_min_eye_width_mode_width           2
#define rx_hist_min_eye_width_mode_endbit          5
#define rx_hist_min_eye_width_mode_shift           10
#define rx_hist_min_eye_width_mode_mask            0xc00


#define rx_hist_min_eye_width_valid_addr           0b110101100
#define rx_hist_min_eye_width_valid_startbit       0
#define rx_hist_min_eye_width_valid_width          1
#define rx_hist_min_eye_width_valid_endbit         0
#define rx_hist_min_eye_width_valid_shift          15
#define rx_hist_min_eye_width_valid_mask           0x8000


#define rx_init_done_addr                          0b000000100
#define rx_init_done_startbit                      0
#define rx_init_done_width                         1
#define rx_init_done_endbit                        0
#define rx_init_done_shift                         15
#define rx_init_done_mask                          0x8000


#define rx_lane_bad_addr                           0b000000100
#define rx_lane_bad_startbit                       10
#define rx_lane_bad_width                          1
#define rx_lane_bad_endbit                         10
#define rx_lane_bad_shift                          5
#define rx_lane_bad_mask                           0x20


#define rx_lane_bad_0_15_addr                      0b111000101
#define rx_lane_bad_0_15_startbit                  0
#define rx_lane_bad_0_15_width                     16
#define rx_lane_bad_0_15_endbit                    15
#define rx_lane_bad_0_15_shift                     0
#define rx_lane_bad_0_15_mask                      0xffff


#define rx_lane_bad_16_23_addr                     0b111000110
#define rx_lane_bad_16_23_startbit                 0
#define rx_lane_bad_16_23_width                    8
#define rx_lane_bad_16_23_endbit                   7
#define rx_lane_bad_16_23_shift                    8
#define rx_lane_bad_16_23_mask                     0xff00


#define rx_lane_busy_addr                          0b000000100
#define rx_lane_busy_startbit                      2
#define rx_lane_busy_width                         1
#define rx_lane_busy_endbit                        2
#define rx_lane_busy_shift                         13
#define rx_lane_busy_mask                          0x2000


#define rx_lane_hist_min_eye_height_addr           0b000001111
#define rx_lane_hist_min_eye_height_startbit       9
#define rx_lane_hist_min_eye_height_width          7
#define rx_lane_hist_min_eye_height_endbit         15
#define rx_lane_hist_min_eye_height_shift          0
#define rx_lane_hist_min_eye_height_mask           0x7f


#define rx_lane_hist_min_eye_height_bank_addr      0b000001111
#define rx_lane_hist_min_eye_height_bank_startbit   5
#define rx_lane_hist_min_eye_height_bank_width     1
#define rx_lane_hist_min_eye_height_bank_endbit    5
#define rx_lane_hist_min_eye_height_bank_shift     10
#define rx_lane_hist_min_eye_height_bank_mask      0x400


#define rx_lane_hist_min_eye_height_latch_addr     0b000001111
#define rx_lane_hist_min_eye_height_latch_startbit   6
#define rx_lane_hist_min_eye_height_latch_width    3
#define rx_lane_hist_min_eye_height_latch_endbit   8
#define rx_lane_hist_min_eye_height_latch_shift    7
#define rx_lane_hist_min_eye_height_latch_mask     0x380


#define rx_lane_hist_min_eye_height_quad_addr      0b000001000
#define rx_lane_hist_min_eye_height_quad_startbit   14
#define rx_lane_hist_min_eye_height_quad_width     2
#define rx_lane_hist_min_eye_height_quad_endbit    15
#define rx_lane_hist_min_eye_height_quad_shift     0
#define rx_lane_hist_min_eye_height_quad_mask      0x3


#define rx_lane_hist_min_eye_height_valid_addr     0b000000001
#define rx_lane_hist_min_eye_height_valid_startbit   1
#define rx_lane_hist_min_eye_height_valid_width    1
#define rx_lane_hist_min_eye_height_valid_endbit   1
#define rx_lane_hist_min_eye_height_valid_shift    14
#define rx_lane_hist_min_eye_height_valid_mask     0x4000


#define rx_lane_hist_min_eye_width_valid_addr      0b000000001
#define rx_lane_hist_min_eye_width_valid_startbit   2
#define rx_lane_hist_min_eye_width_valid_width     1
#define rx_lane_hist_min_eye_width_valid_endbit    2
#define rx_lane_hist_min_eye_width_valid_shift     13
#define rx_lane_hist_min_eye_width_valid_mask      0x2000


#define rx_lane_recal_cnt_addr                     0b000001011
#define rx_lane_recal_cnt_startbit                 0
#define rx_lane_recal_cnt_width                    16
#define rx_lane_recal_cnt_endbit                   15
#define rx_lane_recal_cnt_shift                    0
#define rx_lane_recal_cnt_mask                     0xffff


#define rx_last_init_lane_addr                     0b110110100
#define rx_last_init_lane_startbit                 7
#define rx_last_init_lane_width                    5
#define rx_last_init_lane_endbit                   11
#define rx_last_init_lane_shift                    4
#define rx_last_init_lane_mask                     0x1f0


#define rx_latch_offset_fail_addr                  0b000000101
#define rx_latch_offset_fail_startbit              3
#define rx_latch_offset_fail_width                 1
#define rx_latch_offset_fail_endbit                3
#define rx_latch_offset_fail_shift                 12
#define rx_latch_offset_fail_mask                  0x1000


#define rx_latchoff_max_check_addr                 0b110100010
#define rx_latchoff_max_check_startbit             0
#define rx_latchoff_max_check_width                8
#define rx_latchoff_max_check_endbit               7
#define rx_latchoff_max_check_shift                8
#define rx_latchoff_max_check_mask                 0xff00


#define rx_latchoff_min_check_addr                 0b110100010
#define rx_latchoff_min_check_startbit             8
#define rx_latchoff_min_check_width                8
#define rx_latchoff_min_check_endbit               15
#define rx_latchoff_min_check_shift                0
#define rx_latchoff_min_check_mask                 0xff


#define rx_linklayer_done_addr                     0b111001011
#define rx_linklayer_done_startbit                 11
#define rx_linklayer_done_width                    1
#define rx_linklayer_done_endbit                   11
#define rx_linklayer_done_shift                    4
#define rx_linklayer_done_mask                     0x10


#define rx_linklayer_fail_addr                     0b111001011
#define rx_linklayer_fail_startbit                 9
#define rx_linklayer_fail_width                    1
#define rx_linklayer_fail_endbit                   9
#define rx_linklayer_fail_shift                    6
#define rx_linklayer_fail_mask                     0x40


#define rx_lte_gain_fail_addr                      0b000000101
#define rx_lte_gain_fail_startbit                  8
#define rx_lte_gain_fail_width                     1
#define rx_lte_gain_fail_endbit                    8
#define rx_lte_gain_fail_shift                     7
#define rx_lte_gain_fail_mask                      0x80


#define rx_lte_gain_max_check_addr                 0b110100100
#define rx_lte_gain_max_check_startbit             10
#define rx_lte_gain_max_check_width                5
#define rx_lte_gain_max_check_endbit               14
#define rx_lte_gain_max_check_shift                1
#define rx_lte_gain_max_check_mask                 0x3e


#define rx_lte_gain_min_check_addr                 0b110100101
#define rx_lte_gain_min_check_startbit             0
#define rx_lte_gain_min_check_width                5
#define rx_lte_gain_min_check_endbit               4
#define rx_lte_gain_min_check_shift                11
#define rx_lte_gain_min_check_mask                 0xf800


#define rx_lte_zero_fail_addr                      0b000000101
#define rx_lte_zero_fail_startbit                  9
#define rx_lte_zero_fail_width                     1
#define rx_lte_zero_fail_endbit                    9
#define rx_lte_zero_fail_shift                     6
#define rx_lte_zero_fail_mask                      0x40


#define rx_lte_zero_max_check_addr                 0b110100101
#define rx_lte_zero_max_check_startbit             5
#define rx_lte_zero_max_check_width                5
#define rx_lte_zero_max_check_endbit               9
#define rx_lte_zero_max_check_shift                6
#define rx_lte_zero_max_check_mask                 0x7c0


#define rx_lte_zero_min_check_addr                 0b110100101
#define rx_lte_zero_min_check_startbit             10
#define rx_lte_zero_min_check_width                5
#define rx_lte_zero_min_check_endbit               14
#define rx_lte_zero_min_check_shift                1
#define rx_lte_zero_min_check_mask                 0x3e


#define rx_manual_servo_filter_depth_addr          0b110000011
#define rx_manual_servo_filter_depth_startbit      6
#define rx_manual_servo_filter_depth_width         2
#define rx_manual_servo_filter_depth_endbit        7
#define rx_manual_servo_filter_depth_shift         8
#define rx_manual_servo_filter_depth_mask          0x300


#define rx_min_recal_cnt_addr                      0b110001110
#define rx_min_recal_cnt_startbit                  0
#define rx_min_recal_cnt_width                     4
#define rx_min_recal_cnt_endbit                    3
#define rx_min_recal_cnt_shift                     12
#define rx_min_recal_cnt_mask                      0xf000


#define rx_min_recal_cnt_reached_addr              0b000000100
#define rx_min_recal_cnt_reached_startbit          4
#define rx_min_recal_cnt_reached_width             1
#define rx_min_recal_cnt_reached_endbit            4
#define rx_min_recal_cnt_reached_shift             11
#define rx_min_recal_cnt_reached_mask              0x800


#define rx_qpa_cdrlock_ignore_addr                 0b111100000
#define rx_qpa_cdrlock_ignore_startbit             7
#define rx_qpa_cdrlock_ignore_width                1
#define rx_qpa_cdrlock_ignore_endbit               7
#define rx_qpa_cdrlock_ignore_shift                8
#define rx_qpa_cdrlock_ignore_mask                 0x100


#define rx_qpa_hysteresis_addr                     0b111100000
#define rx_qpa_hysteresis_startbit                 10
#define rx_qpa_hysteresis_width                    3
#define rx_qpa_hysteresis_endbit                   12
#define rx_qpa_hysteresis_shift                    3
#define rx_qpa_hysteresis_mask                     0x38


#define rx_qpa_hysteresis_enable_addr              0b111100000
#define rx_qpa_hysteresis_enable_startbit          6
#define rx_qpa_hysteresis_enable_width             1
#define rx_qpa_hysteresis_enable_endbit            6
#define rx_qpa_hysteresis_enable_shift             9
#define rx_qpa_hysteresis_enable_mask              0x200


#define rx_qpa_pattern_addr                        0b111100000
#define rx_qpa_pattern_startbit                    1
#define rx_qpa_pattern_width                       5
#define rx_qpa_pattern_endbit                      5
#define rx_qpa_pattern_shift                       10
#define rx_qpa_pattern_mask                        0x7c00


#define rx_qpa_pattern_enable_addr                 0b111100000
#define rx_qpa_pattern_enable_startbit             0
#define rx_qpa_pattern_enable_width                1
#define rx_qpa_pattern_enable_endbit               0
#define rx_qpa_pattern_enable_shift                15
#define rx_qpa_pattern_enable_mask                 0x8000


#define rx_quad_ph_adj_max_check_addr              0b110100110
#define rx_quad_ph_adj_max_check_startbit          8
#define rx_quad_ph_adj_max_check_width             6
#define rx_quad_ph_adj_max_check_endbit            13
#define rx_quad_ph_adj_max_check_shift             2
#define rx_quad_ph_adj_max_check_mask              0xfc


#define rx_quad_ph_adj_min_check_addr              0b110100111
#define rx_quad_ph_adj_min_check_startbit          8
#define rx_quad_ph_adj_min_check_width             6
#define rx_quad_ph_adj_min_check_endbit            13
#define rx_quad_ph_adj_min_check_shift             2
#define rx_quad_ph_adj_min_check_mask              0xfc


#define rx_quad_phase_fail_addr                    0b000000101
#define rx_quad_phase_fail_startbit                11
#define rx_quad_phase_fail_width                   1
#define rx_quad_phase_fail_endbit                  11
#define rx_quad_phase_fail_shift                   4
#define rx_quad_phase_fail_mask                    0x10


#define rx_rc_enable_bank_sync_addr                0b110001010
#define rx_rc_enable_bank_sync_startbit            7
#define rx_rc_enable_bank_sync_width               1
#define rx_rc_enable_bank_sync_endbit              7
#define rx_rc_enable_bank_sync_shift               8
#define rx_rc_enable_bank_sync_mask                0x100


#define rx_rc_enable_ctle_peak_cal_addr            0b110001010
#define rx_rc_enable_ctle_peak_cal_startbit        2
#define rx_rc_enable_ctle_peak_cal_width           1
#define rx_rc_enable_ctle_peak_cal_endbit          2
#define rx_rc_enable_ctle_peak_cal_shift           13
#define rx_rc_enable_ctle_peak_cal_mask            0x2000


#define rx_rc_enable_ddc_addr                      0b110001010
#define rx_rc_enable_ddc_startbit                  5
#define rx_rc_enable_ddc_width                     1
#define rx_rc_enable_ddc_endbit                    5
#define rx_rc_enable_ddc_shift                     10
#define rx_rc_enable_ddc_mask                      0x400


#define rx_rc_enable_dfe_cal_addr                  0b110001010
#define rx_rc_enable_dfe_cal_startbit              4
#define rx_rc_enable_dfe_cal_width                 1
#define rx_rc_enable_dfe_cal_endbit                4
#define rx_rc_enable_dfe_cal_shift                 11
#define rx_rc_enable_dfe_cal_mask                  0x800


#define rx_rc_enable_edge_offset_cal_addr          0b110001010
#define rx_rc_enable_edge_offset_cal_startbit      1
#define rx_rc_enable_edge_offset_cal_width         1
#define rx_rc_enable_edge_offset_cal_endbit        1
#define rx_rc_enable_edge_offset_cal_shift         14
#define rx_rc_enable_edge_offset_cal_mask          0x4000


#define rx_rc_enable_lte_cal_addr                  0b110001010
#define rx_rc_enable_lte_cal_startbit              3
#define rx_rc_enable_lte_cal_width                 1
#define rx_rc_enable_lte_cal_endbit                3
#define rx_rc_enable_lte_cal_shift                 12
#define rx_rc_enable_lte_cal_mask                  0x1000


#define rx_rc_enable_quad_phase_cal_addr           0b110001010
#define rx_rc_enable_quad_phase_cal_startbit       8
#define rx_rc_enable_quad_phase_cal_width          1
#define rx_rc_enable_quad_phase_cal_endbit         8
#define rx_rc_enable_quad_phase_cal_shift          7
#define rx_rc_enable_quad_phase_cal_mask           0x80


#define rx_rc_enable_vga_cal_addr                  0b110001010
#define rx_rc_enable_vga_cal_startbit              0
#define rx_rc_enable_vga_cal_width                 1
#define rx_rc_enable_vga_cal_endbit                0
#define rx_rc_enable_vga_cal_shift                 15
#define rx_rc_enable_vga_cal_mask                  0x8000


#define rx_rc_step_cntl_opt_alias_addr             0b110001010
#define rx_rc_step_cntl_opt_alias_startbit         0
#define rx_rc_step_cntl_opt_alias_width            9
#define rx_rc_step_cntl_opt_alias_endbit           8
#define rx_rc_step_cntl_opt_alias_shift            7
#define rx_rc_step_cntl_opt_alias_mask             0xff80


#define rx_recal_abort_addr                        0b000000000
#define rx_recal_abort_startbit                    0
#define rx_recal_abort_width                       1
#define rx_recal_abort_endbit                      0
#define rx_recal_abort_shift                       15
#define rx_recal_abort_mask                        0x8000


#define rx_recal_before_init_addr                  0b000000100
#define rx_recal_before_init_startbit              5
#define rx_recal_before_init_width                 1
#define rx_recal_before_init_endbit                5
#define rx_recal_before_init_shift                 10
#define rx_recal_before_init_mask                  0x400


#define rx_recal_done_addr                         0b000000100
#define rx_recal_done_startbit                     3
#define rx_recal_done_width                        1
#define rx_recal_done_endbit                       3
#define rx_recal_done_shift                        12
#define rx_recal_done_mask                         0x1000


#define rx_recal_run_or_unused_0_15_addr           0b111001100
#define rx_recal_run_or_unused_0_15_startbit       0
#define rx_recal_run_or_unused_0_15_width          16
#define rx_recal_run_or_unused_0_15_endbit         15
#define rx_recal_run_or_unused_0_15_shift          0
#define rx_recal_run_or_unused_0_15_mask           0xffff


#define rx_recal_run_or_unused_16_23_addr          0b111001101
#define rx_recal_run_or_unused_16_23_startbit      0
#define rx_recal_run_or_unused_16_23_width         8
#define rx_recal_run_or_unused_16_23_endbit        7
#define rx_recal_run_or_unused_16_23_shift         8
#define rx_recal_run_or_unused_16_23_mask          0xff00


#define rx_step_fail_alias_addr                    0b000000101
#define rx_step_fail_alias_startbit                2
#define rx_step_fail_alias_width                   14
#define rx_step_fail_alias_endbit                  15
#define rx_step_fail_alias_shift                   0
#define rx_step_fail_alias_mask                    0x3fff


#define rx_vga_amax_target_addr                    0b110010000
#define rx_vga_amax_target_startbit                8
#define rx_vga_amax_target_width                   8
#define rx_vga_amax_target_endbit                  15
#define rx_vga_amax_target_shift                   0
#define rx_vga_amax_target_mask                    0xff


#define rx_vga_converged_addr                      0b000001111
#define rx_vga_converged_startbit                  0
#define rx_vga_converged_width                     4
#define rx_vga_converged_endbit                    3
#define rx_vga_converged_shift                     12
#define rx_vga_converged_mask                      0xf000


#define rx_vga_debug_addr                          0b111000011
#define rx_vga_debug_startbit                      0
#define rx_vga_debug_width                         16
#define rx_vga_debug_endbit                        15
#define rx_vga_debug_shift                         0
#define rx_vga_debug_mask                          0xffff


#define rx_vga_jump_target_addr                    0b110010000
#define rx_vga_jump_target_startbit                0
#define rx_vga_jump_target_width                   8
#define rx_vga_jump_target_endbit                  7
#define rx_vga_jump_target_shift                   8
#define rx_vga_jump_target_mask                    0xff00


#define rx_vga_recal_max_target_addr               0b110010001
#define rx_vga_recal_max_target_startbit           0
#define rx_vga_recal_max_target_width              8
#define rx_vga_recal_max_target_endbit             7
#define rx_vga_recal_max_target_shift              8
#define rx_vga_recal_max_target_mask               0xff00


#define rx_vga_recal_min_target_addr               0b110010001
#define rx_vga_recal_min_target_startbit           8
#define rx_vga_recal_min_target_width              8
#define rx_vga_recal_min_target_endbit             15
#define rx_vga_recal_min_target_shift              0
#define rx_vga_recal_min_target_mask               0xff


#define tx_bist_dcc_i_max_addr                     0b110000001
#define tx_bist_dcc_i_max_startbit                 6
#define tx_bist_dcc_i_max_width                    6
#define tx_bist_dcc_i_max_endbit                   11
#define tx_bist_dcc_i_max_shift                    4
#define tx_bist_dcc_i_max_mask                     0x3f0


#define tx_bist_dcc_i_min_addr                     0b110000001
#define tx_bist_dcc_i_min_startbit                 0
#define tx_bist_dcc_i_min_width                    6
#define tx_bist_dcc_i_min_endbit                   5
#define tx_bist_dcc_i_min_shift                    10
#define tx_bist_dcc_i_min_mask                     0xfc00


#define tx_bist_dcc_iq_max_addr                    0b110001100
#define tx_bist_dcc_iq_max_startbit                6
#define tx_bist_dcc_iq_max_width                   6
#define tx_bist_dcc_iq_max_endbit                  11
#define tx_bist_dcc_iq_max_shift                   4
#define tx_bist_dcc_iq_max_mask                    0x3f0


#define tx_bist_dcc_iq_min_addr                    0b110001100
#define tx_bist_dcc_iq_min_startbit                0
#define tx_bist_dcc_iq_min_width                   6
#define tx_bist_dcc_iq_min_endbit                  5
#define tx_bist_dcc_iq_min_shift                   10
#define tx_bist_dcc_iq_min_mask                    0xfc00


#define tx_bist_dcc_q_max_addr                     0b110000010
#define tx_bist_dcc_q_max_startbit                 6
#define tx_bist_dcc_q_max_width                    6
#define tx_bist_dcc_q_max_endbit                   11
#define tx_bist_dcc_q_max_shift                    4
#define tx_bist_dcc_q_max_mask                     0x3f0


#define tx_bist_dcc_q_min_addr                     0b110000010
#define tx_bist_dcc_q_min_startbit                 0
#define tx_bist_dcc_q_min_width                    6
#define tx_bist_dcc_q_min_endbit                   5
#define tx_bist_dcc_q_min_shift                    10
#define tx_bist_dcc_q_min_mask                     0xfc00


#define tx_bist_fail_0_15_addr                     0b111010000
#define tx_bist_fail_0_15_startbit                 0
#define tx_bist_fail_0_15_width                    16
#define tx_bist_fail_0_15_endbit                   15
#define tx_bist_fail_0_15_shift                    0
#define tx_bist_fail_0_15_mask                     0xffff


#define tx_bist_fail_16_23_addr                    0b111010001
#define tx_bist_fail_16_23_startbit                0
#define tx_bist_fail_16_23_width                   8
#define tx_bist_fail_16_23_endbit                  7
#define tx_bist_fail_16_23_shift                   8
#define tx_bist_fail_16_23_mask                    0xff00


#define tx_bist_hs_dac_thresh_max_addr             0b110001111
#define tx_bist_hs_dac_thresh_max_startbit         8
#define tx_bist_hs_dac_thresh_max_width            8
#define tx_bist_hs_dac_thresh_max_endbit           15
#define tx_bist_hs_dac_thresh_max_shift            0
#define tx_bist_hs_dac_thresh_max_mask             0xff


#define tx_bist_hs_dac_thresh_min_addr             0b110001111
#define tx_bist_hs_dac_thresh_min_startbit         0
#define tx_bist_hs_dac_thresh_min_width            8
#define tx_bist_hs_dac_thresh_min_endbit           7
#define tx_bist_hs_dac_thresh_min_shift            8
#define tx_bist_hs_dac_thresh_min_mask             0xff00


#define tx_dc_enable_dcc_addr                      0b110001101
#define tx_dc_enable_dcc_startbit                  1
#define tx_dc_enable_dcc_width                     1
#define tx_dc_enable_dcc_endbit                    1
#define tx_dc_enable_dcc_shift                     14
#define tx_dc_enable_dcc_mask                      0x4000


#define tx_dcc_debug_addr                          0b111000100
#define tx_dcc_debug_startbit                      0
#define tx_dcc_debug_width                         16
#define tx_dcc_debug_endbit                        15
#define tx_dcc_debug_shift                         0
#define tx_dcc_debug_mask                          0xffff


#define tx_dcc_main_min_samples_addr               0b110010100
#define tx_dcc_main_min_samples_startbit           8
#define tx_dcc_main_min_samples_width              8
#define tx_dcc_main_min_samples_endbit             15
#define tx_dcc_main_min_samples_shift              0
#define tx_dcc_main_min_samples_mask               0xff


#define tx_ffe_margin_coef_addr                    0b110010101
#define tx_ffe_margin_coef_startbit                8
#define tx_ffe_margin_coef_width                   1
#define tx_ffe_margin_coef_endbit                  8
#define tx_ffe_margin_coef_shift                   7
#define tx_ffe_margin_coef_mask                    0x80


#define tx_ffe_pre1_coef_addr                      0b110010101
#define tx_ffe_pre1_coef_startbit                  4
#define tx_ffe_pre1_coef_width                     4
#define tx_ffe_pre1_coef_endbit                    7
#define tx_ffe_pre1_coef_shift                     8
#define tx_ffe_pre1_coef_mask                      0xf00


#define tx_ffe_pre2_coef_addr                      0b110010101
#define tx_ffe_pre2_coef_startbit                  0
#define tx_ffe_pre2_coef_width                     4
#define tx_ffe_pre2_coef_endbit                    3
#define tx_ffe_pre2_coef_shift                     12
#define tx_ffe_pre2_coef_mask                      0xf000


#define tx_rc_enable_dcc_addr                      0b110001010
#define tx_rc_enable_dcc_startbit                  6
#define tx_rc_enable_dcc_width                     1
#define tx_rc_enable_dcc_endbit                    6
#define tx_rc_enable_dcc_shift                     9
#define tx_rc_enable_dcc_mask                      0x200


#define tx_seg_test_1r_segs_addr                   0b110010100
#define tx_seg_test_1r_segs_startbit               3
#define tx_seg_test_1r_segs_width                  2
#define tx_seg_test_1r_segs_endbit                 4
#define tx_seg_test_1r_segs_shift                  11
#define tx_seg_test_1r_segs_mask                   0x1800


#define tx_seg_test_2r_seg_addr                    0b110010100
#define tx_seg_test_2r_seg_startbit                2
#define tx_seg_test_2r_seg_width                   1
#define tx_seg_test_2r_seg_endbit                  2
#define tx_seg_test_2r_seg_shift                   13
#define tx_seg_test_2r_seg_mask                    0x2000


#define tx_seg_test_en_addr                        0b110010100
#define tx_seg_test_en_startbit                    0
#define tx_seg_test_en_width                       1
#define tx_seg_test_en_endbit                      0
#define tx_seg_test_en_shift                       15
#define tx_seg_test_en_mask                        0x8000


#define tx_seg_test_fail_addr                      0b111010010
#define tx_seg_test_fail_startbit                  0
#define tx_seg_test_fail_width                     1
#define tx_seg_test_fail_endbit                    0
#define tx_seg_test_fail_shift                     15
#define tx_seg_test_fail_mask                      0x8000


#define tx_seg_test_frc_2r_addr                    0b110010100
#define tx_seg_test_frc_2r_startbit                1
#define tx_seg_test_frc_2r_width                   1
#define tx_seg_test_frc_2r_endbit                  1
#define tx_seg_test_frc_2r_shift                   14
#define tx_seg_test_frc_2r_mask                    0x4000


#endif //_PPE_MEM_REG_CONST_PKG_H_
