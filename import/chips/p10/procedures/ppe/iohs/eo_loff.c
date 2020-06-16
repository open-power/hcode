/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_loff.c $              */
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
// *! FILENAME    : eo_loff.c
// *! TITLE       :
// *! DESCRIPTION : Run Latch Offset - with Integrator/CTLE Fenced -- data and edge
// *!             : only run during DC calibration
// *!
// *! OWNER NAME  : Mike Harper         Email: harperm@us.ibm.com
// *! BACKUP NAME : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// cws20011400 |cws     | Added Debug Logs
// mbs19072500 |mbs     | Moved live_edgeoff_mode out of loff_setting_ovr_enb umbrella
// mwh19051700 |mwh     | HW492097 changed inc/dec for change in step size
// mwh19040200 |mwh     | add a put of rx_loff_hyst_start to 5, to reset for loff
// mwh19020601 |mwh     | Combined abort and hyst
// mwh19020600 |mwh     | Moved bank sel to eo_main for loff
// mwh19011100 |mwh     | Add () to the || could could cause compare to wrong thing
// vbr18111400 |vbr     | Updated calls to set_fir.
// mwh18080700 |mwh     | Add in if statement so that we will not write the filter, inc/dec or timeout regs
// mwh18070500 |mwh     | Add in default filter and inc/dec to use with loff, because live edge offset
// vbr17111000 |vbr     | Updated function name to be more represntative of the step.
// mwh17110600 |mwh     | Add in if else for setting fence to 0 for A bank or B bank
// mwh17101800 |mwh     | Add in fix assigned at review of code
// mwh17092900 |mwh     | Add in fir write if queue are not empty
// vbr17092800 |vbr     | Abort no longer returned by run_servo_ops.
// mwh17090900 |mwh     | Add all latch offset servo ops into array
//-------------|--------|-------------------------------------------------------
// vbr17090500 |vbr     | Updated servo op constants.
// vbr17081400 |vbr     | Removed edge bank as a separately calibrated thing.
//-------------|--------|-------------------------------------------------------
// vbr17062901 |vbr     | Switched from PathOffsetToInt to TwosCompToInt.
// vbr17062900 |vbr     | Removed thread input from various functions.
// vbr17052300 |vbr     | Switched to new servo ops and using globals for them.
// vbr17052200 |vbr     | Commented out initial loff since no plans for it at this time.
// vbr17051800 |vbr     | Remove IOF code.
// vbr17042500 |vbr     | Added IOO thread support
// vbr17041800 |vbr     | Switched to using the servo op queue and disabled live-data edge offset.
// vbr17022200 |vbr     | Path offset is a mem_reg now.
// vbr16072900 |vbr     | Optimizations for code size
// vbr16062700 |vbr     | Switch to gcr_addr functions
// vbr16052400 |vbr     | Added set_debug_state
// vbr16031800 |vbr     | Initial Rev
//------------------------------------------------------------------------------

#include <stdbool.h>
#include "io_lib.h"
#include "pk.h"
#include "servo_ops.h"
#include "eo_common.h"
#include "eo_loff.h"
#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"
#include "io_logger.h"


// Declare servo op arrays as static globals so they are placed in static memory thus reducing code size and complexity.

static uint16_t servo_ops_loff_a[36] = { c_loff_ad_n000,  c_loff_ad_n001, c_loff_ad_n010, c_loff_ad_n011, c_loff_ad_n100, c_loff_ad_n101, c_loff_ad_n110, c_loff_ad_n111,
                                         c_loff_ad_e000,  c_loff_ad_e001, c_loff_ad_e010, c_loff_ad_e011, c_loff_ad_e100, c_loff_ad_e101, c_loff_ad_e110, c_loff_ad_e111,
                                         c_loff_ad_s000,  c_loff_ad_s001, c_loff_ad_s010, c_loff_ad_s011, c_loff_ad_s100, c_loff_ad_s101, c_loff_ad_s110, c_loff_ad_s111,
                                         c_loff_ad_w000,  c_loff_ad_w001, c_loff_ad_w010, c_loff_ad_w011, c_loff_ad_w100, c_loff_ad_w101, c_loff_ad_w110, c_loff_ad_w111,
                                         c_loff_ae_n000, c_loff_ae_e000, c_loff_ae_s000, c_loff_ae_w000
                                       };


static uint16_t servo_ops_loff_b[36] = { c_loff_bd_n000,  c_loff_bd_n001, c_loff_bd_n010, c_loff_bd_n011, c_loff_bd_n100, c_loff_bd_n101, c_loff_bd_n110, c_loff_bd_n111,
                                         c_loff_bd_e000,  c_loff_bd_e001, c_loff_bd_e010, c_loff_bd_e011, c_loff_bd_e100, c_loff_bd_e101, c_loff_bd_e110, c_loff_bd_e111,
                                         c_loff_bd_s000,  c_loff_bd_s001, c_loff_bd_s010, c_loff_bd_s011, c_loff_bd_s100, c_loff_bd_s101, c_loff_bd_s110, c_loff_bd_s111,
                                         c_loff_bd_w000,  c_loff_bd_w001, c_loff_bd_w010, c_loff_bd_w011, c_loff_bd_w100, c_loff_bd_w101, c_loff_bd_w110, c_loff_bd_w111,
                                         c_loff_be_n000, c_loff_be_e000, c_loff_be_s000, c_loff_be_w000
                                       };




// Latch Offset (fenced)
int eo_loff_fenced(t_gcr_addr* gcr_addr, t_bank bank)
{
    //start eo_loff
    set_debug_state(0x4000); // DEBUG

    // int abort_status, abort_status_d, abort_status_e;
    // Servo op based on bank
    unsigned int num_servo_ops;
    uint16_t* servo_ops;



    int servo_op_queue_empty = get_ptr_field(gcr_addr, rx_servo_op_queue_empty);
    int servo_op_queue_results_empty = get_ptr_field(gcr_addr, rx_servo_result_queue_empty);
    set_debug_state(0x4001);

    if ((servo_op_queue_empty == 0) || (servo_op_queue_results_empty == 0) )
    {
        //servo check start
        //set ppe fir because servo op and result queue not empty
        set_debug_state(0x4005);
        set_fir(fir_code_warning);
        ADD_LOG(DEBUG_RX_LOFF_SERVO_QUEUE_NOT_EMPTY, gcr_addr, servo_op_queue_empty);
        return warning_code;
    }//servo check end
    else
    {
        //run servo start and set default filter and inc/dec
        put_ptr_field(gcr_addr, rx_loff_livedge_mode, 0b0, read_modify_write);//livedge off mode

        int loff_setting_ovr = mem_regs_u16_get(pg_addr(loff_setting_ovr_enb_addr), loff_setting_ovr_enb_mask,
                                                loff_setting_ovr_enb_shift);

        // setting back to dccal latch offsetmode

        if ( loff_setting_ovr == 0)
        {
            put_ptr_field(gcr_addr, rx_loff_filter_depth0, 0b0011, read_modify_write);// 3    3
            put_ptr_field(gcr_addr, rx_loff_filter_depth1, 0b0011, read_modify_write);// 4    3
            put_ptr_field(gcr_addr, rx_loff_filter_depth2, 0b0011, read_modify_write);// 5    3
            put_ptr_field(gcr_addr, rx_loff_filter_depth3, 0b0100, read_modify_write);// 7    4

            put_ptr_field(gcr_addr, rx_loff_inc_dec_amt0, 0b100, read_modify_write);  // 5    6
            put_ptr_field(gcr_addr, rx_loff_inc_dec_amt1, 0b010, read_modify_write);  // 4    3
            put_ptr_field(gcr_addr, rx_loff_inc_dec_amt2, 0b010, read_modify_write);  // 1    3
            put_ptr_field(gcr_addr, rx_loff_inc_dec_amt3, 0b000, read_modify_write);  // 0    0

            put_ptr_field(gcr_addr, rx_loff_timeout, 0b0011, read_modify_write);

            //change for Loff to 5 since this is one time call
            //change default to 4 for eoff
            put_ptr_field(gcr_addr, rx_loff_hyst_start, 0b00101, read_modify_write);
        }

        //setting fence for latch offset(data and edge done by same commmand) and alt and main
        if (bank == bank_a )
        {
            //bank A is alt B is main
            set_debug_state(0x4002); // DEBUG
            put_ptr_field(gcr_addr, rx_a_fence_en , 0b1, read_modify_write);
            servo_ops = servo_ops_loff_a;
        }//bank A is alt B is main

        else
        {
            //bank B is alt A is main
            set_debug_state(0x4003); // DEBUG
            put_ptr_field(gcr_addr, rx_b_fence_en , 0b1, read_modify_write);
            servo_ops = servo_ops_loff_b;
        }//bank B is alt A is main


        set_debug_state(0x4004);// DEBUG
        num_servo_ops = 36;

        //Run all the servo latch offset ops
        run_servo_ops_with_results_disabled(gcr_addr, c_servo_queue_general, num_servo_ops, servo_ops);

        //Setting fence back to default value after servo ops
        if (bank == bank_a )
        {
            put_ptr_field(gcr_addr, rx_a_fence_en , 0b0, read_modify_write);
        }
        else
        {
            put_ptr_field(gcr_addr, rx_b_fence_en , 0b0, read_modify_write);
        }

        set_debug_state(0x4006); // DEBUG
    }//run servo end

    int lane = get_gcr_addr_lane(gcr_addr);

    if (bank == bank_a)
    {
        mem_pl_field_put(rx_a_latch_offset_done, lane, 0b1);   //ppe pl
    }
    else
    {
        mem_pl_field_put(rx_b_latch_offset_done, lane, 0b1);
    }

    return pass_code;
}//end eo_loff_fenced
