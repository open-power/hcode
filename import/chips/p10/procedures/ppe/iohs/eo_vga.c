/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_vga.c $               */
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
// *! FILENAME    : eo_vga.c
// *! TITLE       :
// *! DESCRIPTION : Run VGA
// *!
// *! OWNER NAME  : Mike Harper         Email: harperm@us.ibm.com
// *! BACKUP NAME : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// mwh20012500 |mwh     | Change jump_table_used to pl hw518572 only the first lane called was using jump_table
// mwh19120900 |mwh     | Change rx_vga_converged per groupt ppe to per lane ppe
// mwh19101000 |mwh     | Change servo to get servo result with error, and put in if statement to turn
//             |        | off max and min for first loop -- than get turn back on --CQ507994
// mwh19093000 |mwh     | Change jumpt table to do 50% of target.
// vbr19081300 |vbr     | Removed mult_int16 (not needed for ppe42x)
// mwh19022000 |mwh     | debug value had wrong value used for rxbist now
// vbr19012200 |vbr     | Added recal abort handling
// mwh18120700 |mwh     | Add in done bit
// mwh18112900 |mwh     | Changed 51xx to 508x -- per Mike Spear
// mwh18101100 |mwh     | Changed if else to else for jumptable = 1.  get rid of 22
// mwh18100200 |mwh     | Removed code that would never be hit begin 13 and 16 end 13 and 16,
//             |mwh     |  also change == for max_gain to <=.  CQ467235
// cws18092600 |cws     | Moved the servo setup reg accesses to rx_eo_servo_setup()
// mbs18091800 |mbs     | Changed from Ap11111/An00000 measurements to biased Apxxxxx/Anxxxxx to find Amax
// mwh18091300 |mwh     | Removed breaks form code except at gain = 0,15 and jump loop
// mwh18090500 |mwh     | Change request 462233 by Mike Spear -- Want VGA loop count to only ++ on increasing init only
// mwh18032100 |mwh     | Fix for CQ453214 Min on recal was not increasing gain.  Would break out of loop
// mwh18061400 |mwh     | Put debug vga for variable capture and change main recal path state debug to 51XX
// mwh18041800 |mwh     | Fix for CQ443576 and CQ444916
//-------------|--------|-------------------------------------------------------
// mwh18032100 |mwh     | Add = to coveerged 2 that was left off line 234 Pg4-2
//------------------------------------------------------------------------------
// mwh18030800 |mwh     | Initial Rev works
//------------------------------------------------------------------------------
//0x50yy is vga debug state

//Things to add
//02/15/18 Need to add register to capture that we did not converge and why

#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "servo_ops.h"
#include "eo_common.h"
#include "eo_vga.h"

#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"


// These will actually be used as biased Apxxxxx and Anxxxxx servos to find Amax directly
#define c_ap_xxx1x_ad_n000             amp_servo_op(0b00010, 0b00010, c_latch_ad_n000)
#define c_an_xxx0x_ad_n000             amp_servo_op(0b00010, 0b00000, c_latch_ad_n000)
#define c_ap_xxx1x_bd_n000             amp_servo_op(0b00010, 0b00010, c_latch_bd_n000)
#define c_an_xxx0x_bd_n000             amp_servo_op(0b00010, 0b00000, c_latch_bd_n000)

// Declare servo op arrays as static globals so they are placed in static memory thus reducing code size and complexity.
static uint16_t servo_ops_gain_a[2] = { c_ap_xxx1x_ad_n000, c_an_xxx0x_ad_n000 };
static uint16_t servo_ops_gain_b[2] = { c_ap_xxx1x_bd_n000, c_an_xxx0x_bd_n000 };


///////////////////////////////////
// VGA Jump Table (0.9 of target)
///////////////////////////////////
#define vga_jump_table_size  9
#define vga_jump_table_max   (vga_jump_table_size - 1)
const uint8_t vga_jump_table[vga_jump_table_size] =
{
//Jumptable was 10 but moving down to 50% we only need 8 place
//target 50%                            90%    80%  70%  60%  50%
    //8,   // ratio <= 0.3750        15,    13,  11,  10    ,
    8,   // ratio <= 0.4375        12,    11,  9,   8    8,
    7,   // ratio <= 0.5000        10,    9,   8,   7    7,
    6,   // ratio <= 0.5625         8,    7,   6,   5    6,
    5,   // ratio <= 0.6250         7,    6,   5,   4    5,
    4,   // ratio <= 0.6875         5,    5,   4,   3    4,
    3,   // ratio <= 0.7500         4,    4,   3,   2    3,
    2,   // ratio <= 0.8125         3,    3,   2,   2    2,
    1,   // ratio <= 0.8750         2,    2,   1,   1    1,
    0    // ratio <  1.0000         1     1    0    0    0
};


//////////////////////////
// VGA
//////////////////////////
//int eo_vga(t_gcr_addr *gcr_addr, t_bank bank, bool *gain_changed, bool recal, bool copy_gain_to_b, bool copy_gain_to_b_loop, bool first_loop_iteration) {
//  // Call the Gain Loop
//  int status = eo_vga_gain(gcr_addr, bank, gain_changed, recal, copy_gain_to_b, copy_gain_to_b_loop,first_loop_iteration);
//  return status;
//} //eo_vga_ioo


//---Begin copy function bank a to bank b---------------------------------------------------------------------------------------------//
void write_a_copy_b (t_gcr_addr* gcr_addr, int gain, t_bank bank,
                     int copy_gain_to_b )                                                //
{
    //
    if (bank == bank_a)                                                                                                   //
    {
        //
        put_ptr(gcr_addr, rx_a_ctle_gain_addr, rx_a_ctle_gain_startbit, rx_a_ctle_gain_endbit, gain, read_modify_write);  //
        set_debug_state(0x5040);                                                                                          //
    }                                                                                                                   //
    else                                                                                                                  //
    {
        //
        put_ptr(gcr_addr, rx_b_ctle_gain_addr, rx_b_ctle_gain_startbit, rx_b_ctle_gain_endbit, gain, read_modify_write);  //
        set_debug_state(0x5041);                                                                                          //
    }                                                                                                                   //

    if (copy_gain_to_b)                                                                                                   //
    {
        //
        put_ptr(gcr_addr, rx_b_ctle_gain_addr, rx_b_ctle_gain_startbit, rx_b_ctle_gain_endbit, gain, read_modify_write);   //
        set_debug_state(0x5042);                                                                                           //
    }                                                                                                                   //
}                                                                                                                                     //
//---end copy function bank a to bank b-----------------------------------------------------------------------------------------------//



//////////////////////////
// VGA Gain Loop Function
//////////////////////////
int eo_vga(t_gcr_addr* gcr_addr, t_bank bank, bool* gain_changed, bool recal, bool copy_gain_to_b,
           bool copy_gain_to_b_loop, bool first_loop_iteration)
{
    //begin eo_vga_gain                                                                                                                      //
    set_debug_state(
        0x5000);                                                                                                                  //
    int lane = get_gcr_addr_lane(
                   gcr_addr);                                                                                                                                          //
    // Set up Apxxxxx and Anxxxxx servos with biased filters to find Amax.
    // This has the advantage of being bank independent and more peaking independent.
    rx_eo_servo_setup(gcr_addr, SERVO_SETUP_VGA);
    //Pg1-0
    int loop_cnt_max = mem_regs_u16_get(pg_addr(rx_amp_gain_cnt_max_addr), rx_amp_gain_cnt_max_mask,
                                        rx_amp_gain_cnt_max_shift);             //
    int jump_table_used = mem_pl_field_get(jump_table_used,
                                           lane);                                                                      //
//set_debug_state(loop_cnt_max);                                                                                                         //
    set_debug_state(
        0x5001);                                                                                                                 //
    //
    // Step 0 reading Gain value in Regdef register                                                                                         //
    int gain;                                                                                                                               //Pg1-1,2,3

    if (bank ==
        bank_a)                                                                                                                     //Pg1-1,2,3
    {
        gain = get_ptr(gcr_addr, rx_a_ctle_gain_addr, rx_a_ctle_gain_startbit,
                       rx_a_ctle_gain_endbit);                                        //Pg1-1,2,3
        mem_pl_field_put(rx_a_ctle_gain_done, lane, 0b0);
    }
    else     //bank_b                                                                                                                       //Pg1-1,2,3
    {
        gain = get_ptr(gcr_addr, rx_b_ctle_gain_addr, rx_b_ctle_gain_startbit,
                       rx_b_ctle_gain_endbit);                                        //Pg1-1,2,3
        mem_pl_field_put(rx_b_ctle_gain_done, lane, 0b0);
    }                                                                                                                                       //

    set_debug_state(
        0x5002);                                                                                                                //
    //
    uint16_t* servo_ops;                                                                                                                    //

    if (bank ==
        bank_a)                                                                                                                     //Pg1-1,2,3
    {
        servo_ops =
            servo_ops_gain_a;                                                                                                         //Pg1-1,2,3
    }
    else     //bank_b                                                                                                                       //Pg1-1,2,3
    {
        servo_ops =
            servo_ops_gain_b;                                                                                                         //Pg1-1,2,3
    }                                                                                                                                       //Pg1-1,2,3

    set_debug_state(
        0x5003);                                                                                                                //
    //
    //Step 4 setting up variables                                                                                                           //
    int start_gain =
        gain;    //used to cut of vga outer loop                                                                               //Pg1-4
    bool run_loop =
        true;     //used to cut of inter loop                                                                                   //Pg1-4
    int min_gain =
        0;         //min gain setting                                                                                            //Pg1-4
    int max_gain =
        15;        //Target to hit, max target                                                                                   //Pg1-4
    int Amax_target = mem_regs_u16_get(pg_addr(rx_vga_amax_target_addr), rx_vga_amax_target_mask,
                                       rx_vga_amax_target_shift);                //Pg1-4 Target to hit
    int max_range =   mem_regs_u16_get(pg_addr(rx_vga_recal_max_target_addr), rx_vga_recal_max_target_mask,
                                       rx_vga_recal_max_target_shift); //Pg1-4  Recal path max range
    int min_range =   mem_regs_u16_get(pg_addr(rx_vga_recal_min_target_addr), rx_vga_recal_min_target_mask,
                                       rx_vga_recal_min_target_shift); //Recal  Recal path min range
    //
    //int low_target = 180; // ((max_range + min_range)>> 1); //same as ((max_range + min_range)/2)                                         //Pg1-4
    int jump_target = mem_regs_u16_get(pg_addr(rx_vga_jump_target_addr), rx_vga_jump_target_mask,
                                       rx_vga_jump_target_shift);                //
    int loop_count =
        0;                             //loop_count for inter loop vga                                                         //Pg1-4
    int converged =
        false;                                                                                                                  //Pg1-4
    int Amax = mem_regs_u16_get(pg_addr(rx_vga_amax_addr), rx_vga_amax_mask,
                                rx_vga_amax_shift);                                             //Pg1-4
    int last_gain =
        gain;                                                                                                                   //Pg1-4
    int last_Amax;                                                                                                                          //Pg1-4
    //
//Convergence loop -----------------------------------------------------------------------------------------------------------------------//
    mem_regs_u16_put(pl_addr(rx_vga_converged_addr, lane), rx_vga_converged_mask, rx_vga_converged_shift,
                     0 );                                     //

    while (run_loop)                                                                                                                        //Pg1-5
    {
        //begin while                                                                                                                           //
        set_debug_state(
            0x5004);                                                                                                          //
        //loop_count++;                                                                                                                     //Pg1-6
        mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift,
                         loop_count);                                    //
        // Run the servo ops results are two's complement                                                                                 //
        int32_t results[2];

        // Disable servo status for result at min/max fpr first loop only
        PK_STATIC_ASSERT(rx_servo_status_error_en_width == 4); // Write values need to be updated if field width changes

        if(first_loop_iteration) // Disable servo status for result at min/max
        {
            put_ptr_field(gcr_addr, rx_servo_status_error_en, 0b0011, read_modify_write);
        }

        //Pg1-6
        //TwosCompToInt                                                                                                                   //
        run_servo_ops_and_get_results(gcr_addr, c_servo_queue_amp_meas, 2, servo_ops,
                                      results);                                           //Pg1-7

        // Re-enable servo status for result at min/max
        put_ptr_field(gcr_addr, rx_servo_status_error_en, 0b1111, read_modify_write);

        // Ignore servo errors (could rail due to incorrect gain).
        // Check for recal abort and return without changing gain on an abort.
        int abort_status = check_rx_abort(gcr_addr);

        if (abort_status)
        {
            set_debug_state(
                0x5005);                                                                                                        //Pg1-8,9 Recal Abort
            return abort_status;
        }

        //
        last_Amax =
            Amax;                                                                                                                 //Pg1-10
        Amax = ((results[0] - results[1]) >>
                1);                                                                                           //Pg1-10
        mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift,
                         results[0]);                                   //
        mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift,
                         results[1]);                                   //
        set_debug_state(
            0x5006);                                                                                                          //

        //
        if(!recal)                                                                                                                        //Pg2-1
        {
            //begin1                                                                                                                     //
            set_debug_state(
                0x5007);                                                                                                   //
            mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift,
                             Amax);                                  //
            jump_table_used = mem_pl_field_get(jump_table_used, lane);
            mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift,
                             jump_table_used);                       //Pg2-2

            if((Amax >=
                Amax_target))//decreasing                                                                                      //Pg2-3
            {
                //begin2                                                                                                                 //
                set_debug_state(
                    0x5008);                                                                                                //

                if (gain ==
                    min_gain)                                                                                                   //Pg2-6
                {
                    //begin3                                                                                                             //
                    set_debug_state(0x5009);                                                                                           //
                    break;                                                                                                             //Pg6-1
                }//end3                                                                                                               //
                else                                                                                                                    //
                {
                    //begin4                                                                                                             //
                    mem_pl_field_put(jump_table_used, lane, 0b1);                                                                    //Pg2-5
                    set_debug_state(0x5010);                                                                                            //
                    mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift, last_Amax);                     //
                    mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift, gain);                          //
                    mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift, last_gain);                     //

                    if((last_Amax < Amax_target) && (Amax >= Amax_target)
                       && (gain == (last_gain + 1)))                                  //Pg4-1 converged 1
                    {
                        //begin5                                                                                                          //
                        set_debug_state(0x5011);                                                                                         //
                        write_a_copy_b (gcr_addr, gain, bank,
                                        copy_gain_to_b );                                                          //Pg4-5to9
                        mem_regs_u16_put(pl_addr(rx_vga_converged_addr, lane), rx_vga_converged_mask, rx_vga_converged_shift, 1);          //
                        converged = true;                                                                                                //
                    }//end5                                                                                                            //
                    else if((last_Amax >= Amax_target) && (Amax <= Amax_target)
                            && (gain + 1 == last_gain))                              //Pg4-2 converged 2
                    {
                        //begin6                                                                                                      //
                        set_debug_state(0x5012);                                                                                     //
                        gain = last_gain;                                                                                            //Pg4-4
                        write_a_copy_b (gcr_addr, gain, bank, copy_gain_to_b );                                                      //Pg4-5to9
                        mem_regs_u16_put(pl_addr(rx_vga_converged_addr, lane), rx_vga_converged_mask, rx_vga_converged_shift, 2);         //
                        converged = true;                                                                                            //
                    }//end6                                                                                                        //
                    else                                                                                                                 //
                    {
                        //begin7                                                                                                      //
                        last_gain = gain;                                                                                            //Pg4-3
                        gain = gain - 1;                                                                                             //Pg4-3
                        write_a_copy_b (gcr_addr, gain, bank, copy_gain_to_b_loop );                                                 //Pg4-5to9
                        mem_regs_u16_put(pl_addr(rx_vga_converged_addr, lane), rx_vga_converged_mask, rx_vga_converged_shift, 10);        //
                        converged = false;                                                                                           //
                        set_debug_state(0x5013);                                                                                     //
                    }//end7                                                                                                        //
                }//end4                                                                                                               //
            }//end2                                                                                                                   //
            else if( gain >=
                     max_gain)                                                                                                  //Pg2-6
            {
                set_debug_state(0x5014);    //
                break;
            }
            else if(jump_table_used ==
                    0)//increasing                                                                                   //Pg3-1
            {
                //begin8
                loop_count++;                                                                                                      //
                set_debug_state(0x5015);                                                                                          //
                //int ratio_target = low_target / 2;                                                                              //
                int ratio_step =   jump_target >>
                                   4;//11.25                                                                       //Pg3-2
                int ratio_target_mult = 6 *
                                        jump_target;                                                                          //Pg3-2
                int ratio_target = (ratio_target_mult) >> 4
                                   ;//67.5                                                               //Pg3-2
                int ratio_index =
                    0;                                                                                              //Pg3-2
                int Amax_ratio = Amax;                                                                                            //
                mem_pl_field_put(jump_table_used, lane, 0b1);//Pg3-2

                //
                for(ratio_index = 0; ratio_index < vga_jump_table_max;
                    ratio_index++)                                             //Pg3-3
                {
                    //begin9                                                                                                       //
                    set_debug_state(0x5016);                                                                                       //

                    if(Amax_ratio <= ratio_target)
                    {
                        set_debug_state(0x5017);    //Pg3-4
                        break;
                    }
                    else
                    {
                        ratio_target = (ratio_target + ratio_step );    //Pg3-5
                        set_debug_state(0x5018);
                    }
                }//end9                                                                                                         //

                gain = gain +
                       vga_jump_table[ratio_index];                                                                        //Pg3-6
                set_debug_state(0x5019);                                                                                          //
                mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift, last_Amax);                   //
                mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift, Amax_target);                 //
                mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift, gain);                        //
                mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift, last_gain);                   //

                if(gain > max_gain)                                                                                               //Pg3-7
                {
                    //begin10                                                                                                    //
                    set_debug_state(0x5020);                                                                                     //
                    gain = max_gain;                                                                                             //Pg3-7
                    write_a_copy_b (gcr_addr, gain, bank, copy_gain_to_b );                                                      //Pg3-8
                }//end10                                                                                                      //

                if((last_Amax < Amax_target) && (Amax >= Amax_target)
                   && (gain == (last_gain + 1)))                             //Pg4-1 converged 1
                {
                    //begin12                                                                                                     //
                    write_a_copy_b (gcr_addr, gain, bank, copy_gain_to_b );                                                       //Pg4-5to9
                    mem_regs_u16_put(pl_addr(rx_vga_converged_addr, lane), rx_vga_converged_mask, rx_vga_converged_shift, 3);         //
                    converged = true;                                                                                             //
                    set_debug_state(0x5021);                                                                                      //
                }//end12                                                                                                       //
                else                                                                                                            //
                {
                    //begin14                                                                                                      //
                    set_debug_state(0x5023);                                                                                      //
                    write_a_copy_b (gcr_addr, gain, bank,
                                    copy_gain_to_b_loop );                                                  //Pg4-5to9
                    mem_regs_u16_put(pl_addr(rx_vga_converged_addr, lane), rx_vga_converged_mask, rx_vga_converged_shift, 11);         //
                    converged = false;                                                                                            //
                    set_debug_state(
                        0x5024);                                                                                      //
                }//end14                                                                                                        //
            }//end8                                                                                                             //
            //else if((jump_table_used == 1))//increasing                                                                                 //Pg3-1
            else
            {
                //begin15                                                                                                            //
                loop_count++;                                                                                                      //
                set_debug_state(0x5025);                                                                                        //Pg3-9
                mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift, last_Amax);                 //
                mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift, Amax_target);               //
                mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift, gain);                      //
                mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift, last_gain);                 //

                if((last_Amax < Amax_target) && (Amax >= Amax_target)
                   && (gain == (last_gain + 1)))                             //Pg4-1 converged 1
                {
                    //begin18                                                                                                     //
                    write_a_copy_b (gcr_addr, gain, bank, copy_gain_to_b );                                                       //Pg4-5to9
                    mem_regs_u16_put(pl_addr(rx_vga_converged_addr, lane), rx_vga_converged_mask, rx_vga_converged_shift, 5);          //
                    converged = true;                                                                                             //
                    set_debug_state(0x5026);                                                                                      //
                }//end18                                                                                                       //
                else if((last_Amax >= Amax_target) && (Amax <= Amax_target)
                        && (gain + 1 == last_gain))                         //Pg4-2 converged 2
                {
                    //begin19                                                                                                     //
                    gain = last_gain;                                                                                             //Pg4-4
                    write_a_copy_b (gcr_addr, gain, bank, copy_gain_to_b );                                                       //Pg4-5to9
                    set_debug_state(0x5027);                                                                                      //
                    mem_regs_u16_put(pl_addr(rx_vga_converged_addr, lane), rx_vga_converged_mask, rx_vga_converged_shift, 6);          //
                    converged = true;                                                                                             //
                }//end19                                                                                                       //
                else                                                                                                            //
                {
                    //begin20                                                                                                     //
                    last_gain = gain;                                                                                            //Pg4-3
                    gain = gain +
                           1;                                                                                             //Pg4-3
                    write_a_copy_b (gcr_addr, gain, bank, copy_gain_to_b_loop );                                                 //Pg4-5to9
                    mem_regs_u16_put(pl_addr(rx_vga_converged_addr, lane), rx_vga_converged_mask, rx_vga_converged_shift, 12);        //
                    converged = false;                                                                                           //
                    set_debug_state(0x5028);                                                                                     //
                }//end20                                                                                                       //

                //}//end17                                                                                                      //
            }//end15                                                                                                              //
        }//end1                                                                                                                       //
        //recal path                                                                                                                      //
        else if (Amax >
                 max_range)                                                                                                        //Pg2-7-8
        {
            //begin21                                                                                                                      //
            set_debug_state(
                0x5080);                                                                                                       //

            if (gain !=
                min_gain)                                                                                                         //
            {
                //begin22                                                                                                                  //
                gain = gain -
                       1;                                                                                                           //pg2-9
                write_a_copy_b (gcr_addr, gain, bank,
                                copy_gain_to_b );                                                                    //Pg4-5to9
                mem_regs_u16_put(pl_addr(rx_vga_converged_addr, lane), rx_vga_converged_mask, rx_vga_converged_shift,
                                 8);                       //
                converged =
                    true;                                                                                                         //
                set_debug_state(
                    0x5081);                                                                                                  //
            }//end22                                                                                                                    //
        }//end21                                                                                                                        //
        else if (Amax <
                 min_range)                                                                                                       //
        {
            //begin23                                                                                                                      //
            set_debug_state(
                0x5082);                                                                                                      //

            if (gain !=
                max_gain)                                                                                                         //
            {
                //begin24                                                                                                                  //
                gain = gain +
                       1;                                                                                                           //Pg2-13
                write_a_copy_b (gcr_addr, gain, bank,
                                copy_gain_to_b_loop );                                                                //Pg4-5to
                mem_regs_u16_put(pl_addr(rx_vga_converged_addr, lane), rx_vga_converged_mask, rx_vga_converged_shift,
                                 9);                         //
                converged =
                    true;                                                                                                          //
                set_debug_state(
                    0x5083);                                                                                                   //
            }//end24                                                                                                                    //
        }//end23                                                                                                                        //
        else                                                                                                                              //
        {
            //begin25                                                                                                                      //
            mem_regs_u16_put(pl_addr(rx_vga_converged_addr, lane), rx_vga_converged_mask, rx_vga_converged_shift,
                             7);                            //
            converged =
                true;                                                                                                             //
            set_debug_state(
                0x5084);                                                                                                      //
        }//end25                                                                                                                        //

        run_loop = ((!recal && !converged)
                    && (loop_count != loop_cnt_max));                                                              //Pg4-9
        set_debug_state(
            0x5035);                                                                                                          //
    } //end while                                                                                                                        //

    //
    // Return Success gain change or not                                                                                                //
    if ((first_loop_iteration)
        || (recal))                                                                                              //Pg6-1
    {
        set_debug_state(
            0x5036);                                                                                                       //

        if (start_gain ==
            gain)                                                                                                         //Pg6-2
        {
            *gain_changed = false;   //Pg6-3
        }
        else                                                                                                                            //
        {
            *gain_changed = true;   //Pg6-4
        }
    }                                                                                                                                  //
    else//for outer loop converged                                                                                                      //
    {
        set_debug_state(
            0x5037);                                                                                                       //

        if ((start_gain == gain + 1) || (start_gain == gain - 1)
            || (start_gain == gain ))                                              //Pg6-5
        {
            *gain_changed = false;    //Pg6-6
            set_debug_state(0x5038);
        }
        else                                                                                                                            //
        {
            *gain_changed = true;    //
            set_debug_state(0x5039);
        }
    }                                                                                                                                 //Pg6-7

    //
    mem_regs_u16_put(pg_addr(rx_vga_amax_addr), rx_vga_amax_mask, rx_vga_amax_shift,
                     Amax);// ppe resgiter log Amax before exit         //Pg6-8
    //
    mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift,
                     Amax);                                           //
    mem_regs_u16_put(pg_addr(rx_vga_debug_addr), rx_vga_debug_mask, rx_vga_debug_shift,
                     gain);                                           //

    set_debug_state(
        0x5043);                                                                                                            //

    if (bank == bank_a)
    {
        mem_pl_field_put(rx_a_ctle_gain_done, lane, 0b1);   //ppe pl
    }
    else
    {
        mem_pl_field_put(rx_b_ctle_gain_done, lane, 0b1);
    }

    return pass_code;                                                                                                                   //
} //end eo_vga_gain                                                                                                                   //Pg6-8
//
//------------------------------------------------------------------------------------------------------------------------------------//
