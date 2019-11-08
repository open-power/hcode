/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_lte.c $               */
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
// *! (C) Copyright International Business Machines Corp. 2018
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
// *!---------------------------------------------------------------------------
// *! FILENAME    : eo_lte.c
// *! TITLE       :
// *! DESCRIPTION : Run LTE calibration step on a bank
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// vbr19041500 |vbr     | Updated register names
// vbr19022500 |vbr     | Disable servo_status for result min/max
// vbr19012500 |vbr     | Added more assumption checking.
// vbr19021801 |vbr     | Added hysteresis_exceeded as an output for the VGA-CTLE loop.
// vbr19021800 |vbr     | Hysteresis and recal are seperate options with hysteresis hardcoded to enabled.
// vbr19012200 |vbr     | Updated function calls
// mwh18120700 |mwh     | Add in the done for Lte
// vbr18111400 |vbr     | Updated calls to set_fir.
// vbr18100300 |vbr     | Check servo status in recal and treat the same as an abort.
// vbr18092700 |vbr     | Moved CDR mode setting to eo_main; no longer return lte_changed.
// vbr18081701 |vbr     | Added some assumption checking
// vbr18081700 |vbr     | Added servo queues empty error check.
// vbr18081600 |vbr     | Initial Rev
// -----------------------------------------------------------------------------

#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "eo_common.h"
#include "eo_lte.h"

#include "servo_ops.h"
#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"


// Assumption checking
PK_STATIC_ASSERT(rx_a_lte_gain_startbit < rx_a_lte_zero_startbit);
PK_STATIC_ASSERT(rx_b_lte_gain_startbit < rx_b_lte_zero_startbit);
PK_STATIC_ASSERT(rx_a_lte_gain_zero_alias_width == rx_b_lte_gain_zero_alias_width);
PK_STATIC_ASSERT(rx_a_lte_gain_zero_alias_width == (rx_a_lte_zero_endbit - rx_a_lte_gain_startbit + 1));
PK_STATIC_ASSERT(rx_b_lte_gain_zero_alias_width == (rx_b_lte_zero_endbit - rx_b_lte_gain_startbit + 1));
PK_STATIC_ASSERT(rx_servo_queue_status_full_reg_alias_width == 16);


// Declare servo op arrays as static globals so they are placed in static memory thus reducing code size and complexity.
// LTE Gain is run before LTE Zero.
#define num_servo_ops_lte 2
#define gain_op 0
#define zero_op 1
static uint16_t servo_ops_lte_a[num_servo_ops_lte] = { c_lte_gain_ae_n000, c_lte_zero_ae_n000 };
static uint16_t servo_ops_lte_b[num_servo_ops_lte] = { c_lte_gain_be_n000, c_lte_zero_be_n000 };


// Always have hysteresis enabled
#define hysteresis_en true


// Run LTE on a bank
int eo_lte(t_gcr_addr* gcr_addr, t_bank cal_bank, bool copy_to_main, bool recal, bool* hysteresis_exceeded)
{
    set_debug_state(0x9000); // DEBUG - LTE Start

    //rxbist setting to 0 since can loop
    int lane = get_gcr_addr_lane(gcr_addr);

    if (cal_bank == bank_a)
    {
        mem_pl_field_put(rx_a_lte_gain_done, lane, 0b0);   //ppe pl
    }
    else
    {
        mem_pl_field_put(rx_b_lte_gain_done, lane, 0b0);
    }

    if (cal_bank == bank_a)
    {
        mem_pl_field_put(rx_a_lte_zero_done, lane, 0b0);   //ppe pl
    }
    else
    {
        mem_pl_field_put(rx_b_lte_zero_done, lane, 0b0);
    }

    // Verify that the servo queues are empty
    int servo_queue_status = get_ptr_field(gcr_addr, rx_servo_queue_status_full_reg_alias);
    int op_queue_empty     = bitfield_get(servo_queue_status, rx_servo_op_queue_empty_mask,
                                          rx_servo_op_queue_empty_shift);
    int result_queue_empty = bitfield_get(servo_queue_status, rx_servo_result_queue_empty_mask,
                                          rx_servo_result_queue_empty_shift);
    int both_queues_empty  = (op_queue_empty & result_queue_empty);

    if (!both_queues_empty)
    {
        // Set the FIR if either queue is not empty.
        set_debug_state(0x9001); // Servo queues not empty
        set_fir(fir_code_warning);
        return warning_code;
    }

    // Select the servo ops.
    // Save previous LTE settings for possible restoring (recal abort or hysteresis).
    uint16_t* servo_ops;
    int prev_gain_zero = 0;

    if (cal_bank == bank_a)
    {
        servo_ops = servo_ops_lte_a;

        if (hysteresis_en || recal)
        {
            prev_gain_zero = get_ptr_field(gcr_addr, rx_a_lte_gain_zero_alias);
        }
    }
    else     //bank_b
    {
        servo_ops = servo_ops_lte_b;

        if (hysteresis_en || recal)
        {
            prev_gain_zero = get_ptr_field(gcr_addr, rx_b_lte_gain_zero_alias);
        }
    }

    // Disable servo status for result at min/max
    PK_STATIC_ASSERT(rx_servo_status_error_en_width == 4); // Write values need to be updated if field width changes
    put_ptr_field(gcr_addr, rx_servo_status_error_en, 0b0011, read_modify_write);

    // Run the servo ops and check recal abort status.
    // The run_servo_op function checks for servo_status errors and returns warning_code/rc_warning on an error.
    set_debug_state(0x9008); // DEBUG - LTE Run Servo ops
    int32_t servo_results[num_servo_ops_lte];
    int status = run_servo_ops_and_get_results(gcr_addr, c_servo_queue_general, num_servo_ops_lte, servo_ops,
                 servo_results);
    status |= check_rx_abort(gcr_addr);

    // Re-enable servo status for result at min/max
    put_ptr_field(gcr_addr, rx_servo_status_error_en, 0b1111, read_modify_write);

    // In recal, restore previous values if got an abort or servo error or within the hysteresis limit.
    // If not recal, ignore errors and only restore if within the hysteresis limit; potentially copy the results to main.
    bool restore = false;

    if (recal && status)
    {
        // In recal, restore LTE settings on a recal abort or servo error (status != 0)
        restore = true;
        set_debug_state(0x901A); // DEBUG - LTE Abort or Servo Error
    }
    else     // !recal || !status
    {
        // Either not in recal or no abort/error, so check hysteresis
        if (hysteresis_en)
        {
            // Check the hysteresis. If the change in BOTH lte_gain and lte_zero is less than or equal to the limit,
            // the previous values are restored. The change of at least one must be larger than the limit to be allowed.
            int hyst_limit  = mem_pg_field_get(ppe_lte_hysteresis);
            int gain_result = servo_results[gain_op];
            int zero_result = servo_results[zero_op];
            int gain_prev   = prev_gain_zero >> (rx_a_lte_gain_shift - rx_a_lte_zero_shift);
            int zero_prev   = prev_gain_zero & (rx_a_lte_zero_mask >> rx_a_lte_zero_shift);
            int gain_diff   = gain_result - gain_prev;
            int zero_diff   = zero_result - zero_prev;

            if ( (abs(gain_diff) <= hyst_limit) && (abs(zero_diff) <= hyst_limit) )
            {
                restore = true;
                *hysteresis_exceeded = false;
                set_debug_state(0x9018); // DEBUG - LTE Hysteresis Restore
            }
            else
            {
                *hysteresis_exceeded = true;
            }
        } //if(hysteresis_en)
    } //if(recal && status)...else...

    // Actually Restore previous LTE settings
    if (restore)
    {
        if (cal_bank == bank_a)
        {
            put_ptr_field(gcr_addr, rx_a_lte_gain_zero_alias, prev_gain_zero, read_modify_write);
        }
        else     //bank_b
        {
            put_ptr_field(gcr_addr, rx_b_lte_gain_zero_alias, prev_gain_zero, read_modify_write);
        }
    }
    else     //!restore
    {
        // Copy new result to main bank (opposite bank).
        // Only allowed when not in recal.
        if (!recal && copy_to_main)
        {
            set_debug_state(0x900A); // DEBUG - LTE Copy Result to Main
            int gain_result = servo_results[gain_op];
            int zero_result = servo_results[zero_op];
            int write_val   = (gain_result << (rx_a_lte_gain_shift - rx_a_lte_zero_shift)) | zero_result;

            if (cal_bank == bank_a)
            {
                put_ptr_field(gcr_addr, rx_b_lte_gain_zero_alias, write_val, read_modify_write);
            }
            else     //bank_b
            {
                put_ptr_field(gcr_addr, rx_a_lte_gain_zero_alias, write_val, read_modify_write);
            }
        } //if(copy_to_main)
    } //if(restore)...else...

    //rxbist
    if (cal_bank == bank_a)
    {
        mem_pl_field_put(rx_a_lte_gain_done, lane, 0b1);   //ppe pl
    }
    else
    {
        mem_pl_field_put(rx_b_lte_gain_done, lane, 0b1);
    }

    if (cal_bank == bank_a)
    {
        mem_pl_field_put(rx_a_lte_zero_done, lane, 0b1);   //ppe pl
    }
    else
    {
        mem_pl_field_put(rx_b_lte_zero_done, lane, 0b1);
    }

    // End of cal step - return status
    set_debug_state(0x90FF); // DEBUG - LTE End
    return status;
} //eo_lte

