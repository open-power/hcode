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
// mbs20111800 |mbs     | HW552774: Updated tx_iref_clock_dac to 4
// mwh20111300 |mwh     | HW550299rx_loff_timeout to 10
// vbr20091000 |vbr     | HW536853: CDR lock ratio decreased from 464 to 456.
// vbr20101301 |vbr     | HW548766: rx_iref_vset_dac=3 in BIST for DD1 V units only
// vbr20101300 |vbr     | HW543601: Increased LTE timeout due to errors in BIST (PRBS15)
// vbr20100800 |vbr     | HW543601: Updated Peak and LTE servo settings to match settings used in ncsim
// vbr20100500 |vbr     | HW548766: Updated rx_iref_vset_dac and rx_bist_freq_adjust_dc settings.
// vbr20100100 |vbr     | HW541162: Updated rx_freq_adjust for 25.6G.
// vbr20092800 |vbr     | HW547883: Update ppe_data_rate to have 4 settings: 21.3, 25.6, 32, 38.4
// vbr20092400 |vbr     | HW544450: Use H2 for Peak2 servo at 25.6/21.3 Gbps
// bja20092801 |bja     | HW547884: Use constant values in tx_d2_* settings for all p10dd1 data rates
// bja20092800 |bja     | Use shared constants for TX register overrides
// mbs20092401 |mbs     | HW546921: Update to set rx_psave_fw_valid_bypass to 1 by default (can be cleared by software after training)
// mbs20091800 |mbs     | HW546645: Update rx_ctle_config_dc setting to 0x2
// bja20091501 |bja     | HW544277: Use main path by default for dcc
// bja20091500 |bja     | HW544277: Overwrite tx_dcc_sel_alias default value in p10dd1
// vbr20091500 |vbr     | HW541162: rx_freq_adj changed from 0x1 to 0x5 for 25.6 Gbps.
// bja20090900 |bja     | Use common is_p10_dd1() check
// mwh20090100 |mwh     | HW541978 changed psave tx_psave_time and rx_psave_time blackout time to 52ns was 100ns
// mbs20090200 |mbs     | HW544036: Cleaned up io_hw_reg_init setting organization based on review feedback
// mbs20083101 |mbs     | HW544036: Set rx_psave_fw_valid_bypass=1 when fw_spread_en=0
// mbs20082400 |mbs     | HW541155: Change rx_clk_phase_select per Glen for DD1 and DD2
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


// Struct and Constants for data rate dependent settigs.
// See this spreadsheet for the documented settings:  https://ibm.box.com/v/p10-speed-settings
typedef struct struct_data_rate_settings
{
    uint8_t rx_ctle_peak2_h_sel;
    uint8_t rx_freq_adjust;
    uint8_t tx_d2_ctrl;
    uint8_t tx_d2_div_ctrl;
    uint8_t rx_bist_freq_adjust_8xx; // Setting @ 800mV, 850mV
    uint8_t rx_bist_freq_adjust_9xx; // Setting @ 900mV, 950mV
} t_data_rate_settings;

// 21.3 Gbps
const t_data_rate_settings c_data_rate_settings_21g =
{
    .rx_ctle_peak2_h_sel        = 0, // H2
    .rx_freq_adjust             = 0x05,
    .tx_d2_ctrl                 = 0,
    .tx_d2_div_ctrl             = 0,
    .rx_bist_freq_adjust_8xx    = 0b10,
    .rx_bist_freq_adjust_9xx    = 0b00,
};

// 25.6 Gbps, 25.78125 Gbps
const t_data_rate_settings c_data_rate_settings_25g =
{
    .rx_ctle_peak2_h_sel        = 0, // H2
    .rx_freq_adjust             = 0x0D,
    .tx_d2_ctrl                 = 1,
    .tx_d2_div_ctrl             = 1,
    .rx_bist_freq_adjust_8xx    = 0b11,
    .rx_bist_freq_adjust_9xx    = 0b01,
};

// 32.0 Gbps, 32.5 Gbps
const t_data_rate_settings c_data_rate_settings_32g =
{
    .rx_ctle_peak2_h_sel        = 1, // H3
    .rx_freq_adjust             = 0x0D,
    .tx_d2_ctrl                 = 1,
    .tx_d2_div_ctrl             = 1,
    .rx_bist_freq_adjust_8xx    = 0b11,
    .rx_bist_freq_adjust_9xx    = 0b01,
};

// 38.4 Gbps
const t_data_rate_settings c_data_rate_settings_38g =
{
    .rx_ctle_peak2_h_sel        = 1, // H3
    .rx_freq_adjust             = 0x0D,
    .tx_d2_ctrl                 = 2,
    .tx_d2_div_ctrl             = 2,
    .rx_bist_freq_adjust_8xx    = 0b11,
    .rx_bist_freq_adjust_9xx    = 0b01,
};

// Array of pointers to the data rate setting constants
PK_STATIC_ASSERT(ppe_data_rate_width == 2);
const t_data_rate_settings* c_data_rate_settings[4] =
{
    &c_data_rate_settings_21g, // 0 = 21.3G
    &c_data_rate_settings_25g, // 1 = 25.6G, 25.78125G
    &c_data_rate_settings_32g, // 2 = 32.0G, 32.5G
    &c_data_rate_settings_38g, // 3 = 38.4.4G
};

// Function for getting a pointer to data rate dependent settings
static const t_data_rate_settings* get_data_rate_settings(int i_data_rate)
{
    const t_data_rate_settings* o_selected_settings = c_data_rate_settings[i_data_rate];
    return o_selected_settings;
} //get_data_rate_settings


// CDR Settings: rx_pr_phase_step (KP) = 0.296875; rx_pr_fw_inertia_amt (KI) = 4
#define CDR_KP_RESET_VALUE 0b0100110
#define CDR_KI_RESET_VALUE 0b0100


// CDR Lock Detector Settings: rx_pr_lock_ratio = 456
#define CDR_LOCK_RATIO_RESET_VALUE 456

// CTLE config
#define RX_CTLE_CONFIG_DC_RESET_VALUE 0x2



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

    int l_data_rate         = mem_pg_field_get(ppe_data_rate);
    int source_lane         = num_lanes / 2; // for flywheel snapshot
    int spread_en           = fw_field_get(fw_spread_en);

    const t_data_rate_settings* l_data_rate_settings =  get_data_rate_settings(l_data_rate);

    /////////////////////////////////////////////////////////////////
    // TX PG Registers
    set_gcr_addr_reg_id(gcr_addr, tx_group);

    // Update Settings for SerDes 32:1 (TX Group)
    if ( is_p10_dd1() && !serdes_16_to_1_mode )   // 32:1 -- P10 DD1 only
    {
        put_ptr_field(gcr_addr, tx_16to1,         0b0, read_modify_write); //pg
    }

    put_ptr_field(gcr_addr, tx_iref_clock_dac, 0x4, read_modify_write); //pg
    put_ptr_field(gcr_addr, tx_iref_vset_dac , l_vio_volt, read_modify_write); //pg


    //CQ521314 never turn on tx_bank_controls_dc(0) = dcc_comp_en_dc
    //only change for DD2 in not DD2 keep what default is in Regdef
    if ((( get_chip_id()  == CHIP_ID_P10) && ( get_major_ec() == MAJOR_EC_DD2 )) || ( get_chip_id()  == CHIP_ID_ZA) )
    {
        put_ptr_field(gcr_addr, tx_psave_subset0,                0b100000, read_modify_write); //pg
        put_ptr_field(gcr_addr, tx_psave_subset1,                0b100100, read_modify_write); //pg
    }

//Changing the time between change of bank_control signals by psave logic to 50ns
    //default is 11001=25=100ns  need to be 01101=13=52ns see HW541978
    put_ptr_field(gcr_addr, tx_psave_time,     0b001101, read_modify_write); //pg

    /////////////////////////////////////////////////////////////////
    // BROADCAST ALL TX PL Registers
    set_gcr_addr_lane(gcr_addr, bcast_all_lanes);
    int l_tx_boost_en = (mem_pg_field_get(ppe_channel_loss) <= 1) ? 0x01 : 0x00;

    put_ptr_field(gcr_addr, tx_boost_hs_en , l_tx_boost_en, read_modify_write);

    if ( is_p10_dd1() )
    {
        put_ptr_field(gcr_addr, tx_d2_ctrl    , P10_DD1_TX_D2_CTRL,     read_modify_write);
        put_ptr_field(gcr_addr, tx_d2_div_ctrl, P10_DD1_TX_D2_DIV_CTRL, read_modify_write);
    }
    else
    {
        put_ptr_field(gcr_addr, tx_d2_ctrl    , l_data_rate_settings->tx_d2_ctrl,     read_modify_write);
        put_ptr_field(gcr_addr, tx_d2_div_ctrl, l_data_rate_settings->tx_d2_div_ctrl, read_modify_write);
    }

    put_ptr_field(gcr_addr, tx_dcc_sel_alias, TX_DCC_SEL_ALIAS_DEFAULT, read_modify_write); //pl //HW544277

    // Clear the BCAST condition
    set_gcr_addr_lane(gcr_addr, 0);

    /////////////////////////////////////////////////////////////////
    // RX PG Registers

    set_gcr_addr_reg_id(gcr_addr, rx_group);

    // CYA for Latch DAC reversal
#ifdef INVERT_DACS
    put_ptr_field(gcr_addr, rx_servo_reverse_latch_dac, 0b1, read_modify_write); //pg
#endif

    // Update Settings for SerDes 8:1 (RX Group)
    if (!serdes_16_to_1_mode)   // 8:1 (to the DL only)   (32:1 for  P10 DD1)
    {
        put_ptr_field(gcr_addr, rx_16to1,         0b0, read_modify_write); //pg

        if ( is_p10_dd1() )   // P10 DD1 only
        {
            put_ptr_field(gcr_addr, rx_amp_timeout,     6, read_modify_write); //pg
            put_ptr_field(gcr_addr, rx_bo_time,        11, read_modify_write); //pg
        }
    }

    //Changing the time between change of bank_control signals by psave logic to 50ns
    //default is 11001=25=100ns  need to be 01101=13=52ns see HW541978
    put_ptr_field(gcr_addr, rx_psave_time,     0b001101, read_modify_write); //pg

    // LTE Servo Settings
    put_ptr_field(gcr_addr, rx_lte_timeout,           9, read_modify_write); //pg
    put_ptr_field(gcr_addr, rx_lte_filter_depth,      9, read_modify_write); //pg
    put_ptr_field(gcr_addr, rx_lte_vote_ratio_cfg,    7, read_modify_write); //pg

    // Peak Servo Settings
    put_ptr_field(gcr_addr, rx_ctle_timeout,          8, read_modify_write); //pg
    put_ptr_field(gcr_addr, rx_ctle_filter_depth,    10, read_modify_write); //pg
    put_ptr_field(gcr_addr, rx_ctle_vote_ratio_cfg,   7, read_modify_write); //pg

    // HW544450/HW532468: Select the Peak2 servo correlation bit based on the bus rate
    put_ptr_field(gcr_addr, rx_ctle_peak2_h_sel, l_data_rate_settings->rx_ctle_peak2_h_sel, read_modify_write);

    // CWS CHANGED THIS FROM 6 -> 8
    put_ptr_field(gcr_addr, rx_loff_timeout, 10, read_modify_write); //pg

    put_ptr_field(gcr_addr, rx_iref_clock_dac  , 0x2, read_modify_write); //pg
    put_ptr_field(gcr_addr, rx_iref_data_dac   , 0x2, read_modify_write); //pg


    // HW548766: Set rx_iref_vset_dac to 3 in BIST for P10 DD1 vertical chiplets
    int l_rx_vio_volt = ( fw_field_get(fw_bist_en) && is_p10_dd1_v_chiplet() ) ? 0x3 : l_vio_volt;
    put_ptr_field(gcr_addr, rx_iref_vset_dac, l_rx_vio_volt, read_modify_write); //pg

    // HW544036: Flywheel snapshot does not work correctly for OpenCAPI / OMI.  Those applications happen to becommon oscillator
    // HW546921: Always set this bit to begin with.  After training when lane reversal data is read from the DL, this can be lowered.
    put_ptr_field(gcr_addr, rx_psave_fw_valid_bypass, 0b1, read_modify_write); //pg

    // Set up the flywheel snapshot routing for psave (HW476919)
    // This is a don't care for common oscillator interfaces, which will leave rx_psave_fw_valid_bypass=1 forever
    // HW546921: This should be set to 0 after training for P10 P-bus Link Paired mode
    put_ptr_field(gcr_addr, rx_psave_fw_val1_sel, source_lane, read_modify_write); //pg


    /////////////////////////////////////////////////////////////////
    // BROADCAST ALL RX PL Registers
    //
    // These can be done with a RMW broadcasts because all lanes in a chiplet will have the same values for mode bits below
    // and they are in registers separate from any other mode bits that may be different per-lane.
    // Additionally, hw_reg_init is only called when all lanes are powered down, so changing the mode bits on all lanes is safe.
    /////////////////////////////////////////////////////////////////
    set_gcr_addr_lane(gcr_addr, bcast_all_lanes);

    // frequency adjust
    put_ptr_field(gcr_addr, rx_freq_adjust, l_data_rate_settings->rx_freq_adjust, read_modify_write); //pl

    // BIST frequency adjust
    // HW548766: Set rx_bist_freq_adjust_dc to 3 for P10 DD1 vertical chiplets
    int bist_freq_adjust = 0b11;

    if (!is_p10_dd1_v_chiplet())
    {
        if (l_vio_volt < 2)   // 00 = 950mV, 01 = 900mV
        {
            bist_freq_adjust = l_data_rate_settings->rx_bist_freq_adjust_9xx;
        }
        else     // 10 = 850 mV, 11 = 800 mV
        {
            bist_freq_adjust = l_data_rate_settings->rx_bist_freq_adjust_8xx;
        }
    }

    put_ptr_field(gcr_addr, rx_bist_freq_adjust_dc, bist_freq_adjust, read_modify_write); //pl

    // ctle_config
    put_ptr_field(gcr_addr, rx_ctle_config_dc, RX_CTLE_CONFIG_DC_RESET_VALUE, read_modify_write); //pl


    // Update CDR Settings - must be done before powering on the lane.
    // KI/KP Settings (coarse mode is disabled by default)
    int ki_kp_full_reg_val =
        (CDR_KI_RESET_VALUE << rx_pr_fw_inertia_amt_shift) |
        (CDR_KP_RESET_VALUE << rx_pr_phase_step_shift);
    put_ptr_field(gcr_addr, rx_pr_ki_kp_full_reg, ki_kp_full_reg_val, fast_write); //pl

    put_ptr_field(gcr_addr, rx_pr_lock_ratio, CDR_LOCK_RATIO_RESET_VALUE, read_modify_write); //pl

    // Different settings when Spread Spectrum Clocking (SSC) is disabled
    if ( ! spread_en )
    {
        // HW532326: Set rx_pr_fw_range_sel=1 (by setting rx_pr_fw_inertia_amt_coarse=15) when when spread is disabled.
        // This reduces the max flywheel correction and increases the Bump UI step size.
        put_ptr_field(gcr_addr, rx_pr_fw_inertia_amt_coarse, 15, read_modify_write); //pl
    }

    // Set the RX clock phase offset (data and clock relationship)
    // for all lanes. Done in PPE code because hardware is frozen.
    int rx_clk_phase_select_value;

    if ( is_p10_dd1() )   // P10 DD1 only
    {
        // HW541155 - Setting for P10 DD1
        rx_clk_phase_select_value = 0b00;
    }
    else
    {
        // (BJA 1/16/20) Per Glen W, setting 0b11 is used for timing analysis.
        // The scan init (RegDef) value is 0b00, but hardware is currently frozen.
        // HW541155 - This setting is now only for P10 DD2 / zArtemis
        rx_clk_phase_select_value = 0b11;
    }

    put_ptr_field(gcr_addr, rx_clk_phase_select, rx_clk_phase_select_value, read_modify_write); //pl


    // Clear the BCAST condition
    set_gcr_addr_lane(gcr_addr, 0);


    /////////////////////////////////////////////////////////////////
    // RX PL Registers
    // Do these AFTER BCAST register operations, or BCAST may overwrite them!

    // Set up the flywheel snapshot routing for psave (HW476919)
    // Each chiplet is split evenly into two links.
    // In each link, the lowest numbered lane is used as the flywheel source.
    // The default register settings are rx_psave_fw_val_sel=0b00 and rx_psave_fw_valX_sel=0 so only some lanes need to be updated.
    // The lanes in the lower link continue to select mux0 which defaults to selecting lane 0.
    // The lanes in the upper link are configured to select mux1 which is configured to select the lowest lane in the link.
    //
    // This is a don't care for common oscillator interfaces, which will leave rx_psave_fw_valid_bypass=1 forever
    //
    // HW546921: rx_psave_fw_val1_sel should be set to 0 after training for P10 P-bus Link Paired mode, which will make
    // both the b00 and b01 codes here point to the same lane 0.
    int i;

    for (i = source_lane; i < num_lanes; i++)
    {
        set_gcr_addr_lane(gcr_addr, i);
        put_ptr_field(gcr_addr, rx_psave_fw_val_sel, 0b01, read_modify_write); //pl
    }


    /////////////////////////////////////////////////////////////////
    // BIST Override Registers
    // Do this LAST
    if (fw_field_get(fw_bist_en))
    {
        eo_bist_init_ovride(gcr_addr);
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

    put_ptr_field(gcr_addr, tx_boost_hs_en , l_tx_boost_en, read_modify_write); //pl
    put_ptr_field(gcr_addr, tx_dcc_sel_alias, TX_DCC_SEL_ALIAS_DEFAULT, read_modify_write); //pl //HW544277


    // Tx CML IREF clock control
    int l_data_rate = mem_pg_field_get(ppe_data_rate);
    const t_data_rate_settings* l_data_rate_settings =  get_data_rate_settings(l_data_rate);

    if ( is_p10_dd1() )
    {
        put_ptr_field(gcr_addr, tx_d2_ctrl    , P10_DD1_TX_D2_CTRL,     read_modify_write); //pl
        put_ptr_field(gcr_addr, tx_d2_div_ctrl, P10_DD1_TX_D2_DIV_CTRL, read_modify_write); //pl
    }
    else
    {
        put_ptr_field(gcr_addr, tx_d2_ctrl    , l_data_rate_settings->tx_d2_ctrl,     read_modify_write); //pl
        put_ptr_field(gcr_addr, tx_d2_div_ctrl, l_data_rate_settings->tx_d2_div_ctrl, read_modify_write); //pl
    }

    // RX Registers
    set_gcr_addr_reg_id(gcr_addr, rx_group);
    put_ptr_field(gcr_addr, rx_ioreset,            0b1, read_modify_write); //pl
    put_ptr_field(gcr_addr, rx_ioreset,            0b0, read_modify_write); //pl
    put_ptr_field(gcr_addr, rx_phy_dl_init_done,   0b0, read_modify_write); //pl, in datasm_mac so not reset by rx_ioreset
    put_ptr_field(gcr_addr, rx_phy_dl_recal_done,  0b0, read_modify_write); //pl, in datasm_mac so not reset by rx_ioreset

    // HW476919: Reconfigure the psave flywheel snapshot 4:1 mux select if lane is in the upper link (see io_hw_reg_init)
    // This is a don't care for common oscillator interfaces, which will leave rx_psave_fw_valid_bypass=1 forever
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

    put_ptr_field(gcr_addr, rx_pr_lock_ratio, CDR_LOCK_RATIO_RESET_VALUE, read_modify_write); //pl

    // Different settings when Spread Spectrum Clocking (SSC) is disabled
    if ( !fw_field_get(fw_spread_en) )
    {
        put_ptr_field(gcr_addr, rx_pr_fw_inertia_amt_coarse, 15, read_modify_write); //pl
    }

    // Set the RX clock phase offset (data and clock relationship)
    // for all lanes. Done in PPE code because hardware is frozen.
    int rx_clk_phase_select_value;

    if ( is_p10_dd1() )   // P10 DD1 only
    {
        // HW541155 - Setting for P10 DD1
        rx_clk_phase_select_value = 0b00;
    }
    else
    {
        // (BJA 1/16/20) Per Glen W, setting 0b11 is used for timing analysis.
        // The scan init (RegDef) value is 0b00, but hardware is currently frozen.
        // HW541155 - This setting is now only for P10 DD2 / zArtemis
        rx_clk_phase_select_value = 0b11;
    }


    put_ptr_field(gcr_addr, rx_clk_phase_select, rx_clk_phase_select_value, read_modify_write); //pl

    // frequency adjust
    put_ptr_field(gcr_addr, rx_freq_adjust, l_data_rate_settings->rx_freq_adjust, read_modify_write); //pl

    // BIST frequency adjust
    // HW548766: Set rx_bist_freq_adjust_dc to 3 for P10 DD1 vertical chiplets
    int bist_freq_adjust = 0b11;

    if (!is_p10_dd1_v_chiplet())
    {
        int l_vio_volt = img_field_get(ppe_vio_volts);

        if (l_vio_volt < 2)   // 00 = 950mV, 01 = 900mV
        {
            bist_freq_adjust = l_data_rate_settings->rx_bist_freq_adjust_9xx;
        }
        else     // 10 = 850 mV, 11 = 800 mV
        {
            bist_freq_adjust = l_data_rate_settings->rx_bist_freq_adjust_8xx;
        }
    }

    put_ptr_field(gcr_addr, rx_bist_freq_adjust_dc, bist_freq_adjust, read_modify_write); //pl

    // ctle_config
    put_ptr_field(gcr_addr, rx_ctle_config_dc, RX_CTLE_CONFIG_DC_RESET_VALUE, read_modify_write); //pl

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
