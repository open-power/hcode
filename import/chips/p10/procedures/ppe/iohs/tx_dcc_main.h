/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/tx_dcc_main.h $          */
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
// *!---------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2016
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
// *!---------------------------------------------------------------------------
// *! FILENAME    : tx_dcc_main.h
// *! TITLE       :
// *! DESCRIPTION :
// *!
// *! OWNER NAME  : Gary Peterson       Email: garyp@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// gap19061300 |gap     | Added wait time for auto zero
// gap19030600 |gap     | Redefined dcc_min_iq_c and dcc_max_iq_c to values used in code
// gap19022800 |gap     | Corrected dcc_max_iq_c value
// vbr18081500 |vbr     | Removed return code constants replicated from eo_common.h
// gap18043000 |gap     | Initial Rev
// -----------------------------------------------------------------------------

#ifndef _TX_DCC_MAIN_H_
#define _TX_DCC_MAIN_H_

// Design parameters
#define tx_dcc_max_i_c 31
#define tx_dcc_max_q_c 31
#define tx_dcc_max_iq_c 16

#define tx_dcc_min_i_c -32
#define tx_dcc_min_q_c -32
#define tx_dcc_min_iq_c -15

#define tx_dcc_dir_i_c  1 /* 1 increments tune_i  when dccout is 0, -1 decrements it */
#define tx_dcc_dir_q_c  1 /* 1 increments tune_q  when dccout is 0, -1 decrements it */
#define tx_dcc_dir_iq_c 1 /* 1 increments tune_iq when dccout is 0, -1 decrements it */

#define tx_dcc_main_az_wait_init_us_c  9 /* time from init az to read compare minus servo        */
#define tx_dcc_main_az_wait_servo_us_c 1 /* time from subsequent az to read compare              */

// types of servo ops
typedef enum
{
    SERVOOP_Q,
    SERVOOP_I,
    SERVOOP_IQ
} t_servoop;

// Run Duty cycle initialzation
void tx_dcc_main_init(t_gcr_addr* gcr_addr_i);

// Run Duty cycle adjustment
int tx_dcc_main_adjust(t_gcr_addr* gcr_addr_i);

// Run Duty cycle servo to
void tx_dcc_main_servo(t_gcr_addr* gcr_addr_i, uint32_t step_size_i, int32_t tx_dcc_servo_dir_i, t_servoop op_i,
                       int32_t tune_min_i, int32_t tune_max_i);

#define put_ptr_field_twoscomp(gcr_addr, reg, data, rmw) put_ptr(gcr_addr, reg##_addr, reg##_startbit, reg##_endbit, data & ((1 << reg##_width) - 1), rmw)

////////////////////////////////////////////////////////////////////////////////////////////
// DEBUG FUNCTIONS
// Some functions and macros to help in debugging.
// These are light weight but the code size and performance hit can add up,
// so allow for a compiler option to disable (IO_DISABLE_DEBUG).
////////////////////////////////////////////////////////////////////////////////////////////
#if IO_DISABLE_DEBUG == 1
    #define set_rx_dcc_debug(marker, value) {}
#else
    // This writes a "marker" followed by a value "value" to the mem_regs which can be used for tracking execution value.
    #define set_rx_dcc_debug(marker, value) { mem_regs_u16[pg_addr(rx_dcc_debug_addr)] = (marker);  mem_regs_u16[pg_addr(rx_dcc_debug_addr)] = (value); }
#endif //DISABLE_IO_DEBUG
#endif //_TX_DCC_MAIN_H_
