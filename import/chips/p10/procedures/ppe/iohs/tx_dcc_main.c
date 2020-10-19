/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/tx_dcc_main.c $          */
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
// *! FILENAME    : tx_dcc_main.c
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
// bja20092800 |bja     | Use shared constants for TX register overrides
// bja20091500 |bja     | HW544277: Use main path by default for dcc
// bja20091400 |bja     | HW544277: Prevent replica path in anything but p10 dd1
// bja20090900 |bja     | Use common is_p10_dd1() check
// gap20082500 |gap     | HW542315 correct repeating pattern when in half-width mode
// gap20052100 |gap     | Added power up/down controls for dd2, repmux path select dd1 cq521314
// gap20050200 |gap     | Add main and pad dcc error propagation
// gap19091000 |gap     | Change rx_dcc_debug to tx_dcc_debug HW503432
// mbs19090500 |mbs     | Updated tx_dcc_main_min_samples mem_reg for sim speedup
// vbr19081300 |vbr     | Removed mult_int16 (not needed for ppe42x)
// gap19073000 |gap     | Updated to use modified dcdet circuitry and associated state machine
// gap19061800 |gap     | Changed from tx_dcc_out bit to tx_dcc_out_vec, still using one bit
// vbr19051700 |vbr     | Updated multiply by -1 to not use multiplier.
// gap19061300 |gap     | Changed from io_wait to io_wait_us
// gap19061300 |gap     | Added wait time for auto zero
// gap19031300 |gap     | Rename TwosCompTo* to IntTo*
// gap19030600 |gap     | Changed i_tune, q_tune and iq_tune to customized gray code
// vbr18081500 |vbr     | Including eo_common.h for return codes.
// gap18042700 |gap     | Created
// -----------------------------------------------------------------------------

#include <stdbool.h>
#include "io_lib.h"
#include "pk.h"
#include "eo_common.h"
#include "tx_dcc_main.h"
#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"

////////////////////////////////////////////////////////////////////////////////////
// DCC
// Run Duty cycle correction initialization
////////////////////////////////////////////////////////////////////////////////////
void tx_dcc_main_init(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xD010); // init start

    uint32_t tx_dcc_sel_alias_l = get_ptr_field(gcr_addr_i, tx_dcc_sel_alias) ; // main followed by pad
    set_tx_dcc_debug(0xD061, tx_dcc_sel_alias_l); //dcc_sel_alias
    bool use_repmux_l = (tx_dcc_sel_alias_l == 0);
    const bool IS_P10_DD1 = is_p10_dd1();

    if ( use_repmux_l && !IS_P10_DD1 )   // Guard against using replica path in anything but p10 dd1.
    {
        use_repmux_l = false;
        // HW544277: default is main path
        put_ptr_field(gcr_addr_i, tx_dcc_sel_alias, TX_DCC_SEL_ALIAS_DEFAULT, read_modify_write); //pl
    }

    uint32_t tx_dcc_main_min_samples_int = mem_pg_field_get(tx_dcc_main_min_samples);

    put_ptr_field(gcr_addr_i, tx_dcc_i_tune,   IntToGray6(0),   read_modify_write);
    put_ptr_field(gcr_addr_i, tx_dcc_q_tune,   IntToGray6(0),   read_modify_write);
    put_ptr_field(gcr_addr_i, tx_dcc_iq_tune,  IntToGray5IQ(0), read_modify_write);

    // power on dcc if not p10 dd1; p10 dd1 does not allow this control
    if ( ! is_p10_dd1() )   // not p10 dd1
    {
        put_ptr_field(gcr_addr_i, tx_bank_controls_dcc_alias,  0b0, read_modify_write); //pl power-on, active low
    }

    if(!use_repmux_l)
    {
        set_debug_state(0xD011); // enable pattern gen
        put_ptr_field(gcr_addr_i, tx_tdr_enable,      0b0,     read_modify_write);
        put_ptr_field(gcr_addr_i, tx_pattern_enable,  0b1,     read_modify_write);
        put_ptr_field(gcr_addr_i, tx_pattern_sel,     0b001,   read_modify_write);
    }

    tx_dcc_main_servo(gcr_addr_i, use_repmux_l, tx_dcc_main_max_step_i_c,  tx_dcc_main_dir_i_c,  SERVOOP_I,
                      tx_dcc_main_min_i_c,  tx_dcc_main_max_i_c,  tx_dcc_main_min_samples_int, tx_dcc_main_ratio_thresh_c);
    tx_dcc_main_servo(gcr_addr_i, use_repmux_l, tx_dcc_main_max_step_q_c,  tx_dcc_main_dir_q_c,  SERVOOP_Q,
                      tx_dcc_main_min_q_c,  tx_dcc_main_max_q_c,  tx_dcc_main_min_samples_int, tx_dcc_main_ratio_thresh_c);
    tx_dcc_main_servo(gcr_addr_i, use_repmux_l, tx_dcc_main_max_step_iq_c, tx_dcc_main_dir_iq_c, SERVOOP_IQ,
                      tx_dcc_main_min_iq_c, tx_dcc_main_max_iq_c, tx_dcc_main_min_samples_int, tx_dcc_main_ratio_thresh_c);

    if(!use_repmux_l)
    {
        put_ptr_field(gcr_addr_i, tx_pattern_enable,  0b0,     read_modify_write);
        put_ptr_field(gcr_addr_i, tx_pattern_sel,     0b000,   read_modify_write);
    }

    // power off dcc if not dd1; dd1 does not allow this control
    if ( ! is_p10_dd1() )   // not p10 dd1
    {
        put_ptr_field(gcr_addr_i, tx_bank_controls_dcc_alias,  0b1, read_modify_write); //pl power-on, active low
    }

    set_debug_state(0xD01F); // init end
} //tx_dcc_main_init

////////////////////////////////////////////////////////////////////////////////////
// DCC
// Run Duty cycle correction adjustment
//
// This will only be called for dd1; therefor power-up, power-down are not used here
// It is also only used in repmux mode; so no pattern generation is required
////////////////////////////////////////////////////////////////////////////////////
int tx_dcc_main_adjust(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xD020); // adjust start

    uint32_t tx_dcc_main_min_samples_int = mem_pg_field_get(tx_dcc_main_min_samples);

    tx_dcc_main_servo(gcr_addr_i, true, 1, tx_dcc_main_dir_i_c,  SERVOOP_I,  tx_dcc_main_min_i_c,  tx_dcc_main_max_i_c,
                      tx_dcc_main_min_samples_int, tx_dcc_main_ratio_thresh_c);
    tx_dcc_main_servo(gcr_addr_i, true, 1, tx_dcc_main_dir_q_c,  SERVOOP_Q,  tx_dcc_main_min_q_c,  tx_dcc_main_max_q_c,
                      tx_dcc_main_min_samples_int, tx_dcc_main_ratio_thresh_c);
    tx_dcc_main_servo(gcr_addr_i, true, 1, tx_dcc_main_dir_iq_c, SERVOOP_IQ, tx_dcc_main_min_iq_c, tx_dcc_main_max_iq_c,
                      tx_dcc_main_min_samples_int, tx_dcc_main_ratio_thresh_c);

    int status_l = pass_code;

    set_debug_state(0xD02F); // adjust end
    return status_l;
} //tx_dcc_main_adjust


////////////////////////////////////////////////////////////////////////////////////
// DCC servo
// Run Duty cycle servo to move towards or over edge with finer steps downto a step size of 1
////////////////////////////////////////////////////////////////////////////////////
void tx_dcc_main_servo(t_gcr_addr* gcr_addr_i, bool use_repmux_i, uint32_t step_size_i, int32_t dir_i, t_servoop op_i,
                       int32_t min_tune_i, int32_t max_tune_i, uint32_t min_samples_i,
                       int32_t ratio_thresh_i)
{

    set_tx_dcc_debug(0xD071, step_size_i); //step_size_i
    set_tx_dcc_debug(0xD072, dir_i); //temp debug
    set_tx_dcc_debug(0xD073, min_tune_i); //temp debug
    set_tx_dcc_debug(0xD074, max_tune_i); //temp debug
    set_tx_dcc_debug(0xD075, op_i); //temp debug
    set_tx_dcc_debug(0xD076, SERVOOP_I); //temp debug
    set_tx_dcc_debug(0xD077, SERVOOP_Q); //temp debug
    set_tx_dcc_debug(0xD078, SERVOOP_IQ); //temp debug

    t_comp_result comp_decision_l = COMP_RESULT_P_NEAR_N;
    t_comp_result initial_comp_decision_l = COMP_RESULT_P_NEAR_N;
    int dcc_next_tune_l = 0;
    int dcc_last_tune_l = 0;
    int adj_l = 0;
    int step_l = 0;
    int step_size_l = 0;
    bool done = false;
    bool saved_compare = false;
    int thread_l = 0;

    // Notes on bit alignment for clk_pat pattern gen
    //    The bits are swizzled at the main mux as follows:
    //       data_in[1:3,0]<->D4[0:3]
    //    So, in order to obtain a desired D4[0:3] pattern, the
    //       same as the applicable tx_dcc_pat, we must swizzle
    //       the repeating data/clock pattern as follows:
    //         data_in[0:3]<->D4[3,0:2]
    //
    //    Phase     Desired control      Repeating clk pattern
    //      I           0b0110                 0011
    //      Q           0b0011                 1001
    //      IQ          0b0101                 1010

    switch(op_i)
    {
        case SERVOOP_I:
            set_debug_state(0xD031); // servo init i

            if (use_repmux_i)
            {
                put_ptr_field(gcr_addr_i, tx_dcc_pat, 0b0110, read_modify_write); // set pattern for repmux
            }
            else
            {
                tx_write_4_bit_pat(gcr_addr_i, 0b0011);
            }

            dcc_last_tune_l = Gray6ToInt(get_ptr_field(gcr_addr_i, tx_dcc_i_tune)) ; // must be 6 bits wide
            break;

        case SERVOOP_Q:
            set_debug_state(0xD032); // servo init q

            if (use_repmux_i)
            {
                put_ptr_field(gcr_addr_i, tx_dcc_pat, 0b0011, read_modify_write); // set pattern for repmux
            }
            else
            {
                tx_write_4_bit_pat(gcr_addr_i, 0b1001);
            }

            dcc_last_tune_l = Gray6ToInt(get_ptr_field(gcr_addr_i, tx_dcc_q_tune)) ;  // must be 6 bits wide
            break;

        case SERVOOP_IQ:
            set_debug_state(0xD033); // servo init iq

            if (use_repmux_i)
            {
                put_ptr_field(gcr_addr_i, tx_dcc_pat, 0b0101, read_modify_write); // set pattern for repmux
            }
            else
            {
                tx_write_4_bit_pat(gcr_addr_i, 0b1010);
            }

            dcc_last_tune_l = Gray5IQToInt(get_ptr_field(gcr_addr_i, tx_dcc_iq_tune)) ; // must be 5 bits wide
            break;
    }

    thread_l = get_gcr_addr_thread(gcr_addr_i);
    step_size_l = step_size_i;
    saved_compare = false;
    done = false;

    do
    {
        set_debug_state(0xD034); // servo do loop start
        io_wait_us(thread_l, tx_dcc_main_wait_tune_us_c);
        comp_decision_l = tx_dcc_main_compare_result(gcr_addr_i, min_samples_i, ratio_thresh_i);

        if (!saved_compare)
        {
            initial_comp_decision_l = comp_decision_l;
            saved_compare = true;
        }

        step_l = step_size_l * dir_i;

        switch(comp_decision_l)
        {
            case COMP_RESULT_P_GT_N:
                set_debug_state(0xD035); // servo prelim reduce
                adj_l = -1 * step_l;
                break;

            case COMP_RESULT_P_LT_N:
                set_debug_state(0xD036); // servo prelim increase
                adj_l = step_l;
                break;

            case COMP_RESULT_P_NEAR_N:
                set_debug_state(0xD037); // servo no change - done
                done = true;
                break;
        }

        set_tx_dcc_debug(0xD089, adj_l);
        set_tx_dcc_debug(0xD08A, dcc_last_tune_l);
        set_tx_dcc_debug(0xD08B, max_tune_i);
        set_tx_dcc_debug(0xD08C, min_tune_i);
        set_tx_dcc_debug(0xD08D, step_l);

        if (!done)
        {
            if ((adj_l + dcc_last_tune_l) > max_tune_i)
            {
                if (dcc_last_tune_l == max_tune_i)
                {
                    set_debug_state(0xD038); // servo at max limit - done
                    done = true;
                }
                else
                {
                    set_debug_state(0xD039); // servo tune to max
                    // there is a suboptimization issue with this
                    // in normal scenarios, one could see, with a step_size_i of 4,
                    // for example, this sequence of tune values:
                    //   max_tune_i - 1; max_tune_i; max_tune_i - 2; max_tune_i - 1
                    // With some work adjusting step_size_l, we could avoid this
                    //   though adjusting properly and generally, may be non-trivial
                    //   that approach needs to consider the possibilty that
                    //   dcc_last_tune_l may have started out of range
                    dcc_next_tune_l = max_tune_i;
                }
            }
            else if ((adj_l + dcc_last_tune_l) < min_tune_i)
            {
                if (dcc_last_tune_l == min_tune_i)
                {
                    set_debug_state(0xD03A); // servo at min limit - done
                    done = true;
                }
                else
                {
                    set_debug_state(0xD03B); // servo tune to min
                    // see above for a suboptimization issue that is also present here
                    dcc_next_tune_l = min_tune_i;
                }
            }
            else
            {
                set_debug_state(0xD03C); // servo use prelim adj
                dcc_next_tune_l = dcc_last_tune_l + adj_l;
            }
        }

        if (!done)
        {
            switch(op_i)
            {
                case SERVOOP_I:
                    set_debug_state(0xD03D); // servo update i
                    put_ptr_field(gcr_addr_i, tx_dcc_i_tune,   IntToGray6(dcc_next_tune_l),    read_modify_write);
                    break;

                case SERVOOP_Q:
                    set_debug_state(0xD03E); // servo update q
                    put_ptr_field(gcr_addr_i, tx_dcc_q_tune,   IntToGray6(dcc_next_tune_l),    read_modify_write);
                    break;

                case SERVOOP_IQ:
                    set_debug_state(0xD041); // servo update iq
                    put_ptr_field(gcr_addr_i, tx_dcc_iq_tune,   IntToGray5IQ(dcc_next_tune_l),    read_modify_write);
                    break;
            }

            if((initial_comp_decision_l != comp_decision_l) | (step_size_l < step_size_i) | (step_size_l <= 1))
            {
                step_size_l = step_size_l >> 1;
                set_tx_dcc_debug(0xD091, step_size_l); //temp debug
            }

            dcc_last_tune_l = dcc_next_tune_l;
        }
    }
    while ((step_size_l > 0) & !done);

} //tx_dcc_main_servo

////////////////////////////////////////////////////////////////////////////////////
// DCC compare result
// Run compare state machine and return whether P >, <, or near N
////////////////////////////////////////////////////////////////////////////////////
t_comp_result tx_dcc_main_compare_result(t_gcr_addr* gcr_addr_i, uint32_t min_samples_i, int32_t ratio_thresh_i)
{

    t_comp_result comp_result_l = COMP_RESULT_P_NEAR_N;
    uint32_t vote_p_gt_n_l = 0;
    uint32_t vote_p_lt_n_l = 0;
    uint32_t vote_l = 0;
    uint32_t vote_total_l = 0;

    put_ptr_field(gcr_addr_i, tx_dcc_cmp_run, 1, read_modify_write);

    do
    {
        set_debug_state(0xD051); // compare_result loop begin

        vote_l = get_ptr_field(gcr_addr_i, tx_dcc_cmp_cnt_alias) ; // up followed by down

        vote_p_gt_n_l = vote_l >> tx_dcc_cmp_down_cnt_width; // assumes alias will only contain up and down
        vote_p_lt_n_l = vote_l & ((0x1 << tx_dcc_cmp_down_cnt_width) - 1);
        vote_total_l = vote_p_lt_n_l + vote_p_gt_n_l;

        set_tx_dcc_debug(0xD099, vote_l);
        set_tx_dcc_debug(0xD09A, vote_p_lt_n_l);
        set_tx_dcc_debug(0xD09B, vote_p_gt_n_l);
        set_tx_dcc_debug(0xD09C, vote_total_l);
        set_tx_dcc_debug(0xD09D, min_samples_i);
        set_tx_dcc_debug(0xD09E, ratio_thresh_i);

    }
    while (vote_total_l < min_samples_i);

    if ((vote_p_lt_n_l >> ratio_thresh_i) > vote_p_gt_n_l)
    {
        set_debug_state(0xD052); // compare_result p_lt_n
        comp_result_l = COMP_RESULT_P_LT_N;
    }
    else if ((vote_p_gt_n_l >> ratio_thresh_i) > vote_p_lt_n_l)
    {
        set_debug_state(0xD053); // compare_result p_gt_n
        comp_result_l = COMP_RESULT_P_GT_N;
    }
    else
    {
        set_debug_state(0xD054); // compare_result p_near_n
        comp_result_l = COMP_RESULT_P_NEAR_N;
    }

    put_ptr_field(gcr_addr_i, tx_dcc_cmp_run, 0, read_modify_write);

    return comp_result_l;
} //tx_dcc_main_compare_result

