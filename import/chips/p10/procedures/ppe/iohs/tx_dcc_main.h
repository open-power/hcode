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
// gap19073000 |gap     | Updated to use modified dcdet circuitry and associated state machine
// gap19061300 |gap     | Added wait time for auto zero
// gap19030600 |gap     | Redefined dcc_min_iq_c and dcc_max_iq_c to values used in code
// gap19022800 |gap     | Corrected dcc_max_iq_c value
// vbr18081500 |vbr     | Removed return code constants replicated from eo_common.h
// gap18043000 |gap     | Initial Rev
// -----------------------------------------------------------------------------

#ifndef _TX_DCC_MAIN_H_
#define _TX_DCC_MAIN_H_

// Design parameters
#define tx_dcc_main_max_i_c 31
#define tx_dcc_main_max_q_c 31
#define tx_dcc_main_max_iq_c 16

#define tx_dcc_main_min_i_c -32
#define tx_dcc_main_min_q_c -32
#define tx_dcc_main_min_iq_c -15

#define tx_dcc_main_dir_i_c  1 /* 1 increments tune_i  when p_lt_n, -1 decrements it */
#define tx_dcc_main_dir_q_c  1 /* 1 increments tune_q  when p_lt_n, -1 decrements it */
#define tx_dcc_main_dir_iq_c 1 /* 1 increments tune_iq when p_lt_n, -1 decrements it */

#define tx_dcc_main_max_step_i_c 4    /* maximum  i_tune step size used, must be power of 2 */
#define tx_dcc_main_max_step_q_c 4    /* maximum  q_tune step size used, must be power of 2 */
#define tx_dcc_main_max_step_iq_c 4   /* maximum iq_tune step size used, must be power of 2 */

#define tx_dcc_main_wait_tune_us_c  1 /* time from tune bit change to first cal edge                */

#define tx_dcc_main_min_samples_c 128 /* minimum total number of total votes before decision <= 128 */
#define tx_dcc_main_ratio_thresh_c 2  /* one vote must be 2^this value times the other to move      */

// types of servo ops
typedef enum
{
    SERVOOP_Q,
    SERVOOP_I,
    SERVOOP_IQ
} t_servoop;

// result of accumulated samples
typedef enum
{
    COMP_RESULT_P_GT_N,
    COMP_RESULT_P_NEAR_N,
    COMP_RESULT_P_LT_N,
} t_comp_result;

// Run Duty cycle initialzation
void tx_dcc_main_init(t_gcr_addr* gcr_addr_i);

// Run Duty cycle adjustment
int tx_dcc_main_adjust(t_gcr_addr* gcr_addr_i);

// Run Duty cycle servo
void tx_dcc_main_servo(t_gcr_addr* gcr_addr_i, uint32_t step_size_i, int32_t dir_i, t_servoop op_i, int32_t min_tune_i,
                       int32_t max_tune_i, uint32_t min_samples_i,
                       int32_t ratio_thresh_i);

t_comp_result tx_dcc_main_compare_result(t_gcr_addr* gcr_addr_i, uint32_t min_samples_i, int32_t ratio_thresh_i);

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
