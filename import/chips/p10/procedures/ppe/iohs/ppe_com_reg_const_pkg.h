/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/ppe_com_reg_const_pkg.h $ */
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

#ifndef _PPE_COM_REG_CONST_PKG_H_
#define _PPE_COM_REG_CONST_PKG_H_



#define rx_bit_cntl2_pl_addr                       0b001101101
#define rx_bit_cntl3_pl_addr                       0b001101110
#define rx_bit_cntl4_pl_addr                       0b001101111
#define rx_bit_cntl6_pl_addr                       0b001110001
#define rx_bit_cntl7_pl_addr                       0b001111110
#define rx_bit_cntl8_pl_addr                       0b001111111
#define rx_bit_cntlx1_pl_addr                      0b001101100
#define rx_bit_cntlx5_pl_addr                      0b001110000
#define rx_bit_cntlx9_pl_addr                      0b000001100
#define rx_bit_mode1_pl_addr                       0b001100100
#define rx_bit_mode2_pl_addr                       0b001100101
#define rx_bit_mode3_pl_addr                       0b001100110
#define rx_bit_mode4_pl_addr                       0b001100111
#define rx_bit_mode5_pl_addr                       0b001101000
#define rx_bit_mode6_pl_addr                       0b001101001
#define rx_bit_mode7_pl_addr                       0b001101010
#define rx_bit_mode8_pl_addr                       0b001101011
#define rx_bit_mode9_pl_addr                       0b001111101
#define rx_bit_stat1_pl_addr                       0b001110010
#define rx_bit_stat2_pl_addr                       0b001110011
#define rx_bit_stat3_pl_addr                       0b001110100
#define rx_bit_stat4_pl_addr                       0b001110101
#define rx_bit_stat5_pl_addr                       0b001110110
#define rx_bit_stat6_pl_addr                       0b001110111
#define rx_ctl_cntl1_pg_addr                       0b100100000
#define rx_ctl_cntl2_pg_addr                       0b100100001
#define rx_ctl_cntl3_pg_addr                       0b100100010
#define rx_ctl_cntl5_pg_addr                       0b100100100
#define rx_ctl_mode10_pg_addr                      0b100001010
#define rx_ctl_mode11_pg_addr                      0b100001011
#define rx_ctl_mode12_pg_addr                      0b100001100
#define rx_ctl_mode13_pg_addr                      0b100001101
#define rx_ctl_mode14_pg_addr                      0b100001110
#define rx_ctl_mode15_pg_addr                      0b100001111
#define rx_ctl_mode16_pg_addr                      0b100010000
#define rx_ctl_mode17_pg_addr                      0b100010001
#define rx_ctl_mode18_pg_addr                      0b100010010
#define rx_ctl_mode19_pg_addr                      0b100010011
#define rx_ctl_mode1_pg_addr                       0b100000001
#define rx_ctl_mode20_pg_addr                      0b100010100
#define rx_ctl_mode21_pg_addr                      0b100010101
#define rx_ctl_mode22_pg_addr                      0b100010110
#define rx_ctl_mode23_pg_addr                      0b100010111
#define rx_ctl_mode24_pg_addr                      0b100011000
#define rx_ctl_mode2_pg_addr                       0b100000010
#define rx_ctl_mode3_pg_addr                       0b100000011
#define rx_ctl_mode4_pg_addr                       0b100000100
#define rx_ctl_mode5_pg_addr                       0b100000101
#define rx_ctl_mode6_pg_addr                       0b100000110
#define rx_ctl_mode7_pg_addr                       0b100000111
#define rx_ctl_mode8_pg_addr                       0b100001000
#define rx_ctl_mode9_pg_addr                       0b100001001
#define rx_dac_cntl10_pl_addr                      0b000001010
#define rx_dac_cntl11_pl_addr                      0b000001011
#define rx_dac_cntl13_pl_addr                      0b000001101
#define rx_dac_cntl14_pl_addr                      0b000001110
#define rx_dac_cntl15_pl_addr                      0b000001111
#define rx_dac_cntl16_pl_addr                      0b000010000
#define rx_dac_cntl17_pl_addr                      0b000010001
#define rx_dac_cntl18_pl_addr                      0b000010010
#define rx_dac_cntl1_pl_addr                       0b000000001
#define rx_dac_cntl2_pl_addr                       0b000000010
#define rx_dac_cntl3_pl_addr                       0b000000011
#define rx_dac_cntl4_pl_addr                       0b000000100
#define rx_dac_cntl5_pl_addr                       0b000000101
#define rx_dac_cntl6_pl_addr                       0b000000110
#define rx_dac_cntl7_pl_addr                       0b000000111
#define rx_dac_cntl8_pl_addr                       0b000001000
#define rx_dac_cntlx19_pl_addr                     0b000010011
#define rx_dac_cntlx20_pl_addr                     0b000010100
#define rx_dac_cntlx21_pl_addr                     0b000010101
#define rx_dac_cntlx22_pl_addr                     0b000010110
#define rx_dac_cntlx23_pl_addr                     0b000010111
#define rx_dac_cntlx24_pl_addr                     0b000011000
#define rx_dac_cntlx25_pl_addr                     0b000011001
#define rx_dac_cntlx26_pl_addr                     0b000011010
#define rx_dac_cntlx27_pl_addr                     0b000011011
#define rx_dac_cntlx28_pl_addr                     0b000011100
#define rx_dac_cntlx29_pl_addr                     0b000011101
#define rx_dac_cntlx30_pl_addr                     0b000011110
#define rx_dac_cntlx31_pl_addr                     0b000011111
#define rx_dac_cntlx32_pl_addr                     0b000100000
#define rx_dac_cntlx33_pl_addr                     0b000100001
#define rx_dac_cntlx34_pl_addr                     0b000100010
#define rx_dac_cntlx35_pl_addr                     0b000100011
#define rx_dac_cntlx36_pl_addr                     0b000100100
#define rx_dac_cntlx37_pl_addr                     0b000100101
#define rx_dac_cntlx38_pl_addr                     0b000100110
#define rx_dac_cntlx39_pl_addr                     0b000100111
#define rx_dac_cntlx40_pl_addr                     0b000101000
#define rx_dac_cntlx41_pl_addr                     0b000101001
#define rx_dac_cntlx42_pl_addr                     0b000101010
#define rx_dac_cntlx43_pl_addr                     0b000101011
#define rx_dac_cntlx44_pl_addr                     0b000101100
#define rx_dac_cntlx45_pl_addr                     0b000101101
#define rx_dac_cntlx46_pl_addr                     0b000101110
#define rx_dac_cntlx47_pl_addr                     0b000101111
#define rx_dac_cntlx48_pl_addr                     0b000110000
#define rx_dac_cntlx49_pl_addr                     0b000110001
#define rx_dac_cntlx50_pl_addr                     0b000110010
#define rx_dac_cntlx51_pl_addr                     0b000110011
#define rx_dac_cntlx52_pl_addr                     0b000110100
#define rx_dac_cntlx53_pl_addr                     0b000110101
#define rx_dac_cntlx54_pl_addr                     0b000110110
#define rx_dac_cntlx55_pl_addr                     0b000110111
#define rx_dac_cntlx56_pl_addr                     0b000111000
#define rx_dac_cntlx57_pl_addr                     0b000111001
#define rx_dac_cntlx58_pl_addr                     0b000111010
#define rx_dac_cntlx59_pl_addr                     0b000111011
#define rx_dac_cntlx60_pl_addr                     0b000111100
#define rx_dac_cntlx61_pl_addr                     0b000111101
#define rx_dac_cntlx62_pl_addr                     0b000111110
#define rx_dac_cntlx63_pl_addr                     0b000111111
#define rx_dac_cntlx64_pl_addr                     0b001000000
#define rx_dac_cntlx65_pl_addr                     0b001000001
#define rx_dac_cntlx66_pl_addr                     0b001000010
#define rx_dac_cntlx67_pl_addr                     0b001000011
#define rx_dac_cntlx68_pl_addr                     0b001000100
#define rx_dac_cntlx69_pl_addr                     0b001000101
#define rx_dac_cntlx70_pl_addr                     0b001000110
#define rx_dac_cntlx71_pl_addr                     0b001000111
#define rx_dac_cntlx72_pl_addr                     0b001001000
#define rx_dac_cntlx73_pl_addr                     0b001001001
#define rx_dac_cntlx74_pl_addr                     0b001001010
#define rx_dac_cntlx75_pl_addr                     0b001001011
#define rx_dac_cntlx76_pl_addr                     0b001001100
#define rx_dac_cntlx77_pl_addr                     0b001001101
#define rx_dac_cntlx78_pl_addr                     0b001001110
#define rx_dac_cntlx79_pl_addr                     0b001001111
#define rx_dac_cntlx80_pl_addr                     0b001010000
#define rx_dac_cntlx81_pl_addr                     0b001010001
#define rx_dac_cntlx82_pl_addr                     0b001010010
#define rx_dac_cntlx83_pl_addr                     0b001010011
#define rx_dac_cntlx84_pl_addr                     0b001010100
#define rx_dac_cntlx85_pl_addr                     0b001010101
#define rx_dac_cntlx86_pl_addr                     0b001010110
#define rx_dac_cntlx87_pl_addr                     0b001010111
#define rx_dac_cntlx88_pl_addr                     0b001011000
#define rx_dac_cntlx89_pl_addr                     0b001011001
#define rx_dac_cntlx90_pl_addr                     0b001011010
#define rx_dac_cntlx9_pl_addr                      0b000001001
#define rx_data_dac_spare_mode_pl_addr             0b000000000
#define rx_datasm_cnt10_pg_addr                    0b100111010
#define rx_datasm_cnt11_pg_addr                    0b100111011
#define rx_datasm_cnt12_pg_addr                    0b100111100
#define rx_datasm_cnt13_pg_addr                    0b100111101
#define rx_datasm_cnt14_pg_addr                    0b100111110
#define rx_datasm_cnt15_pg_addr                    0b100111111
#define rx_datasm_cnt16_pg_addr                    0b101000000
#define rx_datasm_cnt17_pg_addr                    0b101000001
#define rx_datasm_cnt18_pg_addr                    0b101000010
#define rx_datasm_cnt19_pg_addr                    0b101000011
#define rx_datasm_cnt20_pg_addr                    0b101000100
#define rx_datasm_cnt21_pg_addr                    0b101000101
#define rx_datasm_cnt22_pg_addr                    0b101000110
#define rx_datasm_cnt23_pg_addr                    0b101000111
#define rx_datasm_cnt24_pg_addr                    0b101001000
#define rx_datasm_cnt25_pg_addr                    0b101001001
#define rx_datasm_cnt26_pg_addr                    0b101001010
#define rx_datasm_cnt27_pg_addr                    0b101001011
#define rx_datasm_cnt28_pg_addr                    0b101001100
#define rx_datasm_cnt29_pg_addr                    0b101001101
#define rx_datasm_cnt30_pg_addr                    0b101001110
#define rx_datasm_cnt32_pg_addr                    0b101010000
#define rx_datasm_cnt33_pg_addr                    0b101010001
#define rx_datasm_cntl1_pg_addr                    0b100110001
#define rx_datasm_cntl1_pl_addr                    0b001111000
#define rx_datasm_cntl2_pg_addr                    0b100110010
#define rx_datasm_cntl2_pl_addr                    0b001111001
#define rx_datasm_cntl3_pg_addr                    0b100110011
#define rx_datasm_cntl3_pl_addr                    0b001111011
#define rx_datasm_cntl4_pg_addr                    0b100110100
#define rx_datasm_cntl5_pg_addr                    0b100110101
#define rx_datasm_cntl6_pg_addr                    0b100110110
#define rx_datasm_cntl7_pg_addr                    0b100110111
#define rx_datasm_cntl8_pg_addr                    0b100111000
#define rx_datasm_cntl9_pg_addr                    0b100111001
#define rx_datasm_mode1_pl_addr                    0b001111010
#define rx_datasm_spare_mode_pg_addr               0b100110000
#define rx_datasm_stat10_pg_addr                   0b101011011
#define rx_datasm_stat11_pg_addr                   0b101011100
#define rx_datasm_stat12_pg_addr                   0b101011101
#define rx_datasm_stat13_pg_addr                   0b101011110
#define rx_datasm_stat14_pg_addr                   0b101011111
#define rx_datasm_stat15_pg_addr                   0b101100000
#define rx_datasm_stat16_pg_addr                   0b101100001
#define rx_datasm_stat17_pg_addr                   0b101100010
#define rx_datasm_stat18_pg_addr                   0b101100011
#define rx_datasm_stat19_pg_addr                   0b101100100
#define rx_datasm_stat1_pg_addr                    0b101010010
#define rx_datasm_stat1_pl_addr                    0b001111100
#define rx_datasm_stat20_pg_addr                   0b101100101
#define rx_datasm_stat21_pg_addr                   0b101100110
#define rx_datasm_stat22_pg_addr                   0b101100111
#define rx_datasm_stat23_pg_addr                   0b101101000
#define rx_datasm_stat24_pg_addr                   0b101101001
#define rx_datasm_stat25_pg_addr                   0b101101010
#define rx_datasm_stat26_pg_addr                   0b101101011
#define rx_datasm_stat27_pg_addr                   0b101101100
#define rx_datasm_stat28_pg_addr                   0b101101101
#define rx_datasm_stat29_pg_addr                   0b101101110
#define rx_datasm_stat2_pg_addr                    0b101010011
#define rx_datasm_stat30_pg_addr                   0b101101111
#define rx_datasm_stat4_pg_addr                    0b101010101
#define rx_datasm_stat5_pg_addr                    0b101010110
#define rx_datasm_stat6_pg_addr                    0b101010111
#define rx_datasm_stat7_pg_addr                    0b101011000
#define rx_datasm_stat8_pg_addr                    0b101011001
#define rx_datasm_stat9_pg_addr                    0b101011010
#define rx_fir1_error_inject_pg_addr               0b100100111
#define rx_fir1_mask_pg_addr                       0b100100110
#define rx_fir1_pg_addr                            0b100100101
#define rx_fir_error_inject_pl_addr                0b001100011
#define rx_fir_mask_pl_addr                        0b001100010
#define rx_fir_pl_addr                             0b001100001
#define rx_spare_mode_pg_addr                      0b100000000
#define rx_spare_mode_pl_addr                      0b001100000
#define scom_mode_pb_addr                          0b000100110
#define scom_ppe_cntl_addr                         0b000100000
#define scom_ppe_fir_clr_reg_addr                  0b000101010
#define scom_ppe_fir_mask_reg_addr                 0b000101011
#define scom_ppe_fir_reg_addr                      0b000101000
#define scom_ppe_fir_set_reg_addr                  0b000101001
#define scom_ppe_flags_clr_reg_addr                0b000100101
#define scom_ppe_flags_reg_addr                    0b000100011
#define scom_ppe_flags_set_reg_addr                0b000100100
#define scom_ppe_func_addr                         0b000100111
#define scom_ppe_ir_edr_addr                       0b000010100
#define scom_ppe_ir_sprg0_addr                     0b000010010
#define scom_ppe_mem_arb_csar_addr                 0b000001101
#define scom_ppe_mem_arb_csdr_addr                 0b000001110
#define scom_ppe_mem_arb_scr_addr                  0b000001010
#define scom_ppe_srr0_lr_addr                      0b000011111
#define scom_ppe_work_reg1_addr                    0b000100001
#define scom_ppe_work_reg2_addr                    0b000100010
#define scom_ppe_xcr_none_addr                     0b000010000
#define scom_ppe_xcr_sprg0_addr                    0b000010001
#define scom_ppe_xsr_iar_addr                      0b000010101
#define scom_ppe_xsr_sprg0_addr                    0b000010011
#define spare_mode_pb_addr                         0b111101111
#define tx_cntl10_pl_addr                          0b010001111
#define tx_cntl11_pl_addr                          0b010010000
#define tx_cntl14_pl_addr                          0b010010011
#define tx_cntl15_pl_addr                          0b010010100
#define tx_cntl16_pl_addr                          0b010010101
#define tx_cntl17_pl_addr                          0b010010110
#define tx_cntl18_pl_addr                          0b010010111
#define tx_cntl19_pl_addr                          0b010011000
#define tx_cntl1g_pl_addr                          0b010000110
#define tx_cntl20_pl_addr                          0b010011001
#define tx_cntl21_pl_addr                          0b010011010
#define tx_cntl22_pl_addr                          0b010011011
#define tx_cntl23_pl_addr                          0b010011100
#define tx_cntl24_pl_addr                          0b010011101
#define tx_cntl25_pl_addr                          0b010011110
#define tx_cntl26_pl_addr                          0b010011111
#define tx_cntl29_pl_addr                          0b010100010
#define tx_cntl2_pl_addr                           0b010000111
#define tx_cntl30_pl_addr                          0b010100011
#define tx_cntl3_pl_addr                           0b010001000
#define tx_cntl4_pl_addr                           0b010001001
#define tx_cntl5_pl_addr                           0b010001010
#define tx_cntl6_pl_addr                           0b010001011
#define tx_cntl7_pl_addr                           0b010001100
#define tx_cntl8_pl_addr                           0b010001101
#define tx_cntl9_pl_addr                           0b010001110
#define tx_ctl_cntl10_pg_addr                      0b110000101
#define tx_ctl_cntl1_pg_addr                       0b110001000
#define tx_ctl_cntl2_pg_addr                       0b110001001
#define tx_ctl_cntl3_pg_addr                       0b110001010
#define tx_ctl_cntl4_pg_addr                       0b110001011
#define tx_ctl_cntl5_pg_addr                       0b110001100
#define tx_ctl_cntl6_pg_addr                       0b110001101
#define tx_ctl_cntl7_pg_addr                       0b110001110
#define tx_ctl_cntl8_pg_addr                       0b110001111
#define tx_ctl_cntl9_pg_addr                       0b110000100
#define tx_ctl_mode1_pg_addr                       0b110000001
#define tx_ctlsm_cntl10_pg_addr                    0b110100001
#define tx_ctlsm_cntl11_pg_addr                    0b110100010
#define tx_ctlsm_cntl12_pg_addr                    0b110100011
#define tx_ctlsm_cntl13_pg_addr                    0b110100100
#define tx_ctlsm_cntl14_pg_addr                    0b110100101
#define tx_ctlsm_cntl1_pg_addr                     0b110011000
#define tx_ctlsm_cntl2_pg_addr                     0b110011001
#define tx_ctlsm_cntl3_pg_addr                     0b110011010
#define tx_ctlsm_cntl4_pg_addr                     0b110011011
#define tx_ctlsm_cntl5_pg_addr                     0b110011100
#define tx_ctlsm_cntl6_pg_addr                     0b110011101
#define tx_ctlsm_cntl7_pg_addr                     0b110011110
#define tx_ctlsm_cntl8_pg_addr                     0b110011111
#define tx_ctlsm_cntl9_pg_addr                     0b110100000
#define tx_ctlsm_spare_mode_pg_addr                0b110010100
#define tx_ctlsm_stat2_pg_addr                     0b110101001
#define tx_ctlsm_stat3_pg_addr                     0b110101010
#define tx_ctlsm_stat4_pg_addr                     0b110101011
#define tx_ctlsm_stat5_pg_addr                     0b110101100
#define tx_ctlsm_stat6_pg_addr                     0b110101101
#define tx_fir_error_inject_pg_addr                0b110010011
#define tx_fir_error_inject_pl_addr                0b010000010
#define tx_fir_mask_pg_addr                        0b110010001
#define tx_fir_mask_pl_addr                        0b010000001
#define tx_fir_pg_addr                             0b110010000
#define tx_fir_pl_addr                             0b010000000
#define tx_fir_reset_pg_addr                       0b110010010
#define tx_impcal1_pb_addr                         0b111100000
#define tx_impcal2_pb_addr                         0b111100001
#define tx_impcal3_pb_addr                         0b111100010
#define tx_impcal_nval_pb_addr                     0b111100011
#define tx_impcal_p_4x_pb_addr                     0b111100101
#define tx_impcal_pval_pb_addr                     0b111100100
#define tx_impcal_swo1_pb_addr                     0b111100110
#define tx_impcal_swo2_pb_addr                     0b111100111
#define tx_impcal_swo3_pb_addr                     0b111101000
#define tx_impcal_swo4_pb_addr                     0b111101001
#define tx_impcal_swo5_pb_addr                     0b111101010
#define tx_impcal_swo6_pb_addr                     0b111101011
#define tx_impcal_swo7_pb_addr                     0b111101100
#define tx_impcal_swo8_pb_addr                     0b111101101
#define tx_impcal_swo9_pb_addr                     0b111101110
#define tx_mode1_pl_addr                           0b010000011
#define tx_mode2_pl_addr                           0b010000100
#define tx_mode3_pl_addr                           0b010000101
#define tx_spare_mode_pg_addr                      0b110000000
#define tx_stat1_pl_addr                           0b010100100
#define tx_stat2_pl_addr                           0b010100101
#define zcal_fir_error_inject_pb_addr              0b111110011
#define zcal_fir_mask_pb_addr                      0b111110010
#define zcal_fir_pb_addr                           0b111110001
#define zcal_fir_reset_pb_addr                     0b111110000
#define eol_fast_toggle_addr                       0b000100111
#define eol_fast_toggle_startbit                   1
#define eol_fast_toggle_width                      1
#define eol_fast_toggle_endbit                     1
#define eol_fast_toggle_shift                      62
#define eol_fast_toggle_mask                       0x4000000000000000


#define eol_slow_toggle_addr                       0b000100111
#define eol_slow_toggle_startbit                   0
#define eol_slow_toggle_width                      1
#define eol_slow_toggle_endbit                     0
#define eol_slow_toggle_shift                      63
#define eol_slow_toggle_mask                       0x8000000000000000


#define gcr_test_mode_addr                         0b000100110
#define gcr_test_mode_startbit                     0
#define gcr_test_mode_width                        1
#define gcr_test_mode_endbit                       0
#define gcr_test_mode_shift                        63
#define gcr_test_mode_mask                         0x8000000000000000


#define io_ppe_done_async_dly_addr                 0b000100000
#define io_ppe_done_async_dly_startbit             8
#define io_ppe_done_async_dly_width                3
#define io_ppe_done_async_dly_endbit               10
#define io_ppe_done_async_dly_shift                53
#define io_ppe_done_async_dly_mask                 0xe0000000000000


#define io_ppe_done_dly_chkn_addr                  0b000100000
#define io_ppe_done_dly_chkn_startbit              13
#define io_ppe_done_dly_chkn_width                 1
#define io_ppe_done_dly_chkn_endbit                13
#define io_ppe_done_dly_chkn_shift                 50
#define io_ppe_done_dly_chkn_mask                  0x4000000000000


#define ioreset_hard_bus0_addr                     0b000100110
#define ioreset_hard_bus0_startbit                 2
#define ioreset_hard_bus0_width                    8
#define ioreset_hard_bus0_endbit                   9
#define ioreset_hard_bus0_shift                    54
#define ioreset_hard_bus0_mask                     0x3fc0000000000000


#define mmio_echo_chkn_addr                        0b000100000
#define mmio_echo_chkn_startbit                    14
#define mmio_echo_chkn_width                       1
#define mmio_echo_chkn_endbit                      14
#define mmio_echo_chkn_shift                       49
#define mmio_echo_chkn_mask                        0x2000000000000


#define pb_spare_mode_0_addr                       0b111101111
#define pb_spare_mode_0_startbit                   0
#define pb_spare_mode_0_width                      1
#define pb_spare_mode_0_endbit                     0
#define pb_spare_mode_0_shift                      15
#define pb_spare_mode_0_mask                       0x8000


#define pb_spare_mode_1_addr                       0b111101111
#define pb_spare_mode_1_startbit                   1
#define pb_spare_mode_1_width                      1
#define pb_spare_mode_1_endbit                     1
#define pb_spare_mode_1_shift                      14
#define pb_spare_mode_1_mask                       0x4000


#define pb_spare_mode_2_addr                       0b111101111
#define pb_spare_mode_2_startbit                   2
#define pb_spare_mode_2_width                      1
#define pb_spare_mode_2_endbit                     2
#define pb_spare_mode_2_shift                      13
#define pb_spare_mode_2_mask                       0x2000


#define pb_spare_mode_3_addr                       0b111101111
#define pb_spare_mode_3_startbit                   3
#define pb_spare_mode_3_width                      1
#define pb_spare_mode_3_endbit                     3
#define pb_spare_mode_3_shift                      12
#define pb_spare_mode_3_mask                       0x1000


#define pb_spare_mode_4_addr                       0b111101111
#define pb_spare_mode_4_startbit                   4
#define pb_spare_mode_4_width                      1
#define pb_spare_mode_4_endbit                     4
#define pb_spare_mode_4_shift                      11
#define pb_spare_mode_4_mask                       0x800


#define pb_spare_mode_5_addr                       0b111101111
#define pb_spare_mode_5_startbit                   5
#define pb_spare_mode_5_width                      1
#define pb_spare_mode_5_endbit                     5
#define pb_spare_mode_5_shift                      10
#define pb_spare_mode_5_mask                       0x400


#define pb_spare_mode_6_addr                       0b111101111
#define pb_spare_mode_6_startbit                   6
#define pb_spare_mode_6_width                      1
#define pb_spare_mode_6_endbit                     6
#define pb_spare_mode_6_shift                      9
#define pb_spare_mode_6_mask                       0x200


#define pb_spare_mode_7_addr                       0b111101111
#define pb_spare_mode_7_startbit                   7
#define pb_spare_mode_7_width                      1
#define pb_spare_mode_7_endbit                     7
#define pb_spare_mode_7_shift                      8
#define pb_spare_mode_7_mask                       0x100


#define ppe_fir_dft_error_addr                     0b000101000
#define ppe_fir_dft_error_startbit                 3
#define ppe_fir_dft_error_width                    1
#define ppe_fir_dft_error_endbit                   3
#define ppe_fir_dft_error_shift                    60
#define ppe_fir_dft_error_mask                     0x1000000000000000


#define ppe_fir_fatal_error_addr                   0b000101000
#define ppe_fir_fatal_error_startbit               1
#define ppe_fir_fatal_error_width                  1
#define ppe_fir_fatal_error_endbit                 1
#define ppe_fir_fatal_error_shift                  62
#define ppe_fir_fatal_error_mask                   0x4000000000000000


#define ppe_fir_recal_abort_addr                   0b000101000
#define ppe_fir_recal_abort_startbit               0
#define ppe_fir_recal_abort_width                  1
#define ppe_fir_recal_abort_endbit                 0
#define ppe_fir_recal_abort_shift                  63
#define ppe_fir_recal_abort_mask                   0x8000000000000000


#define ppe_fir_recal_not_run_addr                 0b000101000
#define ppe_fir_recal_not_run_startbit             4
#define ppe_fir_recal_not_run_width                1
#define ppe_fir_recal_not_run_endbit               4
#define ppe_fir_recal_not_run_shift                59
#define ppe_fir_recal_not_run_mask                 0x800000000000000


#define ppe_fir_rsvd6_addr                         0b000101000
#define ppe_fir_rsvd6_startbit                     6
#define ppe_fir_rsvd6_width                        1
#define ppe_fir_rsvd6_endbit                       6
#define ppe_fir_rsvd6_shift                        57
#define ppe_fir_rsvd6_mask                         0x200000000000000


#define ppe_fir_rsvd7_addr                         0b000101000
#define ppe_fir_rsvd7_startbit                     7
#define ppe_fir_rsvd7_width                        1
#define ppe_fir_rsvd7_endbit                       7
#define ppe_fir_rsvd7_shift                        56
#define ppe_fir_rsvd7_mask                         0x100000000000000


#define ppe_fir_thread_locked_addr                 0b000101000
#define ppe_fir_thread_locked_startbit             5
#define ppe_fir_thread_locked_width                1
#define ppe_fir_thread_locked_endbit               5
#define ppe_fir_thread_locked_shift                58
#define ppe_fir_thread_locked_mask                 0x400000000000000


#define ppe_fir_warning_addr                       0b000101000
#define ppe_fir_warning_startbit                   2
#define ppe_fir_warning_width                      1
#define ppe_fir_warning_endbit                     2
#define ppe_fir_warning_shift                      61
#define ppe_fir_warning_mask                       0x2000000000000000


#define ppe_func_spares_addr                       0b000100111
#define ppe_func_spares_startbit                   3
#define ppe_func_spares_width                      13
#define ppe_func_spares_endbit                     15
#define ppe_func_spares_shift                      48
#define ppe_func_spares_mask                       0x1fff000000000000


#define ppe_interrupt_addr                         0b000100111
#define ppe_interrupt_startbit                     2
#define ppe_interrupt_width                        1
#define ppe_interrupt_endbit                       2
#define ppe_interrupt_shift                        61
#define ppe_interrupt_mask                         0x2000000000000000


#define ppe_io_valid_async_dly_addr                0b000100000
#define ppe_io_valid_async_dly_startbit            5
#define ppe_io_valid_async_dly_width               3
#define ppe_io_valid_async_dly_endbit              7
#define ppe_io_valid_async_dly_shift               56
#define ppe_io_valid_async_dly_mask                0x700000000000000


#define ppe_io_valid_dly_chkn_addr                 0b000100000
#define ppe_io_valid_dly_chkn_startbit             12
#define ppe_io_valid_dly_chkn_width                1
#define ppe_io_valid_dly_chkn_endbit               12
#define ppe_io_valid_dly_chkn_shift                51
#define ppe_io_valid_dly_chkn_mask                 0x8000000000000


#define ppe_sourced_hang_pulse_en_addr             0b000100000
#define ppe_sourced_hang_pulse_en_startbit         11
#define ppe_sourced_hang_pulse_en_width            1
#define ppe_sourced_hang_pulse_en_endbit           11
#define ppe_sourced_hang_pulse_en_shift            52
#define ppe_sourced_hang_pulse_en_mask             0x10000000000000


#define rx_16to1_addr                              0b100000001
#define rx_16to1_startbit                          3
#define rx_16to1_width                             1
#define rx_16to1_endbit                            3
#define rx_16to1_shift                             12
#define rx_16to1_mask                              0x1000


#define rx_a_bank_controls_addr                    0b000000001
#define rx_a_bank_controls_startbit                0
#define rx_a_bank_controls_width                   6
#define rx_a_bank_controls_endbit                  5
#define rx_a_bank_controls_shift                   10
#define rx_a_bank_controls_mask                    0xfc00


#define rx_a_clkslip_addr                          0b000001010
#define rx_a_clkslip_startbit                      4
#define rx_a_clkslip_width                         1
#define rx_a_clkslip_endbit                        4
#define rx_a_clkslip_shift                         11
#define rx_a_clkslip_mask                          0x800


#define rx_a_ctle_gain_addr                        0b000000110
#define rx_a_ctle_gain_startbit                    0
#define rx_a_ctle_gain_width                       4
#define rx_a_ctle_gain_endbit                      3
#define rx_a_ctle_gain_shift                       12
#define rx_a_ctle_gain_mask                        0xf000


#define rx_a_ctle_gain_peak_full_reg_alias_addr    0b000000110
#define rx_a_ctle_gain_peak_full_reg_alias_startbit   0
#define rx_a_ctle_gain_peak_full_reg_alias_width   16
#define rx_a_ctle_gain_peak_full_reg_alias_endbit   15
#define rx_a_ctle_gain_peak_full_reg_alias_shift   0
#define rx_a_ctle_gain_peak_full_reg_alias_mask    0xffff


#define rx_a_ctle_peak1_addr                       0b000000110
#define rx_a_ctle_peak1_startbit                   4
#define rx_a_ctle_peak1_width                      4
#define rx_a_ctle_peak1_endbit                     7
#define rx_a_ctle_peak1_shift                      8
#define rx_a_ctle_peak1_mask                       0xf00


#define rx_a_ctle_peak1_peak2_alias_addr           0b000000110
#define rx_a_ctle_peak1_peak2_alias_startbit       4
#define rx_a_ctle_peak1_peak2_alias_width          8
#define rx_a_ctle_peak1_peak2_alias_endbit         11
#define rx_a_ctle_peak1_peak2_alias_shift          4
#define rx_a_ctle_peak1_peak2_alias_mask           0xff0


#define rx_a_ctle_peak2_addr                       0b000000110
#define rx_a_ctle_peak2_startbit                   8
#define rx_a_ctle_peak2_width                      4
#define rx_a_ctle_peak2_endbit                     11
#define rx_a_ctle_peak2_shift                      4
#define rx_a_ctle_peak2_mask                       0xf0


#define rx_a_fence_en_addr                         0b000001111
#define rx_a_fence_en_startbit                     0
#define rx_a_fence_en_width                        1
#define rx_a_fence_en_endbit                       0
#define rx_a_fence_en_shift                        15
#define rx_a_fence_en_mask                         0x8000


#define rx_a_hold_div_clks_addr                    0b000001010
#define rx_a_hold_div_clks_startbit                6
#define rx_a_hold_div_clks_width                   1
#define rx_a_hold_div_clks_endbit                  6
#define rx_a_hold_div_clks_shift                   9
#define rx_a_hold_div_clks_mask                    0x200


#define rx_a_lane_done_0_15_addr                   0b101001011
#define rx_a_lane_done_0_15_startbit               0
#define rx_a_lane_done_0_15_width                  16
#define rx_a_lane_done_0_15_endbit                 15
#define rx_a_lane_done_0_15_shift                  0
#define rx_a_lane_done_0_15_mask                   0xffff


#define rx_a_lane_done_16_23_addr                  0b101001100
#define rx_a_lane_done_16_23_startbit              0
#define rx_a_lane_done_16_23_width                 8
#define rx_a_lane_done_16_23_endbit                7
#define rx_a_lane_done_16_23_shift                 8
#define rx_a_lane_done_16_23_mask                  0xff00


#define rx_a_lane_fail_0_15_addr                   0b101000111
#define rx_a_lane_fail_0_15_startbit               0
#define rx_a_lane_fail_0_15_width                  16
#define rx_a_lane_fail_0_15_endbit                 15
#define rx_a_lane_fail_0_15_shift                  0
#define rx_a_lane_fail_0_15_mask                   0xffff


#define rx_a_lane_fail_16_23_addr                  0b101001000
#define rx_a_lane_fail_16_23_startbit              0
#define rx_a_lane_fail_16_23_width                 8
#define rx_a_lane_fail_16_23_endbit                7
#define rx_a_lane_fail_16_23_shift                 8
#define rx_a_lane_fail_16_23_mask                  0xff00


#define rx_a_lte_gain_addr                         0b000000011
#define rx_a_lte_gain_startbit                     0
#define rx_a_lte_gain_width                        3
#define rx_a_lte_gain_endbit                       2
#define rx_a_lte_gain_shift                        13
#define rx_a_lte_gain_mask                         0xe000


#define rx_a_lte_gain_zero_alias_addr              0b000000011
#define rx_a_lte_gain_zero_alias_startbit          0
#define rx_a_lte_gain_zero_alias_width             6
#define rx_a_lte_gain_zero_alias_endbit            5
#define rx_a_lte_gain_zero_alias_shift             10
#define rx_a_lte_gain_zero_alias_mask              0xfc00


#define rx_a_lte_zero_addr                         0b000000011
#define rx_a_lte_zero_startbit                     3
#define rx_a_lte_zero_width                        3
#define rx_a_lte_zero_endbit                       5
#define rx_a_lte_zero_shift                        10
#define rx_a_lte_zero_mask                         0x1c00


#define rx_a_pr_ew_data_addr                       0b000010000
#define rx_a_pr_ew_data_startbit                   0
#define rx_a_pr_ew_data_width                      5
#define rx_a_pr_ew_data_endbit                     4
#define rx_a_pr_ew_data_shift                      11
#define rx_a_pr_ew_data_mask                       0xf800


#define rx_a_pr_ew_edge_addr                       0b000010000
#define rx_a_pr_ew_edge_startbit                   6
#define rx_a_pr_ew_edge_width                      5
#define rx_a_pr_ew_edge_endbit                     10
#define rx_a_pr_ew_edge_shift                      5
#define rx_a_pr_ew_edge_mask                       0x3e0


#define rx_a_pr_ew_full_reg_addr                   0b000010000
#define rx_a_pr_ew_full_reg_startbit               0
#define rx_a_pr_ew_full_reg_width                  16
#define rx_a_pr_ew_full_reg_endbit                 15
#define rx_a_pr_ew_full_reg_shift                  0
#define rx_a_pr_ew_full_reg_mask                   0xffff


#define rx_a_pr_ns_data_addr                       0b000001110
#define rx_a_pr_ns_data_startbit                   0
#define rx_a_pr_ns_data_width                      5
#define rx_a_pr_ns_data_endbit                     4
#define rx_a_pr_ns_data_shift                      11
#define rx_a_pr_ns_data_mask                       0xf800


#define rx_a_pr_ns_edge_addr                       0b000001110
#define rx_a_pr_ns_edge_startbit                   6
#define rx_a_pr_ns_edge_width                      5
#define rx_a_pr_ns_edge_endbit                     10
#define rx_a_pr_ns_edge_shift                      5
#define rx_a_pr_ns_edge_mask                       0x3e0


#define rx_a_pr_ns_full_reg_addr                   0b000001110
#define rx_a_pr_ns_full_reg_startbit               0
#define rx_a_pr_ns_full_reg_width                  16
#define rx_a_pr_ns_full_reg_endbit                 15
#define rx_a_pr_ns_full_reg_shift                  0
#define rx_a_pr_ns_full_reg_mask                   0xffff


#define rx_a_selclkslip_addr                       0b000001010
#define rx_a_selclkslip_startbit                   8
#define rx_a_selclkslip_width                      2
#define rx_a_selclkslip_endbit                     9
#define rx_a_selclkslip_shift                      6
#define rx_a_selclkslip_mask                       0xc0


#define rx_a_spec_mux_sel_addr                     0b000001001
#define rx_a_spec_mux_sel_startbit                 0
#define rx_a_spec_mux_sel_width                    7
#define rx_a_spec_mux_sel_endbit                   6
#define rx_a_spec_mux_sel_shift                    9
#define rx_a_spec_mux_sel_mask                     0xfe00


#define rx_a_tiny_pr_ew_data_addr                  0b000000010
#define rx_a_tiny_pr_ew_data_startbit              4
#define rx_a_tiny_pr_ew_data_width                 4
#define rx_a_tiny_pr_ew_data_endbit                7
#define rx_a_tiny_pr_ew_data_shift                 8
#define rx_a_tiny_pr_ew_data_mask                  0xf00


#define rx_a_tiny_pr_ew_edge_addr                  0b000000010
#define rx_a_tiny_pr_ew_edge_startbit              12
#define rx_a_tiny_pr_ew_edge_width                 4
#define rx_a_tiny_pr_ew_edge_endbit                15
#define rx_a_tiny_pr_ew_edge_shift                 0
#define rx_a_tiny_pr_ew_edge_mask                  0xf


#define rx_a_tiny_pr_ns_data_addr                  0b000000010
#define rx_a_tiny_pr_ns_data_startbit              0
#define rx_a_tiny_pr_ns_data_width                 4
#define rx_a_tiny_pr_ns_data_endbit                3
#define rx_a_tiny_pr_ns_data_shift                 12
#define rx_a_tiny_pr_ns_data_mask                  0xf000


#define rx_a_tiny_pr_ns_edge_addr                  0b000000010
#define rx_a_tiny_pr_ns_edge_startbit              8
#define rx_a_tiny_pr_ns_edge_width                 4
#define rx_a_tiny_pr_ns_edge_endbit                11
#define rx_a_tiny_pr_ns_edge_shift                 4
#define rx_a_tiny_pr_ns_edge_mask                  0xf0


#define rx_ab_bank_controls_alias_addr             0b000000001
#define rx_ab_bank_controls_alias_startbit         0
#define rx_ab_bank_controls_alias_width            16
#define rx_ab_bank_controls_alias_endbit           15
#define rx_ab_bank_controls_alias_shift            0
#define rx_ab_bank_controls_alias_mask             0xffff


#define rx_ad_latch_dac_e000_addr                  0b000100011
#define rx_ad_latch_dac_e000_startbit              8
#define rx_ad_latch_dac_e000_width                 8
#define rx_ad_latch_dac_e000_endbit                15
#define rx_ad_latch_dac_e000_shift                 0
#define rx_ad_latch_dac_e000_mask                  0xff


#define rx_ad_latch_dac_e001_addr                  0b000100100
#define rx_ad_latch_dac_e001_startbit              8
#define rx_ad_latch_dac_e001_width                 8
#define rx_ad_latch_dac_e001_endbit                15
#define rx_ad_latch_dac_e001_shift                 0
#define rx_ad_latch_dac_e001_mask                  0xff


#define rx_ad_latch_dac_e010_addr                  0b000100101
#define rx_ad_latch_dac_e010_startbit              8
#define rx_ad_latch_dac_e010_width                 8
#define rx_ad_latch_dac_e010_endbit                15
#define rx_ad_latch_dac_e010_shift                 0
#define rx_ad_latch_dac_e010_mask                  0xff


#define rx_ad_latch_dac_e011_addr                  0b000100110
#define rx_ad_latch_dac_e011_startbit              8
#define rx_ad_latch_dac_e011_width                 8
#define rx_ad_latch_dac_e011_endbit                15
#define rx_ad_latch_dac_e011_shift                 0
#define rx_ad_latch_dac_e011_mask                  0xff


#define rx_ad_latch_dac_e100_addr                  0b000100111
#define rx_ad_latch_dac_e100_startbit              8
#define rx_ad_latch_dac_e100_width                 8
#define rx_ad_latch_dac_e100_endbit                15
#define rx_ad_latch_dac_e100_shift                 0
#define rx_ad_latch_dac_e100_mask                  0xff


#define rx_ad_latch_dac_e101_addr                  0b000101000
#define rx_ad_latch_dac_e101_startbit              8
#define rx_ad_latch_dac_e101_width                 8
#define rx_ad_latch_dac_e101_endbit                15
#define rx_ad_latch_dac_e101_shift                 0
#define rx_ad_latch_dac_e101_mask                  0xff


#define rx_ad_latch_dac_e110_addr                  0b000101001
#define rx_ad_latch_dac_e110_startbit              8
#define rx_ad_latch_dac_e110_width                 8
#define rx_ad_latch_dac_e110_endbit                15
#define rx_ad_latch_dac_e110_shift                 0
#define rx_ad_latch_dac_e110_mask                  0xff


#define rx_ad_latch_dac_e111_addr                  0b000101010
#define rx_ad_latch_dac_e111_startbit              8
#define rx_ad_latch_dac_e111_width                 8
#define rx_ad_latch_dac_e111_endbit                15
#define rx_ad_latch_dac_e111_shift                 0
#define rx_ad_latch_dac_e111_mask                  0xff


#define rx_ad_latch_dac_n000_addr                  0b000011011
#define rx_ad_latch_dac_n000_startbit              8
#define rx_ad_latch_dac_n000_width                 8
#define rx_ad_latch_dac_n000_endbit                15
#define rx_ad_latch_dac_n000_shift                 0
#define rx_ad_latch_dac_n000_mask                  0xff


#define rx_ad_latch_dac_n001_addr                  0b000011100
#define rx_ad_latch_dac_n001_startbit              8
#define rx_ad_latch_dac_n001_width                 8
#define rx_ad_latch_dac_n001_endbit                15
#define rx_ad_latch_dac_n001_shift                 0
#define rx_ad_latch_dac_n001_mask                  0xff


#define rx_ad_latch_dac_n010_addr                  0b000011101
#define rx_ad_latch_dac_n010_startbit              8
#define rx_ad_latch_dac_n010_width                 8
#define rx_ad_latch_dac_n010_endbit                15
#define rx_ad_latch_dac_n010_shift                 0
#define rx_ad_latch_dac_n010_mask                  0xff


#define rx_ad_latch_dac_n011_addr                  0b000011110
#define rx_ad_latch_dac_n011_startbit              8
#define rx_ad_latch_dac_n011_width                 8
#define rx_ad_latch_dac_n011_endbit                15
#define rx_ad_latch_dac_n011_shift                 0
#define rx_ad_latch_dac_n011_mask                  0xff


#define rx_ad_latch_dac_n100_addr                  0b000011111
#define rx_ad_latch_dac_n100_startbit              8
#define rx_ad_latch_dac_n100_width                 8
#define rx_ad_latch_dac_n100_endbit                15
#define rx_ad_latch_dac_n100_shift                 0
#define rx_ad_latch_dac_n100_mask                  0xff


#define rx_ad_latch_dac_n101_addr                  0b000100000
#define rx_ad_latch_dac_n101_startbit              8
#define rx_ad_latch_dac_n101_width                 8
#define rx_ad_latch_dac_n101_endbit                15
#define rx_ad_latch_dac_n101_shift                 0
#define rx_ad_latch_dac_n101_mask                  0xff


#define rx_ad_latch_dac_n110_addr                  0b000100001
#define rx_ad_latch_dac_n110_startbit              8
#define rx_ad_latch_dac_n110_width                 8
#define rx_ad_latch_dac_n110_endbit                15
#define rx_ad_latch_dac_n110_shift                 0
#define rx_ad_latch_dac_n110_mask                  0xff


#define rx_ad_latch_dac_n111_addr                  0b000100010
#define rx_ad_latch_dac_n111_startbit              8
#define rx_ad_latch_dac_n111_width                 8
#define rx_ad_latch_dac_n111_endbit                15
#define rx_ad_latch_dac_n111_shift                 0
#define rx_ad_latch_dac_n111_mask                  0xff


#define rx_ad_latch_dac_s000_addr                  0b000101011
#define rx_ad_latch_dac_s000_startbit              8
#define rx_ad_latch_dac_s000_width                 8
#define rx_ad_latch_dac_s000_endbit                15
#define rx_ad_latch_dac_s000_shift                 0
#define rx_ad_latch_dac_s000_mask                  0xff


#define rx_ad_latch_dac_s001_addr                  0b000101100
#define rx_ad_latch_dac_s001_startbit              8
#define rx_ad_latch_dac_s001_width                 8
#define rx_ad_latch_dac_s001_endbit                15
#define rx_ad_latch_dac_s001_shift                 0
#define rx_ad_latch_dac_s001_mask                  0xff


#define rx_ad_latch_dac_s010_addr                  0b000101101
#define rx_ad_latch_dac_s010_startbit              8
#define rx_ad_latch_dac_s010_width                 8
#define rx_ad_latch_dac_s010_endbit                15
#define rx_ad_latch_dac_s010_shift                 0
#define rx_ad_latch_dac_s010_mask                  0xff


#define rx_ad_latch_dac_s011_addr                  0b000101110
#define rx_ad_latch_dac_s011_startbit              8
#define rx_ad_latch_dac_s011_width                 8
#define rx_ad_latch_dac_s011_endbit                15
#define rx_ad_latch_dac_s011_shift                 0
#define rx_ad_latch_dac_s011_mask                  0xff


#define rx_ad_latch_dac_s100_addr                  0b000101111
#define rx_ad_latch_dac_s100_startbit              8
#define rx_ad_latch_dac_s100_width                 8
#define rx_ad_latch_dac_s100_endbit                15
#define rx_ad_latch_dac_s100_shift                 0
#define rx_ad_latch_dac_s100_mask                  0xff


#define rx_ad_latch_dac_s101_addr                  0b000110000
#define rx_ad_latch_dac_s101_startbit              8
#define rx_ad_latch_dac_s101_width                 8
#define rx_ad_latch_dac_s101_endbit                15
#define rx_ad_latch_dac_s101_shift                 0
#define rx_ad_latch_dac_s101_mask                  0xff


#define rx_ad_latch_dac_s110_addr                  0b000110001
#define rx_ad_latch_dac_s110_startbit              8
#define rx_ad_latch_dac_s110_width                 8
#define rx_ad_latch_dac_s110_endbit                15
#define rx_ad_latch_dac_s110_shift                 0
#define rx_ad_latch_dac_s110_mask                  0xff


#define rx_ad_latch_dac_s111_addr                  0b000110010
#define rx_ad_latch_dac_s111_startbit              8
#define rx_ad_latch_dac_s111_width                 8
#define rx_ad_latch_dac_s111_endbit                15
#define rx_ad_latch_dac_s111_shift                 0
#define rx_ad_latch_dac_s111_mask                  0xff


#define rx_ad_latch_dac_w000_addr                  0b000110011
#define rx_ad_latch_dac_w000_startbit              8
#define rx_ad_latch_dac_w000_width                 8
#define rx_ad_latch_dac_w000_endbit                15
#define rx_ad_latch_dac_w000_shift                 0
#define rx_ad_latch_dac_w000_mask                  0xff


#define rx_ad_latch_dac_w001_addr                  0b000110100
#define rx_ad_latch_dac_w001_startbit              8
#define rx_ad_latch_dac_w001_width                 8
#define rx_ad_latch_dac_w001_endbit                15
#define rx_ad_latch_dac_w001_shift                 0
#define rx_ad_latch_dac_w001_mask                  0xff


#define rx_ad_latch_dac_w010_addr                  0b000110101
#define rx_ad_latch_dac_w010_startbit              8
#define rx_ad_latch_dac_w010_width                 8
#define rx_ad_latch_dac_w010_endbit                15
#define rx_ad_latch_dac_w010_shift                 0
#define rx_ad_latch_dac_w010_mask                  0xff


#define rx_ad_latch_dac_w011_addr                  0b000110110
#define rx_ad_latch_dac_w011_startbit              8
#define rx_ad_latch_dac_w011_width                 8
#define rx_ad_latch_dac_w011_endbit                15
#define rx_ad_latch_dac_w011_shift                 0
#define rx_ad_latch_dac_w011_mask                  0xff


#define rx_ad_latch_dac_w100_addr                  0b000110111
#define rx_ad_latch_dac_w100_startbit              8
#define rx_ad_latch_dac_w100_width                 8
#define rx_ad_latch_dac_w100_endbit                15
#define rx_ad_latch_dac_w100_shift                 0
#define rx_ad_latch_dac_w100_mask                  0xff


#define rx_ad_latch_dac_w101_addr                  0b000111000
#define rx_ad_latch_dac_w101_startbit              8
#define rx_ad_latch_dac_w101_width                 8
#define rx_ad_latch_dac_w101_endbit                15
#define rx_ad_latch_dac_w101_shift                 0
#define rx_ad_latch_dac_w101_mask                  0xff


#define rx_ad_latch_dac_w110_addr                  0b000111001
#define rx_ad_latch_dac_w110_startbit              8
#define rx_ad_latch_dac_w110_width                 8
#define rx_ad_latch_dac_w110_endbit                15
#define rx_ad_latch_dac_w110_shift                 0
#define rx_ad_latch_dac_w110_mask                  0xff


#define rx_ad_latch_dac_w111_addr                  0b000111010
#define rx_ad_latch_dac_w111_startbit              8
#define rx_ad_latch_dac_w111_width                 8
#define rx_ad_latch_dac_w111_endbit                15
#define rx_ad_latch_dac_w111_shift                 0
#define rx_ad_latch_dac_w111_mask                  0xff


#define rx_ae_latch_dac_e_addr                     0b000010100
#define rx_ae_latch_dac_e_startbit                 8
#define rx_ae_latch_dac_e_width                    8
#define rx_ae_latch_dac_e_endbit                   15
#define rx_ae_latch_dac_e_shift                    0
#define rx_ae_latch_dac_e_mask                     0xff


#define rx_ae_latch_dac_n_addr                     0b000010011
#define rx_ae_latch_dac_n_startbit                 8
#define rx_ae_latch_dac_n_width                    8
#define rx_ae_latch_dac_n_endbit                   15
#define rx_ae_latch_dac_n_shift                    0
#define rx_ae_latch_dac_n_mask                     0xff


#define rx_ae_latch_dac_s_addr                     0b000010101
#define rx_ae_latch_dac_s_startbit                 8
#define rx_ae_latch_dac_s_width                    8
#define rx_ae_latch_dac_s_endbit                   15
#define rx_ae_latch_dac_s_shift                    0
#define rx_ae_latch_dac_s_mask                     0xff


#define rx_ae_latch_dac_w_addr                     0b000010110
#define rx_ae_latch_dac_w_startbit                 8
#define rx_ae_latch_dac_w_width                    8
#define rx_ae_latch_dac_w_endbit                   15
#define rx_ae_latch_dac_w_shift                    0
#define rx_ae_latch_dac_w_mask                     0xff


#define rx_amp_filter_depth_dec0_addr              0b100000100
#define rx_amp_filter_depth_dec0_startbit          4
#define rx_amp_filter_depth_dec0_width             4
#define rx_amp_filter_depth_dec0_endbit            7
#define rx_amp_filter_depth_dec0_shift             8
#define rx_amp_filter_depth_dec0_mask              0xf00


#define rx_amp_filter_depth_dec1_addr              0b100000100
#define rx_amp_filter_depth_dec1_startbit          12
#define rx_amp_filter_depth_dec1_width             4
#define rx_amp_filter_depth_dec1_endbit            15
#define rx_amp_filter_depth_dec1_shift             0
#define rx_amp_filter_depth_dec1_mask              0xf


#define rx_amp_filter_depth_dec2_addr              0b100001001
#define rx_amp_filter_depth_dec2_startbit          4
#define rx_amp_filter_depth_dec2_width             4
#define rx_amp_filter_depth_dec2_endbit            7
#define rx_amp_filter_depth_dec2_shift             8
#define rx_amp_filter_depth_dec2_mask              0xf00


#define rx_amp_filter_depth_dec3_addr              0b100001001
#define rx_amp_filter_depth_dec3_startbit          12
#define rx_amp_filter_depth_dec3_width             4
#define rx_amp_filter_depth_dec3_endbit            15
#define rx_amp_filter_depth_dec3_shift             0
#define rx_amp_filter_depth_dec3_mask              0xf


#define rx_amp_filter_depth_inc0_addr              0b100000100
#define rx_amp_filter_depth_inc0_startbit          0
#define rx_amp_filter_depth_inc0_width             4
#define rx_amp_filter_depth_inc0_endbit            3
#define rx_amp_filter_depth_inc0_shift             12
#define rx_amp_filter_depth_inc0_mask              0xf000


#define rx_amp_filter_depth_inc1_addr              0b100000100
#define rx_amp_filter_depth_inc1_startbit          8
#define rx_amp_filter_depth_inc1_width             4
#define rx_amp_filter_depth_inc1_endbit            11
#define rx_amp_filter_depth_inc1_shift             4
#define rx_amp_filter_depth_inc1_mask              0xf0


#define rx_amp_filter_depth_inc2_addr              0b100001001
#define rx_amp_filter_depth_inc2_startbit          0
#define rx_amp_filter_depth_inc2_width             4
#define rx_amp_filter_depth_inc2_endbit            3
#define rx_amp_filter_depth_inc2_shift             12
#define rx_amp_filter_depth_inc2_mask              0xf000


#define rx_amp_filter_depth_inc3_addr              0b100001001
#define rx_amp_filter_depth_inc3_startbit          8
#define rx_amp_filter_depth_inc3_width             4
#define rx_amp_filter_depth_inc3_endbit            11
#define rx_amp_filter_depth_inc3_shift             4
#define rx_amp_filter_depth_inc3_mask              0xf0


#define rx_amp_hyst_max_addr                       0b101011111
#define rx_amp_hyst_max_startbit                   0
#define rx_amp_hyst_max_width                      8
#define rx_amp_hyst_max_endbit                     7
#define rx_amp_hyst_max_shift                      8
#define rx_amp_hyst_max_mask                       0xff00


#define rx_amp_hyst_min_addr                       0b101100000
#define rx_amp_hyst_min_startbit                   0
#define rx_amp_hyst_min_width                      8
#define rx_amp_hyst_min_endbit                     7
#define rx_amp_hyst_min_shift                      8
#define rx_amp_hyst_min_mask                       0xff00


#define rx_amp_hyst_start_addr                     0b100010100
#define rx_amp_hyst_start_startbit                 0
#define rx_amp_hyst_start_width                    5
#define rx_amp_hyst_start_endbit                   4
#define rx_amp_hyst_start_shift                    11
#define rx_amp_hyst_start_mask                     0xf800


#define rx_amp_inc_dec_amt0_addr                   0b100000101
#define rx_amp_inc_dec_amt0_startbit               0
#define rx_amp_inc_dec_amt0_width                  3
#define rx_amp_inc_dec_amt0_endbit                 2
#define rx_amp_inc_dec_amt0_shift                  13
#define rx_amp_inc_dec_amt0_mask                   0xe000


#define rx_amp_inc_dec_amt1_addr                   0b100000101
#define rx_amp_inc_dec_amt1_startbit               8
#define rx_amp_inc_dec_amt1_width                  3
#define rx_amp_inc_dec_amt1_endbit                 10
#define rx_amp_inc_dec_amt1_shift                  5
#define rx_amp_inc_dec_amt1_mask                   0xe0


#define rx_amp_inc_dec_amt2_addr                   0b100000110
#define rx_amp_inc_dec_amt2_startbit               0
#define rx_amp_inc_dec_amt2_width                  3
#define rx_amp_inc_dec_amt2_endbit                 2
#define rx_amp_inc_dec_amt2_shift                  13
#define rx_amp_inc_dec_amt2_mask                   0xe000


#define rx_amp_inc_dec_amt3_addr                   0b100000110
#define rx_amp_inc_dec_amt3_startbit               8
#define rx_amp_inc_dec_amt3_width                  3
#define rx_amp_inc_dec_amt3_endbit                 10
#define rx_amp_inc_dec_amt3_shift                  5
#define rx_amp_inc_dec_amt3_mask                   0xe0


#define rx_amp_servo_mask_h0_addr                  0b100100001
#define rx_amp_servo_mask_h0_startbit              8
#define rx_amp_servo_mask_h0_width                 1
#define rx_amp_servo_mask_h0_endbit                8
#define rx_amp_servo_mask_h0_shift                 7
#define rx_amp_servo_mask_h0_mask                  0x80


#define rx_amp_servo_restore_dac_addr              0b100100001
#define rx_amp_servo_restore_dac_startbit          0
#define rx_amp_servo_restore_dac_width             1
#define rx_amp_servo_restore_dac_endbit            0
#define rx_amp_servo_restore_dac_shift             15
#define rx_amp_servo_restore_dac_mask              0x8000


#define rx_amp_servo_vote_bias_dec_addr            0b100100001
#define rx_amp_servo_vote_bias_dec_startbit        10
#define rx_amp_servo_vote_bias_dec_width           1
#define rx_amp_servo_vote_bias_dec_endbit          10
#define rx_amp_servo_vote_bias_dec_shift           5
#define rx_amp_servo_vote_bias_dec_mask            0x20


#define rx_amp_servo_vote_bias_inc_addr            0b100100001
#define rx_amp_servo_vote_bias_inc_startbit        9
#define rx_amp_servo_vote_bias_inc_width           1
#define rx_amp_servo_vote_bias_inc_endbit          9
#define rx_amp_servo_vote_bias_inc_shift           6
#define rx_amp_servo_vote_bias_inc_mask            0x40


#define rx_amp_start_val_addr                      0b100001011
#define rx_amp_start_val_startbit                  1
#define rx_amp_start_val_width                     8
#define rx_amp_start_val_endbit                    8
#define rx_amp_start_val_shift                     7
#define rx_amp_start_val_mask                      0x7f80


#define rx_amp_thresh1_addr                        0b100000101
#define rx_amp_thresh1_startbit                    3
#define rx_amp_thresh1_width                       5
#define rx_amp_thresh1_endbit                      7
#define rx_amp_thresh1_shift                       8
#define rx_amp_thresh1_mask                        0x1f00


#define rx_amp_thresh2_addr                        0b100000101
#define rx_amp_thresh2_startbit                    11
#define rx_amp_thresh2_width                       5
#define rx_amp_thresh2_endbit                      15
#define rx_amp_thresh2_shift                       0
#define rx_amp_thresh2_mask                        0x1f


#define rx_amp_thresh3_addr                        0b100000110
#define rx_amp_thresh3_startbit                    3
#define rx_amp_thresh3_width                       5
#define rx_amp_thresh3_endbit                      7
#define rx_amp_thresh3_shift                       8
#define rx_amp_thresh3_mask                        0x1f00


#define rx_amp_thresh4_addr                        0b100000110
#define rx_amp_thresh4_startbit                    11
#define rx_amp_thresh4_width                       5
#define rx_amp_thresh4_endbit                      15
#define rx_amp_thresh4_shift                       0
#define rx_amp_thresh4_mask                        0x1f


#define rx_amp_timeout_addr                        0b100000111
#define rx_amp_timeout_startbit                    0
#define rx_amp_timeout_width                       4
#define rx_amp_timeout_endbit                      3
#define rx_amp_timeout_shift                       12
#define rx_amp_timeout_mask                        0xf000


#define rx_any_init_req_or_reset_addr              0b101011110
#define rx_any_init_req_or_reset_startbit          0
#define rx_any_init_req_or_reset_width             1
#define rx_any_init_req_or_reset_endbit            0
#define rx_any_init_req_or_reset_shift             15
#define rx_any_init_req_or_reset_mask              0x8000


#define rx_b_bank_controls_addr                    0b000000001
#define rx_b_bank_controls_startbit                6
#define rx_b_bank_controls_width                   6
#define rx_b_bank_controls_endbit                  11
#define rx_b_bank_controls_shift                   4
#define rx_b_bank_controls_mask                    0x3f0


#define rx_b_clkslip_addr                          0b000001010
#define rx_b_clkslip_startbit                      5
#define rx_b_clkslip_width                         1
#define rx_b_clkslip_endbit                        5
#define rx_b_clkslip_shift                         10
#define rx_b_clkslip_mask                          0x400


#define rx_b_ctle_gain_addr                        0b000001101
#define rx_b_ctle_gain_startbit                    0
#define rx_b_ctle_gain_width                       4
#define rx_b_ctle_gain_endbit                      3
#define rx_b_ctle_gain_shift                       12
#define rx_b_ctle_gain_mask                        0xf000


#define rx_b_ctle_gain_peak_full_reg_alias_addr    0b000001101
#define rx_b_ctle_gain_peak_full_reg_alias_startbit   0
#define rx_b_ctle_gain_peak_full_reg_alias_width   16
#define rx_b_ctle_gain_peak_full_reg_alias_endbit   15
#define rx_b_ctle_gain_peak_full_reg_alias_shift   0
#define rx_b_ctle_gain_peak_full_reg_alias_mask    0xffff


#define rx_b_ctle_peak1_addr                       0b000001101
#define rx_b_ctle_peak1_startbit                   4
#define rx_b_ctle_peak1_width                      4
#define rx_b_ctle_peak1_endbit                     7
#define rx_b_ctle_peak1_shift                      8
#define rx_b_ctle_peak1_mask                       0xf00


#define rx_b_ctle_peak1_peak2_alias_addr           0b000001101
#define rx_b_ctle_peak1_peak2_alias_startbit       4
#define rx_b_ctle_peak1_peak2_alias_width          8
#define rx_b_ctle_peak1_peak2_alias_endbit         11
#define rx_b_ctle_peak1_peak2_alias_shift          4
#define rx_b_ctle_peak1_peak2_alias_mask           0xff0


#define rx_b_ctle_peak2_addr                       0b000001101
#define rx_b_ctle_peak2_startbit                   8
#define rx_b_ctle_peak2_width                      4
#define rx_b_ctle_peak2_endbit                     11
#define rx_b_ctle_peak2_shift                      4
#define rx_b_ctle_peak2_mask                       0xf0


#define rx_b_fence_en_addr                         0b000001111
#define rx_b_fence_en_startbit                     1
#define rx_b_fence_en_width                        1
#define rx_b_fence_en_endbit                       1
#define rx_b_fence_en_shift                        14
#define rx_b_fence_en_mask                         0x4000


#define rx_b_hold_div_clks_addr                    0b000001010
#define rx_b_hold_div_clks_startbit                7
#define rx_b_hold_div_clks_width                   1
#define rx_b_hold_div_clks_endbit                  7
#define rx_b_hold_div_clks_shift                   8
#define rx_b_hold_div_clks_mask                    0x100


#define rx_b_lane_done_0_15_addr                   0b101001101
#define rx_b_lane_done_0_15_startbit               0
#define rx_b_lane_done_0_15_width                  16
#define rx_b_lane_done_0_15_endbit                 15
#define rx_b_lane_done_0_15_shift                  0
#define rx_b_lane_done_0_15_mask                   0xffff


#define rx_b_lane_done_16_23_addr                  0b101001110
#define rx_b_lane_done_16_23_startbit              0
#define rx_b_lane_done_16_23_width                 8
#define rx_b_lane_done_16_23_endbit                7
#define rx_b_lane_done_16_23_shift                 8
#define rx_b_lane_done_16_23_mask                  0xff00


#define rx_b_lane_fail_0_15_addr                   0b101001001
#define rx_b_lane_fail_0_15_startbit               0
#define rx_b_lane_fail_0_15_width                  16
#define rx_b_lane_fail_0_15_endbit                 15
#define rx_b_lane_fail_0_15_shift                  0
#define rx_b_lane_fail_0_15_mask                   0xffff


#define rx_b_lane_fail_16_23_addr                  0b101001010
#define rx_b_lane_fail_16_23_startbit              8
#define rx_b_lane_fail_16_23_width                 8
#define rx_b_lane_fail_16_23_endbit                15
#define rx_b_lane_fail_16_23_shift                 0
#define rx_b_lane_fail_16_23_mask                  0xff


#define rx_b_lte_gain_addr                         0b000000100
#define rx_b_lte_gain_startbit                     0
#define rx_b_lte_gain_width                        3
#define rx_b_lte_gain_endbit                       2
#define rx_b_lte_gain_shift                        13
#define rx_b_lte_gain_mask                         0xe000


#define rx_b_lte_gain_zero_alias_addr              0b000000100
#define rx_b_lte_gain_zero_alias_startbit          0
#define rx_b_lte_gain_zero_alias_width             6
#define rx_b_lte_gain_zero_alias_endbit            5
#define rx_b_lte_gain_zero_alias_shift             10
#define rx_b_lte_gain_zero_alias_mask              0xfc00


#define rx_b_lte_zero_addr                         0b000000100
#define rx_b_lte_zero_startbit                     3
#define rx_b_lte_zero_width                        3
#define rx_b_lte_zero_endbit                       5
#define rx_b_lte_zero_shift                        10
#define rx_b_lte_zero_mask                         0x1c00


#define rx_b_pr_ew_data_addr                       0b000010010
#define rx_b_pr_ew_data_startbit                   0
#define rx_b_pr_ew_data_width                      5
#define rx_b_pr_ew_data_endbit                     4
#define rx_b_pr_ew_data_shift                      11
#define rx_b_pr_ew_data_mask                       0xf800


#define rx_b_pr_ew_edge_addr                       0b000010010
#define rx_b_pr_ew_edge_startbit                   6
#define rx_b_pr_ew_edge_width                      5
#define rx_b_pr_ew_edge_endbit                     10
#define rx_b_pr_ew_edge_shift                      5
#define rx_b_pr_ew_edge_mask                       0x3e0


#define rx_b_pr_ew_full_reg_addr                   0b000010010
#define rx_b_pr_ew_full_reg_startbit               0
#define rx_b_pr_ew_full_reg_width                  16
#define rx_b_pr_ew_full_reg_endbit                 15
#define rx_b_pr_ew_full_reg_shift                  0
#define rx_b_pr_ew_full_reg_mask                   0xffff


#define rx_b_pr_ns_data_addr                       0b000010001
#define rx_b_pr_ns_data_startbit                   0
#define rx_b_pr_ns_data_width                      5
#define rx_b_pr_ns_data_endbit                     4
#define rx_b_pr_ns_data_shift                      11
#define rx_b_pr_ns_data_mask                       0xf800


#define rx_b_pr_ns_edge_addr                       0b000010001
#define rx_b_pr_ns_edge_startbit                   6
#define rx_b_pr_ns_edge_width                      5
#define rx_b_pr_ns_edge_endbit                     10
#define rx_b_pr_ns_edge_shift                      5
#define rx_b_pr_ns_edge_mask                       0x3e0


#define rx_b_pr_ns_full_reg_addr                   0b000010001
#define rx_b_pr_ns_full_reg_startbit               0
#define rx_b_pr_ns_full_reg_width                  16
#define rx_b_pr_ns_full_reg_endbit                 15
#define rx_b_pr_ns_full_reg_shift                  0
#define rx_b_pr_ns_full_reg_mask                   0xffff


#define rx_b_selclkslip_addr                       0b000001010
#define rx_b_selclkslip_startbit                   10
#define rx_b_selclkslip_width                      2
#define rx_b_selclkslip_endbit                     11
#define rx_b_selclkslip_shift                      4
#define rx_b_selclkslip_mask                       0x30


#define rx_b_spec_mux_sel_addr                     0b000001001
#define rx_b_spec_mux_sel_startbit                 7
#define rx_b_spec_mux_sel_width                    7
#define rx_b_spec_mux_sel_endbit                   13
#define rx_b_spec_mux_sel_shift                    2
#define rx_b_spec_mux_sel_mask                     0x1fc


#define rx_b_tiny_pr_ew_data_addr                  0b000000101
#define rx_b_tiny_pr_ew_data_startbit              4
#define rx_b_tiny_pr_ew_data_width                 4
#define rx_b_tiny_pr_ew_data_endbit                7
#define rx_b_tiny_pr_ew_data_shift                 8
#define rx_b_tiny_pr_ew_data_mask                  0xf00


#define rx_b_tiny_pr_ew_edge_addr                  0b000000101
#define rx_b_tiny_pr_ew_edge_startbit              12
#define rx_b_tiny_pr_ew_edge_width                 4
#define rx_b_tiny_pr_ew_edge_endbit                15
#define rx_b_tiny_pr_ew_edge_shift                 0
#define rx_b_tiny_pr_ew_edge_mask                  0xf


#define rx_b_tiny_pr_ns_data_addr                  0b000000101
#define rx_b_tiny_pr_ns_data_startbit              0
#define rx_b_tiny_pr_ns_data_width                 4
#define rx_b_tiny_pr_ns_data_endbit                3
#define rx_b_tiny_pr_ns_data_shift                 12
#define rx_b_tiny_pr_ns_data_mask                  0xf000


#define rx_b_tiny_pr_ns_edge_addr                  0b000000101
#define rx_b_tiny_pr_ns_edge_startbit              8
#define rx_b_tiny_pr_ns_edge_width                 4
#define rx_b_tiny_pr_ns_edge_endbit                11
#define rx_b_tiny_pr_ns_edge_shift                 4
#define rx_b_tiny_pr_ns_edge_mask                  0xf0


#define rx_bank_rlmclk_dlclk_sel_a_alias_addr      0b001101100
#define rx_bank_rlmclk_dlclk_sel_a_alias_startbit   11
#define rx_bank_rlmclk_dlclk_sel_a_alias_width     3
#define rx_bank_rlmclk_dlclk_sel_a_alias_endbit    13
#define rx_bank_rlmclk_dlclk_sel_a_alias_shift     2
#define rx_bank_rlmclk_dlclk_sel_a_alias_mask      0x1c


#define rx_bank_rlmclk_sel_a_alias_addr            0b001101100
#define rx_bank_rlmclk_sel_a_alias_startbit        11
#define rx_bank_rlmclk_sel_a_alias_width           2
#define rx_bank_rlmclk_sel_a_alias_endbit          12
#define rx_bank_rlmclk_sel_a_alias_shift           3
#define rx_bank_rlmclk_sel_a_alias_mask            0x18


#define rx_bank_sel_a_addr                         0b001101100
#define rx_bank_sel_a_startbit                     11
#define rx_bank_sel_a_width                        1
#define rx_bank_sel_a_endbit                       11
#define rx_bank_sel_a_shift                        4
#define rx_bank_sel_a_mask                         0x10


#define rx_bank_sync_check_en_addr                 0b101000110
#define rx_bank_sync_check_en_startbit             8
#define rx_bank_sync_check_en_width                1
#define rx_bank_sync_check_en_endbit               8
#define rx_bank_sync_check_en_shift                7
#define rx_bank_sync_check_en_mask                 0x80


#define rx_bd_latch_dac_e000_addr                  0b001000011
#define rx_bd_latch_dac_e000_startbit              8
#define rx_bd_latch_dac_e000_width                 8
#define rx_bd_latch_dac_e000_endbit                15
#define rx_bd_latch_dac_e000_shift                 0
#define rx_bd_latch_dac_e000_mask                  0xff


#define rx_bd_latch_dac_e001_addr                  0b001000100
#define rx_bd_latch_dac_e001_startbit              8
#define rx_bd_latch_dac_e001_width                 8
#define rx_bd_latch_dac_e001_endbit                15
#define rx_bd_latch_dac_e001_shift                 0
#define rx_bd_latch_dac_e001_mask                  0xff


#define rx_bd_latch_dac_e010_addr                  0b001000101
#define rx_bd_latch_dac_e010_startbit              8
#define rx_bd_latch_dac_e010_width                 8
#define rx_bd_latch_dac_e010_endbit                15
#define rx_bd_latch_dac_e010_shift                 0
#define rx_bd_latch_dac_e010_mask                  0xff


#define rx_bd_latch_dac_e011_addr                  0b001000110
#define rx_bd_latch_dac_e011_startbit              8
#define rx_bd_latch_dac_e011_width                 8
#define rx_bd_latch_dac_e011_endbit                15
#define rx_bd_latch_dac_e011_shift                 0
#define rx_bd_latch_dac_e011_mask                  0xff


#define rx_bd_latch_dac_e100_addr                  0b001000111
#define rx_bd_latch_dac_e100_startbit              8
#define rx_bd_latch_dac_e100_width                 8
#define rx_bd_latch_dac_e100_endbit                15
#define rx_bd_latch_dac_e100_shift                 0
#define rx_bd_latch_dac_e100_mask                  0xff


#define rx_bd_latch_dac_e101_addr                  0b001001000
#define rx_bd_latch_dac_e101_startbit              8
#define rx_bd_latch_dac_e101_width                 8
#define rx_bd_latch_dac_e101_endbit                15
#define rx_bd_latch_dac_e101_shift                 0
#define rx_bd_latch_dac_e101_mask                  0xff


#define rx_bd_latch_dac_e110_addr                  0b001001001
#define rx_bd_latch_dac_e110_startbit              8
#define rx_bd_latch_dac_e110_width                 8
#define rx_bd_latch_dac_e110_endbit                15
#define rx_bd_latch_dac_e110_shift                 0
#define rx_bd_latch_dac_e110_mask                  0xff


#define rx_bd_latch_dac_e111_addr                  0b001001010
#define rx_bd_latch_dac_e111_startbit              8
#define rx_bd_latch_dac_e111_width                 8
#define rx_bd_latch_dac_e111_endbit                15
#define rx_bd_latch_dac_e111_shift                 0
#define rx_bd_latch_dac_e111_mask                  0xff


#define rx_bd_latch_dac_n000_addr                  0b000111011
#define rx_bd_latch_dac_n000_startbit              8
#define rx_bd_latch_dac_n000_width                 8
#define rx_bd_latch_dac_n000_endbit                15
#define rx_bd_latch_dac_n000_shift                 0
#define rx_bd_latch_dac_n000_mask                  0xff


#define rx_bd_latch_dac_n001_addr                  0b000111100
#define rx_bd_latch_dac_n001_startbit              8
#define rx_bd_latch_dac_n001_width                 8
#define rx_bd_latch_dac_n001_endbit                15
#define rx_bd_latch_dac_n001_shift                 0
#define rx_bd_latch_dac_n001_mask                  0xff


#define rx_bd_latch_dac_n010_addr                  0b000111101
#define rx_bd_latch_dac_n010_startbit              8
#define rx_bd_latch_dac_n010_width                 8
#define rx_bd_latch_dac_n010_endbit                15
#define rx_bd_latch_dac_n010_shift                 0
#define rx_bd_latch_dac_n010_mask                  0xff


#define rx_bd_latch_dac_n011_addr                  0b000111110
#define rx_bd_latch_dac_n011_startbit              8
#define rx_bd_latch_dac_n011_width                 8
#define rx_bd_latch_dac_n011_endbit                15
#define rx_bd_latch_dac_n011_shift                 0
#define rx_bd_latch_dac_n011_mask                  0xff


#define rx_bd_latch_dac_n100_addr                  0b000111111
#define rx_bd_latch_dac_n100_startbit              8
#define rx_bd_latch_dac_n100_width                 8
#define rx_bd_latch_dac_n100_endbit                15
#define rx_bd_latch_dac_n100_shift                 0
#define rx_bd_latch_dac_n100_mask                  0xff


#define rx_bd_latch_dac_n101_addr                  0b001000000
#define rx_bd_latch_dac_n101_startbit              8
#define rx_bd_latch_dac_n101_width                 8
#define rx_bd_latch_dac_n101_endbit                15
#define rx_bd_latch_dac_n101_shift                 0
#define rx_bd_latch_dac_n101_mask                  0xff


#define rx_bd_latch_dac_n110_addr                  0b001000001
#define rx_bd_latch_dac_n110_startbit              8
#define rx_bd_latch_dac_n110_width                 8
#define rx_bd_latch_dac_n110_endbit                15
#define rx_bd_latch_dac_n110_shift                 0
#define rx_bd_latch_dac_n110_mask                  0xff


#define rx_bd_latch_dac_n111_addr                  0b001000010
#define rx_bd_latch_dac_n111_startbit              8
#define rx_bd_latch_dac_n111_width                 8
#define rx_bd_latch_dac_n111_endbit                15
#define rx_bd_latch_dac_n111_shift                 0
#define rx_bd_latch_dac_n111_mask                  0xff


#define rx_bd_latch_dac_s000_addr                  0b001001011
#define rx_bd_latch_dac_s000_startbit              8
#define rx_bd_latch_dac_s000_width                 8
#define rx_bd_latch_dac_s000_endbit                15
#define rx_bd_latch_dac_s000_shift                 0
#define rx_bd_latch_dac_s000_mask                  0xff


#define rx_bd_latch_dac_s001_addr                  0b001001100
#define rx_bd_latch_dac_s001_startbit              8
#define rx_bd_latch_dac_s001_width                 8
#define rx_bd_latch_dac_s001_endbit                15
#define rx_bd_latch_dac_s001_shift                 0
#define rx_bd_latch_dac_s001_mask                  0xff


#define rx_bd_latch_dac_s010_addr                  0b001001101
#define rx_bd_latch_dac_s010_startbit              8
#define rx_bd_latch_dac_s010_width                 8
#define rx_bd_latch_dac_s010_endbit                15
#define rx_bd_latch_dac_s010_shift                 0
#define rx_bd_latch_dac_s010_mask                  0xff


#define rx_bd_latch_dac_s011_addr                  0b001001110
#define rx_bd_latch_dac_s011_startbit              8
#define rx_bd_latch_dac_s011_width                 8
#define rx_bd_latch_dac_s011_endbit                15
#define rx_bd_latch_dac_s011_shift                 0
#define rx_bd_latch_dac_s011_mask                  0xff


#define rx_bd_latch_dac_s100_addr                  0b001001111
#define rx_bd_latch_dac_s100_startbit              8
#define rx_bd_latch_dac_s100_width                 8
#define rx_bd_latch_dac_s100_endbit                15
#define rx_bd_latch_dac_s100_shift                 0
#define rx_bd_latch_dac_s100_mask                  0xff


#define rx_bd_latch_dac_s101_addr                  0b001010000
#define rx_bd_latch_dac_s101_startbit              8
#define rx_bd_latch_dac_s101_width                 8
#define rx_bd_latch_dac_s101_endbit                15
#define rx_bd_latch_dac_s101_shift                 0
#define rx_bd_latch_dac_s101_mask                  0xff


#define rx_bd_latch_dac_s110_addr                  0b001010001
#define rx_bd_latch_dac_s110_startbit              8
#define rx_bd_latch_dac_s110_width                 8
#define rx_bd_latch_dac_s110_endbit                15
#define rx_bd_latch_dac_s110_shift                 0
#define rx_bd_latch_dac_s110_mask                  0xff


#define rx_bd_latch_dac_s111_addr                  0b001010010
#define rx_bd_latch_dac_s111_startbit              8
#define rx_bd_latch_dac_s111_width                 8
#define rx_bd_latch_dac_s111_endbit                15
#define rx_bd_latch_dac_s111_shift                 0
#define rx_bd_latch_dac_s111_mask                  0xff


#define rx_bd_latch_dac_w000_addr                  0b001010011
#define rx_bd_latch_dac_w000_startbit              8
#define rx_bd_latch_dac_w000_width                 8
#define rx_bd_latch_dac_w000_endbit                15
#define rx_bd_latch_dac_w000_shift                 0
#define rx_bd_latch_dac_w000_mask                  0xff


#define rx_bd_latch_dac_w001_addr                  0b001010100
#define rx_bd_latch_dac_w001_startbit              8
#define rx_bd_latch_dac_w001_width                 8
#define rx_bd_latch_dac_w001_endbit                15
#define rx_bd_latch_dac_w001_shift                 0
#define rx_bd_latch_dac_w001_mask                  0xff


#define rx_bd_latch_dac_w010_addr                  0b001010101
#define rx_bd_latch_dac_w010_startbit              8
#define rx_bd_latch_dac_w010_width                 8
#define rx_bd_latch_dac_w010_endbit                15
#define rx_bd_latch_dac_w010_shift                 0
#define rx_bd_latch_dac_w010_mask                  0xff


#define rx_bd_latch_dac_w011_addr                  0b001010110
#define rx_bd_latch_dac_w011_startbit              8
#define rx_bd_latch_dac_w011_width                 8
#define rx_bd_latch_dac_w011_endbit                15
#define rx_bd_latch_dac_w011_shift                 0
#define rx_bd_latch_dac_w011_mask                  0xff


#define rx_bd_latch_dac_w100_addr                  0b001010111
#define rx_bd_latch_dac_w100_startbit              8
#define rx_bd_latch_dac_w100_width                 8
#define rx_bd_latch_dac_w100_endbit                15
#define rx_bd_latch_dac_w100_shift                 0
#define rx_bd_latch_dac_w100_mask                  0xff


#define rx_bd_latch_dac_w101_addr                  0b001011000
#define rx_bd_latch_dac_w101_startbit              8
#define rx_bd_latch_dac_w101_width                 8
#define rx_bd_latch_dac_w101_endbit                15
#define rx_bd_latch_dac_w101_shift                 0
#define rx_bd_latch_dac_w101_mask                  0xff


#define rx_bd_latch_dac_w110_addr                  0b001011001
#define rx_bd_latch_dac_w110_startbit              8
#define rx_bd_latch_dac_w110_width                 8
#define rx_bd_latch_dac_w110_endbit                15
#define rx_bd_latch_dac_w110_shift                 0
#define rx_bd_latch_dac_w110_mask                  0xff


#define rx_bd_latch_dac_w111_addr                  0b001011010
#define rx_bd_latch_dac_w111_startbit              8
#define rx_bd_latch_dac_w111_width                 8
#define rx_bd_latch_dac_w111_endbit                15
#define rx_bd_latch_dac_w111_shift                 0
#define rx_bd_latch_dac_w111_mask                  0xff


#define rx_be_latch_dac_e_addr                     0b000011000
#define rx_be_latch_dac_e_startbit                 8
#define rx_be_latch_dac_e_width                    8
#define rx_be_latch_dac_e_endbit                   15
#define rx_be_latch_dac_e_shift                    0
#define rx_be_latch_dac_e_mask                     0xff


#define rx_be_latch_dac_n_addr                     0b000010111
#define rx_be_latch_dac_n_startbit                 8
#define rx_be_latch_dac_n_width                    8
#define rx_be_latch_dac_n_endbit                   15
#define rx_be_latch_dac_n_shift                    0
#define rx_be_latch_dac_n_mask                     0xff


#define rx_be_latch_dac_s_addr                     0b000011001
#define rx_be_latch_dac_s_startbit                 8
#define rx_be_latch_dac_s_width                    8
#define rx_be_latch_dac_s_endbit                   15
#define rx_be_latch_dac_s_shift                    0
#define rx_be_latch_dac_s_mask                     0xff


#define rx_be_latch_dac_w_addr                     0b000011010
#define rx_be_latch_dac_w_startbit                 8
#define rx_be_latch_dac_w_width                    8
#define rx_be_latch_dac_w_endbit                   15
#define rx_be_latch_dac_w_shift                    0
#define rx_be_latch_dac_w_mask                     0xff


#define rx_ber_en_addr                             0b100100000
#define rx_ber_en_startbit                         0
#define rx_ber_en_width                            1
#define rx_ber_en_endbit                           0
#define rx_ber_en_shift                            15
#define rx_ber_en_mask                             0x8000


#define rx_ber_reset_addr                          0b100110001
#define rx_ber_reset_startbit                      6
#define rx_ber_reset_width                         1
#define rx_ber_reset_endbit                        6
#define rx_ber_reset_shift                         9
#define rx_ber_reset_mask                          0x200


#define rx_ber_timer_running_addr                  0b101010010
#define rx_ber_timer_running_startbit              0
#define rx_ber_timer_running_width                 1
#define rx_ber_timer_running_endbit                0
#define rx_ber_timer_running_shift                 15
#define rx_ber_timer_running_mask                  0x8000


#define rx_ber_timer_sel_addr                      0b100100000
#define rx_ber_timer_sel_startbit                  1
#define rx_ber_timer_sel_width                     4
#define rx_ber_timer_sel_endbit                    4
#define rx_ber_timer_sel_shift                     11
#define rx_ber_timer_sel_mask                      0x7800


#define rx_berpl_cnt_en_exp_sel_alias_addr         0b001100100
#define rx_berpl_cnt_en_exp_sel_alias_startbit     3
#define rx_berpl_cnt_en_exp_sel_alias_width        5
#define rx_berpl_cnt_en_exp_sel_alias_endbit       7
#define rx_berpl_cnt_en_exp_sel_alias_shift        8
#define rx_berpl_cnt_en_exp_sel_alias_mask         0x1f00


#define rx_berpl_count_addr                        0b001110101
#define rx_berpl_count_startbit                    0
#define rx_berpl_count_width                       12
#define rx_berpl_count_endbit                      11
#define rx_berpl_count_shift                       4
#define rx_berpl_count_mask                        0xfff0


#define rx_berpl_count_en_addr                     0b001100100
#define rx_berpl_count_en_startbit                 3
#define rx_berpl_count_en_width                    1
#define rx_berpl_count_en_endbit                   3
#define rx_berpl_count_en_shift                    12
#define rx_berpl_count_en_mask                     0x1000


#define rx_berpl_exp_data_sel_addr                 0b001100100
#define rx_berpl_exp_data_sel_startbit             4
#define rx_berpl_exp_data_sel_width                1
#define rx_berpl_exp_data_sel_endbit               4
#define rx_berpl_exp_data_sel_shift                11
#define rx_berpl_exp_data_sel_mask                 0x800


#define rx_berpl_lane_invert_addr                  0b001100100
#define rx_berpl_lane_invert_startbit              11
#define rx_berpl_lane_invert_width                 1
#define rx_berpl_lane_invert_endbit                11
#define rx_berpl_lane_invert_shift                 4
#define rx_berpl_lane_invert_mask                  0x10


#define rx_berpl_mask_mode_addr                    0b001100100
#define rx_berpl_mask_mode_startbit                8
#define rx_berpl_mask_mode_width                   1
#define rx_berpl_mask_mode_endbit                  8
#define rx_berpl_mask_mode_shift                   7
#define rx_berpl_mask_mode_mask                    0x80


#define rx_berpl_pattern_sel_addr                  0b001100100
#define rx_berpl_pattern_sel_startbit              5
#define rx_berpl_pattern_sel_width                 3
#define rx_berpl_pattern_sel_endbit                7
#define rx_berpl_pattern_sel_shift                 8
#define rx_berpl_pattern_sel_mask                  0x700


#define rx_berpl_prbs_seed_done_addr               0b001110101
#define rx_berpl_prbs_seed_done_startbit           12
#define rx_berpl_prbs_seed_done_width              1
#define rx_berpl_prbs_seed_done_endbit             12
#define rx_berpl_prbs_seed_done_shift              3
#define rx_berpl_prbs_seed_done_mask               0x8


#define rx_berpl_prbs_seed_done_b_addr             0b001110101
#define rx_berpl_prbs_seed_done_b_startbit         13
#define rx_berpl_prbs_seed_done_b_width            1
#define rx_berpl_prbs_seed_done_b_endbit           13
#define rx_berpl_prbs_seed_done_b_shift            2
#define rx_berpl_prbs_seed_done_b_mask             0x4


#define rx_berpl_prbs_seed_mode_addr               0b001101110
#define rx_berpl_prbs_seed_mode_startbit           6
#define rx_berpl_prbs_seed_mode_width              1
#define rx_berpl_prbs_seed_mode_endbit             6
#define rx_berpl_prbs_seed_mode_shift              9
#define rx_berpl_prbs_seed_mode_mask               0x200


#define rx_berpl_sat_thresh_addr                   0b001101011
#define rx_berpl_sat_thresh_startbit               0
#define rx_berpl_sat_thresh_width                  12
#define rx_berpl_sat_thresh_endbit                 11
#define rx_berpl_sat_thresh_shift                  4
#define rx_berpl_sat_thresh_mask                   0xfff0


#define rx_bias_counter_aging_factor_addr          0b001101110
#define rx_bias_counter_aging_factor_startbit      13
#define rx_bias_counter_aging_factor_width         3
#define rx_bias_counter_aging_factor_endbit        15
#define rx_bias_counter_aging_factor_shift         0
#define rx_bias_counter_aging_factor_mask          0x7


#define rx_bist_atten_ac_sel_dc_addr               0b000000111
#define rx_bist_atten_ac_sel_dc_startbit           10
#define rx_bist_atten_ac_sel_dc_width              3
#define rx_bist_atten_ac_sel_dc_endbit             12
#define rx_bist_atten_ac_sel_dc_shift              3
#define rx_bist_atten_ac_sel_dc_mask               0x38


#define rx_bist_atten_dc_sel_dc_addr               0b000000111
#define rx_bist_atten_dc_sel_dc_startbit           7
#define rx_bist_atten_dc_sel_dc_width              3
#define rx_bist_atten_dc_sel_dc_endbit             9
#define rx_bist_atten_dc_sel_dc_shift              6
#define rx_bist_atten_dc_sel_dc_mask               0x1c0


#define rx_bist_cir_alias_addr                     0b000000111
#define rx_bist_cir_alias_startbit                 0
#define rx_bist_cir_alias_width                    16
#define rx_bist_cir_alias_endbit                   15
#define rx_bist_cir_alias_shift                    0
#define rx_bist_cir_alias_mask                     0xffff


#define rx_bist_en_dc_addr                         0b000000111
#define rx_bist_en_dc_startbit                     0
#define rx_bist_en_dc_width                        1
#define rx_bist_en_dc_endbit                       0
#define rx_bist_en_dc_shift                        15
#define rx_bist_en_dc_mask                         0x8000


#define rx_bist_freq_adjust_dc_addr                0b000000111
#define rx_bist_freq_adjust_dc_startbit            13
#define rx_bist_freq_adjust_dc_width               2
#define rx_bist_freq_adjust_dc_endbit              14
#define rx_bist_freq_adjust_dc_shift               1
#define rx_bist_freq_adjust_dc_mask                0x6


#define rx_bist_pr_gray_encode_dis_addr            0b000000111
#define rx_bist_pr_gray_encode_dis_startbit        6
#define rx_bist_pr_gray_encode_dis_width           1
#define rx_bist_pr_gray_encode_dis_endbit          6
#define rx_bist_pr_gray_encode_dis_shift           9
#define rx_bist_pr_gray_encode_dis_mask            0x200


#define rx_bist_pr_pos_addr                        0b000000111
#define rx_bist_pr_pos_startbit                    1
#define rx_bist_pr_pos_width                       5
#define rx_bist_pr_pos_endbit                      5
#define rx_bist_pr_pos_shift                       10
#define rx_bist_pr_pos_mask                        0x7c00


#define rx_bo_time_addr                            0b100001000
#define rx_bo_time_startbit                        0
#define rx_bo_time_width                           5
#define rx_bo_time_endbit                          4
#define rx_bo_time_shift                           11
#define rx_bo_time_mask                            0xf800


#define rx_bump_sl_1ui_done_dl_mask_addr           0b001100100
#define rx_bump_sl_1ui_done_dl_mask_startbit       10
#define rx_bump_sl_1ui_done_dl_mask_width          1
#define rx_bump_sl_1ui_done_dl_mask_endbit         10
#define rx_bump_sl_1ui_done_dl_mask_shift          5
#define rx_bump_sl_1ui_done_dl_mask_mask           0x20


#define rx_bump_sl_1ui_req_dl_mask_addr            0b001100100
#define rx_bump_sl_1ui_req_dl_mask_startbit        9
#define rx_bump_sl_1ui_req_dl_mask_width           1
#define rx_bump_sl_1ui_req_dl_mask_endbit          9
#define rx_bump_sl_1ui_req_dl_mask_shift           6
#define rx_bump_sl_1ui_req_dl_mask_mask            0x40


#define rx_cal_lane_pg_phy_gcrmsg_addr             0b100100001
#define rx_cal_lane_pg_phy_gcrmsg_startbit         3
#define rx_cal_lane_pg_phy_gcrmsg_width            5
#define rx_cal_lane_pg_phy_gcrmsg_endbit           7
#define rx_cal_lane_pg_phy_gcrmsg_shift            8
#define rx_cal_lane_pg_phy_gcrmsg_mask             0x1f00


#define rx_cal_lane_sel_addr                       0b001101100
#define rx_cal_lane_sel_startbit                   9
#define rx_cal_lane_sel_width                      1
#define rx_cal_lane_sel_endbit                     9
#define rx_cal_lane_sel_shift                      6
#define rx_cal_lane_sel_mask                       0x40


#define rx_check_en_alias_addr                     0b101000110
#define rx_check_en_alias_startbit                 0
#define rx_check_en_alias_width                    16
#define rx_check_en_alias_endbit                   15
#define rx_check_en_alias_shift                    0
#define rx_check_en_alias_mask                     0xffff


#define rx_clear_servo_queues_addr                 0b100110100
#define rx_clear_servo_queues_startbit             0
#define rx_clear_servo_queues_width                1
#define rx_clear_servo_queues_endbit               0
#define rx_clear_servo_queues_shift                15
#define rx_clear_servo_queues_mask                 0x8000


#define rx_clk_phase_select_addr                   0b000001000
#define rx_clk_phase_select_startbit               0
#define rx_clk_phase_select_width                  2
#define rx_clk_phase_select_endbit                 1
#define rx_clk_phase_select_shift                  14
#define rx_clk_phase_select_mask                   0xc000


#define rx_clkdist_pdwn_addr                       0b100000001
#define rx_clkdist_pdwn_startbit                   0
#define rx_clkdist_pdwn_width                      1
#define rx_clkdist_pdwn_endbit                     0
#define rx_clkdist_pdwn_shift                      15
#define rx_clkdist_pdwn_mask                       0x8000


#define rx_clr_cal_lane_sel_addr                   0b001110000
#define rx_clr_cal_lane_sel_startbit               1
#define rx_clr_cal_lane_sel_width                  1
#define rx_clr_cal_lane_sel_endbit                 1
#define rx_clr_cal_lane_sel_shift                  14
#define rx_clr_cal_lane_sel_mask                   0x4000


#define rx_clr_par_errs_addr                       0b100100010
#define rx_clr_par_errs_startbit                   14
#define rx_clr_par_errs_width                      1
#define rx_clr_par_errs_endbit                     14
#define rx_clr_par_errs_shift                      1
#define rx_clr_par_errs_mask                       0x2


#define rx_clr_par_errs_and_fir_reset_alias_addr   0b100100010
#define rx_clr_par_errs_and_fir_reset_alias_startbit   14
#define rx_clr_par_errs_and_fir_reset_alias_width   2
#define rx_clr_par_errs_and_fir_reset_alias_endbit   15
#define rx_clr_par_errs_and_fir_reset_alias_shift   0
#define rx_clr_par_errs_and_fir_reset_alias_mask   0x3


#define rx_ctl_datasm_clkdist_pdwn_addr            0b100001011
#define rx_ctl_datasm_clkdist_pdwn_startbit        0
#define rx_ctl_datasm_clkdist_pdwn_width           1
#define rx_ctl_datasm_clkdist_pdwn_endbit          0
#define rx_ctl_datasm_clkdist_pdwn_shift           15
#define rx_ctl_datasm_clkdist_pdwn_mask            0x8000


#define rx_ctle_config_dc_addr                     0b000001000
#define rx_ctle_config_dc_startbit                 5
#define rx_ctle_config_dc_width                    3
#define rx_ctle_config_dc_endbit                   7
#define rx_ctle_config_dc_shift                    8
#define rx_ctle_config_dc_mask                     0x700


#define rx_ctle_converge_down_enable_addr          0b100010111
#define rx_ctle_converge_down_enable_startbit      7
#define rx_ctle_converge_down_enable_width         1
#define rx_ctle_converge_down_enable_endbit        7
#define rx_ctle_converge_down_enable_shift         8
#define rx_ctle_converge_down_enable_mask          0x100


#define rx_ctle_converge_up_enable_addr            0b100010111
#define rx_ctle_converge_up_enable_startbit        6
#define rx_ctle_converge_up_enable_width           1
#define rx_ctle_converge_up_enable_endbit          6
#define rx_ctle_converge_up_enable_shift           9
#define rx_ctle_converge_up_enable_mask            0x200


#define rx_ctle_data_src_addr                      0b100000011
#define rx_ctle_data_src_startbit                  12
#define rx_ctle_data_src_width                     1
#define rx_ctle_data_src_endbit                    12
#define rx_ctle_data_src_shift                     3
#define rx_ctle_data_src_mask                      0x8


#define rx_ctle_dir_chg_cnt_addr                   0b101100001
#define rx_ctle_dir_chg_cnt_startbit               0
#define rx_ctle_dir_chg_cnt_width                  5
#define rx_ctle_dir_chg_cnt_endbit                 4
#define rx_ctle_dir_chg_cnt_shift                  11
#define rx_ctle_dir_chg_cnt_mask                   0xf800


#define rx_ctle_filter_depth_addr                  0b100000011
#define rx_ctle_filter_depth_startbit              0
#define rx_ctle_filter_depth_width                 4
#define rx_ctle_filter_depth_endbit                3
#define rx_ctle_filter_depth_shift                 12
#define rx_ctle_filter_depth_mask                  0xf000


#define rx_ctle_format_addr                        0b100000011
#define rx_ctle_format_startbit                    13
#define rx_ctle_format_width                       1
#define rx_ctle_format_endbit                      13
#define rx_ctle_format_shift                       2
#define rx_ctle_format_mask                        0x4


#define rx_ctle_gain_check_en_addr                 0b101000110
#define rx_ctle_gain_check_en_startbit             0
#define rx_ctle_gain_check_en_width                1
#define rx_ctle_gain_check_en_endbit               0
#define rx_ctle_gain_check_en_shift                15
#define rx_ctle_gain_check_en_mask                 0x8000


#define rx_ctle_peak1_check_en_addr                0b101000110
#define rx_ctle_peak1_check_en_startbit            4
#define rx_ctle_peak1_check_en_width               1
#define rx_ctle_peak1_check_en_endbit              4
#define rx_ctle_peak1_check_en_shift               11
#define rx_ctle_peak1_check_en_mask                0x800


#define rx_ctle_peak1_filter_ena_addr              0b100001101
#define rx_ctle_peak1_filter_ena_startbit          0
#define rx_ctle_peak1_filter_ena_width             4
#define rx_ctle_peak1_filter_ena_endbit            3
#define rx_ctle_peak1_filter_ena_shift             12
#define rx_ctle_peak1_filter_ena_mask              0xf000


#define rx_ctle_peak1_filter_pat_addr              0b100001101
#define rx_ctle_peak1_filter_pat_startbit          4
#define rx_ctle_peak1_filter_pat_width             4
#define rx_ctle_peak1_filter_pat_endbit            7
#define rx_ctle_peak1_filter_pat_shift             8
#define rx_ctle_peak1_filter_pat_mask              0xf00


#define rx_ctle_peak1_h_sel_addr                   0b100010111
#define rx_ctle_peak1_h_sel_startbit               0
#define rx_ctle_peak1_h_sel_width                  2
#define rx_ctle_peak1_h_sel_endbit                 1
#define rx_ctle_peak1_h_sel_shift                  14
#define rx_ctle_peak1_h_sel_mask                   0xc000


#define rx_ctle_peak1_invalid_lock_en_addr         0b100010111
#define rx_ctle_peak1_invalid_lock_en_startbit     4
#define rx_ctle_peak1_invalid_lock_en_width        1
#define rx_ctle_peak1_invalid_lock_en_endbit       4
#define rx_ctle_peak1_invalid_lock_en_shift        11
#define rx_ctle_peak1_invalid_lock_en_mask         0x800


#define rx_ctle_peak1_invalid_lock_thresh_dec_addr   0b100011000
#define rx_ctle_peak1_invalid_lock_thresh_dec_startbit   4
#define rx_ctle_peak1_invalid_lock_thresh_dec_width   4
#define rx_ctle_peak1_invalid_lock_thresh_dec_endbit   7
#define rx_ctle_peak1_invalid_lock_thresh_dec_shift   8
#define rx_ctle_peak1_invalid_lock_thresh_dec_mask   0xf00


#define rx_ctle_peak1_invalid_lock_thresh_inc_addr   0b100011000
#define rx_ctle_peak1_invalid_lock_thresh_inc_startbit   0
#define rx_ctle_peak1_invalid_lock_thresh_inc_width   4
#define rx_ctle_peak1_invalid_lock_thresh_inc_endbit   3
#define rx_ctle_peak1_invalid_lock_thresh_inc_shift   12
#define rx_ctle_peak1_invalid_lock_thresh_inc_mask   0xf000


#define rx_ctle_peak2_check_en_addr                0b101000110
#define rx_ctle_peak2_check_en_startbit            5
#define rx_ctle_peak2_check_en_width               1
#define rx_ctle_peak2_check_en_endbit              5
#define rx_ctle_peak2_check_en_shift               10
#define rx_ctle_peak2_check_en_mask                0x400


#define rx_ctle_peak2_filter_ena_addr              0b100001101
#define rx_ctle_peak2_filter_ena_startbit          8
#define rx_ctle_peak2_filter_ena_width             4
#define rx_ctle_peak2_filter_ena_endbit            11
#define rx_ctle_peak2_filter_ena_shift             4
#define rx_ctle_peak2_filter_ena_mask              0xf0


#define rx_ctle_peak2_filter_pat_addr              0b100001101
#define rx_ctle_peak2_filter_pat_startbit          12
#define rx_ctle_peak2_filter_pat_width             4
#define rx_ctle_peak2_filter_pat_endbit            15
#define rx_ctle_peak2_filter_pat_shift             0
#define rx_ctle_peak2_filter_pat_mask              0xf


#define rx_ctle_peak2_h_sel_addr                   0b100010111
#define rx_ctle_peak2_h_sel_startbit               2
#define rx_ctle_peak2_h_sel_width                  2
#define rx_ctle_peak2_h_sel_endbit                 3
#define rx_ctle_peak2_h_sel_shift                  12
#define rx_ctle_peak2_h_sel_mask                   0x3000


#define rx_ctle_peak2_invalid_lock_en_addr         0b100010111
#define rx_ctle_peak2_invalid_lock_en_startbit     5
#define rx_ctle_peak2_invalid_lock_en_width        1
#define rx_ctle_peak2_invalid_lock_en_endbit       5
#define rx_ctle_peak2_invalid_lock_en_shift        10
#define rx_ctle_peak2_invalid_lock_en_mask         0x400


#define rx_ctle_peak2_invalid_lock_thresh_dec_addr   0b100011000
#define rx_ctle_peak2_invalid_lock_thresh_dec_startbit   12
#define rx_ctle_peak2_invalid_lock_thresh_dec_width   4
#define rx_ctle_peak2_invalid_lock_thresh_dec_endbit   15
#define rx_ctle_peak2_invalid_lock_thresh_dec_shift   0
#define rx_ctle_peak2_invalid_lock_thresh_dec_mask   0xf


#define rx_ctle_peak2_invalid_lock_thresh_inc_addr   0b100011000
#define rx_ctle_peak2_invalid_lock_thresh_inc_startbit   8
#define rx_ctle_peak2_invalid_lock_thresh_inc_width   4
#define rx_ctle_peak2_invalid_lock_thresh_inc_endbit   11
#define rx_ctle_peak2_invalid_lock_thresh_inc_shift   4
#define rx_ctle_peak2_invalid_lock_thresh_inc_mask   0xf0


#define rx_ctle_thresh4_addr                       0b100000011
#define rx_ctle_thresh4_startbit                   4
#define rx_ctle_thresh4_width                      5
#define rx_ctle_thresh4_endbit                     8
#define rx_ctle_thresh4_shift                      7
#define rx_ctle_thresh4_mask                       0xf80


#define rx_ctle_timeout_addr                       0b100000111
#define rx_ctle_timeout_startbit                   8
#define rx_ctle_timeout_width                      4
#define rx_ctle_timeout_endbit                     11
#define rx_ctle_timeout_shift                      4
#define rx_ctle_timeout_mask                       0xf0


#define rx_ctle_vote_diff_addr                     0b101100001
#define rx_ctle_vote_diff_startbit                 5
#define rx_ctle_vote_diff_width                    11
#define rx_ctle_vote_diff_endbit                   15
#define rx_ctle_vote_diff_shift                    0
#define rx_ctle_vote_diff_mask                     0x7ff


#define rx_ctle_vote_ratio_cfg_addr                0b100000011
#define rx_ctle_vote_ratio_cfg_startbit            9
#define rx_ctle_vote_ratio_cfg_width               3
#define rx_ctle_vote_ratio_cfg_endbit              11
#define rx_ctle_vote_ratio_cfg_shift               4
#define rx_ctle_vote_ratio_cfg_mask                0x70


#define rx_ctle_vote_win_both_addr                 0b100000011
#define rx_ctle_vote_win_both_startbit             14
#define rx_ctle_vote_win_both_width                1
#define rx_ctle_vote_win_both_endbit               14
#define rx_ctle_vote_win_both_shift                1
#define rx_ctle_vote_win_both_mask                 0x2


#define rx_dac_test_check_en_addr                  0b101000110
#define rx_dac_test_check_en_startbit              15
#define rx_dac_test_check_en_width                 1
#define rx_dac_test_check_en_endbit                15
#define rx_dac_test_check_en_shift                 0
#define rx_dac_test_check_en_mask                  0x1


#define rx_dactt_banka_samplat_data_addr           0b001110010
#define rx_dactt_banka_samplat_data_startbit       13
#define rx_dactt_banka_samplat_data_width          1
#define rx_dactt_banka_samplat_data_endbit         13
#define rx_dactt_banka_samplat_data_shift          2
#define rx_dactt_banka_samplat_data_mask           0x4


#define rx_dactt_bankb_samplat_data_addr           0b001110010
#define rx_dactt_bankb_samplat_data_startbit       14
#define rx_dactt_bankb_samplat_data_width          1
#define rx_dactt_bankb_samplat_data_endbit         14
#define rx_dactt_bankb_samplat_data_shift          1
#define rx_dactt_bankb_samplat_data_mask           0x2


#define rx_dactt_bo_timer_cfg_addr                 0b001111111
#define rx_dactt_bo_timer_cfg_startbit             5
#define rx_dactt_bo_timer_cfg_width                5
#define rx_dactt_bo_timer_cfg_endbit               9
#define rx_dactt_bo_timer_cfg_shift                6
#define rx_dactt_bo_timer_cfg_mask                 0x7c0


#define rx_dactt_bo_timer_mask_addr                0b001111111
#define rx_dactt_bo_timer_mask_startbit            10
#define rx_dactt_bo_timer_mask_width               1
#define rx_dactt_bo_timer_mask_endbit              10
#define rx_dactt_bo_timer_mask_shift               5
#define rx_dactt_bo_timer_mask_mask                0x20


#define rx_dactt_data_dac_banka_sel_addr           0b001110001
#define rx_dactt_data_dac_banka_sel_startbit       6
#define rx_dactt_data_dac_banka_sel_width          5
#define rx_dactt_data_dac_banka_sel_endbit         10
#define rx_dactt_data_dac_banka_sel_shift          5
#define rx_dactt_data_dac_banka_sel_mask           0x3e0


#define rx_dactt_data_dac_bankb_sel_addr           0b001110001
#define rx_dactt_data_dac_bankb_sel_startbit       11
#define rx_dactt_data_dac_bankb_sel_width          5
#define rx_dactt_data_dac_bankb_sel_endbit         15
#define rx_dactt_data_dac_bankb_sel_shift          0
#define rx_dactt_data_dac_bankb_sel_mask           0x1f


#define rx_dactt_data_pulldn_banka_enb_addr        0b001111110
#define rx_dactt_data_pulldn_banka_enb_startbit    4
#define rx_dactt_data_pulldn_banka_enb_width       1
#define rx_dactt_data_pulldn_banka_enb_endbit      4
#define rx_dactt_data_pulldn_banka_enb_shift       11
#define rx_dactt_data_pulldn_banka_enb_mask        0x800


#define rx_dactt_data_pulldn_bankb_enb_addr        0b001111110
#define rx_dactt_data_pulldn_bankb_enb_startbit    10
#define rx_dactt_data_pulldn_bankb_enb_width       1
#define rx_dactt_data_pulldn_bankb_enb_endbit      10
#define rx_dactt_data_pulldn_bankb_enb_shift       5
#define rx_dactt_data_pulldn_bankb_enb_mask        0x20


#define rx_dactt_datapN_swap_banka_enb_addr        0b001111110
#define rx_dactt_datapN_swap_banka_enb_startbit    2
#define rx_dactt_datapN_swap_banka_enb_width       1
#define rx_dactt_datapN_swap_banka_enb_endbit      2
#define rx_dactt_datapN_swap_banka_enb_shift       13
#define rx_dactt_datapN_swap_banka_enb_mask        0x2000


#define rx_dactt_datapN_swap_bankb_enb_addr        0b001111110
#define rx_dactt_datapN_swap_bankb_enb_startbit    8
#define rx_dactt_datapN_swap_bankb_enb_width       1
#define rx_dactt_datapN_swap_bankb_enb_endbit      8
#define rx_dactt_datapN_swap_bankb_enb_shift       7
#define rx_dactt_datapN_swap_bankb_enb_mask        0x80


#define rx_dactt_done_banka_addr                   0b000001100
#define rx_dactt_done_banka_startbit               0
#define rx_dactt_done_banka_width                  4
#define rx_dactt_done_banka_endbit                 3
#define rx_dactt_done_banka_shift                  12
#define rx_dactt_done_banka_mask                   0xf000


#define rx_dactt_done_bankb_addr                   0b000001100
#define rx_dactt_done_bankb_startbit               4
#define rx_dactt_done_bankb_width                  4
#define rx_dactt_done_bankb_endbit                 7
#define rx_dactt_done_bankb_shift                  8
#define rx_dactt_done_bankb_mask                   0xf00


#define rx_dactt_edge_dac_banka_sel_addr           0b001111110
#define rx_dactt_edge_dac_banka_sel_startbit       0
#define rx_dactt_edge_dac_banka_sel_width          2
#define rx_dactt_edge_dac_banka_sel_endbit         1
#define rx_dactt_edge_dac_banka_sel_shift          14
#define rx_dactt_edge_dac_banka_sel_mask           0xc000


#define rx_dactt_edge_dac_bankb_sel_addr           0b001111110
#define rx_dactt_edge_dac_bankb_sel_startbit       6
#define rx_dactt_edge_dac_bankb_sel_width          2
#define rx_dactt_edge_dac_bankb_sel_endbit         7
#define rx_dactt_edge_dac_bankb_sel_shift          8
#define rx_dactt_edge_dac_bankb_sel_mask           0x300


#define rx_dactt_edge_pulldn_banka_enb_addr        0b001111110
#define rx_dactt_edge_pulldn_banka_enb_startbit    5
#define rx_dactt_edge_pulldn_banka_enb_width       1
#define rx_dactt_edge_pulldn_banka_enb_endbit      5
#define rx_dactt_edge_pulldn_banka_enb_shift       10
#define rx_dactt_edge_pulldn_banka_enb_mask        0x400


#define rx_dactt_edge_pulldn_bankb_enb_addr        0b001111110
#define rx_dactt_edge_pulldn_bankb_enb_startbit    11
#define rx_dactt_edge_pulldn_bankb_enb_width       1
#define rx_dactt_edge_pulldn_bankb_enb_endbit      11
#define rx_dactt_edge_pulldn_bankb_enb_shift       4
#define rx_dactt_edge_pulldn_bankb_enb_mask        0x10


#define rx_dactt_edgepN_swap_banka_enb_addr        0b001111110
#define rx_dactt_edgepN_swap_banka_enb_startbit    3
#define rx_dactt_edgepN_swap_banka_enb_width       1
#define rx_dactt_edgepN_swap_banka_enb_endbit      3
#define rx_dactt_edgepN_swap_banka_enb_shift       12
#define rx_dactt_edgepN_swap_banka_enb_mask        0x1000


#define rx_dactt_edgepN_swap_bankb_enb_addr        0b001111110
#define rx_dactt_edgepN_swap_bankb_enb_startbit    9
#define rx_dactt_edgepN_swap_bankb_enb_width       1
#define rx_dactt_edgepN_swap_bankb_enb_endbit      9
#define rx_dactt_edgepN_swap_bankb_enb_shift       6
#define rx_dactt_edgepN_swap_bankb_enb_mask        0x40


#define rx_dactt_fail_banka_addr                   0b000001100
#define rx_dactt_fail_banka_startbit               8
#define rx_dactt_fail_banka_width                  1
#define rx_dactt_fail_banka_endbit                 8
#define rx_dactt_fail_banka_shift                  7
#define rx_dactt_fail_banka_mask                   0x80


#define rx_dactt_fail_bankb_addr                   0b000001100
#define rx_dactt_fail_bankb_startbit               9
#define rx_dactt_fail_bankb_width                  1
#define rx_dactt_fail_bankb_endbit                 9
#define rx_dactt_fail_bankb_shift                  6
#define rx_dactt_fail_bankb_mask                   0x40


#define rx_dactt_linear_delta_cfg_addr             0b001111111
#define rx_dactt_linear_delta_cfg_startbit         0
#define rx_dactt_linear_delta_cfg_width            5
#define rx_dactt_linear_delta_cfg_endbit           4
#define rx_dactt_linear_delta_cfg_shift            11
#define rx_dactt_linear_delta_cfg_mask             0xf800


#define rx_dactt_regrw_mux_enb_addr                0b001111110
#define rx_dactt_regrw_mux_enb_startbit            13
#define rx_dactt_regrw_mux_enb_width               1
#define rx_dactt_regrw_mux_enb_endbit              13
#define rx_dactt_regrw_mux_enb_shift               2
#define rx_dactt_regrw_mux_enb_mask                0x4


#define rx_dactt_test_circuit_enb_addr             0b001111110
#define rx_dactt_test_circuit_enb_startbit         12
#define rx_dactt_test_circuit_enb_width            1
#define rx_dactt_test_circuit_enb_endbit           12
#define rx_dactt_test_circuit_enb_shift            3
#define rx_dactt_test_circuit_enb_mask             0x8


#define rx_data_pipe_alt_0_7_addr                  0b101101000
#define rx_data_pipe_alt_0_7_startbit              0
#define rx_data_pipe_alt_0_7_width                 8
#define rx_data_pipe_alt_0_7_endbit                7
#define rx_data_pipe_alt_0_7_shift                 8
#define rx_data_pipe_alt_0_7_mask                  0xff00


#define rx_data_pipe_capture_addr                  0b100110001
#define rx_data_pipe_capture_startbit              4
#define rx_data_pipe_capture_width                 1
#define rx_data_pipe_capture_endbit                4
#define rx_data_pipe_capture_shift                 11
#define rx_data_pipe_capture_mask                  0x800


#define rx_data_pipe_clr_on_read_mode_addr         0b100000010
#define rx_data_pipe_clr_on_read_mode_startbit     12
#define rx_data_pipe_clr_on_read_mode_width        1
#define rx_data_pipe_clr_on_read_mode_endbit       12
#define rx_data_pipe_clr_on_read_mode_shift        3
#define rx_data_pipe_clr_on_read_mode_mask         0x8


#define rx_data_pipe_main_0_15_addr                0b101010101
#define rx_data_pipe_main_0_15_startbit            0
#define rx_data_pipe_main_0_15_width               16
#define rx_data_pipe_main_0_15_endbit              15
#define rx_data_pipe_main_0_15_shift               0
#define rx_data_pipe_main_0_15_mask                0xffff


#define rx_data_pipe_main_16_31_addr               0b101010110
#define rx_data_pipe_main_16_31_startbit           0
#define rx_data_pipe_main_16_31_width              16
#define rx_data_pipe_main_16_31_endbit             15
#define rx_data_pipe_main_16_31_shift              0
#define rx_data_pipe_main_16_31_mask               0xffff


#define rx_ddc_check_en_addr                       0b101000110
#define rx_ddc_check_en_startbit                   12
#define rx_ddc_check_en_width                      1
#define rx_ddc_check_en_endbit                     12
#define rx_ddc_check_en_shift                      3
#define rx_ddc_check_en_mask                       0x8


#define rx_dfe_check_en_addr                       0b101000110
#define rx_dfe_check_en_startbit                   11
#define rx_dfe_check_en_width                      1
#define rx_dfe_check_en_endbit                     11
#define rx_dfe_check_en_shift                      4
#define rx_dfe_check_en_mask                       0x10


#define rx_dfe_h1_check_en_addr                    0b101000110
#define rx_dfe_h1_check_en_startbit                10
#define rx_dfe_h1_check_en_width                   1
#define rx_dfe_h1_check_en_endbit                  10
#define rx_dfe_h1_check_en_shift                   5
#define rx_dfe_h1_check_en_mask                    0x20


#define rx_dl_clk_en_addr                          0b001101100
#define rx_dl_clk_en_startbit                      14
#define rx_dl_clk_en_width                         1
#define rx_dl_clk_en_endbit                        14
#define rx_dl_clk_en_shift                         1
#define rx_dl_clk_en_mask                          0x2


#define rx_dl_clk_phase_select_addr                0b000001000
#define rx_dl_clk_phase_select_startbit            10
#define rx_dl_clk_phase_select_width               2
#define rx_dl_clk_phase_select_endbit              11
#define rx_dl_clk_phase_select_shift               4
#define rx_dl_clk_phase_select_mask                0x30


#define rx_dl_clk_sel_a_addr                       0b001101100
#define rx_dl_clk_sel_a_startbit                   13
#define rx_dl_clk_sel_a_width                      1
#define rx_dl_clk_sel_a_endbit                     13
#define rx_dl_clk_sel_a_shift                      2
#define rx_dl_clk_sel_a_mask                       0x4


#define rx_dl_phy_recal_abort_addr                 0b001111100
#define rx_dl_phy_recal_abort_startbit             2
#define rx_dl_phy_recal_abort_width                1
#define rx_dl_phy_recal_abort_endbit               2
#define rx_dl_phy_recal_abort_shift                13
#define rx_dl_phy_recal_abort_mask                 0x2000


#define rx_dl_phy_recal_abort_sticky_addr          0b001111100
#define rx_dl_phy_recal_abort_sticky_startbit      3
#define rx_dl_phy_recal_abort_sticky_width         1
#define rx_dl_phy_recal_abort_sticky_endbit        3
#define rx_dl_phy_recal_abort_sticky_shift         12
#define rx_dl_phy_recal_abort_sticky_mask          0x1000


#define rx_dl_phy_recal_abort_sticky_clr_addr      0b001111001
#define rx_dl_phy_recal_abort_sticky_clr_startbit   4
#define rx_dl_phy_recal_abort_sticky_clr_width     1
#define rx_dl_phy_recal_abort_sticky_clr_endbit    4
#define rx_dl_phy_recal_abort_sticky_clr_shift     11
#define rx_dl_phy_recal_abort_sticky_clr_mask      0x800


#define rx_dl_phy_recal_req_addr                   0b001111100
#define rx_dl_phy_recal_req_startbit               1
#define rx_dl_phy_recal_req_width                  1
#define rx_dl_phy_recal_req_endbit                 1
#define rx_dl_phy_recal_req_shift                  14
#define rx_dl_phy_recal_req_mask                   0x4000


#define rx_dl_phy_recal_req_0_15_addr              0b101100110
#define rx_dl_phy_recal_req_0_15_startbit          0
#define rx_dl_phy_recal_req_0_15_width             16
#define rx_dl_phy_recal_req_0_15_endbit            15
#define rx_dl_phy_recal_req_0_15_shift             0
#define rx_dl_phy_recal_req_0_15_mask              0xffff


#define rx_dl_phy_recal_req_16_23_addr             0b101100111
#define rx_dl_phy_recal_req_16_23_startbit         0
#define rx_dl_phy_recal_req_16_23_width            8
#define rx_dl_phy_recal_req_16_23_endbit           7
#define rx_dl_phy_recal_req_16_23_shift            8
#define rx_dl_phy_recal_req_16_23_mask             0xff00


#define rx_dl_phy_run_lane_addr                    0b001111100
#define rx_dl_phy_run_lane_startbit                0
#define rx_dl_phy_run_lane_width                   1
#define rx_dl_phy_run_lane_endbit                  0
#define rx_dl_phy_run_lane_shift                   15
#define rx_dl_phy_run_lane_mask                    0x8000


#define rx_dl_phy_run_lane_0_15_addr               0b101100100
#define rx_dl_phy_run_lane_0_15_startbit           0
#define rx_dl_phy_run_lane_0_15_width              16
#define rx_dl_phy_run_lane_0_15_endbit             15
#define rx_dl_phy_run_lane_0_15_shift              0
#define rx_dl_phy_run_lane_0_15_mask               0xffff


#define rx_dl_phy_run_lane_16_23_addr              0b101100101
#define rx_dl_phy_run_lane_16_23_startbit          0
#define rx_dl_phy_run_lane_16_23_width             8
#define rx_dl_phy_run_lane_16_23_endbit            7
#define rx_dl_phy_run_lane_16_23_shift             8
#define rx_dl_phy_run_lane_16_23_mask              0xff00


#define rx_dpr_vbn_cal_addr                        0b000001000
#define rx_dpr_vbn_cal_startbit                    2
#define rx_dpr_vbn_cal_width                       2
#define rx_dpr_vbn_cal_endbit                      3
#define rx_dpr_vbn_cal_shift                       12
#define rx_dpr_vbn_cal_mask                        0x3000


#define rx_eoff_check_en_addr                      0b101000110
#define rx_eoff_check_en_startbit                  2
#define rx_eoff_check_en_width                     1
#define rx_eoff_check_en_endbit                    2
#define rx_eoff_check_en_shift                     13
#define rx_eoff_check_en_mask                      0x2000


#define rx_eoff_poff_check_en_addr                 0b101000110
#define rx_eoff_poff_check_en_startbit             3
#define rx_eoff_poff_check_en_width                1
#define rx_eoff_poff_check_en_endbit               3
#define rx_eoff_poff_check_en_shift                12
#define rx_eoff_poff_check_en_mask                 0x1000


#define rx_err_trap_en_addr                        0b001101110
#define rx_err_trap_en_startbit                    7
#define rx_err_trap_en_width                       1
#define rx_err_trap_en_endbit                      7
#define rx_err_trap_en_shift                       8
#define rx_err_trap_en_mask                        0x100


#define rx_err_trap_mask_addr                      0b001101110
#define rx_err_trap_mask_startbit                  9
#define rx_err_trap_mask_width                     4
#define rx_err_trap_mask_endbit                    12
#define rx_err_trap_mask_shift                     3
#define rx_err_trap_mask_mask                      0x78


#define rx_err_trap_rst_addr                       0b001110000
#define rx_err_trap_rst_startbit                   12
#define rx_err_trap_rst_width                      1
#define rx_err_trap_rst_endbit                     12
#define rx_err_trap_rst_shift                      3
#define rx_err_trap_rst_mask                       0x8


#define rx_err_trapped_addr                        0b001110101
#define rx_err_trapped_startbit                    14
#define rx_err_trapped_width                       1
#define rx_err_trapped_endbit                      14
#define rx_err_trapped_shift                       1
#define rx_err_trapped_mask                        0x2


#define rx_error_vec_0_15_addr                     0b001110110
#define rx_error_vec_0_15_startbit                 0
#define rx_error_vec_0_15_width                    16
#define rx_error_vec_0_15_endbit                   15
#define rx_error_vec_0_15_shift                    0
#define rx_error_vec_0_15_mask                     0xffff


#define rx_error_vec_16_31_addr                    0b001110111
#define rx_error_vec_16_31_startbit                0
#define rx_error_vec_16_31_width                   16
#define rx_error_vec_16_31_endbit                  15
#define rx_error_vec_16_31_shift                   0
#define rx_error_vec_16_31_mask                    0xffff


#define rx_fir_reset_addr                          0b100100010
#define rx_fir_reset_startbit                      15
#define rx_fir_reset_width                         1
#define rx_fir_reset_endbit                        15
#define rx_fir_reset_shift                         0
#define rx_fir_reset_mask                          0x1


#define rx_freq_adjust_addr                        0b000001011
#define rx_freq_adjust_startbit                    1
#define rx_freq_adjust_width                       5
#define rx_freq_adjust_endbit                      5
#define rx_freq_adjust_shift                       10
#define rx_freq_adjust_mask                        0x7c00


#define rx_hold_div_clks_ab_alias_addr             0b000001010
#define rx_hold_div_clks_ab_alias_startbit         6
#define rx_hold_div_clks_ab_alias_width            2
#define rx_hold_div_clks_ab_alias_endbit           7
#define rx_hold_div_clks_ab_alias_shift            8
#define rx_hold_div_clks_ab_alias_mask             0x300


#define rx_if_bleed_cmfb_addr                      0b000001010
#define rx_if_bleed_cmfb_startbit                  0
#define rx_if_bleed_cmfb_width                     1
#define rx_if_bleed_cmfb_endbit                    0
#define rx_if_bleed_cmfb_shift                     15
#define rx_if_bleed_cmfb_mask                      0x8000


#define rx_if_ext_bias_addr                        0b000001010
#define rx_if_ext_bias_startbit                    1
#define rx_if_ext_bias_width                       1
#define rx_if_ext_bias_endbit                      1
#define rx_if_ext_bias_shift                       14
#define rx_if_ext_bias_mask                        0x4000


#define rx_if_lpf_500m_addr                        0b000001010
#define rx_if_lpf_500m_startbit                    2
#define rx_if_lpf_500m_width                       1
#define rx_if_lpf_500m_endbit                      2
#define rx_if_lpf_500m_shift                       13
#define rx_if_lpf_500m_mask                        0x2000


#define rx_init_done_dl_mask_addr                  0b001111010
#define rx_init_done_dl_mask_startbit              4
#define rx_init_done_dl_mask_width                 1
#define rx_init_done_dl_mask_endbit                4
#define rx_init_done_dl_mask_shift                 11
#define rx_init_done_dl_mask_mask                  0x800


#define rx_io_pb_nv_iobist_reset_addr              0b101000101
#define rx_io_pb_nv_iobist_reset_startbit          0
#define rx_io_pb_nv_iobist_reset_width             1
#define rx_io_pb_nv_iobist_reset_endbit            0
#define rx_io_pb_nv_iobist_reset_shift             15
#define rx_io_pb_nv_iobist_reset_mask              0x8000


#define rx_iodom_ioreset_addr                      0b001101110
#define rx_iodom_ioreset_startbit                  1
#define rx_iodom_ioreset_width                     1
#define rx_iodom_ioreset_endbit                    1
#define rx_iodom_ioreset_shift                     14
#define rx_iodom_ioreset_mask                      0x4000


#define rx_ioreset_addr                            0b001101110
#define rx_ioreset_startbit                        0
#define rx_ioreset_width                           1
#define rx_ioreset_endbit                          0
#define rx_ioreset_shift                           15
#define rx_ioreset_mask                            0x8000


#define rx_iref_bypass_addr                        0b100001100
#define rx_iref_bypass_startbit                    8
#define rx_iref_bypass_width                       1
#define rx_iref_bypass_endbit                      8
#define rx_iref_bypass_shift                       7
#define rx_iref_bypass_mask                        0x80


#define rx_iref_clock_dac_addr                     0b100001100
#define rx_iref_clock_dac_startbit                 0
#define rx_iref_clock_dac_width                    3
#define rx_iref_clock_dac_endbit                   2
#define rx_iref_clock_dac_shift                    13
#define rx_iref_clock_dac_mask                     0xe000


#define rx_iref_data_dac_addr                      0b100001100
#define rx_iref_data_dac_startbit                  3
#define rx_iref_data_dac_width                     3
#define rx_iref_data_dac_endbit                    5
#define rx_iref_data_dac_shift                     10
#define rx_iref_data_dac_mask                      0x1c00


#define rx_iref_paritychk_clock_addr               0b101011110
#define rx_iref_paritychk_clock_startbit           11
#define rx_iref_paritychk_clock_width              1
#define rx_iref_paritychk_clock_endbit             11
#define rx_iref_paritychk_clock_shift              4
#define rx_iref_paritychk_clock_mask               0x10


#define rx_iref_paritychk_data_addr                0b101011110
#define rx_iref_paritychk_data_startbit            12
#define rx_iref_paritychk_data_width               1
#define rx_iref_paritychk_data_endbit              12
#define rx_iref_paritychk_data_shift               3
#define rx_iref_paritychk_data_mask                0x8


#define rx_iref_pdwn_b_addr                        0b100001100
#define rx_iref_pdwn_b_startbit                    9
#define rx_iref_pdwn_b_width                       1
#define rx_iref_pdwn_b_endbit                      9
#define rx_iref_pdwn_b_shift                       6
#define rx_iref_pdwn_b_mask                        0x40


#define rx_iref_vset_dac_addr                      0b100001100
#define rx_iref_vset_dac_startbit                  6
#define rx_iref_vset_dac_width                     2
#define rx_iref_vset_dac_endbit                    7
#define rx_iref_vset_dac_shift                     8
#define rx_iref_vset_dac_mask                      0x300


#define rx_latchoff_check_en_addr                  0b101000110
#define rx_latchoff_check_en_startbit              1
#define rx_latchoff_check_en_width                 1
#define rx_latchoff_check_en_endbit                1
#define rx_latchoff_check_en_shift                 14
#define rx_latchoff_check_en_mask                  0x4000


#define rx_link_layer_check_en_addr                0b101000110
#define rx_link_layer_check_en_startbit            14
#define rx_link_layer_check_en_width               1
#define rx_link_layer_check_en_endbit              14
#define rx_link_layer_check_en_shift               1
#define rx_link_layer_check_en_mask                0x2


#define rx_loff_filter_depth0_addr                 0b100001111
#define rx_loff_filter_depth0_startbit             0
#define rx_loff_filter_depth0_width                4
#define rx_loff_filter_depth0_endbit               3
#define rx_loff_filter_depth0_shift                12
#define rx_loff_filter_depth0_mask                 0xf000


#define rx_loff_filter_depth1_addr                 0b100001111
#define rx_loff_filter_depth1_startbit             4
#define rx_loff_filter_depth1_width                4
#define rx_loff_filter_depth1_endbit               7
#define rx_loff_filter_depth1_shift                8
#define rx_loff_filter_depth1_mask                 0xf00


#define rx_loff_filter_depth2_addr                 0b100001111
#define rx_loff_filter_depth2_startbit             8
#define rx_loff_filter_depth2_width                4
#define rx_loff_filter_depth2_endbit               11
#define rx_loff_filter_depth2_shift                4
#define rx_loff_filter_depth2_mask                 0xf0


#define rx_loff_filter_depth3_addr                 0b100001111
#define rx_loff_filter_depth3_startbit             12
#define rx_loff_filter_depth3_width                4
#define rx_loff_filter_depth3_endbit               15
#define rx_loff_filter_depth3_shift                0
#define rx_loff_filter_depth3_mask                 0xf


#define rx_loff_hyst_max_addr                      0b101100010
#define rx_loff_hyst_max_startbit                  0
#define rx_loff_hyst_max_width                     8
#define rx_loff_hyst_max_endbit                    7
#define rx_loff_hyst_max_shift                     8
#define rx_loff_hyst_max_mask                      0xff00


#define rx_loff_hyst_min_addr                      0b101100011
#define rx_loff_hyst_min_startbit                  0
#define rx_loff_hyst_min_width                     8
#define rx_loff_hyst_min_endbit                    7
#define rx_loff_hyst_min_shift                     8
#define rx_loff_hyst_min_mask                      0xff00


#define rx_loff_hyst_start_addr                    0b100010100
#define rx_loff_hyst_start_startbit                5
#define rx_loff_hyst_start_width                   5
#define rx_loff_hyst_start_endbit                  9
#define rx_loff_hyst_start_shift                   6
#define rx_loff_hyst_start_mask                    0x7c0


#define rx_loff_inc_dec_amt0_addr                  0b100010000
#define rx_loff_inc_dec_amt0_startbit              0
#define rx_loff_inc_dec_amt0_width                 3
#define rx_loff_inc_dec_amt0_endbit                2
#define rx_loff_inc_dec_amt0_shift                 13
#define rx_loff_inc_dec_amt0_mask                  0xe000


#define rx_loff_inc_dec_amt1_addr                  0b100010000
#define rx_loff_inc_dec_amt1_startbit              8
#define rx_loff_inc_dec_amt1_width                 3
#define rx_loff_inc_dec_amt1_endbit                10
#define rx_loff_inc_dec_amt1_shift                 5
#define rx_loff_inc_dec_amt1_mask                  0xe0


#define rx_loff_inc_dec_amt2_addr                  0b100010001
#define rx_loff_inc_dec_amt2_startbit              0
#define rx_loff_inc_dec_amt2_width                 3
#define rx_loff_inc_dec_amt2_endbit                2
#define rx_loff_inc_dec_amt2_shift                 13
#define rx_loff_inc_dec_amt2_mask                  0xe000


#define rx_loff_inc_dec_amt3_addr                  0b100010001
#define rx_loff_inc_dec_amt3_startbit              8
#define rx_loff_inc_dec_amt3_width                 3
#define rx_loff_inc_dec_amt3_endbit                10
#define rx_loff_inc_dec_amt3_shift                 5
#define rx_loff_inc_dec_amt3_mask                  0xe0


#define rx_loff_livedge_mode_addr                  0b100001110
#define rx_loff_livedge_mode_startbit              0
#define rx_loff_livedge_mode_width                 1
#define rx_loff_livedge_mode_endbit                0
#define rx_loff_livedge_mode_shift                 15
#define rx_loff_livedge_mode_mask                  0x8000


#define rx_loff_servo_restore_dac_addr             0b100100001
#define rx_loff_servo_restore_dac_startbit         1
#define rx_loff_servo_restore_dac_width            1
#define rx_loff_servo_restore_dac_endbit           1
#define rx_loff_servo_restore_dac_shift            14
#define rx_loff_servo_restore_dac_mask             0x4000


#define rx_loff_thresh1_addr                       0b100010000
#define rx_loff_thresh1_startbit                   3
#define rx_loff_thresh1_width                      5
#define rx_loff_thresh1_endbit                     7
#define rx_loff_thresh1_shift                      8
#define rx_loff_thresh1_mask                       0x1f00


#define rx_loff_thresh2_addr                       0b100010000
#define rx_loff_thresh2_startbit                   11
#define rx_loff_thresh2_width                      5
#define rx_loff_thresh2_endbit                     15
#define rx_loff_thresh2_shift                      0
#define rx_loff_thresh2_mask                       0x1f


#define rx_loff_thresh3_addr                       0b100010001
#define rx_loff_thresh3_startbit                   3
#define rx_loff_thresh3_width                      5
#define rx_loff_thresh3_endbit                     7
#define rx_loff_thresh3_shift                      8
#define rx_loff_thresh3_mask                       0x1f00


#define rx_loff_thresh4_addr                       0b100010001
#define rx_loff_thresh4_startbit                   11
#define rx_loff_thresh4_width                      5
#define rx_loff_thresh4_endbit                     15
#define rx_loff_thresh4_shift                      0
#define rx_loff_thresh4_mask                       0x1f


#define rx_loff_timeout_addr                       0b100000111
#define rx_loff_timeout_startbit                   4
#define rx_loff_timeout_width                      4
#define rx_loff_timeout_endbit                     7
#define rx_loff_timeout_shift                      8
#define rx_loff_timeout_mask                       0xf00


#define rx_lte_converge_down_enable_addr           0b100010010
#define rx_lte_converge_down_enable_startbit       15
#define rx_lte_converge_down_enable_width          1
#define rx_lte_converge_down_enable_endbit         15
#define rx_lte_converge_down_enable_shift          0
#define rx_lte_converge_down_enable_mask           0x1


#define rx_lte_converge_up_enable_addr             0b100010010
#define rx_lte_converge_up_enable_startbit         14
#define rx_lte_converge_up_enable_width            1
#define rx_lte_converge_up_enable_endbit           14
#define rx_lte_converge_up_enable_shift            1
#define rx_lte_converge_up_enable_mask             0x2


#define rx_lte_data_src_addr                       0b100001010
#define rx_lte_data_src_startbit                   12
#define rx_lte_data_src_width                      1
#define rx_lte_data_src_endbit                     12
#define rx_lte_data_src_shift                      3
#define rx_lte_data_src_mask                       0x8


#define rx_lte_dir_chg_cnt_addr                    0b101010011
#define rx_lte_dir_chg_cnt_startbit                0
#define rx_lte_dir_chg_cnt_width                   5
#define rx_lte_dir_chg_cnt_endbit                  4
#define rx_lte_dir_chg_cnt_shift                   11
#define rx_lte_dir_chg_cnt_mask                    0xf800


#define rx_lte_filter_depth_addr                   0b100001010
#define rx_lte_filter_depth_startbit               0
#define rx_lte_filter_depth_width                  4
#define rx_lte_filter_depth_endbit                 3
#define rx_lte_filter_depth_shift                  12
#define rx_lte_filter_depth_mask                   0xf000


#define rx_lte_gain_check_en_addr                  0b101000110
#define rx_lte_gain_check_en_startbit              6
#define rx_lte_gain_check_en_width                 1
#define rx_lte_gain_check_en_endbit                6
#define rx_lte_gain_check_en_shift                 9
#define rx_lte_gain_check_en_mask                  0x200


#define rx_lte_gain_hist_bias_thresh_addr          0b100010010
#define rx_lte_gain_hist_bias_thresh_startbit      0
#define rx_lte_gain_hist_bias_thresh_width         5
#define rx_lte_gain_hist_bias_thresh_endbit        4
#define rx_lte_gain_hist_bias_thresh_shift         11
#define rx_lte_gain_hist_bias_thresh_mask          0xf800


#define rx_lte_gain_history_bias_dis_addr          0b100010010
#define rx_lte_gain_history_bias_dis_startbit      11
#define rx_lte_gain_history_bias_dis_width         1
#define rx_lte_gain_history_bias_dis_endbit        11
#define rx_lte_gain_history_bias_dis_shift         4
#define rx_lte_gain_history_bias_dis_mask          0x10


#define rx_lte_gain_n1_bias_thresh_addr            0b100010010
#define rx_lte_gain_n1_bias_thresh_startbit        7
#define rx_lte_gain_n1_bias_thresh_width           4
#define rx_lte_gain_n1_bias_thresh_endbit          10
#define rx_lte_gain_n1_bias_thresh_shift           5
#define rx_lte_gain_n1_bias_thresh_mask            0x1e0


#define rx_lte_gain_n1_samples_addr                0b100010010
#define rx_lte_gain_n1_samples_startbit            5
#define rx_lte_gain_n1_samples_width               2
#define rx_lte_gain_n1_samples_endbit              6
#define rx_lte_gain_n1_samples_shift               9
#define rx_lte_gain_n1_samples_mask                0x600


#define rx_lte_gain_sample_bias_dis_addr           0b100010010
#define rx_lte_gain_sample_bias_dis_startbit       12
#define rx_lte_gain_sample_bias_dis_width          1
#define rx_lte_gain_sample_bias_dis_endbit         12
#define rx_lte_gain_sample_bias_dis_shift          3
#define rx_lte_gain_sample_bias_dis_mask           0x8


#define rx_lte_gain_sample_bias_mode_addr          0b100010010
#define rx_lte_gain_sample_bias_mode_startbit      13
#define rx_lte_gain_sample_bias_mode_width         1
#define rx_lte_gain_sample_bias_mode_endbit        13
#define rx_lte_gain_sample_bias_mode_shift         2
#define rx_lte_gain_sample_bias_mode_mask          0x4


#define rx_lte_thresh4_addr                        0b100001010
#define rx_lte_thresh4_startbit                    4
#define rx_lte_thresh4_width                       5
#define rx_lte_thresh4_endbit                      8
#define rx_lte_thresh4_shift                       7
#define rx_lte_thresh4_mask                        0xf80


#define rx_lte_timeout_addr                        0b100000111
#define rx_lte_timeout_startbit                    12
#define rx_lte_timeout_width                       4
#define rx_lte_timeout_endbit                      15
#define rx_lte_timeout_shift                       0
#define rx_lte_timeout_mask                        0xf


#define rx_lte_vote_diff_addr                      0b101010011
#define rx_lte_vote_diff_startbit                  5
#define rx_lte_vote_diff_width                     11
#define rx_lte_vote_diff_endbit                    15
#define rx_lte_vote_diff_shift                     0
#define rx_lte_vote_diff_mask                      0x7ff


#define rx_lte_vote_ratio_cfg_addr                 0b100001010
#define rx_lte_vote_ratio_cfg_startbit             9
#define rx_lte_vote_ratio_cfg_width                3
#define rx_lte_vote_ratio_cfg_endbit               11
#define rx_lte_vote_ratio_cfg_shift                4
#define rx_lte_vote_ratio_cfg_mask                 0x70


#define rx_lte_vote_win_both_addr                  0b100001010
#define rx_lte_vote_win_both_startbit              13
#define rx_lte_vote_win_both_width                 1
#define rx_lte_vote_win_both_endbit                13
#define rx_lte_vote_win_both_shift                 2
#define rx_lte_vote_win_both_mask                  0x4


#define rx_lte_zero_check_en_addr                  0b101000110
#define rx_lte_zero_check_en_startbit              7
#define rx_lte_zero_check_en_width                 1
#define rx_lte_zero_check_en_endbit                7
#define rx_lte_zero_check_en_shift                 8
#define rx_lte_zero_check_en_mask                  0x100


#define rx_lte_zero_hist_bias_thresh_addr          0b100010011
#define rx_lte_zero_hist_bias_thresh_startbit      0
#define rx_lte_zero_hist_bias_thresh_width         5
#define rx_lte_zero_hist_bias_thresh_endbit        4
#define rx_lte_zero_hist_bias_thresh_shift         11
#define rx_lte_zero_hist_bias_thresh_mask          0xf800


#define rx_lte_zero_n1_bias_thresh_addr            0b100010011
#define rx_lte_zero_n1_bias_thresh_startbit        6
#define rx_lte_zero_n1_bias_thresh_width           4
#define rx_lte_zero_n1_bias_thresh_endbit          9
#define rx_lte_zero_n1_bias_thresh_shift           6
#define rx_lte_zero_n1_bias_thresh_mask            0x3c0


#define rx_lte_zero_n1_samples_addr                0b100010011
#define rx_lte_zero_n1_samples_startbit            5
#define rx_lte_zero_n1_samples_width               1
#define rx_lte_zero_n1_samples_endbit              5
#define rx_lte_zero_n1_samples_shift               10
#define rx_lte_zero_n1_samples_mask                0x400


#define rx_lte_zero_n2_samples_addr                0b100010011
#define rx_lte_zero_n2_samples_startbit            10
#define rx_lte_zero_n2_samples_width               1
#define rx_lte_zero_n2_samples_endbit              10
#define rx_lte_zero_n2_samples_shift               5
#define rx_lte_zero_n2_samples_mask                0x20


#define rx_mini_pr_gray_encode_dis_addr            0b000001111
#define rx_mini_pr_gray_encode_dis_startbit        2
#define rx_mini_pr_gray_encode_dis_width           1
#define rx_mini_pr_gray_encode_dis_endbit          2
#define rx_mini_pr_gray_encode_dis_shift           13
#define rx_mini_pr_gray_encode_dis_mask            0x2000


#define rx_off_cm_addr                             0b000001011
#define rx_off_cm_startbit                         6
#define rx_off_cm_width                            4
#define rx_off_cm_endbit                           9
#define rx_off_cm_shift                            6
#define rx_off_cm_mask                             0x3c0


#define rx_off_disable_dm_b_addr                   0b000001000
#define rx_off_disable_dm_b_startbit               4
#define rx_off_disable_dm_b_width                  1
#define rx_off_disable_dm_b_endbit                 4
#define rx_off_disable_dm_b_shift                  11
#define rx_off_disable_dm_b_mask                   0x800


#define rx_off_dm_addr                             0b000001011
#define rx_off_dm_startbit                         10
#define rx_off_dm_width                            6
#define rx_off_dm_endbit                           15
#define rx_off_dm_shift                            0
#define rx_off_dm_mask                             0x3f


#define rx_pb_io_nv_iobist_prbs_error_addr         0b101010010
#define rx_pb_io_nv_iobist_prbs_error_startbit     1
#define rx_pb_io_nv_iobist_prbs_error_width        1
#define rx_pb_io_nv_iobist_prbs_error_endbit       1
#define rx_pb_io_nv_iobist_prbs_error_shift        14
#define rx_pb_io_nv_iobist_prbs_error_mask         0x4000


#define rx_pervasive_capt_addr                     0b100100100
#define rx_pervasive_capt_startbit                 0
#define rx_pervasive_capt_width                    1
#define rx_pervasive_capt_endbit                   0
#define rx_pervasive_capt_shift                    15
#define rx_pervasive_capt_mask                     0x8000


#define rx_pg_datasm_spare_mode_0_addr             0b100110000
#define rx_pg_datasm_spare_mode_0_startbit         0
#define rx_pg_datasm_spare_mode_0_width            1
#define rx_pg_datasm_spare_mode_0_endbit           0
#define rx_pg_datasm_spare_mode_0_shift            15
#define rx_pg_datasm_spare_mode_0_mask             0x8000


#define rx_pg_datasm_spare_mode_1_addr             0b100110000
#define rx_pg_datasm_spare_mode_1_startbit         1
#define rx_pg_datasm_spare_mode_1_width            1
#define rx_pg_datasm_spare_mode_1_endbit           1
#define rx_pg_datasm_spare_mode_1_shift            14
#define rx_pg_datasm_spare_mode_1_mask             0x4000


#define rx_pg_datasm_spare_mode_2_addr             0b100110000
#define rx_pg_datasm_spare_mode_2_startbit         2
#define rx_pg_datasm_spare_mode_2_width            1
#define rx_pg_datasm_spare_mode_2_endbit           2
#define rx_pg_datasm_spare_mode_2_shift            13
#define rx_pg_datasm_spare_mode_2_mask             0x2000


#define rx_pg_datasm_spare_mode_3_addr             0b100110000
#define rx_pg_datasm_spare_mode_3_startbit         3
#define rx_pg_datasm_spare_mode_3_width            1
#define rx_pg_datasm_spare_mode_3_endbit           3
#define rx_pg_datasm_spare_mode_3_shift            12
#define rx_pg_datasm_spare_mode_3_mask             0x1000


#define rx_pg_datasm_spare_mode_4_addr             0b100110000
#define rx_pg_datasm_spare_mode_4_startbit         4
#define rx_pg_datasm_spare_mode_4_width            1
#define rx_pg_datasm_spare_mode_4_endbit           4
#define rx_pg_datasm_spare_mode_4_shift            11
#define rx_pg_datasm_spare_mode_4_mask             0x800


#define rx_pg_datasm_spare_mode_5_addr             0b100110000
#define rx_pg_datasm_spare_mode_5_startbit         5
#define rx_pg_datasm_spare_mode_5_width            1
#define rx_pg_datasm_spare_mode_5_endbit           5
#define rx_pg_datasm_spare_mode_5_shift            10
#define rx_pg_datasm_spare_mode_5_mask             0x400


#define rx_pg_datasm_spare_mode_6_addr             0b100110000
#define rx_pg_datasm_spare_mode_6_startbit         6
#define rx_pg_datasm_spare_mode_6_width            1
#define rx_pg_datasm_spare_mode_6_endbit           6
#define rx_pg_datasm_spare_mode_6_shift            9
#define rx_pg_datasm_spare_mode_6_mask             0x200


#define rx_pg_datasm_spare_mode_7_addr             0b100110000
#define rx_pg_datasm_spare_mode_7_startbit         7
#define rx_pg_datasm_spare_mode_7_width            1
#define rx_pg_datasm_spare_mode_7_endbit           7
#define rx_pg_datasm_spare_mode_7_shift            8
#define rx_pg_datasm_spare_mode_7_mask             0x100


#define rx_pg_fir1_err_inj_addr                    0b100100111
#define rx_pg_fir1_err_inj_startbit                0
#define rx_pg_fir1_err_inj_width                   11
#define rx_pg_fir1_err_inj_endbit                  10
#define rx_pg_fir1_err_inj_shift                   5
#define rx_pg_fir1_err_inj_mask                    0xffe0


#define rx_pg_fir1_err_inj_full_reg_addr           0b100100111
#define rx_pg_fir1_err_inj_full_reg_startbit       0
#define rx_pg_fir1_err_inj_full_reg_width          16
#define rx_pg_fir1_err_inj_full_reg_endbit         15
#define rx_pg_fir1_err_inj_full_reg_shift          0
#define rx_pg_fir1_err_inj_full_reg_mask           0xffff


#define rx_pg_fir1_errs_addr                       0b100100101
#define rx_pg_fir1_errs_startbit                   0
#define rx_pg_fir1_errs_width                      12
#define rx_pg_fir1_errs_endbit                     11
#define rx_pg_fir1_errs_shift                      4
#define rx_pg_fir1_errs_mask                       0xfff0


#define rx_pg_fir1_errs_full_reg_addr              0b100100101
#define rx_pg_fir1_errs_full_reg_startbit          0
#define rx_pg_fir1_errs_full_reg_width             16
#define rx_pg_fir1_errs_full_reg_endbit            15
#define rx_pg_fir1_errs_full_reg_shift             0
#define rx_pg_fir1_errs_full_reg_mask              0xffff


#define rx_pg_fir1_errs_mask_addr                  0b100100110
#define rx_pg_fir1_errs_mask_startbit              0
#define rx_pg_fir1_errs_mask_width                 12
#define rx_pg_fir1_errs_mask_endbit                11
#define rx_pg_fir1_errs_mask_shift                 4
#define rx_pg_fir1_errs_mask_mask                  0xfff0


#define rx_pg_fir1_errs_mask_full_reg_addr         0b100100110
#define rx_pg_fir1_errs_mask_full_reg_startbit     0
#define rx_pg_fir1_errs_mask_full_reg_width        16
#define rx_pg_fir1_errs_mask_full_reg_endbit       15
#define rx_pg_fir1_errs_mask_full_reg_shift        0
#define rx_pg_fir1_errs_mask_full_reg_mask         0xffff


#define rx_pg_fir_err_ctl_regs_addr                0b100100101
#define rx_pg_fir_err_ctl_regs_startbit            0
#define rx_pg_fir_err_ctl_regs_width               1
#define rx_pg_fir_err_ctl_regs_endbit              0
#define rx_pg_fir_err_ctl_regs_shift               15
#define rx_pg_fir_err_ctl_regs_mask                0x8000


#define rx_pg_fir_err_datasm_regrw_addr            0b100100101
#define rx_pg_fir_err_datasm_regrw_startbit        2
#define rx_pg_fir_err_datasm_regrw_width           1
#define rx_pg_fir_err_datasm_regrw_endbit          2
#define rx_pg_fir_err_datasm_regrw_shift           13
#define rx_pg_fir_err_datasm_regrw_mask            0x2000


#define rx_pg_fir_err_datasm_regs_addr             0b100100101
#define rx_pg_fir_err_datasm_regs_startbit         1
#define rx_pg_fir_err_datasm_regs_width            1
#define rx_pg_fir_err_datasm_regs_endbit           1
#define rx_pg_fir_err_datasm_regs_shift            14
#define rx_pg_fir_err_datasm_regs_mask             0x4000


#define rx_pg_fir_err_gcr_arb_sm_addr              0b100100101
#define rx_pg_fir_err_gcr_arb_sm_startbit          3
#define rx_pg_fir_err_gcr_arb_sm_width             1
#define rx_pg_fir_err_gcr_arb_sm_endbit            3
#define rx_pg_fir_err_gcr_arb_sm_shift             12
#define rx_pg_fir_err_gcr_arb_sm_mask              0x1000


#define rx_pg_fir_err_inj_ctl_regs_addr            0b100100111
#define rx_pg_fir_err_inj_ctl_regs_startbit        0
#define rx_pg_fir_err_inj_ctl_regs_width           1
#define rx_pg_fir_err_inj_ctl_regs_endbit          0
#define rx_pg_fir_err_inj_ctl_regs_shift           15
#define rx_pg_fir_err_inj_ctl_regs_mask            0x8000


#define rx_pg_fir_err_inj_datasm_regrw_addr        0b100100111
#define rx_pg_fir_err_inj_datasm_regrw_startbit    2
#define rx_pg_fir_err_inj_datasm_regrw_width       1
#define rx_pg_fir_err_inj_datasm_regrw_endbit      2
#define rx_pg_fir_err_inj_datasm_regrw_shift       13
#define rx_pg_fir_err_inj_datasm_regrw_mask        0x2000


#define rx_pg_fir_err_inj_datasm_regs_addr         0b100100111
#define rx_pg_fir_err_inj_datasm_regs_startbit     1
#define rx_pg_fir_err_inj_datasm_regs_width        1
#define rx_pg_fir_err_inj_datasm_regs_endbit       1
#define rx_pg_fir_err_inj_datasm_regs_shift        14
#define rx_pg_fir_err_inj_datasm_regs_mask         0x4000


#define rx_pg_fir_err_inj_gcr_arb_sm_addr          0b100100111
#define rx_pg_fir_err_inj_gcr_arb_sm_startbit      3
#define rx_pg_fir_err_inj_gcr_arb_sm_width         1
#define rx_pg_fir_err_inj_gcr_arb_sm_endbit        3
#define rx_pg_fir_err_inj_gcr_arb_sm_shift         12
#define rx_pg_fir_err_inj_gcr_arb_sm_mask          0x1000


#define rx_pg_fir_err_inj_rx_psave_sm_addr         0b100100111
#define rx_pg_fir_err_inj_rx_psave_sm_startbit     4
#define rx_pg_fir_err_inj_rx_psave_sm_width        1
#define rx_pg_fir_err_inj_rx_psave_sm_endbit       4
#define rx_pg_fir_err_inj_rx_psave_sm_shift        11
#define rx_pg_fir_err_inj_rx_psave_sm_mask         0x800


#define rx_pg_fir_err_inj_rx_servo_amp_sm_addr     0b100100111
#define rx_pg_fir_err_inj_rx_servo_amp_sm_startbit   6
#define rx_pg_fir_err_inj_rx_servo_amp_sm_width    1
#define rx_pg_fir_err_inj_rx_servo_amp_sm_endbit   6
#define rx_pg_fir_err_inj_rx_servo_amp_sm_shift    9
#define rx_pg_fir_err_inj_rx_servo_amp_sm_mask     0x200


#define rx_pg_fir_err_inj_rx_servo_ctle_sm_addr    0b100100111
#define rx_pg_fir_err_inj_rx_servo_ctle_sm_startbit   8
#define rx_pg_fir_err_inj_rx_servo_ctle_sm_width   1
#define rx_pg_fir_err_inj_rx_servo_ctle_sm_endbit   8
#define rx_pg_fir_err_inj_rx_servo_ctle_sm_shift   7
#define rx_pg_fir_err_inj_rx_servo_ctle_sm_mask    0x80


#define rx_pg_fir_err_inj_rx_servo_loff_sm_addr    0b100100111
#define rx_pg_fir_err_inj_rx_servo_loff_sm_startbit   7
#define rx_pg_fir_err_inj_rx_servo_loff_sm_width   1
#define rx_pg_fir_err_inj_rx_servo_loff_sm_endbit   7
#define rx_pg_fir_err_inj_rx_servo_loff_sm_shift   8
#define rx_pg_fir_err_inj_rx_servo_loff_sm_mask    0x100


#define rx_pg_fir_err_inj_rx_servo_lte_sm_addr     0b100100111
#define rx_pg_fir_err_inj_rx_servo_lte_sm_startbit   9
#define rx_pg_fir_err_inj_rx_servo_lte_sm_width    1
#define rx_pg_fir_err_inj_rx_servo_lte_sm_endbit   9
#define rx_pg_fir_err_inj_rx_servo_lte_sm_shift    6
#define rx_pg_fir_err_inj_rx_servo_lte_sm_mask     0x40


#define rx_pg_fir_err_inj_rx_servo_main_sm_addr    0b100100111
#define rx_pg_fir_err_inj_rx_servo_main_sm_startbit   5
#define rx_pg_fir_err_inj_rx_servo_main_sm_width   1
#define rx_pg_fir_err_inj_rx_servo_main_sm_endbit   5
#define rx_pg_fir_err_inj_rx_servo_main_sm_shift   10
#define rx_pg_fir_err_inj_rx_servo_main_sm_mask    0x400


#define rx_pg_fir_err_inj_rx_servo_quad_sm_addr    0b100100111
#define rx_pg_fir_err_inj_rx_servo_quad_sm_startbit   10
#define rx_pg_fir_err_inj_rx_servo_quad_sm_width   1
#define rx_pg_fir_err_inj_rx_servo_quad_sm_endbit   10
#define rx_pg_fir_err_inj_rx_servo_quad_sm_shift   5
#define rx_pg_fir_err_inj_rx_servo_quad_sm_mask    0x20


#define rx_pg_fir_err_mask_ctl_regs_addr           0b100100110
#define rx_pg_fir_err_mask_ctl_regs_startbit       0
#define rx_pg_fir_err_mask_ctl_regs_width          1
#define rx_pg_fir_err_mask_ctl_regs_endbit         0
#define rx_pg_fir_err_mask_ctl_regs_shift          15
#define rx_pg_fir_err_mask_ctl_regs_mask           0x8000


#define rx_pg_fir_err_mask_datasm_regrw_addr       0b100100110
#define rx_pg_fir_err_mask_datasm_regrw_startbit   2
#define rx_pg_fir_err_mask_datasm_regrw_width      1
#define rx_pg_fir_err_mask_datasm_regrw_endbit     2
#define rx_pg_fir_err_mask_datasm_regrw_shift      13
#define rx_pg_fir_err_mask_datasm_regrw_mask       0x2000


#define rx_pg_fir_err_mask_datasm_regs_addr        0b100100110
#define rx_pg_fir_err_mask_datasm_regs_startbit    1
#define rx_pg_fir_err_mask_datasm_regs_width       1
#define rx_pg_fir_err_mask_datasm_regs_endbit      1
#define rx_pg_fir_err_mask_datasm_regs_shift       14
#define rx_pg_fir_err_mask_datasm_regs_mask        0x4000


#define rx_pg_fir_err_mask_gcr_arb_sm_addr         0b100100110
#define rx_pg_fir_err_mask_gcr_arb_sm_startbit     3
#define rx_pg_fir_err_mask_gcr_arb_sm_width        1
#define rx_pg_fir_err_mask_gcr_arb_sm_endbit       3
#define rx_pg_fir_err_mask_gcr_arb_sm_shift        12
#define rx_pg_fir_err_mask_gcr_arb_sm_mask         0x1000


#define rx_pg_fir_err_mask_rx_psave_sm_addr        0b100100110
#define rx_pg_fir_err_mask_rx_psave_sm_startbit    4
#define rx_pg_fir_err_mask_rx_psave_sm_width       1
#define rx_pg_fir_err_mask_rx_psave_sm_endbit      4
#define rx_pg_fir_err_mask_rx_psave_sm_shift       11
#define rx_pg_fir_err_mask_rx_psave_sm_mask        0x800


#define rx_pg_fir_err_mask_rx_servo_amp_sm_addr    0b100100110
#define rx_pg_fir_err_mask_rx_servo_amp_sm_startbit   6
#define rx_pg_fir_err_mask_rx_servo_amp_sm_width   1
#define rx_pg_fir_err_mask_rx_servo_amp_sm_endbit   6
#define rx_pg_fir_err_mask_rx_servo_amp_sm_shift   9
#define rx_pg_fir_err_mask_rx_servo_amp_sm_mask    0x200


#define rx_pg_fir_err_mask_rx_servo_ctle_sm_addr   0b100100110
#define rx_pg_fir_err_mask_rx_servo_ctle_sm_startbit   8
#define rx_pg_fir_err_mask_rx_servo_ctle_sm_width   1
#define rx_pg_fir_err_mask_rx_servo_ctle_sm_endbit   8
#define rx_pg_fir_err_mask_rx_servo_ctle_sm_shift   7
#define rx_pg_fir_err_mask_rx_servo_ctle_sm_mask   0x80


#define rx_pg_fir_err_mask_rx_servo_loff_sm_addr   0b100100110
#define rx_pg_fir_err_mask_rx_servo_loff_sm_startbit   7
#define rx_pg_fir_err_mask_rx_servo_loff_sm_width   1
#define rx_pg_fir_err_mask_rx_servo_loff_sm_endbit   7
#define rx_pg_fir_err_mask_rx_servo_loff_sm_shift   8
#define rx_pg_fir_err_mask_rx_servo_loff_sm_mask   0x100


#define rx_pg_fir_err_mask_rx_servo_lte_sm_addr    0b100100110
#define rx_pg_fir_err_mask_rx_servo_lte_sm_startbit   9
#define rx_pg_fir_err_mask_rx_servo_lte_sm_width   1
#define rx_pg_fir_err_mask_rx_servo_lte_sm_endbit   9
#define rx_pg_fir_err_mask_rx_servo_lte_sm_shift   6
#define rx_pg_fir_err_mask_rx_servo_lte_sm_mask    0x40


#define rx_pg_fir_err_mask_rx_servo_main_sm_addr   0b100100110
#define rx_pg_fir_err_mask_rx_servo_main_sm_startbit   5
#define rx_pg_fir_err_mask_rx_servo_main_sm_width   1
#define rx_pg_fir_err_mask_rx_servo_main_sm_endbit   5
#define rx_pg_fir_err_mask_rx_servo_main_sm_shift   10
#define rx_pg_fir_err_mask_rx_servo_main_sm_mask   0x400


#define rx_pg_fir_err_mask_rx_servo_quad_sm_addr   0b100100110
#define rx_pg_fir_err_mask_rx_servo_quad_sm_startbit   10
#define rx_pg_fir_err_mask_rx_servo_quad_sm_width   1
#define rx_pg_fir_err_mask_rx_servo_quad_sm_endbit   10
#define rx_pg_fir_err_mask_rx_servo_quad_sm_shift   5
#define rx_pg_fir_err_mask_rx_servo_quad_sm_mask   0x20


#define rx_pg_fir_err_rx_psave_sm_addr             0b100100101
#define rx_pg_fir_err_rx_psave_sm_startbit         4
#define rx_pg_fir_err_rx_psave_sm_width            1
#define rx_pg_fir_err_rx_psave_sm_endbit           4
#define rx_pg_fir_err_rx_psave_sm_shift            11
#define rx_pg_fir_err_rx_psave_sm_mask             0x800


#define rx_pg_fir_err_rx_servo_amp_sm_addr         0b100100101
#define rx_pg_fir_err_rx_servo_amp_sm_startbit     6
#define rx_pg_fir_err_rx_servo_amp_sm_width        1
#define rx_pg_fir_err_rx_servo_amp_sm_endbit       6
#define rx_pg_fir_err_rx_servo_amp_sm_shift        9
#define rx_pg_fir_err_rx_servo_amp_sm_mask         0x200


#define rx_pg_fir_err_rx_servo_ctle_sm_addr        0b100100101
#define rx_pg_fir_err_rx_servo_ctle_sm_startbit    8
#define rx_pg_fir_err_rx_servo_ctle_sm_width       1
#define rx_pg_fir_err_rx_servo_ctle_sm_endbit      8
#define rx_pg_fir_err_rx_servo_ctle_sm_shift       7
#define rx_pg_fir_err_rx_servo_ctle_sm_mask        0x80


#define rx_pg_fir_err_rx_servo_loff_sm_addr        0b100100101
#define rx_pg_fir_err_rx_servo_loff_sm_startbit    7
#define rx_pg_fir_err_rx_servo_loff_sm_width       1
#define rx_pg_fir_err_rx_servo_loff_sm_endbit      7
#define rx_pg_fir_err_rx_servo_loff_sm_shift       8
#define rx_pg_fir_err_rx_servo_loff_sm_mask        0x100


#define rx_pg_fir_err_rx_servo_lte_sm_addr         0b100100101
#define rx_pg_fir_err_rx_servo_lte_sm_startbit     9
#define rx_pg_fir_err_rx_servo_lte_sm_width        1
#define rx_pg_fir_err_rx_servo_lte_sm_endbit       9
#define rx_pg_fir_err_rx_servo_lte_sm_shift        6
#define rx_pg_fir_err_rx_servo_lte_sm_mask         0x40


#define rx_pg_fir_err_rx_servo_main_sm_addr        0b100100101
#define rx_pg_fir_err_rx_servo_main_sm_startbit    5
#define rx_pg_fir_err_rx_servo_main_sm_width       1
#define rx_pg_fir_err_rx_servo_main_sm_endbit      5
#define rx_pg_fir_err_rx_servo_main_sm_shift       10
#define rx_pg_fir_err_rx_servo_main_sm_mask        0x400


#define rx_pg_fir_err_rx_servo_quad_sm_addr        0b100100101
#define rx_pg_fir_err_rx_servo_quad_sm_startbit    10
#define rx_pg_fir_err_rx_servo_quad_sm_width       1
#define rx_pg_fir_err_rx_servo_quad_sm_endbit      10
#define rx_pg_fir_err_rx_servo_quad_sm_shift       5
#define rx_pg_fir_err_rx_servo_quad_sm_mask        0x20


#define rx_pg_spare_mode_0_addr                    0b100000000
#define rx_pg_spare_mode_0_startbit                0
#define rx_pg_spare_mode_0_width                   1
#define rx_pg_spare_mode_0_endbit                  0
#define rx_pg_spare_mode_0_shift                   15
#define rx_pg_spare_mode_0_mask                    0x8000


#define rx_pg_spare_mode_1_addr                    0b100000000
#define rx_pg_spare_mode_1_startbit                1
#define rx_pg_spare_mode_1_width                   1
#define rx_pg_spare_mode_1_endbit                  1
#define rx_pg_spare_mode_1_shift                   14
#define rx_pg_spare_mode_1_mask                    0x4000


#define rx_pg_spare_mode_2_addr                    0b100000000
#define rx_pg_spare_mode_2_startbit                2
#define rx_pg_spare_mode_2_width                   1
#define rx_pg_spare_mode_2_endbit                  2
#define rx_pg_spare_mode_2_shift                   13
#define rx_pg_spare_mode_2_mask                    0x2000


#define rx_pg_spare_mode_3_addr                    0b100000000
#define rx_pg_spare_mode_3_startbit                3
#define rx_pg_spare_mode_3_width                   1
#define rx_pg_spare_mode_3_endbit                  3
#define rx_pg_spare_mode_3_shift                   12
#define rx_pg_spare_mode_3_mask                    0x1000


#define rx_pg_spare_mode_4_addr                    0b100000000
#define rx_pg_spare_mode_4_startbit                4
#define rx_pg_spare_mode_4_width                   1
#define rx_pg_spare_mode_4_endbit                  4
#define rx_pg_spare_mode_4_shift                   11
#define rx_pg_spare_mode_4_mask                    0x800


#define rx_phy_dl_init_done_addr                   0b001111000
#define rx_phy_dl_init_done_startbit               0
#define rx_phy_dl_init_done_width                  1
#define rx_phy_dl_init_done_endbit                 0
#define rx_phy_dl_init_done_shift                  15
#define rx_phy_dl_init_done_mask                   0x8000


#define rx_phy_dl_init_done_clr_addr               0b001111001
#define rx_phy_dl_init_done_clr_startbit           1
#define rx_phy_dl_init_done_clr_width              1
#define rx_phy_dl_init_done_clr_endbit             1
#define rx_phy_dl_init_done_clr_shift              14
#define rx_phy_dl_init_done_clr_mask               0x4000


#define rx_phy_dl_init_done_set_addr               0b001111001
#define rx_phy_dl_init_done_set_startbit           0
#define rx_phy_dl_init_done_set_width              1
#define rx_phy_dl_init_done_set_endbit             0
#define rx_phy_dl_init_done_set_shift              15
#define rx_phy_dl_init_done_set_mask               0x8000


#define rx_phy_dl_recal_done_addr                  0b001111000
#define rx_phy_dl_recal_done_startbit              1
#define rx_phy_dl_recal_done_width                 1
#define rx_phy_dl_recal_done_endbit                1
#define rx_phy_dl_recal_done_shift                 14
#define rx_phy_dl_recal_done_mask                  0x4000


#define rx_phy_dl_recal_done_clr_addr              0b001111001
#define rx_phy_dl_recal_done_clr_startbit          3
#define rx_phy_dl_recal_done_clr_width             1
#define rx_phy_dl_recal_done_clr_endbit            3
#define rx_phy_dl_recal_done_clr_shift             12
#define rx_phy_dl_recal_done_clr_mask              0x1000


#define rx_phy_dl_recal_done_set_addr              0b001111001
#define rx_phy_dl_recal_done_set_startbit          2
#define rx_phy_dl_recal_done_set_width             1
#define rx_phy_dl_recal_done_set_endbit            2
#define rx_phy_dl_recal_done_set_shift             13
#define rx_phy_dl_recal_done_set_mask              0x2000


#define rx_pipe_capture_cycle_addr                 0b001111101
#define rx_pipe_capture_cycle_startbit             4
#define rx_pipe_capture_cycle_width                4
#define rx_pipe_capture_cycle_endbit               7
#define rx_pipe_capture_cycle_shift                8
#define rx_pipe_capture_cycle_mask                 0xf00


#define rx_pipe_data_src_addr                      0b001101100
#define rx_pipe_data_src_startbit                  1
#define rx_pipe_data_src_width                     1
#define rx_pipe_data_src_endbit                    1
#define rx_pipe_data_src_shift                     14
#define rx_pipe_data_src_mask                      0x4000


#define rx_pipe_format_addr                        0b001101100
#define rx_pipe_format_startbit                    0
#define rx_pipe_format_width                       1
#define rx_pipe_format_endbit                      0
#define rx_pipe_format_shift                       15
#define rx_pipe_format_mask                        0x8000


#define rx_pipe_format_src_sel_alias_addr          0b001101100
#define rx_pipe_format_src_sel_alias_startbit      0
#define rx_pipe_format_src_sel_alias_width         5
#define rx_pipe_format_src_sel_alias_endbit        4
#define rx_pipe_format_src_sel_alias_shift         11
#define rx_pipe_format_src_sel_alias_mask          0xf800


#define rx_pipe_margin_addr                        0b001111101
#define rx_pipe_margin_startbit                    9
#define rx_pipe_margin_width                       1
#define rx_pipe_margin_endbit                      9
#define rx_pipe_margin_shift                       6
#define rx_pipe_margin_mask                        0x40


#define rx_pipe_sel_addr                           0b001101100
#define rx_pipe_sel_startbit                       2
#define rx_pipe_sel_width                          3
#define rx_pipe_sel_endbit                         4
#define rx_pipe_sel_shift                          11
#define rx_pipe_sel_mask                           0x3800


#define rx_pipe_strobe_cnt_max_addr                0b001111101
#define rx_pipe_strobe_cnt_max_startbit            0
#define rx_pipe_strobe_cnt_max_width               4
#define rx_pipe_strobe_cnt_max_endbit              3
#define rx_pipe_strobe_cnt_max_shift               12
#define rx_pipe_strobe_cnt_max_mask                0xf000


#define rx_pl_data_dac_spare_mode_0_addr           0b000000000
#define rx_pl_data_dac_spare_mode_0_startbit       0
#define rx_pl_data_dac_spare_mode_0_width          1
#define rx_pl_data_dac_spare_mode_0_endbit         0
#define rx_pl_data_dac_spare_mode_0_shift          15
#define rx_pl_data_dac_spare_mode_0_mask           0x8000


#define rx_pl_data_dac_spare_mode_1_addr           0b000000000
#define rx_pl_data_dac_spare_mode_1_startbit       1
#define rx_pl_data_dac_spare_mode_1_width          1
#define rx_pl_data_dac_spare_mode_1_endbit         1
#define rx_pl_data_dac_spare_mode_1_shift          14
#define rx_pl_data_dac_spare_mode_1_mask           0x4000


#define rx_pl_data_dac_spare_mode_2_addr           0b000000000
#define rx_pl_data_dac_spare_mode_2_startbit       2
#define rx_pl_data_dac_spare_mode_2_width          1
#define rx_pl_data_dac_spare_mode_2_endbit         2
#define rx_pl_data_dac_spare_mode_2_shift          13
#define rx_pl_data_dac_spare_mode_2_mask           0x2000


#define rx_pl_data_dac_spare_mode_3_addr           0b000000000
#define rx_pl_data_dac_spare_mode_3_startbit       3
#define rx_pl_data_dac_spare_mode_3_width          1
#define rx_pl_data_dac_spare_mode_3_endbit         3
#define rx_pl_data_dac_spare_mode_3_shift          12
#define rx_pl_data_dac_spare_mode_3_mask           0x1000


#define rx_pl_data_dac_spare_mode_4_addr           0b000000000
#define rx_pl_data_dac_spare_mode_4_startbit       4
#define rx_pl_data_dac_spare_mode_4_width          1
#define rx_pl_data_dac_spare_mode_4_endbit         4
#define rx_pl_data_dac_spare_mode_4_shift          11
#define rx_pl_data_dac_spare_mode_4_mask           0x800


#define rx_pl_data_dac_spare_mode_5_addr           0b000000000
#define rx_pl_data_dac_spare_mode_5_startbit       5
#define rx_pl_data_dac_spare_mode_5_width          1
#define rx_pl_data_dac_spare_mode_5_endbit         5
#define rx_pl_data_dac_spare_mode_5_shift          10
#define rx_pl_data_dac_spare_mode_5_mask           0x400


#define rx_pl_data_dac_spare_mode_6_addr           0b000000000
#define rx_pl_data_dac_spare_mode_6_startbit       6
#define rx_pl_data_dac_spare_mode_6_width          1
#define rx_pl_data_dac_spare_mode_6_endbit         6
#define rx_pl_data_dac_spare_mode_6_shift          9
#define rx_pl_data_dac_spare_mode_6_mask           0x200


#define rx_pl_data_dac_spare_mode_7_addr           0b000000000
#define rx_pl_data_dac_spare_mode_7_startbit       7
#define rx_pl_data_dac_spare_mode_7_width          1
#define rx_pl_data_dac_spare_mode_7_endbit         7
#define rx_pl_data_dac_spare_mode_7_shift          8
#define rx_pl_data_dac_spare_mode_7_mask           0x100


#define rx_pl_fir_err_addr                         0b100100101
#define rx_pl_fir_err_startbit                     11
#define rx_pl_fir_err_width                        1
#define rx_pl_fir_err_endbit                       11
#define rx_pl_fir_err_shift                        4
#define rx_pl_fir_err_mask                         0x10


#define rx_pl_fir_err_dac_regs_addr                0b001100001
#define rx_pl_fir_err_dac_regs_startbit            2
#define rx_pl_fir_err_dac_regs_width               1
#define rx_pl_fir_err_dac_regs_endbit              2
#define rx_pl_fir_err_dac_regs_shift               13
#define rx_pl_fir_err_dac_regs_mask                0x2000


#define rx_pl_fir_err_inj_addr                     0b001100011
#define rx_pl_fir_err_inj_startbit                 0
#define rx_pl_fir_err_inj_width                    3
#define rx_pl_fir_err_inj_endbit                   2
#define rx_pl_fir_err_inj_shift                    13
#define rx_pl_fir_err_inj_mask                     0xe000


#define rx_pl_fir_err_inj_dac_regs_addr            0b001100011
#define rx_pl_fir_err_inj_dac_regs_startbit        2
#define rx_pl_fir_err_inj_dac_regs_width           1
#define rx_pl_fir_err_inj_dac_regs_endbit          2
#define rx_pl_fir_err_inj_dac_regs_shift           13
#define rx_pl_fir_err_inj_dac_regs_mask            0x2000


#define rx_pl_fir_err_inj_full_reg_addr            0b001100011
#define rx_pl_fir_err_inj_full_reg_startbit        0
#define rx_pl_fir_err_inj_full_reg_width           16
#define rx_pl_fir_err_inj_full_reg_endbit          15
#define rx_pl_fir_err_inj_full_reg_shift           0
#define rx_pl_fir_err_inj_full_reg_mask            0xffff


#define rx_pl_fir_err_inj_pl_regs_addr             0b001100011
#define rx_pl_fir_err_inj_pl_regs_startbit         0
#define rx_pl_fir_err_inj_pl_regs_width            1
#define rx_pl_fir_err_inj_pl_regs_endbit           0
#define rx_pl_fir_err_inj_pl_regs_shift            15
#define rx_pl_fir_err_inj_pl_regs_mask             0x8000


#define rx_pl_fir_err_inj_psave_sm_addr            0b001100011
#define rx_pl_fir_err_inj_psave_sm_startbit        1
#define rx_pl_fir_err_inj_psave_sm_width           1
#define rx_pl_fir_err_inj_psave_sm_endbit          1
#define rx_pl_fir_err_inj_psave_sm_shift           14
#define rx_pl_fir_err_inj_psave_sm_mask            0x4000


#define rx_pl_fir_err_mask_addr                    0b100100110
#define rx_pl_fir_err_mask_startbit                11
#define rx_pl_fir_err_mask_width                   1
#define rx_pl_fir_err_mask_endbit                  11
#define rx_pl_fir_err_mask_shift                   4
#define rx_pl_fir_err_mask_mask                    0x10


#define rx_pl_fir_err_mask_dac_regs_addr           0b001100010
#define rx_pl_fir_err_mask_dac_regs_startbit       2
#define rx_pl_fir_err_mask_dac_regs_width          1
#define rx_pl_fir_err_mask_dac_regs_endbit         2
#define rx_pl_fir_err_mask_dac_regs_shift          13
#define rx_pl_fir_err_mask_dac_regs_mask           0x2000


#define rx_pl_fir_err_mask_pl_regs_addr            0b001100010
#define rx_pl_fir_err_mask_pl_regs_startbit        0
#define rx_pl_fir_err_mask_pl_regs_width           1
#define rx_pl_fir_err_mask_pl_regs_endbit          0
#define rx_pl_fir_err_mask_pl_regs_shift           15
#define rx_pl_fir_err_mask_pl_regs_mask            0x8000


#define rx_pl_fir_err_mask_psave_sm_addr           0b001100010
#define rx_pl_fir_err_mask_psave_sm_startbit       1
#define rx_pl_fir_err_mask_psave_sm_width          1
#define rx_pl_fir_err_mask_psave_sm_endbit         1
#define rx_pl_fir_err_mask_psave_sm_shift          14
#define rx_pl_fir_err_mask_psave_sm_mask           0x4000


#define rx_pl_fir_err_pl_regs_addr                 0b001100001
#define rx_pl_fir_err_pl_regs_startbit             0
#define rx_pl_fir_err_pl_regs_width                1
#define rx_pl_fir_err_pl_regs_endbit               0
#define rx_pl_fir_err_pl_regs_shift                15
#define rx_pl_fir_err_pl_regs_mask                 0x8000


#define rx_pl_fir_err_psave_sm_addr                0b001100001
#define rx_pl_fir_err_psave_sm_startbit            1
#define rx_pl_fir_err_psave_sm_width               1
#define rx_pl_fir_err_psave_sm_endbit              1
#define rx_pl_fir_err_psave_sm_shift               14
#define rx_pl_fir_err_psave_sm_mask                0x4000


#define rx_pl_fir_errs_addr                        0b001100001
#define rx_pl_fir_errs_startbit                    0
#define rx_pl_fir_errs_width                       3
#define rx_pl_fir_errs_endbit                      2
#define rx_pl_fir_errs_shift                       13
#define rx_pl_fir_errs_mask                        0xe000


#define rx_pl_fir_errs_full_reg_addr               0b001100001
#define rx_pl_fir_errs_full_reg_startbit           0
#define rx_pl_fir_errs_full_reg_width              16
#define rx_pl_fir_errs_full_reg_endbit             15
#define rx_pl_fir_errs_full_reg_shift              0
#define rx_pl_fir_errs_full_reg_mask               0xffff


#define rx_pl_fir_errs_mask_addr                   0b001100010
#define rx_pl_fir_errs_mask_startbit               0
#define rx_pl_fir_errs_mask_width                  3
#define rx_pl_fir_errs_mask_endbit                 2
#define rx_pl_fir_errs_mask_shift                  13
#define rx_pl_fir_errs_mask_mask                   0xe000


#define rx_pl_fir_errs_mask_full_reg_addr          0b001100010
#define rx_pl_fir_errs_mask_full_reg_startbit      0
#define rx_pl_fir_errs_mask_full_reg_width         16
#define rx_pl_fir_errs_mask_full_reg_endbit        15
#define rx_pl_fir_errs_mask_full_reg_shift         0
#define rx_pl_fir_errs_mask_full_reg_mask          0xffff


#define rx_pl_spare_mode_0_addr                    0b001100000
#define rx_pl_spare_mode_0_startbit                0
#define rx_pl_spare_mode_0_width                   1
#define rx_pl_spare_mode_0_endbit                  0
#define rx_pl_spare_mode_0_shift                   15
#define rx_pl_spare_mode_0_mask                    0x8000


#define rx_pl_spare_mode_0_7_alias_addr            0b001100000
#define rx_pl_spare_mode_0_7_alias_startbit        0
#define rx_pl_spare_mode_0_7_alias_width           8
#define rx_pl_spare_mode_0_7_alias_endbit          7
#define rx_pl_spare_mode_0_7_alias_shift           8
#define rx_pl_spare_mode_0_7_alias_mask            0xff00


#define rx_pl_spare_mode_1_addr                    0b001100000
#define rx_pl_spare_mode_1_startbit                1
#define rx_pl_spare_mode_1_width                   1
#define rx_pl_spare_mode_1_endbit                  1
#define rx_pl_spare_mode_1_shift                   14
#define rx_pl_spare_mode_1_mask                    0x4000


#define rx_pl_spare_mode_2_addr                    0b001100000
#define rx_pl_spare_mode_2_startbit                2
#define rx_pl_spare_mode_2_width                   1
#define rx_pl_spare_mode_2_endbit                  2
#define rx_pl_spare_mode_2_shift                   13
#define rx_pl_spare_mode_2_mask                    0x2000


#define rx_pl_spare_mode_3_addr                    0b001100000
#define rx_pl_spare_mode_3_startbit                3
#define rx_pl_spare_mode_3_width                   1
#define rx_pl_spare_mode_3_endbit                  3
#define rx_pl_spare_mode_3_shift                   12
#define rx_pl_spare_mode_3_mask                    0x1000


#define rx_pl_spare_mode_4_addr                    0b001100000
#define rx_pl_spare_mode_4_startbit                4
#define rx_pl_spare_mode_4_width                   1
#define rx_pl_spare_mode_4_endbit                  4
#define rx_pl_spare_mode_4_shift                   11
#define rx_pl_spare_mode_4_mask                    0x800


#define rx_pl_spare_mode_5_addr                    0b001100000
#define rx_pl_spare_mode_5_startbit                5
#define rx_pl_spare_mode_5_width                   1
#define rx_pl_spare_mode_5_endbit                  5
#define rx_pl_spare_mode_5_shift                   10
#define rx_pl_spare_mode_5_mask                    0x400


#define rx_pl_spare_mode_6_addr                    0b001100000
#define rx_pl_spare_mode_6_startbit                6
#define rx_pl_spare_mode_6_width                   1
#define rx_pl_spare_mode_6_endbit                  6
#define rx_pl_spare_mode_6_shift                   9
#define rx_pl_spare_mode_6_mask                    0x200


#define rx_pl_spare_mode_7_addr                    0b001100000
#define rx_pl_spare_mode_7_startbit                7
#define rx_pl_spare_mode_7_width                   1
#define rx_pl_spare_mode_7_endbit                  7
#define rx_pl_spare_mode_7_shift                   8
#define rx_pl_spare_mode_7_mask                    0x100


#define rx_pr_ber_check_en_addr                    0b101000110
#define rx_pr_ber_check_en_startbit                13
#define rx_pr_ber_check_en_width                   1
#define rx_pr_ber_check_en_endbit                  13
#define rx_pr_ber_check_en_shift                   2
#define rx_pr_ber_check_en_mask                    0x4


#define rx_pr_bit_lock_done_a_addr                 0b001101110
#define rx_pr_bit_lock_done_a_startbit             4
#define rx_pr_bit_lock_done_a_width                1
#define rx_pr_bit_lock_done_a_endbit               4
#define rx_pr_bit_lock_done_a_shift                11
#define rx_pr_bit_lock_done_a_mask                 0x800


#define rx_pr_bit_lock_done_ab_alias_addr          0b001101110
#define rx_pr_bit_lock_done_ab_alias_startbit      4
#define rx_pr_bit_lock_done_ab_alias_width         2
#define rx_pr_bit_lock_done_ab_alias_endbit        5
#define rx_pr_bit_lock_done_ab_alias_shift         10
#define rx_pr_bit_lock_done_ab_alias_mask          0xc00


#define rx_pr_bit_lock_done_b_addr                 0b001101110
#define rx_pr_bit_lock_done_b_startbit             5
#define rx_pr_bit_lock_done_b_width                1
#define rx_pr_bit_lock_done_b_endbit               5
#define rx_pr_bit_lock_done_b_shift                10
#define rx_pr_bit_lock_done_b_mask                 0x400


#define rx_pr_bump_in_progress_a_addr              0b001110010
#define rx_pr_bump_in_progress_a_startbit          0
#define rx_pr_bump_in_progress_a_width             1
#define rx_pr_bump_in_progress_a_endbit            0
#define rx_pr_bump_in_progress_a_shift             15
#define rx_pr_bump_in_progress_a_mask              0x8000


#define rx_pr_bump_in_progress_ab_alias_addr       0b001110010
#define rx_pr_bump_in_progress_ab_alias_startbit   0
#define rx_pr_bump_in_progress_ab_alias_width      2
#define rx_pr_bump_in_progress_ab_alias_endbit     1
#define rx_pr_bump_in_progress_ab_alias_shift      14
#define rx_pr_bump_in_progress_ab_alias_mask       0xc000


#define rx_pr_bump_in_progress_b_addr              0b001110010
#define rx_pr_bump_in_progress_b_startbit          1
#define rx_pr_bump_in_progress_b_width             1
#define rx_pr_bump_in_progress_b_endbit            1
#define rx_pr_bump_in_progress_b_shift             14
#define rx_pr_bump_in_progress_b_mask              0x4000


#define rx_pr_bump_sl_1ui_a_addr                   0b001110000
#define rx_pr_bump_sl_1ui_a_startbit               2
#define rx_pr_bump_sl_1ui_a_width                  1
#define rx_pr_bump_sl_1ui_a_endbit                 2
#define rx_pr_bump_sl_1ui_a_shift                  13
#define rx_pr_bump_sl_1ui_a_mask                   0x2000


#define rx_pr_bump_sl_1ui_b_addr                   0b001110000
#define rx_pr_bump_sl_1ui_b_startbit               4
#define rx_pr_bump_sl_1ui_b_width                  1
#define rx_pr_bump_sl_1ui_b_endbit                 4
#define rx_pr_bump_sl_1ui_b_shift                  11
#define rx_pr_bump_sl_1ui_b_mask                   0x800


#define rx_pr_bump_sr_1ui_a_addr                   0b001110000
#define rx_pr_bump_sr_1ui_a_startbit               3
#define rx_pr_bump_sr_1ui_a_width                  1
#define rx_pr_bump_sr_1ui_a_endbit                 3
#define rx_pr_bump_sr_1ui_a_shift                  12
#define rx_pr_bump_sr_1ui_a_mask                   0x1000


#define rx_pr_bump_sr_1ui_b_addr                   0b001110000
#define rx_pr_bump_sr_1ui_b_startbit               5
#define rx_pr_bump_sr_1ui_b_width                  1
#define rx_pr_bump_sr_1ui_b_endbit                 5
#define rx_pr_bump_sr_1ui_b_shift                  10
#define rx_pr_bump_sr_1ui_b_mask                   0x400


#define rx_pr_coarse_mode_en_addr                  0b001100101
#define rx_pr_coarse_mode_en_startbit              2
#define rx_pr_coarse_mode_en_width                 1
#define rx_pr_coarse_mode_en_endbit                2
#define rx_pr_coarse_mode_en_shift                 13
#define rx_pr_coarse_mode_en_mask                  0x2000


#define rx_pr_coarse_unlock_en_addr                0b001100101
#define rx_pr_coarse_unlock_en_startbit            3
#define rx_pr_coarse_unlock_en_width               1
#define rx_pr_coarse_unlock_en_endbit              3
#define rx_pr_coarse_unlock_en_shift               12
#define rx_pr_coarse_unlock_en_mask                0x1000


#define rx_pr_edge_track_cntl_a_alias_addr         0b001101101
#define rx_pr_edge_track_cntl_a_alias_startbit     0
#define rx_pr_edge_track_cntl_a_alias_width        3
#define rx_pr_edge_track_cntl_a_alias_endbit       2
#define rx_pr_edge_track_cntl_a_alias_shift        13
#define rx_pr_edge_track_cntl_a_alias_mask         0xe000


#define rx_pr_edge_track_cntl_ab_alias_addr        0b001101101
#define rx_pr_edge_track_cntl_ab_alias_startbit    0
#define rx_pr_edge_track_cntl_ab_alias_width       6
#define rx_pr_edge_track_cntl_ab_alias_endbit      5
#define rx_pr_edge_track_cntl_ab_alias_shift       10
#define rx_pr_edge_track_cntl_ab_alias_mask        0xfc00


#define rx_pr_edge_track_cntl_b_alias_addr         0b001101101
#define rx_pr_edge_track_cntl_b_alias_startbit     3
#define rx_pr_edge_track_cntl_b_alias_width        3
#define rx_pr_edge_track_cntl_b_alias_endbit       5
#define rx_pr_edge_track_cntl_b_alias_shift        10
#define rx_pr_edge_track_cntl_b_alias_mask         0x1c00


#define rx_pr_enable_a_addr                        0b001101101
#define rx_pr_enable_a_startbit                    0
#define rx_pr_enable_a_width                       1
#define rx_pr_enable_a_endbit                      0
#define rx_pr_enable_a_shift                       15
#define rx_pr_enable_a_mask                        0x8000


#define rx_pr_enable_b_addr                        0b001101101
#define rx_pr_enable_b_startbit                    3
#define rx_pr_enable_b_width                       1
#define rx_pr_enable_b_endbit                      3
#define rx_pr_enable_b_shift                       12
#define rx_pr_enable_b_mask                        0x1000


#define rx_pr_fw_inertia_amt_addr                  0b001100111
#define rx_pr_fw_inertia_amt_startbit              0
#define rx_pr_fw_inertia_amt_width                 4
#define rx_pr_fw_inertia_amt_endbit                3
#define rx_pr_fw_inertia_amt_shift                 12
#define rx_pr_fw_inertia_amt_mask                  0xf000


#define rx_pr_fw_inertia_amt_coarse_addr           0b001101000
#define rx_pr_fw_inertia_amt_coarse_startbit       0
#define rx_pr_fw_inertia_amt_coarse_width          4
#define rx_pr_fw_inertia_amt_coarse_endbit         3
#define rx_pr_fw_inertia_amt_coarse_shift          12
#define rx_pr_fw_inertia_amt_coarse_mask           0xf000


#define rx_pr_fw_reset_a_addr                      0b001101110
#define rx_pr_fw_reset_a_startbit                  2
#define rx_pr_fw_reset_a_width                     1
#define rx_pr_fw_reset_a_endbit                    2
#define rx_pr_fw_reset_a_shift                     13
#define rx_pr_fw_reset_a_mask                      0x2000


#define rx_pr_fw_reset_ab_alias_addr               0b001101110
#define rx_pr_fw_reset_ab_alias_startbit           2
#define rx_pr_fw_reset_ab_alias_width              2
#define rx_pr_fw_reset_ab_alias_endbit             3
#define rx_pr_fw_reset_ab_alias_shift              12
#define rx_pr_fw_reset_ab_alias_mask               0x3000


#define rx_pr_fw_reset_b_addr                      0b001101110
#define rx_pr_fw_reset_b_startbit                  3
#define rx_pr_fw_reset_b_width                     1
#define rx_pr_fw_reset_b_endbit                    3
#define rx_pr_fw_reset_b_shift                     12
#define rx_pr_fw_reset_b_mask                      0x1000


#define rx_pr_fw_snapshot_a_addr                   0b001110011
#define rx_pr_fw_snapshot_a_startbit               0
#define rx_pr_fw_snapshot_a_width                  15
#define rx_pr_fw_snapshot_a_endbit                 14
#define rx_pr_fw_snapshot_a_shift                  1
#define rx_pr_fw_snapshot_a_mask                   0xfffe


#define rx_pr_fw_snapshot_b_addr                   0b001110100
#define rx_pr_fw_snapshot_b_startbit               0
#define rx_pr_fw_snapshot_b_width                  15
#define rx_pr_fw_snapshot_b_endbit                 14
#define rx_pr_fw_snapshot_b_shift                  1
#define rx_pr_fw_snapshot_b_mask                   0xfffe


#define rx_pr_in_coarse_mode_a_addr                0b001110010
#define rx_pr_in_coarse_mode_a_startbit            2
#define rx_pr_in_coarse_mode_a_width               1
#define rx_pr_in_coarse_mode_a_endbit              2
#define rx_pr_in_coarse_mode_a_shift               13
#define rx_pr_in_coarse_mode_a_mask                0x2000


#define rx_pr_in_coarse_mode_a_sticky_addr         0b001110010
#define rx_pr_in_coarse_mode_a_sticky_startbit     4
#define rx_pr_in_coarse_mode_a_sticky_width        1
#define rx_pr_in_coarse_mode_a_sticky_endbit       4
#define rx_pr_in_coarse_mode_a_sticky_shift        11
#define rx_pr_in_coarse_mode_a_sticky_mask         0x800


#define rx_pr_in_coarse_mode_a_sticky_clear_addr   0b001110000
#define rx_pr_in_coarse_mode_a_sticky_clear_startbit   6
#define rx_pr_in_coarse_mode_a_sticky_clear_width   1
#define rx_pr_in_coarse_mode_a_sticky_clear_endbit   6
#define rx_pr_in_coarse_mode_a_sticky_clear_shift   9
#define rx_pr_in_coarse_mode_a_sticky_clear_mask   0x200


#define rx_pr_in_coarse_mode_b_addr                0b001110010
#define rx_pr_in_coarse_mode_b_startbit            3
#define rx_pr_in_coarse_mode_b_width               1
#define rx_pr_in_coarse_mode_b_endbit              3
#define rx_pr_in_coarse_mode_b_shift               12
#define rx_pr_in_coarse_mode_b_mask                0x1000


#define rx_pr_in_coarse_mode_b_sticky_addr         0b001110010
#define rx_pr_in_coarse_mode_b_sticky_startbit     5
#define rx_pr_in_coarse_mode_b_sticky_width        1
#define rx_pr_in_coarse_mode_b_sticky_endbit       5
#define rx_pr_in_coarse_mode_b_sticky_shift        10
#define rx_pr_in_coarse_mode_b_sticky_mask         0x400


#define rx_pr_in_coarse_mode_b_sticky_clear_addr   0b001110000
#define rx_pr_in_coarse_mode_b_sticky_clear_startbit   7
#define rx_pr_in_coarse_mode_b_sticky_clear_width   1
#define rx_pr_in_coarse_mode_b_sticky_clear_endbit   7
#define rx_pr_in_coarse_mode_b_sticky_clear_shift   8
#define rx_pr_in_coarse_mode_b_sticky_clear_mask   0x100


#define rx_pr_invalid_lock_filter_dir_addr         0b001100101
#define rx_pr_invalid_lock_filter_dir_startbit     1
#define rx_pr_invalid_lock_filter_dir_width        1
#define rx_pr_invalid_lock_filter_dir_endbit       1
#define rx_pr_invalid_lock_filter_dir_shift        14
#define rx_pr_invalid_lock_filter_dir_mask         0x4000


#define rx_pr_invalid_lock_filter_en_addr          0b001100101
#define rx_pr_invalid_lock_filter_en_startbit      0
#define rx_pr_invalid_lock_filter_en_width         1
#define rx_pr_invalid_lock_filter_en_endbit        0
#define rx_pr_invalid_lock_filter_en_shift         15
#define rx_pr_invalid_lock_filter_en_mask          0x8000


#define rx_pr_ki_kp_coarse_full_reg_addr           0b001101000
#define rx_pr_ki_kp_coarse_full_reg_startbit       0
#define rx_pr_ki_kp_coarse_full_reg_width          16
#define rx_pr_ki_kp_coarse_full_reg_endbit         15
#define rx_pr_ki_kp_coarse_full_reg_shift          0
#define rx_pr_ki_kp_coarse_full_reg_mask           0xffff


#define rx_pr_ki_kp_full_reg_addr                  0b001100111
#define rx_pr_ki_kp_full_reg_startbit              0
#define rx_pr_ki_kp_full_reg_width                 16
#define rx_pr_ki_kp_full_reg_endbit                15
#define rx_pr_ki_kp_full_reg_shift                 0
#define rx_pr_ki_kp_full_reg_mask                  0xffff


#define rx_pr_lock_filter_addr                     0b001100110
#define rx_pr_lock_filter_startbit                 0
#define rx_pr_lock_filter_width                    4
#define rx_pr_lock_filter_endbit                   3
#define rx_pr_lock_filter_shift                    12
#define rx_pr_lock_filter_mask                     0xf000


#define rx_pr_lock_invalid_lock_en_addr            0b001100101
#define rx_pr_lock_invalid_lock_en_startbit        4
#define rx_pr_lock_invalid_lock_en_width           1
#define rx_pr_lock_invalid_lock_en_endbit          4
#define rx_pr_lock_invalid_lock_en_shift           11
#define rx_pr_lock_invalid_lock_en_mask            0x800


#define rx_pr_lock_ratio_addr                      0b001100101
#define rx_pr_lock_ratio_startbit                  5
#define rx_pr_lock_ratio_width                     10
#define rx_pr_lock_ratio_endbit                    14
#define rx_pr_lock_ratio_shift                     1
#define rx_pr_lock_ratio_mask                      0x7fe


#define rx_pr_lock_term_addr                       0b001100110
#define rx_pr_lock_term_startbit                   4
#define rx_pr_lock_term_width                      9
#define rx_pr_lock_term_endbit                     12
#define rx_pr_lock_term_shift                      3
#define rx_pr_lock_term_mask                       0xff8


#define rx_pr_locked_a_addr                        0b001110010
#define rx_pr_locked_a_startbit                    6
#define rx_pr_locked_a_width                       1
#define rx_pr_locked_a_endbit                      6
#define rx_pr_locked_a_shift                       9
#define rx_pr_locked_a_mask                        0x200


#define rx_pr_locked_ab_alias_addr                 0b001110010
#define rx_pr_locked_ab_alias_startbit             6
#define rx_pr_locked_ab_alias_width                2
#define rx_pr_locked_ab_alias_endbit               7
#define rx_pr_locked_ab_alias_shift                8
#define rx_pr_locked_ab_alias_mask                 0x300


#define rx_pr_locked_b_addr                        0b001110010
#define rx_pr_locked_b_startbit                    7
#define rx_pr_locked_b_width                       1
#define rx_pr_locked_b_endbit                      7
#define rx_pr_locked_b_shift                       8
#define rx_pr_locked_b_mask                        0x100


#define rx_pr_phase_force_a_addr                   0b001101111
#define rx_pr_phase_force_a_startbit               0
#define rx_pr_phase_force_a_width                  1
#define rx_pr_phase_force_a_endbit                 0
#define rx_pr_phase_force_a_shift                  15
#define rx_pr_phase_force_a_mask                   0x8000


#define rx_pr_phase_force_b_addr                   0b001101111
#define rx_pr_phase_force_b_startbit               8
#define rx_pr_phase_force_b_width                  1
#define rx_pr_phase_force_b_endbit                 8
#define rx_pr_phase_force_b_shift                  7
#define rx_pr_phase_force_b_mask                   0x80


#define rx_pr_phase_force_cmd_a_alias_addr         0b001101111
#define rx_pr_phase_force_cmd_a_alias_startbit     0
#define rx_pr_phase_force_cmd_a_alias_width        8
#define rx_pr_phase_force_cmd_a_alias_endbit       7
#define rx_pr_phase_force_cmd_a_alias_shift        8
#define rx_pr_phase_force_cmd_a_alias_mask         0xff00


#define rx_pr_phase_force_cmd_ab_alias_addr        0b001101111
#define rx_pr_phase_force_cmd_ab_alias_startbit    0
#define rx_pr_phase_force_cmd_ab_alias_width       16
#define rx_pr_phase_force_cmd_ab_alias_endbit      15
#define rx_pr_phase_force_cmd_ab_alias_shift       0
#define rx_pr_phase_force_cmd_ab_alias_mask        0xffff


#define rx_pr_phase_force_cmd_b_alias_addr         0b001101111
#define rx_pr_phase_force_cmd_b_alias_startbit     8
#define rx_pr_phase_force_cmd_b_alias_width        8
#define rx_pr_phase_force_cmd_b_alias_endbit       15
#define rx_pr_phase_force_cmd_b_alias_shift        0
#define rx_pr_phase_force_cmd_b_alias_mask         0xff


#define rx_pr_phase_force_val_a_addr               0b001101111
#define rx_pr_phase_force_val_a_startbit           1
#define rx_pr_phase_force_val_a_width              7
#define rx_pr_phase_force_val_a_endbit             7
#define rx_pr_phase_force_val_a_shift              8
#define rx_pr_phase_force_val_a_mask               0x7f00


#define rx_pr_phase_force_val_b_addr               0b001101111
#define rx_pr_phase_force_val_b_startbit           9
#define rx_pr_phase_force_val_b_width              7
#define rx_pr_phase_force_val_b_endbit             15
#define rx_pr_phase_force_val_b_shift              0
#define rx_pr_phase_force_val_b_mask               0x7f


#define rx_pr_phase_step_addr                      0b001100111
#define rx_pr_phase_step_startbit                  8
#define rx_pr_phase_step_width                     7
#define rx_pr_phase_step_endbit                    14
#define rx_pr_phase_step_shift                     1
#define rx_pr_phase_step_mask                      0xfe


#define rx_pr_phase_step_coarse_addr               0b001101000
#define rx_pr_phase_step_coarse_startbit           8
#define rx_pr_phase_step_coarse_width              7
#define rx_pr_phase_step_coarse_endbit             14
#define rx_pr_phase_step_coarse_shift              1
#define rx_pr_phase_step_coarse_mask               0xfe


#define rx_pr_psave_ph_force_a_addr                0b001110001
#define rx_pr_psave_ph_force_a_startbit            2
#define rx_pr_psave_ph_force_a_width               1
#define rx_pr_psave_ph_force_a_endbit              2
#define rx_pr_psave_ph_force_a_shift               13
#define rx_pr_psave_ph_force_a_mask                0x2000


#define rx_pr_psave_ph_force_b_addr                0b001110001
#define rx_pr_psave_ph_force_b_startbit            3
#define rx_pr_psave_ph_force_b_width               1
#define rx_pr_psave_ph_force_b_endbit              3
#define rx_pr_psave_ph_force_b_shift               12
#define rx_pr_psave_ph_force_b_mask                0x1000


#define rx_pr_psave_val_ena_a_addr                 0b001110001
#define rx_pr_psave_val_ena_a_startbit             4
#define rx_pr_psave_val_ena_a_width                1
#define rx_pr_psave_val_ena_a_endbit               4
#define rx_pr_psave_val_ena_a_shift                11
#define rx_pr_psave_val_ena_a_mask                 0x800


#define rx_pr_psave_val_ena_b_addr                 0b001110001
#define rx_pr_psave_val_ena_b_startbit             5
#define rx_pr_psave_val_ena_b_width                1
#define rx_pr_psave_val_ena_b_endbit               5
#define rx_pr_psave_val_ena_b_shift                10
#define rx_pr_psave_val_ena_b_mask                 0x400


#define rx_pr_quad_mode_a_addr                     0b001101101
#define rx_pr_quad_mode_a_startbit                 2
#define rx_pr_quad_mode_a_width                    1
#define rx_pr_quad_mode_a_endbit                   2
#define rx_pr_quad_mode_a_shift                    13
#define rx_pr_quad_mode_a_mask                     0x2000


#define rx_pr_quad_mode_b_addr                     0b001101101
#define rx_pr_quad_mode_b_startbit                 5
#define rx_pr_quad_mode_b_width                    1
#define rx_pr_quad_mode_b_endbit                   5
#define rx_pr_quad_mode_b_shift                    10
#define rx_pr_quad_mode_b_mask                     0x400


#define rx_pr_quad_sel_a_addr                      0b001101100
#define rx_pr_quad_sel_a_startbit                  5
#define rx_pr_quad_sel_a_width                     2
#define rx_pr_quad_sel_a_endbit                    6
#define rx_pr_quad_sel_a_shift                     9
#define rx_pr_quad_sel_a_mask                      0x600


#define rx_pr_quad_sel_b_addr                      0b001101100
#define rx_pr_quad_sel_b_startbit                  7
#define rx_pr_quad_sel_b_width                     2
#define rx_pr_quad_sel_b_endbit                    8
#define rx_pr_quad_sel_b_shift                     7
#define rx_pr_quad_sel_b_mask                      0x180


#define rx_pr_slave_mode_a_addr                    0b001101101
#define rx_pr_slave_mode_a_startbit                1
#define rx_pr_slave_mode_a_width                   1
#define rx_pr_slave_mode_a_endbit                  1
#define rx_pr_slave_mode_a_shift                   14
#define rx_pr_slave_mode_a_mask                    0x4000


#define rx_pr_slave_mode_b_addr                    0b001101101
#define rx_pr_slave_mode_b_startbit                4
#define rx_pr_slave_mode_b_width                   1
#define rx_pr_slave_mode_b_endbit                  4
#define rx_pr_slave_mode_b_shift                   11
#define rx_pr_slave_mode_b_mask                    0x800


#define rx_pr_take_fw_snapshot_a_addr              0b001110000
#define rx_pr_take_fw_snapshot_a_startbit          10
#define rx_pr_take_fw_snapshot_a_width             1
#define rx_pr_take_fw_snapshot_a_endbit            10
#define rx_pr_take_fw_snapshot_a_shift             5
#define rx_pr_take_fw_snapshot_a_mask              0x20


#define rx_pr_take_fw_snapshot_b_addr              0b001110000
#define rx_pr_take_fw_snapshot_b_startbit          11
#define rx_pr_take_fw_snapshot_b_width             1
#define rx_pr_take_fw_snapshot_b_endbit            11
#define rx_pr_take_fw_snapshot_b_shift             4
#define rx_pr_take_fw_snapshot_b_mask              0x10


#define rx_pr_unlock_ratio_addr                    0b001101010
#define rx_pr_unlock_ratio_startbit                2
#define rx_pr_unlock_ratio_width                   10
#define rx_pr_unlock_ratio_endbit                  11
#define rx_pr_unlock_ratio_shift                   4
#define rx_pr_unlock_ratio_mask                    0x3ff0


#define rx_pr_unlocked_a_sticky_addr               0b001110010
#define rx_pr_unlocked_a_sticky_startbit           8
#define rx_pr_unlocked_a_sticky_width              1
#define rx_pr_unlocked_a_sticky_endbit             8
#define rx_pr_unlocked_a_sticky_shift              7
#define rx_pr_unlocked_a_sticky_mask               0x80


#define rx_pr_unlocked_a_sticky_clear_addr         0b001110000
#define rx_pr_unlocked_a_sticky_clear_startbit     8
#define rx_pr_unlocked_a_sticky_clear_width        1
#define rx_pr_unlocked_a_sticky_clear_endbit       8
#define rx_pr_unlocked_a_sticky_clear_shift        7
#define rx_pr_unlocked_a_sticky_clear_mask         0x80


#define rx_pr_unlocked_b_sticky_addr               0b001110010
#define rx_pr_unlocked_b_sticky_startbit           9
#define rx_pr_unlocked_b_sticky_width              1
#define rx_pr_unlocked_b_sticky_endbit             9
#define rx_pr_unlocked_b_sticky_shift              6
#define rx_pr_unlocked_b_sticky_mask               0x40


#define rx_pr_unlocked_b_sticky_clear_addr         0b001110000
#define rx_pr_unlocked_b_sticky_clear_startbit     9
#define rx_pr_unlocked_b_sticky_clear_width        1
#define rx_pr_unlocked_b_sticky_clear_endbit       9
#define rx_pr_unlocked_b_sticky_clear_shift        6
#define rx_pr_unlocked_b_sticky_clear_mask         0x40


#define rx_prvcpt_change_det_addr                  0b101011110
#define rx_prvcpt_change_det_startbit              15
#define rx_prvcpt_change_det_width                 1
#define rx_prvcpt_change_det_endbit                15
#define rx_prvcpt_change_det_shift                 0
#define rx_prvcpt_change_det_mask                  0x1


#define rx_psave_cdr_disable_sm_addr               0b001101001
#define rx_psave_cdr_disable_sm_startbit           15
#define rx_psave_cdr_disable_sm_width              1
#define rx_psave_cdr_disable_sm_endbit             15
#define rx_psave_cdr_disable_sm_shift              0
#define rx_psave_cdr_disable_sm_mask               0x1


#define rx_psave_cdr_lock_ovrd_addr                0b100111101
#define rx_psave_cdr_lock_ovrd_startbit            2
#define rx_psave_cdr_lock_ovrd_width               1
#define rx_psave_cdr_lock_ovrd_endbit              2
#define rx_psave_cdr_lock_ovrd_shift               13
#define rx_psave_cdr_lock_ovrd_mask                0x2000


#define rx_psave_cdr_time_val_addr                 0b001101001
#define rx_psave_cdr_time_val_startbit             0
#define rx_psave_cdr_time_val_width                13
#define rx_psave_cdr_time_val_endbit               12
#define rx_psave_cdr_time_val_shift                3
#define rx_psave_cdr_time_val_mask                 0xfff8


#define rx_psave_cdr_timer_double_mode_addr        0b001101001
#define rx_psave_cdr_timer_double_mode_startbit    14
#define rx_psave_cdr_timer_double_mode_width       1
#define rx_psave_cdr_timer_double_mode_endbit      14
#define rx_psave_cdr_timer_double_mode_shift       1
#define rx_psave_cdr_timer_double_mode_mask        0x2


#define rx_psave_cdrlock_mode_sel_addr             0b001101010
#define rx_psave_cdrlock_mode_sel_startbit         0
#define rx_psave_cdrlock_mode_sel_width            2
#define rx_psave_cdrlock_mode_sel_endbit           1
#define rx_psave_cdrlock_mode_sel_shift            14
#define rx_psave_cdrlock_mode_sel_mask             0xc000


#define rx_psave_cdrlock_timer_fail_a_addr         0b001110010
#define rx_psave_cdrlock_timer_fail_a_startbit     10
#define rx_psave_cdrlock_timer_fail_a_width        1
#define rx_psave_cdrlock_timer_fail_a_endbit       10
#define rx_psave_cdrlock_timer_fail_a_shift        5
#define rx_psave_cdrlock_timer_fail_a_mask         0x20


#define rx_psave_cdrlock_timer_fail_a_clr_addr     0b001110000
#define rx_psave_cdrlock_timer_fail_a_clr_startbit   13
#define rx_psave_cdrlock_timer_fail_a_clr_width    1
#define rx_psave_cdrlock_timer_fail_a_clr_endbit   13
#define rx_psave_cdrlock_timer_fail_a_clr_shift    2
#define rx_psave_cdrlock_timer_fail_a_clr_mask     0x4


#define rx_psave_cdrlock_timer_fail_b_addr         0b001110010
#define rx_psave_cdrlock_timer_fail_b_startbit     11
#define rx_psave_cdrlock_timer_fail_b_width        1
#define rx_psave_cdrlock_timer_fail_b_endbit       11
#define rx_psave_cdrlock_timer_fail_b_shift        4
#define rx_psave_cdrlock_timer_fail_b_mask         0x10


#define rx_psave_cdrlock_timer_fail_b_clr_addr     0b001110000
#define rx_psave_cdrlock_timer_fail_b_clr_startbit   14
#define rx_psave_cdrlock_timer_fail_b_clr_width    1
#define rx_psave_cdrlock_timer_fail_b_clr_endbit   14
#define rx_psave_cdrlock_timer_fail_b_clr_shift    1
#define rx_psave_cdrlock_timer_fail_b_clr_mask     0x2


#define rx_psave_disable_sm_addr                   0b100111101
#define rx_psave_disable_sm_startbit               0
#define rx_psave_disable_sm_width                  1
#define rx_psave_disable_sm_endbit                 0
#define rx_psave_disable_sm_shift                  15
#define rx_psave_disable_sm_mask                   0x8000


#define rx_psave_en_dl_clk_control_addr            0b001101010
#define rx_psave_en_dl_clk_control_startbit        13
#define rx_psave_en_dl_clk_control_width           1
#define rx_psave_en_dl_clk_control_endbit          13
#define rx_psave_en_dl_clk_control_shift           2
#define rx_psave_en_dl_clk_control_mask            0x4


#define rx_psave_fence_req_dl_io_0_15_addr         0b100110101
#define rx_psave_fence_req_dl_io_0_15_startbit     0
#define rx_psave_fence_req_dl_io_0_15_width        16
#define rx_psave_fence_req_dl_io_0_15_endbit       15
#define rx_psave_fence_req_dl_io_0_15_shift        0
#define rx_psave_fence_req_dl_io_0_15_mask         0xffff


#define rx_psave_fence_req_dl_io_16_23_addr        0b100110110
#define rx_psave_fence_req_dl_io_16_23_startbit    0
#define rx_psave_fence_req_dl_io_16_23_width       8
#define rx_psave_fence_req_dl_io_16_23_endbit      7
#define rx_psave_fence_req_dl_io_16_23_shift       8
#define rx_psave_fence_req_dl_io_16_23_mask        0xff00


#define rx_psave_fence_sts_io_dl_0_15_addr         0b100110111
#define rx_psave_fence_sts_io_dl_0_15_startbit     0
#define rx_psave_fence_sts_io_dl_0_15_width        16
#define rx_psave_fence_sts_io_dl_0_15_endbit       15
#define rx_psave_fence_sts_io_dl_0_15_shift        0
#define rx_psave_fence_sts_io_dl_0_15_mask         0xffff


#define rx_psave_fence_sts_io_dl_16_23_addr        0b100111000
#define rx_psave_fence_sts_io_dl_16_23_startbit    0
#define rx_psave_fence_sts_io_dl_16_23_width       8
#define rx_psave_fence_sts_io_dl_16_23_endbit      7
#define rx_psave_fence_sts_io_dl_16_23_shift       8
#define rx_psave_fence_sts_io_dl_16_23_mask        0xff00


#define rx_psave_fifo_time_addr                    0b101000100
#define rx_psave_fifo_time_startbit                6
#define rx_psave_fifo_time_width                   6
#define rx_psave_fifo_time_endbit                  11
#define rx_psave_fifo_time_shift                   4
#define rx_psave_fifo_time_mask                    0x3f0


#define rx_psave_fifo_timer_double_mode_addr       0b101000100
#define rx_psave_fifo_timer_double_mode_startbit   14
#define rx_psave_fifo_timer_double_mode_width      1
#define rx_psave_fifo_timer_double_mode_endbit     14
#define rx_psave_fifo_timer_double_mode_shift      1
#define rx_psave_fifo_timer_double_mode_mask       0x2


#define rx_psave_force_req_0_15_0_addr             0b100111001
#define rx_psave_force_req_0_15_0_startbit         0
#define rx_psave_force_req_0_15_0_width            16
#define rx_psave_force_req_0_15_0_endbit           15
#define rx_psave_force_req_0_15_0_shift            0
#define rx_psave_force_req_0_15_0_mask             0xffff


#define rx_psave_force_req_0_15_1_addr             0b101010000
#define rx_psave_force_req_0_15_1_startbit         0
#define rx_psave_force_req_0_15_1_width            16
#define rx_psave_force_req_0_15_1_endbit           15
#define rx_psave_force_req_0_15_1_shift            0
#define rx_psave_force_req_0_15_1_mask             0xffff


#define rx_psave_force_req_16_23_0_addr            0b100111010
#define rx_psave_force_req_16_23_0_startbit        0
#define rx_psave_force_req_16_23_0_width           8
#define rx_psave_force_req_16_23_0_endbit          7
#define rx_psave_force_req_16_23_0_shift           8
#define rx_psave_force_req_16_23_0_mask            0xff00


#define rx_psave_force_req_16_23_1_addr            0b101010001
#define rx_psave_force_req_16_23_1_startbit        0
#define rx_psave_force_req_16_23_1_width           8
#define rx_psave_force_req_16_23_1_endbit          7
#define rx_psave_force_req_16_23_1_shift           8
#define rx_psave_force_req_16_23_1_mask            0xff00


#define rx_psave_force_sts_0_15_addr               0b100111011
#define rx_psave_force_sts_0_15_startbit           0
#define rx_psave_force_sts_0_15_width              16
#define rx_psave_force_sts_0_15_endbit             15
#define rx_psave_force_sts_0_15_shift              0
#define rx_psave_force_sts_0_15_mask               0xffff


#define rx_psave_force_sts_16_23_addr              0b100111100
#define rx_psave_force_sts_16_23_startbit          0
#define rx_psave_force_sts_16_23_width             8
#define rx_psave_force_sts_16_23_endbit            7
#define rx_psave_force_sts_16_23_shift             8
#define rx_psave_force_sts_16_23_mask              0xff00


#define rx_psave_fw_val0_sel_addr                  0b100111110
#define rx_psave_fw_val0_sel_startbit              0
#define rx_psave_fw_val0_sel_width                 5
#define rx_psave_fw_val0_sel_endbit                4
#define rx_psave_fw_val0_sel_shift                 11
#define rx_psave_fw_val0_sel_mask                  0xf800


#define rx_psave_fw_val1_sel_addr                  0b100111110
#define rx_psave_fw_val1_sel_startbit              5
#define rx_psave_fw_val1_sel_width                 5
#define rx_psave_fw_val1_sel_endbit                9
#define rx_psave_fw_val1_sel_shift                 6
#define rx_psave_fw_val1_sel_mask                  0x7c0


#define rx_psave_fw_val2_sel_addr                  0b100111110
#define rx_psave_fw_val2_sel_startbit              10
#define rx_psave_fw_val2_sel_width                 5
#define rx_psave_fw_val2_sel_endbit                14
#define rx_psave_fw_val2_sel_shift                 1
#define rx_psave_fw_val2_sel_mask                  0x3e


#define rx_psave_fw_val3_sel_addr                  0b100111111
#define rx_psave_fw_val3_sel_startbit              0
#define rx_psave_fw_val3_sel_width                 5
#define rx_psave_fw_val3_sel_endbit                4
#define rx_psave_fw_val3_sel_shift                 11
#define rx_psave_fw_val3_sel_mask                  0xf800


#define rx_psave_fw_val_sel_addr                   0b001110001
#define rx_psave_fw_val_sel_startbit               0
#define rx_psave_fw_val_sel_width                  2
#define rx_psave_fw_val_sel_endbit                 1
#define rx_psave_fw_val_sel_shift                  14
#define rx_psave_fw_val_sel_mask                   0xc000


#define rx_psave_fw_valid_bypass_addr              0b101000100
#define rx_psave_fw_valid_bypass_startbit          15
#define rx_psave_fw_valid_bypass_width             1
#define rx_psave_fw_valid_bypass_endbit            15
#define rx_psave_fw_valid_bypass_shift             0
#define rx_psave_fw_valid_bypass_mask              0x1


#define rx_psave_req_alt_addr                      0b001111011
#define rx_psave_req_alt_startbit                  0
#define rx_psave_req_alt_width                     1
#define rx_psave_req_alt_endbit                    0
#define rx_psave_req_alt_shift                     15
#define rx_psave_req_alt_mask                      0x8000


#define rx_psave_req_dl_addr                       0b001111100
#define rx_psave_req_dl_startbit                   4
#define rx_psave_req_dl_width                      1
#define rx_psave_req_dl_endbit                     4
#define rx_psave_req_dl_shift                      11
#define rx_psave_req_dl_mask                       0x800


#define rx_psave_req_dl_0_15_sts_addr              0b101101001
#define rx_psave_req_dl_0_15_sts_startbit          0
#define rx_psave_req_dl_0_15_sts_width             16
#define rx_psave_req_dl_0_15_sts_endbit            15
#define rx_psave_req_dl_0_15_sts_shift             0
#define rx_psave_req_dl_0_15_sts_mask              0xffff


#define rx_psave_req_dl_16_23_sts_addr             0b101101010
#define rx_psave_req_dl_16_23_sts_startbit         0
#define rx_psave_req_dl_16_23_sts_width            8
#define rx_psave_req_dl_16_23_sts_endbit           7
#define rx_psave_req_dl_16_23_sts_shift            8
#define rx_psave_req_dl_16_23_sts_mask             0xff00


#define rx_psave_sts_alt_addr                      0b001111011
#define rx_psave_sts_alt_startbit                  1
#define rx_psave_sts_alt_width                     1
#define rx_psave_sts_alt_endbit                    1
#define rx_psave_sts_alt_shift                     14
#define rx_psave_sts_alt_mask                      0x4000


#define rx_psave_sts_phy_addr                      0b001111100
#define rx_psave_sts_phy_startbit                  5
#define rx_psave_sts_phy_width                     1
#define rx_psave_sts_phy_endbit                    5
#define rx_psave_sts_phy_shift                     10
#define rx_psave_sts_phy_mask                      0x400


#define rx_psave_sts_phy_0_15_sts_addr             0b101101011
#define rx_psave_sts_phy_0_15_sts_startbit         0
#define rx_psave_sts_phy_0_15_sts_width            16
#define rx_psave_sts_phy_0_15_sts_endbit           15
#define rx_psave_sts_phy_0_15_sts_shift            0
#define rx_psave_sts_phy_0_15_sts_mask             0xffff


#define rx_psave_sts_phy_16_23_sts_addr            0b101101100
#define rx_psave_sts_phy_16_23_sts_startbit        0
#define rx_psave_sts_phy_16_23_sts_width           8
#define rx_psave_sts_phy_16_23_sts_endbit          7
#define rx_psave_sts_phy_16_23_sts_shift           8
#define rx_psave_sts_phy_16_23_sts_mask            0xff00


#define rx_psave_subset0_addr                      0b101000000
#define rx_psave_subset0_startbit                  0
#define rx_psave_subset0_width                     6
#define rx_psave_subset0_endbit                    5
#define rx_psave_subset0_shift                     10
#define rx_psave_subset0_mask                      0xfc00


#define rx_psave_subset1_addr                      0b101000000
#define rx_psave_subset1_startbit                  6
#define rx_psave_subset1_width                     6
#define rx_psave_subset1_endbit                    11
#define rx_psave_subset1_shift                     4
#define rx_psave_subset1_mask                      0x3f0


#define rx_psave_subset2_addr                      0b101000001
#define rx_psave_subset2_startbit                  0
#define rx_psave_subset2_width                     6
#define rx_psave_subset2_endbit                    5
#define rx_psave_subset2_shift                     10
#define rx_psave_subset2_mask                      0xfc00


#define rx_psave_subset3_addr                      0b101000001
#define rx_psave_subset3_startbit                  6
#define rx_psave_subset3_width                     6
#define rx_psave_subset3_endbit                    11
#define rx_psave_subset3_shift                     4
#define rx_psave_subset3_mask                      0x3f0


#define rx_psave_subset4_addr                      0b101000010
#define rx_psave_subset4_startbit                  0
#define rx_psave_subset4_width                     6
#define rx_psave_subset4_endbit                    5
#define rx_psave_subset4_shift                     10
#define rx_psave_subset4_mask                      0xfc00


#define rx_psave_subset5_addr                      0b101000010
#define rx_psave_subset5_startbit                  6
#define rx_psave_subset5_width                     6
#define rx_psave_subset5_endbit                    11
#define rx_psave_subset5_shift                     4
#define rx_psave_subset5_mask                      0x3f0


#define rx_psave_subset6_addr                      0b101000011
#define rx_psave_subset6_startbit                  0
#define rx_psave_subset6_width                     6
#define rx_psave_subset6_endbit                    5
#define rx_psave_subset6_shift                     10
#define rx_psave_subset6_mask                      0xfc00


#define rx_psave_sync_main_alt_addr                0b100111101
#define rx_psave_sync_main_alt_startbit            1
#define rx_psave_sync_main_alt_width               1
#define rx_psave_sync_main_alt_endbit              1
#define rx_psave_sync_main_alt_shift               14
#define rx_psave_sync_main_alt_mask                0x4000


#define rx_psave_time_addr                         0b101000100
#define rx_psave_time_startbit                     0
#define rx_psave_time_width                        6
#define rx_psave_time_endbit                       5
#define rx_psave_time_shift                        10
#define rx_psave_time_mask                         0xfc00


#define rx_psave_timer_double_mode_addr            0b101000100
#define rx_psave_timer_double_mode_startbit        13
#define rx_psave_timer_double_mode_width           1
#define rx_psave_timer_double_mode_endbit          13
#define rx_psave_timer_double_mode_shift           2
#define rx_psave_timer_double_mode_mask            0x4


#define rx_qpa_filter_depth_addr                   0b100010110
#define rx_qpa_filter_depth_startbit               0
#define rx_qpa_filter_depth_width                  5
#define rx_qpa_filter_depth_endbit                 4
#define rx_qpa_filter_depth_shift                  11
#define rx_qpa_filter_depth_mask                   0xf800


#define rx_qpa_servo_thresh4_addr                  0b100010110
#define rx_qpa_servo_thresh4_startbit              12
#define rx_qpa_servo_thresh4_width                 2
#define rx_qpa_servo_thresh4_endbit                13
#define rx_qpa_servo_thresh4_shift                 2
#define rx_qpa_servo_thresh4_mask                  0xc


#define rx_qpa_timeout_addr                        0b100010110
#define rx_qpa_timeout_startbit                    5
#define rx_qpa_timeout_width                       4
#define rx_qpa_timeout_endbit                      8
#define rx_qpa_timeout_shift                       7
#define rx_qpa_timeout_mask                        0x780


#define rx_qpa_vote_diff_addr                      0b101101101
#define rx_qpa_vote_diff_startbit                  0
#define rx_qpa_vote_diff_width                     11
#define rx_qpa_vote_diff_endbit                    10
#define rx_qpa_vote_diff_shift                     5
#define rx_qpa_vote_diff_mask                      0xffe0


#define rx_qpa_vote_ratio_cfg_addr                 0b100010110
#define rx_qpa_vote_ratio_cfg_startbit             9
#define rx_qpa_vote_ratio_cfg_width                3
#define rx_qpa_vote_ratio_cfg_endbit               11
#define rx_qpa_vote_ratio_cfg_shift                4
#define rx_qpa_vote_ratio_cfg_mask                 0x70


#define rx_qpa_vote_win_both_addr                  0b100010110
#define rx_qpa_vote_win_both_startbit              14
#define rx_qpa_vote_win_both_width                 1
#define rx_qpa_vote_win_both_endbit                14
#define rx_qpa_vote_win_both_shift                 1
#define rx_qpa_vote_win_both_mask                  0x2


#define rx_quad_phase_check_en_addr                0b101000110
#define rx_quad_phase_check_en_startbit            9
#define rx_quad_phase_check_en_width               1
#define rx_quad_phase_check_en_endbit              9
#define rx_quad_phase_check_en_shift               6
#define rx_quad_phase_check_en_mask                0x40


#define rx_recal_abort_dl_mask_addr                0b001111010
#define rx_recal_abort_dl_mask_startbit            3
#define rx_recal_abort_dl_mask_width               1
#define rx_recal_abort_dl_mask_endbit              3
#define rx_recal_abort_dl_mask_shift               12
#define rx_recal_abort_dl_mask_mask                0x1000


#define rx_recal_done_dl_mask_addr                 0b001111010
#define rx_recal_done_dl_mask_startbit             1
#define rx_recal_done_dl_mask_width                1
#define rx_recal_done_dl_mask_endbit               1
#define rx_recal_done_dl_mask_shift                14
#define rx_recal_done_dl_mask_mask                 0x4000


#define rx_recal_req_dl_mask_addr                  0b001111010
#define rx_recal_req_dl_mask_startbit              0
#define rx_recal_req_dl_mask_width                 1
#define rx_recal_req_dl_mask_endbit                0
#define rx_recal_req_dl_mask_shift                 15
#define rx_recal_req_dl_mask_mask                  0x8000


#define rx_reset_servo_status_addr                 0b100110001
#define rx_reset_servo_status_startbit             5
#define rx_reset_servo_status_width                1
#define rx_reset_servo_status_endbit               5
#define rx_reset_servo_status_shift                10
#define rx_reset_servo_status_mask                 0x400


#define rx_rlm_clk_sel_a_addr                      0b001101100
#define rx_rlm_clk_sel_a_startbit                  12
#define rx_rlm_clk_sel_a_width                     1
#define rx_rlm_clk_sel_a_endbit                    12
#define rx_rlm_clk_sel_a_shift                     3
#define rx_rlm_clk_sel_a_mask                      0x8


#define rx_run_lane_dl_mask_addr                   0b001111010
#define rx_run_lane_dl_mask_startbit               2
#define rx_run_lane_dl_mask_width                  1
#define rx_run_lane_dl_mask_endbit                 2
#define rx_run_lane_dl_mask_shift                  13
#define rx_run_lane_dl_mask_mask                   0x2000


#define rx_scan_n_0_15_addr                        0b101011011
#define rx_scan_n_0_15_startbit                    0
#define rx_scan_n_0_15_width                       16
#define rx_scan_n_0_15_endbit                      15
#define rx_scan_n_0_15_shift                       0
#define rx_scan_n_0_15_mask                        0xffff


#define rx_scan_n_16_23_addr                       0b101011010
#define rx_scan_n_16_23_startbit                   8
#define rx_scan_n_16_23_width                      8
#define rx_scan_n_16_23_endbit                     15
#define rx_scan_n_16_23_shift                      0
#define rx_scan_n_16_23_mask                       0xff


#define rx_scan_p_0_15_addr                        0b101011001
#define rx_scan_p_0_15_startbit                    0
#define rx_scan_p_0_15_width                       16
#define rx_scan_p_0_15_endbit                      15
#define rx_scan_p_0_15_shift                       0
#define rx_scan_p_0_15_mask                        0xffff


#define rx_scan_p_16_23_addr                       0b101011010
#define rx_scan_p_16_23_startbit                   0
#define rx_scan_p_16_23_width                      8
#define rx_scan_p_16_23_endbit                     7
#define rx_scan_p_16_23_shift                      8
#define rx_scan_p_16_23_mask                       0xff00


#define rx_scope_mode_enable_addr                  0b100000010
#define rx_scope_mode_enable_startbit              0
#define rx_scope_mode_enable_width                 1
#define rx_scope_mode_enable_endbit                0
#define rx_scope_mode_enable_shift                 15
#define rx_scope_mode_enable_mask                  0x8000


#define rx_scope_mode_pipe_skip_count_addr         0b100000010
#define rx_scope_mode_pipe_skip_count_startbit     1
#define rx_scope_mode_pipe_skip_count_width        4
#define rx_scope_mode_pipe_skip_count_endbit       4
#define rx_scope_mode_pipe_skip_count_shift        11
#define rx_scope_mode_pipe_skip_count_mask         0x7800


#define rx_scope_mode_sample_mask_addr             0b100000010
#define rx_scope_mode_sample_mask_startbit         5
#define rx_scope_mode_sample_mask_width            7
#define rx_scope_mode_sample_mask_endbit           11
#define rx_scope_mode_sample_mask_shift            4
#define rx_scope_mode_sample_mask_mask             0x7f0


#define rx_servo_disable_result_addr               0b100100001
#define rx_servo_disable_result_startbit           2
#define rx_servo_disable_result_width              1
#define rx_servo_disable_result_endbit             2
#define rx_servo_disable_result_shift              13
#define rx_servo_disable_result_mask               0x2000


#define rx_servo_op_queue0_addr                    0b100110010
#define rx_servo_op_queue0_startbit                0
#define rx_servo_op_queue0_width                   16
#define rx_servo_op_queue0_endbit                  15
#define rx_servo_op_queue0_shift                   0
#define rx_servo_op_queue0_mask                    0xffff


#define rx_servo_op_queue1_addr                    0b100110011
#define rx_servo_op_queue1_startbit                0
#define rx_servo_op_queue1_width                   16
#define rx_servo_op_queue1_endbit                  15
#define rx_servo_op_queue1_shift                   0
#define rx_servo_op_queue1_mask                    0xffff


#define rx_servo_op_queue_empty_addr               0b101011101
#define rx_servo_op_queue_empty_startbit           0
#define rx_servo_op_queue_empty_width              1
#define rx_servo_op_queue_empty_endbit             0
#define rx_servo_op_queue_empty_shift              15
#define rx_servo_op_queue_empty_mask               0x8000


#define rx_servo_op_queue_empty_space_addr         0b101011101
#define rx_servo_op_queue_empty_space_startbit     4
#define rx_servo_op_queue_empty_space_width        4
#define rx_servo_op_queue_empty_space_endbit       7
#define rx_servo_op_queue_empty_space_shift        8
#define rx_servo_op_queue_empty_space_mask         0xf00


#define rx_servo_op_queue_full_addr                0b101011101
#define rx_servo_op_queue_full_startbit            1
#define rx_servo_op_queue_full_width               1
#define rx_servo_op_queue_full_endbit              1
#define rx_servo_op_queue_full_shift               14
#define rx_servo_op_queue_full_mask                0x4000


#define rx_servo_queue_status_full_reg_alias_addr   0b101011101
#define rx_servo_queue_status_full_reg_alias_startbit   0
#define rx_servo_queue_status_full_reg_alias_width   16
#define rx_servo_queue_status_full_reg_alias_endbit   15
#define rx_servo_queue_status_full_reg_alias_shift   0
#define rx_servo_queue_status_full_reg_alias_mask   0xffff


#define rx_servo_result_queue_addr                 0b101011100
#define rx_servo_result_queue_startbit             0
#define rx_servo_result_queue_width                16
#define rx_servo_result_queue_endbit               15
#define rx_servo_result_queue_shift                0
#define rx_servo_result_queue_mask                 0xffff


#define rx_servo_result_queue_empty_addr           0b101011101
#define rx_servo_result_queue_empty_startbit       8
#define rx_servo_result_queue_empty_width          1
#define rx_servo_result_queue_empty_endbit         8
#define rx_servo_result_queue_empty_shift          7
#define rx_servo_result_queue_empty_mask           0x80


#define rx_servo_result_queue_full_addr            0b101011101
#define rx_servo_result_queue_full_startbit        9
#define rx_servo_result_queue_full_width           1
#define rx_servo_result_queue_full_endbit          9
#define rx_servo_result_queue_full_shift           6
#define rx_servo_result_queue_full_mask            0x40


#define rx_servo_result_queue_full_space_addr      0b101011101
#define rx_servo_result_queue_full_space_startbit   12
#define rx_servo_result_queue_full_space_width     4
#define rx_servo_result_queue_full_space_endbit    15
#define rx_servo_result_queue_full_space_shift     0
#define rx_servo_result_queue_full_space_mask      0xf


#define rx_servo_reverse_latch_dac_addr            0b100100001
#define rx_servo_reverse_latch_dac_startbit        11
#define rx_servo_reverse_latch_dac_width           1
#define rx_servo_reverse_latch_dac_endbit          11
#define rx_servo_reverse_latch_dac_shift           4
#define rx_servo_reverse_latch_dac_mask            0x10


#define rx_servo_status0_addr                      0b101010111
#define rx_servo_status0_startbit                  0
#define rx_servo_status0_width                     16
#define rx_servo_status0_endbit                    15
#define rx_servo_status0_shift                     0
#define rx_servo_status0_mask                      0xffff


#define rx_servo_status1_addr                      0b101011000
#define rx_servo_status1_startbit                  0
#define rx_servo_status1_width                     16
#define rx_servo_status1_endbit                    15
#define rx_servo_status1_shift                     0
#define rx_servo_status1_mask                      0xffff


#define rx_servo_status_error_en_addr              0b100010101
#define rx_servo_status_error_en_startbit          0
#define rx_servo_status_error_en_width             4
#define rx_servo_status_error_en_endbit            3
#define rx_servo_status_error_en_shift             12
#define rx_servo_status_error_en_mask              0xf000


#define rx_servo_status_lane_addr                  0b101011000
#define rx_servo_status_lane_startbit              10
#define rx_servo_status_lane_width                 5
#define rx_servo_status_lane_endbit                14
#define rx_servo_status_lane_shift                 1
#define rx_servo_status_lane_mask                  0x3e


#define rx_servo_status_result_at_max_addr         0b101011000
#define rx_servo_status_result_at_max_startbit     6
#define rx_servo_status_result_at_max_width        1
#define rx_servo_status_result_at_max_endbit       6
#define rx_servo_status_result_at_max_shift        9
#define rx_servo_status_result_at_max_mask         0x200


#define rx_servo_status_result_at_max_en_addr      0b100010101
#define rx_servo_status_result_at_max_en_startbit   0
#define rx_servo_status_result_at_max_en_width     1
#define rx_servo_status_result_at_max_en_endbit    0
#define rx_servo_status_result_at_max_en_shift     15
#define rx_servo_status_result_at_max_en_mask      0x8000


#define rx_servo_status_result_at_min_addr         0b101011000
#define rx_servo_status_result_at_min_startbit     7
#define rx_servo_status_result_at_min_width        1
#define rx_servo_status_result_at_min_endbit       7
#define rx_servo_status_result_at_min_shift        8
#define rx_servo_status_result_at_min_mask         0x100


#define rx_servo_status_result_at_min_en_addr      0b100010101
#define rx_servo_status_result_at_min_en_startbit   1
#define rx_servo_status_result_at_min_en_width     1
#define rx_servo_status_result_at_min_en_endbit    1
#define rx_servo_status_result_at_min_en_shift     14
#define rx_servo_status_result_at_min_en_mask      0x4000


#define rx_servo_status_servo_format_addr          0b101011000
#define rx_servo_status_servo_format_startbit      15
#define rx_servo_status_servo_format_width         1
#define rx_servo_status_servo_format_endbit        15
#define rx_servo_status_servo_format_shift         0
#define rx_servo_status_servo_format_mask          0x1


#define rx_servo_status_servo_op_invalid_addr      0b101011000
#define rx_servo_status_servo_op_invalid_startbit   9
#define rx_servo_status_servo_op_invalid_width     1
#define rx_servo_status_servo_op_invalid_endbit    9
#define rx_servo_status_servo_op_invalid_shift     6
#define rx_servo_status_servo_op_invalid_mask      0x40


#define rx_servo_status_servo_op_invalid_en_addr   0b100010101
#define rx_servo_status_servo_op_invalid_en_startbit   3
#define rx_servo_status_servo_op_invalid_en_width   1
#define rx_servo_status_servo_op_invalid_en_endbit   3
#define rx_servo_status_servo_op_invalid_en_shift   12
#define rx_servo_status_servo_op_invalid_en_mask   0x1000


#define rx_servo_status_timeout_addr               0b101011000
#define rx_servo_status_timeout_startbit           8
#define rx_servo_status_timeout_width              1
#define rx_servo_status_timeout_endbit             8
#define rx_servo_status_timeout_shift              7
#define rx_servo_status_timeout_mask               0x80


#define rx_servo_status_timeout_en_addr            0b100010101
#define rx_servo_status_timeout_en_startbit        2
#define rx_servo_status_timeout_en_width           1
#define rx_servo_status_timeout_en_endbit          2
#define rx_servo_status_timeout_en_shift           13
#define rx_servo_status_timeout_en_mask            0x2000


#define rx_servo_status_valid_addr                 0b101011000
#define rx_servo_status_valid_startbit             5
#define rx_servo_status_valid_width                1
#define rx_servo_status_valid_endbit               5
#define rx_servo_status_valid_shift                10
#define rx_servo_status_valid_mask                 0x400


#define rx_set_cal_lane_sel_addr                   0b001110000
#define rx_set_cal_lane_sel_startbit               0
#define rx_set_cal_lane_sel_width                  1
#define rx_set_cal_lane_sel_endbit                 0
#define rx_set_cal_lane_sel_shift                  15
#define rx_set_cal_lane_sel_mask                   0x8000


#define rx_sigdet_pd_addr                          0b000001010
#define rx_sigdet_pd_startbit                      3
#define rx_sigdet_pd_width                         1
#define rx_sigdet_pd_endbit                        3
#define rx_sigdet_pd_shift                         12
#define rx_sigdet_pd_mask                          0x1000


#define rx_signal_detect_out_addr                  0b001110010
#define rx_signal_detect_out_startbit              12
#define rx_signal_detect_out_width                 1
#define rx_signal_detect_out_endbit                12
#define rx_signal_detect_out_shift                 3
#define rx_signal_detect_out_mask                  0x8


#define rx_syncclk_muxsel_dc_addr                  0b101010010
#define rx_syncclk_muxsel_dc_startbit              2
#define rx_syncclk_muxsel_dc_width                 1
#define rx_syncclk_muxsel_dc_endbit                2
#define rx_syncclk_muxsel_dc_shift                 13
#define rx_syncclk_muxsel_dc_mask                  0x2000


#define rx_term_pd_addr                            0b000001011
#define rx_term_pd_startbit                        0
#define rx_term_pd_width                           1
#define rx_term_pd_endbit                          0
#define rx_term_pd_shift                           15
#define rx_term_pd_mask                            0x8000


#define rx_tiny_pr_gray_encode_dis_addr            0b000001111
#define rx_tiny_pr_gray_encode_dis_startbit        3
#define rx_tiny_pr_gray_encode_dis_width           1
#define rx_tiny_pr_gray_encode_dis_endbit          3
#define rx_tiny_pr_gray_encode_dis_shift           12
#define rx_tiny_pr_gray_encode_dis_mask            0x1000


#define rx_vdac_config_dc_addr                     0b000001000
#define rx_vdac_config_dc_startbit                 8
#define rx_vdac_config_dc_width                    2
#define rx_vdac_config_dc_endbit                   9
#define rx_vdac_config_dc_shift                    6
#define rx_vdac_config_dc_mask                     0xc0


#define rx_vtal_early_result_addr                  0b101101110
#define rx_vtal_early_result_startbit              0
#define rx_vtal_early_result_width                 16
#define rx_vtal_early_result_endbit                15
#define rx_vtal_early_result_shift                 0
#define rx_vtal_early_result_mask                  0xffff


#define rx_vtal_late_result_addr                   0b101101111
#define rx_vtal_late_result_startbit               0
#define rx_vtal_late_result_width                  16
#define rx_vtal_late_result_endbit                 15
#define rx_vtal_late_result_shift                  0
#define rx_vtal_late_result_mask                   0xffff


#define scom_mode_pb_reserved1_addr                0b000100110
#define scom_mode_pb_reserved1_startbit            1
#define scom_mode_pb_reserved1_width               1
#define scom_mode_pb_reserved1_endbit              1
#define scom_mode_pb_reserved1_shift               62
#define scom_mode_pb_reserved1_mask                0x4000000000000000


#define scom_mode_pb_spares1_addr                  0b000100110
#define scom_mode_pb_spares1_startbit              10
#define scom_mode_pb_spares1_width                 22
#define scom_mode_pb_spares1_endbit                31
#define scom_mode_pb_spares1_shift                 32
#define scom_mode_pb_spares1_mask                  0x3fffff00000000


#define scom_ppe_arb_ecc_inject_err_addr           0b000100000
#define scom_ppe_arb_ecc_inject_err_startbit       2
#define scom_ppe_arb_ecc_inject_err_width          1
#define scom_ppe_arb_ecc_inject_err_endbit         2
#define scom_ppe_arb_ecc_inject_err_shift          61
#define scom_ppe_arb_ecc_inject_err_mask           0x2000000000000000


#define scom_ppe_cntl_full_reg_addr                0b000100000
#define scom_ppe_cntl_full_reg_startbit            0
#define scom_ppe_cntl_full_reg_width               24
#define scom_ppe_cntl_full_reg_endbit              23
#define scom_ppe_cntl_full_reg_shift               40
#define scom_ppe_cntl_full_reg_mask                0xffffff0000000000


#define scom_ppe_fir_addr                          0b000101000
#define scom_ppe_fir_startbit                      0
#define scom_ppe_fir_width                         8
#define scom_ppe_fir_endbit                        7
#define scom_ppe_fir_shift                         56
#define scom_ppe_fir_mask                          0xff00000000000000


#define scom_ppe_fir_clr_addr                      0b000101010
#define scom_ppe_fir_clr_startbit                  0
#define scom_ppe_fir_clr_width                     8
#define scom_ppe_fir_clr_endbit                    7
#define scom_ppe_fir_clr_shift                     56
#define scom_ppe_fir_clr_mask                      0xff00000000000000


#define scom_ppe_fir_mask_addr                     0b000101011
#define scom_ppe_fir_mask_startbit                 0
#define scom_ppe_fir_mask_width                    8
#define scom_ppe_fir_mask_endbit                   7
#define scom_ppe_fir_mask_shift                    56
#define scom_ppe_fir_mask_mask                     0xff00000000000000


#define scom_ppe_fir_set_addr                      0b000101001
#define scom_ppe_fir_set_startbit                  0
#define scom_ppe_fir_set_width                     8
#define scom_ppe_fir_set_endbit                    7
#define scom_ppe_fir_set_shift                     56
#define scom_ppe_fir_set_mask                      0xff00000000000000


#define scom_ppe_flags_addr                        0b000100011
#define scom_ppe_flags_startbit                    0
#define scom_ppe_flags_width                       16
#define scom_ppe_flags_endbit                      15
#define scom_ppe_flags_shift                       48
#define scom_ppe_flags_mask                        0xffff000000000000


#define scom_ppe_flags_clr_addr                    0b000100101
#define scom_ppe_flags_clr_startbit                0
#define scom_ppe_flags_clr_width                   16
#define scom_ppe_flags_clr_endbit                  15
#define scom_ppe_flags_clr_shift                   48
#define scom_ppe_flags_clr_mask                    0xffff000000000000


#define scom_ppe_flags_set_addr                    0b000100100
#define scom_ppe_flags_set_startbit                0
#define scom_ppe_flags_set_width                   16
#define scom_ppe_flags_set_endbit                  15
#define scom_ppe_flags_set_shift                   48
#define scom_ppe_flags_set_mask                    0xffff000000000000


#define scom_ppe_func_full_reg_addr                0b000100111
#define scom_ppe_func_full_reg_startbit            0
#define scom_ppe_func_full_reg_width               16
#define scom_ppe_func_full_reg_endbit              15
#define scom_ppe_func_full_reg_shift               48
#define scom_ppe_func_full_reg_mask                0xffff000000000000


#define scom_ppe_iar_addr                          0b000010101
#define scom_ppe_iar_startbit                      32
#define scom_ppe_iar_width                         32
#define scom_ppe_iar_endbit                        63
#define scom_ppe_iar_shift                         0
#define scom_ppe_iar_mask                          0xffffffff


#define scom_ppe_interleaving_addr                 0b000100000
#define scom_ppe_interleaving_startbit             3
#define scom_ppe_interleaving_width                2
#define scom_ppe_interleaving_endbit               4
#define scom_ppe_interleaving_shift                59
#define scom_ppe_interleaving_mask                 0x1800000000000000


#define scom_ppe_ioreset_addr                      0b000100000
#define scom_ppe_ioreset_startbit                  0
#define scom_ppe_ioreset_width                     1
#define scom_ppe_ioreset_endbit                    0
#define scom_ppe_ioreset_shift                     63
#define scom_ppe_ioreset_mask                      0x8000000000000000


#define scom_ppe_ir_edr_0_63_addr                  0b000010100
#define scom_ppe_ir_edr_0_63_startbit              0
#define scom_ppe_ir_edr_0_63_width                 64
#define scom_ppe_ir_edr_0_63_endbit                63
#define scom_ppe_ir_edr_0_63_shift                 0
#define scom_ppe_ir_edr_0_63_mask                  0xffffffffffffffff


#define scom_ppe_ir_sprg0_0_63_addr                0b000010010
#define scom_ppe_ir_sprg0_0_63_startbit            0
#define scom_ppe_ir_sprg0_0_63_width               64
#define scom_ppe_ir_sprg0_0_63_endbit              63
#define scom_ppe_ir_sprg0_0_63_shift               0
#define scom_ppe_ir_sprg0_0_63_mask                0xffffffffffffffff


#define scom_ppe_lr_addr                           0b000011111
#define scom_ppe_lr_startbit                       32
#define scom_ppe_lr_width                          32
#define scom_ppe_lr_endbit                         63
#define scom_ppe_lr_shift                          0
#define scom_ppe_lr_mask                           0xffffffff


#define scom_ppe_mem_arb_addr_offset_addr          0b000001101
#define scom_ppe_mem_arb_addr_offset_startbit      16
#define scom_ppe_mem_arb_addr_offset_width         16
#define scom_ppe_mem_arb_addr_offset_endbit        31
#define scom_ppe_mem_arb_addr_offset_shift         32
#define scom_ppe_mem_arb_addr_offset_mask          0xffff00000000


#define scom_ppe_mem_arb_auto_inc_en_addr          0b000001010
#define scom_ppe_mem_arb_auto_inc_en_startbit      0
#define scom_ppe_mem_arb_auto_inc_en_width         1
#define scom_ppe_mem_arb_auto_inc_en_endbit        0
#define scom_ppe_mem_arb_auto_inc_en_shift         63
#define scom_ppe_mem_arb_auto_inc_en_mask          0x8000000000000000


#define scom_ppe_mem_arb_csar_0_63_addr            0b000001101
#define scom_ppe_mem_arb_csar_0_63_startbit        0
#define scom_ppe_mem_arb_csar_0_63_width           64
#define scom_ppe_mem_arb_csar_0_63_endbit          63
#define scom_ppe_mem_arb_csar_0_63_shift           0
#define scom_ppe_mem_arb_csar_0_63_mask            0xffffffffffffffff


#define scom_ppe_mem_arb_csdr_0_63_addr            0b000001110
#define scom_ppe_mem_arb_csdr_0_63_startbit        0
#define scom_ppe_mem_arb_csdr_0_63_width           64
#define scom_ppe_mem_arb_csdr_0_63_endbit          63
#define scom_ppe_mem_arb_csdr_0_63_shift           0
#define scom_ppe_mem_arb_csdr_0_63_mask            0xffffffffffffffff


#define scom_ppe_mem_arb_data_addr                 0b000001110
#define scom_ppe_mem_arb_data_startbit             0
#define scom_ppe_mem_arb_data_width                64
#define scom_ppe_mem_arb_data_endbit               63
#define scom_ppe_mem_arb_data_shift                0
#define scom_ppe_mem_arb_data_mask                 0xffffffffffffffff


#define scom_ppe_mem_arb_ecc_correct_dis_addr      0b000001010
#define scom_ppe_mem_arb_ecc_correct_dis_startbit   2
#define scom_ppe_mem_arb_ecc_correct_dis_width     1
#define scom_ppe_mem_arb_ecc_correct_dis_endbit    2
#define scom_ppe_mem_arb_ecc_correct_dis_shift     61
#define scom_ppe_mem_arb_ecc_correct_dis_mask      0x2000000000000000


#define scom_ppe_mem_arb_ecc_detect_dis_addr       0b000001010
#define scom_ppe_mem_arb_ecc_detect_dis_startbit   3
#define scom_ppe_mem_arb_ecc_detect_dis_width      1
#define scom_ppe_mem_arb_ecc_detect_dis_endbit     3
#define scom_ppe_mem_arb_ecc_detect_dis_shift      60
#define scom_ppe_mem_arb_ecc_detect_dis_mask       0x1000000000000000


#define scom_ppe_mem_arb_ecc_inject_err_addr       0b000001010
#define scom_ppe_mem_arb_ecc_inject_err_startbit   5
#define scom_ppe_mem_arb_ecc_inject_err_width      1
#define scom_ppe_mem_arb_ecc_inject_err_endbit     5
#define scom_ppe_mem_arb_ecc_inject_err_shift      58
#define scom_ppe_mem_arb_ecc_inject_err_mask       0x400000000000000


#define scom_ppe_mem_arb_ecc_inject_type_addr      0b000001010
#define scom_ppe_mem_arb_ecc_inject_type_startbit   4
#define scom_ppe_mem_arb_ecc_inject_type_width     1
#define scom_ppe_mem_arb_ecc_inject_type_endbit    4
#define scom_ppe_mem_arb_ecc_inject_type_shift     59
#define scom_ppe_mem_arb_ecc_inject_type_mask      0x800000000000000


#define scom_ppe_mem_arb_scr_0_63_addr             0b000001010
#define scom_ppe_mem_arb_scr_0_63_startbit         0
#define scom_ppe_mem_arb_scr_0_63_width            64
#define scom_ppe_mem_arb_scr_0_63_endbit           63
#define scom_ppe_mem_arb_scr_0_63_shift            0
#define scom_ppe_mem_arb_scr_0_63_mask             0xffffffffffffffff


#define scom_ppe_mem_arb_scrub_en_addr             0b000001010
#define scom_ppe_mem_arb_scrub_en_startbit         1
#define scom_ppe_mem_arb_scrub_en_width            1
#define scom_ppe_mem_arb_scrub_en_endbit           1
#define scom_ppe_mem_arb_scrub_en_shift            62
#define scom_ppe_mem_arb_scrub_en_mask             0x4000000000000000


#define scom_ppe_mem_arb_scrub_index_addr          0b000001010
#define scom_ppe_mem_arb_scrub_index_startbit      47
#define scom_ppe_mem_arb_scrub_index_width         13
#define scom_ppe_mem_arb_scrub_index_endbit        59
#define scom_ppe_mem_arb_scrub_index_shift         4
#define scom_ppe_mem_arb_scrub_index_mask          0x1fff0


#define scom_ppe_null_msr_lp_addr                  0b000010101
#define scom_ppe_null_msr_lp_startbit              20
#define scom_ppe_null_msr_lp_width                 1
#define scom_ppe_null_msr_lp_endbit                20
#define scom_ppe_null_msr_lp_shift                 43
#define scom_ppe_null_msr_lp_mask                  0x80000000000


#define scom_ppe_null_msr_sibrc_addr               0b000010101
#define scom_ppe_null_msr_sibrc_startbit           9
#define scom_ppe_null_msr_sibrc_width              3
#define scom_ppe_null_msr_sibrc_endbit             11
#define scom_ppe_null_msr_sibrc_shift              52
#define scom_ppe_null_msr_sibrc_mask               0x70000000000000


#define scom_ppe_null_msr_we_addr                  0b000010101
#define scom_ppe_null_msr_we_startbit              14
#define scom_ppe_null_msr_we_width                 1
#define scom_ppe_null_msr_we_endbit                14
#define scom_ppe_null_msr_we_shift                 49
#define scom_ppe_null_msr_we_mask                  0x2000000000000


#define scom_ppe_pdwn_addr                         0b000100000
#define scom_ppe_pdwn_startbit                     1
#define scom_ppe_pdwn_width                        1
#define scom_ppe_pdwn_endbit                       1
#define scom_ppe_pdwn_shift                        62
#define scom_ppe_pdwn_mask                         0x4000000000000000


#define scom_ppe_spares_addr                       0b000100000
#define scom_ppe_spares_startbit                   15
#define scom_ppe_spares_width                      9
#define scom_ppe_spares_endbit                     23
#define scom_ppe_spares_shift                      40
#define scom_ppe_spares_mask                       0x1ff0000000000


#define scom_ppe_srr0_addr                         0b000011111
#define scom_ppe_srr0_startbit                     0
#define scom_ppe_srr0_width                        30
#define scom_ppe_srr0_endbit                       29
#define scom_ppe_srr0_shift                        34
#define scom_ppe_srr0_mask                         0xfffffffc00000000


#define scom_ppe_srr0_lr_0_63_addr                 0b000011111
#define scom_ppe_srr0_lr_0_63_startbit             0
#define scom_ppe_srr0_lr_0_63_width                64
#define scom_ppe_srr0_lr_0_63_endbit               63
#define scom_ppe_srr0_lr_0_63_shift                0
#define scom_ppe_srr0_lr_0_63_mask                 0xffffffffffffffff


#define scom_ppe_work1_addr                        0b000100001
#define scom_ppe_work1_startbit                    0
#define scom_ppe_work1_width                       32
#define scom_ppe_work1_endbit                      31
#define scom_ppe_work1_shift                       32
#define scom_ppe_work1_mask                        0xffffffff00000000


#define scom_ppe_work2_addr                        0b000100010
#define scom_ppe_work2_startbit                    0
#define scom_ppe_work2_width                       32
#define scom_ppe_work2_endbit                      31
#define scom_ppe_work2_shift                       32
#define scom_ppe_work2_mask                        0xffffffff00000000


#define scom_ppe_xcr_addr                          0b000010000
#define scom_ppe_xcr_startbit                      1
#define scom_ppe_xcr_width                         3
#define scom_ppe_xcr_endbit                        3
#define scom_ppe_xcr_shift                         60
#define scom_ppe_xcr_mask                          0x7000000000000000


#define scom_ppe_xcr_none_0_63_addr                0b000010000
#define scom_ppe_xcr_none_0_63_startbit            0
#define scom_ppe_xcr_none_0_63_width               64
#define scom_ppe_xcr_none_0_63_endbit              63
#define scom_ppe_xcr_none_0_63_shift               0
#define scom_ppe_xcr_none_0_63_mask                0xffffffffffffffff


#define scom_ppe_xcr_sprg0_0_63_addr               0b000010001
#define scom_ppe_xcr_sprg0_0_63_startbit           0
#define scom_ppe_xcr_sprg0_0_63_width              64
#define scom_ppe_xcr_sprg0_0_63_endbit             63
#define scom_ppe_xcr_sprg0_0_63_shift              0
#define scom_ppe_xcr_sprg0_0_63_mask               0xffffffffffffffff


#define scom_ppe_xsr_dacr_addr                     0b000010101
#define scom_ppe_xsr_dacr_startbit                 12
#define scom_ppe_xsr_dacr_width                    1
#define scom_ppe_xsr_dacr_endbit                   12
#define scom_ppe_xsr_dacr_shift                    51
#define scom_ppe_xsr_dacr_mask                     0x8000000000000


#define scom_ppe_xsr_dacw_addr                     0b000010101
#define scom_ppe_xsr_dacw_startbit                 13
#define scom_ppe_xsr_dacw_width                    1
#define scom_ppe_xsr_dacw_endbit                   13
#define scom_ppe_xsr_dacw_shift                    50
#define scom_ppe_xsr_dacw_mask                     0x4000000000000


#define scom_ppe_xsr_ep_addr                       0b000010101
#define scom_ppe_xsr_ep_startbit                   21
#define scom_ppe_xsr_ep_width                      1
#define scom_ppe_xsr_ep_endbit                     21
#define scom_ppe_xsr_ep_shift                      42
#define scom_ppe_xsr_ep_mask                       0x40000000000


#define scom_ppe_xsr_hc_addr                       0b000010101
#define scom_ppe_xsr_hc_startbit                   1
#define scom_ppe_xsr_hc_width                      3
#define scom_ppe_xsr_hc_endbit                     3
#define scom_ppe_xsr_hc_shift                      60
#define scom_ppe_xsr_hc_mask                       0x7000000000000000


#define scom_ppe_xsr_hcp_addr                      0b000010101
#define scom_ppe_xsr_hcp_startbit                  4
#define scom_ppe_xsr_hcp_width                     1
#define scom_ppe_xsr_hcp_endbit                    4
#define scom_ppe_xsr_hcp_shift                     59
#define scom_ppe_xsr_hcp_mask                      0x800000000000000


#define scom_ppe_xsr_hs_addr                       0b000010101
#define scom_ppe_xsr_hs_startbit                   0
#define scom_ppe_xsr_hs_width                      1
#define scom_ppe_xsr_hs_endbit                     0
#define scom_ppe_xsr_hs_shift                      63
#define scom_ppe_xsr_hs_mask                       0x8000000000000000


#define scom_ppe_xsr_iac_addr                      0b000010101
#define scom_ppe_xsr_iac_startbit                  8
#define scom_ppe_xsr_iac_width                     1
#define scom_ppe_xsr_iac_endbit                    8
#define scom_ppe_xsr_iac_shift                     55
#define scom_ppe_xsr_iac_mask                      0x80000000000000


#define scom_ppe_xsr_iar_0_63_addr                 0b000010101
#define scom_ppe_xsr_iar_0_63_startbit             0
#define scom_ppe_xsr_iar_0_63_width                64
#define scom_ppe_xsr_iar_0_63_endbit               63
#define scom_ppe_xsr_iar_0_63_shift                0
#define scom_ppe_xsr_iar_0_63_mask                 0xffffffffffffffff


#define scom_ppe_xsr_mcs_addr                      0b000010101
#define scom_ppe_xsr_mcs_startbit                  29
#define scom_ppe_xsr_mcs_width                     3
#define scom_ppe_xsr_mcs_endbit                    31
#define scom_ppe_xsr_mcs_shift                     32
#define scom_ppe_xsr_mcs_mask                      0x700000000


#define scom_ppe_xsr_mfe_addr                      0b000010101
#define scom_ppe_xsr_mfe_startbit                  28
#define scom_ppe_xsr_mfe_width                     1
#define scom_ppe_xsr_mfe_endbit                    28
#define scom_ppe_xsr_mfe_shift                     35
#define scom_ppe_xsr_mfe_mask                      0x800000000


#define scom_ppe_xsr_ptr_addr                      0b000010101
#define scom_ppe_xsr_ptr_startbit                  24
#define scom_ppe_xsr_ptr_width                     1
#define scom_ppe_xsr_ptr_endbit                    24
#define scom_ppe_xsr_ptr_shift                     39
#define scom_ppe_xsr_ptr_mask                      0x8000000000


#define scom_ppe_xsr_rip_addr                      0b000010101
#define scom_ppe_xsr_rip_startbit                  5
#define scom_ppe_xsr_rip_width                     1
#define scom_ppe_xsr_rip_endbit                    5
#define scom_ppe_xsr_rip_shift                     58
#define scom_ppe_xsr_rip_mask                      0x400000000000000


#define scom_ppe_xsr_sip_addr                      0b000010101
#define scom_ppe_xsr_sip_startbit                  6
#define scom_ppe_xsr_sip_width                     1
#define scom_ppe_xsr_sip_endbit                    6
#define scom_ppe_xsr_sip_shift                     57
#define scom_ppe_xsr_sip_mask                      0x200000000000000


#define scom_ppe_xsr_sms_addr                      0b000010101
#define scom_ppe_xsr_sms_startbit                  16
#define scom_ppe_xsr_sms_width                     4
#define scom_ppe_xsr_sms_endbit                    19
#define scom_ppe_xsr_sms_shift                     44
#define scom_ppe_xsr_sms_mask                      0xf00000000000


#define scom_ppe_xsr_sprg0_0_63_addr               0b000010011
#define scom_ppe_xsr_sprg0_0_63_startbit           0
#define scom_ppe_xsr_sprg0_0_63_width              64
#define scom_ppe_xsr_sprg0_0_63_endbit             63
#define scom_ppe_xsr_sprg0_0_63_shift              0
#define scom_ppe_xsr_sprg0_0_63_mask               0xffffffffffffffff


#define scom_ppe_xsr_st_addr                       0b000010101
#define scom_ppe_xsr_st_startbit                   25
#define scom_ppe_xsr_st_width                      1
#define scom_ppe_xsr_st_endbit                     25
#define scom_ppe_xsr_st_shift                      38
#define scom_ppe_xsr_st_mask                       0x4000000000


#define scom_ppe_xsr_trap_addr                     0b000010101
#define scom_ppe_xsr_trap_startbit                 7
#define scom_ppe_xsr_trap_width                    1
#define scom_ppe_xsr_trap_endbit                   7
#define scom_ppe_xsr_trap_shift                    56
#define scom_ppe_xsr_trap_mask                     0x100000000000000


#define scom_ppe_xsr_trh_addr                      0b000010101
#define scom_ppe_xsr_trh_startbit                  15
#define scom_ppe_xsr_trh_width                     1
#define scom_ppe_xsr_trh_endbit                    15
#define scom_ppe_xsr_trh_shift                     48
#define scom_ppe_xsr_trh_mask                      0x1000000000000


#define system_manu_sel_addr                       0b100100100
#define system_manu_sel_startbit                   4
#define system_manu_sel_width                      1
#define system_manu_sel_endbit                     4
#define system_manu_sel_shift                      11
#define system_manu_sel_mask                       0x800


#define tc_bist_code_go_addr                       0b100100100
#define tc_bist_code_go_startbit                   3
#define tc_bist_code_go_width                      1
#define tc_bist_code_go_endbit                     3
#define tc_bist_code_go_shift                      12
#define tc_bist_code_go_mask                       0x1000


#define tc_bist_opcg_go_ovrd_addr                  0b100100100
#define tc_bist_opcg_go_ovrd_startbit              2
#define tc_bist_opcg_go_ovrd_width                 1
#define tc_bist_opcg_go_ovrd_endbit                2
#define tc_bist_opcg_go_ovrd_shift                 13
#define tc_bist_opcg_go_ovrd_mask                  0x2000


#define tc_bist_shared_ovrd_addr                   0b100100100
#define tc_bist_shared_ovrd_startbit               1
#define tc_bist_shared_ovrd_width                  1
#define tc_bist_shared_ovrd_endbit                 1
#define tc_bist_shared_ovrd_shift                  14
#define tc_bist_shared_ovrd_mask                   0x4000


#define tc_opcg_iobist_go_addr                     0b101010010
#define tc_opcg_iobist_go_startbit                 3
#define tc_opcg_iobist_go_width                    1
#define tc_opcg_iobist_go_endbit                   3
#define tc_opcg_iobist_go_shift                    12
#define tc_opcg_iobist_go_mask                     0x1000


#define tc_shared_pin_dc_addr                      0b101010010
#define tc_shared_pin_dc_startbit                  4
#define tc_shared_pin_dc_width                     1
#define tc_shared_pin_dc_endbit                    4
#define tc_shared_pin_dc_shift                     11
#define tc_shared_pin_dc_mask                      0x800


#define tx_16to1_addr                              0b110000001
#define tx_16to1_startbit                          2
#define tx_16to1_width                             1
#define tx_16to1_endbit                            2
#define tx_16to1_shift                             13
#define tx_16to1_mask                              0x2000


#define tx_atten_hs_en_addr                        0b010010111
#define tx_atten_hs_en_startbit                    0
#define tx_atten_hs_en_width                       16
#define tx_atten_hs_en_endbit                      15
#define tx_atten_hs_en_shift                       0
#define tx_atten_hs_en_mask                        0xffff


#define tx_atten_safe_en_addr                      0b010100010
#define tx_atten_safe_en_startbit                  0
#define tx_atten_safe_en_width                     16
#define tx_atten_safe_en_endbit                    15
#define tx_atten_safe_en_shift                     0
#define tx_atten_safe_en_mask                      0xffff


#define tx_bank_controls_addr                      0b010010011
#define tx_bank_controls_startbit                  0
#define tx_bank_controls_width                     6
#define tx_bank_controls_endbit                    5
#define tx_bank_controls_shift                     10
#define tx_bank_controls_mask                      0xfc00


#define tx_bank_controls_dcc_alias_addr            0b010010011
#define tx_bank_controls_dcc_alias_startbit        0
#define tx_bank_controls_dcc_alias_width           1
#define tx_bank_controls_dcc_alias_endbit          0
#define tx_bank_controls_dcc_alias_shift           15
#define tx_bank_controls_dcc_alias_mask            0x8000


#define tx_bist_dcc_en_addr                        0b110000001
#define tx_bist_dcc_en_startbit                    6
#define tx_bist_dcc_en_width                       1
#define tx_bist_dcc_en_endbit                      6
#define tx_bist_dcc_en_shift                       9
#define tx_bist_dcc_en_mask                        0x200


#define tx_bist_dcc_fail_addr                      0b110101101
#define tx_bist_dcc_fail_startbit                  0
#define tx_bist_dcc_fail_width                     1
#define tx_bist_dcc_fail_endbit                    0
#define tx_bist_dcc_fail_shift                     15
#define tx_bist_dcc_fail_mask                      0x8000


#define tx_bist_en_alias_addr                      0b110000001
#define tx_bist_en_alias_startbit                  6
#define tx_bist_en_alias_width                     3
#define tx_bist_en_alias_endbit                    8
#define tx_bist_en_alias_shift                     7
#define tx_bist_en_alias_mask                      0x380


#define tx_bist_fail_alias_addr                    0b110101101
#define tx_bist_fail_alias_startbit                0
#define tx_bist_fail_alias_width                   3
#define tx_bist_fail_alias_endbit                  2
#define tx_bist_fail_alias_shift                   13
#define tx_bist_fail_alias_mask                    0xe000


#define tx_bist_hs_cust_en_addr                    0b010010110
#define tx_bist_hs_cust_en_startbit                0
#define tx_bist_hs_cust_en_width                   1
#define tx_bist_hs_cust_en_endbit                  0
#define tx_bist_hs_cust_en_shift                   15
#define tx_bist_hs_cust_en_mask                    0x8000


#define tx_bist_hs_cust_sel_addr                   0b010010110
#define tx_bist_hs_cust_sel_startbit               1
#define tx_bist_hs_cust_sel_width                  3
#define tx_bist_hs_cust_sel_endbit                 3
#define tx_bist_hs_cust_sel_shift                  12
#define tx_bist_hs_cust_sel_mask                   0x7000


#define tx_bist_hs_en_addr                         0b110000001
#define tx_bist_hs_en_startbit                     8
#define tx_bist_hs_en_width                        1
#define tx_bist_hs_en_endbit                       8
#define tx_bist_hs_en_shift                        7
#define tx_bist_hs_en_mask                         0x80


#define tx_bist_hs_fail_addr                       0b110101101
#define tx_bist_hs_fail_startbit                   2
#define tx_bist_hs_fail_width                      1
#define tx_bist_hs_fail_endbit                     2
#define tx_bist_hs_fail_shift                      13
#define tx_bist_hs_fail_mask                       0x2000


#define tx_bist_ls_en_addr                         0b110000001
#define tx_bist_ls_en_startbit                     7
#define tx_bist_ls_en_width                        1
#define tx_bist_ls_en_endbit                       7
#define tx_bist_ls_en_shift                        8
#define tx_bist_ls_en_mask                         0x100


#define tx_bist_ls_fail_addr                       0b110101101
#define tx_bist_ls_fail_startbit                   1
#define tx_bist_ls_fail_width                      1
#define tx_bist_ls_fail_endbit                     1
#define tx_bist_ls_fail_shift                      14
#define tx_bist_ls_fail_mask                       0x4000


#define tx_bist_prbs_activity_det_addr             0b010100100
#define tx_bist_prbs_activity_det_startbit         1
#define tx_bist_prbs_activity_det_width            1
#define tx_bist_prbs_activity_det_endbit           1
#define tx_bist_prbs_activity_det_shift            14
#define tx_bist_prbs_activity_det_mask             0x4000


#define tx_bist_prbs_clear_addr                    0b010001000
#define tx_bist_prbs_clear_startbit                3
#define tx_bist_prbs_clear_width                   1
#define tx_bist_prbs_clear_endbit                  3
#define tx_bist_prbs_clear_shift                   12
#define tx_bist_prbs_clear_mask                    0x1000


#define tx_bist_prbs_enable_addr                   0b010001000
#define tx_bist_prbs_enable_startbit               2
#define tx_bist_prbs_enable_width                  1
#define tx_bist_prbs_enable_endbit                 2
#define tx_bist_prbs_enable_shift                  13
#define tx_bist_prbs_enable_mask                   0x2000


#define tx_bist_prbs_err_det_addr                  0b010100100
#define tx_bist_prbs_err_det_startbit              0
#define tx_bist_prbs_err_det_width                 1
#define tx_bist_prbs_err_det_endbit                0
#define tx_bist_prbs_err_det_shift                 15
#define tx_bist_prbs_err_det_mask                  0x8000


#define tx_bist_prbs_stat_alias_addr               0b010100100
#define tx_bist_prbs_stat_alias_startbit           0
#define tx_bist_prbs_stat_alias_width              2
#define tx_bist_prbs_stat_alias_endbit             1
#define tx_bist_prbs_stat_alias_shift              14
#define tx_bist_prbs_stat_alias_mask               0xc000


#define tx_boost_hs_en_addr                        0b010000101
#define tx_boost_hs_en_startbit                    4
#define tx_boost_hs_en_width                       1
#define tx_boost_hs_en_endbit                      4
#define tx_boost_hs_en_shift                       11
#define tx_boost_hs_en_mask                        0x800


#define tx_boost_safe_en_addr                      0b010000101
#define tx_boost_safe_en_startbit                  5
#define tx_boost_safe_en_width                     1
#define tx_boost_safe_en_endbit                    5
#define tx_boost_safe_en_shift                     10
#define tx_boost_safe_en_mask                      0x400


#define tx_clkdist_pdwn_addr                       0b110000001
#define tx_clkdist_pdwn_startbit                   0
#define tx_clkdist_pdwn_width                      1
#define tx_clkdist_pdwn_endbit                     0
#define tx_clkdist_pdwn_shift                      15
#define tx_clkdist_pdwn_mask                       0x8000


#define tx_clr_par_errs_addr                       0b110010010
#define tx_clr_par_errs_startbit                   14
#define tx_clr_par_errs_width                      1
#define tx_clr_par_errs_endbit                     14
#define tx_clr_par_errs_shift                      1
#define tx_clr_par_errs_mask                       0x2


#define tx_clr_par_errs_and_fir_reset_alias_addr   0b110010010
#define tx_clr_par_errs_and_fir_reset_alias_startbit   14
#define tx_clr_par_errs_and_fir_reset_alias_width   2
#define tx_clr_par_errs_and_fir_reset_alias_endbit   15
#define tx_clr_par_errs_and_fir_reset_alias_shift   0
#define tx_clr_par_errs_and_fir_reset_alias_mask   0x3


#define tx_clr_unload_clk_disable_addr             0b010000110
#define tx_clr_unload_clk_disable_startbit         13
#define tx_clr_unload_clk_disable_width            1
#define tx_clr_unload_clk_disable_endbit           13
#define tx_clr_unload_clk_disable_shift            2
#define tx_clr_unload_clk_disable_mask             0x4


#define tx_d2_ctrl_addr                            0b010000101
#define tx_d2_ctrl_startbit                        0
#define tx_d2_ctrl_width                           2
#define tx_d2_ctrl_endbit                          1
#define tx_d2_ctrl_shift                           14
#define tx_d2_ctrl_mask                            0xc000


#define tx_d2_div_ctrl_addr                        0b010000101
#define tx_d2_div_ctrl_startbit                    2
#define tx_d2_div_ctrl_width                       2
#define tx_d2_div_ctrl_endbit                      3
#define tx_d2_div_ctrl_shift                       12
#define tx_d2_div_ctrl_mask                        0x3000


#define tx_dcc_cmp_cnt_alias_addr                  0b010100101
#define tx_dcc_cmp_cnt_alias_startbit              0
#define tx_dcc_cmp_cnt_alias_width                 16
#define tx_dcc_cmp_cnt_alias_endbit                15
#define tx_dcc_cmp_cnt_alias_shift                 0
#define tx_dcc_cmp_cnt_alias_mask                  0xffff


#define tx_dcc_cmp_down_cnt_addr                   0b010100101
#define tx_dcc_cmp_down_cnt_startbit               8
#define tx_dcc_cmp_down_cnt_width                  8
#define tx_dcc_cmp_down_cnt_endbit                 15
#define tx_dcc_cmp_down_cnt_shift                  0
#define tx_dcc_cmp_down_cnt_mask                   0xff


#define tx_dcc_cmp_high_sel_addr                   0b010000101
#define tx_dcc_cmp_high_sel_startbit               7
#define tx_dcc_cmp_high_sel_width                  3
#define tx_dcc_cmp_high_sel_endbit                 9
#define tx_dcc_cmp_high_sel_shift                  6
#define tx_dcc_cmp_high_sel_mask                   0x1c0


#define tx_dcc_cmp_low_sel_addr                    0b010000101
#define tx_dcc_cmp_low_sel_startbit                10
#define tx_dcc_cmp_low_sel_width                   3
#define tx_dcc_cmp_low_sel_endbit                  12
#define tx_dcc_cmp_low_sel_shift                   3
#define tx_dcc_cmp_low_sel_mask                    0x38


#define tx_dcc_cmp_run_addr                        0b010010110
#define tx_dcc_cmp_run_startbit                    13
#define tx_dcc_cmp_run_width                       1
#define tx_dcc_cmp_run_endbit                      13
#define tx_dcc_cmp_run_shift                       2
#define tx_dcc_cmp_run_mask                        0x4


#define tx_dcc_cmp_samp_sel_addr                   0b010000101
#define tx_dcc_cmp_samp_sel_startbit               13
#define tx_dcc_cmp_samp_sel_width                  2
#define tx_dcc_cmp_samp_sel_endbit                 14
#define tx_dcc_cmp_samp_sel_shift                  1
#define tx_dcc_cmp_samp_sel_mask                   0x6


#define tx_dcc_cmp_up_cnt_addr                     0b010100101
#define tx_dcc_cmp_up_cnt_startbit                 0
#define tx_dcc_cmp_up_cnt_width                    8
#define tx_dcc_cmp_up_cnt_endbit                   7
#define tx_dcc_cmp_up_cnt_shift                    8
#define tx_dcc_cmp_up_cnt_mask                     0xff00


#define tx_dcc_i_tune_addr                         0b010010101
#define tx_dcc_i_tune_startbit                     0
#define tx_dcc_i_tune_width                        6
#define tx_dcc_i_tune_endbit                       5
#define tx_dcc_i_tune_shift                        10
#define tx_dcc_i_tune_mask                         0xfc00


#define tx_dcc_iq_tune_addr                        0b010010110
#define tx_dcc_iq_tune_startbit                    4
#define tx_dcc_iq_tune_width                       5
#define tx_dcc_iq_tune_endbit                      8
#define tx_dcc_iq_tune_shift                       7
#define tx_dcc_iq_tune_mask                        0xf80


#define tx_dcc_main_sel_addr                       0b010010101
#define tx_dcc_main_sel_startbit                   13
#define tx_dcc_main_sel_width                      1
#define tx_dcc_main_sel_endbit                     13
#define tx_dcc_main_sel_shift                      2
#define tx_dcc_main_sel_mask                       0x4


#define tx_dcc_pad_sel_addr                        0b010010101
#define tx_dcc_pad_sel_startbit                    14
#define tx_dcc_pad_sel_width                       1
#define tx_dcc_pad_sel_endbit                      14
#define tx_dcc_pad_sel_shift                       1
#define tx_dcc_pad_sel_mask                        0x2


#define tx_dcc_pat_addr                            0b010010110
#define tx_dcc_pat_startbit                        9
#define tx_dcc_pat_width                           4
#define tx_dcc_pat_endbit                          12
#define tx_dcc_pat_shift                           3
#define tx_dcc_pat_mask                            0x78


#define tx_dcc_phase_sel_addr                      0b010010101
#define tx_dcc_phase_sel_startbit                  12
#define tx_dcc_phase_sel_width                     1
#define tx_dcc_phase_sel_endbit                    12
#define tx_dcc_phase_sel_shift                     3
#define tx_dcc_phase_sel_mask                      0x8


#define tx_dcc_q_tune_addr                         0b010010101
#define tx_dcc_q_tune_startbit                     6
#define tx_dcc_q_tune_width                        6
#define tx_dcc_q_tune_endbit                       11
#define tx_dcc_q_tune_shift                        4
#define tx_dcc_q_tune_mask                         0x3f0


#define tx_dcc_sel_alias_addr                      0b010010101
#define tx_dcc_sel_alias_startbit                  13
#define tx_dcc_sel_alias_width                     2
#define tx_dcc_sel_alias_endbit                    14
#define tx_dcc_sel_alias_shift                     1
#define tx_dcc_sel_alias_mask                      0x6


#define tx_eol_mode_disable_addr                   0b010001000
#define tx_eol_mode_disable_startbit               6
#define tx_eol_mode_disable_width                  1
#define tx_eol_mode_disable_endbit                 6
#define tx_eol_mode_disable_shift                  9
#define tx_eol_mode_disable_mask                   0x200


#define tx_err_inj_A_enable_addr                   0b010000011
#define tx_err_inj_A_enable_startbit               6
#define tx_err_inj_A_enable_width                  1
#define tx_err_inj_A_enable_endbit                 6
#define tx_err_inj_A_enable_shift                  9
#define tx_err_inj_A_enable_mask                   0x200


#define tx_err_inj_B_enable_addr                   0b010000011
#define tx_err_inj_B_enable_startbit               7
#define tx_err_inj_B_enable_width                  1
#define tx_err_inj_B_enable_endbit                 7
#define tx_err_inj_B_enable_shift                  8
#define tx_err_inj_B_enable_mask                   0x100


#define tx_err_inj_a_ber_sel_addr                  0b110001001
#define tx_err_inj_a_ber_sel_startbit              7
#define tx_err_inj_a_ber_sel_width                 6
#define tx_err_inj_a_ber_sel_endbit                12
#define tx_err_inj_a_ber_sel_shift                 3
#define tx_err_inj_a_ber_sel_mask                  0x1f8


#define tx_err_inj_a_coarse_sel_addr               0b110001001
#define tx_err_inj_a_coarse_sel_startbit           3
#define tx_err_inj_a_coarse_sel_width              4
#define tx_err_inj_a_coarse_sel_endbit             6
#define tx_err_inj_a_coarse_sel_shift              9
#define tx_err_inj_a_coarse_sel_mask               0x1e00


#define tx_err_inj_a_fine_sel_addr                 0b110001001
#define tx_err_inj_a_fine_sel_startbit             0
#define tx_err_inj_a_fine_sel_width                3
#define tx_err_inj_a_fine_sel_endbit               2
#define tx_err_inj_a_fine_sel_shift                13
#define tx_err_inj_a_fine_sel_mask                 0xe000


#define tx_err_inj_b_ber_sel_addr                  0b110001010
#define tx_err_inj_b_ber_sel_startbit              7
#define tx_err_inj_b_ber_sel_width                 6
#define tx_err_inj_b_ber_sel_endbit                12
#define tx_err_inj_b_ber_sel_shift                 3
#define tx_err_inj_b_ber_sel_mask                  0x1f8


#define tx_err_inj_b_coarse_sel_addr               0b110001010
#define tx_err_inj_b_coarse_sel_startbit           3
#define tx_err_inj_b_coarse_sel_width              4
#define tx_err_inj_b_coarse_sel_endbit             6
#define tx_err_inj_b_coarse_sel_shift              9
#define tx_err_inj_b_coarse_sel_mask               0x1e00


#define tx_err_inj_b_fine_sel_addr                 0b110001010
#define tx_err_inj_b_fine_sel_startbit             0
#define tx_err_inj_b_fine_sel_width                3
#define tx_err_inj_b_fine_sel_endbit               2
#define tx_err_inj_b_fine_sel_shift                13
#define tx_err_inj_b_fine_sel_mask                 0xe000


#define tx_err_inj_clock_enable_addr               0b110001001
#define tx_err_inj_clock_enable_startbit           14
#define tx_err_inj_clock_enable_width              1
#define tx_err_inj_clock_enable_endbit             14
#define tx_err_inj_clock_enable_shift              1
#define tx_err_inj_clock_enable_mask               0x2


#define tx_err_inj_enable_addr                     0b110001001
#define tx_err_inj_enable_startbit                 13
#define tx_err_inj_enable_width                    1
#define tx_err_inj_enable_endbit                   13
#define tx_err_inj_enable_shift                    2
#define tx_err_inj_enable_mask                     0x4


#define tx_err_inject_addr                         0b010000110
#define tx_err_inject_startbit                     0
#define tx_err_inject_width                        6
#define tx_err_inject_endbit                       5
#define tx_err_inject_shift                        10
#define tx_err_inject_mask                         0xfc00


#define tx_ffe_pkg_en_addr                         0b010000011
#define tx_ffe_pkg_en_startbit                     4
#define tx_ffe_pkg_en_width                        1
#define tx_ffe_pkg_en_endbit                       4
#define tx_ffe_pkg_en_shift                        11
#define tx_ffe_pkg_en_mask                         0x800


#define tx_fifo_hold_addr                          0b010000100
#define tx_fifo_hold_startbit                      13
#define tx_fifo_hold_width                         1
#define tx_fifo_hold_endbit                        13
#define tx_fifo_hold_shift                         2
#define tx_fifo_hold_mask                          0x4


#define tx_fifo_init_addr                          0b010000110
#define tx_fifo_init_startbit                      11
#define tx_fifo_init_width                         1
#define tx_fifo_init_endbit                        11
#define tx_fifo_init_shift                         4
#define tx_fifo_init_mask                          0x10


#define tx_fifo_l2u_dly_addr                       0b010000100
#define tx_fifo_l2u_dly_startbit                   0
#define tx_fifo_l2u_dly_width                      3
#define tx_fifo_l2u_dly_endbit                     2
#define tx_fifo_l2u_dly_shift                      13
#define tx_fifo_l2u_dly_mask                       0xe000


#define tx_fir_reset_addr                          0b110010010
#define tx_fir_reset_startbit                      15
#define tx_fir_reset_width                         1
#define tx_fir_reset_endbit                        15
#define tx_fir_reset_shift                         0
#define tx_fir_reset_mask                          0x1


#define tx_force_hs_ffe_addr                       0b010100011
#define tx_force_hs_ffe_startbit                   0
#define tx_force_hs_ffe_width                      1
#define tx_force_hs_ffe_endbit                     0
#define tx_force_hs_ffe_shift                      15
#define tx_force_hs_ffe_mask                       0x8000


#define tx_iodom_ioreset_addr                      0b010000111
#define tx_iodom_ioreset_startbit                  1
#define tx_iodom_ioreset_width                     1
#define tx_iodom_ioreset_endbit                    1
#define tx_iodom_ioreset_shift                     14
#define tx_iodom_ioreset_mask                      0x4000


#define tx_ioreset_addr                            0b010000111
#define tx_ioreset_startbit                        0
#define tx_ioreset_width                           1
#define tx_ioreset_endbit                          0
#define tx_ioreset_shift                           15
#define tx_ioreset_mask                            0x8000


#define tx_iref_bypass_addr                        0b110000001
#define tx_iref_bypass_startbit                    14
#define tx_iref_bypass_width                       1
#define tx_iref_bypass_endbit                      14
#define tx_iref_bypass_shift                       1
#define tx_iref_bypass_mask                        0x2


#define tx_iref_clock_dac_addr                     0b110000001
#define tx_iref_clock_dac_startbit                 9
#define tx_iref_clock_dac_width                    3
#define tx_iref_clock_dac_endbit                   11
#define tx_iref_clock_dac_shift                    4
#define tx_iref_clock_dac_mask                     0x70


#define tx_iref_paritychk_clock_addr               0b110101101
#define tx_iref_paritychk_clock_startbit           3
#define tx_iref_paritychk_clock_width              1
#define tx_iref_paritychk_clock_endbit             3
#define tx_iref_paritychk_clock_shift              12
#define tx_iref_paritychk_clock_mask               0x1000


#define tx_iref_pdwn_b_addr                        0b110000001
#define tx_iref_pdwn_b_startbit                    15
#define tx_iref_pdwn_b_width                       1
#define tx_iref_pdwn_b_endbit                      15
#define tx_iref_pdwn_b_shift                       0
#define tx_iref_pdwn_b_mask                        0x1


#define tx_iref_vset_dac_addr                      0b110000001
#define tx_iref_vset_dac_startbit                  12
#define tx_iref_vset_dac_width                     2
#define tx_iref_vset_dac_endbit                    13
#define tx_iref_vset_dac_shift                     2
#define tx_iref_vset_dac_mask                      0xc


#define tx_lane_invert_addr                        0b010000011
#define tx_lane_invert_startbit                    0
#define tx_lane_invert_width                       1
#define tx_lane_invert_endbit                      0
#define tx_lane_invert_shift                       15
#define tx_lane_invert_mask                        0x8000


#define tx_lane_quiesce_addr                       0b010000011
#define tx_lane_quiesce_startbit                   1
#define tx_lane_quiesce_width                      2
#define tx_lane_quiesce_endbit                     2
#define tx_lane_quiesce_shift                      13
#define tx_lane_quiesce_mask                       0x6000


#define tx_main_pkg_en_addr                        0b010000011
#define tx_main_pkg_en_startbit                    3
#define tx_main_pkg_en_width                       1
#define tx_main_pkg_en_endbit                      3
#define tx_main_pkg_en_shift                       12
#define tx_main_pkg_en_mask                        0x1000


#define tx_mode1_pl_full_reg_addr                  0b010000011
#define tx_mode1_pl_full_reg_startbit              0
#define tx_mode1_pl_full_reg_width                 16
#define tx_mode1_pl_full_reg_endbit                15
#define tx_mode1_pl_full_reg_shift                 0
#define tx_mode1_pl_full_reg_mask                  0xffff


#define tx_nseg_main_0_15_hs_en_addr               0b010001111
#define tx_nseg_main_0_15_hs_en_startbit           0
#define tx_nseg_main_0_15_hs_en_width              16
#define tx_nseg_main_0_15_hs_en_endbit             15
#define tx_nseg_main_0_15_hs_en_shift              0
#define tx_nseg_main_0_15_hs_en_mask               0xffff


#define tx_nseg_main_0_15_safe_en_addr             0b010011110
#define tx_nseg_main_0_15_safe_en_startbit         0
#define tx_nseg_main_0_15_safe_en_width            16
#define tx_nseg_main_0_15_safe_en_endbit           15
#define tx_nseg_main_0_15_safe_en_shift            0
#define tx_nseg_main_0_15_safe_en_mask             0xffff


#define tx_nseg_main_16_24_hs_en_addr              0b010010000
#define tx_nseg_main_16_24_hs_en_startbit          0
#define tx_nseg_main_16_24_hs_en_width             9
#define tx_nseg_main_16_24_hs_en_endbit            8
#define tx_nseg_main_16_24_hs_en_shift             7
#define tx_nseg_main_16_24_hs_en_mask              0xff80


#define tx_nseg_main_16_24_safe_en_addr            0b010011111
#define tx_nseg_main_16_24_safe_en_startbit        0
#define tx_nseg_main_16_24_safe_en_width           9
#define tx_nseg_main_16_24_safe_en_endbit          8
#define tx_nseg_main_16_24_safe_en_shift           7
#define tx_nseg_main_16_24_safe_en_mask            0xff80


#define tx_nseg_pre1_hs_en_addr                    0b010001010
#define tx_nseg_pre1_hs_en_startbit                3
#define tx_nseg_pre1_hs_en_width                   5
#define tx_nseg_pre1_hs_en_endbit                  7
#define tx_nseg_pre1_hs_en_shift                   8
#define tx_nseg_pre1_hs_en_mask                    0x1f00


#define tx_nseg_pre1_hs_sel_addr                   0b010001010
#define tx_nseg_pre1_hs_sel_startbit               8
#define tx_nseg_pre1_hs_sel_width                  5
#define tx_nseg_pre1_hs_sel_endbit                 12
#define tx_nseg_pre1_hs_sel_shift                  3
#define tx_nseg_pre1_hs_sel_mask                   0xf8


#define tx_nseg_pre1_safe_en_addr                  0b010011001
#define tx_nseg_pre1_safe_en_startbit              3
#define tx_nseg_pre1_safe_en_width                 5
#define tx_nseg_pre1_safe_en_endbit                7
#define tx_nseg_pre1_safe_en_shift                 8
#define tx_nseg_pre1_safe_en_mask                  0x1f00


#define tx_nseg_pre1_safe_sel_addr                 0b010011001
#define tx_nseg_pre1_safe_sel_startbit             8
#define tx_nseg_pre1_safe_sel_width                5
#define tx_nseg_pre1_safe_sel_endbit               12
#define tx_nseg_pre1_safe_sel_shift                3
#define tx_nseg_pre1_safe_sel_mask                 0xf8


#define tx_nseg_pre2_hs_en_addr                    0b010001100
#define tx_nseg_pre2_hs_en_startbit                3
#define tx_nseg_pre2_hs_en_width                   5
#define tx_nseg_pre2_hs_en_endbit                  7
#define tx_nseg_pre2_hs_en_shift                   8
#define tx_nseg_pre2_hs_en_mask                    0x1f00


#define tx_nseg_pre2_hs_sel_addr                   0b010001100
#define tx_nseg_pre2_hs_sel_startbit               8
#define tx_nseg_pre2_hs_sel_width                  5
#define tx_nseg_pre2_hs_sel_endbit                 12
#define tx_nseg_pre2_hs_sel_shift                  3
#define tx_nseg_pre2_hs_sel_mask                   0xf8


#define tx_nseg_pre2_safe_en_addr                  0b010011011
#define tx_nseg_pre2_safe_en_startbit              3
#define tx_nseg_pre2_safe_en_width                 5
#define tx_nseg_pre2_safe_en_endbit                7
#define tx_nseg_pre2_safe_en_shift                 8
#define tx_nseg_pre2_safe_en_mask                  0x1f00


#define tx_nseg_pre2_safe_sel_addr                 0b010011011
#define tx_nseg_pre2_safe_sel_startbit             8
#define tx_nseg_pre2_safe_sel_width                5
#define tx_nseg_pre2_safe_sel_endbit               12
#define tx_nseg_pre2_safe_sel_shift                3
#define tx_nseg_pre2_safe_sel_mask                 0xf8


#define tx_pattern_0_15_addr                       0b110001110
#define tx_pattern_0_15_startbit                   0
#define tx_pattern_0_15_width                      16
#define tx_pattern_0_15_endbit                     15
#define tx_pattern_0_15_shift                      0
#define tx_pattern_0_15_mask                       0xffff


#define tx_pattern_16_31_addr                      0b110001111
#define tx_pattern_16_31_startbit                  0
#define tx_pattern_16_31_width                     16
#define tx_pattern_16_31_endbit                    15
#define tx_pattern_16_31_shift                     0
#define tx_pattern_16_31_mask                      0xffff


#define tx_pattern_32_47_addr                      0b110000100
#define tx_pattern_32_47_startbit                  0
#define tx_pattern_32_47_width                     16
#define tx_pattern_32_47_endbit                    15
#define tx_pattern_32_47_shift                     0
#define tx_pattern_32_47_mask                      0xffff


#define tx_pattern_48_63_addr                      0b110000101
#define tx_pattern_48_63_startbit                  0
#define tx_pattern_48_63_width                     16
#define tx_pattern_48_63_endbit                    15
#define tx_pattern_48_63_shift                     0
#define tx_pattern_48_63_mask                      0xffff


#define tx_pattern_enable_addr                     0b010001000
#define tx_pattern_enable_startbit                 1
#define tx_pattern_enable_width                    1
#define tx_pattern_enable_endbit                   1
#define tx_pattern_enable_shift                    14
#define tx_pattern_enable_mask                     0x4000


#define tx_pattern_sel_addr                        0b110001000
#define tx_pattern_sel_startbit                    0
#define tx_pattern_sel_width                       3
#define tx_pattern_sel_endbit                      2
#define tx_pattern_sel_shift                       13
#define tx_pattern_sel_mask                        0xe000


#define tx_pg_ctl_sm_spare_mode_0_addr             0b110010100
#define tx_pg_ctl_sm_spare_mode_0_startbit         0
#define tx_pg_ctl_sm_spare_mode_0_width            1
#define tx_pg_ctl_sm_spare_mode_0_endbit           0
#define tx_pg_ctl_sm_spare_mode_0_shift            15
#define tx_pg_ctl_sm_spare_mode_0_mask             0x8000


#define tx_pg_ctl_sm_spare_mode_1_addr             0b110010100
#define tx_pg_ctl_sm_spare_mode_1_startbit         1
#define tx_pg_ctl_sm_spare_mode_1_width            1
#define tx_pg_ctl_sm_spare_mode_1_endbit           1
#define tx_pg_ctl_sm_spare_mode_1_shift            14
#define tx_pg_ctl_sm_spare_mode_1_mask             0x4000


#define tx_pg_ctl_sm_spare_mode_2_addr             0b110010100
#define tx_pg_ctl_sm_spare_mode_2_startbit         2
#define tx_pg_ctl_sm_spare_mode_2_width            1
#define tx_pg_ctl_sm_spare_mode_2_endbit           2
#define tx_pg_ctl_sm_spare_mode_2_shift            13
#define tx_pg_ctl_sm_spare_mode_2_mask             0x2000


#define tx_pg_ctl_sm_spare_mode_3_addr             0b110010100
#define tx_pg_ctl_sm_spare_mode_3_startbit         3
#define tx_pg_ctl_sm_spare_mode_3_width            1
#define tx_pg_ctl_sm_spare_mode_3_endbit           3
#define tx_pg_ctl_sm_spare_mode_3_shift            12
#define tx_pg_ctl_sm_spare_mode_3_mask             0x1000


#define tx_pg_ctl_sm_spare_mode_4_addr             0b110010100
#define tx_pg_ctl_sm_spare_mode_4_startbit         4
#define tx_pg_ctl_sm_spare_mode_4_width            1
#define tx_pg_ctl_sm_spare_mode_4_endbit           4
#define tx_pg_ctl_sm_spare_mode_4_shift            11
#define tx_pg_ctl_sm_spare_mode_4_mask             0x800


#define tx_pg_ctl_sm_spare_mode_5_addr             0b110010100
#define tx_pg_ctl_sm_spare_mode_5_startbit         5
#define tx_pg_ctl_sm_spare_mode_5_width            1
#define tx_pg_ctl_sm_spare_mode_5_endbit           5
#define tx_pg_ctl_sm_spare_mode_5_shift            10
#define tx_pg_ctl_sm_spare_mode_5_mask             0x400


#define tx_pg_ctl_sm_spare_mode_6_addr             0b110010100
#define tx_pg_ctl_sm_spare_mode_6_startbit         6
#define tx_pg_ctl_sm_spare_mode_6_width            1
#define tx_pg_ctl_sm_spare_mode_6_endbit           6
#define tx_pg_ctl_sm_spare_mode_6_shift            9
#define tx_pg_ctl_sm_spare_mode_6_mask             0x200


#define tx_pg_ctl_sm_spare_mode_7_addr             0b110010100
#define tx_pg_ctl_sm_spare_mode_7_startbit         7
#define tx_pg_ctl_sm_spare_mode_7_width            1
#define tx_pg_ctl_sm_spare_mode_7_endbit           7
#define tx_pg_ctl_sm_spare_mode_7_shift            8
#define tx_pg_ctl_sm_spare_mode_7_mask             0x100


#define tx_pg_fir_err_ctl_regs_addr                0b110010000
#define tx_pg_fir_err_ctl_regs_startbit            1
#define tx_pg_fir_err_ctl_regs_width               1
#define tx_pg_fir_err_ctl_regs_endbit              1
#define tx_pg_fir_err_ctl_regs_shift               14
#define tx_pg_fir_err_ctl_regs_mask                0x4000


#define tx_pg_fir_err_gcr_arb_sm_addr              0b110010000
#define tx_pg_fir_err_gcr_arb_sm_startbit          2
#define tx_pg_fir_err_gcr_arb_sm_width             1
#define tx_pg_fir_err_gcr_arb_sm_endbit            2
#define tx_pg_fir_err_gcr_arb_sm_shift             13
#define tx_pg_fir_err_gcr_arb_sm_mask              0x2000


#define tx_pg_fir_err_inj_addr                     0b110010011
#define tx_pg_fir_err_inj_startbit                 0
#define tx_pg_fir_err_inj_width                    4
#define tx_pg_fir_err_inj_endbit                   3
#define tx_pg_fir_err_inj_shift                    12
#define tx_pg_fir_err_inj_mask                     0xf000


#define tx_pg_fir_err_inj_ctl_regs_addr            0b110010011
#define tx_pg_fir_err_inj_ctl_regs_startbit        1
#define tx_pg_fir_err_inj_ctl_regs_width           1
#define tx_pg_fir_err_inj_ctl_regs_endbit          1
#define tx_pg_fir_err_inj_ctl_regs_shift           14
#define tx_pg_fir_err_inj_ctl_regs_mask            0x4000


#define tx_pg_fir_err_inj_full_reg_addr            0b110010011
#define tx_pg_fir_err_inj_full_reg_startbit        0
#define tx_pg_fir_err_inj_full_reg_width           16
#define tx_pg_fir_err_inj_full_reg_endbit          15
#define tx_pg_fir_err_inj_full_reg_shift           0
#define tx_pg_fir_err_inj_full_reg_mask            0xffff


#define tx_pg_fir_err_inj_gcr_arb_sm_addr          0b110010011
#define tx_pg_fir_err_inj_gcr_arb_sm_startbit      2
#define tx_pg_fir_err_inj_gcr_arb_sm_width         1
#define tx_pg_fir_err_inj_gcr_arb_sm_endbit        2
#define tx_pg_fir_err_inj_gcr_arb_sm_shift         13
#define tx_pg_fir_err_inj_gcr_arb_sm_mask          0x2000


#define tx_pg_fir_err_inj_tx_psave_sm_addr         0b110010011
#define tx_pg_fir_err_inj_tx_psave_sm_startbit     3
#define tx_pg_fir_err_inj_tx_psave_sm_width        1
#define tx_pg_fir_err_inj_tx_psave_sm_endbit       3
#define tx_pg_fir_err_inj_tx_psave_sm_shift        12
#define tx_pg_fir_err_inj_tx_psave_sm_mask         0x1000


#define tx_pg_fir_err_inj_tx_sm_regs_addr          0b110010011
#define tx_pg_fir_err_inj_tx_sm_regs_startbit      0
#define tx_pg_fir_err_inj_tx_sm_regs_width         1
#define tx_pg_fir_err_inj_tx_sm_regs_endbit        0
#define tx_pg_fir_err_inj_tx_sm_regs_shift         15
#define tx_pg_fir_err_inj_tx_sm_regs_mask          0x8000


#define tx_pg_fir_err_mask_ctl_regs_addr           0b110010001
#define tx_pg_fir_err_mask_ctl_regs_startbit       1
#define tx_pg_fir_err_mask_ctl_regs_width          1
#define tx_pg_fir_err_mask_ctl_regs_endbit         1
#define tx_pg_fir_err_mask_ctl_regs_shift          14
#define tx_pg_fir_err_mask_ctl_regs_mask           0x4000


#define tx_pg_fir_err_mask_full_reg_addr           0b110010001
#define tx_pg_fir_err_mask_full_reg_startbit       0
#define tx_pg_fir_err_mask_full_reg_width          16
#define tx_pg_fir_err_mask_full_reg_endbit         15
#define tx_pg_fir_err_mask_full_reg_shift          0
#define tx_pg_fir_err_mask_full_reg_mask           0xffff


#define tx_pg_fir_err_mask_gcr_arb_sm_addr         0b110010001
#define tx_pg_fir_err_mask_gcr_arb_sm_startbit     2
#define tx_pg_fir_err_mask_gcr_arb_sm_width        1
#define tx_pg_fir_err_mask_gcr_arb_sm_endbit       2
#define tx_pg_fir_err_mask_gcr_arb_sm_shift        13
#define tx_pg_fir_err_mask_gcr_arb_sm_mask         0x2000


#define tx_pg_fir_err_mask_tx_psave_sm_addr        0b110010001
#define tx_pg_fir_err_mask_tx_psave_sm_startbit    3
#define tx_pg_fir_err_mask_tx_psave_sm_width       1
#define tx_pg_fir_err_mask_tx_psave_sm_endbit      3
#define tx_pg_fir_err_mask_tx_psave_sm_shift       12
#define tx_pg_fir_err_mask_tx_psave_sm_mask        0x1000


#define tx_pg_fir_err_mask_tx_sm_regs_addr         0b110010001
#define tx_pg_fir_err_mask_tx_sm_regs_startbit     0
#define tx_pg_fir_err_mask_tx_sm_regs_width        1
#define tx_pg_fir_err_mask_tx_sm_regs_endbit       0
#define tx_pg_fir_err_mask_tx_sm_regs_shift        15
#define tx_pg_fir_err_mask_tx_sm_regs_mask         0x8000


#define tx_pg_fir_err_tx_psave_sm_addr             0b110010000
#define tx_pg_fir_err_tx_psave_sm_startbit         3
#define tx_pg_fir_err_tx_psave_sm_width            1
#define tx_pg_fir_err_tx_psave_sm_endbit           3
#define tx_pg_fir_err_tx_psave_sm_shift            12
#define tx_pg_fir_err_tx_psave_sm_mask             0x1000


#define tx_pg_fir_err_tx_sm_regs_addr              0b110010000
#define tx_pg_fir_err_tx_sm_regs_startbit          0
#define tx_pg_fir_err_tx_sm_regs_width             1
#define tx_pg_fir_err_tx_sm_regs_endbit            0
#define tx_pg_fir_err_tx_sm_regs_shift             15
#define tx_pg_fir_err_tx_sm_regs_mask              0x8000


#define tx_pg_fir_errs_addr                        0b110010000
#define tx_pg_fir_errs_startbit                    0
#define tx_pg_fir_errs_width                       5
#define tx_pg_fir_errs_endbit                      4
#define tx_pg_fir_errs_shift                       11
#define tx_pg_fir_errs_mask                        0xf800


#define tx_pg_fir_errs_full_reg_addr               0b110010000
#define tx_pg_fir_errs_full_reg_startbit           0
#define tx_pg_fir_errs_full_reg_width              16
#define tx_pg_fir_errs_full_reg_endbit             15
#define tx_pg_fir_errs_full_reg_shift              0
#define tx_pg_fir_errs_full_reg_mask               0xffff


#define tx_pg_fir_errs_mask_addr                   0b110010001
#define tx_pg_fir_errs_mask_startbit               0
#define tx_pg_fir_errs_mask_width                  5
#define tx_pg_fir_errs_mask_endbit                 4
#define tx_pg_fir_errs_mask_shift                  11
#define tx_pg_fir_errs_mask_mask                   0xf800


#define tx_pg_spare_mode_0_addr                    0b110000000
#define tx_pg_spare_mode_0_startbit                0
#define tx_pg_spare_mode_0_width                   1
#define tx_pg_spare_mode_0_endbit                  0
#define tx_pg_spare_mode_0_shift                   15
#define tx_pg_spare_mode_0_mask                    0x8000


#define tx_pg_spare_mode_1_addr                    0b110000000
#define tx_pg_spare_mode_1_startbit                1
#define tx_pg_spare_mode_1_width                   1
#define tx_pg_spare_mode_1_endbit                  1
#define tx_pg_spare_mode_1_shift                   14
#define tx_pg_spare_mode_1_mask                    0x4000


#define tx_pg_spare_mode_2_addr                    0b110000000
#define tx_pg_spare_mode_2_startbit                2
#define tx_pg_spare_mode_2_width                   1
#define tx_pg_spare_mode_2_endbit                  2
#define tx_pg_spare_mode_2_shift                   13
#define tx_pg_spare_mode_2_mask                    0x2000


#define tx_pg_spare_mode_3_addr                    0b110000000
#define tx_pg_spare_mode_3_startbit                3
#define tx_pg_spare_mode_3_width                   1
#define tx_pg_spare_mode_3_endbit                  3
#define tx_pg_spare_mode_3_shift                   12
#define tx_pg_spare_mode_3_mask                    0x1000


#define tx_pg_spare_mode_4_addr                    0b110000000
#define tx_pg_spare_mode_4_startbit                4
#define tx_pg_spare_mode_4_width                   1
#define tx_pg_spare_mode_4_endbit                  4
#define tx_pg_spare_mode_4_shift                   11
#define tx_pg_spare_mode_4_mask                    0x800


#define tx_pg_spare_mode_5_addr                    0b110000000
#define tx_pg_spare_mode_5_startbit                5
#define tx_pg_spare_mode_5_width                   1
#define tx_pg_spare_mode_5_endbit                  5
#define tx_pg_spare_mode_5_shift                   10
#define tx_pg_spare_mode_5_mask                    0x400


#define tx_pg_spare_mode_6_addr                    0b110000000
#define tx_pg_spare_mode_6_startbit                6
#define tx_pg_spare_mode_6_width                   1
#define tx_pg_spare_mode_6_endbit                  6
#define tx_pg_spare_mode_6_shift                   9
#define tx_pg_spare_mode_6_mask                    0x200


#define tx_pg_spare_mode_7_addr                    0b110000000
#define tx_pg_spare_mode_7_startbit                7
#define tx_pg_spare_mode_7_width                   1
#define tx_pg_spare_mode_7_endbit                  7
#define tx_pg_spare_mode_7_shift                   8
#define tx_pg_spare_mode_7_mask                    0x100


#define tx_pg_spare_mode_8_9_addr                  0b110000000
#define tx_pg_spare_mode_8_9_startbit              8
#define tx_pg_spare_mode_8_9_width                 2
#define tx_pg_spare_mode_8_9_endbit                9
#define tx_pg_spare_mode_8_9_shift                 6
#define tx_pg_spare_mode_8_9_mask                  0xc0


#define tx_pl_fir_err_addr                         0b110010000
#define tx_pl_fir_err_startbit                     4
#define tx_pl_fir_err_width                        1
#define tx_pl_fir_err_endbit                       4
#define tx_pl_fir_err_shift                        11
#define tx_pl_fir_err_mask                         0x800


#define tx_pl_fir_err_inj_addr                     0b010000010
#define tx_pl_fir_err_inj_startbit                 0
#define tx_pl_fir_err_inj_width                    2
#define tx_pl_fir_err_inj_endbit                   1
#define tx_pl_fir_err_inj_shift                    14
#define tx_pl_fir_err_inj_mask                     0xc000


#define tx_pl_fir_err_inj_full_reg_addr            0b010000010
#define tx_pl_fir_err_inj_full_reg_startbit        0
#define tx_pl_fir_err_inj_full_reg_width           16
#define tx_pl_fir_err_inj_full_reg_endbit          15
#define tx_pl_fir_err_inj_full_reg_shift           0
#define tx_pl_fir_err_inj_full_reg_mask            0xffff


#define tx_pl_fir_err_inj_pl_regs_addr             0b010000010
#define tx_pl_fir_err_inj_pl_regs_startbit         0
#define tx_pl_fir_err_inj_pl_regs_width            1
#define tx_pl_fir_err_inj_pl_regs_endbit           0
#define tx_pl_fir_err_inj_pl_regs_shift            15
#define tx_pl_fir_err_inj_pl_regs_mask             0x8000


#define tx_pl_fir_err_inj_psave_sm_addr            0b010000010
#define tx_pl_fir_err_inj_psave_sm_startbit        1
#define tx_pl_fir_err_inj_psave_sm_width           1
#define tx_pl_fir_err_inj_psave_sm_endbit          1
#define tx_pl_fir_err_inj_psave_sm_shift           14
#define tx_pl_fir_err_inj_psave_sm_mask            0x4000


#define tx_pl_fir_err_mask_addr                    0b110010001
#define tx_pl_fir_err_mask_startbit                4
#define tx_pl_fir_err_mask_width                   1
#define tx_pl_fir_err_mask_endbit                  4
#define tx_pl_fir_err_mask_shift                   11
#define tx_pl_fir_err_mask_mask                    0x800


#define tx_pl_fir_err_mask_pl_regs_addr            0b010000001
#define tx_pl_fir_err_mask_pl_regs_startbit        0
#define tx_pl_fir_err_mask_pl_regs_width           1
#define tx_pl_fir_err_mask_pl_regs_endbit          0
#define tx_pl_fir_err_mask_pl_regs_shift           15
#define tx_pl_fir_err_mask_pl_regs_mask            0x8000


#define tx_pl_fir_err_mask_psave_sm_addr           0b010000001
#define tx_pl_fir_err_mask_psave_sm_startbit       1
#define tx_pl_fir_err_mask_psave_sm_width          1
#define tx_pl_fir_err_mask_psave_sm_endbit         1
#define tx_pl_fir_err_mask_psave_sm_shift          14
#define tx_pl_fir_err_mask_psave_sm_mask           0x4000


#define tx_pl_fir_err_pl_regs_addr                 0b010000000
#define tx_pl_fir_err_pl_regs_startbit             0
#define tx_pl_fir_err_pl_regs_width                1
#define tx_pl_fir_err_pl_regs_endbit               0
#define tx_pl_fir_err_pl_regs_shift                15
#define tx_pl_fir_err_pl_regs_mask                 0x8000


#define tx_pl_fir_err_psave_sm_addr                0b010000000
#define tx_pl_fir_err_psave_sm_startbit            1
#define tx_pl_fir_err_psave_sm_width               1
#define tx_pl_fir_err_psave_sm_endbit              1
#define tx_pl_fir_err_psave_sm_shift               14
#define tx_pl_fir_err_psave_sm_mask                0x4000


#define tx_pl_fir_errs_addr                        0b010000000
#define tx_pl_fir_errs_startbit                    0
#define tx_pl_fir_errs_width                       2
#define tx_pl_fir_errs_endbit                      1
#define tx_pl_fir_errs_shift                       14
#define tx_pl_fir_errs_mask                        0xc000


#define tx_pl_fir_errs_full_reg_addr               0b010000000
#define tx_pl_fir_errs_full_reg_startbit           0
#define tx_pl_fir_errs_full_reg_width              16
#define tx_pl_fir_errs_full_reg_endbit             15
#define tx_pl_fir_errs_full_reg_shift              0
#define tx_pl_fir_errs_full_reg_mask               0xffff


#define tx_pl_fir_errs_mask_addr                   0b010000001
#define tx_pl_fir_errs_mask_startbit               0
#define tx_pl_fir_errs_mask_width                  2
#define tx_pl_fir_errs_mask_endbit                 1
#define tx_pl_fir_errs_mask_shift                  14
#define tx_pl_fir_errs_mask_mask                   0xc000


#define tx_pl_fir_errs_mask_full_reg_addr          0b010000001
#define tx_pl_fir_errs_mask_full_reg_startbit      0
#define tx_pl_fir_errs_mask_full_reg_width         16
#define tx_pl_fir_errs_mask_full_reg_endbit        15
#define tx_pl_fir_errs_mask_full_reg_shift         0
#define tx_pl_fir_errs_mask_full_reg_mask          0xffff


#define tx_pl_spare_mode_0_addr                    0b010000011
#define tx_pl_spare_mode_0_startbit                12
#define tx_pl_spare_mode_0_width                   1
#define tx_pl_spare_mode_0_endbit                  12
#define tx_pl_spare_mode_0_shift                   3
#define tx_pl_spare_mode_0_mask                    0x8


#define tx_pl_spare_mode_1_addr                    0b010000011
#define tx_pl_spare_mode_1_startbit                13
#define tx_pl_spare_mode_1_width                   1
#define tx_pl_spare_mode_1_endbit                  13
#define tx_pl_spare_mode_1_shift                   2
#define tx_pl_spare_mode_1_mask                    0x4


#define tx_pl_spare_mode_2_addr                    0b010000011
#define tx_pl_spare_mode_2_startbit                14
#define tx_pl_spare_mode_2_width                   1
#define tx_pl_spare_mode_2_endbit                  14
#define tx_pl_spare_mode_2_shift                   1
#define tx_pl_spare_mode_2_mask                    0x2


#define tx_pl_spare_mode_3_addr                    0b010000011
#define tx_pl_spare_mode_3_startbit                15
#define tx_pl_spare_mode_3_width                   1
#define tx_pl_spare_mode_3_endbit                  15
#define tx_pl_spare_mode_3_shift                   0
#define tx_pl_spare_mode_3_mask                    0x1


#define tx_psave_del_unload_timer_double_mode_addr   0b010010100
#define tx_psave_del_unload_timer_double_mode_startbit   4
#define tx_psave_del_unload_timer_double_mode_width   1
#define tx_psave_del_unload_timer_double_mode_endbit   4
#define tx_psave_del_unload_timer_double_mode_shift   11
#define tx_psave_del_unload_timer_double_mode_mask   0x800


#define tx_psave_del_unload_timer_val_addr         0b010010100
#define tx_psave_del_unload_timer_val_startbit     0
#define tx_psave_del_unload_timer_val_width        4
#define tx_psave_del_unload_timer_val_endbit       3
#define tx_psave_del_unload_timer_val_shift        12
#define tx_psave_del_unload_timer_val_mask         0xf000


#define tx_psave_disable_pl_sm_addr                0b010010100
#define tx_psave_disable_pl_sm_startbit            5
#define tx_psave_disable_pl_sm_width               1
#define tx_psave_disable_pl_sm_endbit              5
#define tx_psave_disable_pl_sm_shift               10
#define tx_psave_disable_pl_sm_mask                0x400


#define tx_psave_disable_sm_addr                   0b110100011
#define tx_psave_disable_sm_startbit               6
#define tx_psave_disable_sm_width                  1
#define tx_psave_disable_sm_endbit                 6
#define tx_psave_disable_sm_shift                  9
#define tx_psave_disable_sm_mask                   0x200


#define tx_psave_fence_req_dl_io_0_15_addr         0b110011000
#define tx_psave_fence_req_dl_io_0_15_startbit     0
#define tx_psave_fence_req_dl_io_0_15_width        16
#define tx_psave_fence_req_dl_io_0_15_endbit       15
#define tx_psave_fence_req_dl_io_0_15_shift        0
#define tx_psave_fence_req_dl_io_0_15_mask         0xffff


#define tx_psave_fence_req_dl_io_16_23_addr        0b110011001
#define tx_psave_fence_req_dl_io_16_23_startbit    0
#define tx_psave_fence_req_dl_io_16_23_width       8
#define tx_psave_fence_req_dl_io_16_23_endbit      7
#define tx_psave_fence_req_dl_io_16_23_shift       8
#define tx_psave_fence_req_dl_io_16_23_mask        0xff00


#define tx_psave_fence_sts_io_dl_0_15_addr         0b110011010
#define tx_psave_fence_sts_io_dl_0_15_startbit     0
#define tx_psave_fence_sts_io_dl_0_15_width        16
#define tx_psave_fence_sts_io_dl_0_15_endbit       15
#define tx_psave_fence_sts_io_dl_0_15_shift        0
#define tx_psave_fence_sts_io_dl_0_15_mask         0xffff


#define tx_psave_fence_sts_io_dl_16_23_addr        0b110011011
#define tx_psave_fence_sts_io_dl_16_23_startbit    0
#define tx_psave_fence_sts_io_dl_16_23_width       8
#define tx_psave_fence_sts_io_dl_16_23_endbit      7
#define tx_psave_fence_sts_io_dl_16_23_shift       8
#define tx_psave_fence_sts_io_dl_16_23_mask        0xff00


#define tx_psave_fifo_init_timer_double_mode_addr   0b010010011
#define tx_psave_fifo_init_timer_double_mode_startbit   9
#define tx_psave_fifo_init_timer_double_mode_width   1
#define tx_psave_fifo_init_timer_double_mode_endbit   9
#define tx_psave_fifo_init_timer_double_mode_shift   6
#define tx_psave_fifo_init_timer_double_mode_mask   0x40


#define tx_psave_fifo_init_timer_val_addr          0b010010011
#define tx_psave_fifo_init_timer_val_startbit      6
#define tx_psave_fifo_init_timer_val_width         3
#define tx_psave_fifo_init_timer_val_endbit        8
#define tx_psave_fifo_init_timer_val_shift         7
#define tx_psave_fifo_init_timer_val_mask          0x380


#define tx_psave_force_req_0_15_0_addr             0b110011100
#define tx_psave_force_req_0_15_0_startbit         0
#define tx_psave_force_req_0_15_0_width            16
#define tx_psave_force_req_0_15_0_endbit           15
#define tx_psave_force_req_0_15_0_shift            0
#define tx_psave_force_req_0_15_0_mask             0xffff


#define tx_psave_force_req_0_15_1_addr             0b110100100
#define tx_psave_force_req_0_15_1_startbit         0
#define tx_psave_force_req_0_15_1_width            16
#define tx_psave_force_req_0_15_1_endbit           15
#define tx_psave_force_req_0_15_1_shift            0
#define tx_psave_force_req_0_15_1_mask             0xffff


#define tx_psave_force_req_16_23_0_addr            0b110011101
#define tx_psave_force_req_16_23_0_startbit        0
#define tx_psave_force_req_16_23_0_width           8
#define tx_psave_force_req_16_23_0_endbit          7
#define tx_psave_force_req_16_23_0_shift           8
#define tx_psave_force_req_16_23_0_mask            0xff00


#define tx_psave_force_req_16_23_1_addr            0b110100101
#define tx_psave_force_req_16_23_1_startbit        0
#define tx_psave_force_req_16_23_1_width           8
#define tx_psave_force_req_16_23_1_endbit          7
#define tx_psave_force_req_16_23_1_shift           8
#define tx_psave_force_req_16_23_1_mask            0xff00


#define tx_psave_force_sts_0_15_addr               0b110011110
#define tx_psave_force_sts_0_15_startbit           0
#define tx_psave_force_sts_0_15_width              16
#define tx_psave_force_sts_0_15_endbit             15
#define tx_psave_force_sts_0_15_shift              0
#define tx_psave_force_sts_0_15_mask               0xffff


#define tx_psave_force_sts_16_23_addr              0b110011111
#define tx_psave_force_sts_16_23_startbit          0
#define tx_psave_force_sts_16_23_width             8
#define tx_psave_force_sts_16_23_endbit            7
#define tx_psave_force_sts_16_23_shift             8
#define tx_psave_force_sts_16_23_mask              0xff00


#define tx_psave_req_dis_addr                      0b010000011
#define tx_psave_req_dis_startbit                  5
#define tx_psave_req_dis_width                     1
#define tx_psave_req_dis_endbit                    5
#define tx_psave_req_dis_shift                     10
#define tx_psave_req_dis_mask                      0x400


#define tx_psave_req_dl_0_15_sts_addr              0b110101001
#define tx_psave_req_dl_0_15_sts_startbit          0
#define tx_psave_req_dl_0_15_sts_width             16
#define tx_psave_req_dl_0_15_sts_endbit            15
#define tx_psave_req_dl_0_15_sts_shift             0
#define tx_psave_req_dl_0_15_sts_mask              0xffff


#define tx_psave_req_dl_16_23_sts_addr             0b110101010
#define tx_psave_req_dl_16_23_sts_startbit         0
#define tx_psave_req_dl_16_23_sts_width            8
#define tx_psave_req_dl_16_23_sts_endbit           7
#define tx_psave_req_dl_16_23_sts_shift            8
#define tx_psave_req_dl_16_23_sts_mask             0xff00


#define tx_psave_sts_phy_0_15_sts_addr             0b110101011
#define tx_psave_sts_phy_0_15_sts_startbit         0
#define tx_psave_sts_phy_0_15_sts_width            16
#define tx_psave_sts_phy_0_15_sts_endbit           15
#define tx_psave_sts_phy_0_15_sts_shift            0
#define tx_psave_sts_phy_0_15_sts_mask             0xffff


#define tx_psave_sts_phy_16_23_sts_addr            0b110101100
#define tx_psave_sts_phy_16_23_sts_startbit        0
#define tx_psave_sts_phy_16_23_sts_width           8
#define tx_psave_sts_phy_16_23_sts_endbit          7
#define tx_psave_sts_phy_16_23_sts_shift           8
#define tx_psave_sts_phy_16_23_sts_mask            0xff00


#define tx_psave_subset0_addr                      0b110100000
#define tx_psave_subset0_startbit                  0
#define tx_psave_subset0_width                     6
#define tx_psave_subset0_endbit                    5
#define tx_psave_subset0_shift                     10
#define tx_psave_subset0_mask                      0xfc00


#define tx_psave_subset1_addr                      0b110100000
#define tx_psave_subset1_startbit                  6
#define tx_psave_subset1_width                     6
#define tx_psave_subset1_endbit                    11
#define tx_psave_subset1_shift                     4
#define tx_psave_subset1_mask                      0x3f0


#define tx_psave_subset2_addr                      0b110100001
#define tx_psave_subset2_startbit                  0
#define tx_psave_subset2_width                     6
#define tx_psave_subset2_endbit                    5
#define tx_psave_subset2_shift                     10
#define tx_psave_subset2_mask                      0xfc00


#define tx_psave_subset3_addr                      0b110100001
#define tx_psave_subset3_startbit                  6
#define tx_psave_subset3_width                     6
#define tx_psave_subset3_endbit                    11
#define tx_psave_subset3_shift                     4
#define tx_psave_subset3_mask                      0x3f0


#define tx_psave_subset4_addr                      0b110100010
#define tx_psave_subset4_startbit                  0
#define tx_psave_subset4_width                     6
#define tx_psave_subset4_endbit                    5
#define tx_psave_subset4_shift                     10
#define tx_psave_subset4_mask                      0xfc00


#define tx_psave_subset5_addr                      0b110100010
#define tx_psave_subset5_startbit                  6
#define tx_psave_subset5_width                     6
#define tx_psave_subset5_endbit                    11
#define tx_psave_subset5_shift                     4
#define tx_psave_subset5_mask                      0x3f0


#define tx_psave_subset6_addr                      0b110100011
#define tx_psave_subset6_startbit                  0
#define tx_psave_subset6_width                     6
#define tx_psave_subset6_endbit                    5
#define tx_psave_subset6_shift                     10
#define tx_psave_subset6_mask                      0xfc00


#define tx_psave_time_addr                         0b110100011
#define tx_psave_time_startbit                     7
#define tx_psave_time_width                        6
#define tx_psave_time_endbit                       12
#define tx_psave_time_shift                        3
#define tx_psave_time_mask                         0x1f8


#define tx_psave_timer_double_mode_addr            0b110100011
#define tx_psave_timer_double_mode_startbit        13
#define tx_psave_timer_double_mode_width           1
#define tx_psave_timer_double_mode_endbit          13
#define tx_psave_timer_double_mode_shift           2
#define tx_psave_timer_double_mode_mask            0x4


#define tx_pseg_main_0_15_hs_en_addr               0b010001101
#define tx_pseg_main_0_15_hs_en_startbit           0
#define tx_pseg_main_0_15_hs_en_width              16
#define tx_pseg_main_0_15_hs_en_endbit             15
#define tx_pseg_main_0_15_hs_en_shift              0
#define tx_pseg_main_0_15_hs_en_mask               0xffff


#define tx_pseg_main_0_15_safe_en_addr             0b010011100
#define tx_pseg_main_0_15_safe_en_startbit         0
#define tx_pseg_main_0_15_safe_en_width            16
#define tx_pseg_main_0_15_safe_en_endbit           15
#define tx_pseg_main_0_15_safe_en_shift            0
#define tx_pseg_main_0_15_safe_en_mask             0xffff


#define tx_pseg_main_16_24_hs_en_addr              0b010001110
#define tx_pseg_main_16_24_hs_en_startbit          0
#define tx_pseg_main_16_24_hs_en_width             9
#define tx_pseg_main_16_24_hs_en_endbit            8
#define tx_pseg_main_16_24_hs_en_shift             7
#define tx_pseg_main_16_24_hs_en_mask              0xff80


#define tx_pseg_main_16_24_safe_en_addr            0b010011101
#define tx_pseg_main_16_24_safe_en_startbit        0
#define tx_pseg_main_16_24_safe_en_width           9
#define tx_pseg_main_16_24_safe_en_endbit          8
#define tx_pseg_main_16_24_safe_en_shift           7
#define tx_pseg_main_16_24_safe_en_mask            0xff80


#define tx_pseg_pre1_hs_en_addr                    0b010001001
#define tx_pseg_pre1_hs_en_startbit                3
#define tx_pseg_pre1_hs_en_width                   5
#define tx_pseg_pre1_hs_en_endbit                  7
#define tx_pseg_pre1_hs_en_shift                   8
#define tx_pseg_pre1_hs_en_mask                    0x1f00


#define tx_pseg_pre1_hs_sel_addr                   0b010001001
#define tx_pseg_pre1_hs_sel_startbit               8
#define tx_pseg_pre1_hs_sel_width                  5
#define tx_pseg_pre1_hs_sel_endbit                 12
#define tx_pseg_pre1_hs_sel_shift                  3
#define tx_pseg_pre1_hs_sel_mask                   0xf8


#define tx_pseg_pre1_safe_en_addr                  0b010011000
#define tx_pseg_pre1_safe_en_startbit              3
#define tx_pseg_pre1_safe_en_width                 5
#define tx_pseg_pre1_safe_en_endbit                7
#define tx_pseg_pre1_safe_en_shift                 8
#define tx_pseg_pre1_safe_en_mask                  0x1f00


#define tx_pseg_pre1_safe_sel_addr                 0b010011000
#define tx_pseg_pre1_safe_sel_startbit             8
#define tx_pseg_pre1_safe_sel_width                5
#define tx_pseg_pre1_safe_sel_endbit               12
#define tx_pseg_pre1_safe_sel_shift                3
#define tx_pseg_pre1_safe_sel_mask                 0xf8


#define tx_pseg_pre2_hs_en_addr                    0b010001011
#define tx_pseg_pre2_hs_en_startbit                3
#define tx_pseg_pre2_hs_en_width                   5
#define tx_pseg_pre2_hs_en_endbit                  7
#define tx_pseg_pre2_hs_en_shift                   8
#define tx_pseg_pre2_hs_en_mask                    0x1f00


#define tx_pseg_pre2_hs_sel_addr                   0b010001011
#define tx_pseg_pre2_hs_sel_startbit               8
#define tx_pseg_pre2_hs_sel_width                  5
#define tx_pseg_pre2_hs_sel_endbit                 12
#define tx_pseg_pre2_hs_sel_shift                  3
#define tx_pseg_pre2_hs_sel_mask                   0xf8


#define tx_pseg_pre2_safe_en_addr                  0b010011010
#define tx_pseg_pre2_safe_en_startbit              3
#define tx_pseg_pre2_safe_en_width                 5
#define tx_pseg_pre2_safe_en_endbit                7
#define tx_pseg_pre2_safe_en_shift                 8
#define tx_pseg_pre2_safe_en_mask                  0x1f00


#define tx_pseg_pre2_safe_sel_addr                 0b010011010
#define tx_pseg_pre2_safe_sel_startbit             8
#define tx_pseg_pre2_safe_sel_width                5
#define tx_pseg_pre2_safe_sel_endbit               12
#define tx_pseg_pre2_safe_sel_shift                3
#define tx_pseg_pre2_safe_sel_mask                 0xf8


#define tx_rctrl_addr                              0b110000001
#define tx_rctrl_startbit                          1
#define tx_rctrl_width                             1
#define tx_rctrl_endbit                            1
#define tx_rctrl_shift                             14
#define tx_rctrl_mask                              0x4000


#define tx_rxcal_addr                              0b010000100
#define tx_rxcal_startbit                          9
#define tx_rxcal_width                             1
#define tx_rxcal_endbit                            9
#define tx_rxcal_shift                             6
#define tx_rxcal_mask                              0x40


#define tx_rxdet_enable_addr                       0b010001000
#define tx_rxdet_enable_startbit                   4
#define tx_rxdet_enable_width                      1
#define tx_rxdet_enable_endbit                     4
#define tx_rxdet_enable_shift                      11
#define tx_rxdet_enable_mask                       0x800


#define tx_rxdet_pulse_addr                        0b010001000
#define tx_rxdet_pulse_startbit                    5
#define tx_rxdet_pulse_width                       1
#define tx_rxdet_pulse_endbit                      5
#define tx_rxdet_pulse_shift                       10
#define tx_rxdet_pulse_mask                        0x400


#define tx_seg_test_leakage_ctrl_addr              0b010000101
#define tx_seg_test_leakage_ctrl_startbit          6
#define tx_seg_test_leakage_ctrl_width             1
#define tx_seg_test_leakage_ctrl_endbit            6
#define tx_seg_test_leakage_ctrl_shift             9
#define tx_seg_test_leakage_ctrl_mask              0x200


#define tx_seg_test_status_addr                    0b010100100
#define tx_seg_test_status_startbit                2
#define tx_seg_test_status_width                   2
#define tx_seg_test_status_endbit                  3
#define tx_seg_test_status_shift                   12
#define tx_seg_test_status_mask                    0x3000


#define tx_set_unload_clk_disable_addr             0b010000110
#define tx_set_unload_clk_disable_startbit         12
#define tx_set_unload_clk_disable_width            1
#define tx_set_unload_clk_disable_endbit           12
#define tx_set_unload_clk_disable_shift            3
#define tx_set_unload_clk_disable_mask             0x8


#define tx_tdr_capt_val_addr                       0b010100100
#define tx_tdr_capt_val_startbit                   15
#define tx_tdr_capt_val_width                      1
#define tx_tdr_capt_val_endbit                     15
#define tx_tdr_capt_val_shift                      0
#define tx_tdr_capt_val_mask                       0x1


#define tx_tdr_clamp_disable_addr                  0b110001011
#define tx_tdr_clamp_disable_startbit              8
#define tx_tdr_clamp_disable_width                 1
#define tx_tdr_clamp_disable_endbit                8
#define tx_tdr_clamp_disable_shift                 7
#define tx_tdr_clamp_disable_mask                  0x80


#define tx_tdr_dac_cntl_addr                       0b110001011
#define tx_tdr_dac_cntl_startbit                   0
#define tx_tdr_dac_cntl_width                      8
#define tx_tdr_dac_cntl_endbit                     7
#define tx_tdr_dac_cntl_shift                      8
#define tx_tdr_dac_cntl_mask                       0xff00


#define tx_tdr_enable_addr                         0b010001000
#define tx_tdr_enable_startbit                     0
#define tx_tdr_enable_width                        1
#define tx_tdr_enable_endbit                       0
#define tx_tdr_enable_shift                        15
#define tx_tdr_enable_mask                         0x8000


#define tx_tdr_phase_sel_addr                      0b110001011
#define tx_tdr_phase_sel_startbit                  9
#define tx_tdr_phase_sel_width                     1
#define tx_tdr_phase_sel_endbit                    9
#define tx_tdr_phase_sel_shift                     6
#define tx_tdr_phase_sel_mask                      0x40


#define tx_tdr_pulse_offset_addr                   0b110001100
#define tx_tdr_pulse_offset_startbit               0
#define tx_tdr_pulse_offset_width                  15
#define tx_tdr_pulse_offset_endbit                 14
#define tx_tdr_pulse_offset_shift                  1
#define tx_tdr_pulse_offset_mask                   0xfffe


#define tx_tdr_pulse_width_addr                    0b110001101
#define tx_tdr_pulse_width_startbit                0
#define tx_tdr_pulse_width_width                   9
#define tx_tdr_pulse_width_endbit                  8
#define tx_tdr_pulse_width_shift                   7
#define tx_tdr_pulse_width_mask                    0xff80


#define tx_unload_clk_disable_addr                 0b010000100
#define tx_unload_clk_disable_startbit             8
#define tx_unload_clk_disable_width                1
#define tx_unload_clk_disable_endbit               8
#define tx_unload_clk_disable_shift                7
#define tx_unload_clk_disable_mask                 0x80


#define tx_unload_sel_addr                         0b010000100
#define tx_unload_sel_startbit                     10
#define tx_unload_sel_width                        3
#define tx_unload_sel_endbit                       12
#define tx_unload_sel_shift                        3
#define tx_unload_sel_mask                         0x38


#define tx_zcal_ans_not_found_error_addr           0b111100001
#define tx_zcal_ans_not_found_error_startbit       3
#define tx_zcal_ans_not_found_error_width          1
#define tx_zcal_ans_not_found_error_endbit         3
#define tx_zcal_ans_not_found_error_shift          12
#define tx_zcal_ans_not_found_error_mask           0x1000


#define tx_zcal_ans_range_error_addr               0b111100001
#define tx_zcal_ans_range_error_startbit           4
#define tx_zcal_ans_range_error_width              1
#define tx_zcal_ans_range_error_endbit             4
#define tx_zcal_ans_range_error_shift              11
#define tx_zcal_ans_range_error_mask               0x800


#define tx_zcal_busy_addr                          0b111100001
#define tx_zcal_busy_startbit                      1
#define tx_zcal_busy_width                         1
#define tx_zcal_busy_endbit                        1
#define tx_zcal_busy_shift                         14
#define tx_zcal_busy_mask                          0x4000


#define tx_zcal_cmp_out_addr                       0b111100001
#define tx_zcal_cmp_out_startbit                   7
#define tx_zcal_cmp_out_width                      1
#define tx_zcal_cmp_out_endbit                     7
#define tx_zcal_cmp_out_shift                      8
#define tx_zcal_cmp_out_mask                       0x100


#define tx_zcal_cya_data_inv_addr                  0b111100110
#define tx_zcal_cya_data_inv_startbit              9
#define tx_zcal_cya_data_inv_width                 1
#define tx_zcal_cya_data_inv_endbit                9
#define tx_zcal_cya_data_inv_shift                 6
#define tx_zcal_cya_data_inv_mask                  0x40


#define tx_zcal_done_addr                          0b111100001
#define tx_zcal_done_startbit                      0
#define tx_zcal_done_width                         1
#define tx_zcal_done_endbit                        0
#define tx_zcal_done_shift                         15
#define tx_zcal_done_mask                          0x8000


#define tx_zcal_error_addr                         0b111100001
#define tx_zcal_error_startbit                     2
#define tx_zcal_error_width                        1
#define tx_zcal_error_endbit                       2
#define tx_zcal_error_shift                        13
#define tx_zcal_error_mask                         0x2000


#define tx_zcal_force_sample_addr                  0b111100000
#define tx_zcal_force_sample_startbit              1
#define tx_zcal_force_sample_width                 1
#define tx_zcal_force_sample_endbit                1
#define tx_zcal_force_sample_shift                 14
#define tx_zcal_force_sample_mask                  0x4000


#define tx_zcal_n_addr                             0b111100011
#define tx_zcal_n_startbit                         0
#define tx_zcal_n_width                            9
#define tx_zcal_n_endbit                           8
#define tx_zcal_n_shift                            7
#define tx_zcal_n_mask                             0xff80


#define tx_zcal_p_addr                             0b111100100
#define tx_zcal_p_startbit                         0
#define tx_zcal_p_width                            9
#define tx_zcal_p_endbit                           8
#define tx_zcal_p_shift                            7
#define tx_zcal_p_mask                             0xff80


#define tx_zcal_p_4x_addr                          0b111100101
#define tx_zcal_p_4x_startbit                      0
#define tx_zcal_p_4x_width                         5
#define tx_zcal_p_4x_endbit                        4
#define tx_zcal_p_4x_shift                         11
#define tx_zcal_p_4x_mask                          0xf800


#define tx_zcal_range_check_addr                   0b111100110
#define tx_zcal_range_check_startbit               8
#define tx_zcal_range_check_width                  1
#define tx_zcal_range_check_endbit                 8
#define tx_zcal_range_check_shift                  7
#define tx_zcal_range_check_mask                   0x80


#define tx_zcal_req_addr                           0b111100000
#define tx_zcal_req_startbit                       0
#define tx_zcal_req_width                          1
#define tx_zcal_req_endbit                         0
#define tx_zcal_req_shift                          15
#define tx_zcal_req_mask                           0x8000


#define tx_zcal_sample_cnt_addr                    0b111100010
#define tx_zcal_sample_cnt_startbit                0
#define tx_zcal_sample_cnt_width                   10
#define tx_zcal_sample_cnt_endbit                  9
#define tx_zcal_sample_cnt_shift                   6
#define tx_zcal_sample_cnt_mask                    0xffc0


#define tx_zcal_sm_max_val_addr                    0b111100111
#define tx_zcal_sm_max_val_startbit                7
#define tx_zcal_sm_max_val_width                   7
#define tx_zcal_sm_max_val_endbit                  13
#define tx_zcal_sm_max_val_shift                   2
#define tx_zcal_sm_max_val_mask                    0x1fc


#define tx_zcal_sm_min_val_addr                    0b111100111
#define tx_zcal_sm_min_val_startbit                0
#define tx_zcal_sm_min_val_width                   7
#define tx_zcal_sm_min_val_endbit                  6
#define tx_zcal_sm_min_val_shift                   9
#define tx_zcal_sm_min_val_mask                    0xfe00


#define tx_zcal_swo_cal_segs_addr                  0b111100110
#define tx_zcal_swo_cal_segs_startbit              1
#define tx_zcal_swo_cal_segs_width                 1
#define tx_zcal_swo_cal_segs_endbit                1
#define tx_zcal_swo_cal_segs_shift                 14
#define tx_zcal_swo_cal_segs_mask                  0x4000


#define tx_zcal_swo_cmp_inv_addr                   0b111100110
#define tx_zcal_swo_cmp_inv_startbit               2
#define tx_zcal_swo_cmp_inv_width                  1
#define tx_zcal_swo_cmp_inv_endbit                 2
#define tx_zcal_swo_cmp_inv_shift                  13
#define tx_zcal_swo_cmp_inv_mask                   0x2000


#define tx_zcal_swo_cmp_offset_addr                0b111100110
#define tx_zcal_swo_cmp_offset_startbit            3
#define tx_zcal_swo_cmp_offset_width               1
#define tx_zcal_swo_cmp_offset_endbit              3
#define tx_zcal_swo_cmp_offset_shift               12
#define tx_zcal_swo_cmp_offset_mask                0x1000


#define tx_zcal_swo_cmp_reset_addr                 0b111100110
#define tx_zcal_swo_cmp_reset_startbit             4
#define tx_zcal_swo_cmp_reset_width                1
#define tx_zcal_swo_cmp_reset_endbit               4
#define tx_zcal_swo_cmp_reset_shift                11
#define tx_zcal_swo_cmp_reset_mask                 0x800


#define tx_zcal_swo_en_addr                        0b111100110
#define tx_zcal_swo_en_startbit                    0
#define tx_zcal_swo_en_width                       1
#define tx_zcal_swo_en_endbit                      0
#define tx_zcal_swo_en_shift                       15
#define tx_zcal_swo_en_mask                        0x8000


#define tx_zcal_swo_imp_cntl_1r_1xn_0_15_addr      0b111101000
#define tx_zcal_swo_imp_cntl_1r_1xn_0_15_startbit   0
#define tx_zcal_swo_imp_cntl_1r_1xn_0_15_width     16
#define tx_zcal_swo_imp_cntl_1r_1xn_0_15_endbit    15
#define tx_zcal_swo_imp_cntl_1r_1xn_0_15_shift     0
#define tx_zcal_swo_imp_cntl_1r_1xn_0_15_mask      0xffff


#define tx_zcal_swo_imp_cntl_1r_1xn_16_31_addr     0b111101001
#define tx_zcal_swo_imp_cntl_1r_1xn_16_31_startbit   0
#define tx_zcal_swo_imp_cntl_1r_1xn_16_31_width    16
#define tx_zcal_swo_imp_cntl_1r_1xn_16_31_endbit   15
#define tx_zcal_swo_imp_cntl_1r_1xn_16_31_shift    0
#define tx_zcal_swo_imp_cntl_1r_1xn_16_31_mask     0xffff


#define tx_zcal_swo_imp_cntl_1r_1xn_32_39_addr     0b111101010
#define tx_zcal_swo_imp_cntl_1r_1xn_32_39_startbit   0
#define tx_zcal_swo_imp_cntl_1r_1xn_32_39_width    8
#define tx_zcal_swo_imp_cntl_1r_1xn_32_39_endbit   7
#define tx_zcal_swo_imp_cntl_1r_1xn_32_39_shift    8
#define tx_zcal_swo_imp_cntl_1r_1xn_32_39_mask     0xff00


#define tx_zcal_swo_imp_cntl_1r_1xp_0_15_addr      0b111101011
#define tx_zcal_swo_imp_cntl_1r_1xp_0_15_startbit   0
#define tx_zcal_swo_imp_cntl_1r_1xp_0_15_width     16
#define tx_zcal_swo_imp_cntl_1r_1xp_0_15_endbit    15
#define tx_zcal_swo_imp_cntl_1r_1xp_0_15_shift     0
#define tx_zcal_swo_imp_cntl_1r_1xp_0_15_mask      0xffff


#define tx_zcal_swo_imp_cntl_1r_1xp_16_31_addr     0b111101100
#define tx_zcal_swo_imp_cntl_1r_1xp_16_31_startbit   0
#define tx_zcal_swo_imp_cntl_1r_1xp_16_31_width    16
#define tx_zcal_swo_imp_cntl_1r_1xp_16_31_endbit   15
#define tx_zcal_swo_imp_cntl_1r_1xp_16_31_shift    0
#define tx_zcal_swo_imp_cntl_1r_1xp_16_31_mask     0xffff


#define tx_zcal_swo_imp_cntl_1r_1xp_32_39_addr     0b111101101
#define tx_zcal_swo_imp_cntl_1r_1xp_32_39_startbit   0
#define tx_zcal_swo_imp_cntl_1r_1xp_32_39_width    8
#define tx_zcal_swo_imp_cntl_1r_1xp_32_39_endbit   7
#define tx_zcal_swo_imp_cntl_1r_1xp_32_39_shift    8
#define tx_zcal_swo_imp_cntl_1r_1xp_32_39_mask     0xff00


#define tx_zcal_swo_imp_cntl_1r_4xn_addr           0b111101110
#define tx_zcal_swo_imp_cntl_1r_4xn_startbit       10
#define tx_zcal_swo_imp_cntl_1r_4xn_width          1
#define tx_zcal_swo_imp_cntl_1r_4xn_endbit         10
#define tx_zcal_swo_imp_cntl_1r_4xn_shift          5
#define tx_zcal_swo_imp_cntl_1r_4xn_mask           0x20


#define tx_zcal_swo_imp_cntl_1r_4xp_addr           0b111101110
#define tx_zcal_swo_imp_cntl_1r_4xp_startbit       0
#define tx_zcal_swo_imp_cntl_1r_4xp_width          10
#define tx_zcal_swo_imp_cntl_1r_4xp_endbit         9
#define tx_zcal_swo_imp_cntl_1r_4xp_shift          6
#define tx_zcal_swo_imp_cntl_1r_4xp_mask           0xffc0


#define tx_zcal_swo_imp_cntl_2r_1xn_addr           0b111101110
#define tx_zcal_swo_imp_cntl_2r_1xn_startbit       12
#define tx_zcal_swo_imp_cntl_2r_1xn_width          1
#define tx_zcal_swo_imp_cntl_2r_1xn_endbit         12
#define tx_zcal_swo_imp_cntl_2r_1xn_shift          3
#define tx_zcal_swo_imp_cntl_2r_1xn_mask           0x8


#define tx_zcal_swo_imp_cntl_2r_1xp_addr           0b111101110
#define tx_zcal_swo_imp_cntl_2r_1xp_startbit       11
#define tx_zcal_swo_imp_cntl_2r_1xp_width          1
#define tx_zcal_swo_imp_cntl_2r_1xp_endbit         11
#define tx_zcal_swo_imp_cntl_2r_1xp_shift          4
#define tx_zcal_swo_imp_cntl_2r_1xp_mask           0x10


#define tx_zcal_swo_powerdown_addr                 0b111100110
#define tx_zcal_swo_powerdown_startbit             5
#define tx_zcal_swo_powerdown_width                1
#define tx_zcal_swo_powerdown_endbit               5
#define tx_zcal_swo_powerdown_shift                10
#define tx_zcal_swo_powerdown_mask                 0x400


#define tx_zcal_swo_tcoil_addr                     0b111100110
#define tx_zcal_swo_tcoil_startbit                 6
#define tx_zcal_swo_tcoil_width                    1
#define tx_zcal_swo_tcoil_endbit                   6
#define tx_zcal_swo_tcoil_shift                    9
#define tx_zcal_swo_tcoil_mask                     0x200


#define tx_zcal_test_clk_div_addr                  0b111100110
#define tx_zcal_test_clk_div_startbit              13
#define tx_zcal_test_clk_div_width                 2
#define tx_zcal_test_clk_div_endbit                14
#define tx_zcal_test_clk_div_shift                 1
#define tx_zcal_test_clk_div_mask                  0x6


#define tx_zcal_test_done_addr                     0b111100001
#define tx_zcal_test_done_startbit                 5
#define tx_zcal_test_done_width                    1
#define tx_zcal_test_done_endbit                   5
#define tx_zcal_test_done_shift                    10
#define tx_zcal_test_done_mask                     0x400


#define tx_zcal_test_enable_addr                   0b111100000
#define tx_zcal_test_enable_startbit               2
#define tx_zcal_test_enable_width                  1
#define tx_zcal_test_enable_endbit                 2
#define tx_zcal_test_enable_shift                  13
#define tx_zcal_test_enable_mask                   0x2000


#define tx_zcal_test_ovr_1r_addr                   0b111100110
#define tx_zcal_test_ovr_1r_startbit               11
#define tx_zcal_test_ovr_1r_width                  1
#define tx_zcal_test_ovr_1r_endbit                 11
#define tx_zcal_test_ovr_1r_shift                  4
#define tx_zcal_test_ovr_1r_mask                   0x10


#define tx_zcal_test_ovr_2r_addr                   0b111100110
#define tx_zcal_test_ovr_2r_startbit               10
#define tx_zcal_test_ovr_2r_width                  1
#define tx_zcal_test_ovr_2r_endbit                 10
#define tx_zcal_test_ovr_2r_shift                  5
#define tx_zcal_test_ovr_2r_mask                   0x20


#define tx_zcal_test_ovr_4x_seg_addr               0b111100110
#define tx_zcal_test_ovr_4x_seg_startbit           12
#define tx_zcal_test_ovr_4x_seg_width              1
#define tx_zcal_test_ovr_4x_seg_endbit             12
#define tx_zcal_test_ovr_4x_seg_shift              3
#define tx_zcal_test_ovr_4x_seg_mask               0x8


#define tx_zcal_test_status_addr                   0b111100001
#define tx_zcal_test_status_startbit               6
#define tx_zcal_test_status_width                  1
#define tx_zcal_test_status_endbit                 6
#define tx_zcal_test_status_shift                  9
#define tx_zcal_test_status_mask                   0x200


#define zcal_clr_par_errs_addr                     0b111110000
#define zcal_clr_par_errs_startbit                 14
#define zcal_clr_par_errs_width                    1
#define zcal_clr_par_errs_endbit                   14
#define zcal_clr_par_errs_shift                    1
#define zcal_clr_par_errs_mask                     0x2


#define zcal_clr_par_errs_and_fir_reset_alias_addr   0b111110000
#define zcal_clr_par_errs_and_fir_reset_alias_startbit   14
#define zcal_clr_par_errs_and_fir_reset_alias_width   2
#define zcal_clr_par_errs_and_fir_reset_alias_endbit   15
#define zcal_clr_par_errs_and_fir_reset_alias_shift   0
#define zcal_clr_par_errs_and_fir_reset_alias_mask   0x3


#define zcal_fir_err_inj_addr                      0b111110011
#define zcal_fir_err_inj_startbit                  0
#define zcal_fir_err_inj_width                     2
#define zcal_fir_err_inj_endbit                    1
#define zcal_fir_err_inj_shift                     14
#define zcal_fir_err_inj_mask                      0xc000


#define zcal_fir_err_inj_full_reg_addr             0b111110011
#define zcal_fir_err_inj_full_reg_startbit         0
#define zcal_fir_err_inj_full_reg_width            16
#define zcal_fir_err_inj_full_reg_endbit           15
#define zcal_fir_err_inj_full_reg_shift            0
#define zcal_fir_err_inj_full_reg_mask             0xffff


#define zcal_fir_err_inj_zcal_regs_addr            0b111110011
#define zcal_fir_err_inj_zcal_regs_startbit        0
#define zcal_fir_err_inj_zcal_regs_width           1
#define zcal_fir_err_inj_zcal_regs_endbit          0
#define zcal_fir_err_inj_zcal_regs_shift           15
#define zcal_fir_err_inj_zcal_regs_mask            0x8000


#define zcal_fir_err_inj_zcal_sm_addr              0b111110011
#define zcal_fir_err_inj_zcal_sm_startbit          1
#define zcal_fir_err_inj_zcal_sm_width             1
#define zcal_fir_err_inj_zcal_sm_endbit            1
#define zcal_fir_err_inj_zcal_sm_shift             14
#define zcal_fir_err_inj_zcal_sm_mask              0x4000


#define zcal_fir_err_mask_zcal_regs_addr           0b111110010
#define zcal_fir_err_mask_zcal_regs_startbit       0
#define zcal_fir_err_mask_zcal_regs_width          1
#define zcal_fir_err_mask_zcal_regs_endbit         0
#define zcal_fir_err_mask_zcal_regs_shift          15
#define zcal_fir_err_mask_zcal_regs_mask           0x8000


#define zcal_fir_err_mask_zcal_sm_addr             0b111110010
#define zcal_fir_err_mask_zcal_sm_startbit         1
#define zcal_fir_err_mask_zcal_sm_width            1
#define zcal_fir_err_mask_zcal_sm_endbit           1
#define zcal_fir_err_mask_zcal_sm_shift            14
#define zcal_fir_err_mask_zcal_sm_mask             0x4000


#define zcal_fir_err_zcal_regs_addr                0b111110001
#define zcal_fir_err_zcal_regs_startbit            0
#define zcal_fir_err_zcal_regs_width               1
#define zcal_fir_err_zcal_regs_endbit              0
#define zcal_fir_err_zcal_regs_shift               15
#define zcal_fir_err_zcal_regs_mask                0x8000


#define zcal_fir_err_zcal_sm_addr                  0b111110001
#define zcal_fir_err_zcal_sm_startbit              1
#define zcal_fir_err_zcal_sm_width                 1
#define zcal_fir_err_zcal_sm_endbit                1
#define zcal_fir_err_zcal_sm_shift                 14
#define zcal_fir_err_zcal_sm_mask                  0x4000


#define zcal_fir_errs_addr                         0b111110001
#define zcal_fir_errs_startbit                     0
#define zcal_fir_errs_width                        2
#define zcal_fir_errs_endbit                       1
#define zcal_fir_errs_shift                        14
#define zcal_fir_errs_mask                         0xc000


#define zcal_fir_errs_full_reg_addr                0b111110001
#define zcal_fir_errs_full_reg_startbit            0
#define zcal_fir_errs_full_reg_width               16
#define zcal_fir_errs_full_reg_endbit              15
#define zcal_fir_errs_full_reg_shift               0
#define zcal_fir_errs_full_reg_mask                0xffff


#define zcal_fir_errs_mask_addr                    0b111110010
#define zcal_fir_errs_mask_startbit                0
#define zcal_fir_errs_mask_width                   2
#define zcal_fir_errs_mask_endbit                  1
#define zcal_fir_errs_mask_shift                   14
#define zcal_fir_errs_mask_mask                    0xc000


#define zcal_fir_errs_mask_full_reg_addr           0b111110010
#define zcal_fir_errs_mask_full_reg_startbit       0
#define zcal_fir_errs_mask_full_reg_width          16
#define zcal_fir_errs_mask_full_reg_endbit         15
#define zcal_fir_errs_mask_full_reg_shift          0
#define zcal_fir_errs_mask_full_reg_mask           0xffff


#define zcal_fir_reset_addr                        0b111110000
#define zcal_fir_reset_startbit                    15
#define zcal_fir_reset_width                       1
#define zcal_fir_reset_endbit                      15
#define zcal_fir_reset_shift                       0
#define zcal_fir_reset_mask                        0x1


#endif //_PPE_COM_REG_CONST_PKG_H_

