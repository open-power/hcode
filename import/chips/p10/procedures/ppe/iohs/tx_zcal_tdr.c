/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/tx_zcal_tdr.c $          */
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
// *! FILENAME    : tx_zcal_tdr.c
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
// gap20092200 |gap     | Update for 32:1 in 16:1 mode
// gap20040100 |gap     | Commented out some superfluous set_debug_state statements
// gap20032600 |gap     | Added wait time for th after changing segments
// gap19041000 |gap     | Created
// -----------------------------------------------------------------------------

#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "eo_common.h"
#include "tx_zcal_tdr.h"

#include "ppe_fw_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"

void tx_zcal_tdr (t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xC100); // tx_zcal_tdr begin
    int thread_l = 0;
    thread_l = get_gcr_addr_thread(gcr_addr_i);

    // setup tdr; offset reg value is a function of what is being called half_width_mode
    uint16_t tdr_offset_l = 0;

    if ( in_tx_half_width_mode() )   // offset_reg=2*offset_ui
    {
        set_debug_state(0xC101); // tx_zcal_tdr half_width
        tdr_offset_l = 2 * 16 * tx_zcal_tdr_sample_position_c;
    }
    else   // offset_reg=offset_ui
    {
        set_debug_state(0xC102); // tx_zcal_tdr normal_16_to_1
        tdr_offset_l = 16 * tx_zcal_tdr_sample_position_c;
    }

    put_ptr_field(gcr_addr_i, tx_tdr_pulse_offset, tdr_offset_l, read_modify_write);
    put_ptr_field(gcr_addr_i, tx_tdr_pulse_width, tx_zcal_tdr_pulse_width_c , read_modify_write);
    put_ptr_field(gcr_addr_i, tx_tdr_enable, 0b1, read_modify_write);

    // enable all segments as main
    uint8_t tx_force_hs_ffe_initial_l = get_ptr_field(gcr_addr_i, tx_force_hs_ffe);
    put_ptr_field(gcr_addr_i, tx_force_hs_ffe, 0b1, read_modify_write);

    uint8_t current_pseg_pre2_l = tx_pseg_pre2_hs_en_width * 2 - 1 ;
    uint8_t current_nseg_pre2_l = tx_nseg_pre2_hs_en_width * 2 - 1 ;
    uint8_t current_pseg_pre1_l = tx_pseg_pre1_hs_en_width * 2 - 1 ;
    uint8_t current_nseg_pre1_l = tx_nseg_pre1_hs_en_width * 2 - 1 ;
    uint8_t current_pseg_main_l = (tx_pseg_main_16_24_hs_en_width + 16) * 2 - 1 ;
    uint8_t current_nseg_main_l = (tx_nseg_main_16_24_hs_en_width + 16) * 2 - 1 ;

    tx_zcal_tdr_write_en(gcr_addr_i, current_pseg_main_l, SEGTYPE_MAIN_PSEG);
    tx_zcal_tdr_write_en(gcr_addr_i, current_nseg_main_l, SEGTYPE_MAIN_NSEG);
    tx_zcal_tdr_write_en(gcr_addr_i, current_pseg_pre1_l, SEGTYPE_PRE1_PSEG);
    tx_zcal_tdr_write_en(gcr_addr_i, current_nseg_pre1_l, SEGTYPE_PRE1_NSEG);
    tx_zcal_tdr_write_en(gcr_addr_i, current_pseg_pre2_l, SEGTYPE_PRE2_PSEG);
    tx_zcal_tdr_write_en(gcr_addr_i, current_nseg_pre2_l, SEGTYPE_PRE2_NSEG);

    // do until !updated_pu_or_pd = 0
    bool updated_pu_or_pd_l = false;
    bool done_l = false;

    do
    {
        set_debug_state(0xC111); // begin update loop
        //   updated_pu_or_pd = 0
        updated_pu_or_pd_l = false;
        //   set upper dac level
        //   set p phase
        //   done = false
        //   do until done
        //     if comparator matches 1 required number of times,
        //       if(tx_zcal_tdr_decrement_bank()), updated_pu_or_pd = 1
        //       else done = 1
        //     else done = 1
        //   set p phase
        //   set initial dac level
        //
        // written to 0 below put_ptr_field(gcr_addr_i, tx_tdr_phase_sel, 0, read_modify_write);
        put_ptr_field(gcr_addr_i, tx_tdr_dac_cntl, tx_zcal_tdr_dac_75percent_vio_c,
                      fast_write); // only other field in reg is tx_ , which we want 0 == P
        io_wait_us(thread_l, tx_zcal_tdr_sw_wait_us_c);
        done_l = false;

        do
        {
            //    set_debug_state(0xC121); // begin update pullup loop
            if (tx_zcal_tdr_capt_match_mult_rds(gcr_addr_i, 1,
                                                tx_zcal_tdr_matches_needed_c))   // pulled too high; need to reduce pullups
            {
                //        set_debug_state(0xC122); // try to decrement pullup
                if (tx_zcal_tdr_decrement_bank(gcr_addr_i, SEGTYPE_MAIN_PSEG, &current_pseg_pre2_l, &current_pseg_pre1_l,
                                               &current_pseg_main_l))
                {
                    set_debug_state(0xC123); // pullup decrement successful
                    updated_pu_or_pd_l = true;
                    io_wait_us(thread_l, tx_zcal_tdr_seg_wait_us_c);
                }
                else
                {
                    set_debug_state(0xC124); // pullup decrement unsuccessful
                    done_l = true;
                }
            }
            else
            {
                set_debug_state(0xC125); // pullup crossed threshold
                done_l = true;
            }
        } // pull up

        while (!done_l);

        //   set n phase
        //   set lower dac level
        //   done = false
        //   do until done
        //     if comparator matches 0 required number of times,
        //       if(tx_zcal_tdr_decrement_bank()), updated_pu_or_pd = 1
        //       else done = 1
        //     else done = 1
        //
        //     writing phase_sel first because it gives track and hold more time to track after the large change in level
        put_ptr_field(gcr_addr_i, tx_tdr_phase_sel, 1,
                      fast_write); // only other field in reg is tx_tdr_dac_cntl, which we write below
        put_ptr_field(gcr_addr_i, tx_tdr_dac_cntl, tx_zcal_tdr_dac_25percent_vio_c, read_modify_write);
        io_wait_us(thread_l, tx_zcal_tdr_sw_wait_us_c);
        done_l = false;

        do
        {
            //    set_debug_state(0xC131); // begin update pulldown loop
            if (tx_zcal_tdr_capt_match_mult_rds(gcr_addr_i, 0,
                                                tx_zcal_tdr_matches_needed_c))   // pulled too low; need to decrease pulldowns
            {
                //        set_debug_state(0xC132); // try to decrement pulldown
                if (tx_zcal_tdr_decrement_bank(gcr_addr_i, SEGTYPE_MAIN_NSEG, &current_nseg_pre2_l, &current_nseg_pre1_l,
                                               &current_nseg_main_l))
                {
                    set_debug_state(0xC133); // pulldown decrement successful
                    updated_pu_or_pd_l = true;
                    io_wait_us(thread_l, tx_zcal_tdr_seg_wait_us_c);
                }
                else
                {
                    set_debug_state(0xC134); // pulldown decrement unsuccessful
                    done_l = true;
                }
            }
            else
            {
                set_debug_state(0xC135); // pulldown crossed threshold
                done_l = true;
            }
        } // pull down

        while (!done_l);
    } // outer update loop

    while (updated_pu_or_pd_l);

    // restore initial state
    //   restore force_hs_ffe
    put_ptr_field(gcr_addr_i, tx_force_hs_ffe, tx_force_hs_ffe_initial_l, read_modify_write);

    //   disable tdr; some of these may not be necessary
    put_ptr_field(gcr_addr_i, tx_tdr_enable, 0b0, read_modify_write);
    put_ptr_field(gcr_addr_i, tx_tdr_pulse_width, 0 , read_modify_write);
    put_ptr_field(gcr_addr_i, tx_tdr_pulse_offset, 0, read_modify_write);

    set_debug_state(0xC1FF); // tx_zcal_tdr end
} // tx_zcal_tdr


// In general, the enables, which are written here, and the selects are in the
// same registers; for this code we always want the selects to be written to 0
// A fast write does this directly
// Also, in general, we are always either setting all segments or decreasing the
// number of segments; we can take advantage of this to save some writes
void tx_zcal_tdr_write_en (t_gcr_addr* gcr_addr_i, uint8_t num_2r_equiv_i, t_segtype segtype_i)
{
//    set_debug_state(0xC140); // tx_zcal_tdr_write_en begin
    uint32_t high_bits_l = 0;
    uint32_t low_bits_l = 0;

    switch(segtype_i)
    {
        case SEGTYPE_MAIN_PSEG:
            set_debug_state(0xC141); // write main_pseg

            if (tx_zcal_tdr_split_main_therm (num_2r_equiv_i, tx_pseg_main_0_15_hs_en_width, tx_pseg_main_16_24_hs_en_width,
                                              &high_bits_l, &low_bits_l))  // write 16_24
            {
                set_debug_state(0xC142); // write main_pseg 16_24
                put_ptr_field(gcr_addr_i, tx_pseg_main_16_24_hs_en, low_bits_l, fast_write);
            }

            put_ptr_field(gcr_addr_i, tx_pseg_main_0_15_hs_en, high_bits_l, fast_write);
            break;

        case SEGTYPE_MAIN_NSEG:
            set_debug_state(0xC143); // write main_nseg

            if (tx_zcal_tdr_split_main_therm (num_2r_equiv_i, tx_nseg_main_0_15_hs_en_width, tx_nseg_main_16_24_hs_en_width,
                                              &high_bits_l, &low_bits_l))  // write 16_24
            {
                set_debug_state(0xC144); // write main_nseg 16_24
                put_ptr_field(gcr_addr_i, tx_nseg_main_16_24_hs_en, low_bits_l, fast_write);
            }

            put_ptr_field(gcr_addr_i, tx_nseg_main_0_15_hs_en, high_bits_l, fast_write);
            break;

        case SEGTYPE_PRE2_PSEG:
            set_debug_state(0xC149); // write pre2 pseg
            put_ptr_field(gcr_addr_i, tx_pseg_pre2_hs_en, tx_zcal_tdr_toThermWithHalf(num_2r_equiv_i, tx_pseg_pre2_hs_en_width),
                          fast_write);
            break;

        case SEGTYPE_PRE2_NSEG:
            set_debug_state(0xC14A); // write pre2 nseg
            put_ptr_field(gcr_addr_i, tx_nseg_pre2_hs_en, tx_zcal_tdr_toThermWithHalf(num_2r_equiv_i, tx_nseg_pre2_hs_en_width),
                          fast_write);
            break;

        case SEGTYPE_PRE1_PSEG:
            set_debug_state(0xC14B); // write pre1 pseg
            put_ptr_field(gcr_addr_i, tx_pseg_pre1_hs_en, tx_zcal_tdr_toThermWithHalf(num_2r_equiv_i, tx_pseg_pre1_hs_en_width),
                          fast_write);
            break;

        case SEGTYPE_PRE1_NSEG:
            set_debug_state(0xC14C); // write pre1 nseg
            put_ptr_field(gcr_addr_i, tx_nseg_pre1_hs_en, tx_zcal_tdr_toThermWithHalf(num_2r_equiv_i, tx_nseg_pre1_hs_en_width),
                          fast_write);
            break;
    } // switch segtype_i

    //set_debug_state(0xC14F); // tx_zcal_tdr_write_en end
} // tx_zcal_tdr_write_en

// P or N is passed in as SEGTYPE_MAIN_PSEG or  SEGTYPE_MAIN_NSEG
// remove main, then pre2, then pre1
bool tx_zcal_tdr_decrement_bank(t_gcr_addr* gcr_addr_i, t_segtype segtype_i, uint8_t* current_pre2_io,
                                uint8_t* current_pre1_io, uint8_t* current_main_io)
{
//    set_debug_state(0xC150); // tx_zcal_tdr_decrement_bank begin
    bool value_updated_l = false ;

    if (*current_main_io > 0)
    {
        set_debug_state(0xC151); // decrement main bank
        *current_main_io -= 1;
        tx_zcal_tdr_write_en(gcr_addr_i, *current_main_io, segtype_i);
        value_updated_l = true ;
    }
    else if (*current_pre2_io > 0)
    {
        set_debug_state(0xC152); // decrement pre2 bank
        *current_pre2_io -= 1 ;
        tx_zcal_tdr_write_en(gcr_addr_i, *current_pre2_io,
                             (segtype_i == SEGTYPE_MAIN_PSEG) ? SEGTYPE_PRE2_PSEG : SEGTYPE_PRE2_NSEG);
        value_updated_l = true ;
    }
    else if (*current_pre1_io > 0)
    {
        set_debug_state(0xC153); // decrement pre1 bank
        *current_pre1_io -= 1 ;
        tx_zcal_tdr_write_en(gcr_addr_i, *current_pre1_io,
                             (segtype_i == SEGTYPE_MAIN_PSEG) ? SEGTYPE_PRE1_PSEG : SEGTYPE_PRE1_NSEG);
        value_updated_l = true ;
    }
    else
    {
        set_debug_state(0xC154); // could not decrement bank
        value_updated_l = false;
    }

//    set_debug_state(0xC155); // tx_zcal_tdr_decrement_bank end
    return value_updated_l;
} // tx_zcal_tdr_decrement_bank

bool tx_zcal_tdr_capt_match_mult_rds(t_gcr_addr* gcr_addr_i, uint8_t match_value_i, uint8_t times_i)
{
    bool value_matched_l = true ;
    uint8_t times_matched_l = 0;

    for (times_matched_l = 0; times_matched_l < times_i; times_matched_l++)
    {
        value_matched_l = (get_ptr_field(gcr_addr_i, tx_tdr_capt_val) == match_value_i);

        if (!value_matched_l)   // doing explicit conditional to allow coverage testing
        {
// sim model generally does not include noise, so, unless we are lucky, we will see consistent
// values on all reads in this loop; thus the debug_state is not very informative even in sim
//           set_debug_state(0xC161); // tx_zcal_tdr_capt_match_mult_rds exit loop early
            break;
        }
    }

    return value_matched_l;
} // tx_zcal_tdr_capt_match_mult_rds

/**
 * helper routine that determines whether to write to both main therm-code seg enable fields
 *   and the values to write
 * Assumes two fields, when concatenated, form a therm code with msb a value of '1',
 * all other bits a value of 2 with msb first cleared/last set.
 * As currently implemented, the first field is *_0_15_* and second is *_16_24_*
 * Returns true if second field is to be written
 *
 * This assumes we are either enabling all segments or decrementing segments
 * with this assumption, we only need to write the lsb's when we are writing
 * all segments or when some of the low order segments are disabled and the
 * value is odd.
 */
bool tx_zcal_tdr_split_main_therm (const uint32_t num_2r_equiv_i, uint8_t high_width_i, uint8_t low_width_i,
                                   uint32_t* high_bits_io, uint32_t* low_bits_io)
{
    uint32_t full_therm_l = 0;
    full_therm_l = tx_zcal_tdr_toThermWithHalf(num_2r_equiv_i, low_width_i + high_width_i);
    *high_bits_io = full_therm_l >> low_width_i;
    *low_bits_io = full_therm_l & ((0x1 << low_width_i) - 1);
    return (num_2r_equiv_i == ((high_width_i + low_width_i) * 2) - 1) || ((num_2r_equiv_i < low_width_i)
            && ((num_2r_equiv_i & 0x1) == 1)) ;
} //tx_zcal_tdr_split_main_therm

/**
 * @brief Converts a decimal value to a thermometer code after dividing by 2
 * @param[in] i_dec Decimal Value
 * @retval    Thermometer Value
 */
uint32_t tx_zcal_tdr_toTherm( const uint32_t i_dec )
{
    return ( ( 0x1 <<  i_dec ) - 1 );
} // tx_zcal_tdr_toTherm

/**
 * @brief Converts a decimal value to a thermometer code with a MSB 1/2 strength bit
 * @param[in] i_dec   Decimal Value
 * @param[in] i_width Width of Register
 * @retval Thermometer Value
 */
uint32_t tx_zcal_tdr_toThermWithHalf( const uint32_t i_dec, const uint8_t i_width )
{
    // If the LSB of the 2r equivalent is on, then we need to set the 2r bit (MSB)
    uint32_t halfOn = ( i_dec & 0x1 ) << ( i_width - 1 );

    // Shift the 2r equivalent to a 1r value and convert to a thermometer code.
    uint32_t x1Equivalent = tx_zcal_tdr_toTherm( i_dec >> 0x1 );

    // combine 1r equivalent thermometer code + the 2r MSB value.
    return halfOn | x1Equivalent ;
} // tx_zcal_tdr_toTherm
