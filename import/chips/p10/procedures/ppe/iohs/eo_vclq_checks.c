/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_vclq_checks.c $       */
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
// *! FILENAME    : eo_vclq_checks.c
// *! TITLE       : 0x5100
// *! DESCRIPTION : Check that value are in correct range, used in DFT and system
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
// mwh19043019 |mwh     | add in set_fir(fir_code_dft_error);
// mwh19042919 |mwh     | add in scom vec write for done on lanes for bist
// jfg19043001 |jfg     | Manually merge divergent master
// vbr19041500 |vbr     | Updated register names
// mwh19041719 |mwh     | add in peak2 code but it is commited out until merge with test_march_26_model_cns
// mwh19040119 |mwh     | removed the rx_fail_flag code -- code size hit and taking out reduce sim
// mwh19011101 |mwh     | Took out quad phase fail = 0 reset
// mwh19011100 |mwh     | Add ()  because the || could could cause compare to wrong thing
// mwh18112800 |mwh     | Initial Rev 51yy debug state
//------------------------------------------------------------------------------

#include <stdbool.h>
#include "io_lib.h"
#include "pk.h"
#include "servo_ops.h"
#include "eo_common.h"

#include "ppe_img_reg_const_pkg.h"
#include "ppe_fw_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"

#include "config_ioo.h"

#include "eo_vclq_checks.h"


//int check_value(t_gcr_addr *gcr_addr, t_bank bank, int check_value, char addr_a,char startbit_a,char endbit_a, char addr_b,char startbit_b,char endbit_b)
//   {//start check_value
//   if (bank == bank_a)
//     {return check_value = get_ptr(gcr_addr, addr_a  ,startbit_a  ,endbit_a);} //ppe pl
//   else
//     {return check_value = get_ptr(gcr_addr, addr_b  ,startbit_b  ,endbit_b);}//ppe pl
//   }//end check_value



//checking clte gain, ctle peak, lte gain, lte zero, qpa
void eo_vclq_checks(t_gcr_addr* gcr_addr, t_bank bank)
{
    //start eo_eoff
    set_debug_state(0x5100); // DEBUG

    int lane = get_gcr_addr_lane(gcr_addr);



    //  int clte_gain_fail = 0;
    //  int ctle_peak_fail = 0;
    // int lte_gain_fail = 0;
    // int lte_zero_fail = 0;
    // int qpa_fail = 0;


    int rx_ctle_gain_check_en_int  =  get_ptr(gcr_addr, rx_ctle_gain_check_en_addr , rx_ctle_gain_check_en_startbit  ,
                                      rx_ctle_gain_check_en_endbit);//pg
    int rx_ctle_peak1_check_en_int  =  get_ptr(gcr_addr, rx_ctle_peak1_check_en_addr , rx_ctle_peak1_check_en_startbit  ,
                                       rx_ctle_peak1_check_en_endbit);//pg
    //   int rx_ctle_peak2_check_en_int  =  get_ptr(gcr_addr,rx_ctle_peak2_check_en_addr ,rx_ctle_peak2_check_en_startbit  ,rx_ctle_peak2_check_en_endbit);//pg
    int rx_lte_gain_check_en_int   =  get_ptr(gcr_addr, rx_lte_gain_check_en_addr  , rx_lte_gain_check_en_startbit   ,
                                      rx_lte_gain_check_en_endbit);//pg
    int rx_lte_zero_check_en_int   =  get_ptr(gcr_addr, rx_lte_zero_check_en_addr  , rx_lte_zero_check_en_startbit   ,
                                      rx_lte_zero_check_en_endbit);//pg
    int rx_quad_phase_check_en_int =  get_ptr(gcr_addr, rx_quad_phase_check_en_addr, rx_quad_phase_check_en_startbit ,
                                      rx_quad_phase_check_en_endbit);//pg


    //2 complement unsigned
    int check_ctle_gain_min       =  mem_pg_field_get(rx_ctle_gain_min_check);//ppe pg
    int check_ctle_gain_max       =  mem_pg_field_get(rx_ctle_gain_max_check);//ppe pg
    int check_ctle_peak1_min       =  mem_pg_field_get(rx_ctle_peak1_min_check);//ppe pg
    int check_ctle_peak1_max       =  mem_pg_field_get(rx_ctle_peak1_max_check);//ppe pg
    //  int check_ctle_peak2_min       =  mem_pg_field_get(rx_ctle_peak2_min_check);//ppe pg
    //  int check_ctle_peak2_max       =  mem_pg_field_get(rx_ctle_peak2_max_check);//ppe pg



    int check_lte_gain_min       =  mem_pg_field_get(rx_lte_gain_min_check);//ppe pg
    int check_lte_gain_max       =  mem_pg_field_get(rx_lte_gain_max_check);//ppe pg
    int check_lte_zero_min       =  mem_pg_field_get(rx_lte_zero_min_check);//ppe pg
    int check_lte_zero_max       =  mem_pg_field_get(rx_lte_zero_max_check);//ppe pg

    // check_quad_ph_adj_max = 16 + max adj example 20
    // check_quad_ph_adj_min = 16 - min adj example 12
    int check_quad_ph_adj_max       = mem_pg_field_get(rx_quad_ph_adj_max_check);//ppe pg
    int check_quad_ph_adj_min       = mem_pg_field_get(rx_quad_ph_adj_min_check);//ppe pg


    int rx_ctle_gain_int;
    int rx_ctle_peak1_int;
    //  int rx_ctle_peak2_int;
    int rx_lte_gain_int;
    int rx_lte_zero_int;
    int rx_quad_ph_adj_nsd_int;
    int rx_quad_ph_adj_ewd_int;
    int rx_quad_ph_adj_nse_int;
    int rx_quad_ph_adj_ewe_int;


//10000 is the nom postion
//rx_a_pr_ns_data
//rx_a_pr_ns_edge
//rx_a_pr_ew_data
//rx_a_pr_ew_edge


    if (bank == bank_a)
    {
        rx_ctle_gain_int       = get_ptr(gcr_addr, rx_a_ctle_gain_addr  , rx_a_ctle_gain_startbit  ,
                                         rx_a_ctle_gain_endbit); //ppe pl
        rx_ctle_peak1_int      = get_ptr(gcr_addr, rx_a_ctle_peak1_addr, rx_a_ctle_peak1_startbit,
                                         rx_a_ctle_peak1_endbit); //ppe pl
        rx_lte_gain_int        = get_ptr(gcr_addr, rx_a_lte_gain_addr   , rx_a_lte_gain_startbit   ,
                                         rx_a_lte_gain_endbit); //ppe pl
        rx_lte_zero_int        = get_ptr(gcr_addr, rx_a_lte_zero_addr   , rx_a_lte_zero_startbit   ,
                                         rx_a_lte_zero_endbit); //ppe pl
        rx_quad_ph_adj_nsd_int = get_ptr(gcr_addr, rx_a_pr_ns_data_addr , rx_a_pr_ns_data_startbit ,
                                         rx_a_pr_ns_data_endbit); //ppe pl
        rx_quad_ph_adj_nse_int = get_ptr(gcr_addr, rx_a_pr_ns_edge_addr , rx_a_pr_ns_edge_startbit ,
                                         rx_a_pr_ns_edge_endbit); //ppe pl
        rx_quad_ph_adj_ewd_int = get_ptr(gcr_addr, rx_a_pr_ew_data_addr , rx_a_pr_ew_data_startbit ,
                                         rx_a_pr_ew_data_endbit); //ppe pl
        rx_quad_ph_adj_ewe_int = get_ptr(gcr_addr, rx_a_pr_ew_edge_addr , rx_a_pr_ew_edge_startbit ,
                                         rx_a_pr_ew_edge_endbit); //ppe p
    }
    else
    {
        rx_ctle_gain_int       = get_ptr(gcr_addr, rx_b_ctle_gain_addr  , rx_b_ctle_gain_startbit  ,
                                         rx_b_ctle_gain_endbit); //ppe pl
        rx_ctle_peak1_int      = get_ptr(gcr_addr, rx_b_ctle_peak1_addr, rx_b_ctle_peak1_startbit,
                                         rx_b_ctle_peak1_endbit); //ppe pl
        //         rx_ctle_peak2_int      = get_ptr(gcr_addr, rx_b_ctle_peak2_addr,rx_b_ctle_peak2_startbit,rx_b_ctle_peak2_endbit);//ppe pl

        rx_lte_gain_int        = get_ptr(gcr_addr, rx_b_lte_gain_addr   , rx_b_lte_gain_startbit   ,
                                         rx_b_lte_gain_endbit); //ppe pl
        rx_lte_zero_int        = get_ptr(gcr_addr, rx_b_lte_zero_addr   , rx_b_lte_zero_startbit   ,
                                         rx_b_lte_zero_endbit); //ppe pl
        rx_quad_ph_adj_nsd_int = get_ptr(gcr_addr, rx_b_pr_ns_data_addr , rx_b_pr_ns_data_startbit ,
                                         rx_b_pr_ns_data_endbit); //ppe pl
        rx_quad_ph_adj_nse_int = get_ptr(gcr_addr, rx_b_pr_ns_edge_addr , rx_b_pr_ns_edge_startbit ,
                                         rx_b_pr_ns_edge_endbit); //ppe pl
        rx_quad_ph_adj_ewd_int = get_ptr(gcr_addr, rx_b_pr_ew_data_addr , rx_b_pr_ew_data_startbit ,
                                         rx_b_pr_ew_data_endbit); //ppe pl
        rx_quad_ph_adj_ewe_int = get_ptr(gcr_addr, rx_b_pr_ew_edge_addr , rx_b_pr_ew_edge_startbit ,
                                         rx_b_pr_ew_edge_endbit); //ppe pl
    }//ppe pl




    //Check ctle gain (vga) is not to low or to high
    if(rx_ctle_gain_check_en_int)
    {
        //begin1
        if ( (rx_ctle_gain_int  < check_ctle_gain_min) || (rx_ctle_gain_int >  check_ctle_gain_max))
        {
            mem_pl_field_put(rx_ctle_gain_fail, lane, 0b1);
            set_fir(fir_code_dft_error);
        }
    }//end1


    //Check ctle peak is not to low or to high
    if(rx_ctle_peak1_check_en_int)
    {
        //begin1
        if ( (rx_ctle_peak1_int < check_ctle_peak1_min) || (rx_ctle_peak1_int >  check_ctle_peak1_max))
        {
            mem_pl_field_put(rx_ctle_peak1_fail, lane, 0b1 );
            set_fir(fir_code_dft_error);
        }
    }//end1

    //Check ctle peak is not to low or to high
    //    if(rx_ctle_peak2_check_en_int)
    //         {//begin1
    //     if ( (rx_ctle_peak2_int < check_ctle_peak2_min) || (rx_ctle_peak1_int >  check_ctle_peak2_max))
    //             { mem_pl_field_put(rx_ctle_peak2_fail, lane, 0b1 );}
    //         }//end1





    //Check lte gain is not to low or to high
    if(rx_lte_gain_check_en_int)
    {
        //begin1
        if ( (rx_lte_gain_int < check_lte_gain_min) || (rx_lte_gain_int >  check_lte_gain_max))
        {
            mem_pl_field_put(rx_lte_gain_fail, lane, 0b1 );
            set_fir(fir_code_dft_error);
        }
    }//end1

    //check rx_lte_zero values start
    if(rx_lte_zero_check_en_int)
    {
        //begin1

        if ( (rx_lte_zero_int  < check_lte_zero_min) || (rx_lte_zero_int >  check_lte_zero_max))
        {
            mem_pl_field_put(rx_lte_zero_fail, lane, 1 );
            set_fir(fir_code_dft_error);
        }

    }//end1



    //check quad phase adj is not to low or to high start
    if( rx_quad_phase_check_en_int)
    {
        //begin1

        if (  (rx_quad_ph_adj_nsd_int <  check_quad_ph_adj_min) || (rx_quad_ph_adj_nsd_int >  check_quad_ph_adj_max))
        {
            mem_pl_field_put(rx_quad_phase_fail, lane, 0b1);
            set_fir(fir_code_dft_error);
        }

        if (  (rx_quad_ph_adj_nse_int <  check_quad_ph_adj_min) || (rx_quad_ph_adj_nse_int >  check_quad_ph_adj_max))
        {
            mem_pl_field_put(rx_quad_phase_fail, lane, 0b1);
            set_fir(fir_code_dft_error);
        }

        if (  (rx_quad_ph_adj_ewd_int <  check_quad_ph_adj_min) || (rx_quad_ph_adj_ewd_int >  check_quad_ph_adj_max))
        {
            mem_pl_field_put(rx_quad_phase_fail, lane, 0b1);
            set_fir(fir_code_dft_error);
        }

        if (  (rx_quad_ph_adj_ewe_int <  check_quad_ph_adj_min) || (rx_quad_ph_adj_ewe_int >  check_quad_ph_adj_max))
        {
            mem_pl_field_put(rx_quad_phase_fail, lane, 0b1);
            set_fir(fir_code_dft_error);
        }


    }//end1


    //write per-group done bit for bist
    int rx_done_flag_old;

    if (bank == bank_a)
    {
        //begin if
        if (lane < 16)
        {
            //begin if
            rx_done_flag_old = get_ptr(gcr_addr, rx_a_lane_done_0_15_addr , rx_a_lane_done_0_15_startbit  ,
                                       rx_a_lane_done_0_15_endbit);//pg
            put_ptr(gcr_addr, rx_a_lane_done_0_15_addr, rx_a_lane_done_0_15_startbit, rx_a_lane_done_0_15_endbit, (rx_done_flag_old
                    || (0b1 << (15 - lane))), read_modify_write); //pg
        }//end if
        else
        {
            //>16
            rx_done_flag_old = get_ptr(gcr_addr, rx_a_lane_done_16_23_addr , rx_a_lane_done_16_23_startbit  ,
                                       rx_a_lane_done_16_23_endbit);//pg
            put_ptr(gcr_addr, rx_a_lane_done_16_23_addr, rx_a_lane_done_16_23_startbit, rx_a_lane_done_16_23_endbit,
                    (rx_done_flag_old || (0b1 << (15 - lane))), read_modify_write); //pg
        }//end else
    }//end if
    else//bank b
    {
        if (lane < 16)
        {
            //begin if
            rx_done_flag_old = get_ptr(gcr_addr, rx_b_lane_done_0_15_addr , rx_b_lane_done_0_15_startbit  ,
                                       rx_b_lane_done_0_15_endbit);//pg
            put_ptr(gcr_addr, rx_b_lane_done_0_15_addr, rx_b_lane_done_0_15_startbit, rx_b_lane_done_0_15_endbit, (rx_done_flag_old
                    || (0b1 << (15 - lane))), read_modify_write); //pg
        }//end if
        else
        {
            //>16
            rx_done_flag_old = get_ptr(gcr_addr, rx_b_lane_done_16_23_addr , rx_b_lane_done_16_23_startbit  ,
                                       rx_b_lane_done_16_23_endbit);//pg
            put_ptr(gcr_addr, rx_b_lane_done_16_23_addr, rx_b_lane_done_16_23_startbit, rx_b_lane_done_16_23_endbit,
                    (rx_done_flag_old || (0b1 << (15 - lane))), read_modify_write); //pg
        }//end else
    }//end else




    //  if (bank == bank_a){mem_pl_field_put(rx_a_eoff_done, lane, 0b1);} else{mem_pl_field_put(rx_b_eoff_done, lane, 0b1);}//ppe pl
    set_debug_state(0x5101); // DEBUG
    //return pass_code;
}//end eo_eoff


//    //Begin Tranfer fails in the ppe pl reg to scommable pg fail regs
//    int rx_fail_flag = mem_pg_field_get(rx_fail_flag);
//    int rx_fail_flag_old;
//    int rx_fail_flag_new;
//    int rx_done_flag_old;
//    int rx_done_flag_new;
//
//    if (rx_fail_flag == 1)
//      {
//        if (bank == bank_a)
//    {//begin banka
//           if (lane < 16)
//      {//begin
//              rx_fail_flag_old = get_ptr(gcr_addr,rx_a_lane_fail_0_15_addr ,rx_a_lane_fail_0_15_startbit  ,rx_a_lane_fail_0_15_endbit);//pg
//              rx_fail_flag_new = (rx_fail_flag_old || (rx_fail_flag <<(15-lane)));
//              rx_done_flag_old = get_ptr(gcr_addr,rx_a_lane_done_0_15_addr ,rx_a_lane_done_0_15_startbit  ,rx_a_lane_done_0_15_endbit);//pg
//              rx_done_flag_new = (rx_done_flag_old || (0b1 <<(15-lane)));
//        put_ptr(gcr_addr, rx_a_lane_fail_0_15_addr, rx_a_lane_fail_0_15_startbit, rx_a_lane_fail_0_15_endbit, rx_fail_flag_new , read_modify_write);
//              put_ptr(gcr_addr, rx_a_lane_done_0_15_addr, rx_a_lane_done_0_15_startbit, rx_a_lane_done_0_15_endbit, rx_done_flag_new, read_modify_write);
//            }//end
//          else
//            {//begin
//              rx_fail_flag_old = get_ptr(gcr_addr,rx_a_lane_fail_16_23_addr ,rx_a_lane_fail_16_23_startbit  ,rx_a_lane_fail_16_23_endbit);//pg
//              rx_fail_flag_new = (rx_fail_flag_old || (rx_fail_flag <<(23-lane)));
//              rx_done_flag_old = get_ptr(gcr_addr,rx_a_lane_done_16_23_addr ,rx_a_lane_done_16_23_startbit  ,rx_a_lane_done_16_23_endbit);//pg
//              rx_done_flag_new = (rx_done_flag_old || (0b1 <<(23-lane)));
//              put_ptr(gcr_addr, rx_a_lane_fail_16_23_addr, rx_a_lane_fail_16_23_startbit, rx_a_lane_fail_16_23_endbit,rx_fail_flag_new , read_modify_write);
//              put_ptr(gcr_addr, rx_a_lane_done_16_23_addr, rx_a_lane_done_16_23_startbit, rx_a_lane_done_16_23_endbit,rx_done_flag_new, read_modify_write);
//            }//end
//        }//end banka
//      else
//  {//begin bankb
//          if (lane < 16)
//      {//begin
//             rx_fail_flag_old = get_ptr(gcr_addr,rx_b_lane_fail_0_15_addr ,rx_b_lane_fail_0_15_startbit  ,rx_b_lane_fail_0_15_endbit);//pg
//             rx_fail_flag_new = (rx_fail_flag_old || (rx_fail_flag <<(15-lane)));
//             rx_done_flag_old = get_ptr(gcr_addr,rx_b_lane_done_0_15_addr ,rx_b_lane_done_0_15_startbit  ,rx_b_lane_done_0_15_endbit);//pg
//             rx_done_flag_new = (rx_done_flag_old || (0b1 <<(15-lane)));
//             put_ptr(gcr_addr, rx_b_lane_fail_0_15_addr, rx_b_lane_fail_0_15_startbit, rx_b_lane_fail_0_15_endbit, rx_fail_flag_new, read_modify_write);
//             put_ptr(gcr_addr, rx_b_lane_done_0_15_addr, rx_b_lane_done_0_15_startbit, rx_b_lane_done_0_15_endbit, rx_done_flag_new, read_modify_write);
//      }//end
//          else
//           {//begin
//              rx_fail_flag_old = get_ptr(gcr_addr,rx_b_lane_fail_16_23_addr ,rx_b_lane_fail_16_23_startbit  ,rx_b_lane_fail_16_23_endbit);//pg
//              rx_fail_flag_new = (rx_fail_flag_old || (rx_fail_flag <<(23-lane)));
//              rx_done_flag_old = get_ptr(gcr_addr,rx_b_lane_done_16_23_addr ,rx_b_lane_done_16_23_startbit  ,rx_b_lane_done_16_23_endbit);//pg
//              rx_done_flag_new = (rx_done_flag_old || (0b1 <<(23-lane)));
//             put_ptr(gcr_addr, rx_b_lane_fail_16_23_addr, rx_b_lane_fail_16_23_startbit, rx_b_lane_fail_16_23_endbit,rx_fail_flag_new , read_modify_write);
//             put_ptr(gcr_addr, rx_b_lane_done_16_23_addr, rx_b_lane_done_16_23_startbit, rx_b_lane_done_16_23_endbit,rx_done_flag_new, read_modify_write);
//           }//end
//  }//end bankb
//      }
//      //End Tranfer fails in the ppe pl reg to scommable pg fail regs
