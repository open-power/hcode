/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_vclq_checks.c $       */
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
// *! FILENAME    : eo_vclq_checks.c
// *! TITLE       : RX BIST Fail Checking
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
// mwh20022400 |mwh     | Add in warning fir to DFT fir so both get set if DFT check triggers
// bja20012300 |bja     | Move setting of per group fail mask to function
// mwh20012820 |mwh     | There is no min max for phase data -- HW516933
// cws20011400 |cws     | Added Debug Logs
// bja19100300 |bja     | enable peak2 checking
// bja19081400 |bja     | improve code speed, size, and clarity
// bja19081401 |bja     | set per-group fail regs
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
#include "io_logger.h"

//checking clte gain, ctle peak, lte gain, lte zero, qpa
void eo_vclq_checks(t_gcr_addr* gcr_addr, t_bank bank)
{
    set_debug_state(0x5100); // start vclq checks

    int lane = get_gcr_addr_lane(gcr_addr);

    /////////////////////////////////////////////////////////
    // Check fail conditions and set fail registers
    /////////////////////////////////////////////////////////
    {
        // start scope limiting - A

        uint8_t fail = 0; // 0 = pass, 1 = fail

        // create 3*uint32_t arrays to retain register access information
        // store access information to speed up
        mk_ptr_ary(rx_ctle_gain);
        mk_ptr_ary(rx_ctle_peak1);
        mk_ptr_ary(rx_ctle_peak2);
        mk_ptr_ary(rx_lte_gain);
        mk_ptr_ary(rx_lte_zero);
        //mk_ptr_ary(rx_quad_ph_adj_nsd);
        mk_ptr_ary(rx_quad_ph_adj_nse);
        //mk_ptr_ary(rx_quad_ph_adj_ewd);
        mk_ptr_ary(rx_quad_ph_adj_ewe);

        // fill arrays with bank-dependent register values
        if (bank == bank_a)
        {
            set_debug_state(0x5150); // bank a
            asn_ptr_ary(rx_ctle_gain,       rx_a_ctle_gain);
            asn_ptr_ary(rx_ctle_peak1,      rx_a_ctle_peak1);
            asn_ptr_ary(rx_ctle_peak2,      rx_a_ctle_peak2);
            asn_ptr_ary(rx_lte_gain,        rx_a_lte_gain);
            asn_ptr_ary(rx_lte_zero,        rx_a_lte_zero);
            //asn_ptr_ary(rx_quad_ph_adj_nsd, rx_a_pr_ns_data);
            asn_ptr_ary(rx_quad_ph_adj_nse, rx_a_pr_ns_edge);
            //asn_ptr_ary(rx_quad_ph_adj_ewd, rx_a_pr_ew_data);
            asn_ptr_ary(rx_quad_ph_adj_ewe, rx_a_pr_ew_edge);
        }
        else
        {
            set_debug_state(0x5151); // bank b
            asn_ptr_ary(rx_ctle_gain,       rx_b_ctle_gain);
            asn_ptr_ary(rx_ctle_peak1,      rx_b_ctle_peak1);
            asn_ptr_ary(rx_ctle_peak2,      rx_b_ctle_peak2);
            asn_ptr_ary(rx_lte_gain,        rx_b_lte_gain);
            asn_ptr_ary(rx_lte_zero,        rx_b_lte_zero);
            //asn_ptr_ary(rx_quad_ph_adj_nsd, rx_b_pr_ns_data);
            asn_ptr_ary(rx_quad_ph_adj_nse, rx_b_pr_ns_edge);
            //asn_ptr_ary(rx_quad_ph_adj_ewd, rx_b_pr_ew_data);
            asn_ptr_ary(rx_quad_ph_adj_ewe, rx_b_pr_ew_edge);
        }

        //Check ctle gain (vga) is not to low or to high
        if( get_ptr_field(gcr_addr, rx_ctle_gain_check_en) )
        {
            set_debug_state(0x5152); // checking ctle gain

            // declare in this scope to reduce stack size
            int rx_ctle_gain_int = get_ptr_ary(gcr_addr, rx_ctle_gain);

            //evaluate consecutively to reduce memory accesses, but increases coverage
            //can handle min/max cases separately (e.g. fail bits or debug state)
            if ( rx_ctle_gain_int < mem_pg_field_get(rx_ctle_gain_min_check) )
            {
                fail = 1;
                set_debug_state(0x5153);
            }
            else if ( rx_ctle_gain_int > mem_pg_field_get(rx_ctle_gain_max_check) )
            {
                fail = 1;
                set_debug_state(0x5154);
            }
            else
            {
                fail = 0;
                set_debug_state(0x5155);
            }

            ADD_LOG(DEBUG_BIST_VGA_GAIN_FAIL, gcr_addr, rx_ctle_gain_int);
            mem_pl_field_put(rx_ctle_gain_fail, lane, fail);
        }


        //Check ctle peak is not to low or to high
        if( get_ptr_field(gcr_addr, rx_ctle_peak1_check_en) )
        {
            set_debug_state(0x5156); // checking peak1

            int rx_ctle_peak1_int = get_ptr_ary(gcr_addr, rx_ctle_peak1);

            if ( rx_ctle_peak1_int < mem_pg_field_get(rx_ctle_peak1_min_check) )
            {
                fail = 1;
                set_debug_state(0x5157);
            }
            else if ( rx_ctle_peak1_int >  mem_pg_field_get(rx_ctle_peak1_max_check) )
            {
                fail = 1;
                set_debug_state(0x5158);
            }
            else
            {
                fail = 0;
                set_debug_state(0x5159);
            }

            ADD_LOG(DEBUG_BIST_CTLE_PEAK1_FAIL, gcr_addr, rx_ctle_peak1_int);
            mem_pl_field_put(rx_ctle_peak1_fail, lane, fail );
        }

        //Check ctle peak is not to low or to high
        if(get_ptr_field(gcr_addr, rx_ctle_peak2_check_en))
        {
            set_debug_state(0x515A); // checking peak1

            int rx_ctle_peak2_int = get_ptr_ary(gcr_addr, rx_ctle_peak2);

            if ( rx_ctle_peak2_int < mem_pg_field_get(rx_ctle_peak2_min_check) )
            {
                fail = 1;
                set_debug_state(0x515B);
            }
            else if ( rx_ctle_peak2_int >  mem_pg_field_get(rx_ctle_peak2_max_check) )
            {
                fail = 1;
                set_debug_state(0x515C);
            }
            else
            {
                fail = 0;
                set_debug_state(0x515D);
            }

            ADD_LOG(DEBUG_BIST_CTLE_PEAK2_FAIL, gcr_addr, rx_ctle_peak2_int);
            mem_pl_field_put(rx_ctle_peak2_fail, lane, fail );
        }

        //Check lte gain is not to low or to high
        if( get_ptr_field(gcr_addr, rx_lte_gain_check_en) )
        {
            set_debug_state(0x515E); // checking lte gain

            int rx_lte_gain_int = get_ptr_ary(gcr_addr, rx_lte_gain);

            if ( rx_lte_gain_int < mem_pg_field_get(rx_lte_gain_min_check) )
            {
                fail = 1;
                set_debug_state(0x516F);
            }
            else if ( rx_lte_gain_int >  mem_pg_field_get(rx_lte_gain_max_check) )
            {
                fail = 1;
                set_debug_state(0x5160);
            }
            else
            {
                fail = 0;
                set_debug_state(0x5161);
            }

            ADD_LOG(DEBUG_BIST_LTE_GAIN_FAIL, gcr_addr, rx_lte_gain_int);
            mem_pl_field_put(rx_lte_gain_fail, lane, fail );
        }

        //check rx_lte_zero values start
        if( get_ptr_field(gcr_addr, rx_lte_zero_check_en) )
        {
            set_debug_state(0x5162); // checking lte gain
            int rx_lte_zero_int = get_ptr_ary(gcr_addr, rx_lte_zero);

            if ( rx_lte_zero_int  < mem_pg_field_get(rx_lte_zero_min_check) )
            {
                fail = 1;
                set_debug_state(0x5163);
            }
            else if ( rx_lte_zero_int >  mem_pg_field_get(rx_lte_zero_max_check) )
            {
                fail = 1;
                set_debug_state(0x5164);
            }
            else
            {
                fail = 0;
                set_debug_state(0x5165);
            }

            ADD_LOG(DEBUG_BIST_LTE_ZERO_FAIL, gcr_addr, rx_lte_zero_int);
            mem_pl_field_put(rx_lte_zero_fail, lane, fail );
        }

        //check quad phase adj is not to low or to high start
        if( get_ptr_field(gcr_addr, rx_quad_phase_check_en) )
        {
            set_debug_state(0x5166); // checking qpa

            //int rx_quad_ph_adj_nsd_int = get_ptr_ary(gcr_addr, rx_quad_ph_adj_nsd);
            int rx_quad_ph_adj_nse_int = get_ptr_ary(gcr_addr, rx_quad_ph_adj_nse);
            //int rx_quad_ph_adj_ewd_int = get_ptr_ary(gcr_addr, rx_quad_ph_adj_ewd);
            int rx_quad_ph_adj_ewe_int = get_ptr_ary(gcr_addr, rx_quad_ph_adj_ewe);
            int check_quad_ph_adj_max = mem_pg_field_get(rx_quad_ph_adj_max_check);
            int check_quad_ph_adj_min = mem_pg_field_get(rx_quad_ph_adj_min_check);

            //if ( rx_quad_ph_adj_nsd_int <  check_quad_ph_adj_min ) {
            //    fail = 1;
            //    set_debug_state(0x5167);
            //}
            //else if ( rx_quad_ph_adj_nsd_int >  check_quad_ph_adj_max ) {
            //    fail = 1;
            //    set_debug_state(0x5168);
            //}
            if ( rx_quad_ph_adj_nse_int <  check_quad_ph_adj_min )
            {
                fail = 1;
                set_debug_state(0x5169);
            }
            else if ( rx_quad_ph_adj_nse_int >  check_quad_ph_adj_max )
            {
                fail = 1;
                set_debug_state(0x516A);
            }
            //else if ( rx_quad_ph_adj_ewd_int <  check_quad_ph_adj_min ) {
            //    fail = 1;
            //    set_debug_state(0x516B);
            //}
            //else if ( rx_quad_ph_adj_ewd_int >  check_quad_ph_adj_max ) {
            //    fail = 1;
            //    set_debug_state(0x516C);
            //}
            else if ( rx_quad_ph_adj_ewe_int <  check_quad_ph_adj_min )
            {
                fail = 1;
                set_debug_state(0x516D);
            }
            else if ( rx_quad_ph_adj_ewe_int >  check_quad_ph_adj_max )
            {
                fail = 1;
                set_debug_state(0x516E);
            }
            else
            {
                fail = 0;
                set_debug_state(0x516F);
            }

            ADD_LOG(DEBUG_BIST_QPA_FAIL, gcr_addr, 0x0);
            mem_pl_field_put(rx_quad_phase_fail, lane, fail);
        }

    } // end scope limiting - A
    /////////////////////////////////////////////////////////
    // Write appropriate per-group fail bit if any step failed
    /////////////////////////////////////////////////////////
    {
        // start  scope limiting - B

        mk_ptr_ary(pg_done_reg);
        uint8_t lane_bit_offset;

        // set register access values according to bank and lane number
        if (lane < 16)
        {
            lane_bit_offset = 15;

            if (bank == bank_a)
            {
                asn_ptr_ary( pg_done_reg, rx_a_lane_done_0_15 );
            }
            else
            {
                asn_ptr_ary( pg_done_reg, rx_b_lane_done_0_15 );
            }
        }
        else
        {
            lane_bit_offset = 23;

            if (bank == bank_a)
            {
                asn_ptr_ary( pg_done_reg, rx_a_lane_done_16_23 );
            }
            else
            {
                asn_ptr_ary( pg_done_reg, rx_b_lane_done_16_23 );
            }
        }

        // shift the lane bit to the appropriate spot for the reg selected
        uint32_t lane_mask = 1 << ( lane_bit_offset - lane );

        // setting done
        set_debug_state(0x5170);
        // read in the current reg values
        uint32_t pg_reg_val = get_ptr_ary( gcr_addr, pg_done_reg );
        // or in the lane bit
        pg_reg_val = ( pg_reg_val | lane_mask );
        // write the new value to pg done reg
        put_ptr_ary( gcr_addr, pg_done_reg, pg_reg_val, read_modify_write );

        // only write the pg fails if any per-step fail is set
        if ( mem_pl_field_get(rx_step_fail_alias, lane) != 0 )
        {
            // setting fail
            set_debug_state(0x5171);
            set_rxbist_fail_lane( gcr_addr, bank );
        }
    } // end scope limiting - B

    set_debug_state(0x5101); // end vclq checks
}//vclq_checks()

// set the given lane bit of the given bank fail register
void set_rxbist_fail_lane( t_gcr_addr* gcr_addr, t_bank bank)
{
    int lane = get_gcr_addr_lane(gcr_addr);
    mk_ptr_ary(pg_fail_reg);
    uint8_t lane_bit_offset;

    // set register access values according to bank and lane number
    if (lane < 16)
    {
        lane_bit_offset = 15;

        if (bank == bank_a)
        {
            asn_ptr_ary( pg_fail_reg, rx_a_lane_fail_0_15 );
        }
        else
        {
            asn_ptr_ary( pg_fail_reg, rx_b_lane_fail_0_15 );
        }
    }
    else
    {
        lane_bit_offset = 23;

        if (bank == bank_a)
        {
            asn_ptr_ary( pg_fail_reg, rx_a_lane_fail_16_23 );
        }
        else
        {
            asn_ptr_ary( pg_fail_reg, rx_b_lane_fail_16_23 );
        }
    }

    // shift the lane bit to the appropriate spot for the reg selected
    uint32_t lane_mask = 1 << ( lane_bit_offset - lane );

    // read in the current reg values
    uint32_t pg_reg_val = get_ptr_ary( gcr_addr, pg_fail_reg );
    // or in the lane bit
    pg_reg_val = ( pg_reg_val | lane_mask );
    put_ptr_ary( gcr_addr, pg_fail_reg, pg_reg_val, read_modify_write );
    mem_pg_field_put(rx_fail_flag, 1);
    set_fir(fir_code_dft_error | fir_code_warning);
}
