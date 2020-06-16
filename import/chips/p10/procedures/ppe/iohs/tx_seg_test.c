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

////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test
//   gcr_addr is set to tx_group and lane before this is called
////////////////////////////////////////////////////////////////////////////////////
void tx_seg_test(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xC300); // tx_seg_test begin

    // setup test - not all values are restored after this test
    //    set hs mode - per lane
    //    select manual pattern - per group
    //    enable pattern - per lane
    //      this has the intentional side effect of clearing tx_rxdet_enable and tx_rxdet_pulse to 0
    //    enable test receiver - per lane
    //    set tx_seg_test_leakage_ctrl to 1 - per lane
    //    clear tx_unload_clk_disable to 0 - per lane
    //
    // for each bank/sel: - all per-lane, hs controls
    //     write bank selects
    //     for each segment
    //         enable single P and N
    //         drive 1
    //         test that 1 is received
    //         drive 0
    //         test that 0 is received
    //     clear last P and N enable
    //
    // restore selected registers
    //

    tx_seg_test_setup(gcr_addr_i);

    t_banktype banktype_l = BANKTYPE_MIN;

    for (banktype_l = BANKTYPE_MIN; banktype_l <= BANKTYPE_MAX; ++banktype_l)
    {
        tx_seg_test_clear_bank(gcr_addr_i, banktype_l);
    }

    uint8_t sel_l;

    for (sel_l = 0; sel_l <= 1; ++sel_l)
    {
        for (banktype_l = BANKTYPE_MIN; banktype_l <= BANKTYPE_MAX; ++banktype_l)
        {
            if (sel_l == 1 && banktype_l > BANKTYPE_MAX_SEL)
            {
                break;
            }

            tx_seg_test_test_bank(gcr_addr_i, banktype_l, sel_l);
        }
    }

    tx_seg_test_restore(gcr_addr_i);

    set_debug_state(0xC3FF); // tx_seg_test end
} // tx_seg_test

////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_test_bank
// Tests one bank; leaves bank cleared after test
////////////////////////////////////////////////////////////////////////////////////
void tx_seg_test_test_bank(t_gcr_addr* gcr_addr_i, t_banktype banktype_i, uint8_t sel_i)
{
    set_debug_state(0xC310); // tx_seg_test_test_bank begin

    // sel = 0 ==> all banks; sel = 1 ==> pre1/2 only
    // sel bits are in the same register as enable bits for pre1/2
    // sel will be 0 after clear
    //
    // if pre1/pre2:
    //     use startbit/endbit of sel and en field to update value to be written
    //     foreach en, update value to be written using mask and put_ptr to put contents of full reg
    // else:
    //     foreach en, update field using put_ptr_field(..., fast_write)
    //
    uint16_t ffe_sel_mask;

    if (sel_i)   // load buffer with select bits; sel_i is only 1 for pre1 or pre2; pre1 and pre2 have the same field positions
    {
        ffe_sel_mask = tx_nseg_pre2_hs_sel_mask;
    }
    else
    {
        ffe_sel_mask = 0;
    }

    uint8_t bit_l;

    switch(banktype_i)
    {
        case BANKTYPE_MAIN_HIGH:
            set_debug_state(0xC311); // test main high

            for (bit_l = 0; bit_l < tx_nseg_main_16_24_hs_en_width; ++bit_l)   // bit_l follows MSB 0 convention
            {
                put_ptr_field(gcr_addr_i, tx_nseg_main_16_24_hs_en, 1 << (tx_nseg_main_16_24_hs_en_width - bit_l - 1), fast_write);
                put_ptr_field(gcr_addr_i, tx_pseg_main_16_24_hs_en, 1 << (tx_pseg_main_16_24_hs_en_width - bit_l - 1), fast_write);
                tx_seg_test_test_seg(gcr_addr_i);
            }

            break;

        case BANKTYPE_MAIN_LOW:
            set_debug_state(0xC312); // test main low

            for (bit_l = 0; bit_l < tx_nseg_main_0_15_hs_en_width; ++bit_l)   // bit_l follows MSB 0 convention
            {
                put_ptr_field(gcr_addr_i, tx_nseg_main_0_15_hs_en, 1 << (tx_nseg_main_0_15_hs_en_width - bit_l - 1), fast_write);
                put_ptr_field(gcr_addr_i, tx_pseg_main_0_15_hs_en, 1 << (tx_pseg_main_0_15_hs_en_width - bit_l - 1), fast_write);
                tx_seg_test_test_seg(gcr_addr_i);
            }

            break;

        case BANKTYPE_PRE2:
            set_debug_state(0xC313); // test pre2

            for (bit_l = 0; bit_l < tx_nseg_pre2_hs_en_width; ++bit_l)   // bit_l follows MSB 0 convention
            {
                put_ptr_fast(gcr_addr_i, tx_nseg_pre2_hs_en_addr, 15, ffe_sel_mask | (1 << (15 - tx_nseg_pre2_hs_en_startbit - bit_l)));
                put_ptr_fast(gcr_addr_i, tx_pseg_pre2_hs_en_addr, 15, ffe_sel_mask | (1 << (15 - tx_pseg_pre2_hs_en_startbit - bit_l)));
                tx_seg_test_test_seg(gcr_addr_i);
            }

            break;

        case BANKTYPE_PRE1:
            set_debug_state(0xC314); // test pre1

            for (bit_l = 0; bit_l < tx_nseg_pre1_hs_en_width; ++bit_l)   // bit_l follows MSB 0 convention
            {
                put_ptr_fast(gcr_addr_i, tx_nseg_pre1_hs_en_addr, 15, ffe_sel_mask | (1 << (15 - tx_nseg_pre1_hs_en_startbit - bit_l)));
                put_ptr_fast(gcr_addr_i, tx_pseg_pre1_hs_en_addr, 15, ffe_sel_mask | (1 << (15 - tx_pseg_pre1_hs_en_startbit - bit_l)));
                tx_seg_test_test_seg(gcr_addr_i);
            }

            break;
    } // switch banktype_i

    tx_seg_test_clear_bank(gcr_addr_i, banktype_i);
    set_debug_state(0xC31F); // tx_seg_test_test_bank end
} //tx_seg_test_test_bank

////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_test_seg
// Tests one segment
////////////////////////////////////////////////////////////////////////////////////
void tx_seg_test_test_seg(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xC330); // tx_seg_test_test_seg begin

    uint8_t tst_rcv_p_n_l = 0;

    tx_seg_test_1_pattern(gcr_addr_i);
    tst_rcv_p_n_l = get_ptr_field(gcr_addr_i, tx_seg_test_status);

    if(tst_rcv_p_n_l != 2)
    {
        set_tx_dcc_debug_tx_seg_test(0xC3D2, tst_rcv_p_n_l);
        set_debug_state(0xC331); // tx_seg_test_test_seg fail testing for 1
        tx_seg_test_set_segtest_fail(gcr_addr_i);
    }

    tx_seg_test_0_pattern(gcr_addr_i);
    tst_rcv_p_n_l = get_ptr_field(gcr_addr_i, tx_seg_test_status);

    if(tst_rcv_p_n_l != 1)
    {
        set_tx_dcc_debug_tx_seg_test(0xC3D3, tst_rcv_p_n_l);
        set_debug_state(0xC332); // tx_seg_test_test_seg fail testing for 0
        tx_seg_test_set_segtest_fail(gcr_addr_i);
    }

    set_debug_state(0xC33F); // tx_seg_test_test_seg end
} //tx_seg_test_test_seg

////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_clear_bank
// Clear ffe bank; selects are set to 0
//    since the enables are all being written to 0, we are not exposed to the case
//    where, for an ffe segment -- pre1/pre2, the same p and n segment are enabled
//    and at the same time the select is different between P and N
////////////////////////////////////////////////////////////////////////////////////
void tx_seg_test_clear_bank(t_gcr_addr* gcr_addr_i, t_banktype banktype_i)
{
    set_debug_state(0xC340); // tx_seg_test_clear_bank begin

    switch(banktype_i)
    {
        case BANKTYPE_MAIN_HIGH:
            set_debug_state(0xC341); // clear main high
            put_ptr_field(gcr_addr_i, tx_nseg_main_16_24_hs_en, 0x0, fast_write);
            put_ptr_field(gcr_addr_i, tx_pseg_main_16_24_hs_en, 0x0, fast_write);
            break;

        case BANKTYPE_MAIN_LOW:
            set_debug_state(0xC342); // clear main low
            put_ptr_field(gcr_addr_i, tx_nseg_main_0_15_hs_en, 0x0, fast_write);
            put_ptr_field(gcr_addr_i, tx_pseg_main_0_15_hs_en, 0x0, fast_write);
            break;

        case BANKTYPE_PRE2:
            set_debug_state(0xC343); // clear pre2
            put_ptr_field(gcr_addr_i, tx_nseg_pre2_hs_en, 0x0, fast_write);
            put_ptr_field(gcr_addr_i, tx_pseg_pre2_hs_en, 0x0, fast_write);
            break;

        case BANKTYPE_PRE1:
            set_debug_state(0xC344); // clear pre1
            put_ptr_field(gcr_addr_i, tx_nseg_pre1_hs_en, 0x0, fast_write);
            put_ptr_field(gcr_addr_i, tx_pseg_pre1_hs_en, 0x0, fast_write);
            break;
    } // switch banktype_i

    set_debug_state(0xC34F); // tx_seg_test_clear_bank end
} //tx_seg_test_clear_bank

////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_setup
// Per lane setup
////////////////////////////////////////////////////////////////////////////////////
void tx_seg_test_setup(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xC350); // tx_seg_test_setup begin
    put_ptr_field(gcr_addr_i, tx_force_hs_ffe,          0x1, fast_write);        // pl, single bit, no other bits in reg
    put_ptr_field(gcr_addr_i, tx_pattern_sel,           0x1, fast_write);        // pg, 3 bits, no other bits in reg
    put_ptr_field(gcr_addr_i, tx_pattern_enable,        0x1,
                  fast_write);        // pl, single bit, other bits in reg can or should be 0
    // also clears tx_rxdet_enable and tx_rxdet_pulse to 0
    put_ptr_field(gcr_addr_i, tx_rctrl,                 0x1, read_modify_write); // pg, single bit, must use rmw
    put_ptr_field(gcr_addr_i, tx_seg_test_leakage_ctrl, 0x1, read_modify_write); // pl, single bit, must use rmw

    // in p10_tx_testmode_controls.xlsx, DD1 TX50 Mode Controls tab, Single Segment Test col; but might not be absolutely required
    put_ptr_field(gcr_addr_i, tx_unload_clk_disable   , 0x0, read_modify_write); // pl, single bit, must use rmw

    set_debug_state(0xC35F); // tx_seg_test_setup end
} //tx_seg_test_setup


////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_0_pattern
// Write pattern to 0
////////////////////////////////////////////////////////////////////////////////////
void tx_seg_test_0_pattern(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xC360); // tx_seg_test_0_pattern begin
    // for 32:1 interface, bits 0 and 32 must be driven to a 0; could reduce this to two writes in that case
    // for 16:1 interface, bits 0, 16, 32, and 48 must be driven to a 0
    put_ptr_field(gcr_addr_i, tx_pattern_0_15,   0x0000,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_16_31,  0x0000,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_32_47,  0x0000,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_48_63,  0x0000,  fast_write);
    set_debug_state(0xC36F); // tx_seg_test_0_pattern end
} //tx_seg_test_0_pattern

////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_1_pattern
// Write pattern to 1
////////////////////////////////////////////////////////////////////////////////////
void tx_seg_test_1_pattern(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xC370); // tx_seg_test_1_pattern begin
    // for 32:1 interface, bits 0 and 32 must be driven to a 0; could reduce this to two writes in that case
    // for 16:1 interface, bits 0, 16, 32, and 48 must be driven to a 0
    put_ptr_field(gcr_addr_i, tx_pattern_0_15,   0xFFFF,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_16_31,  0xFFFF,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_32_47,  0xFFFF,  fast_write);
    put_ptr_field(gcr_addr_i, tx_pattern_48_63,  0xFFFF,  fast_write);
    set_debug_state(0xC37F); // tx_seg_test_1_pattern end
} //tx_seg_test_1_pattern

////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_set_segtest_fail
// Set fail bit for lane and DFT fir bit
////////////////////////////////////////////////////////////////////////////////////
void tx_seg_test_set_segtest_fail(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xC380); // tx_seg_test_set_segtest_fail begin
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
    set_fir(fir_code_dft_error | fir_code_warning); // set DFT FIR bit
    ADD_LOG(DEBUG_BIST_TXSEG, gcr_addr_i, new_lane_bad);
    set_debug_state(0xC38F); // tx_seg_test_set_segtest_fail end
} // tx_seg_test_set_segtest_fail

////////////////////////////////////////////////////////////////////////////////////
// tx_seg_test_restorex
// Per lane restore
////////////////////////////////////////////////////////////////////////////////////
void tx_seg_test_restore(t_gcr_addr* gcr_addr_i)
{
    set_debug_state(0xC390); // tx_seg_test_restore begin
    put_ptr_field(gcr_addr_i, tx_pattern_sel,           0x0, fast_write);        // pg, 3 bits, no other bits in reg
    put_ptr_field(gcr_addr_i, tx_pattern_enable,        0x0,
                  fast_write);        // pl, single bit, other bits in reg can or should be 0
    // also clears tx_rxdet_enable and tx_rxdet_pulse to 0
    put_ptr_field(gcr_addr_i, tx_rctrl,                 0x0, read_modify_write); // pg, single bit, must use rmw
    put_ptr_field(gcr_addr_i, tx_seg_test_leakage_ctrl, 0x0, read_modify_write); // pl, single bit, must use rmw

    set_debug_state(0xC39F); // tx_seg_test_restore end
} //tx_seg_test_restore
