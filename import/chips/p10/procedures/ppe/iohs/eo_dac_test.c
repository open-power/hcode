/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_dac_test.c $          */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020,2021                                                    */
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
// *! FILENAME    : eo_dac_test.c
// *! TITLE       :
// *! DESCRIPTION : Run Dac bist on all lanes
// *!             :  set_debug_state(0x5180-5190);
// *!
// *! Owner NAME  : Mike Harper         Email: harperm@us.ibm.com
// *! BACKUP NAME : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ---------------------|------------------------------------------------------------------
// mwh21027000 |mwh     | HW557778 loop for check dones was only looking at highest lane, fix by put in &=
// mwh20102801 |mwh     | HW551352 Turn mask for load of black out timer bug in logic that write to 0 for linear part b
// mwh20102800 |mwh     | HW548405 rx_psave_cdrlock_mode_sel = 11 show that ppe code ran through.
// mwh20093000 |mwh     | Changed compare for pulldown test to correct settings based on filter depeth
// ------------|--------|-------------------------------------------------------
// mwh20090800 |mwh     | Add in disable the mux and clock after dac test is done
// mwh20071400 |mwh     | First pass
//------------------------------------------------------------------------------

#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "io_logger.h"
#include "eo_common.h"
#include "eo_main.h"
#include "io_init_and_reset.h"
#include "eo_dac_test.h"

#include "ppe_fw_reg_const_pkg.h"
#include "ppe_img_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"

#include "eo_vclq_checks.h"//pick up set_rxbist_fail_lane

//In run_external_command() - Chris's function - it creates l_lane_mask and passes it as an argument to EXT_CMD_FUNCTIONS.
//EXT_CMD_FUNCTIONS is a pointer to a command function, like cmd_rx_bist_tests_pl()
//So if I putting your code in cmd_rx_bist_tests_pl(), you can use the function parameter. You don't need to set it yourself
//ext_cmd_lanes_00_15 ext_cmd_lanes_16_31 -- will set the mask what run or not


//ARE BANK CONTROLS SET TO ALL 0'S -- IF NOT NEED CALL THE POWER UP SEQENCE FOR ALL LANES
//DOES THE LANE MASK ALLOW FOR RUNNING ALL THE LANES AT ONCE??

//Table to give value of what set compare for pulldown test depending on filter setting
//INCREASING FILTER(2^filter value) WILL INCREASE RUN TIME!!!!
//--------------------------------------------------------------------------------------------------------------------------------
//         2^value               |      50% of filter                       |          10% of filter
//       filter depth             |  compare for part 1 and part 3  |  compare for part 2 and 4
//--------------------------------------------------------------------------------------------------------------------------------
//rx_berpl_sat_thresh 8-11 |  rx_psave_cdr_time_val bit 0 -7 |  rx_berpl_sat_thresh 0-7
//--------------------------------------------------------------------------------------------------------------------------------
//           7(127)               |                63                            |               13
//--------------------------------------------------------------------------------------------------------------------------------
//           6(64)                |                32                            |               3
//--------------------------------------------------------------------------------------------------------------------------------
//           5(32)                |               16                             |               2
//--------------------------------------------------------------------------------------------------------------------------------
//           4(16)                |               8                               |               1
//--------------------------------------------------------------------------------------------------------------------------------
//           3(8)                 |               4                               |               1
//--------------------------------------------------------------------------------------------------------------------------------







void eo_dac_test(t_gcr_addr* io_gcr_addr, const uint32_t i_lane_mask)
{
    //start eo_dac_test
    set_debug_state(0x5180);

    //fw_num_lanes This field is used to programmably set the number of lanes in the group serviced by the PPE thread.
    const uint32_t G_NUM_LANES = fw_field_get(fw_num_lanes);



    //Procudure before code is run//
    //1.  ext_cmd_req_power_on_pl (fw register) be set for the lane or lanes -- calles io_lane_power_on(power on both banks and tx)
    //2.  rx_dac_test_check_en -- scom register must be set to 1
    //3.  ext_cmd_req_rx_bist_tests_pl (fw register) must be set for the lane or lanes


    //-------SETUP FOR DAC TEST--------------------------------------------------------------------//
    //set_debug_state(0x000E);
    uint32_t l_lane = 0;
    uint32_t i_lane_shift = i_lane_mask;

    int rx_servo_status_timeout_en_int = (get_ptr_field(io_gcr_addr, rx_servo_status_timeout_en));

    if ((rx_servo_status_timeout_en_int) )
    {
        //bypass the setup begin

        //Setup loop -- value to compare against for fail, control regiters etc..
        for (; l_lane < G_NUM_LANES; ++l_lane, i_lane_shift = i_lane_shift << 1)
        {
            //Start for
            set_debug_state(0x5181);

            if ((i_lane_shift & 0x80000000) == 0x0)
            {
                continue;
            }

            set_gcr_addr_lane(io_gcr_addr, l_lane);

            //0-7 is used for compare in pulldown test default is 00001000
            //8-12 is used for setting thresh4 defualt default is 00011
            //THE COMPARE AMOUNT USED MUST BE BASED ON FILTER DEPTH USED.
            put_ptr_field(io_gcr_addr, rx_psave_cdr_time_val, 0b0000100000011, read_modify_write);//dir change 3 compare=8

            //rx_dactt_hijack2_cfg rx_berpl_sat_thresh_width 12 bits
            //0-7 is used for compare in pulldown test

            //9-11 is used for setting the filter
            //INCREASING FILTER(2^filter value) WILL INCREASE RUN TIME!!!! 111= 127 counts, 110= 64, 101=32, 100=16, 011= 8
            //THE COMPARE AMOUNT USED MUST BE BASED ON FILTER DEPTH USED.
            put_ptr_field(io_gcr_addr, rx_berpl_sat_thresh, 0b000000100100, read_modify_write);//filter of 4 compare=1

            //rx_dactt_hijack3_cfg rx_pr_phase_force_val_a 7 bits
            //0-4 are hyst_start 00011 other bits unsed
            //put_ptr_field(io_gcr_addr,rx_pr_phase_force_val_a , 0b0001100, read_modify_write);//start at 3
            put_ptr_field(io_gcr_addr, rx_pr_phase_force_val_a , 0b0000100, read_modify_write); //start at 1


            //rx_dactt_hijack4_cfg rx_pr_phase_force_val_b 7 bits
            //Freeze the state machince in a state
            put_ptr_field(io_gcr_addr, rx_pr_phase_force_val_b , 0b0000000, read_modify_write);

            //check for the linear part of test
            put_ptr_field(io_gcr_addr, rx_dactt_linear_delta_cfg , 0b00101, read_modify_write);

            //there are 2 diff blackout times for pulldown tests and linear test
            //the two register will override the values but only to 1 that will be used for both pulldown and linear test
            //put_ptr_field(io_gcr_addr,rx_dactt_bo_timer_cfg , 0b00001, read_modify_write);

            //Work around for HW551352 keep logic form change black out counter
            put_ptr_field(io_gcr_addr, rx_dactt_bo_timer_mask , 0b1, read_modify_write);


            //enable the dac test logic to take control of read and write of dac registers
            put_ptr_field(io_gcr_addr, rx_dactt_regrw_mux_enb , 0b1, read_modify_write);


            //enable the clocks for the dac bist -- sm, accum, and vote etc..
            put_ptr_field(io_gcr_addr, rx_dactt_test_circuit_enb , 0b1, read_modify_write);

            set_debug_state(0x5182);
        }//end for
    }//bypasss the setup end

    //Sleep thread so other buses get setup
    io_sleep(get_gcr_addr_thread(io_gcr_addr));

    //-------DAC BIST STATE MACHINCE RUNNING------------------------------------------------------------/

    //set_debug_state(0x000E);
    l_lane = 0;
    i_lane_shift = i_lane_mask;

    //WHEN THIS FAST WRITE HAPPPEN'S THE DAC BIST FOR THAT LANE WILL START RUNNING
    for (; l_lane < G_NUM_LANES; ++l_lane, i_lane_shift = i_lane_shift << 1)
    {
        //start for
        set_debug_state(0x5183);

        if ((i_lane_shift & 0x80000000) == 0x0)
        {
            continue;
        }

        set_gcr_addr_lane(io_gcr_addr, l_lane);

        //The fast write will clear both the banka and bankb done's and the fail register for bank A and B
        put_ptr_field(io_gcr_addr, rx_dactt_done_banka , 0b0000000, fast_write);

        set_debug_state(0x5184);
    }//end for

    //Sleep thread so other buses start
    io_sleep(get_gcr_addr_thread(io_gcr_addr));


//-------KEEP PPE IN THIS CODE UNTIL DAC TEST IS DONE-------------------------------------/
    int rx_dactt_done_banka_int;
    int rx_dactt_done_bankb_int;

    do
    {
        l_lane = 0;
        i_lane_shift = i_lane_mask;
        rx_dactt_done_banka_int = 0b1000;
        rx_dactt_done_bankb_int = 0b1000;

        for (; l_lane < G_NUM_LANES; ++l_lane, i_lane_shift = i_lane_shift << 1)
        {
            //start for
            set_debug_state(0x5185);

            if ((i_lane_shift & 0x80000000) == 0x0)
            {
                continue;
            }

            set_gcr_addr_lane(io_gcr_addr, l_lane);

            //bit oring the read of all lanes -- if one is 0 we will keep looping, mask is need so
            //we only look at the msb.
            rx_dactt_done_banka_int &= (get_ptr_field(io_gcr_addr, rx_dactt_done_banka)) & 0b1000;
            rx_dactt_done_bankb_int &= (get_ptr_field(io_gcr_addr, rx_dactt_done_bankb)) & 0b1000;

            set_debug_state(0x5186);
        }//end for

        //Sleep thread so other buses start
        io_sleep(get_gcr_addr_thread(io_gcr_addr));
        //0000 0000 0000 1000

        //set_debug_state(rx_dactt_done_banka_int);
        //set_debug_state(rx_dactt_done_bankb_int);

        //&&  Called Logical AND operator. If both the operands are non-zero, then the condition becomes true.
        //&   Binary AND Operator copies a bit to the result if it exists in both operands.

        //bool banka_done = false;
        //bool bankb_done = false;

        //banka_done = (rx_dactt_done_banka_int == 0b1000);
        //bankb_done = (rx_dactt_done_bankb_int == 0b1000);



    }
    while ( (rx_dactt_done_banka_int == 0) || (rx_dactt_done_bankb_int == 0) );  //both need be false to break loop

    //while( ! (( banka_done) && (bankb_done))); //exit when banka_done = true and bankb_done = true

    //while( (rx_dactt_done_banka_int != "1000") && (rx_dactt_done_banka_int != "1000") ); //exit when banka_done = true and bankb_done = true
    //        false we are = 1000                      true  we are = 01000


    //-------RESET THE OVERLOAD REGISTER BACK TO DEFUALT VALUES AND TURN OFF ENABLE FOR DAC BIST-------------------------------------/

    l_lane = 0;
    i_lane_shift = i_lane_mask;

    //Setting the overload register back to Regdef default values.
    for (; l_lane < G_NUM_LANES; ++l_lane, i_lane_shift = i_lane_shift << 1)
    {
        //start for
        set_debug_state(0x5187);

        if ((i_lane_shift & 0x80000000) == 0x0)
        {
            continue;
        }

        set_gcr_addr_lane(io_gcr_addr, l_lane);

        //Disable the clocks for the dac bist -- sm, accum, and vote etc..
        put_ptr_field(io_gcr_addr, rx_dactt_test_circuit_enb , 0b0, read_modify_write);

        //Disable the dac test logic to take control of read and write of dac registers
        put_ptr_field(io_gcr_addr, rx_dactt_regrw_mux_enb , 0b0, read_modify_write);

        //Need a wait so that the mux can be pickup by the logic
        io_wait_us(get_gcr_addr_thread(io_gcr_addr), 5); // sleep until 5us has elapsed


        put_ptr_field(io_gcr_addr, rx_psave_cdr_time_val,  0b1000000000000, fast_write);
        put_ptr_field(io_gcr_addr, rx_berpl_sat_thresh,    0b111111111111, fast_write);
        put_ptr_field(io_gcr_addr, rx_pr_phase_force_val_a, 0b0000000,      fast_write);
        put_ptr_field(io_gcr_addr, rx_pr_phase_force_val_b, 0b0000000,      fast_write);

        //setting rx_psave_cdrlock_mode_sel to 11 show that ppe code ran through
        //know HW548405
        put_ptr_field(io_gcr_addr, rx_psave_cdrlock_mode_sel, 0b11, read_modify_write); //pl



        set_debug_state(0x5188);
    }//end for

    //putting this back to default value
    put_ptr_field(io_gcr_addr, rx_servo_status_timeout_en, 0b1,         read_modify_write);

    //Sleep thread so other buses start
    io_sleep(get_gcr_addr_thread(io_gcr_addr));

    //-----LOAD THE FAIL INTO THE LOGGER--------------------------/
    l_lane = 0;
    i_lane_shift = i_lane_mask;
    int rx_dactt_fail_banka_int = get_ptr_field(io_gcr_addr, rx_dactt_fail_banka);
    int rx_dactt_fail_bankb_int = get_ptr_field(io_gcr_addr, rx_dactt_fail_bankb);

    //Setting the overload register back to Regdef default values.
    for (; l_lane < G_NUM_LANES; ++l_lane, i_lane_shift = i_lane_shift << 1)
    {
        //start for
        set_debug_state(0x5189);

        if ((i_lane_shift & 0x80000000) == 0x0)
        {
            continue;
        }

        set_gcr_addr_lane(io_gcr_addr, l_lane);

        rx_dactt_fail_banka_int = get_ptr_field(io_gcr_addr, rx_dactt_fail_banka);
        rx_dactt_fail_bankb_int = get_ptr_field(io_gcr_addr, rx_dactt_fail_bankb);

        if (rx_dactt_fail_banka_int == 0b1)
        {
            set_rxbist_fail_lane( io_gcr_addr, bank_a );
        }

        if (rx_dactt_fail_bankb_int == 0b1)
        {
            set_rxbist_fail_lane( io_gcr_addr, bank_b );
        }


    }//end for

    //Sleep thread so other buses start
    io_sleep(get_gcr_addr_thread(io_gcr_addr));

    //-------END DAC TEST-------------------------------------/
    //return pass_code;
    set_debug_state(0x518D);
}//end eo_dac_test
