/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/io_init_and_reset.c $    */
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
// vbr20061501 |vbr     | HW533452: Increase CDR phase_step to 0.296875 for 32G (and 50G)
// vbr20061500 |vbr     | HW532468: Peak2 Servo Op should use H3 instead of H4 for 32G
// vbr20061600 |vbr     | HW532326: Set Flwheel range based on whether spread is enabled or not
// mbs20061601 |mbs     | HW532825 - SEt rx_pr_psave_val_ena_a/b=1 during io_lane_power_off to prevent flywheel snapshot hang
// mwh20052801 |mwh     | Change comments that were did not make sense
// mwh20052800 |mwh     | Add in ( get_chip_id()  == CHIP_ID_ZA) for ZA DD1 -- no using  MAJOR_EC_??? at this time
// mwh20052700 |mwh     | Add in if else for code so work with both DD1 and DD2 p10 CHIP_ID_P10  ) && ( get_major_ec() == MAJOR_EC_DD2 ))
// gap20052300 |gap     | Change for CQ521314 -- return gcr addr to rx_group
// mwh20052000 |mwh     | Change for CQ521314 -- 20 to 0x20
// mwh20051300 |mwh     | Change for CQ521314 -- dcc circuit is not be powered up
// mbs20050700 |mbs     | Updated lte timeout to 8
// mbs20042102 |mbs     | Restored tx_16to1 bit and 32:1 settings for p10 dd1 mode
// mbs20030400 |mbs     | Removed tx_16to1 mode bit
// mbs20030400 |mbs     | Removed 32:1 content (rx_16to1 now selects 8:1 mode for DL data path only)
// vbr20030500 |vbr     | HW523782/HW523779: leave lock_filter at default (2) for all cases
// mwh20021300 |mwh     | Add in code to check if req=sts and other stuff before power off lane -- fir was add
// mbs20051300 |mbs     | HW530311: Updated io_lane_power_off procedure to flush psave state machine req and sts back to 0
// vbr20021000 |vbr     | HW521651: Configure CDR lock_filter in hw_reg_init and lane_reset based on fw_spread_en
// bja20011600 |bja     | Override rx_clk_phase_select reset val in reg init and lane reset
// bja20011701 |bja     | HW519449: Reset flywheel for both banks
// bja20011700 |bja     | HW519449: Reset flywheel and force phase accumulator in lane reset
// bja19112100 |bja     | Write rx_berpl_count_en=0 in power off
// mbs19111402 |mbs     | Removed io_lane_power_on from io_reset_lane
// vbr19112000 |vbr     | HW476919: Set default psave flywheel snapshot lanes
// mbs19111100 |mbs     | Added enable_dl_clk flag to io_lane_power_on (HW508366)
// vbr19102400 |vbr     | Increased 32:1 peak timeout for mesa fails after dpipe changes
// mwh19101400 |mwh     | Change stagger for tx lanes per cq5090000
// mwh19100800 |mwh     | change stagger order per Glen, and put in if to prevent powering on/off
//             |        | same lane back to back (HW506505)
// mbs19091000 |mbs     | Added rx and tx iodom reset after power up (HW504112)
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

#include "ppe_img_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"
#include "ppe_fw_reg_const_pkg.h"

#include "eo_bist_init_ovride.h"
#include "eo_common.h"

// (BJA 1/16/20) Per Glen W, setting 0b11 is used for timing analysis.
// The scan init (RegDef) value is 0b00, but hardware is currently frozen.
#define RX_CLK_PHASE_SELECT_RESET_VALUE 0b01

// CDR Settings: rx_pr_phase_step (KP) = 0.296875; rx_pr_fw_inertia_amt (KI) = 4
#define CDR_KP_RESET_VALUE 0b0100110
#define CDR_KI_RESET_VALUE 0b0100


//////////////////////////////////
// Initialize HW Regs
//////////////////////////////////
PK_STATIC_ASSERT(rx_ab_bank_controls_alias_width == 16);
PK_STATIC_ASSERT(rx_pr_ki_kp_full_reg_width == 16);

void io_hw_reg_init(t_gcr_addr* gcr_addr)
{
    int serdes_16_to_1_mode = fw_field_get(fw_serdes_16_to_1_mode);
    int l_vio_volt          = img_field_get(ppe_vio_volts);
    int num_lanes           = fw_field_get(fw_num_lanes);

    set_gcr_addr_reg_id(gcr_addr, tx_group);
    int l_data_rate         = mem_pg_field_get(ppe_data_rate);

    // TX Registers
    // Restore if TX regs are added again // set_gcr_addr_reg_id(gcr_addr, tx_group);

    // Update Settings for SerDes 32:1 (TX Group)
    if (   ( get_chip_id()  == CHIP_ID_P10  )
           && ( get_major_ec() == MAJOR_EC_DD1 )
           && !serdes_16_to_1_mode               )   // 32:1 -- P10 DD1 only
    {
        put_ptr_field(gcr_addr, tx_16to1,         0b0, read_modify_write); //pg
    }

    put_ptr_field(gcr_addr, tx_iref_clock_dac, 0x2, read_modify_write);
    put_ptr_field(gcr_addr, tx_iref_vset_dac , l_vio_volt, read_modify_write);

    set_gcr_addr_lane(gcr_addr, bcast_all_lanes);
    int l_tx_boost_en = (mem_pg_field_get(ppe_channel_loss) <= 1) ? 0x01 : 0x00;
    put_ptr_field(gcr_addr, tx_boost_hs_en , l_tx_boost_en, read_modify_write);
    put_ptr_field(gcr_addr, tx_d2_ctrl       , l_data_rate, read_modify_write);
    put_ptr_field(gcr_addr, tx_d2_div_ctrl   , l_data_rate, read_modify_write);
    set_gcr_addr_lane(gcr_addr, 0);

    // RX Registers
    set_gcr_addr_reg_id(gcr_addr, rx_group);

    // CYA for Latch DAC reversal
#ifdef INVERT_DACS
    put_ptr_field(gcr_addr, rx_servo_reverse_latch_dac, 0b1, read_modify_write); //pg
#endif

    // Bump lte_timeout up to 8 since 7 fails sometimes with PRBS15
    put_ptr_field(gcr_addr, rx_lte_timeout,     8, read_modify_write); //pg

    // Update Settings for SerDes 8:1 (RX Group)
    if (!serdes_16_to_1_mode)   // 8:1 (to the DL only)   (32:1 for  P10 DD1)
    {
        put_ptr_field(gcr_addr, rx_16to1,         0b0, read_modify_write); //pg

        if (   ( get_chip_id()  == CHIP_ID_P10  )
               && ( get_major_ec() == MAJOR_EC_DD1 ) )   // P10 DD1 only
        {
            put_ptr_field(gcr_addr, rx_amp_timeout,     6, read_modify_write); //pg
            put_ptr_field(gcr_addr, rx_ctle_timeout,    7, read_modify_write); //pg
            put_ptr_field(gcr_addr, rx_bo_time,        11, read_modify_write); //pg
        }
    }

    // HW532468: Use H3 (0b01) for Peak2 servo @ 32G (16:1, 8:1).  Use H4 (0b10) for Peak2 servo @ 50G (32:1)
    //int peak2_h_sel = ( !serdes_16_to_1_mode && (get_chip_id() == CHIP_ID_P10) && (get_major_ec() == MAJOR_EC_DD1) ) ? 0b10 : 0b01;
    //put_ptr_field(gcr_addr, rx_ctle_peak2_h_sel, peak2_h_sel, read_modify_write); //pg

    // peak2_h_sel   (> 2 is for future speeds)
    if (l_data_rate <= 2)
    {
        put_ptr_field(gcr_addr, rx_ctle_peak2_h_sel, 0x1, read_modify_write); // use H3 for peak2
    }
    else
    {
        put_ptr_field(gcr_addr, rx_ctle_peak2_h_sel, 0x2, read_modify_write); // use H4 for peak2
    }

    // CWS CHANGED THIS FROM 6 -> 8
    put_ptr_field(gcr_addr, rx_loff_timeout, 8, read_modify_write);

    put_ptr_field(gcr_addr, rx_iref_clock_dac  , 0x2, read_modify_write);
    put_ptr_field(gcr_addr, rx_iref_data_dac   , 0x2, read_modify_write);
    put_ptr_field(gcr_addr, rx_iref_vset_dac   , l_vio_volt, read_modify_write);


    // frequency adjust
    uint16_t l_rx_freq_adj = (l_data_rate == 0) ? 0x01 : 0x0D;
    set_gcr_addr_lane(gcr_addr, bcast_all_lanes);
    put_ptr_field(gcr_addr, rx_freq_adjust, l_rx_freq_adj, read_modify_write);
    set_gcr_addr_lane(gcr_addr, 0);

    // Set up the flywheel snapshot routing for psave (HW476919)
    // Each chiplet is split evenly into two links.
    // In each link, the lowest numbered lane is used as the flywheel source.
    // The default register settings are rx_psave_fw_val_sel=0b00 and rx_psave_fw_valX_sel=0 so only some lanes need to be updated.
    // The lanes in the lower link continue to select mux0 which defaults to selecting lane 0.
    // The lanes in the upper link are configured to select mux1 which is configured to select the lowest lane in the link.
    int source_lane = num_lanes / 2;
    put_ptr_field(gcr_addr, rx_psave_fw_val1_sel, source_lane, read_modify_write); //pg
    int i;

    for (i = source_lane; i < num_lanes; i++)
    {
        set_gcr_addr_lane(gcr_addr, i);
        put_ptr_field(gcr_addr, rx_psave_fw_val_sel, 0b01, read_modify_write); //pl
    }

    // Update CDR Settings - must be done before powering on the lane.
    // These can be done with a RMW broadcasts because all lanes in a chiplet will have the same values for the CDR mode bits
    // and they are in registers separate from any other mode bits that may be different per-lane.
    // Additionally, hw_reg_init is only called when all lanes are powered down, so changing the mode bits on all lanes is safe.
    set_gcr_addr_lane(gcr_addr, bcast_all_lanes);

    // KI/KP Settings (coarse mode is disabled by default)
    int ki_kp_full_reg_val =
        (CDR_KI_RESET_VALUE << rx_pr_fw_inertia_amt_shift) |
        (CDR_KP_RESET_VALUE << rx_pr_phase_step_shift);
    put_ptr_field(gcr_addr, rx_pr_ki_kp_full_reg, ki_kp_full_reg_val, fast_write); //pl

    // Different settings when Spread Spectrum Clocking (SSC) is disabled
    if ( !fw_field_get(fw_spread_en) )
    {
        // HW532326: Set rx_pr_fw_range_sel=1 (by setting rx_pr_fw_inertia_amt_coarse=15) when when spread is disabled.
        // This reduces the max flywheel correction and increases the Bump UI step size.
        put_ptr_field(gcr_addr, rx_pr_fw_inertia_amt_coarse, 15, read_modify_write); //pl
    }

    // Set the RX clock phase offset (data and clock relationship)
    // for all lanes. Done in PPE code because hardware is frozen.
    for (i = 0; i < num_lanes; ++i)
    {
        set_gcr_addr_lane(gcr_addr, i);
        put_ptr_field(gcr_addr, rx_clk_phase_select, RX_CLK_PHASE_SELECT_RESET_VALUE, read_modify_write);
    }

    // If the user has bist enabled, then setup in bist mode
    if (fw_field_get(fw_bist_en))
    {
        eo_bist_init_ovride(gcr_addr);
    }

    //CQ521314 never turn on tx_bank_controls_dc(0) = dcc_comp_en_dc
    //only change for DD2 in not DD2 keep what default is in Regdef
    if ((( get_chip_id()  == CHIP_ID_P10) && ( get_major_ec() == MAJOR_EC_DD2 )) || ( get_chip_id()  == CHIP_ID_ZA) )
    {
        set_gcr_addr_reg_id(gcr_addr, tx_group);
        put_ptr_field(gcr_addr, tx_psave_subset0,                0b100000, read_modify_write); //pg
        put_ptr_field(gcr_addr, tx_psave_subset1,                0b100100, read_modify_write); //pg
        set_gcr_addr_reg_id(gcr_addr, rx_group);
    }

} //io_hw_reg_init


////////////////////////////////////////////////////////////////////
// Reset a lane
// HW508366: This function does not power the lane back on
////////////////////////////////////////////////////////////////////
void io_reset_lane(t_gcr_addr* gcr_addr)
{
    // Power off the TX and RX lanes
    io_lane_power_off(gcr_addr);

    // TX Registers
    set_gcr_addr_reg_id(gcr_addr, tx_group);
    put_ptr_field(gcr_addr, tx_ioreset,    0b1, read_modify_write); //pl
    put_ptr_field(gcr_addr, tx_ioreset,    0b0, read_modify_write); //pl
    int l_tx_boost_en = (mem_pg_field_get(ppe_channel_loss) <= 1) ? 0x01 : 0x00;
    put_ptr_field(gcr_addr, tx_boost_hs_en , l_tx_boost_en, read_modify_write);

    // Tx CML IREF clock control
    int l_data_rate = mem_pg_field_get(ppe_data_rate);
    put_ptr_field(gcr_addr, tx_d2_ctrl    , l_data_rate, read_modify_write);
    put_ptr_field(gcr_addr, tx_d2_div_ctrl, l_data_rate, read_modify_write);

    // RX Registers
    set_gcr_addr_reg_id(gcr_addr, rx_group);
    put_ptr_field(gcr_addr, rx_ioreset,            0b1, read_modify_write); //pl
    put_ptr_field(gcr_addr, rx_ioreset,            0b0, read_modify_write); //pl
    put_ptr_field(gcr_addr, rx_phy_dl_init_done,   0b0, read_modify_write); //pl, in datasm_mac so not reset by rx_ioreset
    put_ptr_field(gcr_addr, rx_phy_dl_recal_done,  0b0, read_modify_write); //pl, in datasm_mac so not reset by rx_ioreset

    // HW476919: Reconfigure the psave flywheel snapshot 4:1 mux select if lane is in the upper link (see io_hw_reg_init)
    int num_lanes = fw_field_get(fw_num_lanes);
    int lane      = get_gcr_addr_lane(gcr_addr);

    if (lane >= (num_lanes / 2))
    {
        put_ptr_field(gcr_addr, rx_psave_fw_val_sel, 0b01, read_modify_write); //pl
    }

    // Update CDR Settings - must be done before powering on the lane.
    // KI/KP Settings (coarse mode is disabled by default)
    int ki_kp_full_reg_val =
        (CDR_KI_RESET_VALUE << rx_pr_fw_inertia_amt_shift) |
        (CDR_KP_RESET_VALUE << rx_pr_phase_step_shift);
    put_ptr_field(gcr_addr, rx_pr_ki_kp_full_reg, ki_kp_full_reg_val, fast_write); //pl

    // Different settings when Spread Spectrum Clocking (SSC) is disabled
    if ( !fw_field_get(fw_spread_en) )
    {
        put_ptr_field(gcr_addr, rx_pr_fw_inertia_amt_coarse, 15, read_modify_write); //pl
    }

    // Reset the RX clock phase offset (data and clock relationship)
    // for given lane. Hardware reset value is incorrect but frozen.
    put_ptr_field(gcr_addr, rx_clk_phase_select, RX_CLK_PHASE_SELECT_RESET_VALUE, read_modify_write);



    // frequency adjust
    int l_rx_freq_adj = (l_data_rate == 0) ? 0x01 : 0x0D;
    put_ptr_field(gcr_addr, rx_freq_adjust, l_rx_freq_adj, read_modify_write);

    // Clear per-lane mem_regs (addresses 0x00-0x0F).
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
void io_lane_power_on(t_gcr_addr* gcr_addr, bool enable_dl_clk)
{
    // TX Registers
    //"Power down pins, 0=dcc_comp, 1=tx_pdwn, 2=d2, 3=unused, 4=unused, 5=unused"
    //Need to be staggered
    set_gcr_addr_reg_id(gcr_addr, tx_group);

    //Check that tx psave is quiesced and that req is not = 1 will set fir
    check_for_txpsave_req_sts(gcr_addr);


    int tx_bank_controls_int = get_ptr_field (gcr_addr, tx_bank_controls);

    //tx_psave_subset5 111110 //= not used
    //tx_psave_subset4 111100 //= not used
    //CQ521314 bit 5 of bank_controls is not going power on fifo ptr or not 0 = on 1 = off
    //CQ521314 dcc_comp is to be turned off now all time.

    if ((( get_chip_id()  == CHIP_ID_P10  ) && ( get_major_ec() == MAJOR_EC_DD2 )) || ( get_chip_id()  == CHIP_ID_ZA) )
    {
        //start if DD2
        if(tx_bank_controls_int != 0x20)
        {
            put_ptr_field(gcr_addr, tx_bank_controls, 0b110100, read_modify_write); //pl tx_bank_controls_dc(2) = d2_en_dc
            put_ptr_field(gcr_addr, tx_bank_controls, 0b100100, read_modify_write); //pl tx_bank_controls_dc(1) = txc_pwrdwn_dc
            put_ptr_field(gcr_addr, tx_bank_controls, 0b100100, read_modify_write); //pl tx_bank_controls_dc(0) = dcc_comp_en_dc
            put_ptr_field(gcr_addr, tx_bank_controls, 0b100000,
                          read_modify_write); //pl tx_bank_controls_dc(3) = txr_txc_drv_en_p/n_dc
        }
    }//end if DD2
    else
    {
        //DD1 P10
        if(tx_bank_controls_int != 0)
        {
            put_ptr_field(gcr_addr, tx_bank_controls, 0b110100, read_modify_write); //pl tx_bank_controls_dc(2) = d2_en_dc
            put_ptr_field(gcr_addr, tx_bank_controls, 0b100100, read_modify_write); //pl tx_bank_controls_dc(1) = txc_pwrdwn_dc
            put_ptr_field(gcr_addr, tx_bank_controls, 0b000100, read_modify_write); //pl tx_bank_controls_dc(0) = dcc_comp_en_dc
            put_ptr_field(gcr_addr, tx_bank_controls, 0b000000,
                          read_modify_write); //pl tx_bank_controls_dc(3) = txr_txc_drv_en_p/n_dc
        }
    }//end if--DD1


    // reset tx io domain - HW504112
    put_ptr_field(gcr_addr, tx_iodom_ioreset,        0b1, read_modify_write); //pl  reset tx io domain
    put_ptr_field(gcr_addr, tx_iodom_ioreset,        0b0, read_modify_write); //pl  reset tx io domain

    // RX Registers
    //power down pins, 0=PR64 and C2DIV, 1=CML2CMOS_NBIAS and MINI_PR and IQGEN, 2=CML2CMOS_EDG, 3=CML2CMOS_DAT, 4=PR64 and C2DIV, 5=VDAC"
    //Bank A and B have be staggered also
    set_gcr_addr_reg_id(gcr_addr, rx_group);

    //Check that rx psave is quiesced and that req is not = 1 will set fir
    //If the powerdown lane is asked for but we are doing a init or recal than that a no-no see Mike S -- CQ522215
    check_for_rxpsave_req_sts(gcr_addr);


    int rx_b_controls_int = get_ptr_field (gcr_addr, rx_b_bank_controls);

    if(rx_b_controls_int != 0)
    {
        put_ptr_field(gcr_addr, rx_b_bank_controls , 0b011111, read_modify_write); //pl.MINI_PR_PDWN( ABANK_CLK1_PDWN )
        put_ptr_field(gcr_addr, rx_b_bank_controls , 0b001111, read_modify_write); //pl.IQGEN_PDWN( ABANK_CLK2_PDWN )
        put_ptr_field(gcr_addr, rx_b_bank_controls , 0b001011, read_modify_write); //pl.CML2CMOS_DATA1_PDWN( ABANK_CLK4_PDWN )
        put_ptr_field(gcr_addr, rx_b_bank_controls , 0b001001, read_modify_write); //pl.CML2CMOS_DATA0_PDWN( ABANK_CLK5_PDWN )
        put_ptr_field(gcr_addr, rx_b_bank_controls , 0b001000, read_modify_write); //pl.CTLE_PDWN( ABANK_DATA_PDWN )
        put_ptr_field(gcr_addr, rx_b_bank_controls , 0b000000, read_modify_write); //pl.CML2CMOS_EDGE0_PDWN( ABANK_CLK3_PDWN )
    }

    int rx_a_controls_int = get_ptr_field (gcr_addr, rx_a_bank_controls);

    if(rx_a_controls_int != 0)
    {
        put_ptr_field(gcr_addr, rx_a_bank_controls , 0b011111, read_modify_write); //pl.MINI_PR_PDWN( ABANK_CLK1_PDWN )
        put_ptr_field(gcr_addr, rx_a_bank_controls , 0b001111, read_modify_write); //pl.IQGEN_PDWN( ABANK_CLK2_PDWN )
        put_ptr_field(gcr_addr, rx_a_bank_controls , 0b001011, read_modify_write); //pl.CML2CMOS_DATA1_PDWN( ABANK_CLK4_PDWN )
        put_ptr_field(gcr_addr, rx_a_bank_controls , 0b001001, read_modify_write); //pl.CML2CMOS_DATA0_PDWN( ABANK_CLK5_PDWN )
        put_ptr_field(gcr_addr, rx_a_bank_controls , 0b001000, read_modify_write); //pl.CTLE_PDWN( ABANK_DATA_PDWN )
        put_ptr_field(gcr_addr, rx_a_bank_controls , 0b000000, read_modify_write); //pl.CML2CMOS_EDGE0_PDWN( ABANK_CLK3_PDWN )
    }


    put_ptr_field(gcr_addr, rx_hold_div_clks_ab_alias,  0b00,
                  read_modify_write); //pl Deassert to sync c16 and c32 clocks (initializes to 1)

    // (HW519449) Reset flywheel of both banks. Force phase accumulator of bank A.
    // The idea is to shake up the phase relationship between the bank clocks.
    // By doing this, the dl_clk_sel sync lats in the custom should flush out
    // their initial or left-over state.
    put_ptr_field(gcr_addr, rx_pr_fw_reset_ab_alias, 0b11, read_modify_write);
    put_ptr_field(gcr_addr, rx_pr_fw_reset_ab_alias, 0b00, read_modify_write);
    put_ptr_field(gcr_addr, rx_pr_phase_force_cmd_a_alias, 0b10000000, fast_write);
    put_ptr_field(gcr_addr, rx_pr_phase_force_cmd_a_alias, 0b10100000, fast_write);
    put_ptr_field(gcr_addr, rx_pr_phase_force_cmd_a_alias, 0b11000000, fast_write);
    put_ptr_field(gcr_addr, rx_pr_phase_force_cmd_a_alias, 0b11100000, fast_write);
    put_ptr_field(gcr_addr, rx_pr_phase_force_cmd_a_alias, 0b10000000, fast_write);

    if ( enable_dl_clk )
    {
        put_ptr_field(gcr_addr, rx_dl_clk_en,             0b1,
                      read_modify_write); //pl Enable clock to DL if specified (HW508366)
    }

    // reset rx io domain  - HW504112
    put_ptr_field(gcr_addr, rx_iodom_ioreset,        0b1, read_modify_write); //pl  reset rx io domain
    put_ptr_field(gcr_addr, rx_iodom_ioreset,        0b0, read_modify_write); //pl  reset rx io domain

    // -- HW532825 - Restore flywheel snapshot operation (set to 1 during io_lane_power_off)
    put_ptr_field(gcr_addr, rx_pr_psave_val_ena_a               , 0b0     , read_modify_write);//pl
    put_ptr_field(gcr_addr, rx_pr_psave_val_ena_b               , 0b0     , read_modify_write);//pl
} //io_lane_power_on

// Power down a lane (both RX and TX)
void io_lane_power_off(t_gcr_addr* gcr_addr)
{
    // TX Registers
    set_gcr_addr_reg_id(gcr_addr, tx_group);

    //Check that tx psave is quiesced and that req is not = 1 will set fir
    check_for_txpsave_req_sts(gcr_addr);

    int tx_bank_controls_int = get_ptr_field (gcr_addr, tx_bank_controls);

//CQ521314 never turn on tx_bank_controls_dc(0) = dcc_comp_en_dc
    if(tx_bank_controls_int != 0x3F)
    {
        if ((( get_chip_id()  == CHIP_ID_P10  ) && ( get_major_ec() == MAJOR_EC_DD2 )) || ( get_chip_id()  == CHIP_ID_ZA))
        {
            //start if
            put_ptr_field(gcr_addr, tx_bank_controls, 0b100100,
                          read_modify_write); //pl tx_bank_controls_dc(3) = txr_txc_drv_en_p/n_dc
            put_ptr_field(gcr_addr, tx_bank_controls, 0b100100, read_modify_write); //pl tx_bank_controls_dc(0) = dcc_comp_en_dc
            put_ptr_field(gcr_addr, tx_bank_controls, 0b110100, read_modify_write); //pl tx_bank_controls_dc(1) = txc_pwrdwn_dc
            put_ptr_field(gcr_addr, tx_bank_controls, 0b111111, read_modify_write); //pl tx_bank_controls_dc(2) = d2_en_dc
            //tx_psave_subset5 111110 //= not used
            //tx_psave_subset6 111111 //= iot used
        }//end if
        else
        {
            //start else DD1
            put_ptr_field(gcr_addr, tx_bank_controls, 0b000100,
                          read_modify_write); //pl tx_bank_controls_dc(3) = txr_txc_drv_en_p/n_dc
            put_ptr_field(gcr_addr, tx_bank_controls, 0b100100, read_modify_write); //pl tx_bank_controls_dc(0) = dcc_comp_en_dc
            put_ptr_field(gcr_addr, tx_bank_controls, 0b110100, read_modify_write); //pl tx_bank_controls_dc(1) = txc_pwrdwn_dc
            put_ptr_field(gcr_addr, tx_bank_controls, 0b111111, read_modify_write); //pl tx_bank_controls_dc(2) = d2_en_dc
        }//end else
    }

    // RX Registers
    set_gcr_addr_reg_id(gcr_addr, rx_group);
    put_ptr_field(gcr_addr, rx_berpl_count_en, 0b0, read_modify_write); // pl disable BERM logic
    put_ptr_field(gcr_addr, rx_dl_clk_en,               0b0,  read_modify_write); //pl Disable clock to DL
    put_ptr_field(gcr_addr, rx_hold_div_clks_ab_alias,  0b11,
                  read_modify_write); //pl Assert hold_div_clock to freeze c16 and c32

    //CQ HW530311 -- When we power off a lane manually, make sure the RX psave state machine
    // is flushed into an all zeros state for that lane.  That implies potentially turning the
    // power back on for the alt bank, before proceeding to turn it off again.
    //
    // However, this also enables the CDR and a CDR lock timer, which we don't want.
    // Disabling the psave cdr state machine will disable the timer but not the CDR itself.
    // Therefore we must also turn off the CDR manually here.
    put_ptr_field(gcr_addr, rx_psave_cdr_disable_sm              , 0b1     , read_modify_write);//pl
    put_ptr_field(gcr_addr,  rx_psave_cdrlock_mode_sel           , 0b11    , read_modify_write);//pl
    put_ptr_field(gcr_addr, rx_pr_edge_track_cntl_ab_alias      , 0b000000,
                  read_modify_write);//pl -- HW532825 - Need CDR disabled for the flywheel valid chicken switch to work
    put_ptr_field(gcr_addr, rx_pr_psave_val_ena_a               , 0b1     ,
                  read_modify_write);//pl -- HW532825 - Make sure flywheel snapshot cannot make us hang
    put_ptr_field(gcr_addr, rx_pr_psave_val_ena_b               , 0b1     ,
                  read_modify_write);//pl -- HW532825 - Make sure flywheel snapshot cannot make us hang
    put_ptr_field(gcr_addr, rx_psave_req_alt                     , 0b0     , read_modify_write);//pl
    int psave_sts = 1;

    while (psave_sts)
    {
        psave_sts = get_ptr_field(gcr_addr, rx_psave_sts_alt);
    }

    put_ptr_field(gcr_addr, rx_pr_edge_track_cntl_ab_alias       , 0b000000, read_modify_write);//pl
    put_ptr_field(gcr_addr, rx_psave_cdr_disable_sm              , 0b0     , read_modify_write);//pl
    put_ptr_field(gcr_addr,  rx_psave_cdrlock_mode_sel           , 0b00    , read_modify_write);//pl

    //Check that rx psave is quiesced and that req is not = 1 will set fir
    //If the powerdown lane is asked for but we are doing a init or recal than that a no-no see Mike S -- CQ522215
    check_for_rxpsave_req_sts(gcr_addr);

    int rx_b_bank_controls_int = get_ptr_field (gcr_addr, rx_b_bank_controls);

    if(rx_b_bank_controls_int != 0x3F)
    {
        put_ptr_field(gcr_addr, rx_b_bank_controls , 0b001000, read_modify_write ); //pl.CML2CMOS_EDGE0_PDWN( ABANK_CLK3_PDWN )
        put_ptr_field(gcr_addr, rx_b_bank_controls , 0b001001, read_modify_write ); //pl.CTLE_PDWN( ABANK_DATA_PDWN )
        put_ptr_field(gcr_addr, rx_b_bank_controls , 0b001011, read_modify_write ); //pl.CML2CMOS_DATA0_PDWN( ABANK_CLK5_PDWN )
        put_ptr_field(gcr_addr, rx_b_bank_controls , 0b001111, read_modify_write ); //pl.CML2CMOS_DATA1_PDWN( ABANK_CLK4_PDWN )
        put_ptr_field(gcr_addr, rx_b_bank_controls , 0b011111, read_modify_write ); //pl.IQGEN_PDWN( ABANK_CLK2_PDWN )
        put_ptr_field(gcr_addr, rx_b_bank_controls , 0b111111, read_modify_write ); //pl.MINI_PR_PDWN( ABANK_CLK1_PDWN )
    }


    int rx_a_bank_controls_int = get_ptr_field (gcr_addr, rx_a_bank_controls);

    if(rx_a_bank_controls_int != 0x3F)
    {
        put_ptr_field(gcr_addr, rx_a_bank_controls , 0b001000, read_modify_write ); //pl.CML2CMOS_EDGE0_PDWN( ABANK_CLK3_PDWN )
        put_ptr_field(gcr_addr, rx_a_bank_controls , 0b001001, read_modify_write ); //pl.CTLE_PDWN( ABANK_DATA_PDWN )
        put_ptr_field(gcr_addr, rx_a_bank_controls , 0b001011, read_modify_write ); //pl.CML2CMOS_DATA0_PDWN( ABANK_CLK5_PDWN )
        put_ptr_field(gcr_addr, rx_a_bank_controls , 0b001111, read_modify_write ); //pl.CML2CMOS_DATA1_PDWN( ABANK_CLK4_PDWN )
        put_ptr_field(gcr_addr, rx_a_bank_controls , 0b011111, read_modify_write ); //pl.IQGEN_PDWN( ABANK_CLK2_PDWN )
        put_ptr_field(gcr_addr, rx_a_bank_controls , 0b111111, read_modify_write ); //pl.MINI_PR_PDWN( ABANK_CLK1_PDWN )
    }


} //io_lane_power_off
