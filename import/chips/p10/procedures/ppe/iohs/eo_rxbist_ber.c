/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_rxbist_ber.c $        */
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
// *! FILENAME    : eo_rxbist_ber.c
// *! TITLE       :
// *! DESCRIPTION : Run the ber check logic after we have run init and recal
// *!             :
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
// bja19082100 |bja     | Set rx_fail_flag on error
// bja19081900 |bja     | Set FIR when bist error conditions are met
// bja19081400 |bja     | Remove while loops. Use longer spins instead.
// vbr19060300 |vbr     | HW486157/HW492011: Switch to set_cal_bank() so set DL/RLM clock_sel; gate DL clock.
// mwh19041700 |mwh     | Below works --
// mwh19040100 |mwh     | Made fixed that were noted by review
// mwh19032800 |mwh     | Updated code -- no jump going down to 0 by step of 1.
// mwh19021900 |mwh     | Initial Rev 51yy debug state
//------------------------------------------------------------------------------



#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "eo_rxbist_ber.h"

#include "ppe_fw_reg_const_pkg.h"
#include "ppe_img_reg_const_pkg.h"

#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"

//Per Group
//rx_ber_reset, rx_ber_en, rx_ber_timer_sel, rx_ber_timer_running
//rx_err_trap_en, rx_err_trap_rst, rx_err_trap_mask(0:3), rx_err_trapped

//Per Lane
//rx_berpl_pattern_sel(0:2) 101 PRBS15 feedback set {15,14]f
//rx_berpl_count, rx_berpl_count_en, rx_berpl_prbs_seed_mode,
// rx_berpl_prbs_seed_done_b, rx_berpl_data_exp_sel


//num_lanes = fw_field_get(fw_num_lanes); in ioo_thread()

//pl rx_pr_slave_mode_a RWX 0 "Put Bank A into slave mode where it uses opposite bank data."
//pl rx_pr_slave_mode_b RWX 0 "Put Bank B into slave mode where it uses opposite bank data."


//pl rx_pr_bump_sl_1ui_a WO_8P 0 "Bumps the PR position of Bank A to the previous eye by shifting 32-steps. Must wait for bump_in_progress to clear between bump commands."
//pl rx_pr_bump_sr_1ui_a WO_8P 0 "Bumps the PR position of Bank A to the next eye by shifting 32-steps. Must wait for bump_in_progress to clear between bump commands."
//pl rx_pr_bump_sl_1ui_b WO_8P 0 "Bumps the PR position of Bank A to the previous eye by shifting 32-steps. Must wait for bump_in_progress to clear between bump commands."
//pl rx_pr_bump_sr_1ui_b WO_8P 0 "Bumps the PR position of Bank A to the next eye by shifting 32-steps. Must wait for bump_in_progress to clear between bump commands."
//
//pl rx_pr_bump_in_progress_ab_alias ROX    "Alias of Bank A and B bump in progress status."
//pl rx_pr_bump_in_progress_a        ROX  0 "Bump operation in progress on Bank A"
//pl rx_pr_bump_in_progress_b        ROX  0 "Bump operation in progress on Bank B"
//
//pl rx_a_pr_ns_full_reg RWX 0000000000000000 "Alias of Bank A NS Mini PR controls"
//pl rx_a_pr_ns_data     RWX 10000            "A Bank, North/South Edge, Mini PR control register"
//pl rx_a_pr_ns_edge     RWX 10000            "A Bank, North/South Data, Mini PR control register"
//
//pl rx_a_pr_ew_full_reg RWX  0000000000000000  "Alias of Bank A EW Mini PR controls"
//pl rx_a_pr_ew_data     RWX  10000             "A Bank, East/West Edge, Mini PR control register"
//pl rx_a_pr_ew_edge     RWX  10000             "A Bank, East/West Data, Mini PR control register"
//
//pl rx_b_pr_ns_full_reg RWX 0000000000000000 "Alias of Bank B NS Mini PR controls"
//pl rx_b_pr_ns_data     RWX 10000            "B Bank, North/South Edge, Mini PR control register"
//pl rx_b_pr_ns_edge     RWX 10000            "B Bank, North/South Data, Mini PR control register"
//
//pl rx_b_pr_ew_full_reg RWX 0000000000000000 "Alias of Bank B EW Mini PR controls"
//pl rx_b_pr_ew_data     RWX 10000            "B Bank, East/West Edge, Mini PR control register"
//pl rx_b_pr_ew_edge     RWX 10000            "B Bank, East/West Data, Mini PR control register"


//min_phase move is 10ps/32 for 50Gbps and 15.625ps/32 for 32Gbps

//step 1                            prbs15 in circuit should be going already
//step 2 rx_ber_en enable           per group berm logic clocks
//step 3 rx_ber_timer_sel           select how many bits to look at -- using default
//step 4 rx_berpl_pattern_sel       set prbs sel to prbs15 all lanes
//step 5 rx_berpl_count_en          enable per lane berm logic clocks
//step 6 rx_berpl_prbs_seed_mode    enable per lane berm locking prbs sequence
//step 7 rx_berpl_data_exp_sel      set what xor data should be -- PRBS
//step 8 rx_berpl_prbs_seed_done_b  poll until all are 0, show locked into prbs pattern
//step 9 rx_ber_reset               write to 1 set timer to 0
//step A rx_ber_timer_running



const int zero = 0;
const int neg_one = -2080;  //FFFFF7E0=4294965216 F7E0 = 63456 signed 2147481568
const int thirty_one = 64480;
const int thirty_two = 66560;
const int plus_minus_one = 2080;


//--- begin function for min-phase move----------//
void min_pr_shift(t_gcr_addr* gcr_addr, int stop_value, int all_zero_ones, t_bank bank)
{
    //begin void
    set_debug_state(0x510A);
    int min_shift = all_zero_ones;//what postion the min_pr are starting at
    int lane;
    int ber_num_lanes = fw_field_get(fw_num_lanes);//max number of lanes ??
    //int ber_num_lanes = 1;


    while (min_shift != stop_value)
    {
        //begin while
        set_debug_state(0x510B);
        set_debug_state(ber_num_lanes);

        //---Running the ber checker for location of Main Pr and Min PR
        //setup for ber all lanes
        //rx_berpl_cnt_en_exp_sel_alias  rx_berpl_count_en rx_berpl_exp_data_sel rx_berpl_pattern_sel
        for (lane = 0; lane <  ber_num_lanes; lane++)//need to be per lane no bcast
        {
            set_gcr_addr_lane(gcr_addr, lane);//for looping through all lanes
            //put_ptr(gcr_addr, rx_berpl_count_en_addr      ,rx_berpl_count_en_startbit      ,rx_berpl_count_en_endbit       , 0b1  , read_modify_write);//pl enable count of errors
            //put_ptr(gcr_addr, rx_berpl_exp_data_sel_addr  ,rx_berpl_exp_data_sel_startbit  ,rx_berpl_exp_data_sel_endbit   , 0b1  , read_modify_write);//pl Select prbs data to xor with
            //put_ptr(gcr_addr, rx_berpl_pattern_sel_addr   ,rx_berpl_pattern_sel_startbit   ,rx_berpl_pattern_sel_endbit    , 0b101, read_modify_write);//pl select prbs15 as pattern
            put_ptr(gcr_addr, rx_berpl_cnt_en_exp_sel_alias_addr, rx_berpl_cnt_en_exp_sel_alias_startbit,
                    rx_berpl_cnt_en_exp_sel_alias_endbit, 0b11101, read_modify_write); //pl
            put_ptr(gcr_addr, rx_berpl_prbs_seed_mode_addr, rx_berpl_prbs_seed_mode_startbit, rx_berpl_prbs_seed_mode_endbit ,
                    0b1  , read_modify_write);//pl enable sync mode
        }

        //lane set to get all reads at once, it will OR all results so if there 1 we will not move forward
        set_gcr_addr_lane(gcr_addr, bcast_all_lanes);
        int rx_berpl_prbs_seed_done_b_int  =  get_ptr(gcr_addr, rx_berpl_prbs_seed_done_b_addr ,
                                              rx_berpl_prbs_seed_done_b_startbit  , rx_berpl_prbs_seed_done_b_endbit); //pl wait for sync on all lanes

        while (rx_berpl_prbs_seed_done_b_int == 1) //make sure we are sync to prbs15
        {
            rx_berpl_prbs_seed_done_b_int = get_ptr(gcr_addr, rx_berpl_prbs_seed_done_b_addr, rx_berpl_prbs_seed_done_b_startbit,
                                                    rx_berpl_prbs_seed_done_b_endbit);    //pl
            set_debug_state(0x510C);
            set_debug_state(rx_berpl_prbs_seed_done_b_int);
        }

        for (lane = 0; lane < ber_num_lanes; lane++)//need to be per lane no bcast
        {
            set_gcr_addr_lane(gcr_addr, lane);//for looping through all lanes
            put_ptr(gcr_addr, rx_berpl_prbs_seed_mode_addr, rx_berpl_prbs_seed_mode_startbit, rx_berpl_prbs_seed_mode_endbit ,
                    0b0  , read_modify_write);//pl need to do this to reset prbs sync state machince
        }

        set_gcr_addr_lane(gcr_addr, 0); //change back to for pg

        //reseet the pl timer to 0 and run signal is sent, and clear error count
        put_ptr(gcr_addr, rx_ber_reset_addr, rx_ber_reset_startbit, rx_ber_reset_endbit, 0b1, read_modify_write);//pg

        //waiting for run signal to go low so we know we are finished
        int rx_ber_timer_running_int  =  get_ptr(gcr_addr, rx_ber_timer_running_addr , rx_ber_timer_running_startbit  ,
                                         rx_ber_timer_running_endbit);//pg

        while (rx_ber_timer_running_int)
        {
            rx_ber_timer_running_int  =  get_ptr(gcr_addr, rx_ber_timer_running_addr , rx_ber_timer_running_startbit  ,
                                                 rx_ber_timer_running_endbit);    //pg
            set_debug_state(0x510D);
        }


        for (lane = 0; lane < ber_num_lanes; lane++)//need to be per lane no bcast
        {
            //set pl error and done all lanes
            set_gcr_addr_lane(gcr_addr, lane);//for looping through all lanes
            int rx_berpl_count_int = get_ptr(gcr_addr, rx_berpl_count_addr , rx_berpl_count_startbit  ,
                                             rx_berpl_count_endbit); //pl look for errors all lanes

            if(rx_berpl_count_int != 0 )
            {
                set_debug_state(0x510E);
                mem_pl_field_put(rx_ber_fail, lane, 0b1);
                mem_pg_field_put(rx_fail_flag, 0b1);
                set_fir(fir_code_dft_error);
            }//pl set pl error

            // TODO - BJA - is BER really done for each lane at this point? What about all the rest of the phase rotator positions/bumps?
            if (bank == bank_a)
            {
                mem_pl_field_put(rx_a_ber_done, lane, 0b1);   //ppe pl
            }
            else
            {
                mem_pl_field_put(rx_b_ber_done, lane, 0b1);
                set_debug_state(0x510F);
            }
        }

        //---End running the ber checker for location of Main Pr and Min PR
        //rx_a_pr_ns_full_reg rx_a_pr_ew_full_reg
        //add or substart to min postion, get ready for next one

        if (all_zero_ones == 0)
        {
            min_shift = min_shift + plus_minus_one;
            set_debug_state(0x5112);
        }
        else
        {
            min_shift = min_shift - plus_minus_one;
            set_debug_state(0x5113);
        }

        set_debug_state(min_shift);


        set_gcr_addr_lane(gcr_addr, bcast_all_lanes);

        if ((min_shift != all_zero_ones) && (min_shift != stop_value))
        {
            //begin if
            if (bank == bank_a)
            {
                //begin if
                put_ptr_field(gcr_addr, rx_a_pr_ns_full_reg, min_shift , read_modify_write); //pl
                put_ptr_field(gcr_addr, rx_a_pr_ew_full_reg, min_shift , read_modify_write); //pl
                set_debug_state(0x5110);
            }//end if
            else
            {
                //begin else
                put_ptr_field(gcr_addr, rx_b_pr_ns_full_reg, min_shift , read_modify_write); //pl
                put_ptr_field(gcr_addr, rx_b_pr_ew_full_reg, min_shift , read_modify_write); //pl
                set_debug_state(0x5111);
            }//end else
        }//end if

        set_gcr_addr_lane(gcr_addr, 0); //change back to for pg

    }//end while
}//end void
//---end function for min-phase move----------//


void eo_rxbist_ber(t_gcr_addr* gcr_addr, t_bank bank)
{
    //start eo_rxbist_ber
    set_debug_state(0x5103); // DEBUG


    int ber_num_lanes = fw_field_get(fw_num_lanes);
    set_debug_state(ber_num_lanes);//max number of lanes ??
    //int ber_num_lanes = 1;
    int lane;// = get_gcr_addr_lane(gcr_addr);

    //Enable the ber counter and timer
    put_ptr(gcr_addr, rx_ber_en_addr, rx_ber_en_startbit, rx_ber_en_endbit, 0b1, read_modify_write);//pg

    //Choice the amount of time to sample data see chart in workbook -- low setting F
    put_ptr(gcr_addr, rx_ber_timer_sel_addr, rx_ber_en_startbit, rx_ber_en_endbit, 0b1111, read_modify_write);//pg

    //can not do bcast since circuit will glitch and have move each one down by 1 until get to 0
    for(lane = 0; lane < ber_num_lanes; lane++)//need to be per lane no bcast
    {
        //begin for
        set_debug_state(0x5104);
        set_gcr_addr_lane(gcr_addr, lane);

        //Turn off slave mode and make sure CDR are on
        put_ptr_field(gcr_addr, rx_pr_edge_track_cntl_ab_alias, 0b100100, read_modify_write); //pl

        // Disable the DL clock and set the Cal (Alt) bank
        put_ptr_field(gcr_addr, rx_dl_clk_en, 0b0, read_modify_write);
        set_cal_bank(gcr_addr, bank);

        int rx_a_pr_ns_data_int = get_ptr(gcr_addr, rx_a_pr_ns_data_addr , rx_a_pr_ns_data_startbit ,
                                          rx_a_pr_ns_data_endbit); //pl
        int rx_a_pr_ns_edge_int = get_ptr(gcr_addr, rx_a_pr_ns_edge_addr , rx_a_pr_ns_edge_startbit ,
                                          rx_a_pr_ns_edge_endbit); //pl
        int rx_a_pr_ew_data_int = get_ptr(gcr_addr, rx_a_pr_ew_data_addr , rx_a_pr_ew_data_startbit ,
                                          rx_a_pr_ew_data_endbit); //pl
        int rx_a_pr_ew_edge_int = get_ptr(gcr_addr, rx_a_pr_ew_edge_addr , rx_a_pr_ew_edge_startbit ,
                                          rx_a_pr_ew_edge_endbit); //pl

        int rx_b_pr_ns_data_int = get_ptr(gcr_addr, rx_b_pr_ns_data_addr , rx_b_pr_ns_data_startbit ,
                                          rx_b_pr_ns_data_endbit); //pl
        int rx_b_pr_ns_edge_int = get_ptr(gcr_addr, rx_b_pr_ns_edge_addr , rx_b_pr_ns_edge_startbit ,
                                          rx_b_pr_ns_edge_endbit); //pl
        int rx_b_pr_ew_data_int = get_ptr(gcr_addr, rx_b_pr_ew_data_addr , rx_b_pr_ew_data_startbit ,
                                          rx_b_pr_ew_data_endbit); //pl
        int rx_b_pr_ew_edge_int = get_ptr(gcr_addr, rx_b_pr_ew_edge_addr , rx_b_pr_ew_edge_startbit ,
                                          rx_b_pr_ew_edge_endbit); //pl

        if (bank == bank_a)
        {
            //begin if
            while ((rx_a_pr_ns_data_int > 0) || (rx_a_pr_ns_edge_int > 0) || (rx_a_pr_ew_data_int > 0) || (rx_a_pr_ew_edge_int > 0))
            {
                //begin while
                set_debug_state(0x5105);
                set_debug_state(lane);

                if (rx_a_pr_ns_data_int != 0)
                {
                    rx_a_pr_ns_data_int--;
                    put_ptr_field(gcr_addr, rx_a_pr_ns_data, rx_a_pr_ns_data_int, read_modify_write);
                }

                if (rx_a_pr_ns_edge_int != 0)
                {
                    rx_a_pr_ns_edge_int--;
                    put_ptr_field(gcr_addr, rx_a_pr_ns_edge, rx_a_pr_ns_edge_int, read_modify_write);
                }

                if (rx_a_pr_ew_data_int != 0)
                {
                    rx_a_pr_ew_data_int--;
                    put_ptr_field(gcr_addr, rx_a_pr_ew_data, rx_a_pr_ew_data_int, read_modify_write);
                }

                if (rx_a_pr_ew_edge_int != 0)
                {
                    rx_a_pr_ew_edge_int--;
                    put_ptr_field(gcr_addr, rx_a_pr_ew_edge, rx_a_pr_ew_edge_int, read_modify_write);
                }
            }//end while
        }//end if
        else
        {
            //start else
            while ((rx_b_pr_ns_data_int > 0) || (rx_b_pr_ns_edge_int > 0) || (rx_b_pr_ew_data_int > 0) || (rx_b_pr_ew_edge_int > 0))
            {
                //begin while
                set_debug_state(0x5105);
                set_debug_state(lane);

                if (rx_b_pr_ns_data_int != 0)
                {
                    rx_b_pr_ns_data_int--;
                    put_ptr_field(gcr_addr, rx_b_pr_ns_data, rx_b_pr_ns_data_int, read_modify_write);
                }

                if (rx_b_pr_ns_edge_int != 0)
                {
                    rx_b_pr_ns_edge_int--;
                    put_ptr_field(gcr_addr, rx_b_pr_ns_edge, rx_b_pr_ns_edge_int, read_modify_write);
                }

                if (rx_b_pr_ew_data_int != 0)
                {
                    rx_b_pr_ew_data_int--;
                    put_ptr_field(gcr_addr, rx_b_pr_ew_data, rx_b_pr_ew_data_int, read_modify_write);
                }

                if (rx_b_pr_ew_edge_int != 0)
                {
                    rx_b_pr_ew_edge_int--;
                    put_ptr_field(gcr_addr, rx_b_pr_ew_edge, rx_b_pr_ew_edge_int, read_modify_write);
                }
            }//end while
        }//end else
    }//end for


    set_debug_state(0x5106);
    io_spin_us(4);

    int num_of_bumps = 0;//0,1,2,3 = 128 steps

    while (num_of_bumps <= 3)
    {
        //begin while
        set_debug_state(0x5107);
        set_gcr_addr_lane(gcr_addr, 0);//set back to per group
        int rx_a_pr_ns_data_int2;
        int rx_b_pr_ns_data_int2;


        if (bank == bank_a)
        {
            //if begin
            rx_a_pr_ns_data_int2 = get_ptr(gcr_addr, rx_a_pr_ns_data_addr , rx_a_pr_ns_data_startbit , rx_a_pr_ns_data_endbit); //pl

            if (rx_a_pr_ns_data_int2 == 0)
                //  min_pr_shift(t_gcr_addr stop_value, all_zero_ones, t_bank bank)
            {
                set_debug_state(0x5114);    //stop at 31 so ++ to pr
                min_pr_shift( gcr_addr, thirty_two, zero,        bank );
            }
            else
            {
                set_debug_state(0x5115);    //stop at 0 so -- to pr
                min_pr_shift( gcr_addr, neg_one,    thirty_one,  bank );
            }
        }//if end
        else
        {
            //begin
            rx_b_pr_ns_data_int2 = get_ptr(gcr_addr, rx_b_pr_ns_data_addr , rx_b_pr_ns_data_startbit , rx_b_pr_ns_data_endbit); //pl

            if (rx_b_pr_ns_data_int2 == 0)
            {
                set_debug_state(0x5116);    //stop at 31 so ++ to pr
                min_pr_shift( gcr_addr, thirty_two, zero,          bank );
            }
            else
            {
                set_debug_state(0x5117);    //stop at 0 so -- to pr
                min_pr_shift( gcr_addr, neg_one,    thirty_one,    bank );
            }
        }//end



        set_debug_state(0x5118);

        for(lane = 0; lane < ber_num_lanes; lane++)//need to be per lane no bcast
        {
            set_gcr_addr_lane(gcr_addr, lane);

            if (bank == bank_a)
            {
                put_ptr_field(gcr_addr, rx_pr_bump_sr_1ui_a, 0b1 , read_modify_write);
            }
            else
            {
                put_ptr_field(gcr_addr, rx_pr_bump_sr_1ui_b, 0b1 , read_modify_write);
            }
        }

        set_gcr_addr_lane(gcr_addr, bcast_all_lanes);//get read at onetime all lanes
        int bump_in_progress = 1;

        while (bump_in_progress)
        {
            //begin while
            if (bank == bank_a)
            {
                bump_in_progress = get_ptr_field(gcr_addr, rx_pr_bump_in_progress_a);
            }
            else
            {
                bump_in_progress = get_ptr_field(gcr_addr, rx_pr_bump_in_progress_b);
            }

            set_debug_state(0x5119);
        }//end while

        set_gcr_addr_lane(gcr_addr, 0);//back to per group
        num_of_bumps++;
    }//end while

    set_debug_state(0x5120); // DEBUG
    //return pass_code;
}//end eo_rxbist_ber

//Strait timer used to let cdrs lock
//      while (count_loop < 10)//given time for CDR to lock since doing big jump
//  {//while loop
//    io_spin_us(1);//1 micro-sec
//          count_loop--;
//        }//end while



//  //setup for ber all lanes
//  for(lane = 0; lane < rx_bist_max_lanes_int; lane++)
//     {
//      put_ptr(gcr_addr, rx_berpl_prbs_seed_mode_addr,rx_berpl_prbs_seed_mode_startbit,rx_berpl_prbs_seed_mode_endbit , 0b0  , read_modify_write);//pl need to do this to reset prbs sync state machince
//      put_ptr(gcr_addr, rx_berpl_pattern_sel_addr   ,rx_berpl_pattern_sel_startbit   ,rx_berpl_pattern_sel_endbit    , 0b101, read_modify_write);//pl select prbs15 as pattern
//      put_ptr(gcr_addr, rx_berpl_count_en_addr      ,rx_berpl_count_en_startbit      ,rx_berpl_count_en_endbit       , 0b1  , read_modify_write);//pl enable count of errors
//      put_ptr(gcr_addr, rx_berpl_exp_data_sel_addr  ,rx_berpl_exp_data_sel_startbit  ,rx_berpl_exp_data_sel_endbit   , 0b1  , read_modify_write);//pl Select prbs data to xor with
//      put_ptr(gcr_addr, rx_berpl_prbs_seed_mode_addr,rx_berpl_prbs_seed_mode_startbit,rx_berpl_prbs_seed_mode_endbit , 0b1  , read_modify_write);//pl enable sync mode
//
//     }
//
//    //set lane to get all reads at once, it will OR all results so if there 1 we will not move forward
//   lane = bcast_all_lanes;//get read at onetime all lanes
//   int rx_berpl_prbs_seed_done_b_int  =  get_ptr(gcr_addr,rx_berpl_prbs_seed_done_b_addr ,rx_berpl_prbs_seed_done_b_startbit  ,rx_berpl_prbs_seed_done_b_endbit);//pl wait for sync on all lanes
//
//   count_loop = 100; //
//   while ((rx_berpl_prbs_seed_done_b_int) || (count_loop == 0)) //count_loop to ensure the while does not hang code
//      {rx_berpl_prbs_seed_done_b_int  =  get_ptr(gcr_addr,rx_berpl_prbs_seed_done_b_addr ,rx_berpl_prbs_seed_done_b_startbit  ,rx_berpl_prbs_seed_done_b_endbit);set_debug_state(0x5105);//pl
//  count_loop--;
//       }
//
//   lane = get_gcr_addr_lane(gcr_addr);//change back to signal lane
//   //reseet the pl timer to 0 and run signal is sent, and clear error count
//   put_ptr(gcr_addr, rx_ber_reset_addr, rx_ber_reset_startbit, rx_ber_reset_endbit, 0b1, read_modify_write);//pg
//
//   //waiting for run signal to go low so we know we are finished
//   int rx_ber_timer_running_int  =  get_ptr(gcr_addr, rx_ber_timer_running_addr ,rx_ber_timer_running_startbit  ,rx_ber_timer_running_endbit);//pg
//   while (rx_ber_timer_running_int) {rx_ber_timer_running_int  =  get_ptr(gcr_addr,rx_ber_timer_running_addr ,rx_ber_timer_running_startbit  ,rx_ber_timer_running_endbit);set_debug_state(0x5106);}//pg
//
//
//   for(lane = 0; lane < rx_bist_max_lanes_int; lane++)
//     {//set pl error and done all lanes
//      int rx_berpl_count_int = get_ptr(gcr_addr,rx_berpl_count_addr ,rx_berpl_count_startbit  ,rx_berpl_count_endbit);//pl look for errors all lanes
//      if(!rx_berpl_count_int == 0 ){mem_pl_field_put(rx_ber_fail,lane, 0b1);set_debug_state(0x5107);}//pl set pl error
//      if (bank == bank_a){mem_pl_field_put(rx_a_ber_done, lane, 0b1);} else{mem_pl_field_put(rx_b_ber_done, lane, 0b1);set_debug_state(0x5108);}//ppe pl
//     }



//Does not work ???
//      //Scalable check see if the CDR's are locked, we will move forward after 20 loops
//      //even if the CDR are not locked -- but this is based on CDR working
//      int lock_mask = 1;
//      int locked = 1;
//
//     for(lane = 0; lane < rx_bist_max_lanes_int; lane++)//set mask for #cdr to be locked
//       { if (lane != 0) {lock_mask = lock_mask << 1;} set_debug_state(0x5107); }
//
//     while ((locked != lock_mask) || (count_loop == 0))
//       {//while begin
//         locked = 0;
//         for(lane = 0; lane < rx_bist_max_lanes_int; lane++)
//          {
//            int rx_pr_locked_alias = get_ptr(gcr_addr,rx_pr_locked_ab_alias_addr ,rx_pr_locked_ab_alias_startbit  ,rx_pr_locked_ab_alias_endbit);//pl
//            if ((rx_pr_locked_alias == 0b11) && (lane != 0) ){ locked = locked << 1;}
//          }
//        count_loop--;
//        set_debug_state(0x5108);
//       }//while end



//for(lane = 0; lane < rx_bist_max_lanes; lane++)
//           {//begin for
//              set_debug_state(0x5116);
//             if (bank == bank_a)
//              {put_ptr_field(gcr_addr,rx_pr_bump_sr_1ui_a,0b1 , read_modify_write);}
//             else
//              {put_ptr_field(gcr_addr,rx_pr_bump_sr_1ui_b,0b1 , read_modify_write);}
//
//             int bump_in_progress = 1;
//             while (bump_in_progress)
//              {//begin while
//                if (bank == bank_a)
//                 {bump_in_progress = get_ptr_field(gcr_addr, rx_pr_bump_in_progress_a);}
//               else
//                 {bump_in_progress = get_ptr_field(gcr_addr, rx_pr_bump_in_progress_a);}
//               set_debug_state(0x5117);
//             }//end while
//           }//end for


//Can be used to over ride how many lanes we check
//int rx_bist_max_ovrd = get_ptr_field(gcr_addr,rx_bist_max_ovrd );

//choice rxbist_max_lane value
// if(rx_bist_max_ovrd)//get over ride value
//  {rx_bist_max_lanes_int = get_ptr_field(gcr_addr,rx_bist_max_lanes_ovrd);}
//else
// {//use the max lane value eo_main
//  put_ptr_field(gcr_addr, rx_bist_max_lanes_ovrd, num_lanes,read_modify_write);
//  rx_bist_max_lanes_int = num_lanes;
//  }
//   set_debug_state(0x5104); // DEBUG



//      //Move all lanes min_pr edge and data to 000000
//      lane = bcast_all_lanes;//get read at onetime all lanes
//      if (bank == bank_a){
//      put_ptr_field(gcr_addr,rx_a_pr_ns_full_reg,0b0000000000000000 , fast_write);
//      put_ptr_field(gcr_addr,rx_a_pr_ew_full_reg,0b0000000000000000 , fast_write);
//      lane = get_gcr_addr_lane(gcr_addr);//change back to signal lane
//      set_debug_state(0x5105); // DEBUG
//      }
//      else{
//      put_ptr_field(gcr_addr,rx_b_pr_ns_full_reg,0b0000000000000000 , fast_write);
//      put_ptr_field(gcr_addr,rx_b_pr_ew_full_reg,0b0000000000000000 , fast_write);
//      lane = get_gcr_addr_lane(gcr_addr);//change back to signal lane
//      set_debug_state(0x5106); // DEBUG
//        }
