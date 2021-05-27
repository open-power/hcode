/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_bank_sync.c $         */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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
// *! FILENAME    : eo_bank_sync.c
// *! TITLE       :
// *! DESCRIPTION : Common functions and defines for eyeopt steps
// *!
// *! OWNER NAME  : Brian Albertson     Email: brian.j.albertson@ibm.com
// *! BACKUP NAME : Vikram Raj          Email: vbraj@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// mwh20042900 |mwh     | HW567359 -- Agreed to remove fir warning setting at B006
// bja20090900 |bja     | Use common is_p10_dd1() check
// vbr20061101 |vbr     | HW532941: To deal with lossy bump, increasing max_bumps to fail and setting warning after full rotation
// vbr20061100 |vbr     | HW533071: DD2 should not change the timer settings based on 16to1 mode
// cws20011400 |cws     | Added Debug Logs
// bja19111800 |bja     | Set rx_berpl_exp_data_sel before running BERM
// bja19081900 |bja     | Remove immediate return on fail. Fail is noted and function finishes.
// mwh19040119 |mwh     | removed the rx_fail_flag code -- code size hit and taking out reduce sim
// mwh19012100 |mwh     | Add in fail flag
// jgr19032000 |jgr     | Reduced bank sync error threshold
// vbr19021800 |vbr     | Removed CDR lock check.
// vbr19012200 |vbr     | Added a check of recal abort.
// mwh18120600 |mwh     | Add in check done and check fail write
// vbr18111400 |vbr     | Updated calls to set_fir.
// vbr18092700 |vbr     | Added return codes.
// mbs18092500 |mbs     | Added reset of ber before loop (HW466139)
// mbs18091200 |mbs     | Changed rx_serdes_16to1_mode to fw_serdes_16to1_mode
// bja18081000 |bja     | Initial Rev
// -----------------------------------------------------------------------------

#include <stdbool.h>
#include <stdint.h>

#include "io_lib.h"
#include "pk.h"

#include "eo_common.h"
#include "eo_bank_sync.h"
#include "io_logger.h"

#include "ppe_fw_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FUNCTIONS / PROCEDURES
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Use BERM logic to determine if the banks are aligned on the same data beat
// Alignment is assumed if the BER between the banks is <40%
// If the BER is >40%, the calibration bank is bumped and the BER is remeasured
int align_bank_ui(t_gcr_addr* gcr_addr, t_bank current_cal_bank)
{
    set_debug_state(0xB000); // align bank ui started
    // 16:1 max_errs = (64 slow clock)*(8 grid clock/slow clock)*(16 bits/grid clock)*(0.4) = 3277 bits;
    // 32:1 max_errs = (32 slow clock)*(8 grid clock/slow clock)*(32 bits/grid clock)*(0.4) = 3277 bits;
    //const int max_errs = 3277;
    // 16:1 max_errs = (64 slow clock)*(8 grid clock/slow clock)*(16 bits/grid clock)*(0.15) = 1229 bits;
    // 32:1 max_errs = (32 slow clock)*(8 grid clock/slow clock)*(32 bits/grid clock)*(0.15) = 1229 bits;
    const int max_errs = 1229;
    int bump_count = 0;
    int ber_count;
    int max_bumps_warn;
    int max_bumps_fail;
    int timer_sel;
    int op_running;
    bool aligned;

    int lane = get_gcr_addr_lane(gcr_addr);
    int status = pass_code;

    // P10 DD1: Need different settings when running in in 16:1 vs 32:1 mode
    // P10 DD2: The RLM is always 16:1 (only the DL changes between 16:1 and 8:1)
    timer_sel      = 0xD;
    max_bumps_warn = 15;
    max_bumps_fail = 255;

    if ( is_p10_dd1() && !fw_field_get(fw_serdes_16_to_1_mode)  )
    {
        // 32:1 -- P10 DD1 only
        timer_sel      = 0xE;
        max_bumps_warn = 31;
        max_bumps_fail = 511;
    }

    // enable BERM comparison between banks
    put_ptr_field(gcr_addr, rx_berpl_exp_data_sel, 0b0, read_modify_write);
    // enable BERM logic clocks for current lane
    put_ptr_field(gcr_addr, rx_berpl_count_en, 0b1, read_modify_write);
    // set timer to saturate at 32 cycles
    put_ptr_field(gcr_addr, rx_ber_timer_sel, timer_sel, read_modify_write);
    // enable clocks for the timer
    put_ptr_field(gcr_addr, rx_ber_en, 0b1, read_modify_write);
    // clear timer and error counter
    put_ptr_field(gcr_addr, rx_ber_reset, 0b1, fast_write);

    // check bank alignment, loop if misaligned
    do   // while !aligned
    {

        // clear timer and error counter
        put_ptr_field(gcr_addr, rx_ber_reset, 0b1, fast_write);
        set_debug_state(0xB001); // BERM running

        // wait for BERM operation to finish
        do
        {
            op_running = get_ptr_field(gcr_addr, rx_ber_timer_running);
        }
        while ( op_running );

        set_debug_state(0xB002); // compare error count to threshold
        // get bit error rate count
        ber_count = get_ptr_field(gcr_addr, rx_berpl_count);
        // if the ber count is less than the threshold, the banks are aligned
        aligned = ber_count < max_errs;

        // if the banks are misaligned
        if ( !aligned )
        {
            // and if the banks haven't synced after bumping through all UIs once
            if (bump_count == max_bumps_warn)
            {
                set_debug_state(0xB006); // bump ui warning - bumped through all UIs once
                //set_fir(fir_code_warning);HW567359
                ADD_LOG(DEBUG_RX_BANK_SYNC_WARN, gcr_addr, bump_count);
            }

            // and if the banks haven't synced after bumping through all UIs multiple times
            if (bump_count >= max_bumps_fail)
            {
                set_debug_state(0xB005); // bump ui fail

                if (get_ptr_field(gcr_addr, rx_bank_sync_check_en))
                {
                    mem_pl_field_put(rx_bank_sync_fail, lane, 0b1);
                }

                status = warning_code;
                set_fir(fir_code_warning);
                ADD_LOG(DEBUG_RX_BANK_SYNC_FAIL, gcr_addr, bump_count);
                break; //while(!aligned)
            }
            // otherwise bump the cal bank
            else
            {
                // check which bank is being calibrated
                if ( current_cal_bank == bank_a )
                {
                    put_ptr_field(gcr_addr, rx_pr_bump_sl_1ui_a, 0b1, fast_write); // bump bank a left
                }
                else
                {
                    put_ptr_field(gcr_addr, rx_pr_bump_sl_1ui_b, 0b1, fast_write); // bump bank b left
                }

                set_debug_state(0xB003); // bump function running
                bump_count++; // increment bump counter

                // wait for bump operation to finish
                do
                {
                    op_running = get_ptr_field(gcr_addr, rx_pr_bump_in_progress_ab_alias);
                }
                while ( op_running );
            } // if ( bump_count < max_bumps_fail )
        } // if ( !aligned )
    }
    while ( !aligned );

    if (aligned)
    {
        set_debug_state(0xB004);
    }

    // turn off BERM logic
    put_ptr_field(gcr_addr, rx_berpl_count_en, 0b0, read_modify_write);
    put_ptr_field(gcr_addr, rx_ber_en, 0b0, read_modify_write);

    // Check for abort status
    status |= check_rx_abort(gcr_addr);

    if (status)
    {
        set_debug_state(0xB00A); // Error or Abort
    }

    //Checking stuff
    if (current_cal_bank == bank_a)
    {
        mem_pl_field_put(rx_a_bank_sync_done, lane, 0b1);   //ppe pl
    }
    else
    {
        mem_pl_field_put(rx_b_bank_sync_done, lane, 0b1);
    }

    return status;
} //align_bank_ui

