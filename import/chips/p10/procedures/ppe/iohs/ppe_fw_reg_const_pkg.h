/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/ppe_fw_reg_const_pkg.h $ */
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

#ifndef _PPE_FW_REG_CONST_PKG_H_
#define _PPE_FW_REG_CONST_PKG_H_



#define fw_gcr_bus_id_addr                         0b000000001
#define fw_gcr_bus_id_startbit                     0
#define fw_gcr_bus_id_width                        6
#define fw_gcr_bus_id_endbit                       5
#define fw_gcr_bus_id_shift                        10
#define fw_gcr_bus_id_mask                         0xfc00


#define fw_num_lanes_addr                          0b000000001
#define fw_num_lanes_startbit                      8
#define fw_num_lanes_width                         5
#define fw_num_lanes_endbit                        12
#define fw_num_lanes_shift                         3
#define fw_num_lanes_mask                          0xf8


#define fw_serdes_16_to_1_mode_addr                0b000000001
#define fw_serdes_16_to_1_mode_startbit            6
#define fw_serdes_16_to_1_mode_width               1
#define fw_serdes_16_to_1_mode_endbit              6
#define fw_serdes_16_to_1_mode_shift               9
#define fw_serdes_16_to_1_mode_mask                0x200


#define fw_stop_thread_addr                        0b000000000
#define fw_stop_thread_startbit                    0
#define fw_stop_thread_width                       1
#define fw_stop_thread_endbit                      0
#define fw_stop_thread_shift                       15
#define fw_stop_thread_mask                        0x8000


#define fw_thread_stopped_addr                     0b000000100
#define fw_thread_stopped_startbit                 0
#define fw_thread_stopped_width                    1
#define fw_thread_stopped_endbit                   0
#define fw_thread_stopped_shift                    15
#define fw_thread_stopped_mask                     0x8000


#endif //_PPE_FW_REG_CONST_PKG_H_
