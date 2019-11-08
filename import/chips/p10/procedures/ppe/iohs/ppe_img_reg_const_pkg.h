/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/ppe_img_reg_const_pkg.h $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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

#ifndef _PPE_IMG_REG_CONST_PKG_H_
#define _PPE_IMG_REG_CONST_PKG_H_



#define ppe_current_thread_addr                    0b000000100
#define ppe_current_thread_startbit                0
#define ppe_current_thread_width                   3
#define ppe_current_thread_endbit                  2
#define ppe_current_thread_shift                   13
#define ppe_current_thread_mask                    0xe000


#define ppe_error_lane_addr                        0b000000111
#define ppe_error_lane_startbit                    4
#define ppe_error_lane_width                       5
#define ppe_error_lane_endbit                      8
#define ppe_error_lane_shift                       7
#define ppe_error_lane_mask                        0xf80


#define ppe_error_state_addr                       0b000001000
#define ppe_error_state_startbit                   0
#define ppe_error_state_width                      16
#define ppe_error_state_endbit                     15
#define ppe_error_state_shift                      0
#define ppe_error_state_mask                       0xffff


#define ppe_error_thread_addr                      0b000000111
#define ppe_error_thread_startbit                  1
#define ppe_error_thread_width                     3
#define ppe_error_thread_endbit                    3
#define ppe_error_thread_shift                     12
#define ppe_error_thread_mask                      0x7000


#define ppe_error_valid_addr                       0b000000111
#define ppe_error_valid_startbit                   0
#define ppe_error_valid_width                      1
#define ppe_error_valid_endbit                     0
#define ppe_error_valid_shift                      15
#define ppe_error_valid_mask                       0x8000


#define ppe_num_threads_addr                       0b000000000
#define ppe_num_threads_startbit                   0
#define ppe_num_threads_width                      3
#define ppe_num_threads_endbit                     2
#define ppe_num_threads_shift                      13
#define ppe_num_threads_mask                       0xe000


#define ppe_tx_zcal_busy_addr                      0b000000100
#define ppe_tx_zcal_busy_startbit                  4
#define ppe_tx_zcal_busy_width                     1
#define ppe_tx_zcal_busy_endbit                    4
#define ppe_tx_zcal_busy_shift                     11
#define ppe_tx_zcal_busy_mask                      0x800


#define ppe_tx_zcal_busy_done_alias_addr           0b000000100
#define ppe_tx_zcal_busy_done_alias_startbit       4
#define ppe_tx_zcal_busy_done_alias_width          2
#define ppe_tx_zcal_busy_done_alias_endbit         5
#define ppe_tx_zcal_busy_done_alias_shift          10
#define ppe_tx_zcal_busy_done_alias_mask           0xc00


#define ppe_tx_zcal_busy_done_error_alias_addr     0b000000100
#define ppe_tx_zcal_busy_done_error_alias_startbit   4
#define ppe_tx_zcal_busy_done_error_alias_width    3
#define ppe_tx_zcal_busy_done_error_alias_endbit   6
#define ppe_tx_zcal_busy_done_error_alias_shift    9
#define ppe_tx_zcal_busy_done_error_alias_mask     0xe00


#define ppe_tx_zcal_done_addr                      0b000000100
#define ppe_tx_zcal_done_startbit                  5
#define ppe_tx_zcal_done_width                     1
#define ppe_tx_zcal_done_endbit                    5
#define ppe_tx_zcal_done_shift                     10
#define ppe_tx_zcal_done_mask                      0x400


#define ppe_tx_zcal_done_error_alias_addr          0b000000100
#define ppe_tx_zcal_done_error_alias_startbit      5
#define ppe_tx_zcal_done_error_alias_width         2
#define ppe_tx_zcal_done_error_alias_endbit        6
#define ppe_tx_zcal_done_error_alias_shift         9
#define ppe_tx_zcal_done_error_alias_mask          0x600


#define ppe_tx_zcal_error_addr                     0b000000100
#define ppe_tx_zcal_error_startbit                 6
#define ppe_tx_zcal_error_width                    1
#define ppe_tx_zcal_error_endbit                   6
#define ppe_tx_zcal_error_shift                    9
#define ppe_tx_zcal_error_mask                     0x200


#define ppe_tx_zcal_n_addr                         0b000000101
#define ppe_tx_zcal_n_startbit                     0
#define ppe_tx_zcal_n_width                        9
#define ppe_tx_zcal_n_endbit                       8
#define ppe_tx_zcal_n_shift                        7
#define ppe_tx_zcal_n_mask                         0xff80


#define ppe_tx_zcal_p_addr                         0b000000110
#define ppe_tx_zcal_p_startbit                     0
#define ppe_tx_zcal_p_width                        9
#define ppe_tx_zcal_p_endbit                       8
#define ppe_tx_zcal_p_shift                        7
#define ppe_tx_zcal_p_mask                         0xff80


#define ppe_tx_zcal_req_addr                       0b000000001
#define ppe_tx_zcal_req_startbit                   1
#define ppe_tx_zcal_req_width                      1
#define ppe_tx_zcal_req_endbit                     1
#define ppe_tx_zcal_req_shift                      14
#define ppe_tx_zcal_req_mask                       0x4000


#define ucontroller_test_en_addr                   0b000000001
#define ucontroller_test_en_startbit               0
#define ucontroller_test_en_width                  1
#define ucontroller_test_en_endbit                 0
#define ucontroller_test_en_shift                  15
#define ucontroller_test_en_mask                   0x8000


#define ucontroller_test_stat_addr                 0b000000100
#define ucontroller_test_stat_startbit             3
#define ucontroller_test_stat_width                1
#define ucontroller_test_stat_endbit               3
#define ucontroller_test_stat_shift                12
#define ucontroller_test_stat_mask                 0x1000


#endif //_PPE_IMG_REG_CONST_PKG_H_

