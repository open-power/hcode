/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/ippe/ioa/ppe_opt_reg_const_pkg.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2018                                                         */
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


#define rx_a_bank_controls_addr                       0b000000001
#define rx_a_bank_controls_startbit                   0
#define rx_a_bank_controls_width                      6
#define rx_a_bank_controls_endbit                     5
#define rx_a_bank_controls_shift                      10
#define rx_a_bank_controls_mask                       0xfc00


#define rx_a_ctle_coarse_addr                         0b000000110
#define rx_a_ctle_coarse_startbit                     0
#define rx_a_ctle_coarse_width                        5
#define rx_a_ctle_coarse_endbit                       4
#define rx_a_ctle_coarse_shift                        11
#define rx_a_ctle_coarse_mask                         0xf800


#define rx_ac_coupled_addr                            0b100110001
#define rx_ac_coupled_startbit                        5
#define rx_ac_coupled_width                           1
#define rx_ac_coupled_endbit                          5
#define rx_ac_coupled_shift                           10
#define rx_ac_coupled_mask                            0x400


#define rx_b_bad_dfe_conv_addr                        0b001110010
#define rx_b_bad_dfe_conv_startbit                    1
#define rx_b_bad_dfe_conv_width                       1
#define rx_b_bad_dfe_conv_endbit                      1
#define rx_b_bad_dfe_conv_shift                       14
#define rx_b_bad_dfe_conv_mask                        0x4000


#define rx_b_bank_controls_addr                       0b000000001
#define rx_b_bank_controls_startbit                   10
#define rx_b_bank_controls_width                      6
#define rx_b_bank_controls_endbit                     15
#define rx_b_bank_controls_shift                      0
#define rx_b_bank_controls_mask                       0x3f


#define rx_b_bist_en_addr                             0b100000010
#define rx_b_bist_en_startbit                         10
#define rx_b_bist_en_width                            1
#define rx_b_bist_en_endbit                           10
#define rx_b_bist_en_shift                            5
#define rx_b_bist_en_mask                             0x20


#define rx_b_controls_addr                            0b000010000
#define rx_b_controls_startbit                        0
#define rx_b_controls_width                           5
#define rx_b_controls_endbit                          4
#define rx_b_controls_shift                           11
#define rx_b_controls_mask                            0xf800


#define rx_b_ctle_coarse_addr                         0b000010100
#define rx_b_ctle_coarse_startbit                     0
#define rx_b_ctle_coarse_width                        5
#define rx_b_ctle_coarse_endbit                       4
#define rx_b_ctle_coarse_shift                        11
#define rx_b_ctle_coarse_mask                         0xf800


#define rx_b_ctle_gain_addr                           0b000010100
#define rx_b_ctle_gain_startbit                       5
#define rx_b_ctle_gain_width                          4
#define rx_b_ctle_gain_endbit                         8
#define rx_b_ctle_gain_shift                          7
#define rx_b_ctle_gain_mask                           0x780


#define rx_b_even_integ_fine_gain_addr                0b000010011
#define rx_b_even_integ_fine_gain_startbit            4
#define rx_b_even_integ_fine_gain_width               5
#define rx_b_even_integ_fine_gain_endbit              8
#define rx_b_even_integ_fine_gain_shift               7
#define rx_b_even_integ_fine_gain_mask                0xf80


#define rx_b_h1ap_at_limit_addr                       0b001110010
#define rx_b_h1ap_at_limit_startbit                   3
#define rx_b_h1ap_at_limit_width                      1
#define rx_b_h1ap_at_limit_endbit                     3
#define rx_b_h1ap_at_limit_shift                      12
#define rx_b_h1ap_at_limit_mask                       0x1000


#define rx_b_h1e_val_addr                             0b000010101
#define rx_b_h1e_val_startbit                         0
#define rx_b_h1e_val_width                            7
#define rx_b_h1e_val_endbit                           6
#define rx_b_h1e_val_shift                            9
#define rx_b_h1e_val_mask                             0xfe00


#define rx_b_h1o_val_addr                             0b000010101
#define rx_b_h1o_val_startbit                         8
#define rx_b_h1o_val_width                            7
#define rx_b_h1o_val_endbit                           14
#define rx_b_h1o_val_shift                            1
#define rx_b_h1o_val_mask                             0xfe


#define rx_b_integ_coarse_gain_addr                   0b000010011
#define rx_b_integ_coarse_gain_startbit               0
#define rx_b_integ_coarse_gain_width                  4
#define rx_b_integ_coarse_gain_endbit                 3
#define rx_b_integ_coarse_gain_shift                  12
#define rx_b_integ_coarse_gain_mask                   0xf000


#define rx_b_odd_integ_fine_gain_addr                 0b000010011
#define rx_b_odd_integ_fine_gain_startbit             9
#define rx_b_odd_integ_fine_gain_width                5
#define rx_b_odd_integ_fine_gain_endbit               13
#define rx_b_odd_integ_fine_gain_shift                2
#define rx_b_odd_integ_fine_gain_mask                 0x7c


#define rx_b_offset_e0_addr                           0b000010001
#define rx_b_offset_e0_startbit                       0
#define rx_b_offset_e0_width                          7
#define rx_b_offset_e0_endbit                         6
#define rx_b_offset_e0_shift                          9
#define rx_b_offset_e0_mask                           0xfe00


#define rx_b_offset_e1_addr                           0b000010001
#define rx_b_offset_e1_startbit                       8
#define rx_b_offset_e1_width                          7
#define rx_b_offset_e1_endbit                         14
#define rx_b_offset_e1_shift                          1
#define rx_b_offset_e1_mask                           0xfe


#define rx_b_offset_o0_addr                           0b000010010
#define rx_b_offset_o0_startbit                       0
#define rx_b_offset_o0_width                          7
#define rx_b_offset_o0_endbit                         6
#define rx_b_offset_o0_shift                          9
#define rx_b_offset_o0_mask                           0xfe00


#define rx_b_offset_o1_addr                           0b000010010
#define rx_b_offset_o1_startbit                       8
#define rx_b_offset_o1_width                          7
#define rx_b_offset_o1_endbit                         14
#define rx_b_offset_o1_shift                          1
#define rx_b_offset_o1_mask                           0xfe


#define rx_b_path_off_even_addr                       0b001110100
#define rx_b_path_off_even_startbit                   0
#define rx_b_path_off_even_width                      6
#define rx_b_path_off_even_endbit                     5
#define rx_b_path_off_even_shift                      10
#define rx_b_path_off_even_mask                       0xfc00


#define rx_b_path_off_odd_addr                        0b001110100
#define rx_b_path_off_odd_startbit                    6
#define rx_b_path_off_odd_width                       6
#define rx_b_path_off_odd_endbit                      11
#define rx_b_path_off_odd_shift                       4
#define rx_b_path_off_odd_mask                        0x3f0


#define rx_b_pr_dfe_clkadj_addr                       0b001100011
#define rx_b_pr_dfe_clkadj_startbit                   12
#define rx_b_pr_dfe_clkadj_width                      4
#define rx_b_pr_dfe_clkadj_endbit                     15
#define rx_b_pr_dfe_clkadj_shift                      0
#define rx_b_pr_dfe_clkadj_mask                       0xf


#define rx_bank_sel_a_addr                            0b001001000
#define rx_bank_sel_a_startbit                        3
#define rx_bank_sel_a_width                           1
#define rx_bank_sel_a_endbit                          3
#define rx_bank_sel_a_shift                           12
#define rx_bank_sel_a_mask                            0x1000


#define rx_bist_err_a_addr                            0b001110001
#define rx_bist_err_a_startbit                        13
#define rx_bist_err_a_width                           1
#define rx_bist_err_a_endbit                          13
#define rx_bist_err_a_shift                           2
#define rx_bist_err_a_mask                            0x4


#define rx_bist_err_b_addr                            0b001110001
#define rx_bist_err_b_startbit                        14
#define rx_bist_err_b_width                           1
#define rx_bist_err_b_endbit                          14
#define rx_bist_err_b_shift                           1
#define rx_bist_err_b_mask                            0x2


#define rx_bist_err_e_addr                            0b001110001
#define rx_bist_err_e_startbit                        15
#define rx_bist_err_e_width                           1
#define rx_bist_err_e_endbit                          15
#define rx_bist_err_e_shift                           0
#define rx_bist_err_e_mask                            0x1


#define rx_bist_ll_err_addr                           0b100101011
#define rx_bist_ll_err_startbit                       2
#define rx_bist_ll_err_width                          1
#define rx_bist_ll_err_endbit                         2
#define rx_bist_ll_err_shift                          13
#define rx_bist_ll_err_mask                           0x2000


#define rx_bist_ll_test_en_addr                       0b100100011
#define rx_bist_ll_test_en_startbit                   15
#define rx_bist_ll_test_en_width                      1
#define rx_bist_ll_test_en_endbit                     15
#define rx_bist_ll_test_en_shift                      0
#define rx_bist_ll_test_en_mask                       0x1


#define rx_bist_pipe_data_shift_addr                  0b001001000
#define rx_bist_pipe_data_shift_startbit              9
#define rx_bist_pipe_data_shift_width                 1
#define rx_bist_pipe_data_shift_endbit                9
#define rx_bist_pipe_data_shift_shift                 6
#define rx_bist_pipe_data_shift_mask                  0x40


#define rx_bistclk_en_addr                            0b100000010
#define rx_bistclk_en_startbit                        12
#define rx_bistclk_en_width                           2
#define rx_bistclk_en_endbit                          13
#define rx_bistclk_en_shift                           2
#define rx_bistclk_en_mask                            0xc


#define rx_cfg_lte_mc_addr                            0b000000000
#define rx_cfg_lte_mc_startbit                        12
#define rx_cfg_lte_mc_width                           4
#define rx_cfg_lte_mc_endbit                          15
#define rx_cfg_lte_mc_shift                           0
#define rx_cfg_lte_mc_mask                            0xf


#define rx_clr_run_dccal_addr                         0b001100110
#define rx_clr_run_dccal_startbit                     3
#define rx_clr_run_dccal_width                        1
#define rx_clr_run_dccal_endbit                       3
#define rx_clr_run_dccal_shift                        12
#define rx_clr_run_dccal_mask                         0x1000


#define rx_clr_run_lane_addr                          0b001100110
#define rx_clr_run_lane_startbit                      1
#define rx_clr_run_lane_width                         1
#define rx_clr_run_lane_endbit                        1
#define rx_clr_run_lane_shift                         14
#define rx_clr_run_lane_mask                          0x4000


#define rx_dccal_done_addr                            0b001100101
#define rx_dccal_done_startbit                        1
#define rx_dccal_done_width                           1
#define rx_dccal_done_endbit                          1
#define rx_dccal_done_shift                           14
#define rx_dccal_done_mask                            0x4000


#define rx_decouple_edge_a_addr                       0b001000100
#define rx_decouple_edge_a_startbit                   2
#define rx_decouple_edge_a_width                      1
#define rx_decouple_edge_a_endbit                     2
#define rx_decouple_edge_a_shift                      13
#define rx_decouple_edge_a_mask                       0x2000


#define rx_decouple_edge_b_addr                       0b001000100
#define rx_decouple_edge_b_startbit                   3
#define rx_decouple_edge_b_width                      1
#define rx_decouple_edge_b_endbit                     3
#define rx_decouple_edge_b_shift                      12
#define rx_decouple_edge_b_mask                       0x1000


#define rx_disable_bank_pdwn_addr                     0b100000010
#define rx_disable_bank_pdwn_startbit                 14
#define rx_disable_bank_pdwn_width                    1
#define rx_disable_bank_pdwn_endbit                   14
#define rx_disable_bank_pdwn_shift                    1
#define rx_disable_bank_pdwn_mask                     0x2


#define rx_e_bist_en_addr                             0b100000010
#define rx_e_bist_en_startbit                         11
#define rx_e_bist_en_width                            1
#define rx_e_bist_en_endbit                           11
#define rx_e_bist_en_shift                            4
#define rx_e_bist_en_mask                             0x10


#define rx_e_controls_addr                            0b000010110
#define rx_e_controls_startbit                        0
#define rx_e_controls_width                           3
#define rx_e_controls_endbit                          2
#define rx_e_controls_shift                           13
#define rx_e_controls_mask                            0xe000


#define rx_e_ctle_coarse_addr                         0b000011001
#define rx_e_ctle_coarse_startbit                     0
#define rx_e_ctle_coarse_width                        5
#define rx_e_ctle_coarse_endbit                       4
#define rx_e_ctle_coarse_shift                        11
#define rx_e_ctle_coarse_mask                         0xf800


#define rx_e_ctle_gain_addr                           0b000011001
#define rx_e_ctle_gain_startbit                       5
#define rx_e_ctle_gain_width                          4
#define rx_e_ctle_gain_endbit                         8
#define rx_e_ctle_gain_shift                          7
#define rx_e_ctle_gain_mask                           0x780


#define rx_e_even_integ_fine_gain_addr                0b000011000
#define rx_e_even_integ_fine_gain_startbit            4
#define rx_e_even_integ_fine_gain_width               5
#define rx_e_even_integ_fine_gain_endbit              8
#define rx_e_even_integ_fine_gain_shift               7
#define rx_e_even_integ_fine_gain_mask                0xf80


#define rx_e_integ_coarse_gain_addr                   0b000011000
#define rx_e_integ_coarse_gain_startbit               0
#define rx_e_integ_coarse_gain_width                  4
#define rx_e_integ_coarse_gain_endbit                 3
#define rx_e_integ_coarse_gain_shift                  12
#define rx_e_integ_coarse_gain_mask                   0xf000


#define rx_e_odd_integ_fine_gain_addr                 0b000011000
#define rx_e_odd_integ_fine_gain_startbit             9
#define rx_e_odd_integ_fine_gain_width                5
#define rx_e_odd_integ_fine_gain_endbit               13
#define rx_e_odd_integ_fine_gain_shift                2
#define rx_e_odd_integ_fine_gain_mask                 0x7c


#define rx_e_offset_e_addr                            0b000010111
#define rx_e_offset_e_startbit                        0
#define rx_e_offset_e_width                           7
#define rx_e_offset_e_endbit                          6
#define rx_e_offset_e_shift                           9
#define rx_e_offset_e_mask                            0xfe00


#define rx_e_offset_o_addr                            0b000010111
#define rx_e_offset_o_startbit                        8
#define rx_e_offset_o_width                           7
#define rx_e_offset_o_endbit                          14
#define rx_e_offset_o_shift                           1
#define rx_e_offset_o_mask                            0xfe


#define rx_eo_enable_ctle_edge_offset_cal_addr        0b100010110
#define rx_eo_enable_ctle_edge_offset_cal_startbit    10
#define rx_eo_enable_ctle_edge_offset_cal_width       1
#define rx_eo_enable_ctle_edge_offset_cal_endbit      10
#define rx_eo_enable_ctle_edge_offset_cal_shift       5
#define rx_eo_enable_ctle_edge_offset_cal_mask        0x20


#define rx_eo_enable_vga_edge_offset_cal_addr         0b100010110
#define rx_eo_enable_vga_edge_offset_cal_startbit     9
#define rx_eo_enable_vga_edge_offset_cal_width        1
#define rx_eo_enable_vga_edge_offset_cal_endbit       9
#define rx_eo_enable_vga_edge_offset_cal_shift        6
#define rx_eo_enable_vga_edge_offset_cal_mask         0x40


#define rx_force_init_done_addr                       0b001100100
#define rx_force_init_done_startbit                   5
#define rx_force_init_done_width                      1
#define rx_force_init_done_endbit                     5
#define rx_force_init_done_shift                      10
#define rx_force_init_done_mask                       0x400


#define rx_force_recal_done_addr                      0b001100100
#define rx_force_recal_done_startbit                  6
#define rx_force_recal_done_width                     1
#define rx_force_recal_done_endbit                    6
#define rx_force_recal_done_shift                     9
#define rx_force_recal_done_mask                      0x200


#define rx_init_done_addr                             0b001100101
#define rx_init_done_startbit                         0
#define rx_init_done_width                            1
#define rx_init_done_endbit                           0
#define rx_init_done_shift                            15
#define rx_init_done_mask                             0x8000


#define rx_init_done_dl_mask_addr                     0b100000011
#define rx_init_done_dl_mask_startbit                 10
#define rx_init_done_dl_mask_width                    1
#define rx_init_done_dl_mask_endbit                   10
#define rx_init_done_dl_mask_shift                    5
#define rx_init_done_dl_mask_mask                     0x20


#define rx_iref_bypass_addr                           0b100011000
#define rx_iref_bypass_startbit                       5
#define rx_iref_bypass_width                          1
#define rx_iref_bypass_endbit                         5
#define rx_iref_bypass_shift                          10
#define rx_iref_bypass_mask                           0x400


#define rx_iref_parity_chk_addr                       0b101111000
#define rx_iref_parity_chk_startbit                   11
#define rx_iref_parity_chk_width                      4
#define rx_iref_parity_chk_endbit                     14
#define rx_iref_parity_chk_shift                      1
#define rx_iref_parity_chk_mask                       0x1e


#define rx_iref_pdwn_b_addr                           0b100011000
#define rx_iref_pdwn_b_startbit                       6
#define rx_iref_pdwn_b_width                          1
#define rx_iref_pdwn_b_endbit                         6
#define rx_iref_pdwn_b_shift                          9
#define rx_iref_pdwn_b_mask                           0x200


#define rx_iref_res_dac_addr                          0b100011000
#define rx_iref_res_dac_startbit                      2
#define rx_iref_res_dac_width                         3
#define rx_iref_res_dac_endbit                        4
#define rx_iref_res_dac_shift                         11
#define rx_iref_res_dac_mask                          0x3800


#define rx_lane_busy_addr                             0b001100101
#define rx_lane_busy_startbit                         2
#define rx_lane_busy_width                            1
#define rx_lane_busy_endbit                           2
#define rx_lane_busy_shift                            13
#define rx_lane_busy_mask                             0x2000


#define rx_lane_disabled_addr                         0b001100100
#define rx_lane_disabled_startbit                     4
#define rx_lane_disabled_width                        1
#define rx_lane_disabled_endbit                       4
#define rx_lane_disabled_shift                        11
#define rx_lane_disabled_mask                         0x800


#define rx_minikerf_addr                              0b100110110
#define rx_minikerf_startbit                          0
#define rx_minikerf_width                             16
#define rx_minikerf_endbit                            15
#define rx_minikerf_shift                             0
#define rx_minikerf_mask                              0xffff


#define rx_octant_select_addr                         0b100110001
#define rx_octant_select_startbit                     0
#define rx_octant_select_width                        3
#define rx_octant_select_endbit                       2
#define rx_octant_select_shift                        13
#define rx_octant_select_mask                         0xe000


#define rx_pipe_margin_addr                           0b001001000
#define rx_pipe_margin_startbit                       4
#define rx_pipe_margin_width                          1
#define rx_pipe_margin_endbit                         4
#define rx_pipe_margin_shift                          11
#define rx_pipe_margin_mask                           0x800


#define rx_pr_bump_to_edge_b_addr                     0b001001001
#define rx_pr_bump_to_edge_b_startbit                 8
#define rx_pr_bump_to_edge_b_width                    1
#define rx_pr_bump_to_edge_b_endbit                   8
#define rx_pr_bump_to_edge_b_shift                    7
#define rx_pr_bump_to_edge_b_mask                     0x80


#define rx_pr_coarse_mode_en_addr                     0b001000111
#define rx_pr_coarse_mode_en_startbit                 0
#define rx_pr_coarse_mode_en_width                    1
#define rx_pr_coarse_mode_en_endbit                   0
#define rx_pr_coarse_mode_en_shift                    15
#define rx_pr_coarse_mode_en_mask                     0x8000


#define rx_pr_coarse_mode_timer_sel_addr              0b001000111
#define rx_pr_coarse_mode_timer_sel_startbit          9
#define rx_pr_coarse_mode_timer_sel_width             2
#define rx_pr_coarse_mode_timer_sel_endbit            10
#define rx_pr_coarse_mode_timer_sel_shift             5
#define rx_pr_coarse_mode_timer_sel_mask              0x60


#define rx_pr_data_b_offset_addr                      0b001001010
#define rx_pr_data_b_offset_startbit                  6
#define rx_pr_data_b_offset_width                     6
#define rx_pr_data_b_offset_endbit                    11
#define rx_pr_data_b_offset_shift                     4
#define rx_pr_data_b_offset_mask                      0x3f0


#define rx_pr_data_offset_disable_b_addr              0b001001001
#define rx_pr_data_offset_disable_b_startbit          12
#define rx_pr_data_offset_disable_b_width             1
#define rx_pr_data_offset_disable_b_endbit            12
#define rx_pr_data_offset_disable_b_shift             3
#define rx_pr_data_offset_disable_b_mask              0x8


#define rx_pr_ddc_b_addr                              0b001001001
#define rx_pr_ddc_b_startbit                          6
#define rx_pr_ddc_b_width                             1
#define rx_pr_ddc_b_endbit                            6
#define rx_pr_ddc_b_shift                             9
#define rx_pr_ddc_b_mask                              0x200


#define rx_pr_fw_gray_coded_addr                      0b001010000
#define rx_pr_fw_gray_coded_startbit                  2
#define rx_pr_fw_gray_coded_width                     7
#define rx_pr_fw_gray_coded_endbit                    8
#define rx_pr_fw_gray_coded_shift                     7
#define rx_pr_fw_gray_coded_mask                      0x3f80


#define rx_pr_fw_inertia_amt_addr                     0b001000101
#define rx_pr_fw_inertia_amt_startbit                 9
#define rx_pr_fw_inertia_amt_width                    3
#define rx_pr_fw_inertia_amt_endbit                   11
#define rx_pr_fw_inertia_amt_shift                    4
#define rx_pr_fw_inertia_amt_mask                     0x70


#define rx_pr_fw_inertia_amt_coarse_addr              0b001000111
#define rx_pr_fw_inertia_amt_coarse_startbit          2
#define rx_pr_fw_inertia_amt_coarse_width             3
#define rx_pr_fw_inertia_amt_coarse_endbit            4
#define rx_pr_fw_inertia_amt_coarse_shift             11
#define rx_pr_fw_inertia_amt_coarse_mask              0x3800


#define rx_pr_fw_off_addr                             0b001000101
#define rx_pr_fw_off_startbit                         8
#define rx_pr_fw_off_width                            1
#define rx_pr_fw_off_endbit                           8
#define rx_pr_fw_off_shift                            7
#define rx_pr_fw_off_mask                             0x80


#define rx_pr_in_coarse_mode_addr                     0b001010000
#define rx_pr_in_coarse_mode_startbit                 0
#define rx_pr_in_coarse_mode_width                    1
#define rx_pr_in_coarse_mode_endbit                   0
#define rx_pr_in_coarse_mode_shift                    15
#define rx_pr_in_coarse_mode_mask                     0x8000


#define rx_pr_in_coarse_mode_sticky_addr              0b001010000
#define rx_pr_in_coarse_mode_sticky_startbit          1
#define rx_pr_in_coarse_mode_sticky_width             1
#define rx_pr_in_coarse_mode_sticky_endbit            1
#define rx_pr_in_coarse_mode_sticky_shift             14
#define rx_pr_in_coarse_mode_sticky_mask              0x4000


#define rx_pr_in_coarse_mode_sticky_clear_addr        0b001001100
#define rx_pr_in_coarse_mode_sticky_clear_startbit    2
#define rx_pr_in_coarse_mode_sticky_clear_width       1
#define rx_pr_in_coarse_mode_sticky_clear_endbit      2
#define rx_pr_in_coarse_mode_sticky_clear_shift       13
#define rx_pr_in_coarse_mode_sticky_clear_mask        0x2000


#define rx_pr_invalid_lock_coarse_en_addr             0b001000111
#define rx_pr_invalid_lock_coarse_en_startbit         1
#define rx_pr_invalid_lock_coarse_en_width            1
#define rx_pr_invalid_lock_coarse_en_endbit           1
#define rx_pr_invalid_lock_coarse_en_shift            14
#define rx_pr_invalid_lock_coarse_en_mask             0x4000


#define rx_pr_left_edge_b_addr                        0b001100011
#define rx_pr_left_edge_b_startbit                    0
#define rx_pr_left_edge_b_width                       6
#define rx_pr_left_edge_b_endbit                      5
#define rx_pr_left_edge_b_shift                       10
#define rx_pr_left_edge_b_mask                        0xfc00


#define rx_pr_phase_step_coarse_addr                  0b001000111
#define rx_pr_phase_step_coarse_startbit              5
#define rx_pr_phase_step_coarse_width                 4
#define rx_pr_phase_step_coarse_endbit                8
#define rx_pr_phase_step_coarse_shift                 7
#define rx_pr_phase_step_coarse_mask                  0x780


#define rx_pr_reset_addr                              0b001001011
#define rx_pr_reset_startbit                          14
#define rx_pr_reset_width                             1
#define rx_pr_reset_endbit                            14
#define rx_pr_reset_shift                             1
#define rx_pr_reset_mask                              0x2


#define rx_pr_right_edge_b_addr                       0b001100011
#define rx_pr_right_edge_b_startbit                   6
#define rx_pr_right_edge_b_width                      6
#define rx_pr_right_edge_b_endbit                     11
#define rx_pr_right_edge_b_shift                      4
#define rx_pr_right_edge_b_mask                       0x3f0


#define rx_pr_use_dfe_clock_b_addr                    0b001001001
#define rx_pr_use_dfe_clock_b_startbit                14
#define rx_pr_use_dfe_clock_b_width                   1
#define rx_pr_use_dfe_clock_b_endbit                  14
#define rx_pr_use_dfe_clock_b_shift                   1
#define rx_pr_use_dfe_clock_b_mask                    0x2


#define rx_pr_wobble_b_addr                           0b001001001
#define rx_pr_wobble_b_startbit                       3
#define rx_pr_wobble_b_width                          1
#define rx_pr_wobble_b_endbit                         3
#define rx_pr_wobble_b_shift                          12
#define rx_pr_wobble_b_mask                           0x1000


#define rx_pr_wobble_b_ip_addr                        0b001001110
#define rx_pr_wobble_b_ip_startbit                    3
#define rx_pr_wobble_b_ip_width                       1
#define rx_pr_wobble_b_ip_endbit                      3
#define rx_pr_wobble_b_ip_shift                       12
#define rx_pr_wobble_b_ip_mask                        0x1000


#define rx_pr_wobble_edge_addr                        0b001001001
#define rx_pr_wobble_edge_startbit                    4
#define rx_pr_wobble_edge_width                       1
#define rx_pr_wobble_edge_endbit                      4
#define rx_pr_wobble_edge_shift                       11
#define rx_pr_wobble_edge_mask                        0x800


#define rx_pr_wobble_edge_ip_addr                     0b001001110
#define rx_pr_wobble_edge_ip_startbit                 4
#define rx_pr_wobble_edge_ip_width                    1
#define rx_pr_wobble_edge_ip_endbit                   4
#define rx_pr_wobble_edge_ip_shift                    11
#define rx_pr_wobble_edge_ip_mask                     0x800


#define rx_psave_ana_req_dis_addr                     0b001000100
#define rx_psave_ana_req_dis_startbit                 5
#define rx_psave_ana_req_dis_width                    1
#define rx_psave_ana_req_dis_endbit                   5
#define rx_psave_ana_req_dis_shift                    10
#define rx_psave_ana_req_dis_mask                     0x400


#define rx_psave_dig_req_dis_addr                     0b001000100
#define rx_psave_dig_req_dis_startbit                 4
#define rx_psave_dig_req_dis_width                    1
#define rx_psave_dig_req_dis_endbit                   4
#define rx_psave_dig_req_dis_shift                    11
#define rx_psave_dig_req_dis_mask                     0x800


#define rx_rc_enable_auto_recal_addr                  0b100101110
#define rx_rc_enable_auto_recal_startbit              3
#define rx_rc_enable_auto_recal_width                 1
#define rx_rc_enable_auto_recal_endbit                3
#define rx_rc_enable_auto_recal_shift                 12
#define rx_rc_enable_auto_recal_mask                  0x1000


#define rx_rc_enable_ctle_edge_offset_cal_addr        0b100010111
#define rx_rc_enable_ctle_edge_offset_cal_startbit    10
#define rx_rc_enable_ctle_edge_offset_cal_width       1
#define rx_rc_enable_ctle_edge_offset_cal_endbit      10
#define rx_rc_enable_ctle_edge_offset_cal_shift       5
#define rx_rc_enable_ctle_edge_offset_cal_mask        0x20


#define rx_rc_enable_pu_edge_track_addr               0b101011111
#define rx_rc_enable_pu_edge_track_startbit           0
#define rx_rc_enable_pu_edge_track_width              1
#define rx_rc_enable_pu_edge_track_endbit             0
#define rx_rc_enable_pu_edge_track_shift              15
#define rx_rc_enable_pu_edge_track_mask               0x8000


#define rx_rc_enable_vga_edge_offset_cal_addr         0b100010111
#define rx_rc_enable_vga_edge_offset_cal_startbit     9
#define rx_rc_enable_vga_edge_offset_cal_width        1
#define rx_rc_enable_vga_edge_offset_cal_endbit       9
#define rx_rc_enable_vga_edge_offset_cal_shift        6
#define rx_rc_enable_vga_edge_offset_cal_mask         0x40


#define rx_recal_abort_addr                           0b001100100
#define rx_recal_abort_startbit                       3
#define rx_recal_abort_width                          1
#define rx_recal_abort_endbit                         3
#define rx_recal_abort_shift                          12
#define rx_recal_abort_mask                           0x1000

#define rx_glbsm_pl_cntl1_o_pl_addr                           0b001100100
#define rx_glbsm_pl_cntl1_o_pl_startbit                       0
#define rx_glbsm_pl_cntl1_o_pl_width                          16
#define rx_glbsm_pl_cntl1_o_pl_endbit                         15
#define rx_glbsm_pl_cntl1_o_pl_shift                          0
#define rx_glbsm_pl_cntl1_o_pl_mask                           0xffff

#define rx_ctl_mode2_eo_pg_addr                           0b100000011
#define rx_ctl_mode2_eo_pg_startbit                       0
#define rx_ctl_mode2_eo_pg_width                          16
#define rx_ctl_mode2_eo_pg_endbit                         15
#define rx_ctl_mode2_eo_pg_shift                          0
#define rx_ctl_mode2_eo_pg_mask                           0xffff




#define rx_recal_abort_active_addr                    0b001100101
#define rx_recal_abort_active_startbit                6
#define rx_recal_abort_active_width                   1
#define rx_recal_abort_active_endbit                  6
#define rx_recal_abort_active_shift                   9
#define rx_recal_abort_active_mask                    0x200


#define rx_recal_abort_dl_mask_addr                   0b100000011
#define rx_recal_abort_dl_mask_startbit               9
#define rx_recal_abort_dl_mask_width                  1
#define rx_recal_abort_dl_mask_endbit                 9
#define rx_recal_abort_dl_mask_shift                  6
#define rx_recal_abort_dl_mask_mask                   0x40


#define rx_recal_done_addr                            0b001100101
#define rx_recal_done_startbit                        3
#define rx_recal_done_width                           1
#define rx_recal_done_endbit                          3
#define rx_recal_done_shift                           12
#define rx_recal_done_mask                            0x1000


#define rx_recal_done_dl_mask_addr                    0b100000011
#define rx_recal_done_dl_mask_startbit                7
#define rx_recal_done_dl_mask_width                   1
#define rx_recal_done_dl_mask_endbit                  7
#define rx_recal_done_dl_mask_shift                   8
#define rx_recal_done_dl_mask_mask                    0x100


#define rx_recal_req_addr                             0b001100100
#define rx_recal_req_startbit                         2
#define rx_recal_req_width                            1
#define rx_recal_req_endbit                           2
#define rx_recal_req_shift                            13
#define rx_recal_req_mask                             0x2000


#define rx_recal_req_active_addr                      0b001100101
#define rx_recal_req_active_startbit                  5
#define rx_recal_req_active_width                     1
#define rx_recal_req_active_endbit                    5
#define rx_recal_req_active_shift                     10
#define rx_recal_req_active_mask                      0x400


#define rx_recal_req_dl_mask_addr                     0b100000011
#define rx_recal_req_dl_mask_startbit                 6
#define rx_recal_req_dl_mask_width                    1
#define rx_recal_req_dl_mask_endbit                   6
#define rx_recal_req_dl_mask_shift                    9
#define rx_recal_req_dl_mask_mask                     0x200


#define rx_run_dccal_addr                             0b001100100
#define rx_run_dccal_startbit                         1
#define rx_run_dccal_width                            1
#define rx_run_dccal_endbit                           1
#define rx_run_dccal_shift                            14
#define rx_run_dccal_mask                             0x4000


#define rx_run_lane_addr                              0b001100100
#define rx_run_lane_startbit                          0
#define rx_run_lane_width                             1
#define rx_run_lane_endbit                            0
#define rx_run_lane_shift                             15
#define rx_run_lane_mask                              0x8000


#define rx_run_lane_active_addr                       0b001100101
#define rx_run_lane_active_startbit                   4
#define rx_run_lane_active_width                      1
#define rx_run_lane_active_endbit                     4
#define rx_run_lane_active_shift                      11
#define rx_run_lane_active_mask                       0x800


#define rx_run_lane_dl_mask_addr                      0b100000011
#define rx_run_lane_dl_mask_startbit                  8
#define rx_run_lane_dl_mask_width                     1
#define rx_run_lane_dl_mask_endbit                    8
#define rx_run_lane_dl_mask_shift                     7
#define rx_run_lane_dl_mask_mask                      0x80


#define rx_scope_mode_addr                            0b001001000
#define rx_scope_mode_startbit                        5
#define rx_scope_mode_width                           2
#define rx_scope_mode_endbit                          6
#define rx_scope_mode_shift                           9
#define rx_scope_mode_mask                            0x600


#define rx_set_run_dccal_addr                         0b001100110
#define rx_set_run_dccal_startbit                     2
#define rx_set_run_dccal_width                        1
#define rx_set_run_dccal_endbit                       2
#define rx_set_run_dccal_shift                        13
#define rx_set_run_dccal_mask                         0x2000


#define rx_set_run_lane_addr                          0b001100110
#define rx_set_run_lane_startbit                      0
#define rx_set_run_lane_width                         1
#define rx_set_run_lane_endbit                        0
#define rx_set_run_lane_shift                         15
#define rx_set_run_lane_mask                          0x8000


#define rx_speed_select_addr                          0b100110001
#define rx_speed_select_startbit                      3
#define rx_speed_select_width                         2
#define rx_speed_select_endbit                        4
#define rx_speed_select_shift                         11
#define rx_speed_select_mask                          0x1800


#define rx_work_regs_ioreset_addr                     0b001110101
#define rx_work_regs_ioreset_startbit                 0
#define rx_work_regs_ioreset_width                    1
#define rx_work_regs_ioreset_endbit                   0
#define rx_work_regs_ioreset_shift                    15
#define rx_work_regs_ioreset_mask                     0x8000


#define tx_nseg_post_en_addr                          0b110110001
#define tx_nseg_post_en_startbit                      1
#define tx_nseg_post_en_width                         7
#define tx_nseg_post_en_endbit                        7
#define tx_nseg_post_en_shift                         8
#define tx_nseg_post_en_mask                          0x7f00


#define tx_nseg_post_sel_addr                         0b110110001
#define tx_nseg_post_sel_startbit                     8
#define tx_nseg_post_sel_width                        7
#define tx_nseg_post_sel_endbit                       14
#define tx_nseg_post_sel_shift                        1
#define tx_nseg_post_sel_mask                         0xfe


#define tx_psave_req_dis_addr                         0b010000000
#define tx_psave_req_dis_startbit                     6
#define tx_psave_req_dis_width                        1
#define tx_psave_req_dis_endbit                       6
#define tx_psave_req_dis_shift                        9
#define tx_psave_req_dis_mask                         0x200


#define tx_pseg_pre_en_addr                       0b110100110
#define tx_pseg_pre_en_startbit                   3
#define tx_pseg_pre_en_width                      5
#define tx_pseg_pre_en_endbit                     7
#define tx_pseg_pre_en_shift                      8
#define tx_pseg_pre_en_mask                       0x1f00

//#define tx_pseg_pre_sel_addr                        0b110100110
//#define tx_pseg_pre_sel_startbit                    8
//#define tx_pseg_pre_sel_width                       5
//#define tx_pseg_pre_sel_endbit                      12
//#define tx_pseg_pre_sel_shift                       3
//#define tx_pseg_pre_sel_mask                        0x00f8

#define tx_nseg_pre_en_addr                       0b110100111
#define tx_nseg_pre_en_startbit                   3
#define tx_nseg_pre_en_width                      5
#define tx_nseg_pre_en_endbit                     7
#define tx_nseg_pre_en_shift                      8
#define tx_nseg_pre_en_mask                       0x1f00


//#define tx_nseg_pre_sel_addr                        0b110100111
//#define tx_nseg_pre_sel_startbit                    8
//#define tx_nseg_pre_sel_width                       5
//#define tx_nseg_pre_sel_endbit                      12
//#define tx_nseg_pre_sel_shift                       3
//#define tx_nseg_pre_sel_mask                        0x00f8




#define tx_pseg_post_en_addr                          0b110110000
#define tx_pseg_post_en_startbit                      1
#define tx_pseg_post_en_width                         7
#define tx_pseg_post_en_endbit                        7
#define tx_pseg_post_en_shift                         8
#define tx_pseg_post_en_mask                          0x7f00

#define tx_pseg_post_sel_addr                         0b110110000
#define tx_pseg_post_sel_startbit                     8
#define tx_pseg_post_sel_width                        7
#define tx_pseg_post_sel_endbit                       14
#define tx_pseg_post_sel_shift                        1
#define tx_pseg_post_sel_mask                         0xfe

#define tx_nseg_post_en_addr                          0b110110001
#define tx_nseg_post_en_startbit                      1
#define tx_nseg_post_en_width                         7
#define tx_nseg_post_en_endbit                        7
#define tx_nseg_post_en_shift                         8
#define tx_nseg_post_en_mask                          0x7f00

#define tx_nseg_post_sel_addr                         0b110110001
#define tx_nseg_post_sel_startbit                     8
#define tx_nseg_post_sel_width                        7
#define tx_nseg_post_sel_endbit                       14
#define tx_nseg_post_sel_shift                        1
#define tx_nseg_post_sel_mask                         0xfe

//#define tx_pseg_marginpu_en_addr                        0b110101000
//#define tx_pseg_marginpu_en_startbit                    0
//#define tx_pseg_marginpu_en_width                       8
//#define tx_pseg_marginpu_en_endbit                      7
//#define tx_pseg_marginpu_en_shift                       8
//#define tx_pseg_marginpu_en_mask                        0xff00
//#define tx_pseg_marginpd_en_addr                        0b110101000
//#define tx_pseg_marginpd_en_startbit                    8
//#define tx_pseg_marginpd_en_width                       8
//#define tx_pseg_marginpd_en_endbit                      15
//#define tx_pseg_marginpd_en_shift                       0
//#define tx_pseg_marginpd_en_mask                        0x00ff

//#define tx_nseg_marginpu_en_addr                        0b110101000
//#define tx_nseg_marginpu_en_startbit                    0
//#define tx_nseg_marginpu_en_width                       8
//#define tx_nseg_marginpu_en_endbit                      7
//#define tx_nseg_marginpu_en_shift                       8
//#define tx_nseg_marginpu_en_mask                        0xff00
//#define tx_nseg_marginpd_en_addr                        0b110101000
//#define tx_nseg_marginpd_en_startbit                    8
//#define tx_nseg_marginpd_en_width                       8
//#define tx_nseg_marginpd_en_endbit                      15
//#define tx_nseg_marginpd_en_shift                       0
//#define tx_nseg_marginpd_en_mask                        0x00ff

//#define tx_marginpu_sel_addr                        0b110101010
//#define tx_marginpu_sel_startbit                    0
//#define tx_marginpu_sel_width                       8
//#define tx_marginpu_sel_endbit                      7
//#define tx_marginpu_sel_shift                       8
//#define tx_marginpu_sel_mask                        0xff00
//#define tx_marginpd_sel_addr                        0b110101010
//#define tx_marginpd_sel_startbit                    8
//#define tx_marginpd_sel_width                       8
//#define tx_marginpd_sel_endbit                      15
//#define tx_marginpd_sel_shift                       0
//#define tx_marginpd_sel_mask                        0x00ff

#define tx_lane_invert_addr                       0b010000000
#define tx_lane_invert_startbit                   1
#define tx_lane_invert_width                      1
#define tx_lane_invert_endbit                     1
#define tx_lane_invert_shift                      14
#define tx_lane_invert_mask                       0x4000

#define tx_lane_pdwn_addr                         0b010000000
#define tx_lane_pdwn_startbit                     0
#define tx_lane_pdwn_width                        1
#define tx_lane_pdwn_endbit                       0
#define tx_lane_pdwn_shift                        15
#define tx_lane_pdwn_mask                         0x8000

#define tx_pdwn_lite_addr                         0b010000001
#define tx_pdwn_lite_startbit                     13
#define tx_pdwn_lite_width                        1
#define tx_pdwn_lite_endbit                       13
#define tx_pdwn_lite_shift                        2
#define tx_pdwn_lite_mask                         0x0004

#define tx_drv_data_pattern_addr                          0b110000100
#define tx_drv_data_pattern_startbit                      2
#define tx_drv_data_pattern_width                         4
#define tx_drv_data_pattern_endbit                        5
#define tx_drv_data_pattern_shift                         10
#define tx_drv_data_pattern_mask                          0x3C00




#define tx_rxcal_addr                                 0b010000001
#define tx_rxcal_startbit                             9
#define tx_rxcal_width                                1
#define tx_rxcal_endbit                               9
#define tx_rxcal_shift                                6
#define tx_rxcal_mask                                 0x40


#define rx_clkdist_pdwn_addr                      0b100000010
#define rx_clkdist_pdwn_startbit                  0
#define rx_clkdist_pdwn_width                     3
#define rx_clkdist_pdwn_endbit                    2
#define rx_clkdist_pdwn_shift                     13
#define rx_clkdist_pdwn_mask                      0xe000


#define rx_ioreset_addr                           0b001001011
#define rx_ioreset_startbit                       15
#define rx_ioreset_width                          1
#define rx_ioreset_endbit                         15
#define rx_ioreset_shift                          0
#define rx_ioreset_mask                           0x1


#define rx_pipe_sel_addr                          0b001001000
#define rx_pipe_sel_startbit                      1
#define rx_pipe_sel_width                         2
#define rx_pipe_sel_endbit                        2
#define rx_pipe_sel_shift                         13
#define rx_pipe_sel_mask                          0x6000


#define tx_clkdist_pdwn_addr                      0b110000010
#define tx_clkdist_pdwn_startbit                  0
#define tx_clkdist_pdwn_width                     3
#define tx_clkdist_pdwn_endbit                    2
#define tx_clkdist_pdwn_shift                     13
#define tx_clkdist_pdwn_mask                      0xe000


#define tx_ioreset_addr                           0b010001001
#define tx_ioreset_startbit                       0
#define tx_ioreset_width                          1
#define tx_ioreset_endbit                         0
#define tx_ioreset_shift                          15
#define tx_ioreset_mask                           0x8000


#define tx_nseg_main_en_addr                      0b110101100
#define tx_nseg_main_en_startbit                  3
#define tx_nseg_main_en_width                     7
#define tx_nseg_main_en_endbit                    9
#define tx_nseg_main_en_shift                     6
#define tx_nseg_main_en_mask                      0x1fc0


#define tx_pseg_main_en_addr                      0b110101011
#define tx_pseg_main_en_startbit                  3
#define tx_pseg_main_en_width                     7
#define tx_pseg_main_en_endbit                    9
#define tx_pseg_main_en_shift                     6
#define tx_pseg_main_en_mask                      0x1fc0


#define tx_tdr_pulse_width_addr                   0b110011011
#define tx_tdr_pulse_width_startbit               0
#define tx_tdr_pulse_width_width                  8
#define tx_tdr_pulse_width_endbit                 7
#define tx_tdr_pulse_width_shift                  8
#define tx_tdr_pulse_width_mask                   0xff00
