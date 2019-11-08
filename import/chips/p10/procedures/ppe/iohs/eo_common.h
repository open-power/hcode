/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_common.h $            */
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
// *! FILENAME    : eo_common.h
// *! TITLE       :
// *! DESCRIPTION : Common functions and defines for eyeopt steps
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// vbr19060300 |vbr     | HW486157/HW492011: Added DL/RLM clock_sel to set_cal_bank()
// mbs10051600 |mbs     | HW491617: Separated servo setup for dfe_fast and dfe_full
// vbr19012200 |vbr     | Only check recal abort when init_done.
// vbr18100200 |vbr     | wait_for_cdr_lock() now has an option to set the fir on a lock fail.
// cws18092600 |cws     | Added rx_eo_servo_setup()
// vbr18081500 |vbr     | Updated return codes
// jfg18082000 |jfg     | Expand pr constants to normal 0/31
// jfg18080300 |jfg     | Add phase rotator count limit constant
// vbr18033100 |vbr     | Updated CDR controls.
// vbr18022000 |vbr     | Updating CDR controls.
// vbr17081400 |vbr     | Changed t_bank to an enumerated type and removed edge bank.
// vbr17052400 |vbr     | Removed some unused defines. Renamed type latch_bank to t_bank.
// vbr17051800 |vbr     | Remove IOF code.
// vbr17022200 |vbr     | Added function to adjust latch offset.
// mtk16100600 |mtk     | Added sls_valid_cmd_rcv checker function
// mtk16093000 |mtk     | Used SLS structs throughout SLS functions
// mtk16092900 |mtk     | Added function to calculate the SLS sleep count wait
// vbr16082500 |vbr     | Moved recal check out of check_rx_abort_base into wrapper macro
// vbr16081800 |vbr     | Moved some functions from eo_common to io_lib (and renamed some).
// vbr16080800 |vbr     | Minor changes to reduce code size of switch_cal_bank/set_cal_bank
// vbr16080100 |vbr     | Alternative version/wrapper of io_spin that uses UI instead of cycles or microseconds.
// vbr16072901 |vbr     | Fixed io_spin to account for the fact that branch instructions take 2 cycles.
// vbr16072900 |vbr     | Changes to properly handle different clock rate in half_rate (4:1) mode
// vbr16072800 |vbr     | Changed latch_bank from an enum to an integer so it can be used for forming servo ops (similar to HW)
// vbr16072600 |vbr     | Removed Debruijn array constant
// vbr16072100 |vbr     | Added get_bad_lanes()
// vbr16072000 |vbr     | set_cal_bank is no longer inline (fairly large & wasn't inlining anyways).
// vbr16071400 |vbr     | io_wait() is no longer valid for IOO (IOF only)
// vbr16071300 |vbr     | io_wait() is no longer inline and added us/ms wrappers
// vbr16071100 |vbr     | Added io_wait_us()
// vbr16062700 |vbr     | Switch to gcr_addr functions
// mbs16062400 |mbs     | Added gcr_addr struct
// vbr16061300 |vbr     | Added get_enabled_lanes()
// vbr16060800 |vbr     | Updated return codes
// vbr16060700 |vbr     | io_sleep() & run_servo_op_and_get_result() are no longer inline; simplified the sign-extension functions
// mtk16060200 |mtk     | Fixed shift up in io_set_rx_cal_ln function
// vbr16060100 |vbr     | Added register read (instead of constant) for num_threads
// vbr16051600 |vbr     | Fixed io_spin so it does not get optimized out.
// vbr16050500 |vbr     | Moved mem_regs and various functions from eo_common to io_lib
// vbr16042800 |vbr     | Thread efficiency improvements (experiments)
// vbr16042700 |vbr     | Multithreaded (initial round-robin implementation)
// vbr16042100 |vbr     | Moved some constants to io_lib.h
// vbr16042001 |vbr     | Switching abs, min, max from macros to inline functions
// vbr16042000 |vbr     | Macro updates for better grouping (all) and preventing double evaluations (abs,min,max)
// vbr16041900 |vbr     | Updates for multiple threads/groups on IOF
// vbr16040801 |vbr     | changed some macro's to inline functions
// vbr16040800 |vbr     | run_servo_op_and_get_result returns two's complement now
// vbr16032500 |vbr     | Added macros for bit set/clr, work reg read/write
// vbr16031700 |vbr     | Moved some functions from inline to non-inline
// vbr16021600 |vbr     | Initial Rev
// -----------------------------------------------------------------------------

#ifndef _EO_COMMON_H_
#define _EO_COMMON_H_

#include <stdbool.h>
#include <stdint.h>
//#include <stdlib.h> have had problems with abs() linking properly...

#include "io_lib.h"
#include "pk.h"

#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"


///////////////////////////////////////
// CONSTANTS & DEFINITIONS
///////////////////////////////////////

// Function Return Codes (see io_lib.h also).
// These are 1-hot error codes; pass_code must remain 0.
// error_code can be used to report fatal errors which results in skipping the remaining steps and not switching the bank in recal.
// warning_code can be used to report warnings (recoverable errors) which results in skipping the remaining steps and not switching the bank in recal.
// abort_code is used to indicate an recal_abort and will also result in skipping the remaining steps and not switching the bank.
#define pass_code     rc_no_error  //0x00
#define error_code    rc_error     //0x01
#define warning_code  rc_warning   //0x02
#define abort_code    0x04         //0x04

// Banks, t_cal_bank variable type and values (chosen to minimize code size); macros must match.
typedef enum
{
    bank_a = 0b010,
    bank_b = 0b101
} t_bank;
// Macro to convert bank value to the opposite bank value (A->B or B->A)
#define opposite_bank(input_bank) ((input_bank) ^ 0b111)
// Macro to convert cal_bank to the bank_sel_a/rlm_clk_sel_a/dl_clk_sel_a register values without using IF statements (branches).
//   The DL clock always comes from the Main bank and the RLM clock always comes from the Alt bank.
//   When Cal A: use B for main data, A for alt data. bank_sel_a=0; rlm_clk_sel_a=1; dl_clk_sel_a=0.
//   When Cal B: use A for main data, B for alt data. bank_sel_a=1; rlm_clk_sel_a=0; dl_clk_sel_a=1.
#define cal_bank_to_bank_rlmclk_dlclk_sel_a(cal_bank) ((cal_bank))

// Phase rotator size constants
#define pr_mini_min 0x00
#define pr_mini_max 0x1F
#define pr_mini_cen 0x10

// Making a procedure inline means that the compiled code is copied to the location it is used instead of having to jump to the code location.
// This saves a jump/return and should also save having to push values onto the stack (which is additional code).
// However, the code in an inline procedure gets repeated which potentially increases the binary size.
// In general, large procedures should never be inline; short procedures where you would spend more time pushing/jumping should be inline.
// If a function refers to its address, that function can not be inlined (compiler will give an error).
// For more info: https://gcc.gnu.org/onlinedocs/gcc/Inline.html

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// OTHER FUNCTIONS
// These all get used a fair amount so they should only be inline if they are very simple/short.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Set the bank to cal for IOO (A or B). Controls data and clock selects.
static inline void set_cal_bank(t_gcr_addr* gcr_addr, t_bank new_cal_bank)
{
    unsigned int bank_rlmclk_dlclk_sel_a = cal_bank_to_bank_rlmclk_dlclk_sel_a(new_cal_bank);
    put_ptr_field(gcr_addr, rx_bank_rlmclk_dlclk_sel_a_alias, bank_rlmclk_dlclk_sel_a, read_modify_write);
}

// Switch the bank between A & B (IOO Only). Does so little that inline makes sense.
static inline t_bank switch_cal_bank(t_gcr_addr* gcr_addr, t_bank current_cal_bank)
{
    t_bank new_cal_bank = opposite_bank(current_cal_bank);
    set_cal_bank(gcr_addr, new_cal_bank);
    return new_cal_bank;
}


// Wait for lock on both banks.
// Set FIR if not locked after timeout (optional).
// Lock could take relatively long due to spread spectrum, so use sleep in between checks.
int wait_for_cdr_lock(t_gcr_addr* gcr_addr, bool set_fir_on_error);

// Eyeopt abort check/handling. Call this a lot and does enough that inline is not the right option.
int check_rx_abort(t_gcr_addr* gcr_addr);

// Copy the cal results from source lane to destination lane to use as a starting point.
void eo_copy_lane_cal(t_gcr_addr* gcr_addr, int lane_src, int lane_dst);


typedef enum
{
    SERVO_SETUP_VGA = 0x00,
    SERVO_SETUP_DFE_FAST = 0x01,
    SERVO_SETUP_DFE_FULL = 0x02
} t_servo_setup;
void rx_eo_servo_setup(t_gcr_addr* i_tgt, const t_servo_setup i_servo_setup);

#endif //_EO_COMMON_H_

