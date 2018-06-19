/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/ippe/ioa/ppe_mem_reg_const_pkg.h $ */
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


#define fir1_errs_mask_full_reg_addr                  0b101010010
#define fir1_errs_mask_full_reg_startbit              0
#define fir1_errs_mask_full_reg_width                 16
#define fir1_errs_mask_full_reg_endbit                15
#define fir1_errs_mask_full_reg_shift                 0
#define fir1_errs_mask_full_reg_mask                  0xffff


#define fir_err_mask_gcr_buff_addr                    0b101010010
#define fir_err_mask_gcr_buff_startbit                1
#define fir_err_mask_gcr_buff_width                   1
#define fir_err_mask_gcr_buff_endbit                  1
#define fir_err_mask_gcr_buff_shift                   14
#define fir_err_mask_gcr_buff_mask                    0x4000


#define fir_err_mask_pg_regs_addr                     0b101010010
#define fir_err_mask_pg_regs_startbit                 0
#define fir_err_mask_pg_regs_width                    1
#define fir_err_mask_pg_regs_endbit                   0
#define fir_err_mask_pg_regs_shift                    15
#define fir_err_mask_pg_regs_mask                     0x8000


#define ppe_ddc_failed_status_addr                    0b001110010
#define ppe_ddc_failed_status_startbit                12
#define ppe_ddc_failed_status_width                   1
#define ppe_ddc_failed_status_endbit                  12
#define ppe_ddc_failed_status_shift                   3
#define ppe_ddc_failed_status_mask                    0x8


#define ppe_dft_rx_done_addr                          0b100001001
#define ppe_dft_rx_done_startbit                      1
#define ppe_dft_rx_done_width                         1
#define ppe_dft_rx_done_endbit                        1
#define ppe_dft_rx_done_shift                         14
#define ppe_dft_rx_done_mask                          0x4000


#define ppe_dft_seg_done_addr                         0b100001001
#define ppe_dft_seg_done_startbit                     2
#define ppe_dft_seg_done_width                        1
#define ppe_dft_seg_done_endbit                       2
#define ppe_dft_seg_done_shift                        13
#define ppe_dft_seg_done_mask                         0x2000


#define ppe_dft_tx_done_addr                          0b100001001
#define ppe_dft_tx_done_startbit                      0
#define ppe_dft_tx_done_width                         1
#define ppe_dft_tx_done_endbit                        0
#define ppe_dft_tx_done_shift                         15
#define ppe_dft_tx_done_mask                          0x8000


#define ppe_dft_zcal_done_addr                        0b100001001
#define ppe_dft_zcal_done_startbit                    3
#define ppe_dft_zcal_done_width                       1
#define ppe_dft_zcal_done_endbit                      3
#define ppe_dft_zcal_done_shift                       12
#define ppe_dft_zcal_done_mask                        0x1000


#define ppe_gcr_port_addr                             0b100000001
#define ppe_gcr_port_startbit                         6
#define ppe_gcr_port_width                            2
#define ppe_gcr_port_endbit                           7
#define ppe_gcr_port_shift                            8
#define ppe_gcr_port_mask                             0x300


#define ppe_init_done_wait_addr                       0b100011100
#define ppe_init_done_wait_startbit                   10
#define ppe_init_done_wait_width                      3
#define ppe_init_done_wait_endbit                     12
#define ppe_init_done_wait_shift                      3
#define ppe_init_done_wait_mask                       0x38


#define ppe_last_thread_run_addr                      0b100011100
#define ppe_last_thread_run_startbit                  7
#define ppe_last_thread_run_width                     3
#define ppe_last_thread_run_endbit                    9
#define ppe_last_thread_run_shift                     6
#define ppe_last_thread_run_mask                      0x1c0


#define ppe_num_threads_addr                          0b100011100
#define ppe_num_threads_startbit                      4
#define ppe_num_threads_width                         3
#define ppe_num_threads_endbit                        6
#define ppe_num_threads_shift                         9
#define ppe_num_threads_mask                          0xe00


#define rx_b_ap_addr                                  0b001110110
#define rx_b_ap_startbit                              4
#define rx_b_ap_width                                 8
#define rx_b_ap_endbit                                11
#define rx_b_ap_shift                                 4
#define rx_b_ap_mask                                  0xff0


#define rx_bad_lane_cntr_addr                         0b101001110
#define rx_bad_lane_cntr_startbit                     2
#define rx_bad_lane_cntr_width                        3
#define rx_bad_lane_cntr_endbit                       4
#define rx_bad_lane_cntr_shift                        11
#define rx_bad_lane_cntr_mask                         0x3800


#define rx_bad_lane_enc_alias_addr                    0b101101011
#define rx_bad_lane_enc_alias_startbit                0
#define rx_bad_lane_enc_alias_width                   16
#define rx_bad_lane_enc_alias_endbit                  15
#define rx_bad_lane_enc_alias_shift                   0
#define rx_bad_lane_enc_alias_mask                    0xffff


#define rx_dc_step_cntl_edi_alias_addr                0b100101111
#define rx_dc_step_cntl_edi_alias_startbit            0
#define rx_dc_step_cntl_edi_alias_width               7
#define rx_dc_step_cntl_edi_alias_endbit              6
#define rx_dc_step_cntl_edi_alias_shift               9
#define rx_dc_step_cntl_edi_alias_mask                0xfe00


#define rx_dc_step_cntl_opt_alias_addr                0b100101111
#define rx_dc_step_cntl_opt_alias_startbit            0
#define rx_dc_step_cntl_opt_alias_width               5
#define rx_dc_step_cntl_opt_alias_endbit              4
#define rx_dc_step_cntl_opt_alias_shift               11
#define rx_dc_step_cntl_opt_alias_mask                0xf800


#define rx_dyn_rpr_ip_addr                            0b101001110
#define rx_dyn_rpr_ip_startbit                        0
#define rx_dyn_rpr_ip_width                           1
#define rx_dyn_rpr_ip_endbit                          0
#define rx_dyn_rpr_ip_shift                           15
#define rx_dyn_rpr_ip_mask                            0x8000


#define rx_eo_step_cntl2_edi_alias_addr               0b100101101
#define rx_eo_step_cntl2_edi_alias_startbit           0
#define rx_eo_step_cntl2_edi_alias_width              16
#define rx_eo_step_cntl2_edi_alias_endbit             15
#define rx_eo_step_cntl2_edi_alias_shift              0
#define rx_eo_step_cntl2_edi_alias_mask               0xffff


#define rx_eo_step_cntl2_opt_alias_addr               0b100101101
#define rx_eo_step_cntl2_opt_alias_startbit           0
#define rx_eo_step_cntl2_opt_alias_width              3
#define rx_eo_step_cntl2_opt_alias_endbit             2
#define rx_eo_step_cntl2_opt_alias_shift              13
#define rx_eo_step_cntl2_opt_alias_mask               0xe000


#define rx_eo_step_cntl_edi_alias_addr                0b100010110
#define rx_eo_step_cntl_edi_alias_startbit            0
#define rx_eo_step_cntl_edi_alias_width               16
#define rx_eo_step_cntl_edi_alias_endbit              15
#define rx_eo_step_cntl_edi_alias_shift               0
#define rx_eo_step_cntl_edi_alias_mask                0xffff


#define rx_eo_step_cntl_opt_alias_addr                0b100010110
#define rx_eo_step_cntl_opt_alias_startbit            0
#define rx_eo_step_cntl_opt_alias_width               11
#define rx_eo_step_cntl_opt_alias_endbit              10
#define rx_eo_step_cntl_opt_alias_shift               5
#define rx_eo_step_cntl_opt_alias_mask                0xffe0


#define rx_mode_pl_full_reg_addr                      0b001000100
#define rx_mode_pl_full_reg_startbit                  0
#define rx_mode_pl_full_reg_width                     16
#define rx_mode_pl_full_reg_endbit                    15
#define rx_mode_pl_full_reg_shift                     0
#define rx_mode_pl_full_reg_mask                      0xffff


#define rx_pb_fir_err_gcr_buff0_addr                  0b111110001
#define rx_pb_fir_err_gcr_buff0_startbit              1
#define rx_pb_fir_err_gcr_buff0_width                 1
#define rx_pb_fir_err_gcr_buff0_endbit                1
#define rx_pb_fir_err_gcr_buff0_shift                 14
#define rx_pb_fir_err_gcr_buff0_mask                  0x4000


#define rx_pb_fir_err_gcr_buff1_addr                  0b111110001
#define rx_pb_fir_err_gcr_buff1_startbit              2
#define rx_pb_fir_err_gcr_buff1_width                 1
#define rx_pb_fir_err_gcr_buff1_endbit                2
#define rx_pb_fir_err_gcr_buff1_shift                 13
#define rx_pb_fir_err_gcr_buff1_mask                  0x2000


#define rx_pb_fir_err_gcr_buff2_addr                  0b111110001
#define rx_pb_fir_err_gcr_buff2_startbit              3
#define rx_pb_fir_err_gcr_buff2_width                 1
#define rx_pb_fir_err_gcr_buff2_endbit                3
#define rx_pb_fir_err_gcr_buff2_shift                 12
#define rx_pb_fir_err_gcr_buff2_mask                  0x1000


#define rx_pb_fir_err_gcrs_ld_sm0_addr                0b111110001
#define rx_pb_fir_err_gcrs_ld_sm0_startbit            4
#define rx_pb_fir_err_gcrs_ld_sm0_width               1
#define rx_pb_fir_err_gcrs_ld_sm0_endbit              4
#define rx_pb_fir_err_gcrs_ld_sm0_shift               11
#define rx_pb_fir_err_gcrs_ld_sm0_mask                0x800


#define rx_pb_fir_err_gcrs_ld_sm1_addr                0b111110001
#define rx_pb_fir_err_gcrs_ld_sm1_startbit            5
#define rx_pb_fir_err_gcrs_ld_sm1_width               1
#define rx_pb_fir_err_gcrs_ld_sm1_endbit              5
#define rx_pb_fir_err_gcrs_ld_sm1_shift               10
#define rx_pb_fir_err_gcrs_ld_sm1_mask                0x400


#define rx_pb_fir_err_gcrs_ld_sm2_addr                0b111110001
#define rx_pb_fir_err_gcrs_ld_sm2_startbit            6
#define rx_pb_fir_err_gcrs_ld_sm2_width               1
#define rx_pb_fir_err_gcrs_ld_sm2_endbit              6
#define rx_pb_fir_err_gcrs_ld_sm2_shift               9
#define rx_pb_fir_err_gcrs_ld_sm2_mask                0x200


#define rx_pb_fir_err_gcrs_unld_sm0_addr              0b111110001
#define rx_pb_fir_err_gcrs_unld_sm0_startbit          7
#define rx_pb_fir_err_gcrs_unld_sm0_width             1
#define rx_pb_fir_err_gcrs_unld_sm0_endbit            7
#define rx_pb_fir_err_gcrs_unld_sm0_shift             8
#define rx_pb_fir_err_gcrs_unld_sm0_mask              0x100


#define rx_pb_fir_err_gcrs_unld_sm1_addr              0b111110001
#define rx_pb_fir_err_gcrs_unld_sm1_startbit          8
#define rx_pb_fir_err_gcrs_unld_sm1_width             1
#define rx_pb_fir_err_gcrs_unld_sm1_endbit            8
#define rx_pb_fir_err_gcrs_unld_sm1_shift             7
#define rx_pb_fir_err_gcrs_unld_sm1_mask              0x80


#define rx_pb_fir_err_gcrs_unld_sm2_addr              0b111110001
#define rx_pb_fir_err_gcrs_unld_sm2_startbit          9
#define rx_pb_fir_err_gcrs_unld_sm2_width             1
#define rx_pb_fir_err_gcrs_unld_sm2_endbit            9
#define rx_pb_fir_err_gcrs_unld_sm2_shift             6
#define rx_pb_fir_err_gcrs_unld_sm2_mask              0x40


#define rx_pb_fir_err_inj_gcr_buff2_addr              0b111110011
#define rx_pb_fir_err_inj_gcr_buff2_startbit          3
#define rx_pb_fir_err_inj_gcr_buff2_width             1
#define rx_pb_fir_err_inj_gcr_buff2_endbit            3
#define rx_pb_fir_err_inj_gcr_buff2_shift             12
#define rx_pb_fir_err_inj_gcr_buff2_mask              0x1000


#define rx_pb_fir_err_inj_gcrs_ld_sm0_addr            0b111110011
#define rx_pb_fir_err_inj_gcrs_ld_sm0_startbit        4
#define rx_pb_fir_err_inj_gcrs_ld_sm0_width           1
#define rx_pb_fir_err_inj_gcrs_ld_sm0_endbit          4
#define rx_pb_fir_err_inj_gcrs_ld_sm0_shift           11
#define rx_pb_fir_err_inj_gcrs_ld_sm0_mask            0x800


#define rx_pb_fir_err_inj_gcrs_ld_sm1_addr            0b111110011
#define rx_pb_fir_err_inj_gcrs_ld_sm1_startbit        5
#define rx_pb_fir_err_inj_gcrs_ld_sm1_width           1
#define rx_pb_fir_err_inj_gcrs_ld_sm1_endbit          5
#define rx_pb_fir_err_inj_gcrs_ld_sm1_shift           10
#define rx_pb_fir_err_inj_gcrs_ld_sm1_mask            0x400


#define rx_pb_fir_err_inj_gcrs_ld_sm2_addr            0b111110011
#define rx_pb_fir_err_inj_gcrs_ld_sm2_startbit        6
#define rx_pb_fir_err_inj_gcrs_ld_sm2_width           1
#define rx_pb_fir_err_inj_gcrs_ld_sm2_endbit          6
#define rx_pb_fir_err_inj_gcrs_ld_sm2_shift           9
#define rx_pb_fir_err_inj_gcrs_ld_sm2_mask            0x200


#define rx_pb_fir_err_inj_gcrs_unld_sm0_addr          0b111110011
#define rx_pb_fir_err_inj_gcrs_unld_sm0_startbit      7
#define rx_pb_fir_err_inj_gcrs_unld_sm0_width         1
#define rx_pb_fir_err_inj_gcrs_unld_sm0_endbit        7
#define rx_pb_fir_err_inj_gcrs_unld_sm0_shift         8
#define rx_pb_fir_err_inj_gcrs_unld_sm0_mask          0x100


#define rx_pb_fir_err_inj_gcrs_unld_sm1_addr          0b111110011
#define rx_pb_fir_err_inj_gcrs_unld_sm1_startbit      8
#define rx_pb_fir_err_inj_gcrs_unld_sm1_width         1
#define rx_pb_fir_err_inj_gcrs_unld_sm1_endbit        8
#define rx_pb_fir_err_inj_gcrs_unld_sm1_shift         7
#define rx_pb_fir_err_inj_gcrs_unld_sm1_mask          0x80


#define rx_pb_fir_err_inj_gcrs_unld_sm2_addr          0b111110011
#define rx_pb_fir_err_inj_gcrs_unld_sm2_startbit      9
#define rx_pb_fir_err_inj_gcrs_unld_sm2_width         1
#define rx_pb_fir_err_inj_gcrs_unld_sm2_endbit        9
#define rx_pb_fir_err_inj_gcrs_unld_sm2_shift         6
#define rx_pb_fir_err_inj_gcrs_unld_sm2_mask          0x40


#define rx_pb_fir_err_inj_pb_regs_addr                0b111110011
#define rx_pb_fir_err_inj_pb_regs_startbit            0
#define rx_pb_fir_err_inj_pb_regs_width               1
#define rx_pb_fir_err_inj_pb_regs_endbit              0
#define rx_pb_fir_err_inj_pb_regs_shift               15
#define rx_pb_fir_err_inj_pb_regs_mask                0x8000


#define rx_pb_fir_err_inj_spare0_addr                 0b111110011
#define rx_pb_fir_err_inj_spare0_startbit             1
#define rx_pb_fir_err_inj_spare0_width                1
#define rx_pb_fir_err_inj_spare0_endbit               1
#define rx_pb_fir_err_inj_spare0_shift                14
#define rx_pb_fir_err_inj_spare0_mask                 0x4000


#define rx_pb_fir_err_inj_spare1_addr                 0b111110011
#define rx_pb_fir_err_inj_spare1_startbit             2
#define rx_pb_fir_err_inj_spare1_width                1
#define rx_pb_fir_err_inj_spare1_endbit               2
#define rx_pb_fir_err_inj_spare1_shift                13
#define rx_pb_fir_err_inj_spare1_mask                 0x2000


#define rx_pb_fir_err_mask_gcr_buff0_addr             0b111110010
#define rx_pb_fir_err_mask_gcr_buff0_startbit         1
#define rx_pb_fir_err_mask_gcr_buff0_width            1
#define rx_pb_fir_err_mask_gcr_buff0_endbit           1
#define rx_pb_fir_err_mask_gcr_buff0_shift            14
#define rx_pb_fir_err_mask_gcr_buff0_mask             0x4000


#define rx_pb_fir_err_mask_gcr_buff1_addr             0b111110010
#define rx_pb_fir_err_mask_gcr_buff1_startbit         2
#define rx_pb_fir_err_mask_gcr_buff1_width            1
#define rx_pb_fir_err_mask_gcr_buff1_endbit           2
#define rx_pb_fir_err_mask_gcr_buff1_shift            13
#define rx_pb_fir_err_mask_gcr_buff1_mask             0x2000


#define rx_pb_fir_err_mask_gcr_buff2_addr             0b111110010
#define rx_pb_fir_err_mask_gcr_buff2_startbit         3
#define rx_pb_fir_err_mask_gcr_buff2_width            1
#define rx_pb_fir_err_mask_gcr_buff2_endbit           3
#define rx_pb_fir_err_mask_gcr_buff2_shift            12
#define rx_pb_fir_err_mask_gcr_buff2_mask             0x1000


#define rx_pb_fir_err_mask_gcrs_ld_sm0_addr           0b111110010
#define rx_pb_fir_err_mask_gcrs_ld_sm0_startbit       4
#define rx_pb_fir_err_mask_gcrs_ld_sm0_width          1
#define rx_pb_fir_err_mask_gcrs_ld_sm0_endbit         4
#define rx_pb_fir_err_mask_gcrs_ld_sm0_shift          11
#define rx_pb_fir_err_mask_gcrs_ld_sm0_mask           0x800


#define rx_pb_fir_err_mask_gcrs_ld_sm1_addr           0b111110010
#define rx_pb_fir_err_mask_gcrs_ld_sm1_startbit       5
#define rx_pb_fir_err_mask_gcrs_ld_sm1_width          1
#define rx_pb_fir_err_mask_gcrs_ld_sm1_endbit         5
#define rx_pb_fir_err_mask_gcrs_ld_sm1_shift          10
#define rx_pb_fir_err_mask_gcrs_ld_sm1_mask           0x400


#define rx_pb_fir_err_mask_gcrs_ld_sm2_addr           0b111110010
#define rx_pb_fir_err_mask_gcrs_ld_sm2_startbit       6
#define rx_pb_fir_err_mask_gcrs_ld_sm2_width          1
#define rx_pb_fir_err_mask_gcrs_ld_sm2_endbit         6
#define rx_pb_fir_err_mask_gcrs_ld_sm2_shift          9
#define rx_pb_fir_err_mask_gcrs_ld_sm2_mask           0x200


#define rx_pb_fir_err_mask_gcrs_unld_sm0_addr         0b111110010
#define rx_pb_fir_err_mask_gcrs_unld_sm0_startbit     7
#define rx_pb_fir_err_mask_gcrs_unld_sm0_width        1
#define rx_pb_fir_err_mask_gcrs_unld_sm0_endbit       7
#define rx_pb_fir_err_mask_gcrs_unld_sm0_shift        8
#define rx_pb_fir_err_mask_gcrs_unld_sm0_mask         0x100


#define rx_pb_fir_err_mask_gcrs_unld_sm1_addr         0b111110010
#define rx_pb_fir_err_mask_gcrs_unld_sm1_startbit     8
#define rx_pb_fir_err_mask_gcrs_unld_sm1_width        1
#define rx_pb_fir_err_mask_gcrs_unld_sm1_endbit       8
#define rx_pb_fir_err_mask_gcrs_unld_sm1_shift        7
#define rx_pb_fir_err_mask_gcrs_unld_sm1_mask         0x80


#define rx_pb_fir_err_mask_gcrs_unld_sm2_addr         0b111110010
#define rx_pb_fir_err_mask_gcrs_unld_sm2_startbit     9
#define rx_pb_fir_err_mask_gcrs_unld_sm2_width        1
#define rx_pb_fir_err_mask_gcrs_unld_sm2_endbit       9
#define rx_pb_fir_err_mask_gcrs_unld_sm2_shift        6
#define rx_pb_fir_err_mask_gcrs_unld_sm2_mask         0x40


#define rx_pb_fir_err_mask_pb_regs_addr               0b111110010
#define rx_pb_fir_err_mask_pb_regs_startbit           0
#define rx_pb_fir_err_mask_pb_regs_width              1
#define rx_pb_fir_err_mask_pb_regs_endbit             0
#define rx_pb_fir_err_mask_pb_regs_shift              15
#define rx_pb_fir_err_mask_pb_regs_mask               0x8000


#define rx_pb_fir_err_pb_regs_addr                    0b111110001
#define rx_pb_fir_err_pb_regs_startbit                0
#define rx_pb_fir_err_pb_regs_width                   1
#define rx_pb_fir_err_pb_regs_endbit                  0
#define rx_pb_fir_err_pb_regs_shift                   15
#define rx_pb_fir_err_pb_regs_mask                    0x8000


#define rx_pb_fir_errs_full_reg_addr                  0b111110001
#define rx_pb_fir_errs_full_reg_startbit              0
#define rx_pb_fir_errs_full_reg_width                 10
#define rx_pb_fir_errs_full_reg_endbit                9
#define rx_pb_fir_errs_full_reg_shift                 6
#define rx_pb_fir_errs_full_reg_mask                  0xffc0


#define rx_pb_fir_errs_inj_full_reg_addr              0b111110011
#define rx_pb_fir_errs_inj_full_reg_startbit          0
#define rx_pb_fir_errs_inj_full_reg_width             10
#define rx_pb_fir_errs_inj_full_reg_endbit            9
#define rx_pb_fir_errs_inj_full_reg_shift             6
#define rx_pb_fir_errs_inj_full_reg_mask              0xffc0


#define rx_pb_fir_errs_mask_full_reg_addr             0b111110010
#define rx_pb_fir_errs_mask_full_reg_startbit         0
#define rx_pb_fir_errs_mask_full_reg_width            10
#define rx_pb_fir_errs_mask_full_reg_endbit           9
#define rx_pb_fir_errs_mask_full_reg_shift            6
#define rx_pb_fir_errs_mask_full_reg_mask             0xffc0


#define rx_pg_fir1_err_inj_full_reg_addr              0b101010011
#define rx_pg_fir1_err_inj_full_reg_startbit          0
#define rx_pg_fir1_err_inj_full_reg_width             16
#define rx_pg_fir1_err_inj_full_reg_endbit            15
#define rx_pg_fir1_err_inj_full_reg_shift             0
#define rx_pg_fir1_err_inj_full_reg_mask              0xffff


#define rx_pg_fir1_errs_full_reg_addr                 0b101010001
#define rx_pg_fir1_errs_full_reg_startbit             0
#define rx_pg_fir1_errs_full_reg_width                16
#define rx_pg_fir1_errs_full_reg_endbit               15
#define rx_pg_fir1_errs_full_reg_shift                0
#define rx_pg_fir1_errs_full_reg_mask                 0xffff


#define rx_pg_fir2_err_inj_full_reg_addr              0b101100010
#define rx_pg_fir2_err_inj_full_reg_startbit          0
#define rx_pg_fir2_err_inj_full_reg_width             16
#define rx_pg_fir2_err_inj_full_reg_endbit            15
#define rx_pg_fir2_err_inj_full_reg_shift             0
#define rx_pg_fir2_err_inj_full_reg_mask              0xffff


#define rx_pg_fir2_errs_full_reg_addr                 0b101100000
#define rx_pg_fir2_errs_full_reg_startbit             0
#define rx_pg_fir2_errs_full_reg_width                16
#define rx_pg_fir2_errs_full_reg_endbit               15
#define rx_pg_fir2_errs_full_reg_shift                0
#define rx_pg_fir2_errs_full_reg_mask                 0xffff


#define rx_pg_fir2_errs_mask_full_reg_addr            0b101100001
#define rx_pg_fir2_errs_mask_full_reg_startbit        0
#define rx_pg_fir2_errs_mask_full_reg_width           16
#define rx_pg_fir2_errs_mask_full_reg_endbit          15
#define rx_pg_fir2_errs_mask_full_reg_shift           0
#define rx_pg_fir2_errs_mask_full_reg_mask            0xffff


#define rx_pg_fir_err_inj_bist_init_state_addr        0b101010011
#define rx_pg_fir_err_inj_bist_init_state_startbit    10
#define rx_pg_fir_err_inj_bist_init_state_width       1
#define rx_pg_fir_err_inj_bist_init_state_endbit      10
#define rx_pg_fir_err_inj_bist_init_state_shift       5
#define rx_pg_fir_err_inj_bist_init_state_mask        0x20


#define rx_pg_fir_err_inj_bist_main_state_addr        0b101010011
#define rx_pg_fir_err_inj_bist_main_state_startbit    9
#define rx_pg_fir_err_inj_bist_main_state_width       1
#define rx_pg_fir_err_inj_bist_main_state_endbit      9
#define rx_pg_fir_err_inj_bist_main_state_shift       6
#define rx_pg_fir_err_inj_bist_main_state_mask        0x40


#define rx_pg_fir_err_inj_datasm_regrw_addr           0b101010011
#define rx_pg_fir_err_inj_datasm_regrw_startbit       7
#define rx_pg_fir_err_inj_datasm_regrw_width          1
#define rx_pg_fir_err_inj_datasm_regrw_endbit         7
#define rx_pg_fir_err_inj_datasm_regrw_shift          8
#define rx_pg_fir_err_inj_datasm_regrw_mask           0x100


#define rx_pg_fir_err_inj_datasm_regs_addr            0b101010011
#define rx_pg_fir_err_inj_datasm_regs_startbit        6
#define rx_pg_fir_err_inj_datasm_regs_width           1
#define rx_pg_fir_err_inj_datasm_regs_endbit          6
#define rx_pg_fir_err_inj_datasm_regs_shift           9
#define rx_pg_fir_err_inj_datasm_regs_mask            0x200


#define rx_pg_fir_err_inj_dsm_sm_addr                 0b101100010
#define rx_pg_fir_err_inj_dsm_sm_startbit             14
#define rx_pg_fir_err_inj_dsm_sm_width                1
#define rx_pg_fir_err_inj_dsm_sm_endbit               14
#define rx_pg_fir_err_inj_dsm_sm_shift                1
#define rx_pg_fir_err_inj_dsm_sm_mask                 0x2


#define rx_pg_fir_err_inj_dyn_recal_hndshk_sm_addr    0b101100010
#define rx_pg_fir_err_inj_dyn_recal_hndshk_sm_startbit    6
#define rx_pg_fir_err_inj_dyn_recal_hndshk_sm_width   1
#define rx_pg_fir_err_inj_dyn_recal_hndshk_sm_endbit      6
#define rx_pg_fir_err_inj_dyn_recal_hndshk_sm_shift   9
#define rx_pg_fir_err_inj_dyn_recal_hndshk_sm_mask    0x200


#define rx_pg_fir_err_inj_dyn_rpr_sm_addr             0b101100010
#define rx_pg_fir_err_inj_dyn_rpr_sm_startbit         0
#define rx_pg_fir_err_inj_dyn_rpr_sm_width            1
#define rx_pg_fir_err_inj_dyn_rpr_sm_endbit           0
#define rx_pg_fir_err_inj_dyn_rpr_sm_shift            15
#define rx_pg_fir_err_inj_dyn_rpr_sm_mask             0x8000


#define rx_pg_fir_err_inj_dyn_rpr_snd_msg_sm_addr     0b101100010
#define rx_pg_fir_err_inj_dyn_rpr_snd_msg_sm_startbit     1
#define rx_pg_fir_err_inj_dyn_rpr_snd_msg_sm_width    1
#define rx_pg_fir_err_inj_dyn_rpr_snd_msg_sm_endbit   1
#define rx_pg_fir_err_inj_dyn_rpr_snd_msg_sm_shift    14
#define rx_pg_fir_err_inj_dyn_rpr_snd_msg_sm_mask     0x4000


#define rx_pg_fir_err_inj_eyeopt_sm_addr              0b101010011
#define rx_pg_fir_err_inj_eyeopt_sm_startbit          8
#define rx_pg_fir_err_inj_eyeopt_sm_width             1
#define rx_pg_fir_err_inj_eyeopt_sm_endbit            8
#define rx_pg_fir_err_inj_eyeopt_sm_shift             7
#define rx_pg_fir_err_inj_eyeopt_sm_mask              0x80


#define rx_pg_fir_err_inj_gcr_buff_addr               0b101010011
#define rx_pg_fir_err_inj_gcr_buff_startbit           1
#define rx_pg_fir_err_inj_gcr_buff_width              1
#define rx_pg_fir_err_inj_gcr_buff_endbit             1
#define rx_pg_fir_err_inj_gcr_buff_shift              14
#define rx_pg_fir_err_inj_gcr_buff_mask               0x4000


#define rx_pg_fir_err_inj_gcrs_ld_sm_addr             0b101010011
#define rx_pg_fir_err_inj_gcrs_ld_sm_startbit         2
#define rx_pg_fir_err_inj_gcrs_ld_sm_width            1
#define rx_pg_fir_err_inj_gcrs_ld_sm_endbit           2
#define rx_pg_fir_err_inj_gcrs_ld_sm_shift            13
#define rx_pg_fir_err_inj_gcrs_ld_sm_mask             0x2000


#define rx_pg_fir_err_inj_gcrs_unld_sm_addr           0b101010011
#define rx_pg_fir_err_inj_gcrs_unld_sm_startbit       3
#define rx_pg_fir_err_inj_gcrs_unld_sm_width          1
#define rx_pg_fir_err_inj_gcrs_unld_sm_endbit         3
#define rx_pg_fir_err_inj_gcrs_unld_sm_shift          12
#define rx_pg_fir_err_inj_gcrs_unld_sm_mask           0x1000


#define rx_pg_fir_err_inj_glb_cal_snd_msg_sm_addr     0b101100010
#define rx_pg_fir_err_inj_glb_cal_snd_msg_sm_startbit     7
#define rx_pg_fir_err_inj_glb_cal_snd_msg_sm_width    1
#define rx_pg_fir_err_inj_glb_cal_snd_msg_sm_endbit   7
#define rx_pg_fir_err_inj_glb_cal_snd_msg_sm_shift    8
#define rx_pg_fir_err_inj_glb_cal_snd_msg_sm_mask     0x100


#define rx_pg_fir_err_inj_glbsm_regrw_addr            0b101010011
#define rx_pg_fir_err_inj_glbsm_regrw_startbit        5
#define rx_pg_fir_err_inj_glbsm_regrw_width           1
#define rx_pg_fir_err_inj_glbsm_regrw_endbit          5
#define rx_pg_fir_err_inj_glbsm_regrw_shift           10
#define rx_pg_fir_err_inj_glbsm_regrw_mask            0x400


#define rx_pg_fir_err_inj_glbsm_regs_addr             0b101010011
#define rx_pg_fir_err_inj_glbsm_regs_startbit         4
#define rx_pg_fir_err_inj_glbsm_regs_width            1
#define rx_pg_fir_err_inj_glbsm_regs_endbit           4
#define rx_pg_fir_err_inj_glbsm_regs_shift            11
#define rx_pg_fir_err_inj_glbsm_regs_mask             0x800


#define rx_pg_fir_err_inj_main_init_sm_addr           0b101100010
#define rx_pg_fir_err_inj_main_init_sm_startbit       9
#define rx_pg_fir_err_inj_main_init_sm_width          1
#define rx_pg_fir_err_inj_main_init_sm_endbit         9
#define rx_pg_fir_err_inj_main_init_sm_shift          6
#define rx_pg_fir_err_inj_main_init_sm_mask           0x40


#define rx_pg_fir_err_inj_pg_regs_addr                0b101010011
#define rx_pg_fir_err_inj_pg_regs_startbit            0
#define rx_pg_fir_err_inj_pg_regs_width               1
#define rx_pg_fir_err_inj_pg_regs_endbit              0
#define rx_pg_fir_err_inj_pg_regs_shift               15
#define rx_pg_fir_err_inj_pg_regs_mask                0x8000


#define rx_pg_fir_err_inj_recal_sm_addr               0b101100010
#define rx_pg_fir_err_inj_recal_sm_startbit           5
#define rx_pg_fir_err_inj_recal_sm_width              1
#define rx_pg_fir_err_inj_recal_sm_endbit             5
#define rx_pg_fir_err_inj_recal_sm_shift              10
#define rx_pg_fir_err_inj_recal_sm_mask               0x400


#define rx_pg_fir_err_inj_rpr_sm_addr                 0b101100010
#define rx_pg_fir_err_inj_rpr_sm_startbit             13
#define rx_pg_fir_err_inj_rpr_sm_width                1
#define rx_pg_fir_err_inj_rpr_sm_endbit               13
#define rx_pg_fir_err_inj_rpr_sm_shift                2
#define rx_pg_fir_err_inj_rpr_sm_mask                 0x4


#define rx_pg_fir_err_inj_rx_servo_sm_addr            0b101010011
#define rx_pg_fir_err_inj_rx_servo_sm_startbit        11
#define rx_pg_fir_err_inj_rx_servo_sm_width           1
#define rx_pg_fir_err_inj_rx_servo_sm_endbit          11
#define rx_pg_fir_err_inj_rx_servo_sm_shift           4
#define rx_pg_fir_err_inj_rx_servo_sm_mask            0x10


#define rx_pg_fir_err_inj_rxdsm_sm_addr               0b101100010
#define rx_pg_fir_err_inj_rxdsm_sm_startbit           15
#define rx_pg_fir_err_inj_rxdsm_sm_width              1
#define rx_pg_fir_err_inj_rxdsm_sm_endbit             15
#define rx_pg_fir_err_inj_rxdsm_sm_shift              0
#define rx_pg_fir_err_inj_rxdsm_sm_mask               0x1


#define rx_pg_fir_err_inj_set_sls_ln_state_addr       0b101010011
#define rx_pg_fir_err_inj_set_sls_ln_state_startbit   13
#define rx_pg_fir_err_inj_set_sls_ln_state_width      1
#define rx_pg_fir_err_inj_set_sls_ln_state_endbit     13
#define rx_pg_fir_err_inj_set_sls_ln_state_shift      2
#define rx_pg_fir_err_inj_set_sls_ln_state_mask       0x4


#define rx_pg_fir_err_inj_sls_enc_snd_msg_sm_addr     0b101100010
#define rx_pg_fir_err_inj_sls_enc_snd_msg_sm_startbit     2
#define rx_pg_fir_err_inj_sls_enc_snd_msg_sm_width    1
#define rx_pg_fir_err_inj_sls_enc_snd_msg_sm_endbit   2
#define rx_pg_fir_err_inj_sls_enc_snd_msg_sm_shift    13
#define rx_pg_fir_err_inj_sls_enc_snd_msg_sm_mask     0x2000


#define rx_pg_fir_err_inj_sls_hndshk_sm_addr          0b101100010
#define rx_pg_fir_err_inj_sls_hndshk_sm_startbit      3
#define rx_pg_fir_err_inj_sls_hndshk_sm_width         1
#define rx_pg_fir_err_inj_sls_hndshk_sm_endbit        3
#define rx_pg_fir_err_inj_sls_hndshk_sm_shift         12
#define rx_pg_fir_err_inj_sls_hndshk_sm_mask          0x1000


#define rx_pg_fir_err_inj_sls_rcvy_sm_addr            0b101100010
#define rx_pg_fir_err_inj_sls_rcvy_sm_startbit        4
#define rx_pg_fir_err_inj_sls_rcvy_sm_width           1
#define rx_pg_fir_err_inj_sls_rcvy_sm_endbit          4
#define rx_pg_fir_err_inj_sls_rcvy_sm_shift           11
#define rx_pg_fir_err_inj_sls_rcvy_sm_mask            0x800


#define rx_pg_fir_err_inj_stat_rpr_snd_msg_sm_addr    0b101100010
#define rx_pg_fir_err_inj_stat_rpr_snd_msg_sm_startbit    8
#define rx_pg_fir_err_inj_stat_rpr_snd_msg_sm_width   1
#define rx_pg_fir_err_inj_stat_rpr_snd_msg_sm_endbit      8
#define rx_pg_fir_err_inj_stat_rpr_snd_msg_sm_shift   7
#define rx_pg_fir_err_inj_stat_rpr_snd_msg_sm_mask    0x80


#define rx_pg_fir_err_inj_work_regs_addr              0b101010011
#define rx_pg_fir_err_inj_work_regs_startbit          12
#define rx_pg_fir_err_inj_work_regs_width             1
#define rx_pg_fir_err_inj_work_regs_endbit            12
#define rx_pg_fir_err_inj_work_regs_shift             3
#define rx_pg_fir_err_inj_work_regs_mask              0x8


#define rx_pg_fir_err_inj_wtl_sm_addr                 0b101100010
#define rx_pg_fir_err_inj_wtl_sm_startbit             12
#define rx_pg_fir_err_inj_wtl_sm_width                1
#define rx_pg_fir_err_inj_wtl_sm_endbit               12
#define rx_pg_fir_err_inj_wtl_sm_shift                3
#define rx_pg_fir_err_inj_wtl_sm_mask                 0x8


#define rx_pg_fir_err_inj_wtm_sm_addr                 0b101100010
#define rx_pg_fir_err_inj_wtm_sm_startbit             10
#define rx_pg_fir_err_inj_wtm_sm_width                1
#define rx_pg_fir_err_inj_wtm_sm_endbit               10
#define rx_pg_fir_err_inj_wtm_sm_shift                5
#define rx_pg_fir_err_inj_wtm_sm_mask                 0x20


#define rx_pg_fir_err_inj_wtr_sm_addr                 0b101100010
#define rx_pg_fir_err_inj_wtr_sm_startbit             11
#define rx_pg_fir_err_inj_wtr_sm_width                1
#define rx_pg_fir_err_inj_wtr_sm_endbit               11
#define rx_pg_fir_err_inj_wtr_sm_shift                4
#define rx_pg_fir_err_inj_wtr_sm_mask                 0x10


#define rx_pg_fir_err_mask_bist_init_state_addr       0b101010010
#define rx_pg_fir_err_mask_bist_init_state_startbit   10
#define rx_pg_fir_err_mask_bist_init_state_width      1
#define rx_pg_fir_err_mask_bist_init_state_endbit     10
#define rx_pg_fir_err_mask_bist_init_state_shift      5
#define rx_pg_fir_err_mask_bist_init_state_mask       0x20


#define rx_pg_fir_err_mask_bist_main_state_addr       0b101010010
#define rx_pg_fir_err_mask_bist_main_state_startbit   9
#define rx_pg_fir_err_mask_bist_main_state_width      1
#define rx_pg_fir_err_mask_bist_main_state_endbit     9
#define rx_pg_fir_err_mask_bist_main_state_shift      6
#define rx_pg_fir_err_mask_bist_main_state_mask       0x40


#define rx_pg_fir_err_mask_datasm_regrw_addr          0b101010010
#define rx_pg_fir_err_mask_datasm_regrw_startbit      7
#define rx_pg_fir_err_mask_datasm_regrw_width         1
#define rx_pg_fir_err_mask_datasm_regrw_endbit        7
#define rx_pg_fir_err_mask_datasm_regrw_shift         8
#define rx_pg_fir_err_mask_datasm_regrw_mask          0x100


#define rx_pg_fir_err_mask_datasm_regs_addr           0b101010010
#define rx_pg_fir_err_mask_datasm_regs_startbit       6
#define rx_pg_fir_err_mask_datasm_regs_width          1
#define rx_pg_fir_err_mask_datasm_regs_endbit         6
#define rx_pg_fir_err_mask_datasm_regs_shift          9
#define rx_pg_fir_err_mask_datasm_regs_mask           0x200


#define rx_pg_fir_err_mask_dsm_sm_addr                0b101100001
#define rx_pg_fir_err_mask_dsm_sm_startbit            14
#define rx_pg_fir_err_mask_dsm_sm_width               1
#define rx_pg_fir_err_mask_dsm_sm_endbit              14
#define rx_pg_fir_err_mask_dsm_sm_shift               1
#define rx_pg_fir_err_mask_dsm_sm_mask                0x2


#define rx_pg_fir_err_mask_dyn_recal_hndshk_sm_addr   0b101100001
#define rx_pg_fir_err_mask_dyn_recal_hndshk_sm_startbit   6
#define rx_pg_fir_err_mask_dyn_recal_hndshk_sm_width      1
#define rx_pg_fir_err_mask_dyn_recal_hndshk_sm_endbit     6
#define rx_pg_fir_err_mask_dyn_recal_hndshk_sm_shift      9
#define rx_pg_fir_err_mask_dyn_recal_hndshk_sm_mask   0x200


#define rx_pg_fir_err_mask_dyn_rpr_sm_addr            0b101100001
#define rx_pg_fir_err_mask_dyn_rpr_sm_startbit        0
#define rx_pg_fir_err_mask_dyn_rpr_sm_width           1
#define rx_pg_fir_err_mask_dyn_rpr_sm_endbit          0
#define rx_pg_fir_err_mask_dyn_rpr_sm_shift           15
#define rx_pg_fir_err_mask_dyn_rpr_sm_mask            0x8000


#define rx_pg_fir_err_mask_dyn_rpr_snd_msg_sm_addr    0b101100001
#define rx_pg_fir_err_mask_dyn_rpr_snd_msg_sm_startbit    1
#define rx_pg_fir_err_mask_dyn_rpr_snd_msg_sm_width   1
#define rx_pg_fir_err_mask_dyn_rpr_snd_msg_sm_endbit      1
#define rx_pg_fir_err_mask_dyn_rpr_snd_msg_sm_shift   14
#define rx_pg_fir_err_mask_dyn_rpr_snd_msg_sm_mask    0x4000


#define rx_pg_fir_err_mask_eyeopt_sm_addr             0b101010010
#define rx_pg_fir_err_mask_eyeopt_sm_startbit         8
#define rx_pg_fir_err_mask_eyeopt_sm_width            1
#define rx_pg_fir_err_mask_eyeopt_sm_endbit           8
#define rx_pg_fir_err_mask_eyeopt_sm_shift            7
#define rx_pg_fir_err_mask_eyeopt_sm_mask             0x80


#define rx_pg_fir_err_mask_gcrs_ld_sm_addr            0b101010010
#define rx_pg_fir_err_mask_gcrs_ld_sm_startbit        2
#define rx_pg_fir_err_mask_gcrs_ld_sm_width           1
#define rx_pg_fir_err_mask_gcrs_ld_sm_endbit          2
#define rx_pg_fir_err_mask_gcrs_ld_sm_shift           13
#define rx_pg_fir_err_mask_gcrs_ld_sm_mask            0x2000


#define rx_pg_fir_err_mask_gcrs_unld_sm_addr          0b101010010
#define rx_pg_fir_err_mask_gcrs_unld_sm_startbit      3
#define rx_pg_fir_err_mask_gcrs_unld_sm_width         1
#define rx_pg_fir_err_mask_gcrs_unld_sm_endbit        3
#define rx_pg_fir_err_mask_gcrs_unld_sm_shift         12
#define rx_pg_fir_err_mask_gcrs_unld_sm_mask          0x1000


#define rx_pg_fir_err_mask_glb_cal_snd_msg_sm_addr    0b101100001
#define rx_pg_fir_err_mask_glb_cal_snd_msg_sm_startbit    7
#define rx_pg_fir_err_mask_glb_cal_snd_msg_sm_width   1
#define rx_pg_fir_err_mask_glb_cal_snd_msg_sm_endbit      7
#define rx_pg_fir_err_mask_glb_cal_snd_msg_sm_shift   8
#define rx_pg_fir_err_mask_glb_cal_snd_msg_sm_mask    0x100


#define rx_pg_fir_err_mask_glbsm_regrw_addr           0b101010010
#define rx_pg_fir_err_mask_glbsm_regrw_startbit       5
#define rx_pg_fir_err_mask_glbsm_regrw_width          1
#define rx_pg_fir_err_mask_glbsm_regrw_endbit         5
#define rx_pg_fir_err_mask_glbsm_regrw_shift          10
#define rx_pg_fir_err_mask_glbsm_regrw_mask           0x400


#define rx_pg_fir_err_mask_glbsm_regs_addr            0b101010010
#define rx_pg_fir_err_mask_glbsm_regs_startbit        4
#define rx_pg_fir_err_mask_glbsm_regs_width           1
#define rx_pg_fir_err_mask_glbsm_regs_endbit          4
#define rx_pg_fir_err_mask_glbsm_regs_shift           11
#define rx_pg_fir_err_mask_glbsm_regs_mask            0x800


#define rx_pg_fir_err_mask_main_init_sm_addr          0b101100001
#define rx_pg_fir_err_mask_main_init_sm_startbit      9
#define rx_pg_fir_err_mask_main_init_sm_width         1
#define rx_pg_fir_err_mask_main_init_sm_endbit        9
#define rx_pg_fir_err_mask_main_init_sm_shift         6
#define rx_pg_fir_err_mask_main_init_sm_mask          0x40


#define rx_pg_fir_err_mask_recal_sm_addr              0b101100001
#define rx_pg_fir_err_mask_recal_sm_startbit          5
#define rx_pg_fir_err_mask_recal_sm_width             1
#define rx_pg_fir_err_mask_recal_sm_endbit            5
#define rx_pg_fir_err_mask_recal_sm_shift             10
#define rx_pg_fir_err_mask_recal_sm_mask              0x400


#define rx_pg_fir_err_mask_rpr_sm_addr                0b101100001
#define rx_pg_fir_err_mask_rpr_sm_startbit            13
#define rx_pg_fir_err_mask_rpr_sm_width               1
#define rx_pg_fir_err_mask_rpr_sm_endbit              13
#define rx_pg_fir_err_mask_rpr_sm_shift               2
#define rx_pg_fir_err_mask_rpr_sm_mask                0x4


#define rx_pg_fir_err_mask_rx_servo_sm_addr           0b101010010
#define rx_pg_fir_err_mask_rx_servo_sm_startbit       11
#define rx_pg_fir_err_mask_rx_servo_sm_width          1
#define rx_pg_fir_err_mask_rx_servo_sm_endbit         11
#define rx_pg_fir_err_mask_rx_servo_sm_shift          4
#define rx_pg_fir_err_mask_rx_servo_sm_mask           0x10


#define rx_pg_fir_err_mask_rxdsm_sm_addr              0b101100001
#define rx_pg_fir_err_mask_rxdsm_sm_startbit          15
#define rx_pg_fir_err_mask_rxdsm_sm_width             1
#define rx_pg_fir_err_mask_rxdsm_sm_endbit            15
#define rx_pg_fir_err_mask_rxdsm_sm_shift             0
#define rx_pg_fir_err_mask_rxdsm_sm_mask              0x1


#define rx_pg_fir_err_mask_set_sls_ln_state_addr      0b101010010
#define rx_pg_fir_err_mask_set_sls_ln_state_startbit      13
#define rx_pg_fir_err_mask_set_sls_ln_state_width     1
#define rx_pg_fir_err_mask_set_sls_ln_state_endbit    13
#define rx_pg_fir_err_mask_set_sls_ln_state_shift     2
#define rx_pg_fir_err_mask_set_sls_ln_state_mask      0x4


#define rx_pg_fir_err_mask_sls_enc_snd_msg_sm_addr    0b101100001
#define rx_pg_fir_err_mask_sls_enc_snd_msg_sm_startbit    2
#define rx_pg_fir_err_mask_sls_enc_snd_msg_sm_width   1
#define rx_pg_fir_err_mask_sls_enc_snd_msg_sm_endbit      2
#define rx_pg_fir_err_mask_sls_enc_snd_msg_sm_shift   13
#define rx_pg_fir_err_mask_sls_enc_snd_msg_sm_mask    0x2000


#define rx_pg_fir_err_mask_sls_hndshk_sm_addr         0b101100001
#define rx_pg_fir_err_mask_sls_hndshk_sm_startbit     3
#define rx_pg_fir_err_mask_sls_hndshk_sm_width        1
#define rx_pg_fir_err_mask_sls_hndshk_sm_endbit       3
#define rx_pg_fir_err_mask_sls_hndshk_sm_shift        12
#define rx_pg_fir_err_mask_sls_hndshk_sm_mask         0x1000


#define rx_pg_fir_err_mask_sls_rcvy_sm_addr           0b101100001
#define rx_pg_fir_err_mask_sls_rcvy_sm_startbit       4
#define rx_pg_fir_err_mask_sls_rcvy_sm_width          1
#define rx_pg_fir_err_mask_sls_rcvy_sm_endbit         4
#define rx_pg_fir_err_mask_sls_rcvy_sm_shift          11
#define rx_pg_fir_err_mask_sls_rcvy_sm_mask           0x800


#define rx_pg_fir_err_mask_stat_rpr_snd_msg_sm_addr   0b101100001
#define rx_pg_fir_err_mask_stat_rpr_snd_msg_sm_startbit   8
#define rx_pg_fir_err_mask_stat_rpr_snd_msg_sm_width      1
#define rx_pg_fir_err_mask_stat_rpr_snd_msg_sm_endbit     8
#define rx_pg_fir_err_mask_stat_rpr_snd_msg_sm_shift      7
#define rx_pg_fir_err_mask_stat_rpr_snd_msg_sm_mask   0x80


#define rx_pg_fir_err_mask_work_regs_addr             0b101010010
#define rx_pg_fir_err_mask_work_regs_startbit         12
#define rx_pg_fir_err_mask_work_regs_width            1
#define rx_pg_fir_err_mask_work_regs_endbit           12
#define rx_pg_fir_err_mask_work_regs_shift            3
#define rx_pg_fir_err_mask_work_regs_mask             0x8


#define rx_pg_fir_err_mask_wtl_sm_addr                0b101100001
#define rx_pg_fir_err_mask_wtl_sm_startbit            12
#define rx_pg_fir_err_mask_wtl_sm_width               1
#define rx_pg_fir_err_mask_wtl_sm_endbit              12
#define rx_pg_fir_err_mask_wtl_sm_shift               3
#define rx_pg_fir_err_mask_wtl_sm_mask                0x8


#define rx_pg_fir_err_mask_wtm_sm_addr                0b101100001
#define rx_pg_fir_err_mask_wtm_sm_startbit            10
#define rx_pg_fir_err_mask_wtm_sm_width               1
#define rx_pg_fir_err_mask_wtm_sm_endbit              10
#define rx_pg_fir_err_mask_wtm_sm_shift               5
#define rx_pg_fir_err_mask_wtm_sm_mask                0x20


#define rx_pg_fir_err_mask_wtr_sm_addr                0b101100001
#define rx_pg_fir_err_mask_wtr_sm_startbit            11
#define rx_pg_fir_err_mask_wtr_sm_width               1
#define rx_pg_fir_err_mask_wtr_sm_endbit              11
#define rx_pg_fir_err_mask_wtr_sm_shift               4
#define rx_pg_fir_err_mask_wtr_sm_mask                0x10


#define rx_pl_fir_err_dac_regs_addr                   0b001000001
#define rx_pl_fir_err_dac_regs_startbit               2
#define rx_pl_fir_err_dac_regs_width                  1
#define rx_pl_fir_err_dac_regs_endbit                 2
#define rx_pl_fir_err_dac_regs_shift                  13
#define rx_pl_fir_err_dac_regs_mask                   0x2000


#define rx_pl_fir_err_ddc_sm_addr                     0b001000001
#define rx_pl_fir_err_ddc_sm_startbit                 1
#define rx_pl_fir_err_ddc_sm_width                    1
#define rx_pl_fir_err_ddc_sm_endbit                   1
#define rx_pl_fir_err_ddc_sm_shift                    14
#define rx_pl_fir_err_ddc_sm_mask                     0x4000


#define rx_pl_fir_err_inj_dac_regs_addr               0b001000011
#define rx_pl_fir_err_inj_dac_regs_startbit           2
#define rx_pl_fir_err_inj_dac_regs_width              1
#define rx_pl_fir_err_inj_dac_regs_endbit             2
#define rx_pl_fir_err_inj_dac_regs_shift              13
#define rx_pl_fir_err_inj_dac_regs_mask               0x2000


#define rx_pl_fir_err_inj_ddc_sm_addr                 0b001000011
#define rx_pl_fir_err_inj_ddc_sm_startbit             1
#define rx_pl_fir_err_inj_ddc_sm_width                1
#define rx_pl_fir_err_inj_ddc_sm_endbit               1
#define rx_pl_fir_err_inj_ddc_sm_shift                14
#define rx_pl_fir_err_inj_ddc_sm_mask                 0x4000


#define rx_pl_fir_err_inj_full_reg_addr               0b001000011
#define rx_pl_fir_err_inj_full_reg_startbit           0
#define rx_pl_fir_err_inj_full_reg_width              16
#define rx_pl_fir_err_inj_full_reg_endbit             15
#define rx_pl_fir_err_inj_full_reg_shift              0
#define rx_pl_fir_err_inj_full_reg_mask               0xffff


#define rx_pl_fir_err_inj_pl_regs_addr                0b001000011
#define rx_pl_fir_err_inj_pl_regs_startbit            0
#define rx_pl_fir_err_inj_pl_regs_width               1
#define rx_pl_fir_err_inj_pl_regs_endbit              0
#define rx_pl_fir_err_inj_pl_regs_shift               15
#define rx_pl_fir_err_inj_pl_regs_mask                0x8000


#define rx_pl_fir_err_mask_addr                       0b101010010
#define rx_pl_fir_err_mask_startbit                   14
#define rx_pl_fir_err_mask_width                      1
#define rx_pl_fir_err_mask_endbit                     14
#define rx_pl_fir_err_mask_shift                      1
#define rx_pl_fir_err_mask_mask                       0x2


#define rx_pl_fir_err_mask_dac_regs_addr              0b001000010
#define rx_pl_fir_err_mask_dac_regs_startbit          2
#define rx_pl_fir_err_mask_dac_regs_width             1
#define rx_pl_fir_err_mask_dac_regs_endbit            2
#define rx_pl_fir_err_mask_dac_regs_shift             13
#define rx_pl_fir_err_mask_dac_regs_mask              0x2000


#define rx_pl_fir_err_mask_ddc_sm_addr                0b001000010
#define rx_pl_fir_err_mask_ddc_sm_startbit            1
#define rx_pl_fir_err_mask_ddc_sm_width               1
#define rx_pl_fir_err_mask_ddc_sm_endbit              1
#define rx_pl_fir_err_mask_ddc_sm_shift               14
#define rx_pl_fir_err_mask_ddc_sm_mask                0x4000


#define rx_pl_fir_err_mask_pl_regs_addr               0b001000010
#define rx_pl_fir_err_mask_pl_regs_startbit           0
#define rx_pl_fir_err_mask_pl_regs_width              1
#define rx_pl_fir_err_mask_pl_regs_endbit             0
#define rx_pl_fir_err_mask_pl_regs_shift              15
#define rx_pl_fir_err_mask_pl_regs_mask               0x8000


#define rx_pl_fir_err_pl_regs_addr                    0b001000001
#define rx_pl_fir_err_pl_regs_startbit                0
#define rx_pl_fir_err_pl_regs_width                   1
#define rx_pl_fir_err_pl_regs_endbit                  0
#define rx_pl_fir_err_pl_regs_shift                   15
#define rx_pl_fir_err_pl_regs_mask                    0x8000


#define rx_pl_fir_errs_full_reg_addr                  0b001000001
#define rx_pl_fir_errs_full_reg_startbit              0
#define rx_pl_fir_errs_full_reg_width                 16
#define rx_pl_fir_errs_full_reg_endbit                15
#define rx_pl_fir_errs_full_reg_shift                 0
#define rx_pl_fir_errs_full_reg_mask                  0xffff


#define rx_pl_fir_errs_mask_full_reg_addr             0b001000010
#define rx_pl_fir_errs_mask_full_reg_startbit         0
#define rx_pl_fir_errs_mask_full_reg_width            16
#define rx_pl_fir_errs_mask_full_reg_endbit           15
#define rx_pl_fir_errs_mask_full_reg_shift            0
#define rx_pl_fir_errs_mask_full_reg_mask             0xffff


#define rx_pr_l_r_edge_a_alias_addr                   0b001001111
#define rx_pr_l_r_edge_a_alias_startbit               0
#define rx_pr_l_r_edge_a_alias_width                  12
#define rx_pr_l_r_edge_a_alias_endbit                 11
#define rx_pr_l_r_edge_a_alias_shift                  4
#define rx_pr_l_r_edge_a_alias_mask                   0xfff0


#define rx_pr_l_r_edge_b_alias_addr                   0b001100011
#define rx_pr_l_r_edge_b_alias_startbit               0
#define rx_pr_l_r_edge_b_alias_width                  12
#define rx_pr_l_r_edge_b_alias_endbit                 11
#define rx_pr_l_r_edge_b_alias_shift                  4
#define rx_pr_l_r_edge_b_alias_mask                   0xfff0


#define rx_rc_step_cntl2_edi_alias_addr               0b100101110
#define rx_rc_step_cntl2_edi_alias_startbit           0
#define rx_rc_step_cntl2_edi_alias_width              16
#define rx_rc_step_cntl2_edi_alias_endbit             15
#define rx_rc_step_cntl2_edi_alias_shift              0
#define rx_rc_step_cntl2_edi_alias_mask               0xffff


#define rx_rc_step_cntl2_opt_alias_addr               0b100101110
#define rx_rc_step_cntl2_opt_alias_startbit           0
#define rx_rc_step_cntl2_opt_alias_width              4
#define rx_rc_step_cntl2_opt_alias_endbit             3
#define rx_rc_step_cntl2_opt_alias_shift              12
#define rx_rc_step_cntl2_opt_alias_mask               0xf000


#define rx_rc_step_cntl_edi_alias_addr                0b100010111
#define rx_rc_step_cntl_edi_alias_startbit            0
#define rx_rc_step_cntl_edi_alias_width               14
#define rx_rc_step_cntl_edi_alias_endbit              13
#define rx_rc_step_cntl_edi_alias_shift               2
#define rx_rc_step_cntl_edi_alias_mask                0xfffc


#define rx_rc_step_cntl_opt_alias_addr                0b100010111
#define rx_rc_step_cntl_opt_alias_startbit            0
#define rx_rc_step_cntl_opt_alias_width               11
#define rx_rc_step_cntl_opt_alias_endbit              10
#define rx_rc_step_cntl_opt_alias_shift               5
#define rx_rc_step_cntl_opt_alias_mask                0xffe0


#define rx_sls_rcvy_ip_addr                           0b101001110
#define rx_sls_rcvy_ip_startbit                       1
#define rx_sls_rcvy_ip_width                          1
#define rx_sls_rcvy_ip_endbit                         1
#define rx_sls_rcvy_ip_shift                          14
#define rx_sls_rcvy_ip_mask                           0x4000


#define rx_start_wderf_alias_addr                     0b100111110
#define rx_start_wderf_alias_startbit                 0
#define rx_start_wderf_alias_width                    5
#define rx_start_wderf_alias_endbit                   4
#define rx_start_wderf_alias_shift                    11
#define rx_start_wderf_alias_mask                     0xf800


#define rx_wderf_done_alias_addr                      0b101000111
#define rx_wderf_done_alias_startbit                  0
#define rx_wderf_done_alias_width                     5
#define rx_wderf_done_alias_endbit                    4
#define rx_wderf_done_alias_shift                     11
#define rx_wderf_done_alias_mask                      0xf800


#define rx_wderf_failed_alias_addr                    0b101000111
#define rx_wderf_failed_alias_startbit                8
#define rx_wderf_failed_alias_width                   5
#define rx_wderf_failed_alias_endbit                  12
#define rx_wderf_failed_alias_shift                   3
#define rx_wderf_failed_alias_mask                    0xf8


#define rx_wt_clk_lane_status_alias_addr              0b101001011
#define rx_wt_clk_lane_status_alias_startbit          1
#define rx_wt_clk_lane_status_alias_width             4
#define rx_wt_clk_lane_status_alias_endbit            4
#define rx_wt_clk_lane_status_alias_shift             11
#define rx_wt_clk_lane_status_alias_mask              0x7800


#define rx_wt_lane_status_alias_addr                  0b001110001
#define rx_wt_lane_status_alias_startbit              5
#define rx_wt_lane_status_alias_width                 4
#define rx_wt_lane_status_alias_endbit                8
#define rx_wt_lane_status_alias_shift                 7
#define rx_wt_lane_status_alias_mask                  0x780


#define tx_bad_lane_cntr_addr                         0b101001110
#define tx_bad_lane_cntr_startbit                     5
#define tx_bad_lane_cntr_width                        3
#define tx_bad_lane_cntr_endbit                       7
#define tx_bad_lane_cntr_shift                        8
#define tx_bad_lane_cntr_mask                         0x700


#define tx_mode1_pl_full_reg_addr                     0b010000000
#define tx_mode1_pl_full_reg_startbit                 0
#define tx_mode1_pl_full_reg_width                    16
#define tx_mode1_pl_full_reg_endbit                   15
#define tx_mode1_pl_full_reg_shift                    0
#define tx_mode1_pl_full_reg_mask                     0xffff


#define tx_pg_fir_err_inj_bist_addr                   0b110100011
#define tx_pg_fir_err_inj_bist_startbit               5
#define tx_pg_fir_err_inj_bist_width                  1
#define tx_pg_fir_err_inj_bist_endbit                 5
#define tx_pg_fir_err_inj_bist_shift                  10
#define tx_pg_fir_err_inj_bist_mask                   0x400


#define tx_pg_fir_err_inj_ctl_regs_addr               0b110100011
#define tx_pg_fir_err_inj_ctl_regs_startbit           4
#define tx_pg_fir_err_inj_ctl_regs_width              1
#define tx_pg_fir_err_inj_ctl_regs_endbit             4
#define tx_pg_fir_err_inj_ctl_regs_shift              11
#define tx_pg_fir_err_inj_ctl_regs_mask               0x800


#define tx_pg_fir_err_inj_full_reg_addr               0b110100011
#define tx_pg_fir_err_inj_full_reg_startbit           0
#define tx_pg_fir_err_inj_full_reg_width              16
#define tx_pg_fir_err_inj_full_reg_endbit             15
#define tx_pg_fir_err_inj_full_reg_shift              0
#define tx_pg_fir_err_inj_full_reg_mask               0xffff


#define tx_pg_fir_err_inj_gcr_buff_addr               0b110100011
#define tx_pg_fir_err_inj_gcr_buff_startbit           1
#define tx_pg_fir_err_inj_gcr_buff_width              1
#define tx_pg_fir_err_inj_gcr_buff_endbit             1
#define tx_pg_fir_err_inj_gcr_buff_shift              14
#define tx_pg_fir_err_inj_gcr_buff_mask               0x4000


#define tx_pg_fir_err_inj_gcrs_ld_sm_addr             0b110100011
#define tx_pg_fir_err_inj_gcrs_ld_sm_startbit         2
#define tx_pg_fir_err_inj_gcrs_ld_sm_width            1
#define tx_pg_fir_err_inj_gcrs_ld_sm_endbit           2
#define tx_pg_fir_err_inj_gcrs_ld_sm_shift            13
#define tx_pg_fir_err_inj_gcrs_ld_sm_mask             0x2000


#define tx_pg_fir_err_inj_gcrs_unld_sm_addr           0b110100011
#define tx_pg_fir_err_inj_gcrs_unld_sm_startbit       3
#define tx_pg_fir_err_inj_gcrs_unld_sm_width          1
#define tx_pg_fir_err_inj_gcrs_unld_sm_endbit         3
#define tx_pg_fir_err_inj_gcrs_unld_sm_shift          12
#define tx_pg_fir_err_inj_gcrs_unld_sm_mask           0x1000


#define tx_pg_fir_err_inj_tx_sm_regs_addr             0b110100011
#define tx_pg_fir_err_inj_tx_sm_regs_startbit         0
#define tx_pg_fir_err_inj_tx_sm_regs_width            1
#define tx_pg_fir_err_inj_tx_sm_regs_endbit           0
#define tx_pg_fir_err_inj_tx_sm_regs_shift            15
#define tx_pg_fir_err_inj_tx_sm_regs_mask             0x8000


#define tx_pg_fir_err_mask_bist_addr                  0b110100001
#define tx_pg_fir_err_mask_bist_startbit              5
#define tx_pg_fir_err_mask_bist_width                 1
#define tx_pg_fir_err_mask_bist_endbit                5
#define tx_pg_fir_err_mask_bist_shift                 10
#define tx_pg_fir_err_mask_bist_mask                  0x400


#define tx_pg_fir_err_mask_ctl_regs_addr              0b110100001
#define tx_pg_fir_err_mask_ctl_regs_startbit          4
#define tx_pg_fir_err_mask_ctl_regs_width             1
#define tx_pg_fir_err_mask_ctl_regs_endbit            4
#define tx_pg_fir_err_mask_ctl_regs_shift             11
#define tx_pg_fir_err_mask_ctl_regs_mask              0x800


#define tx_pg_fir_err_mask_full_reg_addr              0b110100001
#define tx_pg_fir_err_mask_full_reg_startbit          0
#define tx_pg_fir_err_mask_full_reg_width             16
#define tx_pg_fir_err_mask_full_reg_endbit            15
#define tx_pg_fir_err_mask_full_reg_shift             0
#define tx_pg_fir_err_mask_full_reg_mask              0xffff


#define tx_pg_fir_err_mask_gcr_buff_addr              0b110100001
#define tx_pg_fir_err_mask_gcr_buff_startbit          1
#define tx_pg_fir_err_mask_gcr_buff_width             1
#define tx_pg_fir_err_mask_gcr_buff_endbit            1
#define tx_pg_fir_err_mask_gcr_buff_shift             14
#define tx_pg_fir_err_mask_gcr_buff_mask              0x4000


#define tx_pg_fir_err_mask_gcrs_ld_sm_addr            0b110100001
#define tx_pg_fir_err_mask_gcrs_ld_sm_startbit        2
#define tx_pg_fir_err_mask_gcrs_ld_sm_width           1
#define tx_pg_fir_err_mask_gcrs_ld_sm_endbit          2
#define tx_pg_fir_err_mask_gcrs_ld_sm_shift           13
#define tx_pg_fir_err_mask_gcrs_ld_sm_mask            0x2000


#define tx_pg_fir_err_mask_gcrs_unld_sm_addr          0b110100001
#define tx_pg_fir_err_mask_gcrs_unld_sm_startbit      3
#define tx_pg_fir_err_mask_gcrs_unld_sm_width         1
#define tx_pg_fir_err_mask_gcrs_unld_sm_endbit        3
#define tx_pg_fir_err_mask_gcrs_unld_sm_shift         12
#define tx_pg_fir_err_mask_gcrs_unld_sm_mask          0x1000


#define tx_pg_fir_err_mask_tx_sm_regs_addr            0b110100001
#define tx_pg_fir_err_mask_tx_sm_regs_startbit        0
#define tx_pg_fir_err_mask_tx_sm_regs_width           1
#define tx_pg_fir_err_mask_tx_sm_regs_endbit          0
#define tx_pg_fir_err_mask_tx_sm_regs_shift           15
#define tx_pg_fir_err_mask_tx_sm_regs_mask            0x8000


#define tx_pg_fir_errs_full_reg_addr                  0b110100000
#define tx_pg_fir_errs_full_reg_startbit              0
#define tx_pg_fir_errs_full_reg_width                 16
#define tx_pg_fir_errs_full_reg_endbit                15
#define tx_pg_fir_errs_full_reg_shift                 0
#define tx_pg_fir_errs_full_reg_mask                  0xffff


#define tx_pl_fir_err_inj_full_reg_addr               0b010000110
#define tx_pl_fir_err_inj_full_reg_startbit           0
#define tx_pl_fir_err_inj_full_reg_width              16
#define tx_pl_fir_err_inj_full_reg_endbit             15
#define tx_pl_fir_err_inj_full_reg_shift              0
#define tx_pl_fir_err_inj_full_reg_mask               0xffff


#define tx_pl_fir_err_inj_pl_regs_addr                0b010000110
#define tx_pl_fir_err_inj_pl_regs_startbit            0
#define tx_pl_fir_err_inj_pl_regs_width               1
#define tx_pl_fir_err_inj_pl_regs_endbit              0
#define tx_pl_fir_err_inj_pl_regs_shift               15
#define tx_pl_fir_err_inj_pl_regs_mask                0x8000


#define tx_pl_fir_err_mask_pl_regs_addr               0b010000101
#define tx_pl_fir_err_mask_pl_regs_startbit           0
#define tx_pl_fir_err_mask_pl_regs_width              1
#define tx_pl_fir_err_mask_pl_regs_endbit             0
#define tx_pl_fir_err_mask_pl_regs_shift              15
#define tx_pl_fir_err_mask_pl_regs_mask               0x8000


#define tx_pl_fir_err_pl_regs_addr                    0b010000100
#define tx_pl_fir_err_pl_regs_startbit                0
#define tx_pl_fir_err_pl_regs_width                   1
#define tx_pl_fir_err_pl_regs_endbit                  0
#define tx_pl_fir_err_pl_regs_shift                   15
#define tx_pl_fir_err_pl_regs_mask                    0x8000


#define tx_pl_fir_errs_full_reg_addr                  0b010000100
#define tx_pl_fir_errs_full_reg_startbit              0
#define tx_pl_fir_errs_full_reg_width                 16
#define tx_pl_fir_errs_full_reg_endbit                15
#define tx_pl_fir_errs_full_reg_shift                 0
#define tx_pl_fir_errs_full_reg_mask                  0xffff


#define tx_pl_fir_errs_mask_full_reg_addr             0b010000101
#define tx_pl_fir_errs_mask_full_reg_startbit         0
#define tx_pl_fir_errs_mask_full_reg_width            16
#define tx_pl_fir_errs_mask_full_reg_endbit           15
#define tx_pl_fir_errs_mask_full_reg_shift            0
#define tx_pl_fir_errs_mask_full_reg_mask             0xffff
