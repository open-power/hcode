/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/tx_dcc_main.c $          */
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
// gap19062600 |gap     | Added call to adjust in init, HW496354
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

    int thread_l = get_gcr_addr_thread(gcr_addr_i);

    put_ptr_field(gcr_addr_i, tx_dcc_i_tune,   IntToGray6(0),    read_modify_write);
    put_ptr_field(gcr_addr_i, tx_dcc_q_tune,   IntToGray6(0),    read_modify_write);
    put_ptr_field(gcr_addr_i, tx_dcc_iq_tune,  IntToGray5IQ(0), read_modify_write);

    // this needs to be a separate write
    put_ptr_field(gcr_addr_i, tx_dcc_az, 0b1, read_modify_write);
    io_wait_us(thread_l, tx_dcc_main_az_wait_init_us_c);

    tx_dcc_main_servo(gcr_addr_i, (tx_dcc_max_i_c + 1) / 2, tx_dcc_dir_i_c,   SERVOOP_I,  tx_dcc_min_i_c,  tx_dcc_max_i_c);
    tx_dcc_main_servo(gcr_addr_i, (tx_dcc_max_q_c + 1) / 2, tx_dcc_dir_q_c,   SERVOOP_Q,  tx_dcc_min_q_c,  tx_dcc_max_q_c);
    tx_dcc_main_servo(gcr_addr_i, (tx_dcc_max_iq_c + 1) / 2, tx_dcc_dir_iq_c, SERVOOP_IQ, tx_dcc_min_iq_c, tx_dcc_max_iq_c);

    // this extra servo with a step of 1 allows hitting extreme of range; binary search hits starting_value +- (2*starting_step - 1)
    // for iq, this is -15 to +15; in the case of the ideal result being 17, we want an answer of 16 to reduce the error
    tx_dcc_main_adjust(gcr_addr_i);

    set_debug_state(0xD01F); // init end
} //tx_dcc_main_init

////////////////////////////////////////////////////////////////////////////////////
// DCC
// Run Duty cycle correction adjustment
////////////////////////////////////////////////////////////////////////////////////
int tx_dcc_main_adjust(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xD020); // adjust start

    tx_dcc_main_servo(gcr_addr_i, 1, tx_dcc_dir_i_c,  SERVOOP_I,  tx_dcc_min_i_c,  tx_dcc_max_i_c);
    tx_dcc_main_servo(gcr_addr_i, 1, tx_dcc_dir_q_c,  SERVOOP_Q,  tx_dcc_min_q_c,  tx_dcc_max_q_c);
    tx_dcc_main_servo(gcr_addr_i, 1, tx_dcc_dir_iq_c, SERVOOP_IQ, tx_dcc_min_iq_c, tx_dcc_max_iq_c);

    int status_l = pass_code;

    set_debug_state(0xD02F); // adjust end
    return status_l;
} //tx_dcc_main_adjust


////////////////////////////////////////////////////////////////////////////////////
// DCC servo
// Run Duty cycle servo to move towards or over edge with finer steps downto a step size of 1
////////////////////////////////////////////////////////////////////////////////////
void tx_dcc_main_servo(t_gcr_addr* gcr_addr_i, uint32_t step_size_i, int32_t dir_i, t_servoop op_i, int32_t min_tune_i,
                       int32_t max_tune_i)
{
    set_debug_state(0xD030); // servo start

    set_rx_dcc_debug(0xD051, step_size_i); //step_size_i
    set_rx_dcc_debug(0xD052, dir_i); //temp debug
    set_rx_dcc_debug(0xD053, min_tune_i); //temp debug
    set_rx_dcc_debug(0xD054, max_tune_i); //temp debug
    set_rx_dcc_debug(0xD055, op_i); //temp debug
    set_rx_dcc_debug(0xD056, SERVOOP_I); //temp debug
    set_rx_dcc_debug(0xD057, SERVOOP_Q); //temp debug
    set_rx_dcc_debug(0xD058, SERVOOP_IQ); //temp debug

    uint8_t dccout_l = 0;
    int dcc_next_tune_l = 0;
//    int dcc_next_tune_reg_l = 0;
    int dcc_last_tune_l = 0;
    int adj_l = 0;
    int step_l = 0;
    bool at_max_limit_l = false;
    bool at_min_limit_l = false;
    bool would_overflow_l = false;
    bool would_underflow_l = false;

    int thread_l = get_gcr_addr_thread(gcr_addr_i);
    io_wait_us(thread_l, tx_dcc_main_az_wait_servo_us_c);
    put_ptr_field(gcr_addr_i, tx_dcc_az, 0, read_modify_write);

    switch(op_i)
    {
        case SERVOOP_I:
            set_debug_state(0xD031); // servo init i
            put_ptr_field(gcr_addr_i, tx_dcc_pat, 0b0110, read_modify_write); // set pattern for repmux
            dcc_last_tune_l = Gray6ToInt(get_ptr_field(gcr_addr_i, tx_dcc_i_tune)) ; // must be 6 bits wide
            break;

        case SERVOOP_Q:
            set_debug_state(0xD032); // servo init q
            put_ptr_field(gcr_addr_i, tx_dcc_pat, 0b0011, read_modify_write); // set pattern for repmux
            dcc_last_tune_l = Gray6ToInt(get_ptr_field(gcr_addr_i, tx_dcc_q_tune)) ;  // must be 6 bits wide
            break;

        case SERVOOP_IQ:
            set_debug_state(0xD033); // servo init iq
            put_ptr_field(gcr_addr_i, tx_dcc_pat, 0b0101, read_modify_write); // set pattern for repmux
            dcc_last_tune_l = Gray5IQToInt(get_ptr_field(gcr_addr_i, tx_dcc_iq_tune)) ; // must be 5 bits wide
            break;
    }

    do
    {
        set_debug_state(0xD034); // servo read dcc out
        dccout_l = get_ptr_field(gcr_addr_i, tx_dcc_out_vec) & 0b1 ; // look at lsb until filter algorithm in place
        step_l = mult_int16(step_size_i, dir_i);

        if (dccout_l > 0)
        {
            set_debug_state(0xD035); // servo prelim reduce
            adj_l = -1 * step_l;
        }
        else
        {
            set_debug_state(0xD036); // servo prelim increase
            adj_l = step_l;
        }

        set_rx_dcc_debug(0xD059, adj_l);
        set_rx_dcc_debug(0xD05A, dcc_last_tune_l);
        set_rx_dcc_debug(0xD05B, max_tune_i);
        set_rx_dcc_debug(0xD05C, min_tune_i);
        set_rx_dcc_debug(0xD05D, step_l);
        set_rx_dcc_debug(0xD05E, dccout_l);

        at_max_limit_l    = (dcc_last_tune_l == max_tune_i);
        would_overflow_l  = (adj_l + dcc_last_tune_l > max_tune_i);
        at_min_limit_l    = (dcc_last_tune_l == min_tune_i);
        would_underflow_l = (adj_l + dcc_last_tune_l < min_tune_i);

        if (would_overflow_l)
        {
            if (at_max_limit_l)
            {
                set_debug_state(0xD037); // servo at max limit
                break;
            }
            else
            {
                set_debug_state(0xD038); // servo tune to max
                dcc_next_tune_l = max_tune_i;
            }
        }
        else if (would_underflow_l)
        {
            if (at_min_limit_l)
            {
                set_debug_state(0xD039); // servo at min limit
                break;
            }
            else
            {
                set_debug_state(0xD03A); // servo tune to min
                dcc_next_tune_l = min_tune_i;
            }
        }
        else
        {
            set_debug_state(0xD03B); // servo use prelim adj
            dcc_next_tune_l = dcc_last_tune_l + adj_l;
        }

        set_rx_dcc_debug(0xD05F, dcc_next_tune_l);

        switch(op_i)
        {
            case SERVOOP_I:
                set_debug_state(0xD03C); // servo update i
                put_ptr_field(gcr_addr_i, tx_dcc_i_tune,   IntToGray6(dcc_next_tune_l),    read_modify_write);
                break;

            case SERVOOP_Q:
                set_debug_state(0xD03D); // servo update q
                put_ptr_field(gcr_addr_i, tx_dcc_q_tune,   IntToGray6(dcc_next_tune_l),    read_modify_write);
                break;

            case SERVOOP_IQ:
                set_debug_state(0xD03E); // servo update iq
                put_ptr_field(gcr_addr_i, tx_dcc_iq_tune,   IntToGray5IQ(dcc_next_tune_l),    read_modify_write);
                break;
        }

        set_debug_state(0xD041); // servo prep next trial
        set_rx_dcc_debug(0xD060, step_size_i); //temp debug
        dcc_last_tune_l = dcc_next_tune_l;
        step_size_i = step_size_i >> 1;

    }
    while (step_size_i > 0);

    set_debug_state(0xD042); // servo reenable autozero
    put_ptr_field(gcr_addr_i, tx_dcc_az, 1, read_modify_write);

    set_debug_state(0xD04F); // servo end
} //tx_dcc_main_servo
