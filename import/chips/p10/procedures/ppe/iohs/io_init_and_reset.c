/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/io_init_and_reset.c $    */
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
// *! FILENAME    : io_init_and_reset.c
// *! TITLE       :
// *! DESCRIPTION : Functions for initialize HW Regs and Resetting lanes.
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// mwh19073000 |mwh     | removed todo commints related to psave
// mwh19072600 |mwh     | removed tx_lane_pdwn and replaced with tx_bank_controls
// mwh19062100 | mwh    | Corrected spell error in rx_ab_bank_controls_alias
// mwh19062100 | mwh    | changed io_lane_power_off/on back to non-inline function
// cws19061800 |cws     | Updated PPE FW API
// mwh19061400 | mwh    | removed rx_lane_ana_pdwn and replaced with rx_a/b_bank_controls
// vbr19051501 |vbr     | HW491895: Add Latch DAC reverse control to hw_reg_init()
// vbr19060600 |vbr     | HW493155: hold_div_clks defaults to 1; using ab alias.
// vbr19060300 |vbr     | HW486157/HW492011: Added DL Clock gating to lane power up/down.
// mbs19052300 |mbs     | HW493155: Added toggling of hold_div_clks
// mbs19052200 |mbs     | Changed tx and rx clkdist_pdwn register values from 3 bits to 1
// bja19051000 |bja     | Add tx_iref_pdwn_b to power on/off functions
// vbr19042300 |vbr     | Increased lte timeout
// vbr18080200 |vbr     | Added lte timeout to hw_reg_init().
// mbs18091200 |mbs     | Fixed group address for tx_16to1 setting in io_hw_reg_init()
// vbr18072001 |vbr     | HW450195: Restructure power up/down functions.
// vbr18071200 |vbr     | HW455558: Move CDR reset from eo_main_init() to io_hw_reg_init().
// vbr18070900 |mwh     | Updated amp_timeout for 32:1.--cq454345 servo timeout
// vbr18062100 |vbr     | Removed rx_pr_reset.
// mwh18060900 |mwh     | removed rx_lane_dig_pdwn
// vbr18060600 |vbr     | Updated ctle_timeout for 32:1.
// vbr18060500 |vbr     | Updated amp_timeout for 32:1.
// vbr18022800 |vbr     | Added clearing of init_done, recal_done in reset.
// vbr17120600 |vbr     | Added clearing of tx_lane_pdwn after reset.
// vbr17120500 |vbr     | Added restoring of some mem_regs after reset.
// vbr17120100 |vbr     | Added lane reset function.
// vbr17110300 |vbr     | Added 32:1 settings.
// vbr16101700 |vbr     | Removed rx_octant_select.
// vbr16101200 |vbr     | Initial Rev
// -----------------------------------------------------------------------------

#include <stdbool.h>

#include "io_init_and_reset.h"

#include "ppe_com_reg_const_pkg.h"
#include "ppe_fw_reg_const_pkg.h"

#include "eo_bist_init_ovride.h"

//////////////////////////////////
// Initialize HW Regs
//////////////////////////////////
PK_STATIC_ASSERT(rx_ab_bank_controls_alias_width == 16);

void io_hw_reg_init(t_gcr_addr* gcr_addr)
{
    int serdes_16_to_1_mode = fw_field_get(fw_serdes_16_to_1_mode);

    // TX Registers
    set_gcr_addr_reg_id(gcr_addr, tx_group);

    // Update Settings for SerDes 32:1 (TX Group)
    if (!serdes_16_to_1_mode)   // 32:1
    {
        put_ptr_field(gcr_addr, tx_16to1,         0b0, read_modify_write); //pg
    }

    // RX Registers
    set_gcr_addr_reg_id(gcr_addr, rx_group);

    // CYA for Latch DAC reversal
#ifdef INVERT_DACS
    put_ptr_field(gcr_addr, rx_servo_reverse_latch_dac, 0b1, read_modify_write); //pg
#endif

    // Update Settings for SerDes 32:1 (RX Group)
    if (!serdes_16_to_1_mode)   // 32:1
    {
        put_ptr_field(gcr_addr, rx_16to1,         0b0, read_modify_write); //pg
        put_ptr_field(gcr_addr, rx_amp_timeout,     6, read_modify_write); //pg
        put_ptr_field(gcr_addr, rx_ctle_timeout,    6, read_modify_write); //pg
        put_ptr_field(gcr_addr, rx_lte_timeout,     7, read_modify_write); //pg
        put_ptr_field(gcr_addr, rx_bo_time,        11, read_modify_write); //pg
    }

    // If the user has bist enabled, then setup in bist mode
    if (fw_field_get(fw_bist_en))
    {
        eo_bist_init_ovride(gcr_addr);
    }

} //io_hw_reg_init


//////////////////////////////////
// Reset a lane
//////////////////////////////////
void io_reset_lane(t_gcr_addr* gcr_addr)
{
    // Power off the TX and RX lanes
    io_lane_power_off(gcr_addr);

    // TX Registers
    set_gcr_addr_reg_id(gcr_addr, tx_group);
    put_ptr_field(gcr_addr, tx_ioreset,    0b1, read_modify_write); //pl
    put_ptr_field(gcr_addr, tx_ioreset,    0b0, read_modify_write); //pl

    // RX Registers
    set_gcr_addr_reg_id(gcr_addr, rx_group);
    put_ptr_field(gcr_addr, rx_ioreset,            0b1, read_modify_write); //pl
    put_ptr_field(gcr_addr, rx_ioreset,            0b0, read_modify_write); //pl
    put_ptr_field(gcr_addr, rx_phy_dl_init_done,   0b0, read_modify_write); //pl, in datasm_mac so not reset by rx_ioreset
    put_ptr_field(gcr_addr, rx_phy_dl_recal_done,  0b0, read_modify_write); //pl, in datasm_mac so not reset by rx_ioreset

    // Power on the TX and RX lanes
    io_lane_power_on(gcr_addr);

    // Clear per-lane mem_regs (addresses 0x00-0x0F).
    int lane = get_gcr_addr_lane(gcr_addr);

    // These are consecutive addresses so we can speed this up by just incrementing after decoding the first address.
    int pl_addr_start = pl_addr(0, lane);
    int i;

    for (i = 0; i < 16; i++)
    {
        mem_regs_u16[pl_addr_start + i] = 0;
    }

} //io_reset_lane


//////////////////////////////////
// Power Up/Down
//////////////////////////////////

// Power up a group (both RX and TX)
void io_group_power_on(t_gcr_addr* gcr_addr)
{
    // TX Registers
    set_gcr_addr_reg_id(gcr_addr, tx_group);
    put_ptr_field(gcr_addr, tx_clkdist_pdwn,     0b0, read_modify_write); //pg
    put_ptr_field(gcr_addr, tx_iref_pdwn_b,      0b1, read_modify_write); //pg

    // RX Registers
    set_gcr_addr_reg_id(gcr_addr, rx_group);
    put_ptr_field(gcr_addr, rx_clkdist_pdwn,                0b0, read_modify_write); //pg
    put_ptr_field(gcr_addr, rx_ctl_datasm_clkdist_pdwn,     0b0, read_modify_write); //pg
    put_ptr_field(gcr_addr, rx_iref_pdwn_b,                 0b1, read_modify_write); //pg
} //io_group_power_on

// Power down a group (both RX and TX)
void io_group_power_off(t_gcr_addr* gcr_addr)
{
    // TX Registers
    set_gcr_addr_reg_id(gcr_addr, tx_group);
    put_ptr_field(gcr_addr, tx_clkdist_pdwn,     0b1, read_modify_write); //pg
    put_ptr_field(gcr_addr, tx_iref_pdwn_b,      0b0, read_modify_write); //pg

    // RX Registers
    set_gcr_addr_reg_id(gcr_addr, rx_group);
    put_ptr_field(gcr_addr, rx_clkdist_pdwn,                0b1, read_modify_write); //pg
    put_ptr_field(gcr_addr, rx_ctl_datasm_clkdist_pdwn,     0b1, read_modify_write); //pg
    put_ptr_field(gcr_addr, rx_iref_pdwn_b,                 0b0, read_modify_write); //pg
} //io_group_power_off

// Power up a lane (both RX and TX)
void io_lane_power_on(t_gcr_addr* gcr_addr)
{
    // TX Registers
    set_gcr_addr_reg_id(gcr_addr, tx_group);
    put_ptr_field(gcr_addr, tx_bank_controls,        0b000000, read_modify_write); //pl  power up circuit all

    // RX Registers
    set_gcr_addr_reg_id(gcr_addr, rx_group);
    put_ptr_field(gcr_addr, rx_ab_bank_controls_alias , 0b0000000000000000,  fast_write); //pl power up circuit all
    put_ptr_field(gcr_addr, rx_hold_div_clks_ab_alias,  0b00,
                  read_modify_write); //pl Deassert to sync c16 and c32 clocks (initializes to 1)
    put_ptr_field(gcr_addr, rx_dl_clk_en,               0b1,  read_modify_write); //pl Enable clock to DL
} //io_lane_power_on

// Power down a lane (both RX and TX)
void io_lane_power_off(t_gcr_addr* gcr_addr)
{
    // TX Registers
    set_gcr_addr_reg_id(gcr_addr, tx_group);
    put_ptr_field(gcr_addr, tx_bank_controls,        0b111111, read_modify_write); //pl power down circuit all

    // RX Registers
    set_gcr_addr_reg_id(gcr_addr, rx_group);
    put_ptr_field(gcr_addr, rx_dl_clk_en,               0b0,  read_modify_write); //pl Disable clock to DL
    put_ptr_field(gcr_addr, rx_hold_div_clks_ab_alias,  0b11,
                  read_modify_write); //pl Assert hold_div_clock to freeze c16 and c32
    put_ptr_field(gcr_addr, rx_ab_bank_controls_alias , 0b1111111111110000,  fast_write); //pl  power down circuit all
} //io_lane_power_off
