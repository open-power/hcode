/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_common.c $            */
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
// *! FILENAME    : eo_common.c
// *! TITLE       :
// *! DESCRIPTION : Call the Eyeopt steps
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// mbs19051600 |mbs     | HW491617: Separated servo setup for dfe_fast and dfe_full
// vbr19050500 |vbr     | Copy LTE settings between lanes
// vbr19041500 |vbr     | Updated register names
// mbs19030400 |mbs     | Added set_fir call in check_rx_abort
// vbr19012200 |vbr     | Only check recal abort when init_done.
// cws19011300 |cws     | Updated dfe rx_eo_servo_setup inc2/dec2 to latest defaults
// vbr18111400 |vbr     | Updated calls to set_fir.
// vbr18101700 |vbr     | Updated wait_for_cdr_lock() to use the timescaling (not needed if we always run at same frequency, but safer to include).
// vbr18100300 |vbr     | Improved efficiency of wait_for_cdr_lock().
// vbr18100200 |vbr     | wait_for_cdr_lock() now has an option to set the fir on a lock fail and uses the timer for the timeout.
// cws18092600 |cws     | Added rx_eo_servo_setup()
// vbr18082000 |vbr     | Restructured check_rx_abort()
// vbr18081701 |vbr     | Added some assumption checking
// vbr18033100 |vbr     | Updated CDR controls.
// vbr18022000 |vbr     | Updating CDR controls.
// vbr17103100 |vbr     | Check abort sticky bit.
// jgr17091800 |jgr     | Commented out edge bank logic
// vbr17062901 |vbr     | Switched from DdcEdgeToInt to TwosCompToInt.
// vbr17062900 |vbr     | Removed thread input from various functions.
// vbr17062200 |vbr     | Commented out uses of registers which no longer exist.
// vbr17061200 |vbr     | Added check of NVDL signals to check_rx_abort().
// vbr17051800 |vbr     | Remove IOF code.
// vbr17022200 |vbr     | Added function to adjust latch offset.
// vbr17011800 |vbr     | Added function for copying lane cal results to another lane as a starting point.
// vbr16102700 |vbr     | Separated return codes for check_rx_abort
// mtk16100600 |mtk     | Added sls_valid_cmd_rcv checker function
// mtk16093000 |mtk     | Used SLS structs throughout SLS functions
// mtk16092900 |mtk     | Added function to calculate the SLS sleep count wait
// vbr16082500 |vbr     | Moved recal check out of check_rx_abort_base
// vbr16081800 |vbr     | Moved some functions from eo_common to io_lib (and renamed some).
// vbr16081700 |vbr     | Added ppe_last_thread_run to io_sleep() and updated check_rx_abort
// vbr16080800 |vbr     | Minor changes to reduce code size of switch_cal_bank/set_cal_bank
// vbr16072700 |vbr     | Simplified set_lane_invalid a little.
// vbr16072600 |vbr     | Replaced Debruijn with __builtin_ctz (significantly faster, ~248B saved).
// vbr16072001 |vbr     | set_cal_bank is no longer inline (fairly large & wasn't inlining anyways).
// vbr16072000 |vbr     | Added polling_interval constant
// vbr16071400 |vbr     | io_wait() is no longer valid for IOO, brought in PK_BASE_FREQ_HZ fix
// vbr16071300 |vbr     | io_wait() is no longer inline
// vbr16070100 |vbr     | Optimization to get ddc width
// vbr16062700 |vbr     | Switch to gcr_addr functions; fixed a few calls that seemed to be using thread/group incorrectly
// mbs16062400 |mbs     | Added gcr_addr struct
// vbr16060800 |vbr     | Updated return codes and timeouts
// vbr16060700 |vbr     | io_sleep() & run_servo_op_and_get_result() are no longer inline
// mtk16060200 |mtk     | Fixed shift up in io_set_rx_sls_ln function
// vbr16050500 |vbr     | Moved mem_regs and various functions from eo_common to io_lib
// vbr16042700 |vbr     | Multithreaded (initial round-robin implementation)
// vbr16042600 |vbr     | Different bits set in servo op in recal for IOO/IOF
// vbr16042100 |vbr     | Removed unneeded init_interrupts() & init_mem_regs()
// vbr16042000 |vbr     | Added procedure for setting lane_invalid bits (IOF only)
// vbr16032300 |vbr     | Added procedure for getting lane eye width from ddc results
// vbr16032200 |vbr     | Added timeout on edge tracking and error code
// vbr16031700 |vbr     | Moved some functions from inline to non-inline
// vbr16030400 |vbr     | Initial Rev
// -----------------------------------------------------------------------------

#include <stdbool.h>
#include <stdint.h>

#include "io_lib.h"
#include "pk.h"

#include "eo_common.h"

#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FUNCTIONS / PROCEDURES
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Wait for lock on both banks.
// Set FIR if not locked after X checks.
// Lock could take relatively long due to spread spectrum, so use sleep in between checks.
PK_STATIC_ASSERT(rx_pr_locked_ab_alias_width == 2);
int wait_for_cdr_lock(t_gcr_addr* gcr_addr, bool set_fir_on_error)
{
    PkTimebase start_time = pk_timebase_get();

    while ( true )
    {
        // Check CDR status
        int locked_ab = get_ptr_field(gcr_addr, rx_pr_locked_ab_alias);

        if (locked_ab == 0b11)
        {
            return pass_code; // Exit when locked
        }
        else
        {
            // Check timeout if not locked as yet
            bool timeout = (pk_timebase_get() - start_time) > (32 * scaled_microsecond);

            if (timeout)
            {
                if(set_fir_on_error)
                {
                    set_fir(fir_code_warning);    // Set FIR on a timeout.
                }

                return warning_code; // Exit when timeout
            }

            // Sleep before polling again
#if PK_THREAD_SUPPORT
            io_sleep(get_gcr_addr_thread(gcr_addr));
#else
            io_spin_us(polling_interval_us);
#endif
        } //if...else...
    } //while
} //wait_for_cdr_lock

// Abort check
// Called after servo ops to check for an abort condition. Returns abort_code if an abort code is detected; returns pass_code otherwise.
int check_rx_abort(t_gcr_addr* gcr_addr)
{
    int ret_val = pass_code;

    // Only perform when rx_init_done=1 (only in recal).
    int lane = get_gcr_addr_lane(gcr_addr);
    int init_done = mem_pl_field_get(rx_init_done, lane);

    if (init_done)
    {
        // Check the recal_abort mem_reg and the DL sticky abort signal.
        int abort_val0 = mem_pl_field_get(rx_recal_abort, lane);
        int abort_val1 = get_ptr_field(gcr_addr, rx_dl_phy_recal_abort_sticky);
        int abort_val  = (abort_val0 | abort_val1);

        //ret_val = abort_val ? abort_code : pass_code;
        if ( abort_val )
        {
            ret_val = abort_code;
            set_fir(fir_code_recal_abort); // Added call to set_fir in order to trap ppe_error_state info
        }
        else
        {
            ret_val = pass_code;
        }
    }

    return ret_val;
} //check_rx_abort


// Copy the cal results from source lane to destination lane to use as a starting point.
// To save time, only reads some of the Bank A results and copies them where needed by cal.
PK_STATIC_ASSERT(rx_a_ctle_gain_peak_full_reg_alias_width == 16);
PK_STATIC_ASSERT(rx_b_ctle_gain_peak_full_reg_alias_width == 16);
PK_STATIC_ASSERT(rx_a_lte_gain_zero_alias_width == rx_b_lte_gain_zero_alias_width);
void eo_copy_lane_cal(t_gcr_addr* gcr_addr, int lane_src, int lane_dst)
{
    // Read from source lane
    set_gcr_addr_lane(gcr_addr, lane_src);
    int gain_and_peak = get_ptr_field(gcr_addr, rx_a_ctle_gain_peak_full_reg_alias); // ctle_gain and ctle_peak1/2
    int lte_gain_zero = get_ptr_field(gcr_addr, rx_a_lte_gain_zero_alias); // lte_gain and lte_zero

    // Write to destination lane
    set_gcr_addr_lane(gcr_addr, lane_dst);
    put_ptr_field(gcr_addr, rx_a_ctle_gain_peak_full_reg_alias, gain_and_peak, fast_write);
    put_ptr_field(gcr_addr, rx_b_ctle_gain_peak_full_reg_alias, gain_and_peak, fast_write);
    put_ptr_field(gcr_addr, rx_a_lte_gain_zero_alias,           lte_gain_zero, read_modify_write);
    put_ptr_field(gcr_addr, rx_b_lte_gain_zero_alias,           lte_gain_zero, read_modify_write);
} //eo_copy_lane_cal


void rx_eo_servo_setup(t_gcr_addr* i_tgt, const t_servo_setup i_servo_setup)
{
    switch(i_servo_setup)
    {
        case SERVO_SETUP_VGA:
            put_ptr_field(i_tgt, rx_amp_servo_mask_h0      , 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_servo_vote_bias_dec, 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_servo_vote_bias_inc, 0x01, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_inc0  , 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_dec0  , 0x04, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_inc1  , 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_dec1  , 0x04, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_inc2  , 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_dec2  , 0x04, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_inc3  , 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_dec3  , 0x06, read_modify_write);
            break;

        case SERVO_SETUP_DFE_FAST:
            put_ptr_field(i_tgt, rx_amp_servo_mask_h0      , 0x01, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_servo_vote_bias_dec, 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_servo_vote_bias_inc, 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_inc0  , 0x01, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_dec0  , 0x01, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_inc1  , 0x01, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_dec1  , 0x01, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_inc2  , 0x02, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_dec2  , 0x02, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_inc3  , 0x04, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_dec3  , 0x04, read_modify_write);
            break;

        case SERVO_SETUP_DFE_FULL:
            put_ptr_field(i_tgt, rx_amp_servo_mask_h0      , 0x01, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_servo_vote_bias_inc, 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_servo_vote_bias_dec, 0x01, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_inc0  , 0x04, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_dec0  , 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_inc1  , 0x04, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_dec1  , 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_inc2  , 0x04, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_dec2  , 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_inc3  , 0x06, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_filter_depth_dec3  , 0x00, read_modify_write);
            break;

    }

    return;
}
