/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_ctle.c $              */
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
// jfg20021901 |jfg     | HW521060: Abort scenario on first-run rough pass exposed failure to restore peak2 due to mis-use of pk
// jfg20032401 |jfg     | HW526927  Wrong conditional || vs &&
// jfg20032400 |jfg     | HW526927  hysteresis_en is not sensitive to first_run as intended.
// jfg20030900 |jfg     | HW525009 add a rough_only mode to set initial coarse peak 1&2
// cws20011400 |cws     | Added Debug Logs
// jfg19092300 |jfg     | PR661 fix bug in error conditional for servo error
// jfg19091100 |jfg     | HW503164 refactoring flow to include a coarse catch-up and then separate peak servos for an initial pass
// jfg19082200 |jfg     | regression coverege identified ctle done write was missing for bankA
// jfg19071900 |jfg     | HW492082 Add peak2 servos
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
#include "io_logger.h"

#include "ppe_com_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"
#include "config_ioo.h"

#define  hysteresis_en true

static int get_ctle_median (int32_t* servo_result, int CQD, int ctle_peak_preset, int* abort_status)
{

    // Determine min, max, and 2 mid values (order of 2 mid values does not matter).
    int result_min, result_max, result_mid0, result_mid1;
    int pair0_min, pair0_max, pair1_min, pair1_max;
    int peak_out;

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
        peak_out = ctle_peak_preset;
        *abort_status = warning_code;
        set_debug_state(0x6080); //DEBUG - Abort Condition
        set_fir(fir_code_warning);
        ADD_LOG(DEBUG_RX_CTLE_SERVO_LIMIT, 0x0);
    }
    else
    {
        // Normal condition: replace array 0 with final PEAK value
        peak_out = mid_sum_avg;
    }

    return peak_out;
}

// Reduce duplicate code with this function bundle that checks servo queue status
static bool exit_peak_on_servo_error (t_gcr_addr* gcr_addr)
{
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
        ADD_LOG(DEBUG_RX_CTLE_SERVO_QUEUE_NOT_EMPTY, gcr_addr, 0x0);
        // Re-enable servo status for result at min/max
        put_ptr_field(gcr_addr, rx_servo_status_error_en, 0b1111, read_modify_write);
        return true;
    }

    return false;
}

// Write peak registers from parms
// -Parms:
// int pk is a binary encode to establish peak1 vs. peak2 focus
//   0b001 : Normal Peak1 only
//   0b010 : Normal Peak2 only
// int fail is the pass/fail bit value used for the peak fail reg
static void update_peak_and_status (t_gcr_addr* gcr_addr, t_bank bank,  int peak1, int peak2, int pk, int fail)
{
    int lane = get_gcr_addr_lane(gcr_addr);
    bool pk1 = (pk & 0b01) != 0; //Overload pk as a binary onehot
    bool pk2 = (pk & 0b10) != 0;

    if (pk1)
    {
        if (bank == bank_a)
        {
            put_ptr(gcr_addr, rx_a_ctle_peak1_addr, rx_a_ctle_peak1_startbit, rx_a_ctle_peak1_endbit, peak1, read_modify_write);
        }
        else   //bank_b
        {
            put_ptr(gcr_addr, rx_b_ctle_peak1_addr, rx_b_ctle_peak1_startbit, rx_b_ctle_peak1_endbit, peak1, read_modify_write);
        }

        mem_pl_field_put(rx_ctle_peak1_fail, lane, fail);
    }

    if (pk2)
    {
        if (bank == bank_a)
        {
            put_ptr(gcr_addr, rx_a_ctle_peak2_addr, rx_a_ctle_peak2_startbit, rx_a_ctle_peak2_endbit, peak2, read_modify_write);
        }
        else   //bank_b
        {
            put_ptr(gcr_addr, rx_b_ctle_peak2_addr, rx_b_ctle_peak2_startbit, rx_b_ctle_peak2_endbit, peak2, read_modify_write);
        }

        mem_pl_field_put(rx_ctle_peak2_fail, lane, fail);
    }
}


////////////////////////////////////////////////////////////////////////////
// IOO CTLE ZFE METHOD
// peak_changed : Primarily an output to indicate the main loop should continue due to a new peak value
// first_run    : Input set true on the very first iteration of main loop Bank A and very first iteration on recal loop Bank B
// rough_only   : Execute first_run/rough pass only and exit.
int eo_ctle(t_gcr_addr* gcr_addr, t_bank bank, bool copy_peak_to_b, bool* peak_changed, bool first_run,
            bool rough_only)
{
    set_debug_state(0x6000); // DEBUG - CTLE Start (IOO)
    int peak_out[2];
    //int peak2_out;
    int ctle_peak_preset[2];
    //int ctle_peak2_preset;
    static uint16_t servo_code_rough_a[4] = {c_ctle_peak1_ad_n000, c_ctle_peak2_ad_n000,
                                             c_ctle_peak1_ad_e000, c_ctle_peak2_ad_e000
                                            };
    static uint16_t servo_code_rough_b[4] = {c_ctle_peak1_bd_n000, c_ctle_peak2_bd_n000,
                                             c_ctle_peak1_bd_e000, c_ctle_peak2_bd_e000
                                            };
    static uint16_t servo_code_a[8] = {c_ctle_peak1_ad_n000, c_ctle_peak1_ad_e000, c_ctle_peak1_ad_s000, c_ctle_peak1_ad_w000,
                                       c_ctle_peak2_ad_n000, c_ctle_peak2_ad_e000, c_ctle_peak2_ad_s000, c_ctle_peak2_ad_w000
                                      };
    static uint16_t servo_code_b[8] = {c_ctle_peak1_bd_n000, c_ctle_peak1_bd_e000, c_ctle_peak1_bd_s000, c_ctle_peak1_bd_w000,
                                       c_ctle_peak2_bd_n000, c_ctle_peak2_bd_e000, c_ctle_peak2_bd_s000, c_ctle_peak2_bd_w000
                                      };
    static uint16_t servo_code_north_a[4] = {c_ctle_peak1_ad_n000, c_ctle_peak2_ad_n000,
                                             c_ctle_peak1_ad_n000, c_ctle_peak2_ad_n000
                                            };
    static uint16_t servo_code_north_b[4] = {c_ctle_peak1_bd_n000, c_ctle_peak2_bd_n000,
                                             c_ctle_peak1_bd_n000, c_ctle_peak2_bd_n000
                                            };

    // ctle quadrant mode: 0=Run on each quadrant, 1=Run on North quad only
    bool ctle_mode_setup = mem_pg_field_get(rx_ctle_mode) == 0b1;
    int num_servo_ops_ctle = ctle_mode_setup ? 1 : 4;
    int num_servo_ops_ctle_rough = 4;

    // Assume already switched to the correct bank prior to this being called
    /////// Initial Setup
    // Read existing ctle_peak1 preset for use in abort sequence and select the correct servo ops
    uint16_t* servo_ops_rough;
    uint16_t* servo_ops_main;
    int lane = get_gcr_addr_lane(gcr_addr);

    if (bank == bank_a)
    {
        if (ctle_mode_setup)
        {
            servo_ops_rough = servo_code_north_a;
            servo_ops_main = servo_code_north_a;
        }
        else
        {
            servo_ops_rough = servo_code_rough_a;
            servo_ops_main = servo_code_a;
            //servo_ops_2 = servo_code_2_a;
        }

        ctle_peak_preset[0] = get_ptr(gcr_addr, rx_a_ctle_peak1_addr,  rx_a_ctle_peak1_startbit, rx_a_ctle_peak1_endbit);
        ctle_peak_preset[1] = get_ptr(gcr_addr, rx_a_ctle_peak2_addr,  rx_a_ctle_peak2_startbit, rx_a_ctle_peak2_endbit);
        set_debug_state(0x6002); // DEBUG - CTLE Bank A Setup
    }
    else
    {
        if (ctle_mode_setup)
        {
            servo_ops_rough = servo_code_north_b;
            servo_ops_main = servo_code_north_b;
            //servo_ops_2 = servo_code_north_b;
        }
        else
        {
            servo_ops_rough = servo_code_rough_b;
            servo_ops_main = servo_code_b;
            //servo_ops_2 = servo_code_2_b;
        }

        ctle_peak_preset[0] = get_ptr(gcr_addr, rx_b_ctle_peak1_addr,  rx_b_ctle_peak1_startbit, rx_b_ctle_peak1_endbit);
        ctle_peak_preset[1] = get_ptr(gcr_addr, rx_b_ctle_peak2_addr,  rx_b_ctle_peak2_startbit, rx_b_ctle_peak2_endbit);
        set_debug_state(0x6003); // DEBUG - CTLE Bank B Setup
    }

    int pk = 0; // This serves as both a results index value and a binary encode for the update function update_peak_and_status
    int abort_status = pass_code;

    if (exit_peak_on_servo_error(gcr_addr))
    {
        goto ABORT;
    }

    peak_out[0] = ctle_peak_preset[0];
    peak_out[1] = ctle_peak_preset[1];

    // Disable servo status for result at min/max
    PK_STATIC_ASSERT(rx_servo_status_error_en_width == 4); // Write values need to be updated if field width changes
    put_ptr_field(gcr_addr, rx_servo_status_error_en, 0b0011, read_modify_write);

    int32_t servo_result[4];

    if (first_run || rough_only)
    {
        //CTLE Rough Servo Pass
        abort_status = run_servo_ops_and_get_results(gcr_addr, c_servo_queue_general, num_servo_ops_ctle_rough, servo_ops_rough,
                       servo_result);
        abort_status |= check_rx_abort(gcr_addr);

        // Check status with exit
        if (exit_peak_on_servo_error(gcr_addr) || (abort_status != pass_code))
        {
            pk = 2;
            goto ABORT;
        }

        int rough_peak2 = (servo_result[1] + servo_result[3]) >> 1;

        if (bank == bank_a)
        {
            put_ptr(gcr_addr, rx_a_ctle_peak2_addr, rx_a_ctle_peak2_startbit, rx_a_ctle_peak2_endbit, rough_peak2,
                    read_modify_write);
        }
        else   //bank_b
        {
            put_ptr(gcr_addr, rx_b_ctle_peak2_addr, rx_b_ctle_peak2_startbit, rx_b_ctle_peak2_endbit, rough_peak2,
                    read_modify_write);
        }

        set_debug_state(0x6010); // DEBUG - CTLE Servo Rough Pass
    }

    if (rough_only)
    {
        goto EXIT;
    }

    uint16_t* servo_ops = servo_ops_main;

    // Run the Main Quad servo ops
    while (pk < 2)
    {
        int cnt = num_servo_ops_ctle;

        int pk_loop = 0;

        while (pk_loop < num_servo_ops_ctle)
        {
            if (first_run)
            {
                // Individually run servos from initial value of 0. PEAK1 Must be FIRST in the servo array
                cnt = 1;
                // Initially clear peak dac. under test
                update_peak_and_status(gcr_addr, bank, 0, 0, pk + 1, 0);
            }

            // Run All programmed servo ops based on modes above
            abort_status |= run_servo_ops_and_get_results(gcr_addr, c_servo_queue_general, cnt, &servo_ops[pk_loop],
                            &servo_result[pk_loop]);
            set_debug_state(0x6020 | mem_pg_field_get(rx_ctle_mode)); //DEBUG - CTLE Servo Quad Pass
            abort_status |= check_rx_abort(gcr_addr);

            pk_loop += cnt;

            // Check status with exit
            if (exit_peak_on_servo_error(gcr_addr) || (abort_status != pass_code))
            {
                goto ABORT;
            }
        }

        //Compute average of 2 median values and compare it is less than CQD away from min and max results
        // A difference value of 0 disables the check
        //If the deviation exceeds that value then indicate an abort and restore original PEAK
        if (!abort_status && !ctle_mode_setup)
        {
            set_debug_state(0x6026); //DEBUG - Check Results

            int CQD = mem_regs_u16_get(pg_addr(rx_ctle_quad_diff_thresh_addr), rx_ctle_quad_diff_thresh_mask,
                                       rx_ctle_quad_diff_thresh_shift);

            peak_out[pk] = get_ctle_median (servo_result, CQD, ctle_peak_preset[pk], &abort_status);
            //peak2_out = get_ctle_median (servo_result+4, CQD, ctle_peak2_preset, &abort_status);

        }
        else if (!abort_status && ctle_mode_setup)
        {
            // Only run a sigle servo op in ctle_mode=1
            peak_out[pk] = servo_result[0];
            //peak2_out = servo_result[1];
        }
        else
        {
            // Abort Condition - leave array 0 with original PEAK
            //peak_out[pk] = ctle_peak_preset[pk];
            //peak2_out = ctle_peak2_preset;
            set_debug_state(0x6080); //DEBUG - Recal Abort Condition
            goto ABORT;
        }

        // Post result averaging hysteresis applied to help reduce chances of result oscillation during Main VGA loop
        if (hysteresis_en && !first_run)
        {
            int hysteresis_lim = mem_pg_field_get(rx_ctle_hysteresis);
            bool restore = (hysteresis_lim >= abs(peak_out[pk] - ctle_peak_preset[pk]))  ;

            //&& (hysteresis_lim >= abs(peak2_out - ctle_peak2_preset))
            if (restore)
            {
                peak_out[pk] = ctle_peak_preset[pk];
                //peak2_out = ctle_peak2_preset;
            }
        }

        // Indicate if the peak value changed
        *peak_changed = (peak_out[pk] != ctle_peak_preset[pk]); // || (peak2_out != ctle_peak2_preset)

        // Write final result
        update_peak_and_status(gcr_addr, bank, peak_out[0], peak_out[1], pk + 1, 0);

        set_debug_state(0x6030); //DEBUG - Update Peak

        // Advance next loop servo op pointer by programmed length
        // NOTE: ONLY valid for pk == 0 & 1
        servo_ops = servo_ops_main + num_servo_ops_ctle;
        pk++;
    } // while (pk) loop

    //////////////////////////////////////////////////////////////

    if (bank == bank_a)
    {
        if (copy_peak_to_b)
        {
            // Copy A bank result to the B bank but only if we're now on bank A
            update_peak_and_status(gcr_addr, bank_b, peak_out[0], peak_out[1], 3, 0);
        }

        mem_pl_field_put(rx_a_ctle_peak1_done, lane, 0b1);
        mem_pl_field_put(rx_a_ctle_peak2_done, lane, 0b1);
    }
    else   //bank_b
    {
        mem_pl_field_put(rx_b_ctle_peak1_done, lane, 0b1);
        mem_pl_field_put(rx_b_ctle_peak2_done, lane, 0b1);
    }

    goto EXIT;

ABORT:
    // Write final result
    update_peak_and_status(gcr_addr, bank, ctle_peak_preset[0], ctle_peak_preset[1], pk + 1, 1);
    abort_status |= warning_code;

EXIT:
    set_debug_state(0x60FF); // DEBUG - CTLE Complete
    // Re-enable servo status for result at min/max
    put_ptr_field(gcr_addr, rx_servo_status_error_en, 0b1111, read_modify_write);

    // Return Status
    return abort_status;
} //eo_ctle_zfe
