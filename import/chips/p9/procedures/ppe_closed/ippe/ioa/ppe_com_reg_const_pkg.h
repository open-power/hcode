/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/ippe/ioa/ppe_com_reg_const_pkg.h $ */
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
#define rx_bit_cntl1_e_pl_addr                        0b001100000
#define rx_bit_cntl2_e_pl_addr                        0b001100001
#define rx_bit_cntl2_eo_pl_addr                       0b001001001
#define rx_bit_cntl3_e_pl_addr                        0b001100010
#define rx_bit_cntl3_eo_pl_addr                       0b001001010
#define rx_bit_cntl4_eo_pl_addr                       0b001001011
#define rx_bit_cntl5_eo_pl_addr                       0b001001100
#define rx_bit_cntlx1_eo_pl_addr                      0b001001000
#define rx_bit_mode1_e_pl_addr                        0b001011000
#define rx_bit_mode1_eo_pl_addr                       0b001000100
#define rx_bit_mode2_e_pl_addr                        0b001011001
#define rx_bit_mode2_eo_pl_addr                       0b001000101
#define rx_bit_mode3_eo_pl_addr                       0b001000110
#define rx_bit_stat1_eo_pl_addr                       0b001001101
#define rx_bit_stat2_eo_pl_addr                       0b001001110
#define rx_bit_stat3_eo_pl_addr                       0b001001111
#define rx_ctl_cntl10_eo_pg_addr                      0b100100100
#define rx_ctl_cntl11_eo_pg_addr                      0b100100101
#define rx_ctl_cntl12_eo_pg_addr                      0b100100110
#define rx_ctl_cntl13_eo_pg_addr                      0b100100111
#define rx_ctl_cntl14_eo_pg_addr                      0b100101000
#define rx_ctl_cntl15_eo_pg_addr                      0b100101001
#define rx_ctl_cntl1_e_pg_addr                        0b100111110
#define rx_ctl_cntl1_eo_pg_addr                       0b100011011
#define rx_ctl_cntl2_eo_pg_addr                       0b100011100
#define rx_ctl_cntl3_eo_pg_addr                       0b100011101
#define rx_ctl_cntl4_e_pg_addr                        0b100111111
#define rx_ctl_cntl4_eo_pg_addr                       0b100011110
#define rx_ctl_cntl5_eo_pg_addr                       0b100011111
#define rx_ctl_cntl6_eo_pg_addr                       0b100100000
#define rx_ctl_cntl8_eo_pg_addr                       0b100100010
#define rx_ctl_cntl9_eo_pg_addr                       0b100100011
#define rx_ctl_cntlx11_e_pg_addr                      0b101000110
#define rx_ctl_cntlx7_eo_pg_addr                      0b100100001
#define rx_ctl_mode10_e_pg_addr                       0b100111011
#define rx_ctl_mode10_eo_pg_addr                      0b100001011
#define rx_ctl_mode11_e_pg_addr                       0b100111100
#define rx_ctl_mode11_eo_pg_addr                      0b100001100
#define rx_ctl_mode12_e_pg_addr                       0b100111101
#define rx_ctl_mode12_eo_pg_addr                      0b100001101
#define rx_ctl_mode13_eo_pg_addr                      0b100001110
#define rx_ctl_mode14_eo_pg_addr                      0b100001111
#define rx_ctl_mode15_eo_pg_addr                      0b100010000
#define rx_ctl_mode16_eo_pg_addr                      0b100010001
#define rx_ctl_mode17_eo_pg_addr                      0b100010010
#define rx_ctl_mode18_eo_pg_addr                      0b100010011
#define rx_ctl_mode19_eo_pg_addr                      0b100010100
#define rx_ctl_mode1_e_pg_addr                        0b100110010
#define rx_ctl_mode1_eo_pg_addr                       0b100000010
#define rx_ctl_mode20_eo_pg_addr                      0b100010101
#define rx_ctl_mode21_eo_pg_addr                      0b100010110
#define rx_ctl_mode22_eo_pg_addr                      0b100010111
#define rx_ctl_mode23_eo_pg_addr                      0b100011000
#define rx_ctl_mode24_eo_pg_addr                      0b100011001
#define rx_ctl_mode26_eo_pg_addr                      0b100101101
#define rx_ctl_mode27_eo_pg_addr                      0b100101110
#define rx_ctl_mode28_eo_pg_addr                      0b100101111
#define rx_ctl_mode29_eo_pg_addr                      0b100011010
#define rx_ctl_mode2_e_pg_addr                        0b100110011
#define rx_ctl_mode2_eo_pg_addr                       0b100000011
#define rx_ctl_mode3_e_pg_addr                        0b100110100
#define rx_ctl_mode3_eo_pg_addr                       0b100000100
#define rx_ctl_mode4_e_pg_addr                        0b100110101
#define rx_ctl_mode4_eo_pg_addr                       0b100000101
#define rx_ctl_mode5_e_pg_addr                        0b100110110
#define rx_ctl_mode5_eo_pg_addr                       0b100000110
#define rx_ctl_mode6_e_pg_addr                        0b100110111
#define rx_ctl_mode6_eo_pg_addr                       0b100000111
#define rx_ctl_mode7_e_pg_addr                        0b100111000
#define rx_ctl_mode7_eo_pg_addr                       0b100001000
#define rx_ctl_mode8_e_pg_addr                        0b100111001
#define rx_ctl_mode8_eo_pg_addr                       0b100001001
#define rx_ctl_mode9_e_pg_addr                        0b100111010
#define rx_ctl_mode9_eo_pg_addr                       0b100001010
#define rx_ctl_stat1_e_pg_addr                        0b101000111
#define rx_ctl_stat1_eo_pg_addr                       0b100101010
#define rx_ctl_stat2_e_pg_addr                        0b101001000
#define rx_ctl_stat2_eo_pg_addr                       0b100101011
#define rx_ctl_stat3_eo_pg_addr                       0b100101100
#define rx_ctl_stat4_e_pg_addr                        0b101001010
#define rx_ctl_stat5_e_pg_addr                        0b101001011
#define rx_ctl_stat6_e_pg_addr                        0b101001100
#define rx_ctl_statx8_e_pg_addr                       0b101001101
#define rx_dac_cntl1_e_pl_addr                        0b000010000
#define rx_dac_cntl1_eo_pl_addr                       0b000000001
#define rx_dac_cntl2_e_pl_addr                        0b000010001
#define rx_dac_cntl2_eo_pl_addr                       0b000000010
#define rx_dac_cntl3_e_pl_addr                        0b000010010
#define rx_dac_cntl3_eo_pl_addr                       0b000000011
#define rx_dac_cntl4_e_pl_addr                        0b000010011
#define rx_dac_cntl4_eo_pl_addr                       0b000000100
#define rx_dac_cntl5_e_pl_addr                        0b000010100
#define rx_dac_cntl5_eo_pl_addr                       0b000000101
#define rx_dac_cntl6_e_pl_addr                        0b000010101
#define rx_dac_cntl6_eo_pl_addr                       0b000000110
#define rx_dac_cntl7_e_pl_addr                        0b000010110
#define rx_dac_cntl7_eo_pl_addr                       0b000000111
#define rx_dac_cntl8_e_pl_addr                        0b000010111
#define rx_dac_cntl8_eo_pl_addr                       0b000001000
#define rx_dac_cntl9_e_pl_addr                        0b000011000
#define rx_data_dac_spare_mode_pl_addr                0b000000000
#define rx_data_work_spare_mode_pl_addr               0b001110000
#define rx_datasm_cntl1_e_pg_addr                     0b101111101
#define rx_datasm_cntl2_eo_pg_addr                    0b101101111
#define rx_datasm_cntlx1_eo_pg_addr                   0b101110001
#define rx_datasm_spare_mode_pg_addr                  0b101110000
#define rx_datasm_stat10_eo_pg_addr                   0b101111011
#define rx_datasm_stat11_eo_pg_addr                   0b101111100
#define rx_datasm_stat12_eo_pg_addr                   0b101111110
#define rx_datasm_stat13_e_pg_addr                    0b101111111
#define rx_datasm_stat1_eo_pg_addr                    0b101110010
#define rx_datasm_stat2_eo_pg_addr                    0b101110011
#define rx_datasm_stat3_eo_pg_addr                    0b101110100
#define rx_datasm_stat4_eo_pg_addr                    0b101110101
#define rx_datasm_stat5_eo_pg_addr                    0b101110110
#define rx_datasm_stat6_eo_pg_addr                    0b101110111
#define rx_datasm_stat7_eo_pg_addr                    0b101111000
#define rx_datasm_stat8_eo_pg_addr                    0b101111001
#define rx_datasm_stat9_eo_pg_addr                    0b101111010
#define rx_fir1_error_inject_pg_addr                  0b101010011
#define rx_fir1_mask_pg_addr                          0b101010010
#define rx_fir1_pg_addr                               0b101010001
#define rx_fir2_error_inject_pg_addr                  0b101100010
#define rx_fir2_mask_pg_addr                          0b101100001
#define rx_fir2_pg_addr                               0b101100000
#define rx_fir_error_inject_pb_addr                   0b111110011
#define rx_fir_error_inject_pl_addr                   0b001000011
#define rx_fir_mask_pb_addr                           0b111110010
#define rx_fir_mask_pl_addr                           0b001000010
#define rx_fir_msg_pb_addr                            0b111111111
#define rx_fir_pb_addr                                0b111110001
#define rx_fir_pl_addr                                0b001000001
#define rx_fir_reset_pb_addr                          0b111110000
#define rx_fir_training_mask_pg_addr                  0b101010101
#define rx_fir_training_pg_addr                       0b101010100
#define rx_glbsm_cntl2_eo_pg_addr                     0b101011100
#define rx_glbsm_cntl3_eo_pg_addr                     0b101011101
#define rx_glbsm_cntl4_eo_pg_addr                     0b101011110
#define rx_glbsm_cntlx1_eo_pg_addr                    0b101010110
#define rx_glbsm_mode1_eo_pg_addr                     0b101011111
#define rx_glbsm_spare_mode_pg_addr                   0b101010000
#define rx_glbsm_stat10_e_pg_addr                     0b101101100
#define rx_glbsm_stat11_e_pg_addr                     0b101101101
#define rx_glbsm_stat1_e_pg_addr                      0b101100011
#define rx_glbsm_stat1_eo_pg_addr                     0b101010111
#define rx_glbsm_stat2_e_pg_addr                      0b101100100
#define rx_glbsm_stat2_eo_pg_addr                     0b101011000
#define rx_glbsm_stat3_e_pg_addr                      0b101100101
#define rx_glbsm_stat3_eo_pg_addr                     0b101011001
#define rx_glbsm_stat4_e_pg_addr                      0b101100110
#define rx_glbsm_stat4_eo_pg_addr                     0b101011010
#define rx_glbsm_stat5_eo_pg_addr                     0b101011011
#define rx_glbsm_stat7_e_pg_addr                      0b101101001
#define rx_glbsm_stat8_e_pg_addr                      0b101101010
#define rx_glbsm_stat9_e_pg_addr                      0b101101011
#define rx_id1_pg_addr                                0b100000001
#define rx_id2_pg_addr                                0b100110000
#define rx_intr_msg_pb_addr                           0b111111110
#define rx_spare_mode_pg_addr                         0b100000000
#define rx_spare_mode_pl_addr                         0b001000000
#define rx_work_stat1_eo_pl_addr                      0b001110001
#define rx_work_stat2_eo_pl_addr                      0b001110010
#define rx_work_stat3_eo_pl_addr                      0b001110011
#define scom_mode_pb_addr                             0b000100000
#define scom_ppe_cntl_addr                            0b000100000
#define scom_ppe_flags_clr_reg_addr                   0b000100101
#define scom_ppe_flags_reg_addr                       0b000100011
#define scom_ppe_flags_set_reg_addr                   0b000100100
#define scom_ppe_ir_edr_addr                          0b000010100
#define scom_ppe_ir_sprg0_addr                        0b000010010
#define scom_ppe_mem_arb_csar_addr                    0b000001101
#define scom_ppe_mem_arb_csdr_addr                    0b000001110
#define scom_ppe_mem_arb_scr_addr                     0b000001010
#define scom_ppe_work_reg1_addr                       0b000100001
#define scom_ppe_work_reg2_addr                       0b000100010
#define scom_ppe_xcr_none_addr                        0b000010000
#define scom_ppe_xcr_sprg0_addr                       0b000010001
#define scom_ppe_xsr_iar_addr                         0b000010101
#define scom_ppe_xsr_sprg0_addr                       0b000010011
#define spare_mode_pb_addr                            0b111100110
#define tx_bit_mode1_e_pl_addr                        0b010000111
#define tx_bit_mode2_e_pl_addr                        0b010001000
#define tx_cntl1g_pl_addr                             0b010000010
#define tx_cntl3_eo_pl_addr                           0b010001010
#define tx_ctl_cntl10_eo_pg_addr                      0b110011011
#define tx_ctl_cntl2_e_pg_addr                        0b110010011
#define tx_ctl_cntl2_eo_pg_addr                       0b110000101
#define tx_ctl_cntl3_eo_pg_addr                       0b110000110
#define tx_ctl_cntl8_eo_pg_addr                       0b110011001
#define tx_ctl_cntl9_eo_pg_addr                       0b110011010
#define tx_ctl_cntlg1_eo_pg_addr                      0b110000100
#define tx_ctl_cntlg3_e_pg_addr                       0b110010100
#define tx_ctl_cntlg4_e_pg_addr                       0b110010101
#define tx_ctl_cntlg5_e_pg_addr                       0b110010110
#define tx_ctl_cntlg6_e_pg_addr                       0b110010111
#define tx_ctl_cntlg7_e_pg_addr                       0b110011000
#define tx_ctl_mode1_e_pg_addr                        0b110010001
#define tx_ctl_mode1_eo_pg_addr                       0b110000010
#define tx_ctl_mode2_e_pg_addr                        0b110011101
#define tx_ctl_mode2_eo_pg_addr                       0b110000011
#define tx_ctl_mode3_e_pg_addr                        0b110011110
#define tx_ctl_statg1_e_pg_addr                       0b110011100
#define tx_ctlsm_cntl1_eo_pg_addr                     0b110100110
#define tx_ctlsm_cntl2_eo_pg_addr                     0b110100111
#define tx_ctlsm_cntl3_eo_pg_addr                     0b110101000
#define tx_ctlsm_cntl4_eo_pg_addr                     0b110101001
#define tx_ctlsm_cntl5_eo_pg_addr                     0b110101010
#define tx_ctlsm_cntl6_eo_pg_addr                     0b110101011
#define tx_ctlsm_cntl7_eo_pg_addr                     0b110101100
#define tx_ctlsm_cntlg1_e_pg_addr                     0b110110000
#define tx_ctlsm_mode1_eo_pg_addr                     0b110100101
#define tx_ctlsm_spare_mode_pg_addr                   0b110100100
#define tx_ctlsm_stat1_e_pg_addr                      0b110110001
#define tx_ctlsm_stat1_eo_pg_addr                     0b110101101
#define tx_fir_error_inject_pg_addr                   0b110100011
#define tx_fir_error_inject_pl_addr                   0b010000110
#define tx_fir_mask_pg_addr                           0b110100001
#define tx_fir_mask_pl_addr                           0b010000101
#define tx_fir_pg_addr                                0b110100000
#define tx_fir_pl_addr                                0b010000100
#define tx_fir_reset_pg_addr                          0b110100010
#define tx_id1_pg_addr                                0b110000001
#define tx_id2_pg_addr                                0b110010000
#define tx_impcal2_pb_addr                            0b111100111
#define tx_impcal_nval_pb_addr                        0b111100001
#define tx_impcal_p_4x_pb_addr                        0b111100011
#define tx_impcal_pb_addr                             0b111100000
#define tx_impcal_pval_pb_addr                        0b111100010
#define tx_impcal_swo1_pb_addr                        0b111100100
#define tx_impcal_swo2_pb_addr                        0b111100101
#define tx_mode1_pl_addr                              0b010000000
#define tx_mode2_pl_addr                              0b010000001
#define tx_spare_mode_pg_addr                         0b110000000
#define tx_stat1_pl_addr                              0b010000011


#define chan_fail_mask_addr                           0b000100000
#define chan_fail_mask_startbit                       15
#define chan_fail_mask_width                          8
#define chan_fail_mask_endbit                         22
#define chan_fail_mask_shift                          -7
#define chan_fail_mask_mask                           0xfe00000000000000


#define enable_gcr_ofl_buff_addr                      0b000100000
#define enable_gcr_ofl_buff_startbit                  1
#define enable_gcr_ofl_buff_width                     1
#define enable_gcr_ofl_buff_endbit                    1
#define enable_gcr_ofl_buff_shift                     14
#define enable_gcr_ofl_buff_mask                      0x4000


#define gcr_buffer_enabled_addr                       0b000100000
#define gcr_buffer_enabled_startbit                   11
#define gcr_buffer_enabled_width                      1
#define gcr_buffer_enabled_endbit                     11
#define gcr_buffer_enabled_shift                      4
#define gcr_buffer_enabled_mask                       0x10


#define gcr_hang_det_sel_addr                         0b000100000
#define gcr_hang_det_sel_startbit                     8
#define gcr_hang_det_sel_width                        3
#define gcr_hang_det_sel_endbit                       10
#define gcr_hang_det_sel_shift                        5
#define gcr_hang_det_sel_mask                         0xe0


#define gcr_hang_error_inj_addr                       0b000100000
#define gcr_hang_error_inj_startbit                   13
#define gcr_hang_error_inj_width                      1
#define gcr_hang_error_inj_endbit                     13
#define gcr_hang_error_inj_shift                      2
#define gcr_hang_error_inj_mask                       0x4


#define gcr_hang_error_mask_addr                      0b000100000
#define gcr_hang_error_mask_startbit                  12
#define gcr_hang_error_mask_width                     1
#define gcr_hang_error_mask_endbit                    12
#define gcr_hang_error_mask_shift                     3
#define gcr_hang_error_mask_mask                      0x8


#define gcr_test_mode_addr                            0b000100000
#define gcr_test_mode_startbit                        0
#define gcr_test_mode_width                           1
#define gcr_test_mode_endbit                          0
#define gcr_test_mode_shift                           15
#define gcr_test_mode_mask                            0x8000


#define ioreset_hard_bus0_addr                        0b000100000
#define ioreset_hard_bus0_startbit                    2
#define ioreset_hard_bus0_width                       1
#define ioreset_hard_bus0_endbit                      2
#define ioreset_hard_bus0_shift                       13
#define ioreset_hard_bus0_mask                        0x2000


#define mmio_pg_reg_access_addr                       0b000100000
#define mmio_pg_reg_access_startbit                   3
#define mmio_pg_reg_access_width                      1
#define mmio_pg_reg_access_endbit                     3
#define mmio_pg_reg_access_shift                      12
#define mmio_pg_reg_access_mask                       0x1000


#define pb_spare_mode_0_addr                          0b111100110
#define pb_spare_mode_0_startbit                      0
#define pb_spare_mode_0_width                         1
#define pb_spare_mode_0_endbit                        0
#define pb_spare_mode_0_shift                         15
#define pb_spare_mode_0_mask                          0x8000


#define pb_spare_mode_1_addr                          0b111100110
#define pb_spare_mode_1_startbit                      1
#define pb_spare_mode_1_width                         1
#define pb_spare_mode_1_endbit                        1
#define pb_spare_mode_1_shift                         14
#define pb_spare_mode_1_mask                          0x4000


#define pb_spare_mode_2_addr                          0b111100110
#define pb_spare_mode_2_startbit                      2
#define pb_spare_mode_2_width                         1
#define pb_spare_mode_2_endbit                        2
#define pb_spare_mode_2_shift                         13
#define pb_spare_mode_2_mask                          0x2000


#define pb_spare_mode_3_addr                          0b111100110
#define pb_spare_mode_3_startbit                      3
#define pb_spare_mode_3_width                         1
#define pb_spare_mode_3_endbit                        3
#define pb_spare_mode_3_shift                         12
#define pb_spare_mode_3_mask                          0x1000


#define pb_spare_mode_4_addr                          0b111100110
#define pb_spare_mode_4_startbit                      4
#define pb_spare_mode_4_width                         1
#define pb_spare_mode_4_endbit                        4
#define pb_spare_mode_4_shift                         11
#define pb_spare_mode_4_mask                          0x800


#define pb_spare_mode_5_addr                          0b111100110
#define pb_spare_mode_5_startbit                      5
#define pb_spare_mode_5_width                         1
#define pb_spare_mode_5_endbit                        5
#define pb_spare_mode_5_shift                         10
#define pb_spare_mode_5_mask                          0x400


#define pb_spare_mode_6_addr                          0b111100110
#define pb_spare_mode_6_startbit                      6
#define pb_spare_mode_6_width                         1
#define pb_spare_mode_6_endbit                        6
#define pb_spare_mode_6_shift                         9
#define pb_spare_mode_6_mask                          0x200


#define pb_spare_mode_7_addr                          0b111100110
#define pb_spare_mode_7_startbit                      7
#define pb_spare_mode_7_width                         1
#define pb_spare_mode_7_endbit                        7
#define pb_spare_mode_7_shift                         8
#define pb_spare_mode_7_mask                          0x100


#define ppe_gcr_mode_addr                             0b000100000
#define ppe_gcr_mode_startbit                         14
#define ppe_gcr_mode_width                            1
#define ppe_gcr_mode_endbit                           14
#define ppe_gcr_mode_shift                            1
#define ppe_gcr_mode_mask                             0x2


#define rx_a_ap_addr                                  0b001110010
#define rx_a_ap_startbit                              4
#define rx_a_ap_width                                 8
#define rx_a_ap_endbit                                11
#define rx_a_ap_shift                                 4
#define rx_a_ap_mask                                  0xff0


#define rx_a_bad_dfe_conv_addr                        0b001110010
#define rx_a_bad_dfe_conv_startbit                    0
#define rx_a_bad_dfe_conv_width                       1
#define rx_a_bad_dfe_conv_endbit                      0
#define rx_a_bad_dfe_conv_shift                       15
#define rx_a_bad_dfe_conv_mask                        0x8000


#define rx_a_bist_en_addr                             0b100000010
#define rx_a_bist_en_startbit                         9
#define rx_a_bist_en_width                            1
#define rx_a_bist_en_endbit                           9
#define rx_a_bist_en_shift                            6
#define rx_a_bist_en_mask                             0x40


#define rx_a_controls_addr                            0b000000010
#define rx_a_controls_startbit                        0
#define rx_a_controls_width                           6
#define rx_a_controls_endbit                          5
#define rx_a_controls_shift                           10
#define rx_a_controls_mask                            0xfc00


#define rx_a_ctle_gain_addr                           0b000000110
#define rx_a_ctle_gain_startbit                       5
#define rx_a_ctle_gain_width                          4
#define rx_a_ctle_gain_endbit                         8
#define rx_a_ctle_gain_shift                          7
#define rx_a_ctle_gain_mask                           0x780


#define rx_a_even_integ_fine_gain_addr                0b000000101
#define rx_a_even_integ_fine_gain_startbit            4
#define rx_a_even_integ_fine_gain_width               5
#define rx_a_even_integ_fine_gain_endbit              8
#define rx_a_even_integ_fine_gain_shift               7
#define rx_a_even_integ_fine_gain_mask                0xf80


#define rx_a_h1ap_at_limit_addr                       0b001110010
#define rx_a_h1ap_at_limit_startbit                   2
#define rx_a_h1ap_at_limit_width                      1
#define rx_a_h1ap_at_limit_endbit                     2
#define rx_a_h1ap_at_limit_shift                      13
#define rx_a_h1ap_at_limit_mask                       0x2000


#define rx_a_h1e_val_addr                             0b000000111
#define rx_a_h1e_val_startbit                         0
#define rx_a_h1e_val_width                            7
#define rx_a_h1e_val_endbit                           6
#define rx_a_h1e_val_shift                            9
#define rx_a_h1e_val_mask                             0xfe00


#define rx_a_h1o_val_addr                             0b000000111
#define rx_a_h1o_val_startbit                         8
#define rx_a_h1o_val_width                            7
#define rx_a_h1o_val_endbit                           14
#define rx_a_h1o_val_shift                            1
#define rx_a_h1o_val_mask                             0xfe


#define rx_a_integ_coarse_gain_addr                   0b000000101
#define rx_a_integ_coarse_gain_startbit               0
#define rx_a_integ_coarse_gain_width                  4
#define rx_a_integ_coarse_gain_endbit                 3
#define rx_a_integ_coarse_gain_shift                  12
#define rx_a_integ_coarse_gain_mask                   0xf000


#define rx_a_odd_integ_fine_gain_addr                 0b000000101
#define rx_a_odd_integ_fine_gain_startbit             9
#define rx_a_odd_integ_fine_gain_width                5
#define rx_a_odd_integ_fine_gain_endbit               13
#define rx_a_odd_integ_fine_gain_shift                2
#define rx_a_odd_integ_fine_gain_mask                 0x7c


#define rx_a_offset_e0_addr                           0b000000011
#define rx_a_offset_e0_startbit                       0
#define rx_a_offset_e0_width                          7
#define rx_a_offset_e0_endbit                         6
#define rx_a_offset_e0_shift                          9
#define rx_a_offset_e0_mask                           0xfe00


#define rx_a_offset_e1_addr                           0b000000011
#define rx_a_offset_e1_startbit                       8
#define rx_a_offset_e1_width                          7
#define rx_a_offset_e1_endbit                         14
#define rx_a_offset_e1_shift                          1
#define rx_a_offset_e1_mask                           0xfe


#define rx_a_offset_o0_addr                           0b000000100
#define rx_a_offset_o0_startbit                       0
#define rx_a_offset_o0_width                          7
#define rx_a_offset_o0_endbit                         6
#define rx_a_offset_o0_shift                          9
#define rx_a_offset_o0_mask                           0xfe00


#define rx_a_offset_o1_addr                           0b000000100
#define rx_a_offset_o1_startbit                       8
#define rx_a_offset_o1_width                          7
#define rx_a_offset_o1_endbit                         14
#define rx_a_offset_o1_shift                          1
#define rx_a_offset_o1_mask                           0xfe


#define rx_a_path_off_even_addr                       0b001110011
#define rx_a_path_off_even_startbit                   0
#define rx_a_path_off_even_width                      6
#define rx_a_path_off_even_endbit                     5
#define rx_a_path_off_even_shift                      10
#define rx_a_path_off_even_mask                       0xfc00


#define rx_a_path_off_odd_addr                        0b001110011
#define rx_a_path_off_odd_startbit                    6
#define rx_a_path_off_odd_width                       6
#define rx_a_path_off_odd_endbit                      11
#define rx_a_path_off_odd_shift                       4
#define rx_a_path_off_odd_mask                        0x3f0


#define rx_a_pr_dfe_clkadj_addr                       0b001001111
#define rx_a_pr_dfe_clkadj_startbit                   12
#define rx_a_pr_dfe_clkadj_width                      4
#define rx_a_pr_dfe_clkadj_endbit                     15
#define rx_a_pr_dfe_clkadj_shift                      0
#define rx_a_pr_dfe_clkadj_mask                       0xf


#define rx_abort_check_timeout_sel_addr               0b100001000
#define rx_abort_check_timeout_sel_startbit           0
#define rx_abort_check_timeout_sel_width              4
#define rx_abort_check_timeout_sel_endbit             3
#define rx_abort_check_timeout_sel_shift              12
#define rx_abort_check_timeout_sel_mask               0xf000


#define rx_amax_high_addr                             0b100010010
#define rx_amax_high_startbit                         0
#define rx_amax_high_width                            8
#define rx_amax_high_endbit                           7
#define rx_amax_high_shift                            8
#define rx_amax_high_mask                             0xff00


#define rx_amax_low_addr                              0b100010010
#define rx_amax_low_startbit                          8
#define rx_amax_low_width                             8
#define rx_amax_low_endbit                            15
#define rx_amax_low_shift                             0
#define rx_amax_low_mask                              0xff


#define rx_amin_cfg_addr                              0b100001100
#define rx_amin_cfg_startbit                          9
#define rx_amin_cfg_width                             3
#define rx_amin_cfg_endbit                            11
#define rx_amin_cfg_shift                             4
#define rx_amin_cfg_mask                              0x70


#define rx_amin_timeout_addr                          0b100010000
#define rx_amin_timeout_startbit                      12
#define rx_amin_timeout_width                         4
#define rx_amin_timeout_endbit                        15
#define rx_amin_timeout_shift                         0
#define rx_amin_timeout_mask                          0xf


#define rx_amp0_filter_mask_addr                      0b100010011
#define rx_amp0_filter_mask_startbit                  0
#define rx_amp0_filter_mask_width                     8
#define rx_amp0_filter_mask_endbit                    7
#define rx_amp0_filter_mask_shift                     8
#define rx_amp0_filter_mask_mask                      0xff00


#define rx_amp1_filter_mask_addr                      0b100010011
#define rx_amp1_filter_mask_startbit                  8
#define rx_amp1_filter_mask_width                     8
#define rx_amp1_filter_mask_endbit                    15
#define rx_amp1_filter_mask_shift                     0
#define rx_amp1_filter_mask_mask                      0xff


#define rx_amp_cfg_addr                               0b100001011
#define rx_amp_cfg_startbit                           12
#define rx_amp_cfg_width                              4
#define rx_amp_cfg_endbit                             15
#define rx_amp_cfg_shift                              0
#define rx_amp_cfg_mask                               0xf


#define rx_amp_gain_cnt_max_addr                      0b100000111
#define rx_amp_gain_cnt_max_startbit                  8
#define rx_amp_gain_cnt_max_width                     4
#define rx_amp_gain_cnt_max_endbit                    11
#define rx_amp_gain_cnt_max_shift                     4
#define rx_amp_gain_cnt_max_mask                      0xf0


#define rx_amp_init_cfg_addr                          0b100001011
#define rx_amp_init_cfg_startbit                      0
#define rx_amp_init_cfg_width                         3
#define rx_amp_init_cfg_endbit                        2
#define rx_amp_init_cfg_shift                         13
#define rx_amp_init_cfg_mask                          0xe000


#define rx_amp_init_timeout_addr                      0b100001111
#define rx_amp_init_timeout_startbit                  0
#define rx_amp_init_timeout_width                     4
#define rx_amp_init_timeout_endbit                    3
#define rx_amp_init_timeout_shift                     12
#define rx_amp_init_timeout_mask                      0xf000


#define rx_amp_recal_cfg_addr                         0b100001011
#define rx_amp_recal_cfg_startbit                     3
#define rx_amp_recal_cfg_width                        3
#define rx_amp_recal_cfg_endbit                       5
#define rx_amp_recal_cfg_shift                        10
#define rx_amp_recal_cfg_mask                         0x1c00


#define rx_amp_recal_timeout_addr                     0b100001111
#define rx_amp_recal_timeout_startbit                 4
#define rx_amp_recal_timeout_width                    4
#define rx_amp_recal_timeout_endbit                   7
#define rx_amp_recal_timeout_shift                    8
#define rx_amp_recal_timeout_mask                     0xf00


#define rx_amp_start_val_addr                         0b100010100
#define rx_amp_start_val_startbit                     8
#define rx_amp_start_val_width                        8
#define rx_amp_start_val_endbit                       15
#define rx_amp_start_val_shift                        0
#define rx_amp_start_val_mask                         0xff


#define rx_amp_timeout_addr                           0b100010001
#define rx_amp_timeout_startbit                       0
#define rx_amp_timeout_width                          4
#define rx_amp_timeout_endbit                         3
#define rx_amp_timeout_shift                          12
#define rx_amp_timeout_mask                           0xf000


#define rx_amp_val_addr                               0b000001000
#define rx_amp_val_startbit                           0
#define rx_amp_val_width                              8
#define rx_amp_val_endbit                             7
#define rx_amp_val_shift                              8
#define rx_amp_val_mask                               0xff00


#define rx_ap110_ap010_delta_max_addr                 0b100010101
#define rx_ap110_ap010_delta_max_startbit             4
#define rx_ap110_ap010_delta_max_width                4
#define rx_ap110_ap010_delta_max_endbit               7
#define rx_ap110_ap010_delta_max_shift                8
#define rx_ap110_ap010_delta_max_mask                 0xf00


#define rx_apx111_high_addr                           0b100011010
#define rx_apx111_high_startbit                       0
#define rx_apx111_high_width                          8
#define rx_apx111_high_endbit                         7
#define rx_apx111_high_shift                          8
#define rx_apx111_high_mask                           0xff00


#define rx_apx111_low_addr                            0b100011010
#define rx_apx111_low_startbit                        8
#define rx_apx111_low_width                           8
#define rx_apx111_low_endbit                          15
#define rx_apx111_low_shift                           0
#define rx_apx111_low_mask                            0xff


#define rx_ber_cfg_addr                               0b001000110
#define rx_ber_cfg_startbit                           0
#define rx_ber_cfg_width                              3
#define rx_ber_cfg_endbit                             2
#define rx_ber_cfg_shift                              13
#define rx_ber_cfg_mask                               0xe000


#define rx_ber_clr_count_on_read_en_addr              0b100011011
#define rx_ber_clr_count_on_read_en_startbit          11
#define rx_ber_clr_count_on_read_en_width             1
#define rx_ber_clr_count_on_read_en_endbit            11
#define rx_ber_clr_count_on_read_en_shift             4
#define rx_ber_clr_count_on_read_en_mask              0x10


#define rx_ber_clr_timer_on_read_en_addr              0b100011011
#define rx_ber_clr_timer_on_read_en_startbit          12
#define rx_ber_clr_timer_on_read_en_width             1
#define rx_ber_clr_timer_on_read_en_endbit            12
#define rx_ber_clr_timer_on_read_en_shift             3
#define rx_ber_clr_timer_on_read_en_mask              0x8


#define rx_ber_count_addr                             0b101110010
#define rx_ber_count_startbit                         0
#define rx_ber_count_width                            11
#define rx_ber_count_endbit                           10
#define rx_ber_count_shift                            5
#define rx_ber_count_mask                             0xffe0


#define rx_ber_count_clr_addr                         0b101110001
#define rx_ber_count_clr_startbit                     1
#define rx_ber_count_clr_width                        1
#define rx_ber_count_clr_endbit                       1
#define rx_ber_count_clr_shift                        14
#define rx_ber_count_clr_mask                         0x4000


#define rx_ber_count_freeze_en_addr                   0b100011011
#define rx_ber_count_freeze_en_startbit               2
#define rx_ber_count_freeze_en_width                  1
#define rx_ber_count_freeze_en_endbit                 2
#define rx_ber_count_freeze_en_shift                  13
#define rx_ber_count_freeze_en_mask                   0x2000


#define rx_ber_count_frozen_by_err_cnt_addr           0b101110010
#define rx_ber_count_frozen_by_err_cnt_startbit       12
#define rx_ber_count_frozen_by_err_cnt_width          1
#define rx_ber_count_frozen_by_err_cnt_endbit         12
#define rx_ber_count_frozen_by_err_cnt_shift          3
#define rx_ber_count_frozen_by_err_cnt_mask           0x8


#define rx_ber_count_frozen_by_timer_addr             0b101110010
#define rx_ber_count_frozen_by_timer_startbit         13
#define rx_ber_count_frozen_by_timer_width            1
#define rx_ber_count_frozen_by_timer_endbit           13
#define rx_ber_count_frozen_by_timer_shift            2
#define rx_ber_count_frozen_by_timer_mask             0x4


#define rx_ber_count_saturated_addr                   0b101110010
#define rx_ber_count_saturated_startbit               11
#define rx_ber_count_saturated_width                  1
#define rx_ber_count_saturated_endbit                 11
#define rx_ber_count_saturated_shift                  4
#define rx_ber_count_saturated_mask                   0x10


#define rx_ber_count_sel_addr                         0b100011011
#define rx_ber_count_sel_startbit                     3
#define rx_ber_count_sel_width                        4
#define rx_ber_count_sel_endbit                       6
#define rx_ber_count_sel_shift                        9
#define rx_ber_count_sel_mask                         0x1e00


#define rx_ber_dpipe_mux_sel_addr                     0b001000100
#define rx_ber_dpipe_mux_sel_startbit                 1
#define rx_ber_dpipe_mux_sel_width                    1
#define rx_ber_dpipe_mux_sel_endbit                   1
#define rx_ber_dpipe_mux_sel_shift                    14
#define rx_ber_dpipe_mux_sel_mask                     0x4000


#define rx_ber_en_addr                                0b100011011
#define rx_ber_en_startbit                            0
#define rx_ber_en_width                               1
#define rx_ber_en_endbit                              0
#define rx_ber_en_shift                               15
#define rx_ber_en_mask                                0x8000


#define rx_ber_reset_addr                             0b101110001
#define rx_ber_reset_startbit                         6
#define rx_ber_reset_width                            1
#define rx_ber_reset_endbit                           6
#define rx_ber_reset_shift                            9
#define rx_ber_reset_mask                             0x200


#define rx_ber_timeout_addr                           0b100010001
#define rx_ber_timeout_startbit                       8
#define rx_ber_timeout_width                          4
#define rx_ber_timeout_endbit                         11
#define rx_ber_timeout_shift                          4
#define rx_ber_timeout_mask                           0xf0


#define rx_ber_timer_clr_addr                         0b101110001
#define rx_ber_timer_clr_startbit                     2
#define rx_ber_timer_clr_width                        1
#define rx_ber_timer_clr_endbit                       2
#define rx_ber_timer_clr_shift                        13
#define rx_ber_timer_clr_mask                         0x2000


#define rx_ber_timer_freeze_en_addr                   0b100011011
#define rx_ber_timer_freeze_en_startbit               1
#define rx_ber_timer_freeze_en_width                  1
#define rx_ber_timer_freeze_en_endbit                 1
#define rx_ber_timer_freeze_en_shift                  14
#define rx_ber_timer_freeze_en_mask                   0x4000


#define rx_ber_timer_saturated_addr                   0b101110010
#define rx_ber_timer_saturated_startbit               14
#define rx_ber_timer_saturated_width                  1
#define rx_ber_timer_saturated_endbit                 14
#define rx_ber_timer_saturated_shift                  1
#define rx_ber_timer_saturated_mask                   0x2


#define rx_ber_timer_sel_addr                         0b100011011
#define rx_ber_timer_sel_startbit                     8
#define rx_ber_timer_sel_width                        3
#define rx_ber_timer_sel_endbit                       10
#define rx_ber_timer_sel_shift                        5
#define rx_ber_timer_sel_mask                         0xe0


#define rx_ber_timer_value_0_15_addr                  0b101110011
#define rx_ber_timer_value_0_15_startbit              0
#define rx_ber_timer_value_0_15_width                 16
#define rx_ber_timer_value_0_15_endbit                15
#define rx_ber_timer_value_0_15_shift                 0
#define rx_ber_timer_value_0_15_mask                  0xffff


#define rx_ber_timer_value_16_31_addr                 0b101110100
#define rx_ber_timer_value_16_31_startbit             0
#define rx_ber_timer_value_16_31_width                16
#define rx_ber_timer_value_16_31_endbit               15
#define rx_ber_timer_value_16_31_shift                0
#define rx_ber_timer_value_16_31_mask                 0xffff


#define rx_bist_bus_data_mode_addr                    0b100100100
#define rx_bist_bus_data_mode_startbit                4
#define rx_bist_bus_data_mode_width                   1
#define rx_bist_bus_data_mode_endbit                  4
#define rx_bist_bus_data_mode_shift                   11
#define rx_bist_bus_data_mode_mask                    0x800


#define rx_bist_cupll_lock_check_en_addr              0b100100011
#define rx_bist_cupll_lock_check_en_startbit          5
#define rx_bist_cupll_lock_check_en_width             1
#define rx_bist_cupll_lock_check_en_endbit            5
#define rx_bist_cupll_lock_check_en_shift             10
#define rx_bist_cupll_lock_check_en_mask              0x400


#define rx_bist_done_addr                             0b100101011
#define rx_bist_done_startbit                         1
#define rx_bist_done_width                            1
#define rx_bist_done_endbit                           1
#define rx_bist_done_shift                            14
#define rx_bist_done_mask                             0x4000


#define rx_bist_en_addr                               0b100100011
#define rx_bist_en_startbit                           0
#define rx_bist_en_width                              1
#define rx_bist_en_endbit                             0
#define rx_bist_en_shift                              15
#define rx_bist_en_mask                               0x8000


#define rx_bist_ext_start_mode_addr                   0b100100011
#define rx_bist_ext_start_mode_startbit               1
#define rx_bist_ext_start_mode_width                  1
#define rx_bist_ext_start_mode_endbit                 1
#define rx_bist_ext_start_mode_shift                  14
#define rx_bist_ext_start_mode_mask                   0x4000


#define rx_bist_eye_a_width_addr                      0b100101011
#define rx_bist_eye_a_width_startbit                  4
#define rx_bist_eye_a_width_width                     6
#define rx_bist_eye_a_width_endbit                    9
#define rx_bist_eye_a_width_shift                     6
#define rx_bist_eye_a_width_mask                      0xfc0


#define rx_bist_eye_b_width_addr                      0b100101011
#define rx_bist_eye_b_width_startbit                  10
#define rx_bist_eye_b_width_width                     6
#define rx_bist_eye_b_width_endbit                    15
#define rx_bist_eye_b_width_shift                     0
#define rx_bist_eye_b_width_mask                      0x3f


#define rx_bist_init_disable_addr                     0b100100011
#define rx_bist_init_disable_startbit                 2
#define rx_bist_init_disable_width                    3
#define rx_bist_init_disable_endbit                   4
#define rx_bist_init_disable_shift                    11
#define rx_bist_init_disable_mask                     0x3800


#define rx_bist_init_done_addr                        0b100101011
#define rx_bist_init_done_startbit                    0
#define rx_bist_init_done_width                       1
#define rx_bist_init_done_endbit                      0
#define rx_bist_init_done_shift                       15
#define rx_bist_init_done_mask                        0x8000


#define rx_bist_min_eye_width_addr                    0b100000010
#define rx_bist_min_eye_width_startbit                3
#define rx_bist_min_eye_width_width                   6
#define rx_bist_min_eye_width_endbit                  8
#define rx_bist_min_eye_width_shift                   7
#define rx_bist_min_eye_width_mask                    0x1f80


#define rx_bist_no_edge_det_addr                      0b100101011
#define rx_bist_no_edge_det_startbit                  3
#define rx_bist_no_edge_det_width                     1
#define rx_bist_no_edge_det_endbit                    3
#define rx_bist_no_edge_det_shift                     12
#define rx_bist_no_edge_det_mask                      0x1000


#define rx_bist_prbs_prop_time_addr                   0b100100100
#define rx_bist_prbs_prop_time_startbit               5
#define rx_bist_prbs_prop_time_width                  4
#define rx_bist_prbs_prop_time_endbit                 8
#define rx_bist_prbs_prop_time_shift                  7
#define rx_bist_prbs_prop_time_mask                   0x780


#define rx_bist_prbs_test_time_addr                   0b100100100
#define rx_bist_prbs_test_time_startbit               0
#define rx_bist_prbs_test_time_width                  4
#define rx_bist_prbs_test_time_endbit                 3
#define rx_bist_prbs_test_time_shift                  12
#define rx_bist_prbs_test_time_mask                   0xf000


#define rx_bist_store_eyes_bank_sel_addr              0b100100011
#define rx_bist_store_eyes_bank_sel_startbit          12
#define rx_bist_store_eyes_bank_sel_width             2
#define rx_bist_store_eyes_bank_sel_endbit            13
#define rx_bist_store_eyes_bank_sel_shift             2
#define rx_bist_store_eyes_bank_sel_mask              0xc


#define rx_bist_store_eyes_lane_sel_addr              0b100100011
#define rx_bist_store_eyes_lane_sel_startbit          6
#define rx_bist_store_eyes_lane_sel_width             6
#define rx_bist_store_eyes_lane_sel_endbit            11
#define rx_bist_store_eyes_lane_sel_shift             4
#define rx_bist_store_eyes_lane_sel_mask              0x3f0


#define rx_bus_id_addr                                0b100000001
#define rx_bus_id_startbit                            0
#define rx_bus_id_width                               6
#define rx_bus_id_endbit                              5
#define rx_bus_id_shift                               10
#define rx_bus_id_mask                                0xfc00


#define rx_cal_lane_pg_phy_gcrmsg_addr                0b100100001
#define rx_cal_lane_pg_phy_gcrmsg_startbit            8
#define rx_cal_lane_pg_phy_gcrmsg_width               5
#define rx_cal_lane_pg_phy_gcrmsg_endbit              12
#define rx_cal_lane_pg_phy_gcrmsg_shift               3
#define rx_cal_lane_pg_phy_gcrmsg_mask                0xf8


#define rx_cal_lane_sel_addr                          0b001001000
#define rx_cal_lane_sel_startbit                      0
#define rx_cal_lane_sel_width                         1
#define rx_cal_lane_sel_endbit                        0
#define rx_cal_lane_sel_shift                         15
#define rx_cal_lane_sel_mask                          0x8000


#define rx_clr_par_errs_addr                          0b101010110
#define rx_clr_par_errs_startbit                      14
#define rx_clr_par_errs_width                         1
#define rx_clr_par_errs_endbit                        14
#define rx_clr_par_errs_shift                         1
#define rx_clr_par_errs_mask                          0x2


#define rx_clr_recal_cnt_addr                         0b101011110
#define rx_clr_recal_cnt_startbit                     0
#define rx_clr_recal_cnt_width                        1
#define rx_clr_recal_cnt_endbit                       0
#define rx_clr_recal_cnt_shift                        15
#define rx_clr_recal_cnt_mask                         0x8000


#define rx_cm_cfg_addr                                0b100001100
#define rx_cm_cfg_startbit                            6
#define rx_cm_cfg_width                               3
#define rx_cm_cfg_endbit                              8
#define rx_cm_cfg_shift                               7
#define rx_cm_cfg_mask                                0x380


#define rx_cm_cntl_addr                               0b000000010
#define rx_cm_cntl_startbit                           6
#define rx_cm_cntl_width                              3
#define rx_cm_cntl_endbit                             8
#define rx_cm_cntl_shift                              7
#define rx_cm_cntl_mask                               0x380


#define rx_cm_offset_val_addr                         0b100001110
#define rx_cm_offset_val_startbit                     1
#define rx_cm_offset_val_width                        7
#define rx_cm_offset_val_endbit                       7
#define rx_cm_offset_val_shift                        8
#define rx_cm_offset_val_mask                         0x7f00


#define rx_cm_timeout_addr                            0b100010000
#define rx_cm_timeout_startbit                        8
#define rx_cm_timeout_width                           4
#define rx_cm_timeout_endbit                          11
#define rx_cm_timeout_shift                           4
#define rx_cm_timeout_mask                            0xf0


#define rx_cnt_single_lane_recal_addr                 0b101011100
#define rx_cnt_single_lane_recal_startbit             1
#define rx_cnt_single_lane_recal_width                1
#define rx_cnt_single_lane_recal_endbit               1
#define rx_cnt_single_lane_recal_shift                14
#define rx_cnt_single_lane_recal_mask                 0x4000


#define rx_ctl_datasm_clkdist_pdwn_addr               0b101110000
#define rx_ctl_datasm_clkdist_pdwn_startbit           12
#define rx_ctl_datasm_clkdist_pdwn_width              1
#define rx_ctl_datasm_clkdist_pdwn_endbit             12
#define rx_ctl_datasm_clkdist_pdwn_shift              3
#define rx_ctl_datasm_clkdist_pdwn_mask               0x8


#define rx_ctle_gain_max_addr                         0b100010100
#define rx_ctle_gain_max_startbit                     0
#define rx_ctle_gain_max_width                        4
#define rx_ctle_gain_max_endbit                       3
#define rx_ctle_gain_max_shift                        12
#define rx_ctle_gain_max_mask                         0xf000


#define rx_ctle_update_mode_addr                      0b100011001
#define rx_ctle_update_mode_startbit                  2
#define rx_ctle_update_mode_width                     1
#define rx_ctle_update_mode_endbit                    2
#define rx_ctle_update_mode_shift                     13
#define rx_ctle_update_mode_mask                      0x2000


#define rx_current_recal_init_lane_addr               0b101011011
#define rx_current_recal_init_lane_startbit           2
#define rx_current_recal_init_lane_width              5
#define rx_current_recal_init_lane_endbit             6
#define rx_current_recal_init_lane_shift              9
#define rx_current_recal_init_lane_mask               0x3e00


#define rx_dac_bo_cfg_addr                            0b100001101
#define rx_dac_bo_cfg_startbit                        4
#define rx_dac_bo_cfg_width                           3
#define rx_dac_bo_cfg_endbit                          6
#define rx_dac_bo_cfg_shift                           9
#define rx_dac_bo_cfg_mask                            0xe00


#define rx_dactest_Hlmt_addr                          0b100100110
#define rx_dactest_Hlmt_startbit                      0
#define rx_dactest_Hlmt_width                         9
#define rx_dactest_Hlmt_endbit                        8
#define rx_dactest_Hlmt_shift                         7
#define rx_dactest_Hlmt_mask                          0xff80


#define rx_dactest_Llmt_addr                          0b100100101
#define rx_dactest_Llmt_startbit                      0
#define rx_dactest_Llmt_width                         9
#define rx_dactest_Llmt_endbit                        8
#define rx_dactest_Llmt_shift                         7
#define rx_dactest_Llmt_mask                          0xff80


#define rx_dactest_diff_addr                          0b101011001
#define rx_dactest_diff_startbit                      3
#define rx_dactest_diff_width                         9
#define rx_dactest_diff_endbit                        11
#define rx_dactest_diff_shift                         4
#define rx_dactest_diff_mask                          0x1ff0


#define rx_dactest_iseq_addr                          0b101011001
#define rx_dactest_iseq_startbit                      2
#define rx_dactest_iseq_width                         1
#define rx_dactest_iseq_endbit                        2
#define rx_dactest_iseq_shift                         13
#define rx_dactest_iseq_mask                          0x2000


#define rx_dactest_isgt_addr                          0b101011001
#define rx_dactest_isgt_startbit                      0
#define rx_dactest_isgt_width                         1
#define rx_dactest_isgt_endbit                        0
#define rx_dactest_isgt_shift                         15
#define rx_dactest_isgt_mask                          0x8000


#define rx_dactest_islt_addr                          0b101011001
#define rx_dactest_islt_startbit                      1
#define rx_dactest_islt_width                         1
#define rx_dactest_islt_endbit                        1
#define rx_dactest_islt_shift                         14
#define rx_dactest_islt_mask                          0x4000


#define rx_dactest_reset_addr                         0b100100101
#define rx_dactest_reset_startbit                     9
#define rx_dactest_reset_width                        1
#define rx_dactest_reset_endbit                       9
#define rx_dactest_reset_shift                        6
#define rx_dactest_reset_mask                         0x40


#define rx_dactest_start_addr                         0b100100101
#define rx_dactest_start_startbit                     10
#define rx_dactest_start_width                        1
#define rx_dactest_start_endbit                       10
#define rx_dactest_start_shift                        5
#define rx_dactest_start_mask                         0x20


#define rx_data_pipe_0_15_addr                        0b101110101
#define rx_data_pipe_0_15_startbit                    0
#define rx_data_pipe_0_15_width                       16
#define rx_data_pipe_0_15_endbit                      15
#define rx_data_pipe_0_15_shift                       0
#define rx_data_pipe_0_15_mask                        0xffff


#define rx_data_pipe_16_31_addr                       0b101110110
#define rx_data_pipe_16_31_startbit                   0
#define rx_data_pipe_16_31_width                      16
#define rx_data_pipe_16_31_endbit                     15
#define rx_data_pipe_16_31_shift                      0
#define rx_data_pipe_16_31_mask                       0xffff


#define rx_data_pipe_capture_addr                     0b101110001
#define rx_data_pipe_capture_startbit                 4
#define rx_data_pipe_capture_width                    1
#define rx_data_pipe_capture_endbit                   4
#define rx_data_pipe_capture_shift                    11
#define rx_data_pipe_capture_mask                     0x800


#define rx_data_pipe_clr_on_read_mode_addr            0b100000011
#define rx_data_pipe_clr_on_read_mode_startbit        11
#define rx_data_pipe_clr_on_read_mode_width           1
#define rx_data_pipe_clr_on_read_mode_endbit          11
#define rx_data_pipe_clr_on_read_mode_shift           4
#define rx_data_pipe_clr_on_read_mode_mask            0x10


#define rx_dc_enable_cm_coarse_cal_addr               0b100101111
#define rx_dc_enable_cm_coarse_cal_startbit           0
#define rx_dc_enable_cm_coarse_cal_width              1
#define rx_dc_enable_cm_coarse_cal_endbit             0
#define rx_dc_enable_cm_coarse_cal_shift              15
#define rx_dc_enable_cm_coarse_cal_mask               0x8000


#define rx_dc_enable_cm_fine_cal_addr                 0b100101111
#define rx_dc_enable_cm_fine_cal_startbit             1
#define rx_dc_enable_cm_fine_cal_width                1
#define rx_dc_enable_cm_fine_cal_endbit               1
#define rx_dc_enable_cm_fine_cal_shift                14
#define rx_dc_enable_cm_fine_cal_mask                 0x4000


#define rx_dc_enable_ctle_1st_latch_offset_cal_addr   0b100101111
#define rx_dc_enable_ctle_1st_latch_offset_cal_startbit   2
#define rx_dc_enable_ctle_1st_latch_offset_cal_width      1
#define rx_dc_enable_ctle_1st_latch_offset_cal_endbit     2
#define rx_dc_enable_ctle_1st_latch_offset_cal_shift      13
#define rx_dc_enable_ctle_1st_latch_offset_cal_mask   0x2000


#define rx_dc_enable_ctle_2nd_latch_offset_cal_addr   0b100101111
#define rx_dc_enable_ctle_2nd_latch_offset_cal_startbit   3
#define rx_dc_enable_ctle_2nd_latch_offset_cal_width      1
#define rx_dc_enable_ctle_2nd_latch_offset_cal_endbit     3
#define rx_dc_enable_ctle_2nd_latch_offset_cal_shift      12
#define rx_dc_enable_ctle_2nd_latch_offset_cal_mask   0x1000


#define rx_dc_enable_integ_latch_offset_cal_addr      0b100101111
#define rx_dc_enable_integ_latch_offset_cal_startbit      4
#define rx_dc_enable_integ_latch_offset_cal_width     1
#define rx_dc_enable_integ_latch_offset_cal_endbit    4
#define rx_dc_enable_integ_latch_offset_cal_shift     11
#define rx_dc_enable_integ_latch_offset_cal_mask      0x800


#define rx_ddc_cfg_addr                               0b001000110
#define rx_ddc_cfg_startbit                           5
#define rx_ddc_cfg_width                              2
#define rx_ddc_cfg_endbit                             6
#define rx_ddc_cfg_shift                              9
#define rx_ddc_cfg_mask                               0x600


#define rx_dfe_ca_cfg_addr                            0b100000011
#define rx_dfe_ca_cfg_startbit                        0
#define rx_dfe_ca_cfg_width                           2
#define rx_dfe_ca_cfg_endbit                          1
#define rx_dfe_ca_cfg_shift                           14
#define rx_dfe_ca_cfg_mask                            0xc000


#define rx_dfe_converged_cnt_max_addr                 0b100010101
#define rx_dfe_converged_cnt_max_startbit             0
#define rx_dfe_converged_cnt_max_width                4
#define rx_dfe_converged_cnt_max_endbit               3
#define rx_dfe_converged_cnt_max_shift                12
#define rx_dfe_converged_cnt_max_mask                 0xf000


#define rx_disable_h1_clear_addr                      0b100001101
#define rx_disable_h1_clear_startbit                  11
#define rx_disable_h1_clear_width                     1
#define rx_disable_h1_clear_endbit                    11
#define rx_disable_h1_clear_shift                     4
#define rx_disable_h1_clear_mask                      0x10


#define rx_eo_converged_end_count_addr                0b100000111
#define rx_eo_converged_end_count_startbit            0
#define rx_eo_converged_end_count_width               4
#define rx_eo_converged_end_count_endbit              3
#define rx_eo_converged_end_count_shift               12
#define rx_eo_converged_end_count_mask                0xf000


#define rx_eo_enable_VGA_amax_mode_addr               0b100101101
#define rx_eo_enable_VGA_amax_mode_startbit           2
#define rx_eo_enable_VGA_amax_mode_width              1
#define rx_eo_enable_VGA_amax_mode_endbit             2
#define rx_eo_enable_VGA_amax_mode_shift              13
#define rx_eo_enable_VGA_amax_mode_mask               0x2000


#define rx_eo_enable_cm_coarse_cal_addr               0b100010110
#define rx_eo_enable_cm_coarse_cal_startbit           7
#define rx_eo_enable_cm_coarse_cal_width              1
#define rx_eo_enable_cm_coarse_cal_endbit             7
#define rx_eo_enable_cm_coarse_cal_shift              8
#define rx_eo_enable_cm_coarse_cal_mask               0x100


#define rx_eo_enable_cm_fine_cal_addr                 0b100010110
#define rx_eo_enable_cm_fine_cal_startbit             8
#define rx_eo_enable_cm_fine_cal_width                1
#define rx_eo_enable_cm_fine_cal_endbit               8
#define rx_eo_enable_cm_fine_cal_shift                7
#define rx_eo_enable_cm_fine_cal_mask                 0x80


#define rx_eo_enable_ctle_1st_latch_offset_cal_addr   0b100101101
#define rx_eo_enable_ctle_1st_latch_offset_cal_startbit   0
#define rx_eo_enable_ctle_1st_latch_offset_cal_width      1
#define rx_eo_enable_ctle_1st_latch_offset_cal_endbit     0
#define rx_eo_enable_ctle_1st_latch_offset_cal_shift      15
#define rx_eo_enable_ctle_1st_latch_offset_cal_mask   0x8000


#define rx_eo_enable_ctle_2nd_latch_offset_cal_addr   0b100101101
#define rx_eo_enable_ctle_2nd_latch_offset_cal_startbit   1
#define rx_eo_enable_ctle_2nd_latch_offset_cal_width      1
#define rx_eo_enable_ctle_2nd_latch_offset_cal_endbit     1
#define rx_eo_enable_ctle_2nd_latch_offset_cal_shift      14
#define rx_eo_enable_ctle_2nd_latch_offset_cal_mask   0x4000


#define rx_eo_enable_ctle_coarse_cal_addr             0b100010110
#define rx_eo_enable_ctle_coarse_cal_startbit         1
#define rx_eo_enable_ctle_coarse_cal_width            1
#define rx_eo_enable_ctle_coarse_cal_endbit           1
#define rx_eo_enable_ctle_coarse_cal_shift            14
#define rx_eo_enable_ctle_coarse_cal_mask             0x4000


#define rx_eo_enable_dac_h1_cal_addr                  0b100010110
#define rx_eo_enable_dac_h1_cal_startbit              2
#define rx_eo_enable_dac_h1_cal_width                 1
#define rx_eo_enable_dac_h1_cal_endbit                2
#define rx_eo_enable_dac_h1_cal_shift                 13
#define rx_eo_enable_dac_h1_cal_mask                  0x2000


#define rx_eo_enable_ddc_addr                         0b100010110
#define rx_eo_enable_ddc_startbit                     6
#define rx_eo_enable_ddc_width                        1
#define rx_eo_enable_ddc_endbit                       6
#define rx_eo_enable_ddc_shift                        9
#define rx_eo_enable_ddc_mask                         0x200


#define rx_eo_enable_dfe_h1_cal_addr                  0b100010110
#define rx_eo_enable_dfe_h1_cal_startbit              4
#define rx_eo_enable_dfe_h1_cal_width                 1
#define rx_eo_enable_dfe_h1_cal_endbit                4
#define rx_eo_enable_dfe_h1_cal_shift                 11
#define rx_eo_enable_dfe_h1_cal_mask                  0x800


#define rx_eo_enable_h1ap_tweak_addr                  0b100010110
#define rx_eo_enable_h1ap_tweak_startbit              5
#define rx_eo_enable_h1ap_tweak_width                 1
#define rx_eo_enable_h1ap_tweak_endbit                5
#define rx_eo_enable_h1ap_tweak_shift                 10
#define rx_eo_enable_h1ap_tweak_mask                  0x400


#define rx_eo_enable_integ_latch_offset_cal_addr      0b100010110
#define rx_eo_enable_integ_latch_offset_cal_startbit      0
#define rx_eo_enable_integ_latch_offset_cal_width     1
#define rx_eo_enable_integ_latch_offset_cal_endbit    0
#define rx_eo_enable_integ_latch_offset_cal_shift     15
#define rx_eo_enable_integ_latch_offset_cal_mask      0x8000


#define rx_eo_enable_vga_cal_addr                     0b100010110
#define rx_eo_enable_vga_cal_startbit                 3
#define rx_eo_enable_vga_cal_width                    1
#define rx_eo_enable_vga_cal_endbit                   3
#define rx_eo_enable_vga_cal_shift                    12
#define rx_eo_enable_vga_cal_mask                     0x1000


#define rx_eye_opt_state_addr                         0b101010111
#define rx_eye_opt_state_startbit                     0
#define rx_eye_opt_state_width                        12
#define rx_eye_opt_state_endbit                       11
#define rx_eye_opt_state_shift                        4
#define rx_eye_opt_state_mask                         0xfff0


#define rx_fifo_dly_cfg_addr                          0b001000110
#define rx_fifo_dly_cfg_startbit                      3
#define rx_fifo_dly_cfg_width                         2
#define rx_fifo_dly_cfg_endbit                        4
#define rx_fifo_dly_cfg_shift                         11
#define rx_fifo_dly_cfg_mask                          0x1800


#define rx_filter_mode_addr                           0b100001101
#define rx_filter_mode_startbit                       7
#define rx_filter_mode_width                          2
#define rx_filter_mode_endbit                         8
#define rx_filter_mode_shift                          7
#define rx_filter_mode_mask                           0x180


#define rx_fir_msg_addr                               0b111111111
#define rx_fir_msg_startbit                           0
#define rx_fir_msg_width                              8
#define rx_fir_msg_endbit                             7
#define rx_fir_msg_shift                              8
#define rx_fir_msg_mask                               0xff00


#define rx_fir_reset_addr                             0b101010110
#define rx_fir_reset_startbit                         15
#define rx_fir_reset_width                            1
#define rx_fir_reset_endbit                           15
#define rx_fir_reset_shift                            0
#define rx_fir_reset_mask                             0x1


#define rx_h1ap_cfg_addr                              0b100011001
#define rx_h1ap_cfg_startbit                          0
#define rx_h1ap_cfg_width                             2
#define rx_h1ap_cfg_endbit                            1
#define rx_h1ap_cfg_shift                             14
#define rx_h1ap_cfg_mask                              0xc000


#define rx_hist_min_eye_height_addr                   0b100101000
#define rx_hist_min_eye_height_startbit               6
#define rx_hist_min_eye_height_width                  8
#define rx_hist_min_eye_height_endbit                 13
#define rx_hist_min_eye_height_shift                  2
#define rx_hist_min_eye_height_mask                   0x3fc


#define rx_hist_min_eye_height_lane_addr              0b100101000
#define rx_hist_min_eye_height_lane_startbit          1
#define rx_hist_min_eye_height_lane_width             5
#define rx_hist_min_eye_height_lane_endbit            5
#define rx_hist_min_eye_height_lane_shift             10
#define rx_hist_min_eye_height_lane_mask              0x7c00


#define rx_hist_min_eye_height_mode_addr              0b100000111
#define rx_hist_min_eye_height_mode_startbit          6
#define rx_hist_min_eye_height_mode_width             2
#define rx_hist_min_eye_height_mode_endbit            7
#define rx_hist_min_eye_height_mode_shift             8
#define rx_hist_min_eye_height_mode_mask              0x300


#define rx_hist_min_eye_height_valid_addr             0b100101000
#define rx_hist_min_eye_height_valid_startbit         0
#define rx_hist_min_eye_height_valid_width            1
#define rx_hist_min_eye_height_valid_endbit           0
#define rx_hist_min_eye_height_valid_shift            15
#define rx_hist_min_eye_height_valid_mask             0x8000


#define rx_hist_min_eye_width_addr                    0b100100111
#define rx_hist_min_eye_width_startbit                6
#define rx_hist_min_eye_width_width                   8
#define rx_hist_min_eye_width_endbit                  13
#define rx_hist_min_eye_width_shift                   2
#define rx_hist_min_eye_width_mask                    0x3fc


#define rx_hist_min_eye_width_lane_addr               0b100100111
#define rx_hist_min_eye_width_lane_startbit           1
#define rx_hist_min_eye_width_lane_width              5
#define rx_hist_min_eye_width_lane_endbit             5
#define rx_hist_min_eye_width_lane_shift              10
#define rx_hist_min_eye_width_lane_mask               0x7c00


#define rx_hist_min_eye_width_mode_addr               0b100000111
#define rx_hist_min_eye_width_mode_startbit           4
#define rx_hist_min_eye_width_mode_width              2
#define rx_hist_min_eye_width_mode_endbit             5
#define rx_hist_min_eye_width_mode_shift              10
#define rx_hist_min_eye_width_mode_mask               0xc00


#define rx_hist_min_eye_width_valid_addr              0b100100111
#define rx_hist_min_eye_width_valid_startbit          0
#define rx_hist_min_eye_width_valid_width             1
#define rx_hist_min_eye_width_valid_endbit            0
#define rx_hist_min_eye_width_valid_shift             15
#define rx_hist_min_eye_width_valid_mask              0x8000


#define rx_int_current_state_addr                     0b100011101
#define rx_int_current_state_startbit                 4
#define rx_int_current_state_width                    12
#define rx_int_current_state_endbit                   15
#define rx_int_current_state_shift                    0
#define rx_int_current_state_mask                     0xfff


#define rx_int_enable_enc_addr                        0b100011110
#define rx_int_enable_enc_startbit                    0
#define rx_int_enable_enc_width                       4
#define rx_int_enable_enc_endbit                      3
#define rx_int_enable_enc_shift                       12
#define rx_int_enable_enc_mask                        0xf000


#define rx_int_goto_state_addr                        0b100011111
#define rx_int_goto_state_startbit                    4
#define rx_int_goto_state_width                       12
#define rx_int_goto_state_endbit                      15
#define rx_int_goto_state_shift                       0
#define rx_int_goto_state_mask                        0xfff


#define rx_int_mode_addr                              0b100011101
#define rx_int_mode_startbit                          0
#define rx_int_mode_width                             4
#define rx_int_mode_endbit                            3
#define rx_int_mode_shift                             12
#define rx_int_mode_mask                              0xf000


#define rx_int_next_state_addr                        0b100011110
#define rx_int_next_state_startbit                    4
#define rx_int_next_state_width                       12
#define rx_int_next_state_endbit                      15
#define rx_int_next_state_shift                       0
#define rx_int_next_state_mask                        0xfff


#define rx_int_req_addr                               0b101011010
#define rx_int_req_startbit                           0
#define rx_int_req_width                              16
#define rx_int_req_endbit                             15
#define rx_int_req_shift                              0
#define rx_int_req_mask                               0xffff


#define rx_int_return_addr                            0b101011110
#define rx_int_return_startbit                        1
#define rx_int_return_width                           1
#define rx_int_return_endbit                          1
#define rx_int_return_shift                           14
#define rx_int_return_mask                            0x4000


#define rx_int_return_state_addr                      0b100100000
#define rx_int_return_state_startbit                  4
#define rx_int_return_state_width                     12
#define rx_int_return_state_endbit                    15
#define rx_int_return_state_shift                     0
#define rx_int_return_state_mask                      0xfff


#define rx_intr_msg_addr                              0b111111110
#define rx_intr_msg_startbit                          0
#define rx_intr_msg_width                             16
#define rx_intr_msg_endbit                            15
#define rx_intr_msg_shift                             0
#define rx_intr_msg_mask                              0xffff

#define rx_dac_cntl1_eo_pl_addr                       0b000000001
#define rx_dac_cntl1_eo_pl_startbit                   0
#define rx_dac_cntl1_eo_pl_width                      16
#define rx_dac_cntl1_eo_pl_endbit                     15
#define rx_dac_cntl1_eo_pl_shift                      0
#define rx_dac_cntl1_eo_pl_mask                       0xffff


#define rx_lane_ana_pdwn_addr                         0b000000001
#define rx_lane_ana_pdwn_startbit                     6
#define rx_lane_ana_pdwn_width                        1
#define rx_lane_ana_pdwn_endbit                       6
#define rx_lane_ana_pdwn_shift                        9
#define rx_lane_ana_pdwn_mask                         0x200


#define rx_lane_currently_initializing_addr           0b101011011
#define rx_lane_currently_initializing_startbit       0
#define rx_lane_currently_initializing_width          1
#define rx_lane_currently_initializing_endbit         0
#define rx_lane_currently_initializing_shift          15
#define rx_lane_currently_initializing_mask           0x8000


#define rx_lane_currently_recalibrating_addr          0b101011011
#define rx_lane_currently_recalibrating_startbit      1
#define rx_lane_currently_recalibrating_width         1
#define rx_lane_currently_recalibrating_endbit        1
#define rx_lane_currently_recalibrating_shift         14
#define rx_lane_currently_recalibrating_mask          0x4000


#define rx_lane_dig_pdwn_addr                         0b001000100
#define rx_lane_dig_pdwn_startbit                     0
#define rx_lane_dig_pdwn_width                        1
#define rx_lane_dig_pdwn_endbit                       0
#define rx_lane_dig_pdwn_shift                        15
#define rx_lane_dig_pdwn_mask                         0x8000


#define rx_loff_amp_en_addr                           0b100001101
#define rx_loff_amp_en_startbit                       15
#define rx_loff_amp_en_width                          1
#define rx_loff_amp_en_endbit                         15
#define rx_loff_amp_en_shift                          0
#define rx_loff_amp_en_mask                           0x1


#define rx_manual_recal_abort_addr                    0b101011110
#define rx_manual_recal_abort_startbit                2
#define rx_manual_recal_abort_width                   1
#define rx_manual_recal_abort_endbit                  2
#define rx_manual_recal_abort_shift                   13
#define rx_manual_recal_abort_mask                    0x2000


#define rx_manual_recal_continue_addr                 0b101011110
#define rx_manual_recal_continue_startbit             3
#define rx_manual_recal_continue_width                1
#define rx_manual_recal_continue_endbit               3
#define rx_manual_recal_continue_shift                12
#define rx_manual_recal_continue_mask                 0x1000


#define rx_manual_recal_done_addr                     0b101011011
#define rx_manual_recal_done_startbit                 7
#define rx_manual_recal_done_width                    1
#define rx_manual_recal_done_endbit                   7
#define rx_manual_recal_done_shift                    8
#define rx_manual_recal_done_mask                     0x100


#define rx_manual_recal_lane_addr                     0b101011101
#define rx_manual_recal_lane_startbit                 3
#define rx_manual_recal_lane_width                    5
#define rx_manual_recal_lane_endbit                   7
#define rx_manual_recal_lane_shift                    8
#define rx_manual_recal_lane_mask                     0x1f00


#define rx_manual_recal_request_addr                  0b101011101
#define rx_manual_recal_request_startbit              0
#define rx_manual_recal_request_width                 1
#define rx_manual_recal_request_endbit                0
#define rx_manual_recal_request_shift                 15
#define rx_manual_recal_request_mask                  0x8000


#define rx_min_eye_height_addr                        0b100001010
#define rx_min_eye_height_startbit                    8
#define rx_min_eye_height_width                       8
#define rx_min_eye_height_endbit                      15
#define rx_min_eye_height_shift                       0
#define rx_min_eye_height_mask                        0xff


#define rx_min_eye_width_addr                         0b100001010
#define rx_min_eye_width_startbit                     2
#define rx_min_eye_width_width                        6
#define rx_min_eye_width_endbit                       7
#define rx_min_eye_width_shift                        8
#define rx_min_eye_width_mask                         0x3f00


#define rx_misc_cfg_addr                              0b100001101
#define rx_misc_cfg_startbit                          9
#define rx_misc_cfg_width                             2
#define rx_misc_cfg_endbit                            10
#define rx_misc_cfg_shift                             5
#define rx_misc_cfg_mask                              0x60


#define rx_off_init_cfg_addr                          0b100001100
#define rx_off_init_cfg_startbit                      0
#define rx_off_init_cfg_width                         3
#define rx_off_init_cfg_endbit                        2
#define rx_off_init_cfg_shift                         13
#define rx_off_init_cfg_mask                          0xe000


#define rx_off_init_timeout_addr                      0b100010000
#define rx_off_init_timeout_startbit                  0
#define rx_off_init_timeout_width                     4
#define rx_off_init_timeout_endbit                    3
#define rx_off_init_timeout_shift                     12
#define rx_off_init_timeout_mask                      0xf000


#define rx_off_recal_cfg_addr                         0b100001100
#define rx_off_recal_cfg_startbit                     3
#define rx_off_recal_cfg_width                        3
#define rx_off_recal_cfg_endbit                       5
#define rx_off_recal_cfg_shift                        10
#define rx_off_recal_cfg_mask                         0x1c00


#define rx_off_recal_timeout_addr                     0b100010000
#define rx_off_recal_timeout_startbit                 4
#define rx_off_recal_timeout_width                    4
#define rx_off_recal_timeout_endbit                   7
#define rx_off_recal_timeout_shift                    8
#define rx_off_recal_timeout_mask                     0xf00


#define rx_pb_clr_par_errs_addr                       0b111110000
#define rx_pb_clr_par_errs_startbit                   14
#define rx_pb_clr_par_errs_width                      1
#define rx_pb_clr_par_errs_endbit                     14
#define rx_pb_clr_par_errs_shift                      1
#define rx_pb_clr_par_errs_mask                       0x2


#define rx_pb_fir_errs_addr                           0b111110001
#define rx_pb_fir_errs_startbit                       0
#define rx_pb_fir_errs_width                          10
#define rx_pb_fir_errs_endbit                         9
#define rx_pb_fir_errs_shift                          6
#define rx_pb_fir_errs_mask                           0xffc0


#define rx_pb_fir_errs_inj_addr                       0b111110011
#define rx_pb_fir_errs_inj_startbit                   0
#define rx_pb_fir_errs_inj_width                      10
#define rx_pb_fir_errs_inj_endbit                     9
#define rx_pb_fir_errs_inj_shift                      6
#define rx_pb_fir_errs_inj_mask                       0xffc0


#define rx_pb_fir_errs_mask_addr                      0b111110010
#define rx_pb_fir_errs_mask_startbit                  0
#define rx_pb_fir_errs_mask_width                     10
#define rx_pb_fir_errs_mask_endbit                    9
#define rx_pb_fir_errs_mask_shift                     6
#define rx_pb_fir_errs_mask_mask                      0xffc0


#define rx_pb_fir_reset_addr                          0b111110000
#define rx_pb_fir_reset_startbit                      15
#define rx_pb_fir_reset_width                         1
#define rx_pb_fir_reset_endbit                        15
#define rx_pb_fir_reset_shift                         0
#define rx_pb_fir_reset_mask                          0x1


#define rx_peak_init_cfg_addr                         0b100001011
#define rx_peak_init_cfg_startbit                     6
#define rx_peak_init_cfg_width                        3
#define rx_peak_init_cfg_endbit                       8
#define rx_peak_init_cfg_shift                        7
#define rx_peak_init_cfg_mask                         0x380


#define rx_peak_init_timeout_addr                     0b100001111
#define rx_peak_init_timeout_startbit                 8
#define rx_peak_init_timeout_width                    4
#define rx_peak_init_timeout_endbit                   11
#define rx_peak_init_timeout_shift                    4
#define rx_peak_init_timeout_mask                     0xf0


#define rx_peak_recal_cfg_addr                        0b100001011
#define rx_peak_recal_cfg_startbit                    9
#define rx_peak_recal_cfg_width                       3
#define rx_peak_recal_cfg_endbit                      11
#define rx_peak_recal_cfg_shift                       4
#define rx_peak_recal_cfg_mask                        0x70


#define rx_peak_recal_timeout_addr                    0b100001111
#define rx_peak_recal_timeout_startbit                12
#define rx_peak_recal_timeout_width                   4
#define rx_peak_recal_timeout_endbit                  15
#define rx_peak_recal_timeout_shift                   0
#define rx_peak_recal_timeout_mask                    0xf


#define rx_pervasive_capt_addr                        0b100100011
#define rx_pervasive_capt_startbit                    14
#define rx_pervasive_capt_width                       1
#define rx_pervasive_capt_endbit                      14
#define rx_pervasive_capt_shift                       1
#define rx_pervasive_capt_mask                        0x2


#define rx_pg_datasm_spare_mode_0_addr                0b101110000
#define rx_pg_datasm_spare_mode_0_startbit            0
#define rx_pg_datasm_spare_mode_0_width               1
#define rx_pg_datasm_spare_mode_0_endbit              0
#define rx_pg_datasm_spare_mode_0_shift               15
#define rx_pg_datasm_spare_mode_0_mask                0x8000


#define rx_pg_datasm_spare_mode_1_addr                0b101110000
#define rx_pg_datasm_spare_mode_1_startbit            1
#define rx_pg_datasm_spare_mode_1_width               1
#define rx_pg_datasm_spare_mode_1_endbit              1
#define rx_pg_datasm_spare_mode_1_shift               14
#define rx_pg_datasm_spare_mode_1_mask                0x4000


#define rx_pg_datasm_spare_mode_2_addr                0b101110000
#define rx_pg_datasm_spare_mode_2_startbit            2
#define rx_pg_datasm_spare_mode_2_width               1
#define rx_pg_datasm_spare_mode_2_endbit              2
#define rx_pg_datasm_spare_mode_2_shift               13
#define rx_pg_datasm_spare_mode_2_mask                0x2000


#define rx_pg_datasm_spare_mode_3_addr                0b101110000
#define rx_pg_datasm_spare_mode_3_startbit            3
#define rx_pg_datasm_spare_mode_3_width               1
#define rx_pg_datasm_spare_mode_3_endbit              3
#define rx_pg_datasm_spare_mode_3_shift               12
#define rx_pg_datasm_spare_mode_3_mask                0x1000


#define rx_pg_datasm_spare_mode_4_addr                0b101110000
#define rx_pg_datasm_spare_mode_4_startbit            4
#define rx_pg_datasm_spare_mode_4_width               1
#define rx_pg_datasm_spare_mode_4_endbit              4
#define rx_pg_datasm_spare_mode_4_shift               11
#define rx_pg_datasm_spare_mode_4_mask                0x800


#define rx_pg_datasm_spare_mode_5_addr                0b101110000
#define rx_pg_datasm_spare_mode_5_startbit            5
#define rx_pg_datasm_spare_mode_5_width               1
#define rx_pg_datasm_spare_mode_5_endbit              5
#define rx_pg_datasm_spare_mode_5_shift               10
#define rx_pg_datasm_spare_mode_5_mask                0x400


#define rx_pg_datasm_spare_mode_6_addr                0b101110000
#define rx_pg_datasm_spare_mode_6_startbit            6
#define rx_pg_datasm_spare_mode_6_width               1
#define rx_pg_datasm_spare_mode_6_endbit              6
#define rx_pg_datasm_spare_mode_6_shift               9
#define rx_pg_datasm_spare_mode_6_mask                0x200


#define rx_pg_datasm_spare_mode_7_addr                0b101110000
#define rx_pg_datasm_spare_mode_7_startbit            7
#define rx_pg_datasm_spare_mode_7_width               1
#define rx_pg_datasm_spare_mode_7_endbit              7
#define rx_pg_datasm_spare_mode_7_shift               8
#define rx_pg_datasm_spare_mode_7_mask                0x100


#define rx_pg_fir1_err_inj_addr                       0b101010011
#define rx_pg_fir1_err_inj_startbit                   0
#define rx_pg_fir1_err_inj_width                      15
#define rx_pg_fir1_err_inj_endbit                     14
#define rx_pg_fir1_err_inj_shift                      1
#define rx_pg_fir1_err_inj_mask                       0xfffe


#define rx_pg_fir1_errs_mask_addr                     0b101010010
#define rx_pg_fir1_errs_mask_startbit                 0
#define rx_pg_fir1_errs_mask_width                    15
#define rx_pg_fir1_errs_mask_endbit                   14
#define rx_pg_fir1_errs_mask_shift                    1
#define rx_pg_fir1_errs_mask_mask                     0xfffe


#define rx_pg_fir_err_bist_init_state_addr            0b101010001
#define rx_pg_fir_err_bist_init_state_startbit        10
#define rx_pg_fir_err_bist_init_state_width           1
#define rx_pg_fir_err_bist_init_state_endbit          10
#define rx_pg_fir_err_bist_init_state_shift           5
#define rx_pg_fir_err_bist_init_state_mask            0x20


#define rx_pg_fir_err_bist_main_state_addr            0b101010001
#define rx_pg_fir_err_bist_main_state_startbit        9
#define rx_pg_fir_err_bist_main_state_width           1
#define rx_pg_fir_err_bist_main_state_endbit          9
#define rx_pg_fir_err_bist_main_state_shift           6
#define rx_pg_fir_err_bist_main_state_mask            0x40


#define rx_pg_fir_err_datasm_regrw_addr               0b101010001
#define rx_pg_fir_err_datasm_regrw_startbit           7
#define rx_pg_fir_err_datasm_regrw_width              1
#define rx_pg_fir_err_datasm_regrw_endbit             7
#define rx_pg_fir_err_datasm_regrw_shift              8
#define rx_pg_fir_err_datasm_regrw_mask               0x100


#define rx_pg_fir_err_datasm_regs_addr                0b101010001
#define rx_pg_fir_err_datasm_regs_startbit            6
#define rx_pg_fir_err_datasm_regs_width               1
#define rx_pg_fir_err_datasm_regs_endbit              6
#define rx_pg_fir_err_datasm_regs_shift               9
#define rx_pg_fir_err_datasm_regs_mask                0x200


#define rx_pg_fir_err_eyeopt_sm_addr                  0b101010001
#define rx_pg_fir_err_eyeopt_sm_startbit              8
#define rx_pg_fir_err_eyeopt_sm_width                 1
#define rx_pg_fir_err_eyeopt_sm_endbit                8
#define rx_pg_fir_err_eyeopt_sm_shift                 7
#define rx_pg_fir_err_eyeopt_sm_mask                  0x80


#define rx_pg_fir_err_gcr_buff_addr                   0b101010001
#define rx_pg_fir_err_gcr_buff_startbit               1
#define rx_pg_fir_err_gcr_buff_width                  1
#define rx_pg_fir_err_gcr_buff_endbit                 1
#define rx_pg_fir_err_gcr_buff_shift                  14
#define rx_pg_fir_err_gcr_buff_mask                   0x4000


#define rx_pg_fir_err_gcrs_ld_sm_addr                 0b101010001
#define rx_pg_fir_err_gcrs_ld_sm_startbit             2
#define rx_pg_fir_err_gcrs_ld_sm_width                1
#define rx_pg_fir_err_gcrs_ld_sm_endbit               2
#define rx_pg_fir_err_gcrs_ld_sm_shift                13
#define rx_pg_fir_err_gcrs_ld_sm_mask                 0x2000


#define rx_pg_fir_err_gcrs_unld_sm_addr               0b101010001
#define rx_pg_fir_err_gcrs_unld_sm_startbit           3
#define rx_pg_fir_err_gcrs_unld_sm_width              1
#define rx_pg_fir_err_gcrs_unld_sm_endbit             3
#define rx_pg_fir_err_gcrs_unld_sm_shift              12
#define rx_pg_fir_err_gcrs_unld_sm_mask               0x1000


#define rx_pg_fir_err_glbsm_regrw_addr                0b101010001
#define rx_pg_fir_err_glbsm_regrw_startbit            5
#define rx_pg_fir_err_glbsm_regrw_width               1
#define rx_pg_fir_err_glbsm_regrw_endbit              5
#define rx_pg_fir_err_glbsm_regrw_shift               10
#define rx_pg_fir_err_glbsm_regrw_mask                0x400


#define rx_pg_fir_err_glbsm_regs_addr                 0b101010001
#define rx_pg_fir_err_glbsm_regs_startbit             4
#define rx_pg_fir_err_glbsm_regs_width                1
#define rx_pg_fir_err_glbsm_regs_endbit               4
#define rx_pg_fir_err_glbsm_regs_shift                11
#define rx_pg_fir_err_glbsm_regs_mask                 0x800


#define rx_pg_fir_err_pg_regs_addr                    0b101010001
#define rx_pg_fir_err_pg_regs_startbit                0
#define rx_pg_fir_err_pg_regs_width                   1
#define rx_pg_fir_err_pg_regs_endbit                  0
#define rx_pg_fir_err_pg_regs_shift                   15
#define rx_pg_fir_err_pg_regs_mask                    0x8000


#define rx_pg_fir_err_rx_servo_sm_addr                0b101010001
#define rx_pg_fir_err_rx_servo_sm_startbit            11
#define rx_pg_fir_err_rx_servo_sm_width               1
#define rx_pg_fir_err_rx_servo_sm_endbit              11
#define rx_pg_fir_err_rx_servo_sm_shift               4
#define rx_pg_fir_err_rx_servo_sm_mask                0x10


#define rx_pg_fir_err_work_regs_addr                  0b101010001
#define rx_pg_fir_err_work_regs_startbit              12
#define rx_pg_fir_err_work_regs_width                 1
#define rx_pg_fir_err_work_regs_endbit                12
#define rx_pg_fir_err_work_regs_shift                 3
#define rx_pg_fir_err_work_regs_mask                  0x8


#define rx_pg_glbsm_spare_mode_0_addr                 0b101010000
#define rx_pg_glbsm_spare_mode_0_startbit             0
#define rx_pg_glbsm_spare_mode_0_width                1
#define rx_pg_glbsm_spare_mode_0_endbit               0
#define rx_pg_glbsm_spare_mode_0_shift                15
#define rx_pg_glbsm_spare_mode_0_mask                 0x8000


#define rx_pg_glbsm_spare_mode_1_addr                 0b101010000
#define rx_pg_glbsm_spare_mode_1_startbit             1
#define rx_pg_glbsm_spare_mode_1_width                1
#define rx_pg_glbsm_spare_mode_1_endbit               1
#define rx_pg_glbsm_spare_mode_1_shift                14
#define rx_pg_glbsm_spare_mode_1_mask                 0x4000


#define rx_pg_glbsm_spare_mode_2_addr                 0b101010000
#define rx_pg_glbsm_spare_mode_2_startbit             2
#define rx_pg_glbsm_spare_mode_2_width                1
#define rx_pg_glbsm_spare_mode_2_endbit               2
#define rx_pg_glbsm_spare_mode_2_shift                13
#define rx_pg_glbsm_spare_mode_2_mask                 0x2000


#define rx_pg_glbsm_spare_mode_3_addr                 0b101010000
#define rx_pg_glbsm_spare_mode_3_startbit             3
#define rx_pg_glbsm_spare_mode_3_width                1
#define rx_pg_glbsm_spare_mode_3_endbit               3
#define rx_pg_glbsm_spare_mode_3_shift                12
#define rx_pg_glbsm_spare_mode_3_mask                 0x1000


#define rx_pg_glbsm_spare_mode_4_addr                 0b101010000
#define rx_pg_glbsm_spare_mode_4_startbit             4
#define rx_pg_glbsm_spare_mode_4_width                1
#define rx_pg_glbsm_spare_mode_4_endbit               4
#define rx_pg_glbsm_spare_mode_4_shift                11
#define rx_pg_glbsm_spare_mode_4_mask                 0x800


#define rx_pg_glbsm_spare_mode_5_addr                 0b101010000
#define rx_pg_glbsm_spare_mode_5_startbit             5
#define rx_pg_glbsm_spare_mode_5_width                1
#define rx_pg_glbsm_spare_mode_5_endbit               5
#define rx_pg_glbsm_spare_mode_5_shift                10
#define rx_pg_glbsm_spare_mode_5_mask                 0x400


#define rx_pg_glbsm_spare_mode_6_addr                 0b101010000
#define rx_pg_glbsm_spare_mode_6_startbit             6
#define rx_pg_glbsm_spare_mode_6_width                1
#define rx_pg_glbsm_spare_mode_6_endbit               6
#define rx_pg_glbsm_spare_mode_6_shift                9
#define rx_pg_glbsm_spare_mode_6_mask                 0x200


#define rx_pg_glbsm_spare_mode_7_addr                 0b101010000
#define rx_pg_glbsm_spare_mode_7_startbit             7
#define rx_pg_glbsm_spare_mode_7_width                1
#define rx_pg_glbsm_spare_mode_7_endbit               7
#define rx_pg_glbsm_spare_mode_7_shift                8
#define rx_pg_glbsm_spare_mode_7_mask                 0x100


#define rx_pg_spare_mode_0_addr                       0b100000000
#define rx_pg_spare_mode_0_startbit                   0
#define rx_pg_spare_mode_0_width                      1
#define rx_pg_spare_mode_0_endbit                     0
#define rx_pg_spare_mode_0_shift                      15
#define rx_pg_spare_mode_0_mask                       0x8000


#define rx_pg_spare_mode_1_addr                       0b100000000
#define rx_pg_spare_mode_1_startbit                   1
#define rx_pg_spare_mode_1_width                      1
#define rx_pg_spare_mode_1_endbit                     1
#define rx_pg_spare_mode_1_shift                      14
#define rx_pg_spare_mode_1_mask                       0x4000


#define rx_pg_spare_mode_2_addr                       0b100000000
#define rx_pg_spare_mode_2_startbit                   2
#define rx_pg_spare_mode_2_width                      1
#define rx_pg_spare_mode_2_endbit                     2
#define rx_pg_spare_mode_2_shift                      13
#define rx_pg_spare_mode_2_mask                       0x2000


#define rx_pg_spare_mode_3_addr                       0b100000000
#define rx_pg_spare_mode_3_startbit                   3
#define rx_pg_spare_mode_3_width                      1
#define rx_pg_spare_mode_3_endbit                     3
#define rx_pg_spare_mode_3_shift                      12
#define rx_pg_spare_mode_3_mask                       0x1000


#define rx_pg_spare_mode_4_addr                       0b100000000
#define rx_pg_spare_mode_4_startbit                   4
#define rx_pg_spare_mode_4_width                      1
#define rx_pg_spare_mode_4_endbit                     4
#define rx_pg_spare_mode_4_shift                      11
#define rx_pg_spare_mode_4_mask                       0x800


#define rx_pl_data_dac_spare_mode_0_addr              0b000000000
#define rx_pl_data_dac_spare_mode_0_startbit          0
#define rx_pl_data_dac_spare_mode_0_width             1
#define rx_pl_data_dac_spare_mode_0_endbit            0
#define rx_pl_data_dac_spare_mode_0_shift             15
#define rx_pl_data_dac_spare_mode_0_mask              0x8000


#define rx_pl_data_dac_spare_mode_1_addr              0b000000000
#define rx_pl_data_dac_spare_mode_1_startbit          1
#define rx_pl_data_dac_spare_mode_1_width             1
#define rx_pl_data_dac_spare_mode_1_endbit            1
#define rx_pl_data_dac_spare_mode_1_shift             14
#define rx_pl_data_dac_spare_mode_1_mask              0x4000


#define rx_pl_data_dac_spare_mode_2_addr              0b000000000
#define rx_pl_data_dac_spare_mode_2_startbit          2
#define rx_pl_data_dac_spare_mode_2_width             1
#define rx_pl_data_dac_spare_mode_2_endbit            2
#define rx_pl_data_dac_spare_mode_2_shift             13
#define rx_pl_data_dac_spare_mode_2_mask              0x2000


#define rx_pl_data_dac_spare_mode_3_addr              0b000000000
#define rx_pl_data_dac_spare_mode_3_startbit          3
#define rx_pl_data_dac_spare_mode_3_width             1
#define rx_pl_data_dac_spare_mode_3_endbit            3
#define rx_pl_data_dac_spare_mode_3_shift             12
#define rx_pl_data_dac_spare_mode_3_mask              0x1000


#define rx_pl_data_dac_spare_mode_4_addr              0b000000000
#define rx_pl_data_dac_spare_mode_4_startbit          4
#define rx_pl_data_dac_spare_mode_4_width             1
#define rx_pl_data_dac_spare_mode_4_endbit            4
#define rx_pl_data_dac_spare_mode_4_shift             11
#define rx_pl_data_dac_spare_mode_4_mask              0x800


#define rx_pl_data_dac_spare_mode_5_addr              0b000000000
#define rx_pl_data_dac_spare_mode_5_startbit          5
#define rx_pl_data_dac_spare_mode_5_width             1
#define rx_pl_data_dac_spare_mode_5_endbit            5
#define rx_pl_data_dac_spare_mode_5_shift             10
#define rx_pl_data_dac_spare_mode_5_mask              0x400


#define rx_pl_data_dac_spare_mode_6_addr              0b000000000
#define rx_pl_data_dac_spare_mode_6_startbit          6
#define rx_pl_data_dac_spare_mode_6_width             1
#define rx_pl_data_dac_spare_mode_6_endbit            6
#define rx_pl_data_dac_spare_mode_6_shift             9
#define rx_pl_data_dac_spare_mode_6_mask              0x200


#define rx_pl_data_dac_spare_mode_7_addr              0b000000000
#define rx_pl_data_dac_spare_mode_7_startbit          7
#define rx_pl_data_dac_spare_mode_7_width             1
#define rx_pl_data_dac_spare_mode_7_endbit            7
#define rx_pl_data_dac_spare_mode_7_shift             8
#define rx_pl_data_dac_spare_mode_7_mask              0x100


#define rx_pl_data_work_spare_mode_0_addr             0b001110000
#define rx_pl_data_work_spare_mode_0_startbit         0
#define rx_pl_data_work_spare_mode_0_width            1
#define rx_pl_data_work_spare_mode_0_endbit           0
#define rx_pl_data_work_spare_mode_0_shift            15
#define rx_pl_data_work_spare_mode_0_mask             0x8000


#define rx_pl_data_work_spare_mode_1_addr             0b001110000
#define rx_pl_data_work_spare_mode_1_startbit         1
#define rx_pl_data_work_spare_mode_1_width            1
#define rx_pl_data_work_spare_mode_1_endbit           1
#define rx_pl_data_work_spare_mode_1_shift            14
#define rx_pl_data_work_spare_mode_1_mask             0x4000


#define rx_pl_data_work_spare_mode_2_addr             0b001110000
#define rx_pl_data_work_spare_mode_2_startbit         2
#define rx_pl_data_work_spare_mode_2_width            1
#define rx_pl_data_work_spare_mode_2_endbit           2
#define rx_pl_data_work_spare_mode_2_shift            13
#define rx_pl_data_work_spare_mode_2_mask             0x2000


#define rx_pl_data_work_spare_mode_3_addr             0b001110000
#define rx_pl_data_work_spare_mode_3_startbit         3
#define rx_pl_data_work_spare_mode_3_width            1
#define rx_pl_data_work_spare_mode_3_endbit           3
#define rx_pl_data_work_spare_mode_3_shift            12
#define rx_pl_data_work_spare_mode_3_mask             0x1000


#define rx_pl_data_work_spare_mode_4_addr             0b001110000
#define rx_pl_data_work_spare_mode_4_startbit         4
#define rx_pl_data_work_spare_mode_4_width            1
#define rx_pl_data_work_spare_mode_4_endbit           4
#define rx_pl_data_work_spare_mode_4_shift            11
#define rx_pl_data_work_spare_mode_4_mask             0x800


#define rx_pl_data_work_spare_mode_5_addr             0b001110000
#define rx_pl_data_work_spare_mode_5_startbit         5
#define rx_pl_data_work_spare_mode_5_width            1
#define rx_pl_data_work_spare_mode_5_endbit           5
#define rx_pl_data_work_spare_mode_5_shift            10
#define rx_pl_data_work_spare_mode_5_mask             0x400


#define rx_pl_data_work_spare_mode_6_addr             0b001110000
#define rx_pl_data_work_spare_mode_6_startbit         6
#define rx_pl_data_work_spare_mode_6_width            1
#define rx_pl_data_work_spare_mode_6_endbit           6
#define rx_pl_data_work_spare_mode_6_shift            9
#define rx_pl_data_work_spare_mode_6_mask             0x200


#define rx_pl_data_work_spare_mode_7_addr             0b001110000
#define rx_pl_data_work_spare_mode_7_startbit         7
#define rx_pl_data_work_spare_mode_7_width            1
#define rx_pl_data_work_spare_mode_7_endbit           7
#define rx_pl_data_work_spare_mode_7_shift            8
#define rx_pl_data_work_spare_mode_7_mask             0x100


#define rx_pl_fir_err_addr                            0b101010001
#define rx_pl_fir_err_startbit                        14
#define rx_pl_fir_err_width                           1
#define rx_pl_fir_err_endbit                          14
#define rx_pl_fir_err_shift                           1
#define rx_pl_fir_err_mask                            0x2


#define rx_pl_fir_err_inj_addr                        0b001000011
#define rx_pl_fir_err_inj_startbit                    0
#define rx_pl_fir_err_inj_width                       3
#define rx_pl_fir_err_inj_endbit                      2
#define rx_pl_fir_err_inj_shift                       13
#define rx_pl_fir_err_inj_mask                        0xe000


#define rx_pl_fir_errs_addr                           0b001000001
#define rx_pl_fir_errs_startbit                       0
#define rx_pl_fir_errs_width                          3
#define rx_pl_fir_errs_endbit                         2
#define rx_pl_fir_errs_shift                          13
#define rx_pl_fir_errs_mask                           0xe000


#define rx_pl_fir_errs_mask_addr                      0b001000010
#define rx_pl_fir_errs_mask_startbit                  0
#define rx_pl_fir_errs_mask_width                     3
#define rx_pl_fir_errs_mask_endbit                    2
#define rx_pl_fir_errs_mask_shift                     13
#define rx_pl_fir_errs_mask_mask                      0xe000


#define rx_pl_spare_mode_0_addr                       0b001000000
#define rx_pl_spare_mode_0_startbit                   0
#define rx_pl_spare_mode_0_width                      1
#define rx_pl_spare_mode_0_endbit                     0
#define rx_pl_spare_mode_0_shift                      15
#define rx_pl_spare_mode_0_mask                       0x8000


#define rx_pl_spare_mode_1_addr                       0b001000000
#define rx_pl_spare_mode_1_startbit                   1
#define rx_pl_spare_mode_1_width                      1
#define rx_pl_spare_mode_1_endbit                     1
#define rx_pl_spare_mode_1_shift                      14
#define rx_pl_spare_mode_1_mask                       0x4000


#define rx_pl_spare_mode_2_addr                       0b001000000
#define rx_pl_spare_mode_2_startbit                   2
#define rx_pl_spare_mode_2_width                      1
#define rx_pl_spare_mode_2_endbit                     2
#define rx_pl_spare_mode_2_shift                      13
#define rx_pl_spare_mode_2_mask                       0x2000


#define rx_pl_spare_mode_3_addr                       0b001000000
#define rx_pl_spare_mode_3_startbit                   3
#define rx_pl_spare_mode_3_width                      1
#define rx_pl_spare_mode_3_endbit                     3
#define rx_pl_spare_mode_3_shift                      12
#define rx_pl_spare_mode_3_mask                       0x1000


#define rx_pl_spare_mode_4_addr                       0b001000000
#define rx_pl_spare_mode_4_startbit                   4
#define rx_pl_spare_mode_4_width                      1
#define rx_pl_spare_mode_4_endbit                     4
#define rx_pl_spare_mode_4_shift                      11
#define rx_pl_spare_mode_4_mask                       0x800


#define rx_pl_spare_mode_5_addr                       0b001000000
#define rx_pl_spare_mode_5_startbit                   5
#define rx_pl_spare_mode_5_width                      1
#define rx_pl_spare_mode_5_endbit                     5
#define rx_pl_spare_mode_5_shift                      10
#define rx_pl_spare_mode_5_mask                       0x400


#define rx_pl_spare_mode_6_addr                       0b001000000
#define rx_pl_spare_mode_6_startbit                   6
#define rx_pl_spare_mode_6_width                      1
#define rx_pl_spare_mode_6_endbit                     6
#define rx_pl_spare_mode_6_shift                      9
#define rx_pl_spare_mode_6_mask                       0x200


#define rx_pl_spare_mode_7_addr                       0b001000000
#define rx_pl_spare_mode_7_startbit                   7
#define rx_pl_spare_mode_7_width                      1
#define rx_pl_spare_mode_7_endbit                     7
#define rx_pl_spare_mode_7_shift                      8
#define rx_pl_spare_mode_7_mask                       0x100


#define rx_polling_timeout_sel_addr                   0b100001000
#define rx_polling_timeout_sel_startbit               4
#define rx_polling_timeout_sel_width                  4
#define rx_polling_timeout_sel_endbit                 7
#define rx_polling_timeout_sel_shift                  8
#define rx_polling_timeout_sel_mask                   0xf00


#define rx_pr_bit_lock_done_addr                      0b001001010
#define rx_pr_bit_lock_done_startbit                  12
#define rx_pr_bit_lock_done_width                     1
#define rx_pr_bit_lock_done_endbit                    12
#define rx_pr_bit_lock_done_shift                     3
#define rx_pr_bit_lock_done_mask                      0x8


#define rx_pr_bump_sl_1step_addr                      0b001001100
#define rx_pr_bump_sl_1step_startbit                  0
#define rx_pr_bump_sl_1step_width                     1
#define rx_pr_bump_sl_1step_endbit                    0
#define rx_pr_bump_sl_1step_shift                     15
#define rx_pr_bump_sl_1step_mask                      0x8000


#define rx_pr_bump_sl_1ui_addr                        0b001001001
#define rx_pr_bump_sl_1ui_startbit                    9
#define rx_pr_bump_sl_1ui_width                       1
#define rx_pr_bump_sl_1ui_endbit                      9
#define rx_pr_bump_sl_1ui_shift                       6
#define rx_pr_bump_sl_1ui_mask                        0x40


#define rx_pr_bump_sl_1ui_done_addr                   0b001001110
#define rx_pr_bump_sl_1ui_done_startbit               8
#define rx_pr_bump_sl_1ui_done_width                  1
#define rx_pr_bump_sl_1ui_done_endbit                 8
#define rx_pr_bump_sl_1ui_done_shift                  7
#define rx_pr_bump_sl_1ui_done_mask                   0x80


#define rx_pr_bump_sr_1step_addr                      0b001001100
#define rx_pr_bump_sr_1step_startbit                  1
#define rx_pr_bump_sr_1step_width                     1
#define rx_pr_bump_sr_1step_endbit                    1
#define rx_pr_bump_sr_1step_shift                     14
#define rx_pr_bump_sr_1step_mask                      0x4000


#define rx_pr_bump_sr_1ui_addr                        0b001001001
#define rx_pr_bump_sr_1ui_startbit                    10
#define rx_pr_bump_sr_1ui_width                       1
#define rx_pr_bump_sr_1ui_endbit                      10
#define rx_pr_bump_sr_1ui_shift                       5
#define rx_pr_bump_sr_1ui_mask                        0x20


#define rx_pr_bump_sr_1ui_done_addr                   0b001001110
#define rx_pr_bump_sr_1ui_done_startbit               9
#define rx_pr_bump_sr_1ui_done_width                  1
#define rx_pr_bump_sr_1ui_done_endbit                 9
#define rx_pr_bump_sr_1ui_done_shift                  6
#define rx_pr_bump_sr_1ui_done_mask                   0x40


#define rx_pr_bump_to_edge_a_addr                     0b001001001
#define rx_pr_bump_to_edge_a_startbit                 7
#define rx_pr_bump_to_edge_a_width                    1
#define rx_pr_bump_to_edge_a_endbit                   7
#define rx_pr_bump_to_edge_a_shift                    8
#define rx_pr_bump_to_edge_a_mask                     0x100


#define rx_pr_data_a_offset_addr                      0b001001010
#define rx_pr_data_a_offset_startbit                  0
#define rx_pr_data_a_offset_width                     6
#define rx_pr_data_a_offset_endbit                    5
#define rx_pr_data_a_offset_shift                     10
#define rx_pr_data_a_offset_mask                      0xfc00


#define rx_pr_data_offset_disable_a_addr              0b001001001
#define rx_pr_data_offset_disable_a_startbit          11
#define rx_pr_data_offset_disable_a_width             1
#define rx_pr_data_offset_disable_a_endbit            11
#define rx_pr_data_offset_disable_a_shift             4
#define rx_pr_data_offset_disable_a_mask              0x10


#define rx_pr_ddc_a_addr                              0b001001001
#define rx_pr_ddc_a_startbit                          5
#define rx_pr_ddc_a_width                             1
#define rx_pr_ddc_a_endbit                            5
#define rx_pr_ddc_a_shift                             10
#define rx_pr_ddc_a_mask                              0x400


#define rx_pr_ddc_done_addr                           0b001001110
#define rx_pr_ddc_done_startbit                       5
#define rx_pr_ddc_done_width                          1
#define rx_pr_ddc_done_endbit                         5
#define rx_pr_ddc_done_shift                          10
#define rx_pr_ddc_done_mask                           0x400


#define rx_pr_ddc_failed_addr                         0b001001110
#define rx_pr_ddc_failed_startbit                     6
#define rx_pr_ddc_failed_width                        1
#define rx_pr_ddc_failed_endbit                       6
#define rx_pr_ddc_failed_shift                        9
#define rx_pr_ddc_failed_mask                         0x200


#define rx_pr_edge_track_cntl_addr                    0b001001001
#define rx_pr_edge_track_cntl_startbit                0
#define rx_pr_edge_track_cntl_width                   2
#define rx_pr_edge_track_cntl_endbit                  1
#define rx_pr_edge_track_cntl_shift                   14
#define rx_pr_edge_track_cntl_mask                    0xc000


#define rx_pr_invalid_lock_bump_size_addr             0b001001010
#define rx_pr_invalid_lock_bump_size_startbit         14
#define rx_pr_invalid_lock_bump_size_width            2
#define rx_pr_invalid_lock_bump_size_endbit           15
#define rx_pr_invalid_lock_bump_size_shift            0
#define rx_pr_invalid_lock_bump_size_mask             0x3


#define rx_pr_invalid_lock_filter_en_addr             0b001001010
#define rx_pr_invalid_lock_filter_en_startbit         13
#define rx_pr_invalid_lock_filter_en_width            1
#define rx_pr_invalid_lock_filter_en_endbit           13
#define rx_pr_invalid_lock_filter_en_shift            2
#define rx_pr_invalid_lock_filter_en_mask             0x4


#define rx_pr_left_edge_a_addr                        0b001001111
#define rx_pr_left_edge_a_startbit                    0
#define rx_pr_left_edge_a_width                       6
#define rx_pr_left_edge_a_endbit                      5
#define rx_pr_left_edge_a_shift                       10
#define rx_pr_left_edge_a_mask                        0xfc00


#define rx_pr_phase_step_addr                         0b001000101
#define rx_pr_phase_step_startbit                     12
#define rx_pr_phase_step_width                        4
#define rx_pr_phase_step_endbit                       15
#define rx_pr_phase_step_shift                        0
#define rx_pr_phase_step_mask                         0xf


#define rx_pr_right_edge_a_addr                       0b001001111
#define rx_pr_right_edge_a_startbit                   6
#define rx_pr_right_edge_a_width                      6
#define rx_pr_right_edge_a_endbit                     11
#define rx_pr_right_edge_a_shift                      4
#define rx_pr_right_edge_a_mask                       0x3f0


#define rx_pr_trace_ddc_sm_addr                       0b001001011
#define rx_pr_trace_ddc_sm_startbit                   1
#define rx_pr_trace_ddc_sm_width                      5
#define rx_pr_trace_ddc_sm_endbit                     5
#define rx_pr_trace_ddc_sm_shift                      10
#define rx_pr_trace_ddc_sm_mask                       0x7c00


#define rx_pr_trace_ddc_stop_addr                     0b001001011
#define rx_pr_trace_ddc_stop_startbit                 0
#define rx_pr_trace_ddc_stop_width                    1
#define rx_pr_trace_ddc_stop_endbit                   0
#define rx_pr_trace_ddc_stop_shift                    15
#define rx_pr_trace_ddc_stop_mask                     0x8000


#define rx_pr_trace_stopped_addr                      0b001001110
#define rx_pr_trace_stopped_startbit                  10
#define rx_pr_trace_stopped_width                     1
#define rx_pr_trace_stopped_endbit                    10
#define rx_pr_trace_stopped_shift                     5
#define rx_pr_trace_stopped_mask                      0x20


#define rx_pr_trace_wobble_sm_addr                    0b001001011
#define rx_pr_trace_wobble_sm_startbit                7
#define rx_pr_trace_wobble_sm_width                   3
#define rx_pr_trace_wobble_sm_endbit                  9
#define rx_pr_trace_wobble_sm_shift                   6
#define rx_pr_trace_wobble_sm_mask                    0x1c0


#define rx_pr_trace_wobble_stop_addr                  0b001001011
#define rx_pr_trace_wobble_stop_startbit              6
#define rx_pr_trace_wobble_stop_width                 1
#define rx_pr_trace_wobble_stop_endbit                6
#define rx_pr_trace_wobble_stop_shift                 9
#define rx_pr_trace_wobble_stop_mask                  0x200


#define rx_pr_use_dfe_clock_a_addr                    0b001001001
#define rx_pr_use_dfe_clock_a_startbit                13
#define rx_pr_use_dfe_clock_a_width                   1
#define rx_pr_use_dfe_clock_a_endbit                  13
#define rx_pr_use_dfe_clock_a_shift                   2
#define rx_pr_use_dfe_clock_a_mask                    0x4


#define rx_pr_wobble_a_addr                           0b001001001
#define rx_pr_wobble_a_startbit                       2
#define rx_pr_wobble_a_width                          1
#define rx_pr_wobble_a_endbit                         2
#define rx_pr_wobble_a_shift                          13
#define rx_pr_wobble_a_mask                           0x2000


#define rx_pr_wobble_a_ip_addr                        0b001001110
#define rx_pr_wobble_a_ip_startbit                    2
#define rx_pr_wobble_a_ip_width                       1
#define rx_pr_wobble_a_ip_endbit                      2
#define rx_pr_wobble_a_ip_shift                       13
#define rx_pr_wobble_a_ip_mask                        0x2000


#define rx_prbs_test_data_addr                        0b000000001
#define rx_prbs_test_data_startbit                    7
#define rx_prbs_test_data_width                       3
#define rx_prbs_test_data_endbit                      9
#define rx_prbs_test_data_shift                       6
#define rx_prbs_test_data_mask                        0x1c0


#define rx_prvcpt_change_det_addr                     0b101111000
#define rx_prvcpt_change_det_startbit                 15
#define rx_prvcpt_change_det_width                    1
#define rx_prvcpt_change_det_endbit                   15
#define rx_prvcpt_change_det_shift                    0
#define rx_prvcpt_change_det_mask                     0x1


#define rx_psave_mode_active_addr                     0b001001101
#define rx_psave_mode_active_startbit                 8
#define rx_psave_mode_active_width                    1
#define rx_psave_mode_active_endbit                   8
#define rx_psave_mode_active_shift                    7
#define rx_psave_mode_active_mask                     0x80


#define rx_rc_enable_VGA_amax_mode_addr               0b100101110
#define rx_rc_enable_VGA_amax_mode_startbit           2
#define rx_rc_enable_VGA_amax_mode_width              1
#define rx_rc_enable_VGA_amax_mode_endbit             2
#define rx_rc_enable_VGA_amax_mode_shift              13
#define rx_rc_enable_VGA_amax_mode_mask               0x2000


#define rx_rc_enable_cm_coarse_cal_addr               0b100010111
#define rx_rc_enable_cm_coarse_cal_startbit           7
#define rx_rc_enable_cm_coarse_cal_width              1
#define rx_rc_enable_cm_coarse_cal_endbit             7
#define rx_rc_enable_cm_coarse_cal_shift              8
#define rx_rc_enable_cm_coarse_cal_mask               0x100


#define rx_rc_enable_cm_fine_cal_addr                 0b100010111
#define rx_rc_enable_cm_fine_cal_startbit             8
#define rx_rc_enable_cm_fine_cal_width                1
#define rx_rc_enable_cm_fine_cal_endbit               8
#define rx_rc_enable_cm_fine_cal_shift                7
#define rx_rc_enable_cm_fine_cal_mask                 0x80


#define rx_rc_enable_ctle_1st_latch_offset_cal_addr   0b100101110
#define rx_rc_enable_ctle_1st_latch_offset_cal_startbit   0
#define rx_rc_enable_ctle_1st_latch_offset_cal_width      1
#define rx_rc_enable_ctle_1st_latch_offset_cal_endbit     0
#define rx_rc_enable_ctle_1st_latch_offset_cal_shift      15
#define rx_rc_enable_ctle_1st_latch_offset_cal_mask   0x8000


#define rx_rc_enable_ctle_2nd_latch_offset_cal_addr   0b100101110
#define rx_rc_enable_ctle_2nd_latch_offset_cal_startbit   1
#define rx_rc_enable_ctle_2nd_latch_offset_cal_width      1
#define rx_rc_enable_ctle_2nd_latch_offset_cal_endbit     1
#define rx_rc_enable_ctle_2nd_latch_offset_cal_shift      14
#define rx_rc_enable_ctle_2nd_latch_offset_cal_mask   0x4000


#define rx_rc_enable_ctle_coarse_cal_addr             0b100010111
#define rx_rc_enable_ctle_coarse_cal_startbit         1
#define rx_rc_enable_ctle_coarse_cal_width            1
#define rx_rc_enable_ctle_coarse_cal_endbit           1
#define rx_rc_enable_ctle_coarse_cal_shift            14
#define rx_rc_enable_ctle_coarse_cal_mask             0x4000


#define rx_rc_enable_dac_h1_cal_addr                  0b100010111
#define rx_rc_enable_dac_h1_cal_startbit              2
#define rx_rc_enable_dac_h1_cal_width                 1
#define rx_rc_enable_dac_h1_cal_endbit                2
#define rx_rc_enable_dac_h1_cal_shift                 13
#define rx_rc_enable_dac_h1_cal_mask                  0x2000


#define rx_rc_enable_ddc_addr                         0b100010111
#define rx_rc_enable_ddc_startbit                     6
#define rx_rc_enable_ddc_width                        1
#define rx_rc_enable_ddc_endbit                       6
#define rx_rc_enable_ddc_shift                        9
#define rx_rc_enable_ddc_mask                         0x200


#define rx_rc_enable_dfe_h1_cal_addr                  0b100010111
#define rx_rc_enable_dfe_h1_cal_startbit              4
#define rx_rc_enable_dfe_h1_cal_width                 1
#define rx_rc_enable_dfe_h1_cal_endbit                4
#define rx_rc_enable_dfe_h1_cal_shift                 11
#define rx_rc_enable_dfe_h1_cal_mask                  0x800


#define rx_rc_enable_h1ap_tweak_addr                  0b100010111
#define rx_rc_enable_h1ap_tweak_startbit              5
#define rx_rc_enable_h1ap_tweak_width                 1
#define rx_rc_enable_h1ap_tweak_endbit                5
#define rx_rc_enable_h1ap_tweak_shift                 10
#define rx_rc_enable_h1ap_tweak_mask                  0x400


#define rx_rc_enable_integ_latch_offset_cal_addr      0b100010111
#define rx_rc_enable_integ_latch_offset_cal_startbit      0
#define rx_rc_enable_integ_latch_offset_cal_width     1
#define rx_rc_enable_integ_latch_offset_cal_endbit    0
#define rx_rc_enable_integ_latch_offset_cal_shift     15
#define rx_rc_enable_integ_latch_offset_cal_mask      0x8000


#define rx_rc_enable_vga_cal_addr                     0b100010111
#define rx_rc_enable_vga_cal_startbit                 3
#define rx_rc_enable_vga_cal_width                    1
#define rx_rc_enable_vga_cal_endbit                   3
#define rx_rc_enable_vga_cal_shift                    12
#define rx_rc_enable_vga_cal_mask                     0x1000


#define rx_recal_cnt_addr                             0b101011000
#define rx_recal_cnt_startbit                         0
#define rx_recal_cnt_width                            16
#define rx_recal_cnt_endbit                           15
#define rx_recal_cnt_shift                            0
#define rx_recal_cnt_mask                             0xffff


#define rx_recal_lane_to_monitor_addr                 0b101011100
#define rx_recal_lane_to_monitor_startbit             2
#define rx_recal_lane_to_monitor_width                5
#define rx_recal_lane_to_monitor_endbit               6
#define rx_recal_lane_to_monitor_shift                9
#define rx_recal_lane_to_monitor_mask                 0x3e00


#define rx_reset_servo_status_addr                    0b101110001
#define rx_reset_servo_status_startbit                5
#define rx_reset_servo_status_width                   1
#define rx_reset_servo_status_endbit                  5
#define rx_reset_servo_status_shift                   10
#define rx_reset_servo_status_mask                    0x400


#define rx_scan_n_0_15_addr                           0b101111100
#define rx_scan_n_0_15_startbit                       0
#define rx_scan_n_0_15_width                          16
#define rx_scan_n_0_15_endbit                         15
#define rx_scan_n_0_15_shift                          0
#define rx_scan_n_0_15_mask                           0xffff


#define rx_scan_n_16_23_addr                          0b101111011
#define rx_scan_n_16_23_startbit                      8
#define rx_scan_n_16_23_width                         8
#define rx_scan_n_16_23_endbit                        15
#define rx_scan_n_16_23_shift                         0
#define rx_scan_n_16_23_mask                          0xff


#define rx_scan_p_0_15_addr                           0b101111001
#define rx_scan_p_0_15_startbit                       0
#define rx_scan_p_0_15_width                          16
#define rx_scan_p_0_15_endbit                         15
#define rx_scan_p_0_15_shift                          0
#define rx_scan_p_0_15_mask                           0xffff


#define rx_scan_p_16_23_addr                          0b101111010
#define rx_scan_p_16_23_startbit                      0
#define rx_scan_p_16_23_width                         9
#define rx_scan_p_16_23_endbit                        8
#define rx_scan_p_16_23_shift                         7
#define rx_scan_p_16_23_mask                          0xff80


#define rx_scope_capture_addr                         0b101110001
#define rx_scope_capture_startbit                     3
#define rx_scope_capture_width                        1
#define rx_scope_capture_endbit                       3
#define rx_scope_capture_shift                        12
#define rx_scope_capture_mask                         0x1000


#define rx_scope_control_addr                         0b100000011
#define rx_scope_control_startbit                     2
#define rx_scope_control_width                        4
#define rx_scope_control_endbit                       5
#define rx_scope_control_shift                        10
#define rx_scope_control_mask                         0x3c00


#define rx_servo_chg_cfg_addr                         0b100001101
#define rx_servo_chg_cfg_startbit                     0
#define rx_servo_chg_cfg_width                        4
#define rx_servo_chg_cfg_endbit                       3
#define rx_servo_chg_cfg_shift                        12
#define rx_servo_chg_cfg_mask                         0xf000


#define rx_servo_chg_cnt_addr                         0b101111000
#define rx_servo_chg_cnt_startbit                     0
#define rx_servo_chg_cnt_width                        4
#define rx_servo_chg_cnt_endbit                       3
#define rx_servo_chg_cnt_shift                        12
#define rx_servo_chg_cnt_mask                         0xf000


#define rx_servo_config_addr                          0b101110000
#define rx_servo_config_startbit                      8
#define rx_servo_config_width                         4
#define rx_servo_config_endbit                        11
#define rx_servo_config_shift                         4
#define rx_servo_config_mask                          0xf0


#define rx_servo_done_addr                            0b100100010
#define rx_servo_done_startbit                        15
#define rx_servo_done_width                           1
#define rx_servo_done_endbit                          15
#define rx_servo_done_shift                           0
#define rx_servo_done_mask                            0x1


#define rx_servo_op_addr                              0b100100010
#define rx_servo_op_startbit                          0
#define rx_servo_op_width                             15
#define rx_servo_op_endbit                            14
#define rx_servo_op_shift                             1
#define rx_servo_op_mask                              0xfffe


#define rx_servo_result_addr                          0b100101010
#define rx_servo_result_startbit                      0
#define rx_servo_result_width                         8
#define rx_servo_result_endbit                        7
#define rx_servo_result_shift                         8
#define rx_servo_result_mask                          0xff00


#define rx_servo_status_addr                          0b101110111
#define rx_servo_status_startbit                      0
#define rx_servo_status_width                         16
#define rx_servo_status_endbit                        15
#define rx_servo_status_shift                         0
#define rx_servo_status_mask                          0xffff


#define rx_servo_thresh1_addr                         0b100001110
#define rx_servo_thresh1_startbit                     8
#define rx_servo_thresh1_width                        4
#define rx_servo_thresh1_endbit                       11
#define rx_servo_thresh1_shift                        4
#define rx_servo_thresh1_mask                         0xf0


#define rx_servo_thresh2_addr                         0b100001110
#define rx_servo_thresh2_startbit                     12
#define rx_servo_thresh2_width                        4
#define rx_servo_thresh2_endbit                       15
#define rx_servo_thresh2_shift                        0
#define rx_servo_thresh2_mask                         0xf


#define rx_spare4_timeout_addr                        0b100010001
#define rx_spare4_timeout_startbit                    12
#define rx_spare4_timeout_width                       4
#define rx_spare4_timeout_endbit                      15
#define rx_spare4_timeout_shift                       0
#define rx_spare4_timeout_mask                        0xf


#define rx_tracking_timeout_sel_addr                  0b100000110
#define rx_tracking_timeout_sel_startbit              8
#define rx_tracking_timeout_sel_width                 4
#define rx_tracking_timeout_sel_endbit                11
#define rx_tracking_timeout_sel_shift                 4
#define rx_tracking_timeout_sel_mask                  0xf0


#define rx_trc_mode_addr                              0b100011100
#define rx_trc_mode_startbit                          0
#define rx_trc_mode_width                             4
#define rx_trc_mode_endbit                            3
#define rx_trc_mode_shift                             12
#define rx_trc_mode_mask                              0xf000


#define rx_user_filter_mask_addr                      0b100011001
#define rx_user_filter_mask_startbit                  8
#define rx_user_filter_mask_width                     8
#define rx_user_filter_mask_endbit                    15
#define rx_user_filter_mask_shift                     0
#define rx_user_filter_mask_mask                      0xff


#define rx_userdef_cfg_addr                           0b100001100
#define rx_userdef_cfg_startbit                       12
#define rx_userdef_cfg_width                          4
#define rx_userdef_cfg_endbit                         15
#define rx_userdef_cfg_shift                          0
#define rx_userdef_cfg_mask                           0xf


#define rx_userdef_timeout_addr                       0b100010001
#define rx_userdef_timeout_startbit                   4
#define rx_userdef_timeout_width                      4
#define rx_userdef_timeout_endbit                     7
#define rx_userdef_timeout_shift                      8
#define rx_userdef_timeout_mask                       0xf00


#define rx_voff_cfg_addr                              0b100001101
#define rx_voff_cfg_startbit                          12
#define rx_voff_cfg_width                             3
#define rx_voff_cfg_endbit                            14
#define rx_voff_cfg_shift                             1
#define rx_voff_cfg_mask                              0xe


#define scom_mode_pb_spares1_addr                     0b000100000
#define scom_mode_pb_spares1_startbit                 4
#define scom_mode_pb_spares1_width                    4
#define scom_mode_pb_spares1_endbit                   7
#define scom_mode_pb_spares1_shift                    8
#define scom_mode_pb_spares1_mask                     0xf00


#define scom_mode_pb_spares2_addr                     0b000100000
#define scom_mode_pb_spares2_startbit                 23
#define scom_mode_pb_spares2_width                    8
#define scom_mode_pb_spares2_endbit                   30
#define scom_mode_pb_spares2_shift                    -15
#define scom_mode_pb_spares2_mask                     0x1fe000000000000


#define scom_ppe_arb_ecc_inject_err_addr              0b000100000
#define scom_ppe_arb_ecc_inject_err_startbit          3
#define scom_ppe_arb_ecc_inject_err_width             1
#define scom_ppe_arb_ecc_inject_err_endbit            3
#define scom_ppe_arb_ecc_inject_err_shift             12
#define scom_ppe_arb_ecc_inject_err_mask              0x1000


#define scom_ppe_flags_addr                           0b000100011
#define scom_ppe_flags_startbit                       0
#define scom_ppe_flags_width                          16
#define scom_ppe_flags_endbit                         15
#define scom_ppe_flags_shift                          0
#define scom_ppe_flags_mask                           0xffff


#define scom_ppe_flags_clr_addr                       0b000100101
#define scom_ppe_flags_clr_startbit                   0
#define scom_ppe_flags_clr_width                      16
#define scom_ppe_flags_clr_endbit                     15
#define scom_ppe_flags_clr_shift                      0
#define scom_ppe_flags_clr_mask                       0xffff


#define scom_ppe_flags_set_addr                       0b000100100
#define scom_ppe_flags_set_startbit                   0
#define scom_ppe_flags_set_width                      16
#define scom_ppe_flags_set_endbit                     15
#define scom_ppe_flags_set_shift                      0
#define scom_ppe_flags_set_mask                       0xffff


#define scom_ppe_interrupt_addr                       0b000100000
#define scom_ppe_interrupt_startbit                   2
#define scom_ppe_interrupt_width                      1
#define scom_ppe_interrupt_endbit                     2
#define scom_ppe_interrupt_shift                      13
#define scom_ppe_interrupt_mask                       0x2000


#define scom_ppe_ioreset_addr                         0b000100000
#define scom_ppe_ioreset_startbit                     0
#define scom_ppe_ioreset_width                        1
#define scom_ppe_ioreset_endbit                       0
#define scom_ppe_ioreset_shift                        15
#define scom_ppe_ioreset_mask                         0x8000


#define scom_ppe_ir_edr_0_63_addr                     0b000010100
#define scom_ppe_ir_edr_0_63_startbit                 0
#define scom_ppe_ir_edr_0_63_width                    64
#define scom_ppe_ir_edr_0_63_endbit                   63
#define scom_ppe_ir_edr_0_63_shift                    -48
#define scom_ppe_ir_edr_0_63_mask                     0xffffffffffff0000


#define scom_ppe_ir_sprg0_0_63_addr                   0b000010010
#define scom_ppe_ir_sprg0_0_63_startbit               0
#define scom_ppe_ir_sprg0_0_63_width                  64
#define scom_ppe_ir_sprg0_0_63_endbit                 63
#define scom_ppe_ir_sprg0_0_63_shift                  -48
#define scom_ppe_ir_sprg0_0_63_mask                   0xffffffffffff0000


#define scom_ppe_mem_arb_csar_0_63_addr               0b000001101
#define scom_ppe_mem_arb_csar_0_63_startbit           0
#define scom_ppe_mem_arb_csar_0_63_width              64
#define scom_ppe_mem_arb_csar_0_63_endbit             63
#define scom_ppe_mem_arb_csar_0_63_shift              -48
#define scom_ppe_mem_arb_csar_0_63_mask               0xffffffffffff0000


#define scom_ppe_mem_arb_csdr_0_63_addr               0b000001110
#define scom_ppe_mem_arb_csdr_0_63_startbit           0
#define scom_ppe_mem_arb_csdr_0_63_width              64
#define scom_ppe_mem_arb_csdr_0_63_endbit             63
#define scom_ppe_mem_arb_csdr_0_63_shift              -48
#define scom_ppe_mem_arb_csdr_0_63_mask               0xffffffffffff0000


#define scom_ppe_mem_arb_scr_0_63_addr                0b000001010
#define scom_ppe_mem_arb_scr_0_63_startbit            0
#define scom_ppe_mem_arb_scr_0_63_width               64
#define scom_ppe_mem_arb_scr_0_63_endbit              63
#define scom_ppe_mem_arb_scr_0_63_shift               -48
#define scom_ppe_mem_arb_scr_0_63_mask                0xffffffffffff0000


#define scom_ppe_pdwn_addr                            0b000100000
#define scom_ppe_pdwn_startbit                        1
#define scom_ppe_pdwn_width                           1
#define scom_ppe_pdwn_endbit                          1
#define scom_ppe_pdwn_shift                           14
#define scom_ppe_pdwn_mask                            0x4000


#define scom_ppe_spares_addr                          0b000100000
#define scom_ppe_spares_startbit                      4
#define scom_ppe_spares_width                         12
#define scom_ppe_spares_endbit                        15
#define scom_ppe_spares_shift                         0
#define scom_ppe_spares_mask                          0xfff


#define scom_ppe_work1_addr                           0b000100001
#define scom_ppe_work1_startbit                       0
#define scom_ppe_work1_width                          32
#define scom_ppe_work1_endbit                         31
#define scom_ppe_work1_shift                          -16
#define scom_ppe_work1_mask                           0xffff000000000000


#define scom_ppe_work2_addr                           0b000100010
#define scom_ppe_work2_startbit                       0
#define scom_ppe_work2_width                          32
#define scom_ppe_work2_endbit                         31
#define scom_ppe_work2_shift                          -16
#define scom_ppe_work2_mask                           0xffff000000000000


#define scom_ppe_xcr_none_0_63_addr                   0b000010000
#define scom_ppe_xcr_none_0_63_startbit               0
#define scom_ppe_xcr_none_0_63_width                  64
#define scom_ppe_xcr_none_0_63_endbit                 63
#define scom_ppe_xcr_none_0_63_shift                  -48
#define scom_ppe_xcr_none_0_63_mask                   0xffffffffffff0000


#define scom_ppe_xcr_sprg0_0_63_addr                  0b000010001
#define scom_ppe_xcr_sprg0_0_63_startbit              0
#define scom_ppe_xcr_sprg0_0_63_width                 64
#define scom_ppe_xcr_sprg0_0_63_endbit                63
#define scom_ppe_xcr_sprg0_0_63_shift                 -48
#define scom_ppe_xcr_sprg0_0_63_mask                  0xffffffffffff0000


#define scom_ppe_xsr_iar_0_63_addr                    0b000010101
#define scom_ppe_xsr_iar_0_63_startbit                0
#define scom_ppe_xsr_iar_0_63_width                   64
#define scom_ppe_xsr_iar_0_63_endbit                  63
#define scom_ppe_xsr_iar_0_63_shift                   -48
#define scom_ppe_xsr_iar_0_63_mask                    0xffffffffffff0000


#define scom_ppe_xsr_sprg0_0_63_addr                  0b000010011
#define scom_ppe_xsr_sprg0_0_63_startbit              0
#define scom_ppe_xsr_sprg0_0_63_width                 64
#define scom_ppe_xsr_sprg0_0_63_endbit                63
#define scom_ppe_xsr_sprg0_0_63_shift                 -48
#define scom_ppe_xsr_sprg0_0_63_mask                  0xffffffffffff0000


#define tx_bist_done_addr                             0b110101101
#define tx_bist_done_startbit                         2
#define tx_bist_done_width                            1
#define tx_bist_done_endbit                           2
#define tx_bist_done_shift                            13
#define tx_bist_done_mask                             0x2000


#define tx_bist_en_addr                               0b110000010
#define tx_bist_en_startbit                           3
#define tx_bist_en_width                              1
#define tx_bist_en_endbit                             3
#define tx_bist_en_shift                              12
#define tx_bist_en_mask                               0x1000


#define tx_bus_id_addr                                0b110000001
#define tx_bus_id_startbit                            0
#define tx_bus_id_width                               6
#define tx_bus_id_endbit                              5
#define tx_bus_id_shift                               10
#define tx_bus_id_mask                                0xfc00


#define tx_clr_par_errs_addr                          0b110100010
#define tx_clr_par_errs_startbit                      14
#define tx_clr_par_errs_width                         1
#define tx_clr_par_errs_endbit                        14
#define tx_clr_par_errs_shift                         1
#define tx_clr_par_errs_mask                          0x2


#define tx_clr_unload_clk_disable_addr                0b010000010
#define tx_clr_unload_clk_disable_startbit            13
#define tx_clr_unload_clk_disable_width               1
#define tx_clr_unload_clk_disable_endbit              13
#define tx_clr_unload_clk_disable_shift               2
#define tx_clr_unload_clk_disable_mask                0x4


#define tx_drv_data_pattern_gcrmsg_addr               0b110000100
#define tx_drv_data_pattern_gcrmsg_startbit           2
#define tx_drv_data_pattern_gcrmsg_width              4
#define tx_drv_data_pattern_gcrmsg_endbit             5
#define tx_drv_data_pattern_gcrmsg_shift              10
#define tx_drv_data_pattern_gcrmsg_mask               0x3c00


#define tx_err_inj_A_enable_addr                      0b010000000
#define tx_err_inj_A_enable_startbit                  7
#define tx_err_inj_A_enable_width                     1
#define tx_err_inj_A_enable_endbit                    7
#define tx_err_inj_A_enable_shift                     8
#define tx_err_inj_A_enable_mask                      0x100


#define tx_err_inj_B_enable_addr                      0b010000000
#define tx_err_inj_B_enable_startbit                  8
#define tx_err_inj_B_enable_width                     1
#define tx_err_inj_B_enable_endbit                    8
#define tx_err_inj_B_enable_shift                     7
#define tx_err_inj_B_enable_mask                      0x80


#define tx_err_inj_a_ber_sel_addr                     0b110000101
#define tx_err_inj_a_ber_sel_startbit                 7
#define tx_err_inj_a_ber_sel_width                    6
#define tx_err_inj_a_ber_sel_endbit                   12
#define tx_err_inj_a_ber_sel_shift                    3
#define tx_err_inj_a_ber_sel_mask                     0x1f8


#define tx_err_inj_a_coarse_sel_addr                  0b110000101
#define tx_err_inj_a_coarse_sel_startbit              3
#define tx_err_inj_a_coarse_sel_width                 4
#define tx_err_inj_a_coarse_sel_endbit                6
#define tx_err_inj_a_coarse_sel_shift                 9
#define tx_err_inj_a_coarse_sel_mask                  0x1e00


#define tx_err_inj_a_fine_sel_addr                    0b110000101
#define tx_err_inj_a_fine_sel_startbit                0
#define tx_err_inj_a_fine_sel_width                   3
#define tx_err_inj_a_fine_sel_endbit                  2
#define tx_err_inj_a_fine_sel_shift                   13
#define tx_err_inj_a_fine_sel_mask                    0xe000


#define tx_err_inj_b_ber_sel_addr                     0b110000110
#define tx_err_inj_b_ber_sel_startbit                 7
#define tx_err_inj_b_ber_sel_width                    6
#define tx_err_inj_b_ber_sel_endbit                   12
#define tx_err_inj_b_ber_sel_shift                    3
#define tx_err_inj_b_ber_sel_mask                     0x1f8


#define tx_err_inj_b_coarse_sel_addr                  0b110000110
#define tx_err_inj_b_coarse_sel_startbit              3
#define tx_err_inj_b_coarse_sel_width                 4
#define tx_err_inj_b_coarse_sel_endbit                6
#define tx_err_inj_b_coarse_sel_shift                 9
#define tx_err_inj_b_coarse_sel_mask                  0x1e00


#define tx_err_inj_b_fine_sel_addr                    0b110000110
#define tx_err_inj_b_fine_sel_startbit                0
#define tx_err_inj_b_fine_sel_width                   3
#define tx_err_inj_b_fine_sel_endbit                  2
#define tx_err_inj_b_fine_sel_shift                   13
#define tx_err_inj_b_fine_sel_mask                    0xe000


#define tx_err_inj_clock_enable_addr                  0b110000101
#define tx_err_inj_clock_enable_startbit              14
#define tx_err_inj_clock_enable_width                 1
#define tx_err_inj_clock_enable_endbit                14
#define tx_err_inj_clock_enable_shift                 1
#define tx_err_inj_clock_enable_mask                  0x2


#define tx_err_inj_enable_addr                        0b110000101
#define tx_err_inj_enable_startbit                    13
#define tx_err_inj_enable_width                       1
#define tx_err_inj_enable_endbit                      13
#define tx_err_inj_enable_shift                       2
#define tx_err_inj_enable_mask                        0x4


#define tx_err_inject_addr                            0b010000010
#define tx_err_inject_startbit                        0
#define tx_err_inject_width                           5
#define tx_err_inject_endbit                          4
#define tx_err_inject_shift                           11
#define tx_err_inject_mask                            0xf800


#define tx_exbist_mode_addr                           0b110000010
#define tx_exbist_mode_startbit                       4
#define tx_exbist_mode_width                          1
#define tx_exbist_mode_endbit                         4
#define tx_exbist_mode_shift                          11
#define tx_exbist_mode_mask                           0x800


#define tx_ffe_boost_en_addr                          0b110100101
#define tx_ffe_boost_en_startbit                      11
#define tx_ffe_boost_en_width                         1
#define tx_ffe_boost_en_endbit                        11
#define tx_ffe_boost_en_shift                         4
#define tx_ffe_boost_en_mask                          0x10


#define tx_fifo_init_addr                             0b010000010
#define tx_fifo_init_startbit                         5
#define tx_fifo_init_width                            1
#define tx_fifo_init_endbit                           5
#define tx_fifo_init_shift                            10
#define tx_fifo_init_mask                             0x400


#define tx_fifo_l2u_dly_addr                          0b010000001
#define tx_fifo_l2u_dly_startbit                      0
#define tx_fifo_l2u_dly_width                         3
#define tx_fifo_l2u_dly_endbit                        2
#define tx_fifo_l2u_dly_shift                         13
#define tx_fifo_l2u_dly_mask                          0xe000


#define tx_fir_reset_addr                             0b110100010
#define tx_fir_reset_startbit                         15
#define tx_fir_reset_width                            1
#define tx_fir_reset_endbit                           15
#define tx_fir_reset_shift                            0
#define tx_fir_reset_mask                             0x1


#define tx_lane_bist_actvity_det_addr                 0b010000011
#define tx_lane_bist_actvity_det_startbit             1
#define tx_lane_bist_actvity_det_width                1
#define tx_lane_bist_actvity_det_endbit               1
#define tx_lane_bist_actvity_det_shift                14
#define tx_lane_bist_actvity_det_mask                 0x4000


#define tx_lane_bist_err_addr                         0b010000011
#define tx_lane_bist_err_startbit                     0
#define tx_lane_bist_err_width                        1
#define tx_lane_bist_err_endbit                       0
#define tx_lane_bist_err_shift                        15
#define tx_lane_bist_err_mask                         0x8000


#define tx_lane_invert_addr                           0b010000000
#define tx_lane_invert_startbit                       1
#define tx_lane_invert_width                          1
#define tx_lane_invert_endbit                         1
#define tx_lane_invert_shift                          14
#define tx_lane_invert_mask                           0x4000


#define tx_lane_pdwn_addr                             0b010000000
#define tx_lane_pdwn_startbit                         0
#define tx_lane_pdwn_width                            1
#define tx_lane_pdwn_endbit                           0
#define tx_lane_pdwn_shift                            15
#define tx_lane_pdwn_mask                             0x8000


#define tx_lane_quiesce_addr                          0b010000000
#define tx_lane_quiesce_startbit                      2
#define tx_lane_quiesce_width                         2
#define tx_lane_quiesce_endbit                        3
#define tx_lane_quiesce_shift                         12
#define tx_lane_quiesce_mask                          0x3000


#define tx_marginpd_sel_addr                          0b110101010
#define tx_marginpd_sel_startbit                      8
#define tx_marginpd_sel_width                         8
#define tx_marginpd_sel_endbit                        15
#define tx_marginpd_sel_shift                         0
#define tx_marginpd_sel_mask                          0xff


#define tx_marginpu_sel_addr                          0b110101010
#define tx_marginpu_sel_startbit                      0
#define tx_marginpu_sel_width                         8
#define tx_marginpu_sel_endbit                        7
#define tx_marginpu_sel_shift                         8
#define tx_marginpu_sel_mask                          0xff00


#define tx_nseg_marginpd_en_addr                      0b110101001
#define tx_nseg_marginpd_en_startbit                  8
#define tx_nseg_marginpd_en_width                     8
#define tx_nseg_marginpd_en_endbit                    15
#define tx_nseg_marginpd_en_shift                     0
#define tx_nseg_marginpd_en_mask                      0xff


#define tx_nseg_marginpu_en_addr                      0b110101001
#define tx_nseg_marginpu_en_startbit                  0
#define tx_nseg_marginpu_en_width                     8
#define tx_nseg_marginpu_en_endbit                    7
#define tx_nseg_marginpu_en_shift                     8
#define tx_nseg_marginpu_en_mask                      0xff00


#define tx_nseg_pre_en_addr                           0b110100111
#define tx_nseg_pre_en_startbit                       3
#define tx_nseg_pre_en_width                          5
#define tx_nseg_pre_en_endbit                         7
#define tx_nseg_pre_en_shift                          8
#define tx_nseg_pre_en_mask                           0x1f00


#define tx_nseg_pre_sel_addr                          0b110100111
#define tx_nseg_pre_sel_startbit                      8
#define tx_nseg_pre_sel_width                         5
#define tx_nseg_pre_sel_endbit                        12
#define tx_nseg_pre_sel_shift                         3
#define tx_nseg_pre_sel_mask                          0xf8


#define tx_pg_ctl_sm_spare_mode_0_addr                0b110100100
#define tx_pg_ctl_sm_spare_mode_0_startbit            0
#define tx_pg_ctl_sm_spare_mode_0_width               1
#define tx_pg_ctl_sm_spare_mode_0_endbit              0
#define tx_pg_ctl_sm_spare_mode_0_shift               15
#define tx_pg_ctl_sm_spare_mode_0_mask                0x8000


#define tx_pg_ctl_sm_spare_mode_1_addr                0b110100100
#define tx_pg_ctl_sm_spare_mode_1_startbit            1
#define tx_pg_ctl_sm_spare_mode_1_width               1
#define tx_pg_ctl_sm_spare_mode_1_endbit              1
#define tx_pg_ctl_sm_spare_mode_1_shift               14
#define tx_pg_ctl_sm_spare_mode_1_mask                0x4000


#define tx_pg_ctl_sm_spare_mode_2_addr                0b110100100
#define tx_pg_ctl_sm_spare_mode_2_startbit            2
#define tx_pg_ctl_sm_spare_mode_2_width               1
#define tx_pg_ctl_sm_spare_mode_2_endbit              2
#define tx_pg_ctl_sm_spare_mode_2_shift               13
#define tx_pg_ctl_sm_spare_mode_2_mask                0x2000


#define tx_pg_ctl_sm_spare_mode_3_addr                0b110100100
#define tx_pg_ctl_sm_spare_mode_3_startbit            3
#define tx_pg_ctl_sm_spare_mode_3_width               1
#define tx_pg_ctl_sm_spare_mode_3_endbit              3
#define tx_pg_ctl_sm_spare_mode_3_shift               12
#define tx_pg_ctl_sm_spare_mode_3_mask                0x1000


#define tx_pg_ctl_sm_spare_mode_4_addr                0b110100100
#define tx_pg_ctl_sm_spare_mode_4_startbit            4
#define tx_pg_ctl_sm_spare_mode_4_width               1
#define tx_pg_ctl_sm_spare_mode_4_endbit              4
#define tx_pg_ctl_sm_spare_mode_4_shift               11
#define tx_pg_ctl_sm_spare_mode_4_mask                0x800


#define tx_pg_ctl_sm_spare_mode_5_addr                0b110100100
#define tx_pg_ctl_sm_spare_mode_5_startbit            5
#define tx_pg_ctl_sm_spare_mode_5_width               1
#define tx_pg_ctl_sm_spare_mode_5_endbit              5
#define tx_pg_ctl_sm_spare_mode_5_shift               10
#define tx_pg_ctl_sm_spare_mode_5_mask                0x400


#define tx_pg_ctl_sm_spare_mode_6_addr                0b110100100
#define tx_pg_ctl_sm_spare_mode_6_startbit            6
#define tx_pg_ctl_sm_spare_mode_6_width               1
#define tx_pg_ctl_sm_spare_mode_6_endbit              6
#define tx_pg_ctl_sm_spare_mode_6_shift               9
#define tx_pg_ctl_sm_spare_mode_6_mask                0x200


#define tx_pg_ctl_sm_spare_mode_7_addr                0b110100100
#define tx_pg_ctl_sm_spare_mode_7_startbit            7
#define tx_pg_ctl_sm_spare_mode_7_width               1
#define tx_pg_ctl_sm_spare_mode_7_endbit              7
#define tx_pg_ctl_sm_spare_mode_7_shift               8
#define tx_pg_ctl_sm_spare_mode_7_mask                0x100


#define tx_pg_fir_err_ctl_regs_addr                   0b110100000
#define tx_pg_fir_err_ctl_regs_startbit               4
#define tx_pg_fir_err_ctl_regs_width                  1
#define tx_pg_fir_err_ctl_regs_endbit                 4
#define tx_pg_fir_err_ctl_regs_shift                  11
#define tx_pg_fir_err_ctl_regs_mask                   0x800


#define tx_pg_fir_err_gcr_buff_addr                   0b110100000
#define tx_pg_fir_err_gcr_buff_startbit               1
#define tx_pg_fir_err_gcr_buff_width                  1
#define tx_pg_fir_err_gcr_buff_endbit                 1
#define tx_pg_fir_err_gcr_buff_shift                  14
#define tx_pg_fir_err_gcr_buff_mask                   0x4000


#define tx_pg_fir_err_gcrs_ld_sm_addr                 0b110100000
#define tx_pg_fir_err_gcrs_ld_sm_startbit             2
#define tx_pg_fir_err_gcrs_ld_sm_width                1
#define tx_pg_fir_err_gcrs_ld_sm_endbit               2
#define tx_pg_fir_err_gcrs_ld_sm_shift                13
#define tx_pg_fir_err_gcrs_ld_sm_mask                 0x2000


#define tx_pg_fir_err_gcrs_unld_sm_addr               0b110100000
#define tx_pg_fir_err_gcrs_unld_sm_startbit           3
#define tx_pg_fir_err_gcrs_unld_sm_width              1
#define tx_pg_fir_err_gcrs_unld_sm_endbit             3
#define tx_pg_fir_err_gcrs_unld_sm_shift              12
#define tx_pg_fir_err_gcrs_unld_sm_mask               0x1000


#define tx_pg_fir_err_inj_addr                        0b110100011
#define tx_pg_fir_err_inj_startbit                    0
#define tx_pg_fir_err_inj_width                       5
#define tx_pg_fir_err_inj_endbit                      4
#define tx_pg_fir_err_inj_shift                       11
#define tx_pg_fir_err_inj_mask                        0xf800


#define tx_pg_fir_err_tx_sm_regs_addr                 0b110100000
#define tx_pg_fir_err_tx_sm_regs_startbit             0
#define tx_pg_fir_err_tx_sm_regs_width                1
#define tx_pg_fir_err_tx_sm_regs_endbit               0
#define tx_pg_fir_err_tx_sm_regs_shift                15
#define tx_pg_fir_err_tx_sm_regs_mask                 0x8000


#define tx_pg_fir_errs_mask_addr                      0b110100001
#define tx_pg_fir_errs_mask_startbit                  0
#define tx_pg_fir_errs_mask_width                     5
#define tx_pg_fir_errs_mask_endbit                    4
#define tx_pg_fir_errs_mask_shift                     11
#define tx_pg_fir_errs_mask_mask                      0xf800


#define tx_pg_spare_mode_0_addr                       0b110000000
#define tx_pg_spare_mode_0_startbit                   0
#define tx_pg_spare_mode_0_width                      1
#define tx_pg_spare_mode_0_endbit                     0
#define tx_pg_spare_mode_0_shift                      15
#define tx_pg_spare_mode_0_mask                       0x8000


#define tx_pg_spare_mode_1_addr                       0b110000000
#define tx_pg_spare_mode_1_startbit                   1
#define tx_pg_spare_mode_1_width                      1
#define tx_pg_spare_mode_1_endbit                     1
#define tx_pg_spare_mode_1_shift                      14
#define tx_pg_spare_mode_1_mask                       0x4000


#define tx_pg_spare_mode_2_addr                       0b110000000
#define tx_pg_spare_mode_2_startbit                   2
#define tx_pg_spare_mode_2_width                      1
#define tx_pg_spare_mode_2_endbit                     2
#define tx_pg_spare_mode_2_shift                      13
#define tx_pg_spare_mode_2_mask                       0x2000


#define tx_pg_spare_mode_3_addr                       0b110000000
#define tx_pg_spare_mode_3_startbit                   3
#define tx_pg_spare_mode_3_width                      1
#define tx_pg_spare_mode_3_endbit                     3
#define tx_pg_spare_mode_3_shift                      12
#define tx_pg_spare_mode_3_mask                       0x1000


#define tx_pg_spare_mode_4_addr                       0b110000000
#define tx_pg_spare_mode_4_startbit                   4
#define tx_pg_spare_mode_4_width                      1
#define tx_pg_spare_mode_4_endbit                     4
#define tx_pg_spare_mode_4_shift                      11
#define tx_pg_spare_mode_4_mask                       0x800


#define tx_pg_spare_mode_5_addr                       0b110000000
#define tx_pg_spare_mode_5_startbit                   5
#define tx_pg_spare_mode_5_width                      1
#define tx_pg_spare_mode_5_endbit                     5
#define tx_pg_spare_mode_5_shift                      10
#define tx_pg_spare_mode_5_mask                       0x400


#define tx_pg_spare_mode_6_addr                       0b110000000
#define tx_pg_spare_mode_6_startbit                   6
#define tx_pg_spare_mode_6_width                      1
#define tx_pg_spare_mode_6_endbit                     6
#define tx_pg_spare_mode_6_shift                      9
#define tx_pg_spare_mode_6_mask                       0x200


#define tx_pg_spare_mode_7_addr                       0b110000000
#define tx_pg_spare_mode_7_startbit                   7
#define tx_pg_spare_mode_7_width                      1
#define tx_pg_spare_mode_7_endbit                     7
#define tx_pg_spare_mode_7_shift                      8
#define tx_pg_spare_mode_7_mask                       0x100


#define tx_pg_spare_mode_8_9_addr                     0b110000000
#define tx_pg_spare_mode_8_9_startbit                 8
#define tx_pg_spare_mode_8_9_width                    2
#define tx_pg_spare_mode_8_9_endbit                   9
#define tx_pg_spare_mode_8_9_shift                    6
#define tx_pg_spare_mode_8_9_mask                     0xc0


#define tx_pl_fir_err_addr                            0b110100000
#define tx_pl_fir_err_startbit                        15
#define tx_pl_fir_err_width                           1
#define tx_pl_fir_err_endbit                          15
#define tx_pl_fir_err_shift                           0
#define tx_pl_fir_err_mask                            0x1


#define tx_pl_fir_err_inj_addr                        0b010000110
#define tx_pl_fir_err_inj_startbit                    0
#define tx_pl_fir_err_inj_width                       1
#define tx_pl_fir_err_inj_endbit                      0
#define tx_pl_fir_err_inj_shift                       15
#define tx_pl_fir_err_inj_mask                        0x8000


#define tx_pl_fir_err_mask_addr                       0b110100001
#define tx_pl_fir_err_mask_startbit                   15
#define tx_pl_fir_err_mask_width                      1
#define tx_pl_fir_err_mask_endbit                     15
#define tx_pl_fir_err_mask_shift                      0
#define tx_pl_fir_err_mask_mask                       0x1


#define tx_pl_fir_errs_addr                           0b010000100
#define tx_pl_fir_errs_startbit                       0
#define tx_pl_fir_errs_width                          1
#define tx_pl_fir_errs_endbit                         0
#define tx_pl_fir_errs_shift                          15
#define tx_pl_fir_errs_mask                           0x8000


#define tx_pl_fir_errs_mask_addr                      0b010000101
#define tx_pl_fir_errs_mask_startbit                  0
#define tx_pl_fir_errs_mask_width                     1
#define tx_pl_fir_errs_mask_endbit                    0
#define tx_pl_fir_errs_mask_shift                     15
#define tx_pl_fir_errs_mask_mask                      0x8000


#define tx_pl_spare_mode_0_addr                       0b010000000
#define tx_pl_spare_mode_0_startbit                   12
#define tx_pl_spare_mode_0_width                      1
#define tx_pl_spare_mode_0_endbit                     12
#define tx_pl_spare_mode_0_shift                      3
#define tx_pl_spare_mode_0_mask                       0x8


#define tx_pl_spare_mode_1_addr                       0b010000000
#define tx_pl_spare_mode_1_startbit                   13
#define tx_pl_spare_mode_1_width                      1
#define tx_pl_spare_mode_1_endbit                     13
#define tx_pl_spare_mode_1_shift                      2
#define tx_pl_spare_mode_1_mask                       0x4


#define tx_pl_spare_mode_2_addr                       0b010000000
#define tx_pl_spare_mode_2_startbit                   14
#define tx_pl_spare_mode_2_width                      1
#define tx_pl_spare_mode_2_endbit                     14
#define tx_pl_spare_mode_2_shift                      1
#define tx_pl_spare_mode_2_mask                       0x2


#define tx_pl_spare_mode_3_addr                       0b010000000
#define tx_pl_spare_mode_3_startbit                   15
#define tx_pl_spare_mode_3_width                      1
#define tx_pl_spare_mode_3_endbit                     15
#define tx_pl_spare_mode_3_shift                      0
#define tx_pl_spare_mode_3_mask                       0x1


#define tx_pseg_marginpd_en_addr                      0b110101000
#define tx_pseg_marginpd_en_startbit                  8
#define tx_pseg_marginpd_en_width                     8
#define tx_pseg_marginpd_en_endbit                    15
#define tx_pseg_marginpd_en_shift                     0
#define tx_pseg_marginpd_en_mask                      0xff


#define tx_pseg_marginpu_en_addr                      0b110101000
#define tx_pseg_marginpu_en_startbit                  0
#define tx_pseg_marginpu_en_width                     8
#define tx_pseg_marginpu_en_endbit                    7
#define tx_pseg_marginpu_en_shift                     8
#define tx_pseg_marginpu_en_mask                      0xff00


#define tx_pseg_pre_en_addr                           0b110100110
#define tx_pseg_pre_en_startbit                       3
#define tx_pseg_pre_en_width                          5
#define tx_pseg_pre_en_endbit                         7
#define tx_pseg_pre_en_shift                          8
#define tx_pseg_pre_en_mask                           0x1f00


#define tx_pseg_pre_sel_addr                          0b110100110
#define tx_pseg_pre_sel_startbit                      8
#define tx_pseg_pre_sel_width                         5
#define tx_pseg_pre_sel_endbit                        12
#define tx_pseg_pre_sel_shift                         3
#define tx_pseg_pre_sel_mask                          0xf8


#define tx_seg_test_leakage_ctrl_addr                 0b110100101
#define tx_seg_test_leakage_ctrl_startbit             13
#define tx_seg_test_leakage_ctrl_width                1
#define tx_seg_test_leakage_ctrl_endbit               13
#define tx_seg_test_leakage_ctrl_shift                2
#define tx_seg_test_leakage_ctrl_mask                 0x4


#define tx_seg_test_mode_addr                         0b110100101
#define tx_seg_test_mode_startbit                     2
#define tx_seg_test_mode_width                        8
#define tx_seg_test_mode_endbit                       9
#define tx_seg_test_mode_shift                        6
#define tx_seg_test_mode_mask                         0x3fc0


#define tx_seg_test_status_addr                       0b010000011
#define tx_seg_test_status_startbit                   2
#define tx_seg_test_status_width                      2
#define tx_seg_test_status_endbit                     3
#define tx_seg_test_status_shift                      12
#define tx_seg_test_status_mask                       0x3000


#define tx_set_unload_clk_disable_addr                0b010000010
#define tx_set_unload_clk_disable_startbit            12
#define tx_set_unload_clk_disable_width               1
#define tx_set_unload_clk_disable_endbit              12
#define tx_set_unload_clk_disable_shift               3
#define tx_set_unload_clk_disable_mask                0x8


#define tx_tdr_capt_val_addr                          0b010000011
#define tx_tdr_capt_val_startbit                      15
#define tx_tdr_capt_val_width                         1
#define tx_tdr_capt_val_endbit                        15
#define tx_tdr_capt_val_shift                         0
#define tx_tdr_capt_val_mask                          0x1


#define tx_tdr_dac_cntl_addr                          0b110011001
#define tx_tdr_dac_cntl_startbit                      0
#define tx_tdr_dac_cntl_width                         8
#define tx_tdr_dac_cntl_endbit                        7
#define tx_tdr_dac_cntl_shift                         8
#define tx_tdr_dac_cntl_mask                          0xff00


#define tx_tdr_enable_addr                            0b010001010
#define tx_tdr_enable_startbit                        0
#define tx_tdr_enable_width                           1
#define tx_tdr_enable_endbit                          0
#define tx_tdr_enable_shift                           15
#define tx_tdr_enable_mask                            0x8000


#define tx_tdr_phase_sel_addr                         0b110011001
#define tx_tdr_phase_sel_startbit                     9
#define tx_tdr_phase_sel_width                        1
#define tx_tdr_phase_sel_endbit                       9
#define tx_tdr_phase_sel_shift                        6
#define tx_tdr_phase_sel_mask                         0x40


#define tx_tdr_pulse_offset_addr                      0b110011010
#define tx_tdr_pulse_offset_startbit                  0
#define tx_tdr_pulse_offset_width                     14
#define tx_tdr_pulse_offset_endbit                    13
#define tx_tdr_pulse_offset_shift                     2
#define tx_tdr_pulse_offset_mask                      0xfffc


#define tx_unload_clk_disable_addr                    0b010000001
#define tx_unload_clk_disable_startbit                8
#define tx_unload_clk_disable_width                   1
#define tx_unload_clk_disable_endbit                  8
#define tx_unload_clk_disable_shift                   7
#define tx_unload_clk_disable_mask                    0x80


#define tx_unload_sel_addr                            0b010000001
#define tx_unload_sel_startbit                        10
#define tx_unload_sel_width                           3
#define tx_unload_sel_endbit                          12
#define tx_unload_sel_shift                           3
#define tx_unload_sel_mask                            0x38


#define tx_zcal_ans_not_found_error_addr              0b111100111
#define tx_zcal_ans_not_found_error_startbit          1
#define tx_zcal_ans_not_found_error_width             1
#define tx_zcal_ans_not_found_error_endbit            1
#define tx_zcal_ans_not_found_error_shift             14
#define tx_zcal_ans_not_found_error_mask              0x4000


#define tx_zcal_ans_range_error_addr                  0b111100111
#define tx_zcal_ans_range_error_startbit              2
#define tx_zcal_ans_range_error_width                 1
#define tx_zcal_ans_range_error_endbit                2
#define tx_zcal_ans_range_error_shift                 13
#define tx_zcal_ans_range_error_mask                  0x2000


#define tx_zcal_busy_addr                             0b111100000
#define tx_zcal_busy_startbit                         4
#define tx_zcal_busy_width                            1
#define tx_zcal_busy_endbit                           4
#define tx_zcal_busy_shift                            11
#define tx_zcal_busy_mask                             0x800


#define tx_zcal_cmp_out_addr                          0b111100000
#define tx_zcal_cmp_out_startbit                      6
#define tx_zcal_cmp_out_width                         1
#define tx_zcal_cmp_out_endbit                        6
#define tx_zcal_cmp_out_shift                         9
#define tx_zcal_cmp_out_mask                          0x200


#define tx_zcal_cya_data_inv_addr                     0b111100100
#define tx_zcal_cya_data_inv_startbit                 8
#define tx_zcal_cya_data_inv_width                    1
#define tx_zcal_cya_data_inv_endbit                   8
#define tx_zcal_cya_data_inv_shift                    7
#define tx_zcal_cya_data_inv_mask                     0x80


#define tx_zcal_done_addr                             0b111100000
#define tx_zcal_done_startbit                         2
#define tx_zcal_done_width                            1
#define tx_zcal_done_endbit                           2
#define tx_zcal_done_shift                            13
#define tx_zcal_done_mask                             0x2000


#define tx_zcal_error_addr                            0b111100000
#define tx_zcal_error_startbit                        3
#define tx_zcal_error_width                           1
#define tx_zcal_error_endbit                          3
#define tx_zcal_error_shift                           12
#define tx_zcal_error_mask                            0x1000


#define tx_zcal_force_sample_addr                     0b111100000
#define tx_zcal_force_sample_startbit                 5
#define tx_zcal_force_sample_width                    1
#define tx_zcal_force_sample_endbit                   5
#define tx_zcal_force_sample_shift                    10
#define tx_zcal_force_sample_mask                     0x400


#define tx_zcal_n_addr                                0b111100001
#define tx_zcal_n_startbit                            0
#define tx_zcal_n_width                               9
#define tx_zcal_n_endbit                              8
#define tx_zcal_n_shift                               7
#define tx_zcal_n_mask                                0xff80


#define tx_zcal_p_addr                                0b111100010
#define tx_zcal_p_startbit                            0
#define tx_zcal_p_width                               9
#define tx_zcal_p_endbit                              8
#define tx_zcal_p_shift                               7
#define tx_zcal_p_mask                                0xff80


#define tx_zcal_p_4x_addr                             0b111100011
#define tx_zcal_p_4x_startbit                         0
#define tx_zcal_p_4x_width                            5
#define tx_zcal_p_4x_endbit                           4
#define tx_zcal_p_4x_shift                            11
#define tx_zcal_p_4x_mask                             0xf800


#define tx_zcal_range_check_addr                      0b111100100
#define tx_zcal_range_check_startbit                  7
#define tx_zcal_range_check_width                     1
#define tx_zcal_range_check_endbit                    7
#define tx_zcal_range_check_shift                     8
#define tx_zcal_range_check_mask                      0x100


#define tx_zcal_req_addr                              0b111100000
#define tx_zcal_req_startbit                          1
#define tx_zcal_req_width                             1
#define tx_zcal_req_endbit                            1
#define tx_zcal_req_shift                             14
#define tx_zcal_req_mask                              0x4000


#define tx_zcal_sample_cnt_addr                       0b111100000
#define tx_zcal_sample_cnt_startbit                   7
#define tx_zcal_sample_cnt_width                      9
#define tx_zcal_sample_cnt_endbit                     15
#define tx_zcal_sample_cnt_shift                      0
#define tx_zcal_sample_cnt_mask                       0x1ff


#define tx_zcal_sm_max_val_addr                       0b111100101
#define tx_zcal_sm_max_val_startbit                   7
#define tx_zcal_sm_max_val_width                      7
#define tx_zcal_sm_max_val_endbit                     13
#define tx_zcal_sm_max_val_shift                      2
#define tx_zcal_sm_max_val_mask                       0x1fc


#define tx_zcal_sm_min_val_addr                       0b111100101
#define tx_zcal_sm_min_val_startbit                   0
#define tx_zcal_sm_min_val_width                      7
#define tx_zcal_sm_min_val_endbit                     6
#define tx_zcal_sm_min_val_shift                      9
#define tx_zcal_sm_min_val_mask                       0xfe00


#define tx_zcal_swo_cal_segs_addr                     0b111100100
#define tx_zcal_swo_cal_segs_startbit                 1
#define tx_zcal_swo_cal_segs_width                    1
#define tx_zcal_swo_cal_segs_endbit                   1
#define tx_zcal_swo_cal_segs_shift                    14
#define tx_zcal_swo_cal_segs_mask                     0x4000


#define tx_zcal_swo_cmp_inv_addr                      0b111100100
#define tx_zcal_swo_cmp_inv_startbit                  2
#define tx_zcal_swo_cmp_inv_width                     1
#define tx_zcal_swo_cmp_inv_endbit                    2
#define tx_zcal_swo_cmp_inv_shift                     13
#define tx_zcal_swo_cmp_inv_mask                      0x2000


#define tx_zcal_swo_cmp_offset_addr                   0b111100100
#define tx_zcal_swo_cmp_offset_startbit               3
#define tx_zcal_swo_cmp_offset_width                  1
#define tx_zcal_swo_cmp_offset_endbit                 3
#define tx_zcal_swo_cmp_offset_shift                  12
#define tx_zcal_swo_cmp_offset_mask                   0x1000


#define tx_zcal_swo_cmp_reset_addr                    0b111100100
#define tx_zcal_swo_cmp_reset_startbit                4
#define tx_zcal_swo_cmp_reset_width                   1
#define tx_zcal_swo_cmp_reset_endbit                  4
#define tx_zcal_swo_cmp_reset_shift                   11
#define tx_zcal_swo_cmp_reset_mask                    0x800


#define tx_zcal_swo_en_addr                           0b111100100
#define tx_zcal_swo_en_startbit                       0
#define tx_zcal_swo_en_width                          1
#define tx_zcal_swo_en_endbit                         0
#define tx_zcal_swo_en_shift                          15
#define tx_zcal_swo_en_mask                           0x8000


#define tx_zcal_swo_powerdown_addr                    0b111100100
#define tx_zcal_swo_powerdown_startbit                5
#define tx_zcal_swo_powerdown_width                   1
#define tx_zcal_swo_powerdown_endbit                  5
#define tx_zcal_swo_powerdown_shift                   10
#define tx_zcal_swo_powerdown_mask                    0x400


#define tx_zcal_swo_tcoil_addr                        0b111100100
#define tx_zcal_swo_tcoil_startbit                    6
#define tx_zcal_swo_tcoil_width                       1
#define tx_zcal_swo_tcoil_endbit                      6
#define tx_zcal_swo_tcoil_shift                       9
#define tx_zcal_swo_tcoil_mask                        0x200


#define tx_zcal_test_clk_div_addr                     0b111100100
#define tx_zcal_test_clk_div_startbit                 12
#define tx_zcal_test_clk_div_width                    1
#define tx_zcal_test_clk_div_endbit                   12
#define tx_zcal_test_clk_div_shift                    3
#define tx_zcal_test_clk_div_mask                     0x8


#define tx_zcal_test_done_addr                        0b111100111
#define tx_zcal_test_done_startbit                    7
#define tx_zcal_test_done_width                       1
#define tx_zcal_test_done_endbit                      7
#define tx_zcal_test_done_shift                       8
#define tx_zcal_test_done_mask                        0x100


#define tx_zcal_test_enable_addr                      0b111100111
#define tx_zcal_test_enable_startbit                  5
#define tx_zcal_test_enable_width                     1
#define tx_zcal_test_enable_endbit                    5
#define tx_zcal_test_enable_shift                     10
#define tx_zcal_test_enable_mask                      0x400


#define tx_zcal_test_ovr_1r_addr                      0b111100100
#define tx_zcal_test_ovr_1r_startbit                  10
#define tx_zcal_test_ovr_1r_width                     1
#define tx_zcal_test_ovr_1r_endbit                    10
#define tx_zcal_test_ovr_1r_shift                     5
#define tx_zcal_test_ovr_1r_mask                      0x20


#define tx_zcal_test_ovr_2r_addr                      0b111100100
#define tx_zcal_test_ovr_2r_startbit                  9
#define tx_zcal_test_ovr_2r_width                     1
#define tx_zcal_test_ovr_2r_endbit                    9
#define tx_zcal_test_ovr_2r_shift                     6
#define tx_zcal_test_ovr_2r_mask                      0x40


#define tx_zcal_test_ovr_4x_seg_addr                  0b111100100
#define tx_zcal_test_ovr_4x_seg_startbit              11
#define tx_zcal_test_ovr_4x_seg_width                 1
#define tx_zcal_test_ovr_4x_seg_endbit                11
#define tx_zcal_test_ovr_4x_seg_shift                 4
#define tx_zcal_test_ovr_4x_seg_mask                  0x10


#define tx_zcal_test_status_addr                      0b111100111
#define tx_zcal_test_status_startbit                  6
#define tx_zcal_test_status_width                     1
#define tx_zcal_test_status_endbit                    6
#define tx_zcal_test_status_shift                     9
#define tx_zcal_test_status_mask                      0x200
