/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_eoff.c $              */
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
// *! FILENAME    : eo_eoff.c
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
// mwh20111100 |mwh     | HW550299 -- changes make eoff more statibly
// mwh20101600 |mwh     | Change way clear is happen so we retain fails better.
// mwh20101300 |mwh     | After talking with Chris and Jim logger is back in this file, also scom set in vclq
// mwh20101200 |mwh     | Put loff fail clear into if to gate form clearing
// mwh20070700 |mwh     | Change DEBUG_RX_EOFF_EOFF_FAIL to DEBUG_RX_EOFF_POFF_FAIL for CQ528211 delta is for poff set
// mwh20022400 |mwh     | Add in warning fir to DFT fir so both get set if DFT check triggers
// cws20011400 |cws     | Added Debug Logs
// mwh20116000 |mwh     | HW512908 increased first stage filter to 3 and reduced first stage inc/dec to 2
// mwh19112000 |mwh     | Fix issue were we were going into a init only check, in recal hw512120
// bja19081900 |bja     | Set loff_fail var when fail conditions are met in !recal section
// mbs19072500 |mbs     | Added loff_setting_ovr_enb
// mwh19051700 |mwh     | HW492097 Change inc/dec for loff and eoff for change in step 4.6
// vbr19051400 |vbr     | HW491892: Change VDAC from 9-bit SM to 8-bit twos_comp
// mwh19043000 |mwh     | add set_fir(fir_code_dft_error);
// mwh19012100 |mwh     | Add rx_bist fail flag
// mwh19032100 |mwh     | Add in vga_loop_count so that we do not do the latch offset check more than once
// mwh19022600 |mwh     | Fix signed mag issue adn bank sel
// mwh19022500 |mwh     | Chagned poff_avg to sm 2^5 and 1 bit signed
// mwh19020500 |mwh     | Change timeout to 5 issue was something else
// mwh19020500 |mwh     | Change timeout to 6 for eoff since it triggering 5 to 6, out 70 runs 13 see timeout
// mwh19002060 |vbr     | Combined recal abort with hysteresis, and reduce logic
// vbr19012200 |vbr     | Added recal abort and servo op error handling
// mwh19020500 |mwh     | Add in hysteresis for recal only, and edge latch only
// mwh19011100 |mwh     | Add () to the || could could cause compare to wrong thing
// mwh18112800 |mwh     | Updated code to add poff to dac's and add in checks
// vbr18121000 |vbr     | Updated debug state for consistency.
// vbr18120500 |vbr     | Increased timeout from 4 to 5.
// vbr18111400 |vbr     | Updated calls to set_fir.
// mwh18070500 |mwh     | Initial Rev A0yy debug state
//------------------------------------------------------------------------------

#include <stdbool.h>
#include "io_lib.h"
#include "pk.h"
#include "servo_ops.h"
#include "eo_common.h"
#include "eo_eoff.h"
#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"
#include "io_logger.h"


// Declare servo op arrays as static globals so they are placed in static memory thus reducing code size and complexity.
#define num_servo_ops 4
#define c_loff_e_n000_op 0
#define c_loff_e_e000_op 1
#define c_loff_e_s000_op 2
#define c_loff_e_w000_op 3
static uint16_t servo_ops_eoff_a[num_servo_ops] = { c_loff_ae_n000, c_loff_ae_e000, c_loff_ae_s000, c_loff_ae_w000};
static uint16_t servo_ops_eoff_b[num_servo_ops] = { c_loff_be_n000, c_loff_be_e000, c_loff_be_s000, c_loff_be_w000};


/**
 * @brief Round to reduce bias
 * If the result is positive then we want  to the round up, if the result is neg then do nothing
 * - This is due to the twos complement of the negative number. in order to reduce bias
 * For example, if the numerator was 6 and you divide by 4, the result is 1.5 which should round up to 2.  (6+1)/4 = 0b0111 >> 2 = 1.  (6+2)/4 = 0b1000 >> 2 = 2.
 * @param[in] i_val average of 4 edge offsets
 * @param[out]round val of average of 4 edge offset
 *
 * @return new val
 */

//If Condition is true ? then value X : otherwise value Y
static inline int eo_eoff_round( const int i_val)
{
    // Find the rounded value of (i_val / 4)
    return ((i_val >= 0) ? (i_val + 2) : i_val) >> 2;
}

/**
 * @brief Averge to remove error
 * weight average with 1 to 3 weighting
 *
 * @param[in] i_e_after, is edge offset after servo op
 * @param[in] i_e_before, is edge offset of previous servo op
 * @param[out]round val of average of 4 edge offset
 *
 * @return new val
 */

static inline int eo_get_weight_ave( int i_e_after, int i_e_before)
{
    //shift by 2 is divide by 4
    int eoffn_next = (1 * i_e_after + 3 * i_e_before);
    int weight_average = eo_eoff_round(eoffn_next);
    return weight_average;
}



// Latch Offset (fenced)
int eo_eoff(t_gcr_addr* gcr_addr,  bool recal, int vga_loop_count, t_bank bank, bool bist_check)
{
    //start eo_eoff
    set_debug_state(0xA000); // DEBUG

    // Servo op based on bank
    uint16_t* servo_ops;
    uint32_t l_dac_addr;

    int servo_op_queue_empty = get_ptr_field(gcr_addr, rx_servo_op_queue_empty);
    int servo_op_queue_results_empty = get_ptr_field(gcr_addr, rx_servo_result_queue_empty);
    int lane = get_gcr_addr_lane(gcr_addr);

    int end_address;
    int edge_n_dac, edge_e_dac, edge_s_dac, edge_w_dac;

    int edge_before_n, edge_before_e, edge_before_s, edge_before_w;
    int edge_after_n, edge_after_e, edge_after_s, edge_after_w;

    int new_latch, new_latch_dac;
    int loff_fail = 0;
    int eoff_fail = 0;
    int delta_fail = 0;

    int rx_latchoff_check_en_int  = get_ptr(gcr_addr, rx_latchoff_check_en_addr, rx_latchoff_check_en_startbit,
                                            rx_latchoff_check_en_endbit);//pg
    int rx_eoff_check_en_int      = get_ptr(gcr_addr, rx_eoff_check_en_addr, rx_eoff_check_en_startbit,
                                            rx_eoff_check_en_endbit);//pg
    int rx_eoff_poff_check_en_int =  get_ptr(gcr_addr, rx_eoff_poff_check_en_addr, rx_eoff_poff_check_en_startbit,
                                     rx_eoff_poff_check_en_endbit);//pg

    int check_latchoff_min       =  TwosCompToInt(mem_pg_field_get(rx_latchoff_min_check),
                                    rx_latchoff_min_check_width); //ppe pg
    int check_latchoff_max       =  TwosCompToInt(mem_pg_field_get(rx_latchoff_max_check),
                                    rx_latchoff_max_check_width); //ppe pg
    int check_eoff_min           =  TwosCompToInt(mem_pg_field_get(rx_eoff_min_check), rx_eoff_min_check_width); //ppe pg
    int check_eoff_max           =  TwosCompToInt(mem_pg_field_get(rx_eoff_max_check), rx_eoff_max_check_width); //ppe pg
    int check_poff_min           =  TwosCompToInt(mem_pg_field_get(rx_epoff_min_check), rx_epoff_min_check_width); //ppe pg
    int check_poff_max           =  TwosCompToInt(mem_pg_field_get(rx_epoff_max_check), rx_epoff_max_check_width); //ppe pg

    int rx_eoff_fail_a = 0;
    int rx_eoff_poff_fail_a = 0;


    int status;

    set_debug_state(0xA001);

    if ((servo_op_queue_empty == 0) || (servo_op_queue_results_empty == 0) )
    {
        //servo check start
        //set ppe fir because servo op and result queue not empty
        set_debug_state(0xA008);
        set_fir(fir_code_warning);
        ADD_LOG(DEBUG_RX_EOFF_SERVO_QUEUE_NOT_EMPTY, gcr_addr, servo_op_queue_empty);
        return warning_code;
    }//servo check end
    else
    {
        //run servo start
        //turn on her but turned off in dccal latch offset code
        put_ptr_field(gcr_addr, rx_loff_livedge_mode, 0b1, read_modify_write);//livedge off mode


        // Switch for sim or lab to disable settings overrides
        int loff_setting_ovr = mem_regs_u16_get(pg_addr(loff_setting_ovr_enb_addr), loff_setting_ovr_enb_mask,
                                                loff_setting_ovr_enb_shift);

        if (( loff_setting_ovr == 0) && (vga_loop_count == 0))//only need to be set once HW550299
        {
            //used as default unless  loff_setting_ovr=1

            //HW550299 remove the different setting for recal
            //HW550299 Setting inc and dec to 0 step of 1  for all stages
            put_ptr_field(gcr_addr, rx_loff_inc_dec_amt0, 0b000, read_modify_write);
            put_ptr_field(gcr_addr, rx_loff_inc_dec_amt1, 0b000, read_modify_write);
            put_ptr_field(gcr_addr, rx_loff_inc_dec_amt2, 0b000, read_modify_write);
            put_ptr_field(gcr_addr, rx_loff_inc_dec_amt3, 0b000, read_modify_write);
            set_debug_state(0xA003);

            //
            //HW550299 change all filter to 10
            put_ptr_field(gcr_addr, rx_loff_filter_depth0, 0b1010, read_modify_write);
            put_ptr_field(gcr_addr, rx_loff_filter_depth1, 0b1010, read_modify_write);
            put_ptr_field(gcr_addr, rx_loff_filter_depth2, 0b1010, read_modify_write);
            put_ptr_field(gcr_addr, rx_loff_filter_depth3, 0b1010, read_modify_write);

            //HW550299 change thresh 1-3 to 0 and thresh 4
            //
            put_ptr_field(gcr_addr, rx_loff_thresh1, 0b00000, read_modify_write);
            put_ptr_field(gcr_addr, rx_loff_thresh2, 0b00000, read_modify_write);
            put_ptr_field(gcr_addr, rx_loff_thresh3, 0b00000, read_modify_write);
            put_ptr_field(gcr_addr, rx_loff_thresh4, 0b00011, read_modify_write);


            //HW550299 change to 1
            put_ptr_field(gcr_addr, rx_loff_hyst_start, 0b0001, read_modify_write);

        }//used as default unless  loff_setting_ovr=1

        if (bank == bank_a )
        {
            //bank A is alt B is main
            set_debug_state(0xA004); // DEBUG
            mem_pl_field_put(rx_a_eoff_done, lane, 0b0);//ppe pl
            edge_n_dac = get_ptr(gcr_addr, rx_ae_latch_dac_n_addr, rx_ae_latch_dac_n_startbit, rx_ae_latch_dac_n_endbit);//pl
            edge_e_dac = get_ptr(gcr_addr, rx_ae_latch_dac_e_addr, rx_ae_latch_dac_e_startbit, rx_ae_latch_dac_e_endbit);//pl
            edge_s_dac = get_ptr(gcr_addr, rx_ae_latch_dac_s_addr, rx_ae_latch_dac_s_startbit, rx_ae_latch_dac_s_endbit);//pl
            edge_w_dac = get_ptr(gcr_addr, rx_ae_latch_dac_w_addr, rx_ae_latch_dac_w_startbit, rx_ae_latch_dac_w_endbit);//pl
            servo_ops = servo_ops_eoff_a;
        }//bank A is alt B is main
        else
        {
            //bank B is alt A is main
            set_debug_state(0xA005); // DEBUG
            mem_pl_field_put(rx_b_eoff_done, lane, 0b0);//ppe pl
            edge_n_dac = get_ptr(gcr_addr, rx_be_latch_dac_n_addr, rx_be_latch_dac_n_startbit, rx_be_latch_dac_n_endbit);//pl
            edge_e_dac = get_ptr(gcr_addr, rx_be_latch_dac_e_addr, rx_be_latch_dac_e_startbit, rx_be_latch_dac_e_endbit);//pl
            edge_s_dac = get_ptr(gcr_addr, rx_be_latch_dac_s_addr, rx_be_latch_dac_s_startbit, rx_be_latch_dac_s_endbit);//pl
            edge_w_dac = get_ptr(gcr_addr, rx_be_latch_dac_w_addr, rx_be_latch_dac_w_startbit, rx_be_latch_dac_w_endbit);//pl
            servo_ops = servo_ops_eoff_b;
        }//bank B is alt A is main

        edge_before_n = LatchDacToInt(edge_n_dac);//pl
        edge_before_e = LatchDacToInt(edge_e_dac);//pl
        edge_before_s = LatchDacToInt(edge_s_dac);//pl
        edge_before_w = LatchDacToInt(edge_w_dac);//pl

        set_debug_state(0xA006);// DEBUG

        //Run all the servo latch offset ops and returns 2 comps
        int32_t servo_results[num_servo_ops];
        status = run_servo_ops_and_get_results(gcr_addr, c_servo_queue_general, num_servo_ops, servo_ops, servo_results);
        status |= check_rx_abort(gcr_addr);

        if (bank == bank_a )
        {
            //bank A is alt B is main
            l_dac_addr = rx_ad_latch_dac_n000_addr;
            end_address = rx_ad_latch_dac_w111_addr;
            edge_after_n = servo_results[c_loff_e_n000_op];
            edge_after_e = servo_results[c_loff_e_e000_op];
            edge_after_s = servo_results[c_loff_e_s000_op];
            edge_after_w = servo_results[c_loff_e_w000_op];
            set_debug_state(0xA009); // DEBUG
        }//bank A is alt B is main
        else
        {
            //bank B is alt A is main
            l_dac_addr = rx_bd_latch_dac_n000_addr;
            end_address = rx_bd_latch_dac_w111_addr;
            edge_after_n = servo_results[c_loff_e_n000_op];
            edge_after_e = servo_results[c_loff_e_e000_op];
            edge_after_s = servo_results[c_loff_e_s000_op];
            edge_after_w = servo_results[c_loff_e_w000_op];
            set_debug_state(0xA00A); // DEBUG
        }//bank B is alt A is main

        set_debug_state(0xA007); // DEBUG
    }//run servo end



//eoff_fence + poff = edge_after
// poff = edge_after - eoff_fence
//Going do averge since this is course poff




//Init checks -- eoff_after +-96, Loff_before(data) +-64, eoff_before +-32, poff delta +-10
//Recal checks --  eoff_after +-96 and  poff delta +-10

    int poff_n =  (edge_after_n - edge_before_n );
    int poff_e =  (edge_after_e - edge_before_e );
    int poff_s =  (edge_after_s - edge_before_s );
    int poff_w =  (edge_after_w - edge_before_w );

    //shift by 2 is divide by 4
    int poff_avg = ( poff_n +  poff_e + poff_s + poff_w);

    // get better rounded value of (i_val / 4)
    int poff_avg_int = eo_eoff_round(poff_avg);


    if (bank == bank_a )
    {
        //bank A is alt B is main
        mem_pl_field_put(poff_avg_a, lane, poff_avg_int );//pl
    }
    else
    {
        //bank B is alt A is main
        mem_pl_field_put(poff_avg_b, lane, poff_avg_int );//pl
        rx_eoff_fail_a = mem_pl_field_get(rx_eoff_fail, lane); //pl
        rx_eoff_poff_fail_a = mem_pl_field_get(rx_eoff_poff_fail, lane); //pl
    }

    int poff_n_delta = poff_n - poff_avg_int;
    int poff_e_delta = poff_e - poff_avg_int;
    int poff_s_delta = poff_s - poff_avg_int;
    int poff_w_delta = poff_w - poff_avg_int;



    //------------------------------------------------------------------------------------
    //this code is updating the Data Dac's with path offset. Either bank A or Bank B Dacs
    int loff_before;

    //no copy of a to b allowed
    //Do not updated edge latch since poff is already in it
    if (!recal)
    {
        //bank
        set_debug_state(0xA00B); // DEBUG

        for (; l_dac_addr <= end_address; ++l_dac_addr)
        {
            //begin1                                       a or b bank             7                         15
            loff_before = LatchDacToInt(get_ptr(gcr_addr, l_dac_addr, rx_ad_latch_dac_n000_startbit, rx_ad_latch_dac_n000_endbit)) ;

            if((rx_latchoff_check_en_int) && (vga_loop_count == 0))//this check is for before we add in path offset
            {
                //begin2
                //Check loff data latches before is +-64
                if ((loff_before >  check_latchoff_max) || (loff_before < check_latchoff_min))
                {
                    //begin3
                    mem_pl_field_put(rx_latch_offset_fail, lane, 0b1);//ppe pl
                    loff_fail = 1;
                    set_fir(fir_code_dft_error | fir_code_warning );
                    ADD_LOG(DEBUG_RX_EOFF_PRE_LOFF_LIMIT, gcr_addr, loff_before);
                }//end3
            }//end2

            new_latch = loff_before + poff_avg_int;
            new_latch_dac = IntToLatchDac(new_latch);
            put_ptr_fast(gcr_addr, l_dac_addr, rx_ad_latch_dac_n000_endbit, new_latch_dac);//pl
        }//end1

        set_debug_state(0xA00C); // DEBUG
    }//end bank

    //------------------------------------------------------------------------------------
    //This code will restore the value of the edge latches if the change is below what hysteresis value is given
    //default is set to 3
    //example:  before_value = 60, run servo-op after_value = 58 and the servo-op will update the edge dacs.
    //          we will overwrite the value back to before_value = 60
    //The range can be changed with ppe reg ppe_eoff_edge_hysteresis
    //using the delta between the before and after value of edge offset Dac
    //Only for recal

    int ppe_eoff_edge_hysteresis_int =  mem_pg_field_get(ppe_eoff_edge_hysteresis);//ppe pg
    bool restore_n = false;
    bool restore_e = false;
    bool restore_s = false;
    bool restore_w = false;

    if (recal)
    {
        //if recal begin
        if (status)
        {
            restore_n = true;    // Restore  settings on an abort or servo error (status != 0)
            restore_e = true;
            restore_s = true;
            restore_w = true;
        }
        else
        {
            //if not abort
            int weight_avr_n = eo_get_weight_ave(edge_after_n, edge_before_n); //getting weighted round average
            int weight_avr_e = eo_get_weight_ave(edge_after_e, edge_before_e); //getting weighted round average
            int weight_avr_s = eo_get_weight_ave(edge_after_s, edge_before_s); //getting weighted round average
            int weight_avr_w = eo_get_weight_ave(edge_after_w, edge_before_w); //getting weighted round average

            poff_n = weight_avr_n - edge_before_n ;//assign poff_n value
            poff_e = weight_avr_e - edge_before_e ;//assign poff_e value
            poff_s = weight_avr_s - edge_before_s ;//assign poff_s value
            poff_w = weight_avr_w - edge_before_w ;//assign poff_w value

            //Do not need a if bank A or B because up above selection of what servo to run apply to this
            if ( (abs(poff_n)) <= ppe_eoff_edge_hysteresis_int)
            {
                restore_n = true;    // Restore setting did not change enough
            }

            if ( (abs(poff_e)) <= ppe_eoff_edge_hysteresis_int)
            {
                restore_e = true;    // Restore setting did not change enough
            }

            if ( (abs(poff_s)) <= ppe_eoff_edge_hysteresis_int)
            {
                restore_s = true;    // Restore setting did not change enough
            }

            if ( (abs(poff_w)) <= ppe_eoff_edge_hysteresis_int)
            {
                restore_w = true;    // Restore setting did not change enough
            }

            if (bank == bank_a )
            {
                //bank A is alt B is main
                if (restore_n)
                {
                    put_ptr_field(gcr_addr, rx_ae_latch_dac_n, edge_n_dac, fast_write);   //pl if restore
                }
                else
                {
                    put_ptr_field(gcr_addr, rx_ae_latch_dac_n, IntToLatchDac(weight_avr_n), fast_write);   //pl if not restore
                }

                if (restore_e)
                {
                    put_ptr_field(gcr_addr, rx_ae_latch_dac_e, edge_e_dac, fast_write);   //pl if restore
                }
                else
                {
                    put_ptr_field(gcr_addr, rx_ae_latch_dac_e, IntToLatchDac(weight_avr_e), fast_write);   //pl if not restore
                }

                if (restore_s)
                {
                    put_ptr_field(gcr_addr, rx_ae_latch_dac_s, edge_s_dac, fast_write);   //pl if restore
                }
                else
                {
                    put_ptr_field(gcr_addr, rx_ae_latch_dac_s, IntToLatchDac(weight_avr_s), fast_write);   //pl if not restore
                }

                if (restore_w)
                {
                    put_ptr_field(gcr_addr, rx_ae_latch_dac_w, edge_w_dac, fast_write);   //pl if restore
                }
                else
                {
                    put_ptr_field(gcr_addr, rx_ae_latch_dac_w, IntToLatchDac(weight_avr_w), fast_write);   //pl if not restore
                }

                set_debug_state(0xA00D); // DEBUG
            }//bank A is alt B is main
            else
            {
                //bank B is alt A is main
                if (restore_n)
                {
                    put_ptr_field(gcr_addr, rx_be_latch_dac_n, edge_n_dac, fast_write);   //pl if restore
                }
                else
                {
                    put_ptr_field(gcr_addr, rx_be_latch_dac_n, IntToLatchDac(weight_avr_n), fast_write);   //pl if not restore
                }

                if (restore_e)
                {
                    put_ptr_field(gcr_addr, rx_be_latch_dac_e, edge_e_dac, fast_write);   //pl if restore
                }
                else
                {
                    put_ptr_field(gcr_addr, rx_be_latch_dac_e, IntToLatchDac(weight_avr_e), fast_write);   //pl if not restore
                }

                if (restore_s)
                {
                    put_ptr_field(gcr_addr, rx_be_latch_dac_s, edge_s_dac, fast_write);   //pl if restore
                }
                else
                {
                    put_ptr_field(gcr_addr, rx_be_latch_dac_s, IntToLatchDac(weight_avr_s), fast_write);   //pl if not restore
                }

                if (restore_w)
                {
                    put_ptr_field(gcr_addr, rx_be_latch_dac_w, edge_w_dac, fast_write);   //pl if restore
                }
                else
                {
                    put_ptr_field(gcr_addr, rx_be_latch_dac_w, IntToLatchDac(weight_avr_w), fast_write);   //pl if not restore
                }

                set_debug_state(0xA00E); // DEBUG
            }//bank B is alt A is main
        }//if not abort
    }//end if recal

    //------------------------------------------------------------------------------------


    //Check loff edge latches before is +-64 only should be once and then never again
    if((rx_latchoff_check_en_int) && (!recal) && (!status) && (vga_loop_count == 0))
    {
        //begin1
        if ((edge_before_n < check_latchoff_min)  || (edge_before_n > check_latchoff_max))
        {
            loff_fail = 1;
        }

        if ((edge_before_e < check_latchoff_min)  || (edge_before_e > check_latchoff_max))
        {
            loff_fail = 1;
        }

        if (( edge_before_s < check_latchoff_min) || (edge_before_s > check_latchoff_max))
        {
            loff_fail = 1;
        }

        if (( edge_before_w < check_latchoff_min) || (edge_before_w > check_latchoff_max))
        {
            loff_fail = 1;
        }

        set_debug_state(0xA00F); // DEBUG
    }//end1

    //Check loff edge latches before is +-96
    if ((rx_eoff_check_en_int) && (!status) && (bist_check))
    {
        //begin1
        if ((edge_after_n < check_eoff_min)  || (edge_after_n > check_eoff_max))
        {
            eoff_fail = 1;
        }

        if ((edge_after_e < check_eoff_min)  || (edge_after_e > check_eoff_max))
        {
            eoff_fail = 1;
        }

        if ((edge_after_s < check_eoff_min)  || (edge_after_s > check_eoff_max))
        {
            eoff_fail = 1;
        }

        if ((edge_after_w < check_eoff_min)  || (edge_after_w > check_eoff_max))
        {
            eoff_fail = 1;
        }

        set_debug_state(0xA010); // DEBUG
    }//end1

    //check for poff delta should be close to 0
    if ((rx_eoff_poff_check_en_int) && (!status) && (bist_check))
    {
        //begin1
        if ((poff_n_delta < check_poff_min) || (poff_n_delta > check_poff_max))
        {
            delta_fail = 1;
        }

        if ((poff_e_delta < check_poff_min) || (poff_e_delta > check_poff_max))
        {
            delta_fail = 1;
        }

        if ((poff_s_delta < check_poff_min) || (poff_s_delta > check_poff_max))
        {
            delta_fail = 1;
        }

        if ((poff_w_delta < check_poff_min) || (poff_w_delta > check_poff_max))
        {
            delta_fail = 1;
        }

        set_debug_state(0xA011); // DEBUG
    }//end1


    //------------------------------------------------------------------------------------

    if (loff_fail == 1)
    {
        mem_pl_field_put(rx_latch_offset_fail, lane, loff_fail);
        set_fir(fir_code_dft_error | fir_code_warning);
        ADD_LOG(DEBUG_RX_EOFF_LOFF_FAIL, gcr_addr, 0x0);
    }//ppe pl

    if (eoff_fail == 1)
    {
        mem_pl_field_put(rx_eoff_fail, lane, eoff_fail);
        set_fir(fir_code_dft_error | fir_code_warning);
        ADD_LOG(DEBUG_RX_EOFF_EOFF_FAIL, gcr_addr, 0x0);
    }//ppe pl

    if (delta_fail == 1)
    {
        mem_pl_field_put(rx_eoff_poff_fail, lane, delta_fail);
        set_fir(fir_code_dft_error | fir_code_warning);
        ADD_LOG(DEBUG_RX_EOFF_POFF_FAIL, gcr_addr, 0x0);
    }//ppe pl

    //Not having seperate PL fail registers for A and B bank cause the below
    //ABank run first and will have this set if fail is still high at end of vga loop
    //Init train BBank is next and we do not want BBank to clear it if been set and only
    //And if it not set and BBank has a fail than it will stay.  We do not check this in recal loop.
    if ((!recal) && (bank == bank_a ))
    {
        mem_pl_field_put(rx_latch_offset_fail, lane, loff_fail);   //ppe pl
    }

    //10162020 mwh Issue with code, if fail on Abank it will show Bbank also failing.
    //Abank     |  Bbank  |result on pg lane register
    //----------|---------|------------------
    //  no fail |    fail |Bank B lane show fail
    //----------|---------|---------------------
    //  no fail | no fail |NO lane show fail
    //----------|---------|---------------------------
    //   fail   |    fail |Bank A and B lane show fail
    //----------|---------|----------------------------
    //   fail   | no fail |Bank A and B lane show fail
    //--------- |---------|


    if (bist_check)
    {
        mem_pl_field_put(rx_eoff_fail, lane, (eoff_fail || rx_eoff_fail_a));//ppe pl
        mem_pl_field_put(rx_eoff_poff_fail, lane, (delta_fail || rx_eoff_poff_fail_a)); //ppe pl
    }

    if (bank == bank_a)
    {
        mem_pl_field_put(rx_a_eoff_done, lane, 0b1);   //ppe pl
    }
    else
    {
        mem_pl_field_put(rx_b_eoff_done, lane, 0b1);
    }

    set_debug_state(0xA012); // DEBUG

    //for bist if there is a servo error this get set -- help with debug
    if (status & 2 )
    {
        mem_pl_field_put(rx_eoff_fail, lane, 0b1);    //ppe pl
        set_debug_state(0xA0DD);
    }


    return status;
}//end eo_eoff

