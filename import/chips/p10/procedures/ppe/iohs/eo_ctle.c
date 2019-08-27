/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_ctle.c $              */
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
// *! FILENAME    : eo_ctle.c
// *! TITLE       :
// *! DESCRIPTION : Eyeopt flow to run ctle servo op, filter results, and update the peak coarse reg
// *!
// *! OWNER NAME  : John Gullickson     Email: gullicks@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// jfg19052002 |jfg     | REAPPLY: Fix ctle_mode conditional which tried to cast an int into bool and was not working (nor flagged as error)
// jfg19050101 |jfg     | change peak_done to peak1_done by Mike Harper's request
// vbr19041500 |vbr     | Updated register names
// mwh19041719 |mwh     | change peak to peak1 -- bist stuff
// jfg19022700 |jfg     | Add result hysteresis and restore, remove static config
// vbr19021800 |vbr     | Added peak changed output for use in VGA-CTLE loop.
// vbr19012200 |vbr     | Updated function calls
// vbr19011701 |vbr     | Re-arrange servo error and abort handling to restore on both.
// vbr19011700 |vbr     | HW451171: Queue up all 4 servo ops at once.
// vbr19011600 |vbr     | HW473413: Do not use CDR quad mode tracking.
// mwh19011100 |mwh     | Add () because the || could could cause compare to wrong thing
// vbr18111400 |vbr     | Updated calls to set_fir.
// vbr18101100 |vbr     | Updated to avoid possibility of alignment exceptions in result sort (HW468390)
// vbr18101000 |vbr     | Disable servo_status for result min/max
// jfg18081301 |jfg     | Fix CQD math expression for pow typo
// jfg16060600 |jfg     | Replace ctle codes on servo_code_b array with b versions
// jfg16051000 |jfg     | Fix debug_state values
// jfg16042300 |jfg     | Initial Rev
//------------------------------------------------------------------------------

#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "servo_ops.h"
#include "eo_common.h"
#include "eo_ctle.h"

#include "ppe_com_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"
#include "config_ioo.h"

#define  hysteresis_en true

////////////////////////////////////////////////////////////////////////////
// IOO CTLE ZFE METHOD
int eo_ctle(t_gcr_addr* gcr_addr, t_bank bank, bool copy_peak_to_b, bool* peak_changed)
{
    set_debug_state(0x6000); // DEBUG - CTLE Start (IOO)
    int peak_out;
    int ctle_coarse_preset;
    static uint16_t servo_code_a[4] = {c_ctle_peak1_ad_n000, c_ctle_peak1_ad_e000, c_ctle_peak1_ad_s000, c_ctle_peak1_ad_w000};
    static uint16_t servo_code_b[4] = {c_ctle_peak1_bd_n000, c_ctle_peak1_bd_e000, c_ctle_peak1_bd_s000, c_ctle_peak1_bd_w000};

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
        set_debug_state(0x601F); // Servo queues not empty
        set_fir(fir_code_warning);
        return warning_code;
    }

    // Assume already switched to the correct bank prior to this being called
    /////// Initial Setup
    // Read existing ctle_coarse preset for use in abort sequence and select the correct servo ops
    uint16_t* servo_ops;
    int lane = get_gcr_addr_lane(gcr_addr);

    if (bank == bank_a)
    {
        servo_ops = servo_code_a;
        ctle_coarse_preset = get_ptr(gcr_addr, rx_a_ctle_peak1_addr,  rx_a_ctle_peak1_startbit, rx_a_ctle_peak1_endbit);
        set_debug_state(0x6002); // DEBUG - CTLE Bank A Setup
    }
    else
    {
        servo_ops = servo_code_b;
        ctle_coarse_preset = get_ptr(gcr_addr, rx_b_ctle_peak1_addr,  rx_b_ctle_peak1_startbit, rx_b_ctle_peak1_endbit);
        set_debug_state(0x6003); // DEBUG - CTLE Bank B Setup
    }

    // Disable servo status for result at min/max
    PK_STATIC_ASSERT(rx_servo_status_error_en_width == 4); // Write values need to be updated if field width changes
    put_ptr_field(gcr_addr, rx_servo_status_error_en, 0b0011, read_modify_write);

    // ctle quadrant mode: 0=Run on each quadrant, 1=Run on North quad only
    bool ctle_mode_setup = mem_pg_field_get(rx_ctle_mode) == 0b1;
    int num_servo_ops_ctle = ctle_mode_setup ? 1 : 4;

    // Run the servo ops
    set_debug_state(0x6010); // DEBUG - CTLE Run Servo Op
    int32_t servo_result[num_servo_ops_ctle];
    int abort_status = run_servo_ops_and_get_results(gcr_addr, c_servo_queue_general, num_servo_ops_ctle, servo_ops,
                       servo_result);
    abort_status |= check_rx_abort(gcr_addr);

    // Re-enable servo status for result at min/max
    put_ptr_field(gcr_addr, rx_servo_status_error_en, 0b1111, read_modify_write);


    //Compute average of 2 median values and compare it is less than CQD away from min and max results
    // A difference value of 0 disables the check
    //If the deviation exceeds that value then indicate an abort and restore original PEAK
    if (!abort_status && !ctle_mode_setup)
    {
        set_debug_state(0x6020); //DEBUG - Check Results

        // Determine min, max, and 2 mid values (order of 2 mid values does not matter).
        int result_min, result_max, result_mid0, result_mid1;
        int pair0_min, pair0_max, pair1_min, pair1_max;

        if (servo_result[0] <= servo_result[1])
        {
            pair0_min = servo_result[0];
            pair0_max = servo_result[1];
        }
        else
        {
            pair0_min = servo_result[1];
            pair0_max = servo_result[0];
        }

        if (servo_result[2] <= servo_result[3])
        {
            pair1_min = servo_result[2];
            pair1_max = servo_result[3];
        }
        else
        {
            pair1_min = servo_result[3];
            pair1_max = servo_result[2];
        }

        if (pair0_min <= pair1_min)
        {
            result_min  = pair0_min;
            result_mid0 = pair1_min;
        }
        else
        {
            result_min  = pair1_min;
            result_mid0 = pair0_min;
        }

        if (pair0_max <= pair1_max)
        {
            result_mid1 = pair0_max;
            result_max  = pair1_max;
        }
        else
        {
            result_mid1 = pair1_max;
            result_max  = pair0_max;
        }

        // Compute margins
        int CQD = mem_regs_u16_get(pg_addr(rx_ctle_quad_diff_thresh_addr), rx_ctle_quad_diff_thresh_mask,
                                   rx_ctle_quad_diff_thresh_shift);
        int mid_sum_avg = (result_mid0 + result_mid1) >> 1;
        int min_margin = mid_sum_avg - CQD;
        int max_margin = mid_sum_avg + CQD;

        // We need a little user error protection here so that the PEAK servo still works if an obviously invalid threshold is set
        if ((min_margin < 0) || (max_margin > (0b1 << rx_a_ctle_peak1_width) - 1))
        {
            CQD = 0;
        }

        if ((CQD != 0) &&
            ((min_margin > result_min) ||
             (max_margin < result_max))  )
        {
            // Abort condition where max and min results exceed the threshold
            peak_out = ctle_coarse_preset;
            abort_status = warning_code;
            set_debug_state(0x6080); //DEBUG - Abort Condition
            set_fir(fir_code_warning);
        }
        else
        {
            // Normal condition: replace array 0 with final PEAK value
            peak_out = mid_sum_avg;
        }
    }
    else if (!abort_status && ctle_mode_setup)
    {
        // Only run a sigle servo op in ctle_mode=1
        peak_out = servo_result[0];
    }


    if (abort_status)
    {
        // Abort Condition - replace array 0 with original PEAK
        peak_out = ctle_coarse_preset;
        set_debug_state(0x6080); //DEBUG - Recal Abort Condition
    }

    // Post result averaging hysteresis applied to help reduce chances of result oscillation during Main VGA loop
    if (hysteresis_en)
    {
        int hysteresis_lim = mem_pg_field_get(rx_ctle_hysteresis);
        bool restore = hysteresis_lim >= abs(peak_out - ctle_coarse_preset) ;

        if (restore)
        {
            peak_out = ctle_coarse_preset;
        }
    }

    // Indicate if the peak value changed
    *peak_changed = (peak_out != ctle_coarse_preset);

    // Write final result
    if (bank == bank_a)
    {
        put_ptr(gcr_addr, rx_a_ctle_peak1_addr, rx_a_ctle_peak1_startbit, rx_a_ctle_peak1_endbit, peak_out, read_modify_write);

        if (copy_peak_to_b)
        {
            // Copy A bank result to the B bank but only if we're now on bank A
            put_ptr(gcr_addr, rx_b_ctle_peak1_addr, rx_b_ctle_peak1_startbit, rx_b_ctle_peak1_endbit, peak_out, read_modify_write);
            mem_pl_field_put(rx_a_ctle_peak1_done, lane, 0b1);
        }
    }
    else   //bank_b
    {
        put_ptr(gcr_addr, rx_b_ctle_peak1_addr, rx_b_ctle_peak1_startbit, rx_b_ctle_peak1_endbit, peak_out, read_modify_write);
        mem_pl_field_put(rx_b_ctle_peak1_done, lane, 0b1);
    }

    set_debug_state(0x60FF); // DEBUG - CTLE Complete

    // Return Status
    return abort_status;
} //eo_ctle_zfe
