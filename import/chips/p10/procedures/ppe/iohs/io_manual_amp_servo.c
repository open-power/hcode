/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/io_manual_amp_servo.c $  */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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
// *! FILENAME    : io_manual_amp_servo.c
// *! TITLE       :
// *! DESCRIPTION :
// *!
// *! OWNER NAME  :
// *! BACKUP NAME :
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// vbr20101200 |vbr     | HW549006/HW549610 - Updated manual servo op timeout behavior. Added abort check.
// bja20091400 |bja     | HW544454- Sleep after each _run_amp_op() call
// mbs20080501 |mbs     | HW539048- Updated to make FILTER_DEPTH modes (1 is too short)
// mbs20080500 |mbs     | HW539048- Updated to make FILTER_DEPTH programmable (rx_manual_servo_filter_depth)
// cws20072200 |cws     |- Initial
// -----------------------------------------------------------------------------

#include "io_lib.h"
#include "pk.h"

#include "io_manual_amp_servo.h"
#include "io_logger.h"
#include "eo_common.h"
#include "servo_ops.h"

#include "ppe_img_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"


//------------------------------------------------------------------------------
// Constant Definitions
//------------------------------------------------------------------------------
#define DAC_DATA_BASE_ADDR rx_ad_latch_dac_n000_addr
#define DAC_EDGE_BASE_ADDR rx_ae_latch_dac_n_addr
#define DAC_WIDTH     rx_ad_latch_dac_n000_width
#define DAC_STARTBIT  rx_ad_latch_dac_n000_startbit
#define DAC_ENDBIT    rx_ad_latch_dac_n000_endbit

#define FORCE_SPEC_MUX 0x40

const static uint16_t SPEC_MUX_NORTH[8] =
{
    FORCE_SPEC_MUX | 0b0111, // 0x07,
    FORCE_SPEC_MUX | 0b0011, // 0x03,
    FORCE_SPEC_MUX | 0b0101, // 0x05,
    FORCE_SPEC_MUX | 0b0001, // 0x01,
    FORCE_SPEC_MUX | 0b0110, // 0x06,
    FORCE_SPEC_MUX | 0b0010, // 0x02,
    FORCE_SPEC_MUX | 0b0100, // 0x04,
    FORCE_SPEC_MUX | 0b0000, // 0x00
};
const static uint16_t SPEC_MUX_EAST[8] =
{
    FORCE_SPEC_MUX | 0b1011, // 0x07,
    FORCE_SPEC_MUX | 0b1001, // 0x03,
    FORCE_SPEC_MUX | 0b1010, // 0x05,
    FORCE_SPEC_MUX | 0b1000, // 0x01,
    FORCE_SPEC_MUX | 0b0011, // 0x06,
    FORCE_SPEC_MUX | 0b0001, // 0x02,
    FORCE_SPEC_MUX | 0b0010, // 0x04,
    FORCE_SPEC_MUX | 0b0000, // 0x00
};
const static uint16_t SPEC_MUX_SOUTH[8] =
{
    FORCE_SPEC_MUX | 0b1101, // 0x07,
    FORCE_SPEC_MUX | 0b1100, // 0x03,
    FORCE_SPEC_MUX | 0b0101, // 0x05,
    FORCE_SPEC_MUX | 0b0100, // 0x01,
    FORCE_SPEC_MUX | 0b1001, // 0x06,
    FORCE_SPEC_MUX | 0b1000, // 0x02,
    FORCE_SPEC_MUX | 0b0001, // 0x04,
    FORCE_SPEC_MUX | 0b0000, // 0x00
};
const static uint16_t SPEC_MUX_WEST[8] =
{
    FORCE_SPEC_MUX | 0b1110, // 0x07,
    FORCE_SPEC_MUX | 0b0110, // 0x03,
    FORCE_SPEC_MUX | 0b1010, // 0x05,
    FORCE_SPEC_MUX | 0b0010, // 0x01,
    FORCE_SPEC_MUX | 0b1100, // 0x06,
    FORCE_SPEC_MUX | 0b0100, // 0x02,
    FORCE_SPEC_MUX | 0b1000, // 0x04,
    FORCE_SPEC_MUX | 0b0000, // 0x00
};

uint32_t _run_amp_op(t_gcr_addr* io_gcr_addr,
                     const bool i_set_fir_on_error,
                     const bool i_is_loff,
                     const uint16_t i_servo_op,
                     int32_t* o_result);

int read_datapipe(t_gcr_addr* gcr_addr, bool i_is_loff, uint8_t mask, uint8_t pattern, uint8_t quad, uint32_t* result,
                  int target_bits);
int data_pipe_setup(t_gcr_addr* gcr_addr);


uint32_t manual_amp_servo_op(t_gcr_addr* io_gcr_addr,
                             unsigned int i_num_ops,
                             uint16_t* i_servo_ops,
                             int32_t* o_results,
                             bool results_enabled,
                             bool i_set_fir_on_error,
                             bool i_is_loff)
{
    uint32_t l_idx = 0;
    uint32_t l_rc  = pass_code;

    for (l_idx = 0; l_idx < i_num_ops; l_idx++)
    {
        l_rc |= check_rx_abort(io_gcr_addr);

        if (l_rc)
        {
            // Exit servo loop on either an abort or servo error/timeout
            break;
        }

        l_rc |= _run_amp_op(io_gcr_addr, i_set_fir_on_error, i_is_loff, i_servo_ops[l_idx], &o_results[l_idx]);
        io_sleep(get_gcr_addr_thread(io_gcr_addr));
    }

    return l_rc;
}


uint32_t _run_amp_op(t_gcr_addr* io_gcr_addr,
                     const bool i_set_fir_on_error,
                     const bool i_is_loff,
                     const uint16_t i_servo_op,
                     int32_t* o_result)
{
    int32_t  FILTER_DEPTH_SEL = mem_pg_field_get(rx_manual_servo_filter_depth);
    int32_t  FILTER_DEPTH;

    switch(FILTER_DEPTH_SEL)
    {
        case 0x0:
            FILTER_DEPTH = 2;
            break;

        case 0x1:
            FILTER_DEPTH = 4;
            break;

        case 0x2:
            FILTER_DEPTH = 8;
            break;

        default :
            FILTER_DEPTH = 16;
    }


    const int32_t  DAC_MIN              = -128;
    const int32_t  DAC_MAX              = 127;
    const uint32_t MAX_LOOPS            = 255;
    uint32_t l_direction_change_max = 1;
    uint32_t l_step_size = 10;
    uint32_t l_filter_mode = 3;
    uint32_t l_rc = 0;
    uint32_t l_pipe_result = 0;
    uint32_t l_direction[4] = {0, 0, 0, 0};
    int32_t l_dac_offset = 0;
    int32_t l_dac_val = 0;
    uint32_t l_loop   = 0;
    uint32_t l_direction_change = 0;
    uint32_t l_original = 0;

    // Decode the Servo Op
    // TODO if we have a latch offset, the mask should be all low, and pattern should only have a 1 on the H0
    //uint32_t l_mask    = (i_servo_op >> 12) & 0x0F;
    uint32_t l_mask    = ((i_servo_op >> 11) & 0x1C) | ((i_servo_op >> 12) & 0x01);
    uint32_t l_pattern = (i_servo_op >>  7) & 0x1F;
    uint32_t l_bank    = (i_servo_op >>  6) & 0x01;
    uint32_t l_edge    = (i_servo_op >>  5) & 0x01;
    uint32_t l_quad    = (i_servo_op >>  3) & 0x03;
    uint32_t l_latch   = (i_servo_op >>  0) & 0x07;

    //ADD_LOG(DEBUG_MAN_SERVO_OP, io_gcr_addr, i_servo_op);

    uint32_t l_spec_mux = 0;

    if (l_quad == c_phase_n)
    {
        l_spec_mux = SPEC_MUX_NORTH[l_latch] | ((l_quad << 4) & 0x30);
    }
    else if (l_quad == c_phase_e)
    {
        l_spec_mux = SPEC_MUX_EAST[l_latch] | ((l_quad << 4) & 0x30);
    }
    else if (l_quad == c_phase_s)
    {
        l_spec_mux = SPEC_MUX_SOUTH[l_latch] | ((l_quad << 4) & 0x30);
    }
    else if (l_quad == c_phase_w)
    {
        l_spec_mux = SPEC_MUX_WEST[l_latch] | ((l_quad << 4) & 0x30);
    }

    uint32_t l_pipe_sel_original = get_ptr_field(io_gcr_addr, rx_pipe_sel);

    // TODO check if this is a latch offset meas
    bool check_h0 = get_ptr_field(io_gcr_addr, rx_amp_servo_mask_h0);

    if (check_h0)
    {
        l_mask |= 0x02;
    }

    if (i_is_loff)
    {
        l_mask = 0x00;
        l_pattern = 0x02;
    }

    // put_fast on the spec mux works because we pad the other bank's spec mux with zeros
    if (l_bank)
    {
        put_ptr_field(io_gcr_addr, rx_b_spec_mux_sel, l_spec_mux, fast_write);
    }
    else
    {
        put_ptr_field(io_gcr_addr, rx_a_spec_mux_sel, l_spec_mux, fast_write);
    }

    // Calculate DAC Address
    int32_t l_dac_addr = DAC_DATA_BASE_ADDR + (l_bank << 5) + (l_quad << 3) + l_latch;

    if (l_edge)
    {
        l_dac_addr = DAC_EDGE_BASE_ADDR + (l_bank << 2) + l_quad;
        put_ptr_field(io_gcr_addr, rx_pipe_sel, 0x4, read_modify_write);
    }
    else
    {
        put_ptr_field(io_gcr_addr, rx_pipe_sel, 0x0, read_modify_write);
    }

    if (!i_is_loff)
    {
        l_original = get_ptr(io_gcr_addr, l_dac_addr, DAC_STARTBIT, DAC_ENDBIT);
    }

    l_dac_offset = LatchDacToInt(l_original);

    // An attempt to speed up DFE Tests.  If we are pattern matching this takes long
    if (l_mask == 0x1F)
    {
        if (l_pattern & 0x02)
        {
            l_dac_offset = 50;
        }
        else
        {
            l_dac_offset = -50;
        }
    }

    //
    data_pipe_setup(io_gcr_addr);

    for (l_loop = 0; l_loop < MAX_LOOPS; l_loop++)
    {

        // 1. Set the new dac value
        l_dac_val = IntToLatchDac(l_dac_offset);
        put_ptr_fast(io_gcr_addr, l_dac_addr, DAC_ENDBIT, l_dac_val);

        // 2. Read the datapipe
        // - result is uint32_t between 0(0%) - 100(100%)
        l_rc = read_datapipe(io_gcr_addr, i_is_loff, l_mask, l_pattern, l_quad, &l_pipe_result, FILTER_DEPTH);

        if (l_rc)
        {
            set_fir(fir_code_warning);
            ADD_LOG(DEBUG_MAN_SERVO_DATAPIPE_FAIL, io_gcr_addr, i_servo_op);
            break;
        }

        // 3. Evalutate
        l_direction[1] = l_direction[0];
        l_direction[0] = l_pipe_result;
        //l_direction[0] = (l_pipe_result >= 50) ? 1 : 0;

        if (l_direction[0] != l_direction[1])
        {
            l_direction_change++;
        }

        if (l_direction_change > l_direction_change_max)
        {
            if (l_filter_mode == 3)
            {
                l_direction_change_max = 1;
                l_direction_change = 0;
                l_step_size = 5;
                l_filter_mode = 2;
            }
            else if (l_filter_mode == 2)
            {
                l_direction_change_max = 1;
                l_direction_change = 0;
                l_step_size = 1;
                l_filter_mode = 1;
            }
            else
            {
                break;
            }
        }

        if (l_direction[0])
        {
            l_dac_offset += l_step_size;
        }
        else
        {
            l_dac_offset -= l_step_size;
        }

        if (l_dac_offset == DAC_MIN || l_dac_offset == DAC_MAX)
        {
            break;
        }

    }

    if (l_loop >= MAX_LOOPS)
    {
        set_fir(fir_code_warning);
        l_rc |= error_code;
    }

    // Always select the lower dac value we are toggling between for consistency.
    if (l_dac_offset > 0 && l_direction[0] == 1)
    {
        l_dac_offset -= 1;
    }

    if (l_dac_offset < 0 && l_direction[0] == 0)
    {
        l_dac_offset += 1;
    }

    if (l_dac_offset < DAC_MIN)
    {
        l_dac_offset = DAC_MIN;
    }
    else if (l_dac_offset > DAC_MAX)
    {
        l_dac_offset = DAC_MAX;
    }

    l_dac_val = IntToLatchDac(l_dac_offset);
    put_ptr_fast(io_gcr_addr, l_dac_addr, DAC_ENDBIT, l_dac_val);

    // This will set both bank A & B spec mux to zero
    put_ptr_field(io_gcr_addr, rx_a_spec_mux_sel, 0, fast_write);
    put_ptr_field(io_gcr_addr, rx_pipe_sel, l_pipe_sel_original, read_modify_write);

    if (i_is_loff == 0)
    {
        put_ptr_fast(io_gcr_addr, l_dac_addr, DAC_ENDBIT, l_original);
        *o_result = l_dac_offset;
    }

    // Trap ppe servo status on an error if no previous error
    if (l_rc)
    {
        // For simplicity, checking that the full reg is 0 and not just the valid bit.
        if (mem_pg_field_get(ppe_servo_status1) == 0)
        {
            mem_pg_field_put(ppe_servo_status0, i_servo_op);
            mem_pg_field_put(ppe_servo_status1, 0xFFFF);
        }
    }

    return l_rc;
}







int data_pipe_setup(t_gcr_addr* gcr_addr)
{
    // Vikram says these're already done
    //  int lane = get_gcr_addr_lane(gcr_addr);

    //  clear_all_cal_lane_sel(gcr_addr);

    //  io_lane_power_on(gcr_addr, false);

    //  put_ptr_field(gcr_addr, rx_set_cal_lane_sel, 0b1, fast_write); // strobe bit
    //  put_ptr_field(gcr_addr, rx_cal_lane_pg_phy_gcrmsg, lane, read_modify_write);
    /*
    int bank_sel_a  = get_ptr_field(gcr_addr, rx_bank_sel_a);
    t_bank cal_bank = (bank_sel_a == 0) ? bank_a : bank_b;

    if (cal_bank == bank_a)
      {
        put_ptr(gcr_addr, rx_pr_slave_mode_a_addr, rx_pr_slave_mode_a_startbit, rx_pr_slave_mode_a_endbit, 1, read_modify_write);
      }
    else
      {
        put_ptr(gcr_addr, rx_pr_slave_mode_b_addr, rx_pr_slave_mode_b_startbit, rx_pr_slave_mode_b_endbit, 1, read_modify_write);
      }
    */
    // I think we won't need any of this:
    /*
      #Bank A =alt bank, Bank B = main bank to edge track with
      if bank == bank_a:
          self.putScom("rx_bank_sel_a", 0)
          self.putScom("rx_rlm_clk_sel_a", 1)
          self.putScom("rx_dl_clk_sel_a", 0)
      #Bank B =alt bank, Bank A = main bank to edge track with
      else:
          self.putScom("rx_bank_sel_a", 1)
          self.putScom("rx_rlm_clk_sel_a", 0)
          self.putScom("rx_dl_clk_sel_a", 1)
    */


    put_ptr(gcr_addr, rx_data_pipe_clr_on_read_mode_addr, rx_data_pipe_clr_on_read_mode_startbit,
            rx_data_pipe_clr_on_read_mode_endbit, 0, read_modify_write);

    put_ptr(gcr_addr, rx_pipe_format_addr, rx_pipe_format_startbit, rx_pipe_format_endbit, 0, read_modify_write);
    put_ptr(gcr_addr, rx_pipe_data_src_addr, rx_pipe_data_src_startbit, rx_pipe_data_src_endbit, 0, read_modify_write);

    return pass_code;
}

int data_pipe_cleanup(t_gcr_addr* gcr_addr)
{
    /*
    int bank_sel_a  = get_ptr_field(gcr_addr, rx_bank_sel_a);
    t_bank cal_bank = (bank_sel_a == 0) ? bank_a : bank_b;

    if (cal_bank == bank_a)
      {
        put_ptr(gcr_addr, rx_pr_slave_mode_a_addr, rx_pr_slave_mode_a_startbit, rx_pr_slave_mode_a_endbit, 0, read_modify_write);
      }
    else
      {
        put_ptr(gcr_addr, rx_pr_slave_mode_b_addr, rx_pr_slave_mode_b_startbit, rx_pr_slave_mode_b_endbit, 0, read_modify_write);
      }
    */
    return pass_code;
}

int data_pipe_read(t_gcr_addr* gcr_addr, uint32_t* main_data, uint8_t* alt_data)
{
    put_ptr(gcr_addr, rx_data_pipe_capture_addr, rx_data_pipe_capture_startbit, rx_data_pipe_capture_endbit, 1,
            read_modify_write);

    *main_data = ((get_ptr_field(gcr_addr, rx_data_pipe_main_0_15) << 16) & 0xFFFF0000) | (get_ptr_field(gcr_addr,
                 rx_data_pipe_main_16_31) & 0x0000FFFF);
    *alt_data = get_ptr_field(gcr_addr, rx_data_pipe_alt_0_7);

    return pass_code;
}
//
//int read_datapipe(t_gcr_addr *gcr_addr, uint8_t mask, uint8_t pattern, uint8_t quad, uint32_t *result, int target_bits)
//{
//    int retval = pass_code;
//    int num_bits = 0;
//    bool done = false;
//    int start_bit = quad + 1; // +1 for Hneg1
//
//    bool pattern_match;
//    uint32_t data_xor;
//    uint32_t main_data;
//    uint8_t alt_data;
//
//    *result = 0;
//
//    if (start_bit < 4)
//    {
//        start_bit += 4;
//    }
//
//
//    uint32_t l_pipesel = (get_ptr_field(gcr_addr, rx_pipe_sel) & 0x4) | quad;
//    put_ptr_field(gcr_addr, rx_pipe_sel, l_pipesel, read_modify_write);
//
//    while (!done)
//    {
//        retval = data_pipe_read(gcr_addr, &main_data, &alt_data);
//
//        // Check bits within this chunk of data for pattern match
//        int check_bit = start_bit;
//        for (; check_bit <= 31; check_bit += 4)
//        {
//            data_xor = pattern ^ (main_data >> (31 - check_bit));
//
//            pattern_match = true;
//
//            if (mask & 0x10 && data_xor & 0x10)
//            {
//                pattern_match = false;
//            }
//
//            if (mask & 0x08 && data_xor & 0x08)
//            {
//                pattern_match = false;
//            }
//
//            if (mask & 0x04 && data_xor & 0x04)
//            {
//                pattern_match = false;
//            }
//
//            if (mask & 0x02 && data_xor & 0x02)
//            {
//                pattern_match = false;
//            }
//
//            if (mask & 0x01 && data_xor & 0x01)
//            {
//                pattern_match = false;
//            }
//
//            if (pattern_match)
//            {
//                num_bits++;
//
//                if ((alt_data >> (7 - ((check_bit-1) >> 2))) & 1)
//                {
//                    // We got a 1 !
//                    (*result)++;
//                }
//
//                if (num_bits == target_bits)
//                {
//                    done = true;
//                    break;
//                }
//            }
//        }
//    }
//
//    //data_pipe_cleanup(gcr_addr);
//
//    return retval;
//}


int read_datapipe(t_gcr_addr* gcr_addr, bool i_is_loff, uint8_t mask, uint8_t pattern, uint8_t quad, uint32_t* result,
                  int filter_depth)
{
    uint32_t l_rc = 0;
    uint32_t l_raw_main = 0;
    uint8_t l_raw_alt = 0;
    uint32_t loop = 0;

    uint32_t l_main = 0;
    uint8_t l_alt = 0;
    uint32_t inc = 0;
    uint32_t dec = 0;
    uint32_t idx = 0;
    uint32_t raw_inc = 0;
    uint32_t raw_dec = 0;
    uint32_t exp_data = 0;
    uint32_t alt_data = 0;
    uint32_t filter_match = 0;

    uint32_t l_timeout = 4 * 1024 * filter_depth; // Have 1/32 chance to hit 5b Amp pattern so set much larger timeout

    uint32_t l_pipesel = (get_ptr_field(gcr_addr, rx_pipe_sel) & 0x4) | quad;
    put_ptr_field(gcr_addr, rx_pipe_sel, l_pipesel, read_modify_write);


    uint32_t l_vote_bias_inc = get_ptr_field(gcr_addr, rx_amp_servo_vote_bias_inc);
    uint32_t l_vote_bias_dec = get_ptr_field(gcr_addr, rx_amp_servo_vote_bias_dec);

    while (1)
    {
        l_rc = data_pipe_read(gcr_addr, &l_raw_main, &l_raw_alt);

        // North main (shift left 1) & throw alt bit 0
        // East  main (shift left 2) & throw alt bit 0
        // South main (shift left 3) & throw alt bit 0
        // West  main (shift left 0) & throw alt bit 7
        if (quad == c_phase_n)
        {
            l_main = l_raw_main << 1;
            l_alt = l_raw_alt << 1;
        }
        else if (quad == c_phase_e)
        {
            l_main = l_raw_main << 2;
            l_alt = l_raw_alt << 1;
        }
        else if (quad == c_phase_s)
        {
            l_main = l_raw_main << 3;
            l_alt = l_raw_alt << 1;
        }
        else if (quad == c_phase_w)
        {
            l_main = l_raw_main;
            l_alt = l_raw_alt;
        }

        // Now we have 32 - 4 = 28 main data bits
        // 8 - 1 = 7 alt data bits


        raw_inc = 0;
        raw_dec = 0;

        for (idx = 0; idx < 7; ++idx)
        {
            exp_data = (l_main >> (27 - (4 * idx))) & 0x1F;
            alt_data = (l_alt >> (7 - idx)) & 0x1;

            // Use the exp data to check if filter match
            filter_match = (((exp_data ^ pattern) & mask) == 0) ? 1 : 0;


            // No Vote if the filter doesnt match
            // inc if alt data = '1'
            // dec if alt data = '0'
            raw_inc += (filter_match && alt_data == 1) ? 1 : 0;
            raw_dec += (filter_match && alt_data == 0) ? 1 : 0;

        }

        // Bias filtering here :)
        if ((l_vote_bias_inc && (pattern & 0x02)) || (l_vote_bias_dec && (~pattern & 0x2)))
        {
            if (raw_inc)
            {
                ++inc;
            }
            else if (raw_dec)
            {
                ++dec;
            }
        }
        else if ((l_vote_bias_inc && (~pattern & 0x02)) || (l_vote_bias_dec && (pattern & 0x2)))
        {
            if (raw_dec)
            {
                ++dec;
            }
            else if (raw_inc)
            {
                ++inc;
            }
        }
        else
        {
            if (raw_inc > raw_dec)
            {
                ++inc;
            }
            else if (raw_dec > raw_inc)
            {
                ++dec;
            }
        }

        if (inc > filter_depth)
        {
            (*result) = 1;
            break;
        }

        if (dec > filter_depth)
        {
            (*result) = 0;
            break;
        }

        // Timeout if don't get enough votes within l_timeout reads of the data pipe
        if (loop >= l_timeout && inc <= filter_depth && dec <= filter_depth)
        {
            ADD_LOG(DEBUG_MAN_SERVO_DATAPIPE_FAIL, gcr_addr, (((pattern) << 8) & 0xFF00) | (mask & 0x00FF));
            return error_code;
        }

        loop++;
    }

    return l_rc;
}
