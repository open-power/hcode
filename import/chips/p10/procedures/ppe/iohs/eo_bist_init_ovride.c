/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_bist_init_ovride.c $  */
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
// *! FILENAME    : eo_bist_init_ovride.c
// *! TITLE       : n/a
// *! DESCRIPTION : Reset the done ppe register for each eye opt step RX
// *!             : A Bank and B Bank
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
// cws19053000 |cws     | Removed hw_reg_init, dccal, run_lane calls
// mwh19052200 |mwh     | updated rx_bist_cir_alias
// mwh19042600 |mwh     | Initial Rev 51yy debug state
// jfg19050101 |jfg     | change peak_done to peak1_done by Mike Harper's request
// vbr19041500 |vbr     | Updated register names
// mwh19041719 |mwh     | change peak to peak1
// mwh19040119 |mwh     | removed the rx_fail_flag code -- code size hit and taking out reduce sim
// mwh19012100 |mwh     | Add in way to start rxbist with shared test
// mwh19011100 |mwh     | Initial Rev 51yy debug state
//------------------------------------------------------------------------------

#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "eo_common.h"
#include "ppe_fw_reg_const_pkg.h"
#include "ppe_img_reg_const_pkg.h"

#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"

#include "eo_bist_init_ovride.h"




//checking clte gain, ctle peak, lte gain, lte zero, qpa
void eo_bist_init_ovride(t_gcr_addr* gcr_addr)
{
    //start eo_rxbist_init_or_override.c

    //assume manu and system do a scan flush reset

    int lane = 0;//for the "for loop" used on pl registers
    int bist_num_lanes = fw_field_get(fw_num_lanes);//getting max number of lanes per theard

    //enabling all rx bist checks
    put_ptr_field(gcr_addr, rx_check_en_alias, 0xFFFE, fast_write); //pg

    //enabling all tx bist checks
    put_ptr_field(gcr_addr, tx_bist_en_alias, 0b111, read_modify_write ); //pg

    //turn on pervasive_capt see what pervasive signs are set scan only observ
    put_ptr_field(gcr_addr, rx_pervasive_capt, 0b1, read_modify_write ); //pg

    //trun off alt bank powerdown
    mem_pg_field_put(rx_disable_bank_pdwn, 0b1);//pg

    //turning on all init steps
    mem_pg_field_put(rx_eo_step_cntl_opt_alias, 0b111111111); //pg

    //turning on all recal steps
    mem_pg_field_put(rx_rc_step_cntl_opt_alias, 0b111111111); //pg


    for (lane = 0; lane <  bist_num_lanes; lane++)
    {
        //begin for
        //turn on circuit components for bist
        set_gcr_addr_lane(gcr_addr, lane);
        put_ptr_field(gcr_addr, rx_bist_cir_alias, 0b100000, read_modify_write); //pl

        //doing lane power up
        //mem_pl_field_put(io_power_up_lane_req,lane,0b1);//pl

        //enabling init and recal with two below
        mem_pl_field_put(rx_enable_auto_recal, lane, 0b1); //pl
        //mem_pl_field_put(rx_run_lane,lane,0b1);//pl
    }//end for

    //system vs manu setting specific stuff

    set_gcr_addr_lane(gcr_addr, 0);
    int system_vs_tester = get_ptr_field(gcr_addr, system_manu_sel);//pg

    if (system_vs_tester)
    {
        //setting change specific to manu/dft
    }
    else
    {
        //setting change specific to system
    }

    //while loop for syncclk mux -- must be set 0 -- system should fly through this
    int rx_syncclk_muxsel_dc_int = get_ptr_field(gcr_addr, rx_syncclk_muxsel_dc); //pg rox

    while (rx_syncclk_muxsel_dc_int == 1)
    {
        //begin while
        rx_syncclk_muxsel_dc_int = get_ptr_field(gcr_addr, rx_syncclk_muxsel_dc); //pg rox
        io_sleep(get_gcr_addr_thread(gcr_addr));
    }//end


    //while loop for shared test pin must be set if running txbist
    int tc_shared_pin_dc_int = get_ptr_field(gcr_addr, tc_shared_pin_dc); //pg rox
    int tc_bist_shared_ovrd_int = get_ptr_field(gcr_addr, tc_bist_shared_ovrd); //pg
    int tc_bist_code_go_int = get_ptr_field(gcr_addr, tc_bist_code_go); //pg

    while (((tc_shared_pin_dc_int == 1) || (tc_bist_shared_ovrd_int == 1)) && (tc_bist_code_go_int == 1))
    {
        //begin while
        tc_shared_pin_dc_int = get_ptr_field(gcr_addr, tc_shared_pin_dc); //pg rox
        tc_bist_shared_ovrd_int = get_ptr_field(gcr_addr, tc_bist_shared_ovrd); //pg
        tc_bist_code_go_int = get_ptr_field(gcr_addr, tc_bist_code_go); //pg
        io_sleep(get_gcr_addr_thread(gcr_addr));
    }//end

    //clearing the work reg so we do not repeat the bist run
    lcl_put(scom_ppe_work1_lcl_addr, scom_ppe_work1_width, 0x00000000);

}//end  eo_bist_init_ovride.c






//mem_pl_field_put(rx_ctle_peak1_fail, lane, 0b1 )
//read_modify_write)
//reseting all the dones
//mem_pl_field_put(rx_a_ctle_gain_done, lane, 0b0);//loop so get reset in loop also
//mem_pl_field_put(rx_b_ctle_gain_done, lane, 0b0); //loop so get reset in loop also
//
//mem_pl_field_put(rx_a_latch_offset_done, lane, 0b0);//only reset here
//mem_pl_field_put(rx_b_latch_offset_done, lane, 0b0);//only reset here
//
//mem_pl_field_put(rx_a_eoff_done, lane, 0b0);//loop so get reset in loop also
//mem_pl_field_put(rx_b_eoff_done, lane, 0b0);//loop so get reset in loop also
//
//mem_pl_field_put(rx_a_ctle_peak1_done, lane, 0b0);//loop so get reset in loop also
//mem_pl_field_put(rx_b_ctle_peak1_done, lane, 0b0);//loop so get reset in loop also
//
//mem_pl_field_put(rx_a_lte_gain_done, lane, 0b0);//loop so get reset in loop also
//mem_pl_field_put(rx_b_lte_gain_done, lane, 0b0);//loop so get reset in loop also
//
//mem_pl_field_put(rx_a_lte_freq_done, lane, 0b0);//loop so get reset in loop also
//mem_pl_field_put(rx_b_lte_freq_done, lane, 0b0);//loop so get reset in loop also
//
//mem_pl_field_put(rx_a_bank_sync_done, lane, 0b0);//only reset here
//mem_pl_field_put(rx_b_bank_sync_done, lane, 0b0);//only reset here
//
//mem_pl_field_put(rx_a_quad_phase_done, lane, 0b0);//only reset here
//mem_pl_field_put(rx_b_quad_phase_done, lane, 0b0);//only reset here
//
//mem_pl_field_put(rx_a_dfe_h1_done, lane, 0b0);//only reset here
//mem_pl_field_put(rx_b_dfe_h1_done, lane, 0b0);//only reset here
//
//mem_pl_field_put(rx_a_dfe_done, lane, 0b0);//only reset here
//mem_pl_field_put(rx_b_dfe_done, lane, 0b0);//only reset here
//
//mem_pl_field_put(rx_a_ddc_done, lane, 0b0);//only reset here
//mem_pl_field_put(rx_b_ddc_done, lane, 0b0);//only reset here
//
//mem_pl_field_put(rx_a_ber_done, lane, 0b0);//only reset here
//mem_pl_field_put(rx_b_ber_done, lane, 0b0);//only reset here
//
//mem_pg_field_put(rx_linklayer_done, 0b0);//only reset here

//Reset fail bits
//mem_pl_field_put(rx_ctle_gain_fail   , lane, 0b0);
//mem_pl_field_put(rx_latch_offset_fail, lane, 0b0);
//mem_pl_field_put(rx_eoff_fail        , lane, 0b0);
//mem_pl_field_put(rx_ctle_peak1_fail   , lane, 0b0);
//mem_pl_field_put(rx_lte_gain_fail    , lane, 0b0);
//mem_pl_field_put(rx_lte_freq_fail    , lane, 0b0);
//mem_pl_field_put(rx_bank_sync_fail   , lane, 0b0);
//mem_pl_field_put(rx_quad_phase_fail   , lane, 0b0);
//mem_pl_field_put(rx_dfe_h1_fail      , lane, 0b0);
//mem_pl_field_put(rx_dfe_fail         , lane, 0b0);
//mem_pl_field_put(rx_ddc_fail         , lane, 0b0);
//mem_pl_field_put(rx_ber_fail         , lane, 0b0);
//mem_pg_field_put(rx_linklayer_fail         , 0b0);



//The if statement below is to be used if you want different settings
//system vs tester (wafer or module)
//
//int system_vs_tester = get_ptr_field(gcr_addr, system_manu_sel );
//int shared_pin_start = get_ptr_field(gcr_addr, tc_shared_pin_dc);
//int tc_bist_shared_ovrd = get_ptr_field(gcr_addr, tc_bist_shared_ovrd);
//int tc_bist_opcg_go_ovrd = get_ptr_field(gcr_addr, tc_bist_opcg_go_ovrd);
//int tc_opcg_iobist_go = get_ptr_field(gcr_addr, tc_opcg_iobist_go);
//
//  if (system_vs_tester)
//    {//begin system_vs_tester
//
//      while ((!shared_pin_start || ( tc_bist_shared_ovrd)) && (tc_opcg_iobist_go || ( tc_bist_opcg_go_ovrd)))
//        {//begin while
//         tc_bist_shared_ovrd = get_ptr_field(gcr_addr,tc_bist_shared_ovrd );
//         tc_bist_opcg_go_ovrd = get_ptr_field(gcr_addr,tc_bist_opcg_go_ovrd );
//  }//end while
//
//        put_ptr_field(gcr_addr, tc_bist_shared_ovrd  ,0b1, read_modify_write);
//        put_ptr_field(gcr_addr, tc_bist_opcg_go_ovrd ,0b1, read_modify_write);
//
//     }//end system_vs_tester





//scom register that will get set at end
//Not going reset here, since dependend on above
//Add code just in case

//put_ptr_field(gcr_addr,rx_a_lane_fail_0_15  ,0b0000000000000000 , fast_write);
//put_ptr_field(gcr_addr,rx_a_lane_fail_16_23 ,0b00000000         , fast_write);
//put_ptr_field(gcr_addr,rx_b_lane_fail_0_15  ,0b0000000000000000 , fast_write);
//put_ptr_field(gcr_addr,rx_b_lane_fail_16_23 ,0b00000000         , fast_write);

//put_ptr_field(gcr_addr,rx_a_lane_done_0_15  ,0b0000000000000000 , fast_write);
//put_ptr_field(gcr_addr,rx_a_lane_done_16_23 ,0b00000000         , fast_write);
//put_ptr_field(gcr_addr,rx_b_lane_done_0_15  ,0b0000000000000000 , fast_write);
//put_ptr_field(gcr_addr,rx_b_lane_done_16_23 ,0b00000000         , fast_write);

//put_ptr_field(gcr_addr,rx_section_fail      ,0b0000000000000000 , fast_write);

//put_ptr_field(gcr_addr,tc_opcg_iobist_go       ,0b0   , read_modify_write);
//put_ptr_field(gcr_addr,rx_io_pb_nv_iobist_reset,0b0   , read_modify_write);
//put_ptr_field(gcr_addr,rx_a_bist_en            ,0b0   , read_modify_write);
//put_ptr_field(gcr_addr,rx_b_bist_en            ,0b0   , read_modify_write);
//put_ptr_field(gcr_addr,rx_bistclk_en           ,0b0   , read_modify_write);
//put_ptr_field(gcr_addr,rx_a_prbs15_adj         ,0b0   , read_modify_write);
//put_ptr_field(gcr_addr,rx_b_prbs15_adj         ,0b0   , read_modify_write);

//put_ptr_field(gcr_addr,rx_check_en_alias,0b0000000000000000 , fast_write);
//put_ptr_field(gcr_addr,rx_ctle_gain_check_en   ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_latchoff_check_en    ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_eoff_check_en        ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_eoff_poff_check_en   ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_ctle_peak_check_en   ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_lte_gain_check_en    ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_lte_freq_check_en    ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_bank_sync_check_en   ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_quad_phase_check_en  ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_dfe_h1_check_en      ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_dfe_check_en         ,0b0, read_modify_write);
//put_ptr_field  //mem_pl_field_put(rx_ctle_peak1_fail, lane, 0b1 )
//read_modify_write)
//reseting all the dones
//mem_pl_field_put(rx_a_ctle_gain_done, lane, 0b0);//loop so get reset in loop also
//mem_pl_field_put(rx_b_ctle_gain_done, lane, 0b0); //loop so get reset in loop also
//
//mem_pl_field_put(rx_a_latch_offset_done, lane, 0b0);//only reset here
//mem_pl_field_put(rx_b_latch_offset_done, lane, 0b0);//only reset here
//
//mem_pl_field_put(rx_a_eoff_done, lane, 0b0);//loop so get reset in loop also
//mem_pl_field_put(rx_b_eoff_done, lane, 0b0);//loop so get reset in loop also
//
//mem_pl_field_put(rx_a_ctle_peak1_done, lane, 0b0);//loop so get reset in loop also
//mem_pl_field_put(rx_b_ctle_peak1_done, lane, 0b0);//loop so get reset in loop also
//
//mem_pl_field_put(rx_a_lte_gain_done, lane, 0b0);//loop so get reset in loop also
//mem_pl_field_put(rx_b_lte_gain_done, lane, 0b0);//loop so get reset in loop also
//
//mem_pl_field_put(rx_a_lte_freq_done, lane, 0b0);//loop so get reset in loop also
//mem_pl_field_put(rx_b_lte_freq_done, lane, 0b0);//loop so get reset in loop also
//
//mem_pl_field_put(rx_a_bank_sync_done, lane, 0b0);//only reset here
//mem_pl_field_put(rx_b_bank_sync_done, lane, 0b0);//only reset here
//
//mem_pl_field_put(rx_a_quad_phase_done, lane, 0b0);//only reset here
//mem_pl_field_put(rx_b_quad_phase_done, lane, 0b0);//only reset here
//
//mem_pl_field_put(rx_a_dfe_h1_done, lane, 0b0);//only reset here
//mem_pl_field_put(rx_b_dfe_h1_done, lane, 0b0);//only reset here
//
//mem_pl_field_put(rx_a_dfe_done, lane, 0b0);//only reset here
//mem_pl_field_put(rx_b_dfe_done, lane, 0b0);//only reset here
//
//mem_pl_field_put(rx_a_ddc_done, lane, 0b0);//only reset here
//mem_pl_field_put(rx_b_ddc_done, lane, 0b0);//only reset here
//
//mem_pl_field_put(rx_a_ber_done, lane, 0b0);//only reset here
//mem_pl_field_put(rx_b_ber_done, lane, 0b0);//only reset here
//
//mem_pg_field_put(rx_linklayer_done, 0b0);//only reset here

//Reset fail bits
//mem_pl_field_put(rx_ctle_gain_fail   , lane, 0b0);
//mem_pl_field_put(rx_latch_offset_fail, lane, 0b0);
//mem_pl_field_put(rx_eoff_fail        , lane, 0b0);
//mem_pl_field_put(rx_ctle_peak1_fail   , lane, 0b0);
//mem_pl_field_put(rx_lte_gain_fail    , lane, 0b0);
//mem_pl_field_put(rx_lte_freq_fail    , lane, 0b0);
//mem_pl_field_put(rx_bank_sync_fail   , lane, 0b0);
//mem_pl_field_put(rx_quad_phase_fail   , lane, 0b0);
//mem_pl_field_put(rx_dfe_h1_fail      , lane, 0b0);
//mem_pl_field_put(rx_dfe_fail         , lane, 0b0);
//mem_pl_field_put(rx_ddc_fail         , lane, 0b0);
//mem_pl_field_put(rx_ber_fail         , lane, 0b0);
//mem_pg_field_put(rx_linklayer_fail         , 0b0);


//The if statement below is to be used if you want different settings
//system vs tester (wafer or module)
//
//int system_vs_tester = get_ptr_field(gcr_addr, system_manu_sel );
//int shared_pin_start = get_ptr_field(gcr_addr, tc_shared_pin_dc);
//int tc_bist_shared_ovrd = get_ptr_field(gcr_addr, tc_bist_shared_ovrd);
//int tc_bist_opcg_go_ovrd = get_ptr_field(gcr_addr, tc_bist_opcg_go_ovrd);
//int tc_opcg_iobist_go = get_ptr_field(gcr_addr, tc_opcg_iobist_go);
//
//  if (system_vs_tester)
//    {//begin system_vs_tester
//
//      while ((!shared_pin_start || ( tc_bist_shared_ovrd)) && (tc_opcg_iobist_go || ( tc_bist_opcg_go_ovrd)))
//        {//begin while
//         tc_bist_shared_ovrd = get_ptr_field(gcr_addr,tc_bist_shared_ovrd );
//         tc_bist_opcg_go_ovrd = get_ptr_field(gcr_addr,tc_bist_opcg_go_ovrd );
//  }//end while
//
//        put_ptr_field(gcr_addr, tc_bist_shared_ovrd  ,0b1, read_modify_write);
//        put_ptr_field(gcr_addr, tc_bist_opcg_go_ovrd ,0b1, read_modify_write);
//
//     }//end system_vs_tester





//scom register that will get set at end
//Not going reset here, since dependend on above
//Add code just in case

//put_ptr_field(gcr_addr,rx_a_lane_fail_0_15  ,0b0000000000000000 , fast_write);
//put_ptr_field(gcr_addr,rx_a_lane_fail_16_23 ,0b00000000         , fast_write);
//put_ptr_field(gcr_addr,rx_b_lane_fail_0_15  ,0b0000000000000000 , fast_write);
//put_ptr_field(gcr_addr,rx_b_lane_fail_16_23 ,0b00000000         , fast_write);

//put_ptr_field(gcr_addr,rx_a_lane_done_0_15  ,0b0000000000000000 , fast_write);
//put_ptr_field(gcr_addr,rx_a_lane_done_16_23 ,0b00000000         , fast_write);
//put_ptr_field(gcr_addr,rx_b_lane_done_0_15  ,0b0000000000000000 , fast_write);
//put_ptr_field(gcr_addr,rx_b_lane_done_16_23 ,0b00000000         , fast_write);

//put_ptr_field(gcr_addr,rx_section_fail      ,0b0000000000000000 , fast_write);

//put_ptr_field(gcr_addr,tc_opcg_iobist_go       ,0b0   , read_modify_write);
//put_ptr_field(gcr_addr,rx_io_pb_nv_iobist_reset,0b0   , read_modify_write);
//put_ptr_field(gcr_addr,rx_a_bist_en            ,0b0   , read_modify_write);
//put_ptr_field(gcr_addr,rx_b_bist_en            ,0b0   , read_modify_write);
//put_ptr_field(gcr_addr,rx_bistclk_en           ,0b0   , read_modify_write);
//put_ptr_field(gcr_addr,rx_a_prbs15_adj         ,0b0   , read_modify_write);
//put_ptr_field(gcr_addr,rx_b_prbs15_adj         ,0b0   , read_modify_write);

//put_ptr_field(gcr_addr,rx_check_en_alias,0b0000000000000000 , fast_write);
//put_ptr_field(gcr_addr,rx_ctle_gain_check_en   ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_latchoff_check_en    ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_eoff_check_en        ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_eoff_poff_check_en   ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_ctle_peak_check_en   ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_lte_gain_check_en    ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_lte_zero_check_en    ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_bank_sync_check_en   ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_quad_phase_check_en  ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_dfe_h1_check_en      ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_dfe_check_en         ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_ddc_check_en         ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_ber_check_en         ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_link_layer_check_en  ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,system_dft_check_sel     ,0b0, read_modify_write);

//put_ptr_field(gcr_addr,rx_ber_check_en         ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,rx_link_layer_check_en  ,0b0, read_modify_write);
//put_ptr_field(gcr_addr,system_dft_check_sel     ,0b0, read_modify_write);

