/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_rxbist_ber.c $        */
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
// mwh21041500 |mwh     | HW562606 Add rx_ber_timer_sel_bist ppe register that update rx_ber_timer_sel gcr register
// mwh21040700 |mwh     | HW562260 Add in count_seed_done to while loop so we will break out of it if does not seed
// bja20012300 |bja     | Set per group fail mask on error
// bja20011700 |bja     | Always bump both banks to prevent timing issues
// bja20011600 |bja     | Don't use ptr_ary to access rx_b_ber_done because it is ppe reg
// bja20011505 |bja     | Make step_pr_to_zero() for clarity
// bja20011504 |bja     | Move ber_done writes out of min_pr_shift
// bja20011503 |bja     | Use bank value to set reg ptr, then GCR access in one place
// bja20011502 |bja     | Move BERM config reg writes out of min_pr_shift to reduce GCR
// bja20011501 |bja     | Write pr position regs per lane instead of bcast
// bja20011500 |bja     | Remove all instances of ber_num_lanes to support running per-lane
// mwh19121100 |mwh     | Change code of seed done from Bcast to do-while
// mwh19112000 |mwh     | rx_ber_timer_sel_startbit/endbit fix had wrong location was setting fir HW512533
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
#include "eo_vclq_checks.h"

#include "ppe_fw_reg_const_pkg.h"
#include "ppe_img_reg_const_pkg.h"

#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"

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

// most common for loop shorthand
#define FOR_LESS(i, stop) for(i = 0; i < stop; ++i)
// check if mask has the given lane selected. Big endian.
#define LANE_MASKED(mask, lane) (((mask << lane) & 0x80000000) == 0x0)

const int enc_mini_pr_pos0 = 0;
const int enc_mini_pr_pos1 = 2080;
const int enc_mini_pr_pos31 = 64480;

// Description: Wrapper function for the RXBIST phase rotator check
// Params:  lane_mask  - big-endian selection of which lanes to test
//          bank       - which bank to test
void eo_rxbist_ber(t_gcr_addr* gcr_addr, const uint32_t lane_mask, const t_bank bank)
{
    set_debug_state(0x5103);

    const uint32_t G_NUM_LANES = fw_field_get(fw_num_lanes);
    int orig_gcr_lane = get_gcr_addr_lane(gcr_addr);

    //Enable the ber counter and timer
    put_ptr_field(gcr_addr, rx_ber_en, 0b1, read_modify_write);//pg

    //Choose the amount of time to sample data. See chart in workbook -- low setting F
    int rx_ber_timer_sel_bist = mem_pg_field_get(rx_ber_timer_sel_bist);
    put_ptr_field(gcr_addr, rx_ber_timer_sel, rx_ber_timer_sel_bist, read_modify_write);//pg

    int lane;
    FOR_LESS(lane, G_NUM_LANES)
    {
        if LANE_MASKED(lane_mask, lane)
        {
            continue;
        }

        set_debug_state(0x5104);
        set_debug_state(lane);
        set_gcr_addr_lane(gcr_addr, lane);

        //rx_berpl_cnt_en_exp_sel_alias  rx_berpl_count_en rx_berpl_exp_data_sel rx_berpl_pattern_sel
        put_ptr_field(gcr_addr, rx_berpl_cnt_en_exp_sel_alias, 0b11101, read_modify_write); //pl

        //Turn off slave mode and make sure CDR are on
        put_ptr_field(gcr_addr, rx_pr_edge_track_cntl_ab_alias, 0b100100, read_modify_write); //pl

        // Disable the DL clock and set the Cal (Alt) bank
        put_ptr_field(gcr_addr, rx_dl_clk_en, 0b0, read_modify_write);
        set_cal_bank(gcr_addr, bank);

        //Step all mini PR down to 0
        step_pr_to_zero( gcr_addr, bank );
    }//end for

    // all mini PR now at 0
    int mini_pr_pos = enc_mini_pr_pos0;
    set_debug_state(0x5106);

    // bump through 4 UI to cover 128 PR positions
    int num_of_bumps;
    FOR_LESS(num_of_bumps, 4)
    {
        set_debug_state(0x5107);

        // if the mini PR is at 0, sweep to 31. Else sweep to 0.
        int mini_pr_pos_next = ( mini_pr_pos == enc_mini_pr_pos0 ) ? enc_mini_pr_pos31 : enc_mini_pr_pos0;
        // perform the mini pr sweep
        min_pr_shift( gcr_addr, mini_pr_pos, mini_pr_pos_next, lane_mask, bank );
        // update the position
        mini_pr_pos = mini_pr_pos_next;

        set_debug_state(0x5117);

        // bump UI each enabled lane
        FOR_LESS(lane, G_NUM_LANES)
        {
            if LANE_MASKED(lane_mask, lane)
            {
                continue;
            }

            set_gcr_addr_lane(gcr_addr, lane);
            put_ptr_field(gcr_addr, rx_pr_bump_sr_1ui_a, 0b1, read_modify_write);
            put_ptr_field(gcr_addr, rx_pr_bump_sr_1ui_b, 0b1, read_modify_write);
        }

        // wait for bump operation completion
        set_debug_state(0x5118);
        set_gcr_addr_lane(gcr_addr, bcast_all_lanes);

        while (get_ptr_field(gcr_addr, rx_pr_bump_in_progress_ab_alias) != 0);

    } //for ( int num_of_bumps = 0; num_of_bumps < 4; ++num_of_bumps )

    set_debug_state(0x5119);

    // set all lanes to done
    FOR_LESS(lane, G_NUM_LANES)
    {
        if LANE_MASKED(lane_mask, lane)
        {
            continue;
        }

        if (bank == bank_a)
        {
            mem_pl_field_put(rx_a_ber_done, lane, 0b1);
        }
        else
        {
            mem_pl_field_put(rx_b_ber_done, lane, 0b1);
        }
    }

    put_ptr_field(gcr_addr, rx_ber_en, 0b0, read_modify_write);//pg
    set_gcr_addr_lane(gcr_addr, orig_gcr_lane);//back to per group
    set_debug_state(0x5120); // DEBUG
    //return pass_code;
}//end eo_rxbist_ber

// Description: Wrapper function for the RXBIST phase rotator check
// Params:  lane_mask  - big-endian selection of which lanes to test
//          bank       - which bank to test
void step_pr_to_zero( t_gcr_addr* gcr_addr, t_bank bank)
{
    set_debug_state(0x5116);

    mk_ptr_ary(rx_pr_ns_data);
    mk_ptr_ary(rx_pr_ns_edge);
    mk_ptr_ary(rx_pr_ew_data);
    mk_ptr_ary(rx_pr_ew_edge);

    // fill arrays with bank-dependent register access values
    if (bank == bank_a)
    {
        set_debug_state(0x5114);
        asn_ptr_ary(rx_pr_ns_data, rx_a_pr_ns_data);
        asn_ptr_ary(rx_pr_ns_edge, rx_a_pr_ns_edge);
        asn_ptr_ary(rx_pr_ew_data, rx_a_pr_ew_data);
        asn_ptr_ary(rx_pr_ew_edge, rx_a_pr_ew_edge);
    }
    else
    {
        set_debug_state(0x5115);
        asn_ptr_ary(rx_pr_ns_data, rx_b_pr_ns_data);
        asn_ptr_ary(rx_pr_ns_edge, rx_b_pr_ns_edge);
        asn_ptr_ary(rx_pr_ew_data, rx_b_pr_ew_data);
        asn_ptr_ary(rx_pr_ew_edge, rx_b_pr_ew_edge);
    }

    // read current pr position
    int rx_pr_ns_data_int = get_ptr_ary(gcr_addr, rx_pr_ns_data);//pl
    int rx_pr_ns_edge_int = get_ptr_ary(gcr_addr, rx_pr_ns_edge);//pl
    int rx_pr_ew_data_int = get_ptr_ary(gcr_addr, rx_pr_ew_data);//pl
    int rx_pr_ew_edge_int = get_ptr_ary(gcr_addr, rx_pr_ew_edge);//pl

    // step pr's down together by 1 until all are 0
    do
    {
        set_debug_state(0x5105);

        if (rx_pr_ns_data_int > 0)
        {
            rx_pr_ns_data_int--;
            put_ptr_ary(gcr_addr, rx_pr_ns_data, rx_pr_ns_data_int, read_modify_write);
        }

        if (rx_pr_ns_edge_int > 0)
        {
            rx_pr_ns_edge_int--;
            put_ptr_ary(gcr_addr, rx_pr_ns_edge, rx_pr_ns_edge_int, read_modify_write);
        }

        if (rx_pr_ew_data_int > 0)
        {
            rx_pr_ew_data_int--;
            put_ptr_ary(gcr_addr, rx_pr_ew_data, rx_pr_ew_data_int, read_modify_write);
        }

        if (rx_pr_ew_edge_int > 0)
        {
            rx_pr_ew_edge_int--;
            put_ptr_ary(gcr_addr, rx_pr_ew_edge, rx_pr_ew_edge_int, read_modify_write);
        }
    }
    while ((rx_pr_ns_data_int + rx_pr_ns_edge_int + rx_pr_ew_data_int + rx_pr_ew_edge_int) > 0);
}

// Description: Sweep the mini phase rotators while performing a BERM at each step.
// Params:  min_shift  - current/starting position of mini PRs
//          stop_value - ending value of sweep (inclusive)
//          lane_mask  - big-endian selection of which lanes to test
//          bank       - which bank to test
// Assumptions: data and edge positions must be equal across all selected lanes
void min_pr_shift(t_gcr_addr* gcr_addr, int min_shift, int stop_value, const uint32_t lane_mask, t_bank bank)
{
    set_debug_state(0x510A);
    const uint32_t G_NUM_LANES = fw_field_get(fw_num_lanes);
    int orig_gcr_lane = get_gcr_addr_lane(gcr_addr);

    mk_ptr_ary(rx_pr_ns_full_reg);
    mk_ptr_ary(rx_pr_ew_full_reg);

    if (bank == bank_a)
    {
        asn_ptr_ary(rx_pr_ns_full_reg, rx_a_pr_ns_full_reg);
        asn_ptr_ary(rx_pr_ew_full_reg, rx_a_pr_ew_full_reg);
    }
    else
    {
        asn_ptr_ary(rx_pr_ns_full_reg, rx_b_pr_ns_full_reg);
        asn_ptr_ary(rx_pr_ew_full_reg, rx_b_pr_ew_full_reg);
    }

    // increment or decrement position based on start and stop values
    int min_pr_step = ( min_shift < stop_value ) ? enc_mini_pr_pos1 : 0 - enc_mini_pr_pos1;

    //setup for ber all lanes
    set_gcr_addr_lane(gcr_addr, bcast_all_lanes);
    // need to do this to reset prbs sync state machince
    put_ptr_field(gcr_addr, rx_berpl_prbs_seed_mode, 0b0, read_modify_write);
    // enable sync mode
    put_ptr_field(gcr_addr, rx_berpl_prbs_seed_mode, 0b1  , read_modify_write);

    set_debug_state(0x510B);

    //// wait for prbs sync
    //    int lane;
    //    FOR_LESS(lane, G_NUM_LANES) {
    //        if LANE_MASKED(lane_mask,lane) continue;
    //        set_gcr_addr_lane(gcr_addr, lane);
    //        while( get_ptr_field(gcr_addr,rx_berpl_prbs_seed_done) == 0 );
    //    }

    // wait for prbs sync
    int lane;
    int count_seed_done = 0;

    FOR_LESS(lane, G_NUM_LANES)  //for less
    {
        if LANE_MASKED(lane_mask, lane)
        {
            continue;
        }

        set_gcr_addr_lane(gcr_addr, lane);
        count_seed_done = 0;

        while((get_ptr_field(gcr_addr, rx_berpl_prbs_seed_done) == 0) && (count_seed_done < 20 )) //while
        {
            count_seed_done = count_seed_done + 1;
        }//while
    }//for less


    // need to run against the stop value, but direction ambiguity prevents using > or <
    stop_value += min_pr_step;

    // loop from start position to stop position
    for(; min_shift != stop_value; min_shift += min_pr_step )
    {
        set_debug_state(0x5110);
        set_debug_state(min_shift);

        // Shift mini PRs. Writes already stored value for first loop.
        FOR_LESS(lane, G_NUM_LANES)
        {
            if LANE_MASKED(lane_mask, lane)
            {
                continue;
            }

            set_gcr_addr_lane(gcr_addr, lane);
            put_ptr_ary(gcr_addr, rx_pr_ns_full_reg, min_shift, read_modify_write);//pl
            put_ptr_ary(gcr_addr, rx_pr_ew_full_reg, min_shift, read_modify_write);//pl
        }

        // TODO - HW518768: [RXBIST] Run One BERM per Mini Rotator Sweep
        //reset the pl timer to 0 and run signal is sent, and clear error count
        put_ptr_field(gcr_addr, rx_ber_reset, 0b1, read_modify_write);//pg

        //waiting for run signal to go low so we know we are finished
        set_debug_state(0x510D);

        while ( get_ptr_field(gcr_addr, rx_ber_timer_running) != 0 );

        set_debug_state(0x510E);

        // check for error on each lane
        FOR_LESS(lane, G_NUM_LANES)
        {
            if LANE_MASKED(lane_mask, lane)
            {
                continue;
            }

            set_gcr_addr_lane(gcr_addr, lane);

            if( get_ptr_field(gcr_addr, rx_berpl_count) != 0 )
            {
                set_debug_state(0x510F);
                mem_pl_field_put(rx_ber_fail, lane, 0b1);
                set_rxbist_fail_lane( gcr_addr, bank );
            }//pl set pl error
        }
    } //for(; min_shift != stop_value; min_shift += min_pr_step )

    set_debug_state(0x5111);
    set_gcr_addr_lane(gcr_addr, orig_gcr_lane); //change back to for pg

}// min_pr_shift
