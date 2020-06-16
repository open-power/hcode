/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/io_tx_zcal.c $           */
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
// *! (C) Copyright International Business Machines Corp. 2018
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
// *!---------------------------------------------------------------------------
// *! FILENAME    : io_tx_zcal.c
// *! TITLE       :
// *! DESCRIPTION : Functions for performing TX impedence cal
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// cws20011400 |cws     | Added Debug Logs
// bja20011100 |bja     | Save and restore register ID in io_tx_zcal_meas()
// cws20010900 |cws     | Added function to set zcal results to segments
// vbr19031300 |vbr     | Set zcal_group/rx_group and bus_id=0 in gcr_addr as needed.
// vbr19020400 |vbr     | Made min/max configurable and moved configuration into mem_regs so gets a default.
// vbr19020100 |vbr     | HW478623: Made comparator reset time and filter depth configurable.
// vbr19020100 |vbr     | HW478618: Set ppe_tx_zcal_error in addition to FIR when don't find a comparator switch.
// vbr18111400 |vbr     | Updated calls to set_fir.
// vbr18091900 |vbr     | Drive therm codes directly.
// vbr18091000 |vbr     | Updated some comments. Swapped order of cmp_offset/reset.
// vbr18090600 |vbr     | HW462153 - Add circuit power up delay.
// vbr18082900 |vbr     | Initial Rev
//------------------------------------------------------------------------------

#include <stdbool.h>

#include "io_lib.h"
#include "io_tx_zcal.h"
#include "tx_zcal_tdr.h"
#include "io_logger.h"

#include "ppe_img_reg_const_pkg.h"
#include "ppe_fw_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"


//////////////////////////////////
// Settings and Constants
//////////////////////////////////
// 2 times the min number of 1x segments to enable during search (tx_zcal_meas_min) is configurable through mem_regs
// 2 times the max number of 1x segments to enable during search (tx_zcal_meas_max) is configurable through mem_regs

#define tx_zcal_p4x_segs   7 // Number of 4x PSEGs to enable during N calibration stage; 4 times as many 1x PSEGs are enabled.

// Horse race target for comparator filter (tx_zcal_meas_filter_depth) is configurable through mem_regs

#define tx_zcal_power_up_time_us   10  // Comparator power up time
#define tx_zcal_settle_time_us      1  // Settle time between segment changes
// Comparator reset time (tx_zcal_reset_time_us) is configurable through mem_regs with expected minimum of 10us


//////////////////////////////////
// Run a Z Cal Measurement
//////////////////////////////////
void io_tx_zcal_meas(t_gcr_addr* gcr_addr)
{
    set_debug_state(0xC080); // TX Z Cal Measurement Start

    // Set proper bus_id and reg_id for accessing zcal registers.
    int saved_bus_id = get_gcr_addr_bus_id(gcr_addr);
    set_gcr_addr_bus_id(gcr_addr, zcal_bus_id);
    int saved_reg_id = get_gcr_addr_reg_id(gcr_addr);
    set_gcr_addr_reg_id(gcr_addr, zcal_group);

    // Enable the ZCal SM Override so can write the controls
    put_ptr_field(gcr_addr, tx_zcal_swo_en, 0b1, read_modify_write);

    // Power up the circuit
    put_ptr_field(gcr_addr, tx_zcal_swo_powerdown, 0b0, read_modify_write);
    io_wait_us(get_gcr_addr_thread(gcr_addr), tx_zcal_power_up_time_us); //sleep


    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // NSEG Cal
    //
    // Enable 4x pseg resistors to do the nseg calibration (the number of 4xpseg can be controlled by tx_zcal_p4x_segs).
    // During this phase the external resistor acts like nseg and we set the number of 1x pseg to match the
    // 4x pseg connected to the external resistor (the number is controlled by 4*tx_zcal_p4x_segs). In this way, the resistance
    // of 4x pseg is 4X larger than 1x pseg and we then calibrate the nsegs to match one quarter of external resistor.
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Run with cmp_inv=0, cal_segs=0, tcoil=0
    put_ptr_field(gcr_addr, tx_zcal_swo_cmp_inv,  0b0, read_modify_write);
    put_ptr_field(gcr_addr, tx_zcal_swo_cal_segs, 0b0, read_modify_write);
    put_ptr_field(gcr_addr, tx_zcal_swo_tcoil,    0b0, read_modify_write);

    // Set pseg_1x and pseg_4x
    set_zcal_4x_p(gcr_addr, tx_zcal_p4x_segs);
    set_zcal_1x_p(gcr_addr, 8 * tx_zcal_p4x_segs); //need 4 times as many 1x segments, so segments_x2=8*p4x_segs

    // Reset and offset null the comparator
    set_debug_state(0xC082); // TX Z Cal Reset (NSEG 1)
    reset_and_null_zcal_comparator(gcr_addr);

    // Seach for comparator switch starting low
    set_debug_state(0xC084); // TX Z Cal NSeg Search Up
    unsigned int nseg_cal_low_val  = zcal_segment_search(gcr_addr, true, true); //nseg=true, inc=true

    // Reset and offset null the comparator with cmp_inv=1
    set_debug_state(0xC086); // TX Z Cal Reset (NSEG 2)
    put_ptr_field(gcr_addr, tx_zcal_swo_cmp_inv,  0b1, read_modify_write);
    reset_and_null_zcal_comparator(gcr_addr);

    // Seach for comparator switch starting high
    set_debug_state(0xC088); // TX Z Cal NSeg Search Down
    unsigned int nseg_cal_high_val = zcal_segment_search(gcr_addr, true, false); //nseg=true, inc=false

    // Final nseg value is 2x the sum of the two measurements (the average as a fixed point number with 3 fractional bits which is also 8*num_segments)
    unsigned int nseg_cal_segs_x4 = nseg_cal_high_val + nseg_cal_low_val;
    unsigned int nseg_cal_segs_x8 = 2 * nseg_cal_segs_x4;
    img_field_put(ppe_tx_zcal_n, nseg_cal_segs_x8);

    // Load the final nseg value for pseg cal
    unsigned int nseg_cal_segs_x2 = nseg_cal_segs_x4 / 2;
    set_zcal_1x_n(gcr_addr, nseg_cal_segs_x2);


    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // PSEG Cal (Stage 1 - TCOIL enabled)
    // During this step one side of the comparator is connected to vdd/2 rather than the external resistor.
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Run with cmp_inv=0, cal_segs=1, tcoil=1
    put_ptr_field(gcr_addr, tx_zcal_swo_cmp_inv,  0b0, read_modify_write);
    put_ptr_field(gcr_addr, tx_zcal_swo_cal_segs, 0b1, read_modify_write);
    put_ptr_field(gcr_addr, tx_zcal_swo_tcoil,    0b1, read_modify_write);

    // Reset and offset null the comparator
    set_debug_state(0xC092); // TX Z Cal Reset (PSEG1 1)
    reset_and_null_zcal_comparator(gcr_addr);

    // Seach for comparator switch starting low
    set_debug_state(0xC094); // TX Z Cal PSeg1 Search Up
    unsigned int pseg1_cal_low_val  = zcal_segment_search(gcr_addr, false, true); //nseg=false, inc=true

    // Reset and offset null the comparator with cmp_inv=1
    set_debug_state(0xC096); // TX Z Cal Reset (PSEG1 2)
    put_ptr_field(gcr_addr, tx_zcal_swo_cmp_inv,  0b1, read_modify_write);
    reset_and_null_zcal_comparator(gcr_addr);

    // Seach for comparator switch starting high
    set_debug_state(0xC098); // TX Z Cal PSeg1 Search Down
    unsigned int pseg1_cal_high_val = zcal_segment_search(gcr_addr, false, false); //nseg=false, inc=false


    ////////////////////////////////////////
    // PSEG Cal (Stage 2 - TCOIL disabled)
    ////////////////////////////////////////

    // Run with cmp_inv=0, cal_segs=1 (already set), tcoil=0
    put_ptr_field(gcr_addr, tx_zcal_swo_cmp_inv,  0b0, read_modify_write);
    put_ptr_field(gcr_addr, tx_zcal_swo_tcoil,    0b0, read_modify_write);

    // Reset and offset null the comparator
    set_debug_state(0xC0A2); // TX Z Cal Reset (PSEG2 1)
    reset_and_null_zcal_comparator(gcr_addr);

    // Seach for comparator switch starting low
    set_debug_state(0xC0A4); // TX Z Cal PSeg2 Search Up
    unsigned int pseg2_cal_low_val  = zcal_segment_search(gcr_addr, false, true); //nseg=false, inc=true

    // Reset and offset null the comparator with cmp_inv=1
    set_debug_state(0xC0A6); // TX Z Cal Reset (PSEG2 2)
    put_ptr_field(gcr_addr, tx_zcal_swo_cmp_inv,  0b1, read_modify_write);
    reset_and_null_zcal_comparator(gcr_addr);

    // Seach for comparator switch starting high
    set_debug_state(0xC0A8); // TX Z Cal PSeg2 Search Down
    unsigned int pseg2_cal_high_val = zcal_segment_search(gcr_addr, false, false); //nseg=false, inc=false

    // Final pseg value is the sum of all four measurements (the average as a fixed point number with 3 fractional which is also 8*num_segments)
    unsigned int pseg_cal_segs_x8  = pseg1_cal_high_val + pseg1_cal_low_val + pseg2_cal_high_val + pseg2_cal_low_val;
    img_field_put(ppe_tx_zcal_p, pseg_cal_segs_x8);


    /////////////////////////////
    // CLEANUP
    /////////////////////////////

    // Power down the circuit and disable the override
    put_ptr_field(gcr_addr, tx_zcal_swo_powerdown, 0b1, read_modify_write);
    put_ptr_field(gcr_addr, tx_zcal_swo_en, 0b0, read_modify_write);

    // Set gcr_addr back to the previous bus_id and reg_id (required return state of all function)
    set_gcr_addr_bus_id(gcr_addr, saved_bus_id);
    set_gcr_addr_reg_id(gcr_addr, saved_reg_id);

    set_debug_state(0xC0FF); // TX Z Cal Measurement Done
} //io_tx_zcal_meas


//////////////////////////////////////////////////////
// Rune Reset and Null Offset on the Comparator
// This can be long, so sleep during waits.
//////////////////////////////////////////////////////
void reset_and_null_zcal_comparator(t_gcr_addr* gcr_addr)
{
    int thread = get_gcr_addr_thread(gcr_addr);

    // Use this method to load a power of 2 time to avoid a multiply
    uint32_t tx_zcal_reset_time_us = ((uint32_t)PK_MICROSECONDS(1)) << mem_pg_field_get(ppe_tx_zcal_reset_time_us);

    // Reset the comparator and activate offset null inputs
    put_ptr_field(gcr_addr, tx_zcal_swo_cmp_offset, 0b1, read_modify_write);
    put_ptr_field(gcr_addr, tx_zcal_swo_cmp_reset,  0b1, read_modify_write);
    io_wait(thread, tx_zcal_reset_time_us); //sleep

    // Take comparator out of reset, but continue to leave offset null input
    put_ptr_field(gcr_addr, tx_zcal_swo_cmp_reset,  0b0, read_modify_write);
    io_wait(thread, tx_zcal_reset_time_us); //sleep

    // Switch from offset null inputs to normal inputs
    put_ptr_field(gcr_addr, tx_zcal_swo_cmp_offset, 0b0, read_modify_write);
    io_wait(thread, tx_zcal_reset_time_us); //sleep
} //reset_and_null_zcal_comparator


//////////////////////////////////////////////////////////////////////////////////
// Filtered comparator read:
// Check the comparator multiple times and return the filtered result.
//////////////////////////////////////////////////////////////////////////////////
int zcal_comparator_filter(t_gcr_addr* gcr_addr)
{
    int tx_zcal_meas_filter_depth = mem_pg_field_get(ppe_tx_zcal_meas_filter_depth);
    int zero_count = 0;
    int ones_count = 0;

    // Loop until one of the counters reaches the finish line
    while ( true )
    {
        int cmp_val = get_ptr_field(gcr_addr, tx_zcal_cmp_out);

        if (cmp_val)
        {
            ones_count++;

            if (ones_count == tx_zcal_meas_filter_depth)
            {
                return 1;
            }
        }
        else
        {
            zero_count++;

            if (zero_count == tx_zcal_meas_filter_depth)
            {
                return 0;
            }
        }
    }
} //zcal_comparator_filter


///////////////////////////////////////////////////////////////////////////////////////
// Search for the correct segment setting
// Returns a fixed point number with 1 fractional bit (2x the number of segments)
///////////////////////////////////////////////////////////////////////////////////////
unsigned int zcal_segment_search(t_gcr_addr* gcr_addr, bool nseg, bool increment)
{
    int thread = get_gcr_addr_thread(gcr_addr);
    int tx_zcal_meas_min = mem_pg_field_get(ppe_tx_zcal_meas_min);
    int tx_zcal_meas_max = mem_pg_field_get(ppe_tx_zcal_meas_max);

    // Start low if incrementing, start high if decrementing
    unsigned int num_seg_x2 = increment ? tx_zcal_meas_min : tx_zcal_meas_max;
    unsigned int limit      = increment ? tx_zcal_meas_max : tx_zcal_meas_min;

    // Target (what we are looking to flip to) depends on nseg/pseg and inc/dec
    // --------------------
    // |      | inc | dec |
    // |------|-----|-----|
    // | pseg |  1  |  0  |
    // |------|-----|-----|
    // | nseg |  0  |  1  |
    // --------------------
    int target = ((nseg && !increment) || (!nseg && increment)) ? 1 : 0;

    // Inc/Dec until the comparator flips
    bool run_loop = true;

    while (run_loop)
    {
        // Update the number of segments and sleep for the settling time
        if (nseg)
        {
            set_zcal_1x_n(gcr_addr, num_seg_x2);
        }
        else     //pseg
        {
            set_zcal_1x_p(gcr_addr, num_seg_x2);
        }

        io_wait_us(thread, tx_zcal_settle_time_us)

        // Check the filtered comparator result
        int comparator_result = zcal_comparator_filter(gcr_addr);

        if (comparator_result == target)
        {
            // Comparator flipped values
            run_loop = false;
        }
        else if (num_seg_x2 == limit)
        {
            // Reaching the limit is an error condition, set error and FIR.
            img_bit_set(ppe_tx_zcal_error);
            set_fir(fir_code_warning);
            ADD_LOG(DEBUG_TX_ZCAL_LIMIT, num_seg_x2);
            run_loop = false;
        }
        else
        {
            // Update the value
            num_seg_x2 = increment ? (num_seg_x2 + 1) : (num_seg_x2 - 1);
        }
    } //run_loop

    // Return the result
    return num_seg_x2;
} //zcal_segment_search


////////////////////////////////////////////////////////////////////////
// Functions for setting therm codes from fixed point integer values
////////////////////////////////////////////////////////////////////////

// imp_cntl_1r_4xp is a 10b therm code so this must be called with segments <= 10
inline void set_zcal_4x_p(t_gcr_addr* gcr_addr, unsigned int segments)
{
    unsigned int therm_code = (1 << 10) - 1;
    unsigned int mask = (1 << (10 - segments)) - 1;
    therm_code = therm_code ^ mask;

    put_ptr_field(gcr_addr, tx_zcal_swo_imp_cntl_1r_4xp, therm_code, read_modify_write);
} //set_zcal_4x_p


// imp_cntl_1r_1xp is a 40b therm code so this must be called with segments <= 40 (and thus segments_x2 <= 80)
void set_zcal_1x_p(t_gcr_addr* gcr_addr, unsigned int segments_x2)
{
    // 2r segment is half the weight of a 1r segment so it is the half bit (remainder) when we divide segments_x2 by 2.
    // Get the same compiler output from (segments_x2 % 2) and (segments_x2 & 1).
    unsigned int segment_2r = segments_x2 % 2;
    put_ptr_field(gcr_addr, tx_zcal_swo_imp_cntl_2r_1xp, segment_2r, read_modify_write);

    unsigned int therm_code_0_15, therm_code_16_31, therm_code_32_39;
    unsigned int segments_1r = segments_x2 / 2;

    if (segments_1r >= 32)
    {
        therm_code_0_15  = (1 << 16) - 1;
        therm_code_16_31 = (1 << 16) - 1;
        therm_code_32_39 = (1 << 8) - 1;
        unsigned int mask = (1 << (40 - segments_1r)) - 1;
        therm_code_32_39 = therm_code_32_39 ^ mask;
    }
    else if (segments_1r >= 16)      // and < 32
    {
        therm_code_0_15  = (1 << 16) - 1;
        therm_code_16_31 = (1 << 16) - 1;
        therm_code_32_39 = 0;
        unsigned int mask = (1 << (32 - segments_1r)) - 1;
        therm_code_16_31 = therm_code_16_31 ^ mask;
    }
    else     // < 16
    {
        therm_code_0_15  = (1 << 16) - 1;
        therm_code_16_31 = 0;
        therm_code_32_39 = 0;
        unsigned int mask = (1 << (16 - segments_1r)) - 1;
        therm_code_0_15 = therm_code_0_15 ^ mask;
    }

    put_ptr_field(gcr_addr, tx_zcal_swo_imp_cntl_1r_1xp_0_15,  therm_code_0_15,  fast_write); //full register
    put_ptr_field(gcr_addr, tx_zcal_swo_imp_cntl_1r_1xp_16_31, therm_code_16_31, fast_write); //full register
    put_ptr_field(gcr_addr, tx_zcal_swo_imp_cntl_1r_1xp_32_39, therm_code_32_39, read_modify_write);
} //set_zcal_4x_p


// imp_cntl_1r_1xn is a 40b therm code so this must be called with segments <= 40 (and thus segments_x2 <= 80)
void set_zcal_1x_n(t_gcr_addr* gcr_addr, unsigned int segments_x2)
{
    // 2r segment is half the weight of a 1r segment so it is the half bit (remainder) when we divide segments_x2 by 2.
    // Get the same compiler output from (segments_x2 % 2) and (segments_x2 & 1).
    unsigned int segment_2r = segments_x2 % 2;
    put_ptr_field(gcr_addr, tx_zcal_swo_imp_cntl_2r_1xn, segment_2r, read_modify_write);

    unsigned int therm_code_0_15, therm_code_16_31, therm_code_32_39;
    unsigned int segments_1r = segments_x2 / 2;

    if (segments_1r >= 32)
    {
        therm_code_0_15  = (1 << 16) - 1;
        therm_code_16_31 = (1 << 16) - 1;
        therm_code_32_39 = (1 << 8) - 1;
        unsigned int mask = (1 << (40 - segments_1r)) - 1;
        therm_code_32_39 = therm_code_32_39 ^ mask;
    }
    else if (segments_1r >= 16)      // and < 32
    {
        therm_code_0_15  = (1 << 16) - 1;
        therm_code_16_31 = (1 << 16) - 1;
        therm_code_32_39 = 0;
        unsigned int mask = (1 << (32 - segments_1r)) - 1;
        therm_code_16_31 = therm_code_16_31 ^ mask;
    }
    else     // < 16
    {
        therm_code_0_15  = (1 << 16) - 1;
        therm_code_16_31 = 0;
        therm_code_32_39 = 0;
        unsigned int mask = (1 << (16 - segments_1r)) - 1;
        therm_code_0_15 = therm_code_0_15 ^ mask;
    }

    put_ptr_field(gcr_addr, tx_zcal_swo_imp_cntl_1r_1xn_0_15,  therm_code_0_15,  fast_write); //full register
    put_ptr_field(gcr_addr, tx_zcal_swo_imp_cntl_1r_1xn_16_31, therm_code_16_31, fast_write); //full register
    put_ptr_field(gcr_addr, tx_zcal_swo_imp_cntl_1r_1xn_32_39, therm_code_32_39, read_modify_write);
} //set_zcal_4x_n


/**
 * @brief Sets Tx Segments for a Given Lane
 * @param[inout] io_gcr_addr   Target Information
 * @param[in   ] i_leg         Target Leg
 * @retval void
 */
void tx_zcal_set_segments(t_gcr_addr* io_gcr_addr, const t_legtype i_leg)
{
    const int32_t MAX_2R_MAIN_SEGS = (tx_pseg_main_16_24_hs_en_width + tx_pseg_main_0_15_hs_en_width) * 2 - 1;
    const int32_t MAX_2R_PRE1_SEGS = (tx_pseg_pre1_hs_en_width                                      ) * 2 - 1;
    const int32_t MAX_2R_PRE2_SEGS = (tx_pseg_pre2_hs_en_width                                      ) * 2 - 1;

    // x8 segment values >> 2 = 2R Values
    int32_t l_zval = (i_leg == TX_LEG_P ? img_field_get(ppe_tx_zcal_p) : img_field_get(ppe_tx_zcal_n)) >> 2;


    uint32_t l_main_2r_segs = 0;
    uint32_t l_pre1_2r_segs = 0;
    uint32_t l_pre2_2r_segs = 0;

    if (l_zval < MAX_2R_PRE1_SEGS)
    {
        l_pre1_2r_segs = l_zval;
    }
    else
    {
        l_zval -= MAX_2R_PRE1_SEGS;
        l_pre1_2r_segs = MAX_2R_PRE1_SEGS;

        if (l_zval < MAX_2R_PRE2_SEGS)
        {
            l_pre2_2r_segs = l_zval;
        }
        else
        {
            l_zval -= MAX_2R_PRE2_SEGS;
            l_pre2_2r_segs = MAX_2R_PRE2_SEGS;

            if (l_zval < MAX_2R_MAIN_SEGS)
            {
                l_main_2r_segs = l_zval;
            }
            else
            {
                l_zval -= MAX_2R_MAIN_SEGS;
                l_main_2r_segs = MAX_2R_MAIN_SEGS;
            }
        }
    }

    tx_zcal_tdr_write_en(io_gcr_addr, l_main_2r_segs, (i_leg == TX_LEG_P ? SEGTYPE_MAIN_PSEG : SEGTYPE_MAIN_NSEG));
    tx_zcal_tdr_write_en(io_gcr_addr, l_pre1_2r_segs, (i_leg == TX_LEG_P ? SEGTYPE_PRE1_PSEG : SEGTYPE_PRE1_NSEG));
    tx_zcal_tdr_write_en(io_gcr_addr, l_pre2_2r_segs, (i_leg == TX_LEG_P ? SEGTYPE_PRE2_PSEG : SEGTYPE_PRE2_NSEG));
}


/**
 * @brief Clears all the selects for given lane
 * @param[inout] io_gcr_addr   Target Information
 * @retval void
 */
void tx_zcal_clr_selects(t_gcr_addr* io_gcr_addr)
{
    // Clearing both the PRE1/2 Selects and enables are okay, since we will immmediately write the enables in the next step
    put_ptr_field(io_gcr_addr, tx_pseg_pre1_hs_sel, 0, fast_write); // Fast Write will also Clear the PRE1 Enables
    put_ptr_field(io_gcr_addr, tx_pseg_pre2_hs_sel, 0, fast_write); // Fast Write will also Clear the PRE2 Enables
    put_ptr_field(io_gcr_addr, tx_nseg_pre1_hs_sel, 0, fast_write); // Fast Write will also Clear the PRE1 Enables
    put_ptr_field(io_gcr_addr, tx_nseg_pre2_hs_sel, 0, fast_write); // Fast Write will also Clear the PRE2 Enables
    return;
}
