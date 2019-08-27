/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/tx_zcal_tdr.c $          */
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

    // setup tdr; offset in ui is a function of the grid to interface ratio
    // offset some ratio into pulse; pulse is 2 * grid clock * pulse_width wide
    uint16_t tdr_offset_l = 2 * tx_zcal_tdr_pulse_width_c / tx_zcal_tdr_sample_into_pulse_c;

    if ( fw_field_get(fw_serdes_16_to_1_mode) )   // 16:1
    {
        set_debug_state(0xC101); // tx_zcal_tdr 16:1
        tdr_offset_l = 16 * tdr_offset_l;
    }
    else   // 32:1
    {
        set_debug_state(0xC102); // tx_zcal_tdr 32:1
        tdr_offset_l = 32 * tdr_offset_l;
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
        //   set initial dac level
        //   set p phase
        put_ptr_field(gcr_addr_i, tx_tdr_dac_cntl, tx_zcal_tdr_dac_75percent_vio_c,
                      fast_write); // only other field in reg is tx_ , which we want 0 == P
        put_ptr_field(gcr_addr_i, tx_tdr_phase_sel, 0, read_modify_write);
        done_l = false;

        do
        {
            set_debug_state(0xC121); // begin update pullup loop

            if (tx_zcal_tdr_capt_match_mult_rds(gcr_addr_i, 1,
                                                tx_zcal_tdr_matches_needed_c))   // pulled too high; need to reduce pullups
            {
                set_debug_state(0xC122); // try to decrement pullup

                if (tx_zcal_tdr_decrement_bank(gcr_addr_i, SEGTYPE_MAIN_PSEG, &current_pseg_pre2_l, &current_pseg_pre1_l,
                                               &current_pseg_main_l))
                {
                    set_debug_state(0xC123); // pullup decrement successful
                    updated_pu_or_pd_l = true;
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

        //   set lower dac level
        //   set n phase
        //   done = false
        //   do until done
        //     if comparator matches 0 required number of times,
        //       if(tx_zcal_tdr_decrement_bank()), updated_pu_or_pd = 1
        //       else done = 1
        //     else done = 1
        put_ptr_field(gcr_addr_i, tx_tdr_dac_cntl, tx_zcal_tdr_dac_25percent_vio_c,
                      fast_write); // only other field in reg is tx_tdr_phase_sel , which we write below
        put_ptr_field(gcr_addr_i, tx_tdr_phase_sel, 1, read_modify_write);
        done_l = false;

        do
        {
            set_debug_state(0xC131); // begin update pulldown loop

            if (tx_zcal_tdr_capt_match_mult_rds(gcr_addr_i, 0,
                                                tx_zcal_tdr_matches_needed_c))   // pulled too low; need to decrease pulldowns
            {
                set_debug_state(0xC132); // try to decrement pulldown

                if (tx_zcal_tdr_decrement_bank(gcr_addr_i, SEGTYPE_MAIN_NSEG, &current_nseg_pre2_l, &current_nseg_pre1_l,
                                               &current_nseg_main_l))
                {
                    set_debug_state(0xC133); // pulldown decrement successful
                    updated_pu_or_pd_l = true;
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
    set_debug_state(0xC140); // tx_zcal_tdr_write_en begin

    switch(segtype_i)
    {
        case SEGTYPE_MAIN_PSEG:
            set_debug_state(0xC141); // write main pseg

            // we only support setting all segments, or decreasing the number of segments set
            // these segments are split into 0_15; where the high level bit is a 2R and the rest
            // are 1R; and 16_24, where all are 1R; we will treat 16_24 as the MSB's. We need to
            // write this to 0 when the total is (15 * 2) + 1 == 31 decimal
            // Above this value, we need to write this when setting all segments to 1 or when
            // value is odd (when value is even, we simply clear the single 2R bit
            // So, we have 2 ranges:
            //     < 31 only write 0_15
            //     >= 31 write 0_15 and write 16_24 when value is odd
            if ((num_2r_equiv_i >= 31) && (num_2r_equiv_i % 2 > 0))  // write 16_24
            {
                set_debug_state(0xC142); // write main pseg msbs
                put_ptr_field(gcr_addr_i, tx_pseg_main_16_24_hs_en, tx_zcal_tdr_toTherm(num_2r_equiv_i >> 5),
                              fast_write); // 1R segs passed
            }

            put_ptr_field(gcr_addr_i, tx_pseg_main_0_15_hs_en, tx_zcal_tdr_toThermWithHalf(num_2r_equiv_i % 32, 16 ), fast_write);
            break;

        case SEGTYPE_MAIN_NSEG:
            set_debug_state(0xC143); // write main nseg

            // see comment above
            if ((num_2r_equiv_i >= 31) && (num_2r_equiv_i % 2 > 0))  // write 16_24
            {
                set_debug_state(0xC144); // write main nseg msbs
                put_ptr_field(gcr_addr_i, tx_nseg_main_16_24_hs_en, tx_zcal_tdr_toTherm(num_2r_equiv_i >> 5),
                              fast_write); // 1R segs passed
            }

            put_ptr_field(gcr_addr_i, tx_nseg_main_0_15_hs_en, tx_zcal_tdr_toThermWithHalf(num_2r_equiv_i % 32, 16), fast_write);
            break;

        case SEGTYPE_PRE2_PSEG:
            set_debug_state(0xC145); // write pre2 pseg
            put_ptr_field(gcr_addr_i, tx_pseg_pre2_hs_en, tx_zcal_tdr_toThermWithHalf(num_2r_equiv_i, tx_pseg_pre2_hs_en_width),
                          fast_write);
            break;

        case SEGTYPE_PRE2_NSEG:
            set_debug_state(0xC146); // write pre2 nseg
            put_ptr_field(gcr_addr_i, tx_nseg_pre2_hs_en, tx_zcal_tdr_toThermWithHalf(num_2r_equiv_i, tx_nseg_pre2_hs_en_width),
                          fast_write);
            break;

        case SEGTYPE_PRE1_PSEG:
            set_debug_state(0xC147); // write pre1 pseg
            put_ptr_field(gcr_addr_i, tx_pseg_pre1_hs_en, tx_zcal_tdr_toThermWithHalf(num_2r_equiv_i, tx_pseg_pre1_hs_en_width),
                          fast_write);
            break;

        case SEGTYPE_PRE1_NSEG:
            set_debug_state(0xC148); // write pre1 nseg
            put_ptr_field(gcr_addr_i, tx_nseg_pre1_hs_en, tx_zcal_tdr_toThermWithHalf(num_2r_equiv_i, tx_nseg_pre1_hs_en_width),
                          fast_write);
            break;
    } // switch segtype_i

    set_debug_state(0xC14F); // tx_zcal_tdr_write_en end
} // tx_zcal_tdr_write_en

// P or N is passed in as SEGTYPE_MAIN_PSEG or  SEGTYPE_MAIN_NSEG
// remove main, then pre2, then pre1
bool tx_zcal_tdr_decrement_bank(t_gcr_addr* gcr_addr_i, t_segtype segtype_i, uint8_t* current_pre2_io,
                                uint8_t* current_pre1_io, uint8_t* current_main_io)
{
    set_debug_state(0xC150); // tx_zcal_tdr_decrement_bank begin
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

    set_debug_state(0xC155); // tx_zcal_tdr_decrement_bank begin
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
            set_debug_state(0xC161); // tx_zcal_tdr_capt_match_mult_rds exit loop early
            break;
        }
    }

    return value_matched_l;
} // tx_zcal_tdr_capt_match_mult_rds

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
