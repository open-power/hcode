/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/txbist_main.c $          */
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
// *! FILENAME    : txbist_main.c
// *! TITLE       :
// *! DESCRIPTION : Run tx duty cycle correction
// *!
// *! OWNER NAME  : Gary Peterson       Email: garyp@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// mwh19043000 |mwh     | Add set_fir(fir_code_dft_error) to fail if's
// bja19040400 |bja     | Set DFT FIR bit on fail
// gap19031200 |gap     | Changed i_tune, q_tune and iq_tune to customized gray code
// gap18112700 |gap     | Update field names, change min and max from defines to mem_reg's
// gap18101100 |gap     | Created
// -----------------------------------------------------------------------------

#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "eo_common.h"
#include "txbist_main.h"

#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"

////////////////////////////////////////////////////////////////////////////////////
// TXBIST
// Run steps depending on enables
//   gcr_addr is set to tx_group before this is called
////////////////////////////////////////////////////////////////////////////////////
void txbist_main (t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0x0100); // txbist_main start
    // Cal Step: TX Duty Cycle Correction checking
    int tx_bist_enable_dcc = get_ptr_field(gcr_addr_i, tx_bist_dcc_en);

    if (tx_bist_enable_dcc)
    {
        txbist_main_dcc(gcr_addr_i);
    }

    // Cal Step: TX BIST low speed
    int tx_bist_enable_ls = get_ptr_field(gcr_addr_i, tx_bist_ls_en);

    if (tx_bist_enable_ls)
    {
        txbist_main_ls(gcr_addr_i);
    }

    // Cal Step: TX BIST high speed
    int tx_bist_enable_hs = get_ptr_field(gcr_addr_i, tx_bist_hs_en);

    if (tx_bist_enable_hs)
    {
        txbist_main_hs(gcr_addr_i);
    }

    set_debug_state(0x01FF); // txbist_main end
} // txbist_main

////////////////////////////////////////////////////////////////////////////////////
// TXBIST
// Run Duty cycle correction checking
////////////////////////////////////////////////////////////////////////////////////
void txbist_main_dcc(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0x0110); // txbist_main_dcc start

    int16_t bist_dcc_i_min_l  = TwosCompToInt(mem_pg_field_get(tx_bist_dcc_i_min),  tx_bist_dcc_i_min_width);
    int16_t bist_dcc_i_max_l  = TwosCompToInt(mem_pg_field_get(tx_bist_dcc_i_max),  tx_bist_dcc_i_max_width);
    int16_t bist_dcc_q_min_l  = TwosCompToInt(mem_pg_field_get(tx_bist_dcc_q_min),  tx_bist_dcc_q_min_width);
    int16_t bist_dcc_q_max_l  = TwosCompToInt(mem_pg_field_get(tx_bist_dcc_q_max),  tx_bist_dcc_q_max_width);
    int16_t bist_dcc_iq_min_l = TwosCompToInt(mem_pg_field_get(tx_bist_dcc_iq_min), tx_bist_dcc_iq_min_width);
    int16_t bist_dcc_iq_max_l = TwosCompToInt(mem_pg_field_get(tx_bist_dcc_iq_max), tx_bist_dcc_iq_max_width);

    int16_t dcc_i_tune_l  = Gray6ToInt(get_ptr_field(gcr_addr_i,   tx_dcc_i_tune))  ; // must be 6 bits wide
    int16_t dcc_q_tune_l  = Gray6ToInt(get_ptr_field(gcr_addr_i,   tx_dcc_q_tune))  ; // must be 6 bits wide
    int16_t dcc_iq_tune_l = Gray5IQToInt(get_ptr_field(gcr_addr_i, tx_dcc_iq_tune)) ; // must be 5 bits wide

    if(dcc_i_tune_l < bist_dcc_i_min_l)
    {
        set_debug_state(0x0111); // txbist_main_dcc fail i low
        txbist_main_set_bist_fail(gcr_addr_i);
        put_ptr_field(gcr_addr_i, tx_bist_dcc_fail, 0b1, read_modify_write);
        set_fir(fir_code_dft_error);
    }

    if(dcc_i_tune_l > bist_dcc_i_max_l)
    {
        set_debug_state(0x0112); // txbist_main_dcc fail i high
        txbist_main_set_bist_fail(gcr_addr_i);
        put_ptr_field(gcr_addr_i, tx_bist_dcc_fail, 0b1, read_modify_write);
        set_fir(fir_code_dft_error);
    }

    if(dcc_q_tune_l < bist_dcc_q_min_l)
    {
        set_debug_state(0x0113); // txbist_main_dcc fail q low
        txbist_main_set_bist_fail(gcr_addr_i);
        put_ptr_field(gcr_addr_i, tx_bist_dcc_fail, 0b1, read_modify_write);
        set_fir(fir_code_dft_error);
    }

    if(dcc_q_tune_l > bist_dcc_q_max_l)
    {
        set_debug_state(0x0114); // txbist_main_dcc fail q high
        txbist_main_set_bist_fail(gcr_addr_i);
        put_ptr_field(gcr_addr_i, tx_bist_dcc_fail, 0b1, read_modify_write);
        set_fir(fir_code_dft_error);
    }

    if(dcc_iq_tune_l < bist_dcc_iq_min_l)
    {
        set_debug_state(0x0115); // txbist_main_dcc fail iq low
        txbist_main_set_bist_fail(gcr_addr_i);
        put_ptr_field(gcr_addr_i, tx_bist_dcc_fail, 0b1, read_modify_write);
        set_fir(fir_code_dft_error);
    }

    if(dcc_iq_tune_l > bist_dcc_iq_max_l)
    {
        set_debug_state(0x0116); // txbist_main_dcc fail iq high
        txbist_main_set_bist_fail(gcr_addr_i);
        put_ptr_field(gcr_addr_i, tx_bist_dcc_fail, 0b1, read_modify_write);
        set_fir(fir_code_dft_error);
    }

    set_debug_state(0x012F); // txbist_main_dcc end
} //txbist_main_dcc

////////////////////////////////////////////////////////////////////////////////////
// TXBIST
// Run low speed bist
////////////////////////////////////////////////////////////////////////////////////
void txbist_main_ls(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0x0130); // txbist_main_ls start

    put_ptr_field(gcr_addr_i, tx_pattern_sel,      0b010,  read_modify_write);
    put_ptr_field(gcr_addr_i, tx_pattern_enable,   0b1,    read_modify_write);
    put_ptr_field(gcr_addr_i, tx_bist_prbs_enable, 0b1,    read_modify_write);
    put_ptr_field(gcr_addr_i, tx_bist_prbs_clear,  0b1,    read_modify_write);
    put_ptr_field(gcr_addr_i, tx_bist_prbs_clear,  0b0,    read_modify_write);

    if(get_ptr_field(gcr_addr_i, tx_bist_prbs_stat_alias) != 1)
    {
        set_debug_state(0x0131); // txbist_main_ls fail
        txbist_main_set_bist_fail(gcr_addr_i);
        put_ptr_field(gcr_addr_i, tx_bist_ls_fail, 0b1, read_modify_write);
        set_fir(fir_code_dft_error);
    }

    put_ptr_field(gcr_addr_i, tx_bist_prbs_enable, 0b0,    read_modify_write);
    put_ptr_field(gcr_addr_i, tx_pattern_enable,   0b0,    read_modify_write);
    put_ptr_field(gcr_addr_i, tx_pattern_sel,      0b000,  read_modify_write);

    set_debug_state(0x014F); // txbist__main_ls end
} //txbist_main_ls

////////////////////////////////////////////////////////////////////////////////////
// TXBIST
// Run high speed bist
////////////////////////////////////////////////////////////////////////////////////
void txbist_main_hs(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0x0150); // txbist_main_hs start

    put_ptr_field(gcr_addr_i, tx_tdr_enable,      0b0,    read_modify_write);
    put_ptr_field(gcr_addr_i, tx_bist_hs_cust_en, 0b1,    read_modify_write);
    put_ptr_field(gcr_addr_i, tx_pattern_enable,  0b1,    read_modify_write);
    put_ptr_field(gcr_addr_i, tx_pattern_sel,     0b001,  read_modify_write);

    txbist_main_hs_pat(gcr_addr_i, 0b0011);
    txbist_main_hs_pat(gcr_addr_i, 0b1100);
    // two failing cases for testing
//   txbist_main_hs_pat(gcr_addr_i, 0b1110);
//   txbist_main_hs_pat(gcr_addr_i, 0b0001);

    put_ptr_field(gcr_addr_i, tx_pattern_sel,     0b000,  read_modify_write);
    put_ptr_field(gcr_addr_i, tx_pattern_enable,  0b0,    read_modify_write);
    put_ptr_field(gcr_addr_i, tx_bist_hs_cust_en, 0b0,    read_modify_write);

    set_debug_state(0x016F); // txbist_main_hs end
} //txbist_main_hs

////////////////////////////////////////////////////////////////////////////////////
// TXBIST
// Run high speed bist for particular clock pattern
////////////////////////////////////////////////////////////////////////////////////
void txbist_main_hs_pat(t_gcr_addr* gcr_addr_i, uint8_t clk_pattern_i)
{
    set_debug_state(0x0151); // txbist_main_hs_pat  start

    uint16_t clk_pattern_16_bit = clk_pattern_i | (clk_pattern_i << 4) | (clk_pattern_i << 8) | (clk_pattern_i << 12);
    put_ptr_field(gcr_addr_i, tx_pattern_0_15,   clk_pattern_16_bit,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_16_31,  clk_pattern_16_bit,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_32_47,  clk_pattern_16_bit,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_48_63,  clk_pattern_16_bit,  fast_write);

    txbist_main_hs_pat_sel(gcr_addr_i, clk_pattern_i, 0b000);
    txbist_main_hs_pat_sel(gcr_addr_i, clk_pattern_i, 0b001);
    txbist_main_hs_pat_sel(gcr_addr_i, clk_pattern_i, 0b010);
    txbist_main_hs_pat_sel(gcr_addr_i, clk_pattern_i, 0b011);
    txbist_main_hs_pat_sel(gcr_addr_i, clk_pattern_i, 0b100);
    txbist_main_hs_pat_sel(gcr_addr_i, clk_pattern_i, 0b101);
    txbist_main_hs_pat_sel(gcr_addr_i, clk_pattern_i, 0b110);
    txbist_main_hs_pat_sel(gcr_addr_i, clk_pattern_i, 0b111);

    set_debug_state(0x015F); // txbist_main_hs_pat end
} //txbist_main_hs_pat

////////////////////////////////////////////////////////////////////////////////////
// TXBIST
// Run high speed bist for particular hs select; clock setting is passed to log error, if any
////////////////////////////////////////////////////////////////////////////////////
void txbist_main_hs_pat_sel(t_gcr_addr* gcr_addr_i, uint8_t clk_pattern_i, uint8_t hs_sel_i)
{
    set_debug_state(0x0152); // txbist_main_hs_pat_sel  start

    uint16_t dac_thresh_max_l = mem_pg_field_get(tx_bist_hs_dac_thresh_max);
    uint16_t dac_thresh_min_l = mem_pg_field_get(tx_bist_hs_dac_thresh_min);

    put_ptr_field(gcr_addr_i, tx_bist_hs_cust_sel,     hs_sel_i,    read_modify_write);

    put_ptr_field(gcr_addr_i, tx_tdr_dac_cntl,    dac_thresh_max_l,  read_modify_write);

    if(get_ptr_field(gcr_addr_i, tx_tdr_capt_val) != 0)
    {
        set_debug_state(0x0153); // txbist_main_hs_pat_sel fail high
        txbist_main_set_bist_fail(gcr_addr_i);
        put_ptr_field(gcr_addr_i, tx_bist_hs_fail, 0b1, read_modify_write);
        set_fir(fir_code_dft_error);
    }

    put_ptr_field(gcr_addr_i, tx_tdr_dac_cntl,    dac_thresh_min_l,  read_modify_write);

    if(get_ptr_field(gcr_addr_i, tx_tdr_capt_val) != 1)
    {
        set_debug_state(0x0154); // txbist_main_hs_pat_sel fail low
        txbist_main_set_bist_fail(gcr_addr_i);
        put_ptr_field(gcr_addr_i, tx_bist_hs_fail, 0b1, read_modify_write);
        set_fir(fir_code_dft_error);
    }

    set_debug_state(0x0158); // txbist_main_hs_pat_sel end
} //txbist_main_hs_pat_sel

void txbist_main_set_bist_fail(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0x0170); // txbist_main_set_bist_fail start
    uint32_t new_lane_bad;
    uint8_t lane = get_gcr_addr_lane(gcr_addr_i);

    if (lane < 16)
    {
        new_lane_bad = mem_pg_field_get(tx_bist_fail_0_15) | (0b1 << (15 - lane));
        mem_pg_field_put(tx_bist_fail_0_15, new_lane_bad);
    }
    else
    {
        new_lane_bad = mem_pg_field_get(tx_bist_fail_16_23) | (0b1 << (23 - lane));
        mem_pg_field_put(tx_bist_fail_16_23, new_lane_bad);
    }

    set_fir(fir_code_dft_error); // set DFT FIR bit
    set_debug_state(0x018F); // txbist_main_set_bist_fail end
} // txbist_main_set_bist_fail
