/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/tx_ffe.c $               */
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
// *! FILENAME    : tx_ffe.c
// *! TITLE       :
// *! DESCRIPTION : Set tx ffe registers
// *!
// *! OWNER NAME  : Gary Peterson       Email: garyp@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *! DETAILED DESCRIPTION :
// *!   This reads the zcal results from the ffe enable registers and uses
// *!   the pre2 coeficient, and pre1 coeficient control values
// *!   read from mem_regs to calculate the needed select and enable values,
// *!   and finally writes the results.
// *!   Prior to running this code, the zcal results are stored in the high
// *!   speed enable registers as if there were no ffe applied.
// *!   The starting select settings are ignored.
// *!   The coeficients are input as desired coefficients multiplied by 128 and
// *!   rounded to the nearest integer.
// *!   Calculated values are as follows:
// *!      if pseg zcal is less than a valid value, it is set to a default;
// *!        likewise for nseg zcal
// *!      if pseg zcal is out of bounds, it is set to the nearest boundary value
// *!        likewise for nseg zcal
// *!      pseg enabled[2r] are set to pseg_zcal[2r]
// *!        likewise for nseg enabled; this represents the total number of pseg
// *!        or nseg 2r-equivalent segments which will be enabled
// *!      pseg pre1 and pre2 selects are calculated as
// *!        round_to_nearest((coefficient * pseg enabled[2r])/128)
// *!      likewise for nseg pre1 and pre2 selects
// *!      Note: the current bounds and register sizes are such that the
// *!        registers cannot overflow using this method
// *!      the pre1 and pre2 enables and selects, and main enables are calculated
// *!        as follows:
// *!          the design has a constraint such that if a pseg and corresponding
// *!            nseg are both enabled, they must have the same select setting
// *!          to accomplish this, the same nseg and pseg segments are reserved
// *!            for FFE. Specific segments used for ffe are enabled and selected.
// *!            Segments reserved, but not used are not enabled or selected
// *!          pre1 and pre2 bank segments not reserved for are used for main
// *!          after the pre1 and pre2 bank main segments are determined,
// *!            remaining segments are supplied by the main bank
// *!          Note: the bank register width and the allowed zcal and coefficient
// *!            are such that the resulting computation will not overflow the
// *!            bank register controls
// *!   After the needed number of enables and selects are calculated, they
// *!     are converted to appropriate thermometer code and written to the
// *!     high speed ffe setting registers
// *!   Note on data structure: the data structure allows, e.g. pre1 pseg and
// *!     nseg to have different numbers of main segments enabled. With the
// *!     current implementation, this will not happen. But, if we later
// *!     had a situation where not all extra pre1 segments were used, this
// *!     could happen.
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// gap19112100 |gap     | Created
// -----------------------------------------------------------------------------

#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "eo_common.h"
#include "tx_ffe.h"

#include "ppe_fw_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"

void tx_ffe(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xC200); // tx_ffe begin

    uint8_t pre2_coef_x128_l  = mem_pg_field_get(tx_ffe_pre2_coef);
    uint8_t pre1_coef_x128_l  = mem_pg_field_get(tx_ffe_pre1_coef);

    uint8_t zcal_result_nseg_l = tx_ffe_get_zcal(gcr_addr_i, TX_FFE_SEGTYPE_MAIN_NSEG);
    uint8_t zcal_result_pseg_l = tx_ffe_get_zcal(gcr_addr_i, TX_FFE_SEGTYPE_MAIN_PSEG);

    set_tx_dcc_debug_tx_ffe(0xC2D0, pre2_coef_x128_l );
    set_tx_dcc_debug_tx_ffe(0xC2D1, pre1_coef_x128_l  );
    set_tx_dcc_debug_tx_ffe(0xC2D2, zcal_result_nseg_l );
    set_tx_dcc_debug_tx_ffe(0xC2D3, zcal_result_pseg_l );

    t_tx_ffe_cntl seg_values_l;
    tx_ffe_calc_ffe(pre2_coef_x128_l, pre1_coef_x128_l, zcal_result_nseg_l, zcal_result_pseg_l, &seg_values_l);
    tx_ffe_write_ffe(gcr_addr_i, &seg_values_l);

    set_debug_state(0xC2FF); // tx_ffe end
}

/* find total number of 2r equivalent enabled nsegs or psegs
 */
uint8_t tx_ffe_get_zcal(t_gcr_addr* gcr_addr_i, t_tx_ffe_main_segtype segtype_i)
{
    set_debug_state(0xC210); // tx_ffe_get_zcal begin

    uint32_t zcal_vec_l = 0;
    uint32_t seg_en_2r_l = 0;

    switch(segtype_i)
    {
        case TX_FFE_SEGTYPE_MAIN_NSEG:
            set_debug_state(0xC211); // get en nseg
            zcal_vec_l = get_ptr_field(gcr_addr_i, tx_nseg_main_16_24_hs_en) | (get_ptr_field(gcr_addr_i,
                         tx_nseg_main_0_15_hs_en) << tx_nseg_main_16_24_hs_en_width);
            seg_en_2r_l = tx_ffe_fromVecWithHalf(zcal_vec_l, tx_nseg_main_16_24_hs_en_width + tx_nseg_main_0_15_hs_en_width);
            seg_en_2r_l += tx_ffe_fromVecWithHalf(get_ptr_field(gcr_addr_i, tx_nseg_pre2_hs_en), tx_nseg_pre2_hs_en_width);
            seg_en_2r_l += tx_ffe_fromVecWithHalf(get_ptr_field(gcr_addr_i, tx_nseg_pre1_hs_en), tx_nseg_pre1_hs_en_width);
            break;

        case TX_FFE_SEGTYPE_MAIN_PSEG:
            set_debug_state(0xC212); // get en pseg
            zcal_vec_l = get_ptr_field(gcr_addr_i, tx_pseg_main_16_24_hs_en) | (get_ptr_field(gcr_addr_i,
                         tx_pseg_main_0_15_hs_en) << tx_pseg_main_16_24_hs_en_width);
            seg_en_2r_l = tx_ffe_fromVecWithHalf(zcal_vec_l, tx_pseg_main_16_24_hs_en_width + tx_pseg_main_0_15_hs_en_width);
            seg_en_2r_l += tx_ffe_fromVecWithHalf(get_ptr_field(gcr_addr_i, tx_pseg_pre2_hs_en), tx_pseg_pre2_hs_en_width);
            seg_en_2r_l += tx_ffe_fromVecWithHalf(get_ptr_field(gcr_addr_i, tx_pseg_pre1_hs_en), tx_pseg_pre1_hs_en_width);
            break;
    }

    set_debug_state(0xC21F); // tx_ffe_get_zcal end
    return seg_en_2r_l;
} // tx_ffe_get_zcal

/* compute number number of 2R-equivalent pre1 and pre2 segments used for ffe and main, and number of 2R equivalent main bank segments to enable
 * using zcal results and pre-cursor coefficients
 */
void tx_ffe_calc_ffe(uint8_t pre2_coef_x128_i, uint8_t pre1_coef_x128_i, uint8_t zcal_result_nseg_i,
                     uint8_t zcal_result_pseg_i, t_tx_ffe_cntl* seg_values_o)
{
    // constants in this routine
    uint8_t pre2_max_2r_c = tx_nseg_pre2_hs_en_width * 2 - 1 ;
    uint8_t pre1_max_2r_c = tx_nseg_pre1_hs_en_width * 2 - 1 ;

    // ----------------------------------------
    // adjust zcal results
    //  (1) change a too-low value to the default
    //  (2) bound extreme min and max to the expected range
    // ----------------------------------------
    tx_ffe_bound_zcal(&zcal_result_nseg_i);
    tx_ffe_bound_zcal(&zcal_result_pseg_i);

    // ----------------------------------------
    // set total enabled segments needed
    //   these are reduced by amounts enabled in pre1 and pre2 banks, with the remaining satisfied by
    //   the main bank
    // ----------------------------------------
    seg_values_o->nseg.main = zcal_result_nseg_i ;
    seg_values_o->pseg.main = zcal_result_pseg_i ;

    // ----------------------------------------
    // calculate pre2 and pre1 bank segments selected as ffe and then allocated between pseg and nseg for ffe
    // the remaining main segments are reduced by the number used for ffe
    //   without a bound on the zcal result, the max value for ffe here is (67*15 + 64)/128, rounded down = 8;
    //   this is fewer than the available segments, so we don't need to clip the result
    // ----------------------------------------
    seg_values_o->nseg.pre2.ffe = tx_ffe_calc_sel(seg_values_o->nseg.main, pre2_coef_x128_i) ; // programmed value
    seg_values_o->pseg.pre2.ffe = tx_ffe_calc_sel(seg_values_o->pseg.main, pre2_coef_x128_i) ; // programmed value
    seg_values_o->nseg.pre1.ffe = tx_ffe_calc_sel(seg_values_o->nseg.main, pre1_coef_x128_i) ; // programmed value
    seg_values_o->pseg.pre1.ffe = tx_ffe_calc_sel(seg_values_o->pseg.main, pre1_coef_x128_i) ; // programmed value

    seg_values_o->nseg.main -= (seg_values_o->nseg.pre2.ffe + seg_values_o->nseg.pre1.ffe) ;
    seg_values_o->pseg.main -= (seg_values_o->pseg.pre2.ffe + seg_values_o->pseg.pre1.ffe) ;

    // ----------------------------------------
    // calculate pre2 and pre1 segments used for main
    // ----------------------------------------
    // calculate amount allocated to ffe; this is different than the max of pseg and nseg ffe because
    // one could use the 2r segment and the other might not. for example, pseg could require 4 segments
    // for ffe and nseg 3; a total of 5 2r equivalents would be required to be reserved for ffe -- the
    // 2-1R segments used for pseg and the 1-2R segment used up by nseg
    // ----------------------------------------
    uint8_t pre1_used_for_ffe_2r_l = tx_ffe_segments_needed_for_ffe(seg_values_o->nseg.pre1.ffe,
                                     seg_values_o->pseg.pre1.ffe) ;
    uint8_t pre2_used_for_ffe_2r_l = tx_ffe_segments_needed_for_ffe(seg_values_o->nseg.pre2.ffe,
                                     seg_values_o->pseg.pre2.ffe) ;

    // ----------------------------------------
    // segments not allocated for ffe are used for main
    // ----------------------------------------
    seg_values_o->nseg.pre2.main = seg_values_o->pseg.pre2.main = pre2_max_2r_c - pre2_used_for_ffe_2r_l ;

    seg_values_o->nseg.main -= seg_values_o->nseg.pre2.main ;
    seg_values_o->pseg.main -= seg_values_o->pseg.pre2.main ;

    seg_values_o->nseg.pre1.main = seg_values_o->pseg.pre1.main = pre1_max_2r_c - pre1_used_for_ffe_2r_l ;

    seg_values_o->nseg.main -= seg_values_o->nseg.pre1.main ; // programmed value
    seg_values_o->pseg.main -= seg_values_o->pseg.pre1.main ; // programmed value

    // ----------------------------------------
    // debug info
    // ----------------------------------------
    set_tx_dcc_debug_tx_ffe(0xC2D4, seg_values_o->nseg.pre2.ffe );
    set_tx_dcc_debug_tx_ffe(0xC2D5, seg_values_o->pseg.pre2.ffe );
    set_tx_dcc_debug_tx_ffe(0xC2D6, seg_values_o->nseg.pre1.ffe );
    set_tx_dcc_debug_tx_ffe(0xC2D7, seg_values_o->pseg.pre1.ffe );
    set_tx_dcc_debug_tx_ffe(0xC2D8, seg_values_o->nseg.pre2.main );
    set_tx_dcc_debug_tx_ffe(0xC2D9, seg_values_o->pseg.pre2.main );
    set_tx_dcc_debug_tx_ffe(0xC2DA, seg_values_o->nseg.pre1.main );
    set_tx_dcc_debug_tx_ffe(0xC2DB, seg_values_o->pseg.pre1.main );
    set_tx_dcc_debug_tx_ffe(0xC2DC, seg_values_o->nseg.main );
    set_tx_dcc_debug_tx_ffe(0xC2DD, seg_values_o->pseg.main );
} // tx_ffe_calc_ffe

/* write all bank control values
 */
void tx_ffe_write_ffe(t_gcr_addr* gcr_addr_i, t_tx_ffe_cntl* seg_values_i)
{
    tx_ffe_write_main_en(gcr_addr_i, seg_values_i->nseg.main, TX_FFE_SEGTYPE_MAIN_NSEG) ;
    tx_ffe_write_main_en(gcr_addr_i, seg_values_i->pseg.main, TX_FFE_SEGTYPE_MAIN_PSEG) ;

    tx_ffe_write_ffe_en_sel(gcr_addr_i, seg_values_i->nseg.pre2.main, seg_values_i->nseg.pre2.ffe,
                            seg_values_i->pseg.pre2.main, seg_values_i->pseg.pre2.ffe, TX_FFE_BANKTYPE_PRE2) ;
    tx_ffe_write_ffe_en_sel(gcr_addr_i, seg_values_i->nseg.pre1.main, seg_values_i->nseg.pre1.ffe,
                            seg_values_i->pseg.pre1.main, seg_values_i->pseg.pre1.ffe, TX_FFE_BANKTYPE_PRE1) ;
} // tx_ffe_write_ffe

/* adjust the zcal result if below valid range or outside of bounds
 */
void tx_ffe_bound_zcal(uint8_t* zcal_2r_io)
{
    set_debug_state(0xC220); // tx_ffe_bound_zcal begin

    if (*zcal_2r_io < tx_ffe_zcal_valid_min_2r_c)
    {
        set_debug_state(0xC221); // tx_ffe_bound_zcal at or below valid minimum
        *zcal_2r_io = tx_ffe_zcal_default_2r_c ;
    }

    if (*zcal_2r_io < tx_ffe_zcal_bound_min_2r_c)
    {
        set_debug_state(0xC222); // tx_ffe_bound_zcal below min bound
        *zcal_2r_io = tx_ffe_zcal_bound_min_2r_c;
    }

    if (*zcal_2r_io > tx_ffe_zcal_bound_max_2r_c)
    {
        set_debug_state(0xC223); // tx_ffe_bound_zcal above max bound
        *zcal_2r_io = tx_ffe_zcal_bound_max_2r_c;
    }

    set_debug_state(0xC22F); // tx_ffe_bound_zcal end
}

/* calculate ffe select values given an impedance calibration value and a coeficient
 * the coeficient is an integer representing the decimal coeficient multiplied by 128
 * and rounded to the nearest value
 * the calibration value would typically by the 2R equivalent resistance, though this
 *  function would work with any convention
 * the result is rounded to the nearest integer
 */
uint8_t tx_ffe_calc_sel(uint8_t zcal_i, uint8_t ffe_coef_x128_i)
{
    return ((zcal_i * ffe_coef_x128_i) + 64) >> 7 ;
}

/* calculates segments needed for ffe given pseg and nseg values
 * this reserves the 2r segment as needed
 * since an enabled segment cannot be selected for both ffe and main, we need to
 * use the max number of either p or nsegs needed. If one requires the 2r segment,
 * we need to reserve that, potentially resulting in 1 more segment than the max
 * of the p and n segs
 * This operates by recognizing that this additional segment is only needed
 * when the maximum is even; thus, we can 'or' in the segment when needed rather
 * than doing an addition operation.
 */
uint8_t tx_ffe_segments_needed_for_ffe(uint8_t nseg_sel_2r_i, uint8_t pseg_sel_2r_i)
{
    return max(nseg_sel_2r_i, pseg_sel_2r_i) | (nseg_sel_2r_i & 0x1) | (pseg_sel_2r_i & 0x1) ;
}

/* write the main-bank enable after converting a number of 2R-equivalent segments to therm code and splitting between
 * high and low registers
 */
void tx_ffe_write_main_en(t_gcr_addr* gcr_addr_i, uint8_t num_2r_equiv_i, t_tx_ffe_main_segtype segtype_i)
{
    set_debug_state(0xC230); // tx_ffe_write_main_en begin

    uint32_t full_therm_l = tx_ffe_toThermWithHalf(num_2r_equiv_i,
                            tx_pseg_main_0_15_hs_en_width + tx_pseg_main_16_24_hs_en_width);
    uint32_t high_bits_l = full_therm_l >> tx_pseg_main_16_24_hs_en_width;
    uint32_t low_bits_l = full_therm_l & ((0x1 << tx_pseg_main_16_24_hs_en_width) - 1);

    set_tx_dcc_debug_tx_ffe(0xC2DE, num_2r_equiv_i);
    set_tx_dcc_debug_tx_ffe(0xC2DF, high_bits_l);
    set_tx_dcc_debug_tx_ffe(0xC2E0, low_bits_l);

    switch(segtype_i)
    {
        case TX_FFE_SEGTYPE_MAIN_NSEG:
            set_debug_state(0xC231); // write main_nseg
            put_ptr_field(gcr_addr_i, tx_nseg_main_16_24_hs_en, low_bits_l, fast_write);
            put_ptr_field(gcr_addr_i, tx_nseg_main_0_15_hs_en, high_bits_l, fast_write);
            break;

        case TX_FFE_SEGTYPE_MAIN_PSEG:
            set_debug_state(0xC232); // write main_pseg
            put_ptr_field(gcr_addr_i, tx_pseg_main_16_24_hs_en, low_bits_l, fast_write);
            put_ptr_field(gcr_addr_i, tx_pseg_main_0_15_hs_en, high_bits_l, fast_write);
            break;
    } // switch segtype_i

    set_debug_state(0xC23F); // tx_ffe_write_main_en end
} // tx_ffe_write_main_en

/* write ffe enables; this uses the lsb 1r segments for ffe and the msb 1r segments for main
 * only one of main or ffe are allowed to use a particular segment, including the 2R segment;
 * this is ensured by previous computations
*/
void tx_ffe_write_ffe_en_sel(t_gcr_addr* gcr_addr_i, uint8_t num_2r_equiv_nseg_main_en_i,
                             uint8_t num_2r_equiv_nseg_ffe_en_i,
                             uint8_t num_2r_equiv_pseg_main_en_i, uint8_t num_2r_equiv_pseg_ffe_en_i, t_tx_ffe_ffe_banktype banktype_i)
{
    set_debug_state(0xC240); // tx_ffe_write_ffe_en_sel begin
    uint32_t ffe_therm_l = 0;
    uint32_t en_l = 0;
    uint32_t sel_l = 0;

    switch(banktype_i)
    {
        case TX_FFE_BANKTYPE_PRE2:
            set_debug_state(0xC241); // write pre2 en and sel

            put_ptr_field(gcr_addr_i, tx_pseg_pre2_hs_en, 0,
                          fast_write); // pseg en cleared to avoid main and ffe enabled and selected on same segment, side effect clears pseg sel

            ffe_therm_l = tx_ffe_toThermWithHalf(num_2r_equiv_nseg_ffe_en_i, tx_nseg_pre2_hs_en_width);
            en_l = ffe_therm_l | tx_ffe_toThermWithHalfRev(num_2r_equiv_nseg_main_en_i, tx_nseg_pre2_hs_en_width);
            sel_l = tx_ffe_toThermWithHalf(num_2r_equiv_nseg_ffe_en_i, tx_nseg_pre2_hs_sel_width);
            put_ptr_field(gcr_addr_i, tx_nseg_pre2_hs_sel, sel_l, fast_write);
            put_ptr_field(gcr_addr_i, tx_nseg_pre2_hs_en, en_l, read_modify_write);

            set_tx_dcc_debug_tx_ffe(0xC2E1, ffe_therm_l);
            set_tx_dcc_debug_tx_ffe(0xC2E2, en_l);
            set_tx_dcc_debug_tx_ffe(0xC2E3, sel_l);

            ffe_therm_l = tx_ffe_toThermWithHalf(num_2r_equiv_pseg_ffe_en_i, tx_pseg_pre2_hs_en_width);
            en_l = ffe_therm_l | tx_ffe_toThermWithHalfRev(num_2r_equiv_pseg_main_en_i, tx_pseg_pre2_hs_en_width);
            sel_l = tx_ffe_toThermWithHalf(num_2r_equiv_pseg_ffe_en_i, tx_pseg_pre2_hs_sel_width);
            put_ptr_field(gcr_addr_i, tx_pseg_pre2_hs_sel, sel_l,
                          fast_write); // sel must be written before enable to avoid main and ffe enabled and selected on same segment
            put_ptr_field(gcr_addr_i, tx_pseg_pre2_hs_en, en_l, read_modify_write);

            set_tx_dcc_debug_tx_ffe(0xC2E4, ffe_therm_l);
            set_tx_dcc_debug_tx_ffe(0xC2E5, en_l);
            set_tx_dcc_debug_tx_ffe(0xC2E6, sel_l);

            break;

        case TX_FFE_BANKTYPE_PRE1:
            set_debug_state(0xC242); // write pre1 en and sel

            put_ptr_field(gcr_addr_i, tx_pseg_pre1_hs_en, 0,
                          fast_write); // pseg en cleared to avoid main and ffe enabled and selected on same segment, side effect clears pseg sel

            ffe_therm_l = tx_ffe_toThermWithHalf(num_2r_equiv_nseg_ffe_en_i, tx_nseg_pre1_hs_en_width);
            en_l = ffe_therm_l | tx_ffe_toThermWithHalfRev(num_2r_equiv_nseg_main_en_i, tx_nseg_pre1_hs_en_width);
            sel_l = tx_ffe_toThermWithHalf(num_2r_equiv_nseg_ffe_en_i, tx_nseg_pre1_hs_sel_width);
            put_ptr_field(gcr_addr_i, tx_nseg_pre1_hs_sel, sel_l, fast_write);
            put_ptr_field(gcr_addr_i, tx_nseg_pre1_hs_en, en_l, read_modify_write);

            set_tx_dcc_debug_tx_ffe(0xC2E7, ffe_therm_l);
            set_tx_dcc_debug_tx_ffe(0xC2E8, en_l);
            set_tx_dcc_debug_tx_ffe(0xC2E9, sel_l);

            ffe_therm_l = tx_ffe_toThermWithHalf(num_2r_equiv_pseg_ffe_en_i, tx_pseg_pre1_hs_en_width);
            en_l = ffe_therm_l | tx_ffe_toThermWithHalfRev(num_2r_equiv_pseg_main_en_i, tx_pseg_pre1_hs_en_width);
            sel_l = tx_ffe_toThermWithHalf(num_2r_equiv_pseg_ffe_en_i, tx_pseg_pre1_hs_sel_width);
            put_ptr_field(gcr_addr_i, tx_pseg_pre1_hs_sel, sel_l,
                          fast_write); // sel must be written before enable to avoid main and ffe enabled and selected on same segment
            put_ptr_field(gcr_addr_i, tx_pseg_pre1_hs_en, en_l, read_modify_write);

            set_tx_dcc_debug_tx_ffe(0xC2EA, ffe_therm_l);
            set_tx_dcc_debug_tx_ffe(0xC2EB, en_l);
            set_tx_dcc_debug_tx_ffe(0xC2EC, sel_l);

            break;
    }

    set_debug_state(0xC24F); // tx_ffe_write_ffe_en_sel end
}

/**
 * @brief Converts a vector code with a MSB 1/2 strength bit to a decimal value
 * @param[in] i_vec Value
 * @param[in] i_width Width of Register
 * @retval decimal Value
 */
uint8_t tx_ffe_fromVecWithHalf(const uint32_t i_vec, const uint8_t i_width)
{
    uint8_t l_dec = 0;
    int8_t j;

    for ( j = i_width - 2; j >= 0; j-- )
    {
        l_dec += ((i_vec >> j) & 0x1) << 1; // add 2 for each bit set except msb
    }

    l_dec += i_vec >> (i_width - 1) & 0x1; // add 1 for msb set
    return l_dec;
} // tx_ffe_fromVecWithHalf

/**
 * @brief Converts a decimal value to a thermometer code
 * @param[in] i_dec Decimal Value
 * @retval    Thermometer Value
 */
uint32_t tx_ffe_toTherm(const uint8_t i_dec)
{
    return (( 0x1 <<  i_dec ) - 1 );
} // tx_ffe_toTherm

/**
 * @brief Converts a decimal value to a thermometer code with reverse bit significance
 * @param[in] i_dec Decimal Value
 * @retval    Thermometer Value
 */
uint32_t tx_ffe_toThermRev(const uint8_t i_dec, const uint8_t i_width)
{
    return ((( 0x1 <<  i_dec ) - 1) << (i_width - i_dec));
} // tx_ffe_toThermRev

/**
 * @brief Converts a decimal value to a thermometer code with a MSB 1/2 strength bit
 * @param[in] i_dec   Decimal Value
 * @param[in] i_width Width of Register
 * @retval Thermometer Value
 */
uint32_t tx_ffe_toThermWithHalf(const uint8_t i_dec, const uint8_t i_width)
{
    // If the LSB of the 2r equivalent is on, then we need to set the 2r bit (MSB)
    uint32_t halfOn = ( i_dec & 0x1 ) << ( i_width - 1 );

    // Shift the 2r equivalent to a 1r value and convert to a thermometer code.
    uint32_t x1Equivalent = tx_ffe_toTherm(i_dec >> 0x1);

    // combine 1r equivalent thermometer code + the 2r MSB value.
    return halfOn | x1Equivalent ;
} // tx_ffe_toThermWithHalf

/**
 * @brief Converts a decimal value to a thermometer code with a MSB 1/2 strength bit
 * @brief and the full-strength segments reversed
 * @param[in] i_dec   Decimal Value
 * @param[in] i_width Width of Register
 * @retval Thermometer Value
 */
uint32_t tx_ffe_toThermWithHalfRev(const uint8_t i_dec, const uint8_t i_width)
{
    // If the LSB of the 2r equivalent is on, then we need to set the 2r bit (MSB)
    uint32_t halfOn = ( i_dec & 0x1 ) << ( i_width - 1 );

    // Shift the 2r equivalent to a 1r value and convert to a thermometer code.
    uint32_t x1Equivalent = tx_ffe_toThermRev( i_dec >> 0x1, i_width - 1 );

    // combine 1r equivalent thermometer code + the 2r MSB value.
    return halfOn | x1Equivalent ;
} // tx_ffe_toThermWithHalfRev
