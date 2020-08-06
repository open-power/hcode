/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/tx_seg_test.c $          */
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
// *! FILENAME    : tx_seg_test.c
// *! TITLE       :
// *! DESCRIPTION : Run tx segment test
// *!
// *! OWNER NAME  : Gary Peterson       Email: garyp@us.ibm.com
// *! BACKUP NAME : Brian Albertson     Email: brian.j.albertson@ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// gap20052800 |gap     | Added more modes
// mwh20022401 |mwh     | Added Debug Logs
// mwh20022400 |mwh     | Add in warning fir to DFT fir so both get set if DFT check triggers
// gap19121900 |gap     | Created
// -----------------------------------------------------------------------------

#include <stdbool.h>
#include "io_lib.h"
#include "pk.h"
#include "eo_common.h"
#include "tx_seg_test.h"
#include "ppe_com_reg_const_pkg.h"
#include "config_ioo.h"
#include "io_logger.h"

//---------
// Note on debug code:
//   debug code has been commented out with '//- '
//   this is because debug code is extensive, but will be very helpful
//   should the need arise.

////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test
//
// Run segment test on a lane
// gcr_addr is set to tx_group and lane before this is called
////////////////////////////////////////////////////////////////////////////////////

void tx_seg_test(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xC300); // tx_seg_test begin

    int64_t sr = 0; // emulated shift register
    t_tx_seg_regs prev_seg_regs = {0, 0, 0, 0}; // intermediate data structure, previous
    t_tx_seg_regs new_seg_regs = {0, 0, 0, 0};  // intermediate data structure, new

    tx_seg_test_setup(gcr_addr_i);

    uint32_t tx_seg_test_frc_2r_l = mem_pg_field_get(tx_seg_test_frc_2r); // 0 false, or 1 true
    uint32_t tx_seg_test_2r_seg_l = mem_pg_field_get(tx_seg_test_2r_seg); // 0 or 1
    uint32_t tx_seg_test_1r_segs_l = mem_pg_field_get(tx_seg_test_1r_segs); // 0 to 3

//- #if IO_DEBUG_LEVEL >= 3
//-     uint32_t tx_nseg_pre1_hs_en       = get_ptr(gcr_addr_i, tx_nseg_pre1_hs_en_addr, 0, 15);
//-     uint32_t tx_pseg_pre1_hs_en       = get_ptr(gcr_addr_i, tx_pseg_pre1_hs_en_addr, 0, 15);
//-     uint32_t tx_nseg_pre2_hs_en       = get_ptr(gcr_addr_i, tx_nseg_pre2_hs_en_addr, 0, 15);
//-     uint32_t tx_pseg_pre2_hs_en       = get_ptr(gcr_addr_i, tx_pseg_pre2_hs_en_addr, 0, 15);
//-     uint32_t tx_nseg_main_0_15_hs_en  = get_ptr(gcr_addr_i, tx_nseg_main_0_15_hs_en_addr, 0, 15);
//-     uint32_t tx_pseg_main_0_15_hs_en  = get_ptr(gcr_addr_i, tx_pseg_main_0_15_hs_en_addr, 0, 15);
//-     uint32_t tx_nseg_main_16_24_hs_en = get_ptr(gcr_addr_i, tx_nseg_main_16_24_hs_en_addr, 0, 15);
//-     uint32_t tx_pseg_main_16_24_hs_en = get_ptr(gcr_addr_i, tx_pseg_main_16_24_hs_en_addr, 0, 15);
//- #endif
//-
//-     // the set_tx_dcc_debug_tx_seg_test macro has a check for DEBUG LEVEL, so this is only
//-     // 'instantiated' when IO_DEBUG_LEVEL >= 3
//-     set_tx_dcc_debug_tx_seg_test(0xC381, tx_nseg_pre1_hs_en       );
//-     set_tx_dcc_debug_tx_seg_test(0xC382, tx_pseg_pre1_hs_en       );
//-     set_tx_dcc_debug_tx_seg_test(0xC383, tx_nseg_pre2_hs_en       );
//-     set_tx_dcc_debug_tx_seg_test(0xC384, tx_pseg_pre2_hs_en       );
//-     set_tx_dcc_debug_tx_seg_test(0xC385, tx_nseg_main_0_15_hs_en  );
//-     set_tx_dcc_debug_tx_seg_test(0xC386, tx_pseg_main_0_15_hs_en  );
//-     set_tx_dcc_debug_tx_seg_test(0xC387, tx_nseg_main_16_24_hs_en );
//-     set_tx_dcc_debug_tx_seg_test(0xC388, tx_pseg_main_16_24_hs_en );
//-
//-     set_tx_dcc_debug_tx_seg_test(0xC389, tx_seg_test_frc_2r_l     );
//-     set_tx_dcc_debug_tx_seg_test(0xC38A, tx_seg_test_2r_seg_l     );
//-     set_tx_dcc_debug_tx_seg_test(0xC38B, tx_seg_test_1r_segs_l    );

    uint8_t first_loop = true;

    while(tx_seg_test_next_sr(&sr, tx_seg_test_frc_2r_l, tx_seg_test_2r_seg_l, tx_seg_test_1r_segs_l))
    {
        tx_seg_test_sr_to_reg(sr, &new_seg_regs);
        tx_seg_test_update_seg_gcr(gcr_addr_i, &prev_seg_regs,  &new_seg_regs, first_loop);
        tx_seg_test_test_seg(gcr_addr_i);
        prev_seg_regs = new_seg_regs;
        first_loop = false;

//- #if IO_DEBUG_LEVEL >= 3
//-         tx_nseg_pre1_hs_en       = get_ptr(gcr_addr_i, tx_nseg_pre1_hs_en_addr, 0, 15);
//-         tx_pseg_pre1_hs_en       = get_ptr(gcr_addr_i, tx_pseg_pre1_hs_en_addr, 0, 15);
//-         tx_nseg_pre2_hs_en       = get_ptr(gcr_addr_i, tx_nseg_pre2_hs_en_addr, 0, 15);
//-         tx_pseg_pre2_hs_en       = get_ptr(gcr_addr_i, tx_pseg_pre2_hs_en_addr, 0, 15);
//-         tx_nseg_main_0_15_hs_en  = get_ptr(gcr_addr_i, tx_nseg_main_0_15_hs_en_addr, 0, 15);
//-         tx_pseg_main_0_15_hs_en  = get_ptr(gcr_addr_i, tx_pseg_main_0_15_hs_en_addr, 0, 15);
//-         tx_nseg_main_16_24_hs_en = get_ptr(gcr_addr_i, tx_nseg_main_16_24_hs_en_addr, 0, 15);
//-         tx_pseg_main_16_24_hs_en = get_ptr(gcr_addr_i, tx_pseg_main_16_24_hs_en_addr, 0, 15);
//- #endif
//-
//-     // the set_tx_dcc_debug_tx_seg_test macro has a check for DEBUG LEVEL, so this is only
//-     // 'instantiated' when IO_DEBUG_LEVEL >= 3
//-         set_tx_dcc_debug_tx_seg_test(0xC38C, tx_nseg_pre1_hs_en       );
//-         set_tx_dcc_debug_tx_seg_test(0xC38D, tx_pseg_pre1_hs_en       );
//-         set_tx_dcc_debug_tx_seg_test(0xC38E, tx_nseg_pre2_hs_en       );
//-         set_tx_dcc_debug_tx_seg_test(0xC391, tx_pseg_pre2_hs_en       );
//-         set_tx_dcc_debug_tx_seg_test(0xC392, tx_nseg_main_0_15_hs_en  );
//-         set_tx_dcc_debug_tx_seg_test(0xC393, tx_pseg_main_0_15_hs_en  );
//-         set_tx_dcc_debug_tx_seg_test(0xC394, tx_nseg_main_16_24_hs_en );
//-         set_tx_dcc_debug_tx_seg_test(0xC395, tx_pseg_main_16_24_hs_en );

    } // while tx_seg_test_next_sr true

    tx_seg_test_restore(gcr_addr_i);

    set_debug_state(0xC3FF); // tx_seg_test end
} // tx_seg_test

////////////////////////////////////////////////////////////////////////////////////
// Mode setting summary
//
//  fix_2r       == tx_seg_test_frc_2r
//  num_2r       == tx_seg_test_2r_seg
//  num_1r_equiv == tx_seg_test_1r_segs
//
//  reg settings:               | 2r_equiv     Segments
//  fix_2r num_2r  num_1r_equiv | during test  during test      Comment
//  ------ ------  ------------ | -----------  -----------      -------
//                              |
//    0      0            0     |    1-2       1-2r or 1-1r     Only 1 segment on
//    0      0            1     |    2         2-2R or 1-1R
//    1      1            1     |    3         1-2R and 1-1R    Legacy default mode
//    0      0            2     |    4         2-2R and 1-1R
//                              |              or 0-2r and 2-1R
//    1      1            2     |    5         1-2R and 2-1R
//    0      0            3     |    6         2-2R and 2-1R
//                              |              or 0-2r and 3-1R
//    1      1            3     |    7         1-2R and 3-1R
//    1      0            1     |    2         0-2R and 1-1R    Legacy Override_2r mode
//    1      0            2     |    4         0-2R and 2-1R    Legacy Override_1r mode
////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////
// shift register (sr) considerations:
//
//   2R segments are grouped as much as possible to allow some normal SR operation
//   between segment tests.
//   pre1/pre2 main and pre1/pre2 ffe are separated to avoid enabling main and ffe
//   at the same time
//   The math/algorithm depends on this being an int, vs a uint, so the actual
//   contents can never use the msb/sign bit; if we would ever need the msb, the
//   algorithm pieces that look for whether the lsb of a range is set would need
//   to change.
////////////////////////////////////////////////////////////////////////////////////
// shift register positions
//
//   bit   use                endbit mask   width
//   ---   ----------------   ------ ------ ------
//   0-18  unused
//   19    pre1 main 2r 0       X      X      X
//   20    pre2 main 2r 0       X      X      X
//   21    main 2r 0            X      X      X
//   22-25 pre1 main 1r 1-4     X      X      X
//   26-29 pre2 main 1r 1-4     X      X      X
//   30-44 main 1r 1-15         X             X
//   45-53 main 1r 16-24        X             X
//   54-57 pre1 ffe 1r 1-4      X      X      X
//   58-61 pre2 ffe 1r 1-4      X      X      X
//   62    pre1 ffe 2r 0        X      X      X
//   63    pre2 ffe 2r 0        X      X      X
//   22-61 all 1r; sr_1r               X


////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_setup
//
// Per lane setup; near complement is tx_seg_test_restore
////////////////////////////////////////////////////////////////////////////////////

void tx_seg_test_setup(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xC310); // tx_seg_test_setup begin

    put_ptr_field(gcr_addr_i, tx_force_hs_ffe,          0x1, fast_write);        // pl, single bit, no other bits in reg
    put_ptr_field(gcr_addr_i, tx_pattern_sel,           0x1, fast_write);        // pg, 3 bits, no other bits in reg

    // also clears tx_rxdet_enable and tx_rxdet_pulse to 0
    put_ptr_field(gcr_addr_i, tx_pattern_enable,        0x1,
                  fast_write);        // pl, single bit, other bits in reg can or should be 0

    put_ptr_field(gcr_addr_i, tx_rctrl,                 0x1, read_modify_write); // pg, single bit, must use rmw
    put_ptr_field(gcr_addr_i, tx_seg_test_leakage_ctrl, 0x1, read_modify_write); // pl, single bit, must use rmw

    // in p10_tx_testmode_controls.xlsx, DD1 TX50 Mode Controls tab, Single Segment Test col; but might not be absolutely required
    put_ptr_field(gcr_addr_i, tx_unload_clk_disable   , 0x0, read_modify_write); // pl, single bit, must use rmw
} // tx_seg_test_setup


////////////////////////////////////////////////////////////////////////////////////
// bool tx_seg_test_next_sr
//
// Updates shift register contents in place, returning false if complete
//
//   args are: <sr_io>, <fix_2r_i>, <num_2r>, <num_1r_equiv>
// *_mask variables are #defines from the tx_seg_test.h file
////////////////////////////////////////////////////////////////////////////////////

bool tx_seg_test_next_sr(int64_t* sr_io, uint32_t fix_2r_i, uint32_t num_2r_i, uint32_t num_1r_equiv_i)
{
    set_debug_state(0xC320); // tx_seg_test_next_sr begin

    bool updated = true;

//- #if IO_DEBUG_LEVEL >= 3
//-     uint16_t sr_io_0_15, sr_io_16_31, sr_io_32_47, sr_io_48_63;
//-     sr_io_0_15 = *sr_io >> 48;
//-     sr_io_16_31 = (*sr_io & 0xFFFF00000000) >> 32;
//-     sr_io_32_47 = (*sr_io & 0xFFFF0000) >> 16;
//-     sr_io_48_63 = (*sr_io & 0xFFFF);
//- #endif
//-
//-     // the set_tx_dcc_debug_tx_seg_test macro has a check for DEBUG LEVEL, so this is only
//-     // 'instantiated' when IO_DEBUG_LEVEL >= 3
//-     set_tx_dcc_debug_tx_seg_test(0xC3A4, sr_io_0_15);
//-     set_tx_dcc_debug_tx_seg_test(0xC3A5, sr_io_16_31);
//-     set_tx_dcc_debug_tx_seg_test(0xC3A6, sr_io_32_47);
//-     set_tx_dcc_debug_tx_seg_test(0xC3A7, sr_io_48_63);

    if (*sr_io)   // after first loop, try to shift
    {
//-         set_tx_dcc_debug_tx_seg_test(0xC3A8, num_1r_equiv_i); // try_to_shift,  value arbitrary, for code tracing only
        if (fix_2r_i)
        {
            // if fix_2r_i, num_2r_i must be 0 or 1 --> at most 1 2r bit set
//-             set_tx_dcc_debug_tx_seg_test(0xC3A9, num_1r_equiv_i); // fix_2r_true, value arbitrary, for code tracing only
            updated = !(*sr_io & sr_pre2_ffe_1r_mask & (-sr_pre2_ffe_1r_mask)); // finished when last 1r seg is 1

            if (updated)
            {
//-                 set_tx_dcc_debug_tx_seg_test(0xC3AA, num_1r_equiv_i); // updated, value arbitrary, for code tracing only
                if (num_2r_i > 0)   // need to shift 2r enable
                {
                    if (*sr_io & (sr_pre1_main_1r_mask | sr_pre2_main_1r_mask)) // keep 2r segs in pre1 main, pre2 main or main
                    {
//-                         set_tx_dcc_debug_tx_seg_test(0xC3AB, num_1r_equiv_i); // shift_2r leave_in_main, value arbitrary, for code tracing only
                        shift_mask_up_to_end(sr_io, sr_pre1_main_2r_mask | sr_pre2_main_2r_mask | sr_main_2r_mask);
                    }
                    else if (*sr_io & sr_main_2r_mask)   // end of upper 2r segs; switch single 2r enable to lower 2r segs
                    {
//-                         set_tx_dcc_debug_tx_seg_test(0xC3AC, num_1r_equiv_i); // shift_2r from_main_to_ffe, value arbitrary, for code tracing only
                        *sr_io = (*sr_io & ~(sr_pre1_main_2r_mask | sr_pre2_main_2r_mask | sr_main_2r_mask)) | sr_pre1_ffe_2r_mask;
                    }
                    else   // must be in lower 2r; shift lower 2r; to optimize, simply clear one bit and set the other
                    {
//-                         set_tx_dcc_debug_tx_seg_test(0xC3AD, num_1r_equiv_i); // shift_2r to_end_of_main, value arbitrary, for code tracing only
                        *sr_io = (*sr_io & ~(sr_pre1_ffe_2r_mask)) | sr_pre2_ffe_2r_mask;
                    }
                } // num_2r_i > 0

                shift_mask(sr_io, sr_1r_mask); // shift 1r enable
            } // updated
        } // fix_2r_i
        else if (num_1r_equiv_i >
                 0)   // when traversing 2r/1r boundary, need to ensure correct number of segs are enabled; will always have 0 or 2 2r segs active
        {
            updated = !(*sr_io & 0x1); // updated when last seg is not 1

//-             set_tx_dcc_debug_tx_seg_test(0xC3AE) num_1r_equiv_i); // try_to_shift_1r_equiv, value arbitrary, for code tracing only
            if (updated)
            {
//-                 set_tx_dcc_debug_tx_seg_test(0xC3B1, num_1r_equiv_i); // shift_1r_equiv, value arbitrary, for code tracing only
                if (*sr_io & sr_main_2r_mask)   // end of upper 2r segs; enable 1 1r seg
                {
//-                     set_tx_dcc_debug_tx_seg_test(0xC3B2, num_1r_equiv_i); // shift_1r_equiv convert_2_2r_to_1_1r, value arbitrary, for code tracing only
                    *sr_io >>= 1; // shift all; will add a 1r seg
                    *sr_io &= ~sr_main_2r_mask; // clear main_2r; which is only 2r set at this point
                }
                else if (*sr_io & sr_pre2_ffe_1r_mask & (-sr_pre2_ffe_1r_mask))   // end of 1r segs; enable 2 2r seg
                {
//-                     set_tx_dcc_debug_tx_seg_test(0xC3B3, num_1r_equiv_i); // shift_1r_equiv convert_1_1r_to_2_2r, value arbitrary, for code tracing only
                    *sr_io >>= 1; // shift all; will add a 2r seg
                    *sr_io |= sr_pre2_ffe_2r_mask; // turn on last 2r bits
                }
                else   // shift left 2r and shift 1r
                {
//-                     set_tx_dcc_debug_tx_seg_test(0xC3B4, num_1r_equiv_i); // shift_1r_equiv shift_2r_and_1r, value arbitrary, for code tracing only
                    *sr_io >>= 1; // shift all
                }
            } // updated
        } // num_1r_equiv_i > 0
        else   // special case, single segment shifted across
        {
//-             set_tx_dcc_debug_tx_seg_test(0xC3B5, num_1r_equiv_i); // try_to_shift_single_segment, value arbitrary, for code tracing only
            updated = !(*sr_io & 0x1); // updated when last seg is not 1

            if (updated)
            {
//-                 set_tx_dcc_debug_tx_seg_test(0xC3B6, num_1r_equiv_i); // shift_segment, value arbitrary, for code tracing only
                *sr_io >>= 1; // shift all
            }
        } // single segment shifted
    } // shift reg update branch
    else   // first loop; init
    {
        uint8_t num_1r_to_set = num_1r_equiv_i;
//-         set_tx_dcc_debug_tx_seg_test(0xC3B7, num_1r_equiv_i); // init_sr, value arbitrary, for code tracing only

        if ((fix_2r_i && num_2r_i) || (!fix_2r_i && !num_1r_equiv_i)) // set 1 2r segment
        {
//-             set_tx_dcc_debug_tx_seg_test(0xC3B8, num_1r_equiv_i); // init_sr set_1_2r_seg, value arbitrary, for code tracing only
            *sr_io |= sr_pre1_main_2r_mask;
        }
        else if (!fix_2r_i && num_1r_equiv_i)   // set 2 2r segments
        {
//-             set_tx_dcc_debug_tx_seg_test(0xC3B9, num_1r_equiv_i); // init_sr set_2_2r_seg, value arbitrary, for code tracing only
            *sr_io |= (sr_pre1_main_2r_mask | sr_pre2_main_2r_mask);
            num_1r_to_set--;
        }

        *sr_io |= (((~sr_pre1_main_1r_mask) >> num_1r_to_set)&sr_pre1_main_1r_mask); // set 1r segments

//- #if IO_DEBUG_LEVEL >= 3
//-         uint64_t sr1_pre1_mask = sr_pre1_main_1r_mask;
//-         uint64_t not_sr1_pre1_mask = ~sr_pre1_main_1r_mask;
//-         uint64_t not_sr1_pre1_mask_shifted = not_sr1_pre1_mask>>num_1r_to_set;
//-         uint64_t not_sr1_pre1_mask_shifted_and_mask = not_sr1_pre1_mask_shifted & sr_pre1_main_1r_mask;
//-         uint16_t sr1_pre1_mask_0_15 = sr1_pre1_mask >> 48;
//-         uint16_t sr1_pre1_mask_16_31 = (sr1_pre1_mask & 0xFFFF00000000) >> 32;
//-         uint16_t sr1_pre1_mask_32_47 = (sr1_pre1_mask & 0xFFFF0000) >> 16;
//-         uint16_t sr1_pre1_mask_48_63 = (sr1_pre1_mask & 0xFFFF);
//-         uint16_t not_sr1_pre1_mask_0_15 = not_sr1_pre1_mask >> 48;
//-         uint16_t not_sr1_pre1_mask_16_31 = (not_sr1_pre1_mask & 0xFFFF00000000) >> 32;
//-         uint16_t not_sr1_pre1_mask_32_47 = (not_sr1_pre1_mask & 0xFFFF0000) >> 16;
//-         uint16_t not_sr1_pre1_mask_48_63 = (not_sr1_pre1_mask & 0xFFFF);
//-         uint16_t not_sr1_pre1_mask_shifted_0_15 = not_sr1_pre1_mask_shifted >> 48;
//-         uint16_t not_sr1_pre1_mask_shifted_16_31 = (not_sr1_pre1_mask_shifted & 0xFFFF00000000) >> 32;
//-         uint16_t not_sr1_pre1_mask_shifted_32_47 = (not_sr1_pre1_mask_shifted & 0xFFFF0000) >> 16;
//-         uint16_t not_sr1_pre1_mask_shifted_48_63 = (not_sr1_pre1_mask_shifted & 0xFFFF);
//-         uint16_t not_sr1_pre1_mask_shifted_and_mask_0_15 = not_sr1_pre1_mask_shifted_and_mask >> 48;
//-         uint16_t not_sr1_pre1_mask_shifted_and_mask_16_31 = (not_sr1_pre1_mask_shifted_and_mask & 0xFFFF00000000) >> 32;
//-         uint16_t not_sr1_pre1_mask_shifted_and_mask_32_47 = (not_sr1_pre1_mask_shifted_and_mask & 0xFFFF0000) >> 16;
//-         uint16_t not_sr1_pre1_mask_shifted_and_mask_48_63 = (not_sr1_pre1_mask_shifted_and_mask & 0xFFFF);
//- #endif
//-
//-     // the set_tx_dcc_debug_tx_seg_test macro has a check for DEBUG LEVEL, so this is only
//-     // 'instantiated' when IO_DEBUG_LEVEL >= 3
//-         set_tx_dcc_debug_tx_seg_test(0xC3BA, sr1_pre1_mask_0_15);
//-         set_tx_dcc_debug_tx_seg_test(0xC3BB, sr1_pre1_mask_16_31);
//-         set_tx_dcc_debug_tx_seg_test(0xC3BC, sr1_pre1_mask_32_47);
//-         set_tx_dcc_debug_tx_seg_test(0xC3BD, sr1_pre1_mask_48_63);
//-         set_tx_dcc_debug_tx_seg_test(0xC3BE, not_sr1_pre1_mask_0_15);
//-         set_tx_dcc_debug_tx_seg_test(0xC3C1, not_sr1_pre1_mask_16_31);
//-         set_tx_dcc_debug_tx_seg_test(0xC3C2, not_sr1_pre1_mask_32_47);
//-         set_tx_dcc_debug_tx_seg_test(0xC3C3, not_sr1_pre1_mask_48_63);
//-         set_tx_dcc_debug_tx_seg_test(0xC3C4, not_sr1_pre1_mask_shifted_0_15);
//-         set_tx_dcc_debug_tx_seg_test(0xC3C5, not_sr1_pre1_mask_shifted_16_31);
//-         set_tx_dcc_debug_tx_seg_test(0xC3C6, not_sr1_pre1_mask_shifted_32_47);
//-         set_tx_dcc_debug_tx_seg_test(0xC3C7, not_sr1_pre1_mask_shifted_48_63);
//-         set_tx_dcc_debug_tx_seg_test(0xC3C8, not_sr1_pre1_mask_shifted_and_mask_0_15);
//-         set_tx_dcc_debug_tx_seg_test(0xC3C9, not_sr1_pre1_mask_shifted_and_mask_16_31);
//-         set_tx_dcc_debug_tx_seg_test(0xC3CA, not_sr1_pre1_mask_shifted_and_mask_32_47);
//-         set_tx_dcc_debug_tx_seg_test(0xC3CB, not_sr1_pre1_mask_shifted_and_mask_48_63);
    } // shift reg initialize branch

//- #if IO_DEBUG_LEVEL >= 3
//-     sr_io_0_15 = *sr_io >> 48;
//-     sr_io_16_31 = (*sr_io & 0xFFFF00000000) >> 32;
//-     sr_io_32_47 = (*sr_io & 0xFFFF0000) >> 16;
//-     sr_io_48_63 = (*sr_io & 0xFFFF);
//- #endif
//-
//-     // the set_tx_dcc_debug_tx_seg_test macro has a check for DEBUG LEVEL, so this is only
//-     // 'instantiated' when IO_DEBUG_LEVEL >= 3
//-     set_tx_dcc_debug_tx_seg_test(0xC3CC, sr_io_0_15);
//-     set_tx_dcc_debug_tx_seg_test(0xC3CD, sr_io_16_31);
//-     set_tx_dcc_debug_tx_seg_test(0xC3CE, sr_io_32_47);
//-     set_tx_dcc_debug_tx_seg_test(0xC3D1, sr_io_48_63);
//-
//-     set_tx_dcc_debug_tx_seg_test(0xC3D2, updated);

    return updated;
} // tx_seg_test_next_sr


////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_sr_to_reg
//
// Helper function that updates the seg_regs structure from the shift register
//
// update_reg is a define that updates a field in memory with a portion of the
//   shift register
//   args to update_reg are: uint_ptr, fld_endbit, fld_width, sr, sr_endbit
//
// *_mask, *_width, and *_endbit are defines from the tx_seg_test.h file
////////////////////////////////////////////////////////////////////////////////////

void tx_seg_test_sr_to_reg(int64_t sr_i, t_tx_seg_regs* seg_regs_io)
{
    set_debug_state(0xC330); // tx_seg_test_sr_to_reg begin

    if ((sr_pre1_main_2r_mask & sr_i) | (sr_pre1_main_1r_mask & sr_i)) // pre1 main enabled
    {
        update_reg(seg_regs_io->pre1_reg, tx_nseg_pre1_hs_en_endbit - sr_pre1_main_1r_width,    sr_pre1_main_2r_width,  sr_i,
                   sr_pre1_main_2r_endbit );
        update_reg(seg_regs_io->pre1_reg, tx_nseg_pre1_hs_en_endbit,                            sr_pre1_main_1r_width,  sr_i,
                   sr_pre1_main_1r_endbit );
        seg_regs_io->pre1_reg |= tx_nseg_pre2_hs_sel_mask; // turn on selects to select main
    }
    else
    {
        update_reg(seg_regs_io->pre1_reg, tx_nseg_pre1_hs_en_endbit - sr_pre1_ffe_1r_width,     sr_pre1_ffe_2r_width,   sr_i,
                   sr_pre1_ffe_2r_endbit  );
        update_reg(seg_regs_io->pre1_reg, tx_nseg_pre1_hs_en_endbit,                            sr_pre1_ffe_1r_width,  sr_i,
                   sr_pre1_ffe_1r_endbit  );
        seg_regs_io->pre1_reg &= ~tx_nseg_pre2_hs_sel_mask; // turn off selects to select ffe
    }

    if ((sr_pre2_main_2r_mask & sr_i) | (sr_pre2_main_1r_mask & sr_i)) // pre2 main enabled
    {
        update_reg(seg_regs_io->pre2_reg, tx_nseg_pre2_hs_en_endbit - sr_pre2_main_1r_width,    sr_pre2_main_2r_width,  sr_i,
                   sr_pre2_main_2r_endbit );
        update_reg(seg_regs_io->pre2_reg, tx_nseg_pre2_hs_en_endbit,                            sr_pre2_main_1r_width,  sr_i,
                   sr_pre2_main_1r_endbit );
        seg_regs_io->pre2_reg |=
            tx_nseg_pre2_hs_sel_mask; // turn on selects to select main
    }
    else
    {
        update_reg(seg_regs_io->pre2_reg, tx_nseg_pre2_hs_en_endbit - sr_pre2_ffe_1r_width,     sr_pre2_ffe_2r_width,   sr_i,
                   sr_pre2_ffe_2r_endbit  );
        update_reg(seg_regs_io->pre2_reg, tx_nseg_pre2_hs_en_endbit,                            sr_pre2_ffe_1r_width,  sr_i,
                   sr_pre2_ffe_1r_endbit  );
        seg_regs_io->pre2_reg &=
            ~tx_nseg_pre2_hs_sel_mask; // turn off selects to select ffe
    }

    update_reg(seg_regs_io->main_0_15,  tx_nseg_main_0_15_hs_en_endbit - sr_main_1_15_1r_width, sr_main_2r_width,
               sr_i, sr_main_2r_endbit      );
    update_reg(seg_regs_io->main_0_15,  tx_nseg_main_0_15_hs_en_endbit,                         sr_main_1_15_1r_width,
               sr_i, sr_main_1_15_1r_endbit );
    update_reg(seg_regs_io->main_16_24, tx_nseg_main_16_24_hs_en_endbit,                        sr_main_16_24_1r_width,
               sr_i, sr_main_16_24_1r_endbit);
} //tx_seg_test_sr_to_reg


////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_update_seg_gcr
//
// Helper function that updates the hardware with changed contents found by
// comparing an previous structure to a new one.
// If update_all_i is true, updates all registers to the new value regardless of
//   the previous value
// FFE segment constraint:
//   for corresponding segment/reg position, if p_en and n_en,
//      then p_sel must match n_sel
//   This constraint is satisfied by examining the selects. If the prev and new
//      p selects differ or update_all_i is true, the p enables are cleared
//      before writing the n selects and enables and finally, the p selects and
//      enables. This takes advantage that the p and n selects are always the
//      same after the initial update_all.
// *_mask variables are defines from the tx_seg_test.h file
////////////////////////////////////////////////////////////////////////////////////

void tx_seg_test_update_seg_gcr( t_gcr_addr* gcr_addr_i, t_tx_seg_regs* prev_seg_regs_i,  t_tx_seg_regs* new_seg_regs_i,
                                 bool update_all_i)
{
    set_debug_state(0xC340); // tx_seg_test_update_seg_gcr begin

    if ((prev_seg_regs_i->pre1_reg ^ new_seg_regs_i->pre1_reg) || update_all_i)
    {
        if (update_all_i || (~(prev_seg_regs_i->pre1_reg ^ prev_seg_regs_i->pre1_reg)&tx_nseg_pre1_hs_sel_mask))
        {
            put_ptr_fast(gcr_addr_i, tx_pseg_pre1_hs_en_addr, 15, 0x0);
        }

        put_ptr_fast(gcr_addr_i, tx_nseg_pre1_hs_en_addr, 15, new_seg_regs_i->pre1_reg);
        put_ptr_fast(gcr_addr_i, tx_pseg_pre1_hs_en_addr, 15, new_seg_regs_i->pre1_reg);
    }

    if ((prev_seg_regs_i->pre2_reg ^ new_seg_regs_i->pre2_reg) || update_all_i)
    {
        if (update_all_i || (~(prev_seg_regs_i->pre2_reg ^ prev_seg_regs_i->pre2_reg)&tx_nseg_pre2_hs_sel_mask))
        {
            put_ptr_fast(gcr_addr_i, tx_pseg_pre2_hs_en_addr, 15, 0x0);
        }

        put_ptr_fast(gcr_addr_i, tx_nseg_pre2_hs_en_addr, 15, new_seg_regs_i->pre2_reg);
        put_ptr_fast(gcr_addr_i, tx_pseg_pre2_hs_en_addr, 15, new_seg_regs_i->pre2_reg);
    }

    if ((prev_seg_regs_i->main_0_15 ^ new_seg_regs_i->main_0_15) || update_all_i)
    {
        put_ptr_fast(gcr_addr_i, tx_nseg_main_0_15_hs_en_addr, 15, new_seg_regs_i->main_0_15);
        put_ptr_fast(gcr_addr_i, tx_pseg_main_0_15_hs_en_addr, 15, new_seg_regs_i->main_0_15);
    }

    if ((prev_seg_regs_i->main_16_24 ^ new_seg_regs_i->main_16_24) || update_all_i)
    {
        put_ptr_fast(gcr_addr_i, tx_nseg_main_16_24_hs_en_addr, 15, new_seg_regs_i->main_16_24);
        put_ptr_fast(gcr_addr_i, tx_pseg_main_16_24_hs_en_addr, 15, new_seg_regs_i->main_16_24);
    }
} // tx_seg_test_update_seg_gcr


////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_test_seg
//
// Tests one segment
////////////////////////////////////////////////////////////////////////////////////

void tx_seg_test_test_seg(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xC350); // tx_seg_test_test_seg begin

    uint8_t tst_rcv_p_n_l = 0;

    tx_seg_test_1_pattern(gcr_addr_i);
    tst_rcv_p_n_l = get_ptr_field(gcr_addr_i, tx_seg_test_status);

    if(tst_rcv_p_n_l != 2)
    {
//-         set_tx_dcc_debug_tx_seg_test(0xC3E1, tst_rcv_p_n_l);
        tx_seg_test_set_segtest_fail(gcr_addr_i); // set HW fail bit and log

        // keep these 2 lines together to follow fir setting idiom
        set_debug_state(0xC351); // tx_seg_test_test_seg fail testing for 1
        set_fir(fir_code_dft_error | fir_code_warning); // set DFT FIR bit
    }

    tx_seg_test_0_pattern(gcr_addr_i);
    tst_rcv_p_n_l = get_ptr_field(gcr_addr_i, tx_seg_test_status);

    if(tst_rcv_p_n_l != 1)
    {
//-         set_tx_dcc_debug_tx_seg_test(0xC3E2, tst_rcv_p_n_l);
        tx_seg_test_set_segtest_fail(gcr_addr_i); // set HW fail bit and log

        // keep these 2 lines together to follow fir setting idiom
        set_debug_state(0xC352); // tx_seg_test_test_seg fail testing for 0
        set_fir(fir_code_dft_error | fir_code_warning); // set DFT FIR bit
    }
} //tx_seg_test_test_seg


////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_restore
//
// Per lane restore; near complement of tx_seg_test_setup
////////////////////////////////////////////////////////////////////////////////////

void tx_seg_test_restore(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xC360); // tx_seg_test_restore begin

    put_ptr_field(gcr_addr_i, tx_pattern_sel,           0x0, fast_write);        // pg, 3 bits, no other bits in reg

    // also clears tx_rxdet_enable and tx_rxdet_pulse to 0
    put_ptr_field(gcr_addr_i, tx_pattern_enable,        0x0,
                  fast_write);        // pl, single bit, other bits in reg can or should be 0

    put_ptr_field(gcr_addr_i, tx_rctrl,                 0x0, read_modify_write); // pg, single bit, must use rmw
    put_ptr_field(gcr_addr_i, tx_seg_test_leakage_ctrl, 0x0, read_modify_write); // pl, single bit, must use rmw
} //tx_seg_test_restore


////////////////////////////////////////////////////////////////////////////////////
// shift_mask
//
// Shifts region of shift register defined by mask 1 right
//
//   args are: <sr_io>, <mask>
//
// sr and mask are expected to be in the range 0 to 2^63 - 1 so that the sign bit
//   of an int64 is not set
////////////////////////////////////////////////////////////////////////////////////

void shift_mask(int64_t* sr_io, int64_t mask_i)   // shift only the masked portion 1 right; shifting off the end
{
    *sr_io = (*sr_io & (~mask_i)) | (((mask_i & *sr_io) >> 1)&mask_i);
} // shift_mask


////////////////////////////////////////////////////////////////////////////////////
// shift_mask_up_to_end
//
// Shifts region of shift register defined by mask 1 right if lsb is not set
//
//   args are: <sr_io>, <mask>
//
// sr and mask are expected to be in the range 0 to 2^63 - 1 so that the sign bit
//   of an int64 is not set
////////////////////////////////////////////////////////////////////////////////////

void shift_mask_up_to_end(int64_t* sr_io,
                          int64_t mask_i)   // shift only the masked portion 1 right only if there is room in the masked region
{
    if ((mask_i & (-mask_i)& *sr_io) == 0) // last bit of masked region not set
    {
        shift_mask(sr_io, mask_i);
    }
} // shift_mask_up_to_end


////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_0_pattern
//
// Write pattern to 0
////////////////////////////////////////////////////////////////////////////////////

void tx_seg_test_0_pattern(t_gcr_addr* gcr_addr_i)
{
    // for 32:1 interface, bits 0 and 32 must be driven to a 0; could reduce this to two writes in that case
    // for 16:1 interface, bits 0, 16, 32, and 48 must be driven to a 0
    put_ptr_field(gcr_addr_i, tx_pattern_0_15,   0x0000,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_16_31,  0x0000,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_32_47,  0x0000,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_48_63,  0x0000,  fast_write);
} //tx_seg_test_0_pattern


////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_1_pattern
//
// Write pattern to 1
////////////////////////////////////////////////////////////////////////////////////

void tx_seg_test_1_pattern(t_gcr_addr* gcr_addr_i)
{
    // for 32:1 interface, bits 0 and 32 must be driven to a 0; could reduce this to two writes in that case
    // for 16:1 interface, bits 0, 16, 32, and 48 must be driven to a 0
    put_ptr_field(gcr_addr_i, tx_pattern_0_15,   0xFFFF,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_16_31,  0xFFFF,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_32_47,  0xFFFF,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_48_63,  0xFFFF,  fast_write);
} // tx_seg_test_1_pattern


////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_set_segtest_fail
//
// Set fail bit for lane
////////////////////////////////////////////////////////////////////////////////////

void tx_seg_test_set_segtest_fail(t_gcr_addr* gcr_addr_i)
{
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

    mem_pg_bit_set(tx_seg_test_fail); // single bit, per group reg
    ADD_LOG(DEBUG_BIST_TXSEG, gcr_addr_i, new_lane_bad);
} // tx_seg_test_set_segtest_fail
