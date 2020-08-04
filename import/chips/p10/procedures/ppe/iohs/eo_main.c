/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_main.c $              */
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
// *! FILENAME    : eo_main.c
// *! TITLE       :
// *! DESCRIPTION : Call the Eyeopt steps
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// mbs20073000 |mbs     | LAB - Override rx_loff_timeout to 8
// mbs20030900 |mbs     | HW525009: Set bit_lock_done=1 during bank sync and dfe to avoid bank B unlocks
// jfg20031000 |jfg     | fix copy-paste error
// jfg20030900 |jfg     | HW525009 add a rough_only mode to set initial coarse peak 1&2
// vbr20021300 |vbr     | Added Min Eye Height enable to dfe_full calls
// vbr20020600 |vbr     | HW522210: Added setting of rx_lane_bad in INIT and every recal iteration.
// bja20020500 |bja     | Use new tx_fifo_init() in eo_main_dccal()
// cws19121100 |cws     | Moved Bist tests to External Commands
// bja20011400 |bja     | Remove TDR ZCAL from DCCAL. Moved to ext cmd.
// vbr19111500 |vbr     | Initial implementation of debug levels
// mbs19111100 |mbs     | Leave dl_clk_en untouched in eo_main_dccal (HW508366)
// mbs19091000 |mbs     | Added rx iodom reset after recal alt bank power up (HW504112)
// jfg19091100 |jfg     | Add first_run parm to eo_ctle
// gap19091000 |gap     | Change  rx_rc_enable_dcc, rx_dc_enable_dcc to tx_* and rx_dc_enable_zcal to tx_dc_enable_zcal_tdr HW503432
// bja19082100 |bja     | Correct rx_bist_max_lanes condition
// mwh19082000 |mwh     | removed rx_bist_max_ovrd and rx_bist_max_lanes_ovrd not need
// bja19081900 |bja     | Move eo_vclq_checks() to end of INIT
// bja19081901 |bja     | Only run eo_vclq_checks() when at least one check is enabled
// bja19081902 |bja     | Simplify code that calls ll and pr bist checks
// vbr19080900 |vbr     | HW499874: Move EOFF to back before bank sync in init.
// mbs19072500 |mbs     | Modified vga loop so that it will quit after the first iteration if rx_eo_converged_end_count is 0 or 1
// vbr19072202 |vbr     | Fix setting of tx_group in recal.
// vbr19072201 |vbr     | Minor refactoring and potential hang fix.
// vbr19072200 |vbr     | HW493618: Split recal into RX/TX functions and only run each when not in psave.
// vbr19062800 |vbr     | Need DL clock to remain on in INIT Cal.
// vbr19060700 |vbr     | Remove unnecessary pr_phase_force
// vbr19060601 |vbr     | In recal only set cal_lane_sel after powering up the Alt bank (to avoid clock glitches)
// vbr19060600 |vbr     | Put DL clock disable in correct location (after lane power up since it enables the DL clock)
// vbr19060300 |vbr     | HW486157/HW492011: Enable DL clock only at end of DC Cal. Remove power down at end of DC Cal. Move CDR Init to DC Cal.
// gap19041700 |gap     | Add tdr zcal; rename dcc_main to tx_dcc_main
// mbs19051600 |mbs     | HW491617: Added second run of dfe_full after ddc, if enabled
// mwh19050100 |mwh     | cq485000 moved b_bank eoff after bank sync in init
// mwh19042300 |mwh     | removed eo_bist_init_ovride function and put into ioo_thread.c
// mbs19041001 |mbs     | Added recal flag to dfe_full function (HW486784)
// mwh19042300 |mwh     | Fixed if statement for kick of ber max = lane now.
// mwh19042200 |mwh     | Change name of eo_rxbist_init_ovride to eo_bist_init_ovride
// mwh19041600 |mwh     | Add in rx_llbist code
// mwh19032800 |mwh     | Updated when we run pr check -- end of recal
// mwh19031400 |mwh     | in recal changed bank_a to cal_bank for bist checks
// mwh19031300 |mwh     | add rx_ber_check_en to skip eo_rxbist_ber if wanted
// vbr19040900 |vbr     | HW488485: Skip QPA before first CTLE in INIT.
// vbr19040400 |vbr     | HW472570: Check main bank psave before proceeding with recal.
// mwh19032100 |mwh     | Add in vga_loop_count so that we do not do the latch offset check more than once
// vbr19032700 |vbr     | Unconditionally disable cdr slave mode at end of recal.
// vbr19030100 |vbr     | HW484186: reversed order of cal_lane_sel and bank_sel_a in several locations.
// gap19022700 |gap     | add fifo init before tx_bist and dcc_init
// jfg19030500 |jfg     | Rename eo_qpa recal_1strun as recal_2ndrun to match usage in main
// jfg19030400 |jfg     | Add qpa changed parameter
// jfg19022200 |jfg     | restore qpa recal
// jfg19021501 |jfg     | remove qpa recal
// jfg19020600 |jfg     | add eo_qpa function
// vbr19021800 |vbr     | HW482059: CDR is enabled before EOFF. All steps are run each VGA-CTLE loop in INIT. Check all steps for change.
// mwh19022501 |mwh     | removed set_cal_lane_sel on line 188 and the clear on line 201. Not Need
// mwh19022500 |mwh     | add in cal sel off and on where we are doing bank_sel (loff and eoff)
// mwh19021100 |mwh     | add enable of cdr before running eoff, this is where cdr is on now
// mwh19020600 |mwh     | add in bank sel change for eoff and put latch offset out into main
// vbr19013100 |vbr     | Only enable CDR slave mode in Recal if no errors.
// vbr19012200 |vbr     | Updated function calls
// mwh19020501 |mwh     | add in to init that we do bank_a and bank_b for eoff
// mwh19011101 |mwh     | add eo_vclq_checks into recal flow
// mwh19011100 |mwh     | add eo_rxbist_init_ovrride
// vbr18121300 |vbr     | Updated the handling of abort at the very begining of recal.
// vbr18121200 |vbr     | HW474757: Increment recal count even on an error or abort. Clear recal abort sticky at the end of init.
// vbr18120400 |vbr     | Updated cal stopwatch to use constant from pk_app_cfg for divider.
// vbr18112900 |vbr     | Added assumption assertions
// gap18112700 |gap     | Rename tx_bist_enable_alias to tx_bist_en_alias
// vbr18112800 |vbr     | Added set_fir call for first recal abort exit. Added enable CDR in recal if no errors.
// vbr18111400 |vbr     | Updated calls to set_fir and added cal lane debug and lane_bad in recal. Added ability to disable cal timers.
// gap18102200 |gap     | Call txbist if requested
// vbr18101700 |vbr     | Added cal_timer macros to measure cal time.
// vbr18100200 |vbr     | Updated wait_for_cdr_lock() calls with set_fir_on_error.
// vbr18092800 |vbr     | All steps take recal=false in first recal loop so Bank B gets an "init" run.
// vbr18092700 |vbr     | New initial calibration flow where CDR is enabled after VGA and slave mode only used for DFE/DDC. Removed static_config.
// cws18092800 |cws     | Added in eo dfe support
// mbs18091801 |mbs     | Moved CDR start, lock check and AB sync to after VGA (first loop only)
// mbs18091800 |mbs     | Moved CDR lock check and AB sync to after live edge lock (first loop only)
// vbr18091800 |vbr     | Added first_recal available for all functions in eo_recal.
// vbr18081701 |vbr     | Added some assumption checking
// vbr18081600 |vbr     | Added call to LTE cal step.
// jfg16082200 |jfg     | Change DDC recal_dac_changed bool to false as placeholder.
// jfg16081000 |jfg     | Update ddc call with recal_dac_changed
// vbr18080900 |vbr     | Make sure CDR is disabled in DC Cal.
// vbr18080600 |vbr     | Disable CDR before resetting it in case it is a retrain.
// vbr18072001 |vbr     | HW450195: Restructure power up/down (DC Cal) and move CDR Reset back into INIT.
// vbr18080100 |vbr     | HW456546: Power up the Alt bank bank at the beginning of DC cal and INIT since may be powered down in a retrain situation.
// vbr18070900 |vbr     | Clean-up of TX/RX steps in DC cal and recal.
// mwh18070500 |mwh     | Update for live edge offset eoff
// gap18070200 |gap     | Added tx dcc calls to recal and dccal
// vbr18071200 |vbr     | HW455558: Move CDR reset from eo_main_init() to io_hw_reg_init().
// vbr18062200 |vbr     | Added initialization of CDR accumulators to 0 at begining of INIT.
// vbr18061500 |vbr     | Switched to psave logic controls instead of directly writing bank power controls.
// jfg16042500 |jfg     | Update ctle with recal parm
// vbr18042500 |vbr     | HW446931: Call VGA as init (instead of recal) in very first recal (run on bank b) so converges faster. This may need to be moved for other steps in future.
// vbr18042000 |vbr     | Added initial coarse gain.  Added lock check at end of init/recal.
// vbr18033100 |vbr     | Updated CDR controls and place holder for bank UI alignment.
// vbr18030900 |mwh     | Add in first_loop_iteration var to recal loop for VGA code
// vbr18022000 |vbr     | Updating CDR controls.
// vbr17111000 |vbr     | Updated loff function name to be more represntative of the step.
// vbr17103100 |vbr     | Added an abort short-circuit at the begining of eo_main_recal.
// vbr17092800 |vbr     | Added back in checking of status at each step enable in recal.
// vbr17092100 |vbr     | Added missing write to rx_lane_recal_cnt & check sub-step status in recal.
// vbr17091500 |vbr     | New step enable mem_regs. Swapped order of CTLE & LTE.
// vbr17090800 |vbr     | Added per-lane recal count used to gate bank swapping.
// vbr17090700 |vbr     | Switched to new register access wrapper functions.
// vbr17082500 |vbr     | Removed loff/cm from recal; removed cm from dc cal; added live data edge offset placeholder. Removed bank B from INIT.
// vbr17082100 |vbr     | Clear recal_abort_sticky at the begining of recal.
// vbr17081501 |vbr     | Removed ctle/lte changed check for VGA/LTE/CTLE loop.  Added copy_gain/peak_to_b input for VGA/CTLE.
// vbr17081500 |vbr     | Implemented VGA/LTE/CTLE Loop.
// vbr17080800 |vbr     | Changed to individual functions for cal types which follow new P10 diagrams.
// vbr17062900 |vbr     | Removed thread input from various functions.
// vbr17052200 |vbr     | Commented out all DC steps except 2nd_loff since no plans for CM at this time.
// vbr17051800 |vbr     | Remove IOF code.
// vbr17042700 |vbr     | Removed PHASE and DD switches (using PHASE=2, DD=2)
// vbr17042500 |vbr     | Added IOO thread support
// vbr16092600 |vbr     | Re-arranged a few things and added some debug_states
// vbr16092000 |vbr     | Phase 2: Skip B Bank in INIT for VGA, CTLE, DFE, DDC.
// vbr16090900 |vbr     | Fixed setting of rx_current_recal_init_lane.
// vbr16082600 |vbr     | Added set_debug_state for abort.
// vbr16081600 |vbr     | Switched from rx_pr_ddc_failed to ppe_ddc_failed_status for mem_reg bit so is actually in correct address range.
// vbr16081001 |vbr     | No bank input for IOF
// vbr16081000 |vbr     | Changes to improve code/stack size
// vbr16080300 |vbr     | rx_pr_ddc_failed is a per-lane field; only switch banks in recal when no abort/error
// vbr16072100 |vbr     | Added some additional debug bitfields
// vbr16072000 |vbr     | VGA+CTLE loop only loops if both VGA and CTLE are enabled; only wait on edge track in first loop.
// vbr16070100 |vbr     | Changes to step enables to reduce code size. IOF: 2344->1804, IOO: 2816->2808.
// vbr16063000 |vbr     | Fixed many step enables not checking for dccal and incorrectly running in DC Cal.
// vbr16062700 |vbr     | Switch more to gcr_addr functions
// mbs16062400 |mbs     | Added gcr_addr struct
// vbr16061300 |vbr     | Read rx_disable_bank_pdwn from the mem_regs (IOO)
// vbr16060800 |vbr     | Switch to DDC Clk on abort
// vbr16052400 |vbr     | Added set_debug_state
// vbr16052300 |vbr     | Changes to try to reduce stack size (136->88)
// vbr16042700 |vbr     | Fix to keep VGA-CTLE from looping when VGA is disabled
// vbr16042100 |vbr     | Switched to the set/clr strobe bits for a few writes (IOF)
// vbr16042000 |vbr     | Moved setting of bad_lane_vec to result_check and ber_check
// vbr16033100 |vbr     | Fixed vga+ctle loop for recal, implemented cfg reg
// vbr16033000 |vbr     | implememted individual tap enables for dfe2-12, added lane_busy
// vbr16032301 |vbr     | Set rx_cal_lane_pg_phy_gcrmsg so servo targets correct lane
// vbr16032300 |vbr     | Increment recal count after a recal
// vbr16032201 |vbr     | Skip steps when status != pass_code; added error codes
// vbr16032200 |vbr     | Added short timeouts on PRBS seeding
// vbr16032100 |vbr     | Power down / PRBS support and initial VGA support
// vbr16021600 |vbr     | Initial Rev
// -----------------------------------------------------------------------------

#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "eo_common.h"
#include "eo_main.h"
#include "eo_loff.h"
#include "eo_vga.h"
#include "eo_ctle.h"
#include "eo_lte.h"
#include "eo_dfe.h"
#include "eo_ddc.h"
#include "eo_eoff.h"
#include "eo_bank_sync.h"
#include "eo_qpa.h"

#include "tx_zcal_tdr.h"
#include "tx_dcc_main.h"
//#include "txbist_main.h"
#include "eo_vclq_checks.h"
//#include "eo_rxbist_ber.h"
//#include "eo_llbist.h"

#include "io_init_and_reset.h"

#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"

#include "ppe_fw_reg_const_pkg.h"
#include "ppe_img_reg_const_pkg.h"
#include "config_ioo.h"

// Local Functions
static int eo_main_recal_rx(t_gcr_addr* gcr_addr);
static int eo_main_recal_tx(t_gcr_addr* gcr_addr);


// Assumption Checking
PK_STATIC_ASSERT(rx_pr_edge_track_cntl_ab_alias_width == 6);
PK_STATIC_ASSERT(rx_pr_edge_track_cntl_ab_alias_startbit == 0);
PK_STATIC_ASSERT(rx_pr_enable_a_startbit == 0);
PK_STATIC_ASSERT(rx_pr_enable_b_startbit == 3);


// Macros for the timestamping code used in all 3 cal functions for measuring cal time.
// To avoid doing a divide, we assume a power-of-2 timer base which is close enough to the actual frequency.
//#if IO_DEBUG_LEVEL < 2
#define CAL_TIMER_START {}
#define CAL_TIMER_STOP {}
/*
//#else
//  #define CAL_TIMER_START  PkTimebase cal_start_time = pk_timebase_get();
//  #define CAL_TIMER_STOP { \
//    uint32_t cal_time = (uint32_t)(pk_timebase_get() - cal_start_time); \
//    uint16_t cal_time_us = cal_time / TIMER_US_DIVIDER; \
//    mem_pl_field_put(rx_lane_cal_time_us, lane, cal_time_us); \
//  }
//#endif
*/

////////////////////////////////////////////////////////////////////////////////////
// DC CAL
// Run DC Cal on both banks of the lane specified in gcr_addr.
// ASSUMPTIONS:
// 1) Main bank is powered up (though the lane may be powered down).
////////////////////////////////////////////////////////////////////////////////////
void eo_main_dccal(t_gcr_addr* gcr_addr)
{
    CAL_TIMER_START;
    set_debug_state(0x1000); // Debug - DC Cal Start
    int lane = get_gcr_addr_lane(gcr_addr);
#if IO_DEBUG_LEVEL >= 1
    mem_pg_field_put(rx_current_cal_lane, lane);
#endif

    /////////////////////////////
    // Power up group and lane //
    /////////////////////////////
    io_group_power_on(gcr_addr);
    io_lane_power_on(gcr_addr, false); // Power on but leave dl_clk_en untouched (HW508366)


    //////////////////////////////////////////////////////////////
    // Disable Clock to RX DL During DC Cal to prevent glitches //
    //////////////////////////////////////////////////////////////
    put_ptr_field(gcr_addr, rx_dl_clk_en, 0b0, read_modify_write);


    //////////
    //  RX  //
    //////////
    // Make sure the ALT bank is powered up
    put_ptr_field(gcr_addr, rx_psave_req_alt, 0b0, read_modify_write);
    int psave_sts = 1;

    while (psave_sts)
    {
        psave_sts = get_ptr_field(gcr_addr, rx_psave_sts_alt);
    }

    // Prior to asserting cal_lane_sel:
    //   Initialize/Reset CDR by clearing FW; Phase accumulator not cleared since that can cause a glitch.
    //   Make sure the CDR is disabled.
    put_ptr_field(gcr_addr, rx_pr_edge_track_cntl_ab_alias, 0b000000, read_modify_write);
    put_ptr_field(gcr_addr, rx_pr_fw_reset_ab_alias,        0b11,     read_modify_write);
    //put_ptr_field(gcr_addr, rx_pr_phase_force_cmd_ab_alias, 0x8080,   fast_write);
    put_ptr_field(gcr_addr, rx_pr_fw_reset_ab_alias,        0b00,     read_modify_write);

    // Select the cal lane (servo logic) but do not assert cal_lane_sel as yet
    put_ptr_field(gcr_addr, rx_cal_lane_pg_phy_gcrmsg, lane, read_modify_write);

    // Cal Step: Latch Offset
    int loff_enable = mem_pg_field_get(rx_dc_enable_latch_offset_cal);

    if (loff_enable)
    {
        // Safely switch to bank_a and run LOFF (assumes cal_lane_sel is unasserted)
        clear_all_cal_lane_sel(gcr_addr); // clear rx_cal_lane_sel for all lanes
        set_cal_bank(gcr_addr, bank_a);// Set Bank B as Main, Bank A as Alt (cal_bank)
        put_ptr_field(gcr_addr, rx_set_cal_lane_sel, 0b1, fast_write); // turn on cal lane sel
        eo_loff_fenced(gcr_addr, bank_a);

        // Safely switch to bank_b and run LOFF
        clear_all_cal_lane_sel(gcr_addr); // clear rx_cal_lane_sel for all lanes
        set_cal_bank(gcr_addr, bank_b);// Set Bank A as Main, Bank B as Alt (cal_bank)
        put_ptr_field(gcr_addr, rx_set_cal_lane_sel, 0b1, fast_write); // turn on cal lane sel
        eo_loff_fenced(gcr_addr, bank_b);
    }

    // Clear cal lane sel and switch back to Bank B as Main, Bank A as Alt (cal_bank)
    clear_all_cal_lane_sel(gcr_addr); // clear rx_cal_lane_sel for all lanes
    set_cal_bank(gcr_addr, bank_a);

    // Removed (HW508366) // Enable Clock to RX DL
    // Removed (HW508366) // put_ptr_field(gcr_addr, rx_dl_clk_en, 0b1, read_modify_write);


    //////////
    //  TX  //
    //////////

    set_gcr_addr_reg_id(gcr_addr, tx_group); // set to tx gcr address

    // run tx_fifo_init; needs to be run before dcc or bist or Zcal
    tx_fifo_init(gcr_addr);

    // Cal Step: TX Duty Cycle Correction; needs to be run before tx_bist_dcc
    int tx_dcc_enable = mem_pg_field_get(tx_dc_enable_dcc);

    if (tx_dcc_enable)
    {
        tx_dcc_main_init(gcr_addr);
    }

// CWS Moved Tx Bist to External Command
//  // call txbist if requested
//  int run_txbist = get_ptr_field(gcr_addr, tx_bist_en_alias);
//  if (run_txbist > 0) {
//      txbist_main(gcr_addr);
//  }

    set_gcr_addr_reg_id(gcr_addr, rx_group); // set to rx gcr address


    set_debug_state(0x102F); // DEBUG - DC Cal Done
    CAL_TIMER_STOP;
} //eo_main_dccal


////////////////////////////////////////////////////////////////////////////////////
// INIT CAL
// Run Initial Cal on both banks of the lane specified in gcr_addr.
// ASSUMPTIONS:
// 1) Main bank is powered up.
// 2) DC Cal has already been run.
// 3) PRBS data is on the bus.
////////////////////////////////////////////////////////////////////////////////////
void eo_main_init(t_gcr_addr* gcr_addr)
{
    CAL_TIMER_START;
    set_debug_state(0x2000); // Debug - INIT Cal Start
    int lane = get_gcr_addr_lane(gcr_addr);
#if IO_DEBUG_LEVEL >= 1
    mem_pg_field_put(rx_current_cal_lane, lane);
#endif

    // In initial cal, track step status for marking lane bad.
    // But unlike recal, do not skip steps on status being set.
    int status = rc_no_error;

    // Make sure the ALT bank is powered up
    put_ptr_field(gcr_addr, rx_psave_req_alt, 0b0, read_modify_write);
    int psave_sts = 1;

    while (psave_sts)
    {
        psave_sts = get_ptr_field(gcr_addr, rx_psave_sts_alt);
    }

    // Prior to asserting cal_lane_sel: Set Bank B as Main, Bank A as Alt (cal_bank)
    // This may cause a DL clock glitch if the lane was not already in this state (HW496723)
    set_cal_bank(gcr_addr, bank_a);

    // Select the cal lane
    clear_all_cal_lane_sel(gcr_addr); // clear rx_cal_lane_sel for all lanes
    put_ptr_field(gcr_addr, rx_set_cal_lane_sel, 0b1, fast_write); // strobe bit
    put_ptr_field(gcr_addr, rx_cal_lane_pg_phy_gcrmsg, lane, read_modify_write);

    // Make sure the CDR is disabled.
    put_ptr_field(gcr_addr, rx_pr_edge_track_cntl_ab_alias, 0b000000, read_modify_write);


    // Loop for VGA + EOF + CTLE + LTE
    // Always go through this loop at least once.
    // 1) Run VGA on A Bank. Copy result to B Bank.
    // 2) If this is the first loop iteration, enable the CDR (master mode) on both banks.
    // 3) Run Edge Offset on both banks.
    // 4) If this is not the first loop iteration, run Quad Phase Adjust on A Bank.
    // 5) Run CTLE and LTE on A Bank. Copy result to B Bank.
    // 6) If gain, peak, lte, or qpa changed, repeat the loop from #1.
    bool run_vga_loop = true; // Must always run loop at least once so CDR gets enabled
    unsigned int vga_loop_count = 0;

    while (run_vga_loop)
    {
        bool first_loop_iteration = (vga_loop_count == 0);

        // Cal Step: VGA (Gain & Path Offset)
        // Does not require edge tracking or bank alignment
        bool gain_changed = false;
        int vga_enable = mem_pg_field_get(rx_eo_enable_vga_cal);

        if (vga_enable)
        {
            bool recal = false;
            bool copy_gain_to_b = true;
            bool copy_gain_to_b_loop = true;
            status |= eo_vga(gcr_addr, bank_a, &gain_changed, recal, copy_gain_to_b, copy_gain_to_b_loop, first_loop_iteration);
        }

        // CDR must be locked prior to running EOFF, Quad Adjust, CTLE, or LTE.
        // To lock properly, it requires:
        //   1) The edge latches have all offset (latch and path) calibrated out.
        //   2) The data bits are being received well enough that don't get false invalid_locks.
        // It is likely that the CDR will not lock due to the above conditions not being met as yet and thus will run to the timeout.
        // For this reason, we ignore the status of this CDR lock wait.
        if (first_loop_iteration)
        {
            // Enable Independent Edge Tracking (both banks Master) and wait for lock on both banks.
            set_debug_state(0x200F); // DEBUG - Init Cal Enable Edge Tracking
            put_ptr_field(gcr_addr, rx_pr_edge_track_cntl_ab_alias, 0b100100, read_modify_write);
            bool set_fir_on_error = false;
            wait_for_cdr_lock(gcr_addr, set_fir_on_error);
        } //first_loop_iteration

        // Cal Step: Edge Offset (Live Data)
        // Requires edge tracking (master mode) but does not require bank alignment
        int eoff_enable = mem_pg_field_get(rx_eo_enable_edge_offset_cal);

        if (eoff_enable)
        {
            bool recal = false;
            status |= eo_eoff(gcr_addr, recal, vga_loop_count, bank_a);
        }

        // Cal Step: Quad Phase Adjust (Edge NS to EW phase adjustment)
        // Requires edge tracking (master mode) but does not require bank alignment
        bool quad_adjust_changed = false;
        int quad_enable = mem_pg_field_get(rx_eo_enable_quad_phase_cal);

        if (quad_enable  && !first_loop_iteration)
        {
            bool recal_2ndrun = (vga_loop_count > 1); //vga_loop_count: 0 = skip, 1 = 1st run, 2 = 2nd run
            status |= eo_qpa(gcr_addr, bank_a, recal_2ndrun, &quad_adjust_changed);
        }

        // Cal Step: CTLE (Peaking)
        // Requires edge tracking (master mode) but does not require bank alignment
        bool peak_changed = false;
        bool rough_only = false;
        int ctle_enable = mem_pg_field_get(rx_eo_enable_ctle_peak_cal);

        if (ctle_enable)
        {
            bool copy_peak_to_b = true;
            status |= eo_ctle(gcr_addr, bank_a, copy_peak_to_b, &peak_changed, first_loop_iteration, rough_only);
        }

        // Cal Step: LTE
        // Requires edge tracking (master mode) but does not require bank alignment
        bool lte_changed = false;
        int lte_enable = mem_pg_field_get(rx_eo_enable_lte_cal);

        if (lte_enable)
        {
            bool recal = false;
            bool copy_lte_to_b = true;
            status |= eo_lte(gcr_addr, bank_a, copy_lte_to_b, recal, &lte_changed);
        }

        // Check for loop termination.
        // Run loop at least twice.
        // Keep running if settings (gain/peak/lte) changed, but limit the number of loops.
        vga_loop_count = vga_loop_count + 1;

        if (first_loop_iteration || gain_changed || peak_changed || lte_changed || quad_adjust_changed)
        {
            unsigned int converged_cnt_max = mem_pg_field_get(rx_eo_converged_end_count);

            if (vga_loop_count < converged_cnt_max)
            {
                run_vga_loop = true;
            }
            else
            {
                // Loop failed to converge
                run_vga_loop = false;
                mem_pl_bit_set(rx_eo_vga_ctle_loop_not_converged, lane);
            }
        }
        else     // !first_loop_iteration && !(gain_changed || peak_changed || lte_changed)
        {
            // Loop completed successfuly
            run_vga_loop = false;
            mem_pl_bit_clr(rx_eo_vga_ctle_loop_not_converged, lane);
        }
    } //while run_vga_ctle_loop

// Cal Step: Edge Offset (Live Data) on Bank B
    int eoff_enable = mem_pg_field_get(rx_eo_enable_edge_offset_cal);
    int ctle_enable = mem_pg_field_get(rx_eo_enable_ctle_peak_cal);

    if (eoff_enable || ctle_enable)
    {
        // Safely switch to bank_b without changing dl_clk_sel_a to avoid DL clock chopping (HW485000)
        clear_all_cal_lane_sel(gcr_addr); // clear rx_cal_lane_sel for all lanes
        put_ptr_field(gcr_addr, rx_bank_rlmclk_sel_a_alias, cal_bank_to_bank_rlmclk_sel_a(bank_b), read_modify_write);
        put_ptr_field(gcr_addr, rx_set_cal_lane_sel, 0b1, fast_write); // turn on cal lane sel

        bool recal = false;

        if (eoff_enable)
        {
            status |= eo_eoff(gcr_addr, recal, 0, bank_b); // vga_loop_count = 0
        }

        bool rough_only = true;
        bool copy_peak_to_b = false;
        bool first_iteration = true;
        bool peak_changed = false;

        if (ctle_enable)
        {
            status |= eo_ctle(gcr_addr, bank_b, copy_peak_to_b, &peak_changed, first_iteration, rough_only);
        }

        // Safely switch to bank_a
        clear_all_cal_lane_sel(gcr_addr); // clear rx_cal_lane_sel for all lanes
        set_cal_bank(gcr_addr, bank_a);// Set Bank B as Main, Bank A as Alt (cal_bank)
        put_ptr_field(gcr_addr, rx_set_cal_lane_sel, 0b1, fast_write); // turn on cal lane sel
    }

    // Turn off invalid lock detection to avoid coming out of sync on bank B after bank sync
    put_ptr_field(gcr_addr, rx_pr_bit_lock_done_a, 0b1, read_modify_write);
    put_ptr_field(gcr_addr, rx_pr_bit_lock_done_b, 0b1, read_modify_write);

    // Perform Bank A/B UI Alignment by bumping alt bank
    // Requires edge tracking (master mode)
    int bank_sync_enable = mem_pg_field_get(rx_eo_enable_bank_sync);

    if (bank_sync_enable)
    {
        status |= align_bank_ui(gcr_addr, bank_a);
    }

    // Put Alt (Cal) bank into CDR Slave mode for DFE Amp Measurements and DDC
    put_ptr_field(gcr_addr, rx_pr_slave_mode_a, 0b1, read_modify_write);

    // Cal Step: DFE H1-H3
    // Requires edge tracking (slave mode) and bank alignment
    int dfe_enable = mem_pg_field_get(rx_eo_enable_dfe_cal);

    if (dfe_enable)
    {
//    bool recal = false;
//    bool enable_min_eye_height = false;
        status |= rx_eo_dfe_fast(gcr_addr);
//    status |= rx_eo_dfe_full(gcr_addr, bank_a, recal, enable_min_eye_height);
    }

    // Cal Step: DDC
    // Requires edge tracking (slave mode) and bank alignment
    int ddc_enable = mem_pg_field_get(rx_eo_enable_ddc);

    if (ddc_enable)
    {
        bool recal = false;
        bool recal_dac_changed = false;
        status |= eo_ddc(gcr_addr, bank_a, recal, recal_dac_changed);

//    if (dfe_enable) {
//      // after running ddc, run dfe again to recenter at new sample position
//      bool enable_min_eye_height = true;
//      status |= rx_eo_dfe_full(gcr_addr, bank_a, recal, enable_min_eye_height);
//    }
    }

    // Perform Check of VGA, CTLE, LTE, and QPA values
    // Check pass/fail status of other steps
    // part of bist
    int bist_check_en = get_ptr_field(gcr_addr, rx_check_en_alias);

    if ( bist_check_en )
    {
        eo_vclq_checks(gcr_addr, bank_a);
    }

    // Cal Done: Re-enable CDR master mode on both banks and double check for lock
    set_debug_state(0x2015); // DEBUG - Init Cal Final Edge Tracking
    put_ptr_field(gcr_addr, rx_pr_edge_track_cntl_ab_alias, 0b100100, read_modify_write);
    bool set_fir_on_error = true;
    status |= wait_for_cdr_lock(gcr_addr, set_fir_on_error);

    // Turn on invalid lock detection again so the CDR can relock after psave mode
    put_ptr_field(gcr_addr, rx_pr_bit_lock_done_a, 0b0, read_modify_write);
    put_ptr_field(gcr_addr, rx_pr_bit_lock_done_b, 0b0, read_modify_write);

    // Clear cal lane sel
    clear_all_cal_lane_sel(gcr_addr); // clear rx_cal_lane_sel for all lanes

    // Set Bank A as Main and Bank B as Alt
    set_cal_bank(gcr_addr, bank_b);

    // Power Down the ALT Bank (if configured to power down). This should be Bank B after the above cal steps.
    int disable_bank_powerdown = mem_pg_field_get(rx_disable_bank_pdwn);

    if (!disable_bank_powerdown)
    {
        set_debug_state(0x201A); // DEBUG - Init Alt Bank Power Down
        put_ptr_field(gcr_addr, rx_psave_req_alt, 0b1, read_modify_write);
    }

    // Clear the recal count
    mem_pl_field_put(rx_lane_recal_cnt, lane, 0);
    mem_pl_bit_clr(rx_min_recal_cnt_reached, lane);

    // Clear the recal_abort sticky bit in case it was previously asserted
    put_ptr_field(gcr_addr, rx_dl_phy_recal_abort_sticky_clr, 0b1, fast_write); // strobe bit

    // Warning FIR and Bad Lane status on Warning/Error
    if ( (status & (warning_code | error_code)) )
    {
        set_rx_lane_bad(lane);
        set_fir(fir_code_warning);
    }
    else
    {
        clr_rx_lane_bad(lane); // Clear in case it was set by a prior training (and this is a retrain)
    }

    set_debug_state(0x202F); // DEBUG - INIT Cal Done
    CAL_TIMER_STOP;
} //eo_main_init


////////////////////////////////////////////////////////////////////////////////////
// RECAL
// Run Recal on the ALT bank of the lane specified in gcr_addr.
// Return code indicates rc_no_error or rc_abort.
////////////////////////////////////////////////////////////////////////////////////
int eo_main_recal(t_gcr_addr* gcr_addr)
{
    CAL_TIMER_START;
    set_debug_state(0x3000); // Debug - Recal Start
    int lane = get_gcr_addr_lane(gcr_addr);
#if IO_DEBUG_LEVEL >= 1
    mem_pg_field_put(rx_current_cal_lane, lane);
#endif

    // Run RX Recal
    int status = rc_no_error;

    if (status == rc_no_error)
    {
        // HW493618: Skip RX Recal when DL has powered down RX (bad lane)
        int dl_phy_rx_psave_req = get_ptr_field(gcr_addr, rx_psave_req_dl);

        if (!dl_phy_rx_psave_req)
        {
            status |= eo_main_recal_rx(gcr_addr);
        }
        else
        {
            // Avoid hang condition by setting min_recal_cnt_reached when RX recal not run
            mem_pl_bit_set(rx_min_recal_cnt_reached, lane);
        }
    }

    // Run TX Recal if no RX status
    if (status == rc_no_error)
    {
        // HW493618: Skip TX Recal when DL has powered down TX (bad lane)
        set_gcr_addr_reg_id(gcr_addr, tx_group); // set to tx gcr address
        int dl_phy_tx_psave_req_0_23 =
            (get_ptr_field(gcr_addr, tx_psave_req_dl_0_15_sts)  << 16) |
            (get_ptr_field(gcr_addr, tx_psave_req_dl_16_23_sts) << (16 - tx_psave_req_dl_16_23_sts_width));
        set_gcr_addr_reg_id(gcr_addr, rx_group); // set back to rx gcr address
        int lane_mask = (0x80000000 >> lane);
        int dl_phy_tx_psave_req = dl_phy_tx_psave_req_0_23 & lane_mask;

        if (!dl_phy_tx_psave_req)
        {
            status |= eo_main_recal_tx(gcr_addr);
        }
    }

    set_debug_state(0x302F); // DEBUG - Recal Done
    CAL_TIMER_STOP;
    return status;
} //eo_main_recal


//////////////
// RX Recal //
//////////////
static int eo_main_recal_rx(t_gcr_addr* gcr_addr)
{
    int lane = get_gcr_addr_lane(gcr_addr);

    // Check for abort and exit with abort code if detected
    int status = check_rx_abort(gcr_addr);

    if (status != rc_no_error)
    {
        set_debug_state(0x30FF); // Debug - Recal Abort

        // Just set min_recal_cnt_reached regardless of recal count so exit loop
        mem_pl_bit_set(rx_min_recal_cnt_reached, lane);

        set_fir(fir_code_recal_abort);
        return status;
    }

    // Use bank_sel_a (HW latch) to tell which is the Main Bank so can calibrate the Alternate Bank. Could improve the speed of this by storing
    // this info in the mem_regs for each lane; however, reading it once per-recal from HW is less prone to errors and does not significantly hurt speed.
    int bank_sel_a  = get_ptr_field(gcr_addr, rx_bank_sel_a);
    t_bank cal_bank = (bank_sel_a == 0) ? bank_a : bank_b;

    // Wait for the lane to be powered up (controlled by DL)
    int phy_dl_rx_psave_sts = 1;

    while (phy_dl_rx_psave_sts)
    {
        phy_dl_rx_psave_sts = get_ptr_field(gcr_addr, rx_psave_sts_phy);
    }

    // Power up the ALT bank (if configured to power it up/down)
    int disable_bank_powerdown = mem_pg_field_get(rx_disable_bank_pdwn);

    if (!disable_bank_powerdown)
    {
        set_debug_state(0x3004); // DEBUG - Recal Alt Bank Power Up
        put_ptr_field(gcr_addr, rx_psave_req_alt, 0b0, read_modify_write);
        int psave_sts = 1;

        while (psave_sts)
        {
            psave_sts = get_ptr_field(gcr_addr, rx_psave_sts_alt);
        }
    }

    // reset rx io domain  - HW504112
    put_ptr_field(gcr_addr, rx_iodom_ioreset,        0b1, read_modify_write); //pl  reset rx io domain
    put_ptr_field(gcr_addr, rx_iodom_ioreset,        0b0, read_modify_write); //pl  reset rx io domain

    // Select the cal lane after powering up the ALT bank
    clear_all_cal_lane_sel(gcr_addr); // clear rx_cal_lane_sel for all lanes
    put_ptr_field(gcr_addr, rx_set_cal_lane_sel, 0b1, fast_write); // strobe bit
    put_ptr_field(gcr_addr, rx_cal_lane_pg_phy_gcrmsg, lane, read_modify_write);

    // See if this is the very first recal on un-initialized bank B.
    // Check both recal_cnt and min_recal_cnt_reached in case recal_cnt was cleared (or rolled over).
    // If this is the very first recal, run it as init so that Bank B gets one pass through init sequence.
    unsigned int recal_cnt = mem_pl_field_get(rx_lane_recal_cnt, lane);
    int min_recal_cnt_reached = mem_pl_field_get(rx_min_recal_cnt_reached, lane);
    bool first_recal = (recal_cnt == 0) && (!min_recal_cnt_reached);
    bool recal = !first_recal;

    // Cal Step: VGA (Gain & Path Offset)
    // Does not require edge tracking or bank alignment
    int vga_enable = mem_pg_field_get(rx_rc_enable_vga_cal);

    if (vga_enable && (status == rc_no_error))
    {
        bool copy_gain_to_b = false;
        bool copy_gain_to_b_loop = false;
        bool gain_changed = false;
        bool first_loop_iteration =
            true; //Used in VGA logic for init hardware so we want run into dither issue, hardcode for recal
        status |= eo_vga(gcr_addr, cal_bank, &gain_changed, recal, copy_gain_to_b, copy_gain_to_b_loop, first_loop_iteration);
    }

    // Enable both Bank CDRs in Master Mode and wait for lock on both banks.
    if (status == rc_no_error)
    {
        set_debug_state(0x300F); // DEBUG - Recal Enable Edge Tracking
        put_ptr_field(gcr_addr, rx_pr_edge_track_cntl_ab_alias, 0b100100, read_modify_write);
        bool set_fir_on_error = false;
        wait_for_cdr_lock(gcr_addr, set_fir_on_error);
    }

    // Cal Step: Edge Offset (Live Data)
    // Requires edge tracking (master mode) but does not require bank alignment
    int eoff_enable = mem_pg_field_get(rx_rc_enable_edge_offset_cal);

    if (eoff_enable && (status == rc_no_error))
    {
        status |= eo_eoff(gcr_addr, recal, 1, cal_bank);
    }

    // Cal Step: Quad Phase Adjust (Edge NS to EW phase adjustment)
    // Requires edge tracking (master mode) but does not require bank alignment
    int quad_enable = mem_pg_field_get(rx_rc_enable_quad_phase_cal);

    if (quad_enable && (status == rc_no_error))
    {
        bool quad_adjust_changed = false;
        status |= eo_qpa(gcr_addr, cal_bank, recal, &quad_adjust_changed);
    }

    // Cal Step: CTLE (Peaking)
    // Requires edge tracking (master mode) but does not require bank alignment
    int ctle_enable = mem_pg_field_get(rx_rc_enable_ctle_peak_cal);

    if (ctle_enable && (status == rc_no_error))
    {
        bool peak_changed = false;
        bool copy_peak_to_b = false;
        bool rough_only = false;
        status |= eo_ctle(gcr_addr, cal_bank, copy_peak_to_b, &peak_changed, first_recal, rough_only);
    }

    // Cal Step: LTE
    // Requires edge tracking (master mode) but does not require bank alignment
    int lte_enable = mem_pg_field_get(rx_rc_enable_lte_cal);

    if (lte_enable && (status == rc_no_error))
    {
        bool lte_changed = false;
        bool lte_recal = true;
        bool copy_lte_to_b = false;
        status |= eo_lte(gcr_addr, cal_bank, copy_lte_to_b, lte_recal, &lte_changed);
    }

    // Perform Bank A/B UI Alignment
    // Requires edge tracking (master mode)
    int bank_sync_enable = mem_pg_field_get(rx_rc_enable_bank_sync);

    if (bank_sync_enable && (status == rc_no_error))
    {
        status |= align_bank_ui(gcr_addr, cal_bank);
    }

    // Put Alt (Cal) bank into CDR Slave mode for  DFE Amp Measurements and DDC
    if (status == rc_no_error)
    {
        if (cal_bank == bank_a)
        {
            put_ptr_field(gcr_addr, rx_pr_slave_mode_a, 0b1, read_modify_write);
        }
        else
        {
            put_ptr_field(gcr_addr, rx_pr_slave_mode_b, 0b1, read_modify_write);
        }
    }

    // Cal Step: DFE H1-H3
    // Requires edge tracking (slave mode) and bank alignment
    int dfe_enable = mem_pg_field_get(rx_rc_enable_dfe_cal);

    if (dfe_enable && (status == rc_no_error))
    {
        // Enable the min eye height checks if past the first recal on Bank B or on the last iteration of that first recal
        bool enable_min_eye_height = ( min_recal_cnt_reached || (mem_pg_field_get(rx_min_recal_cnt) == (recal_cnt + 1)) );
        status |= rx_eo_dfe_full(gcr_addr, cal_bank, recal, enable_min_eye_height);
    }

    // Cal Step: DDC
    // Requires edge tracking (slave mode) and bank alignment
    int ddc_enable = mem_pg_field_get(rx_rc_enable_ddc);

    if (ddc_enable && (status == rc_no_error))
    {
        bool recal_dac_changed =
            false; //TIE: This is a placeholder. The default behavior is NOT to change the DDC JUST because a DAC changed.
        status |= eo_ddc(gcr_addr, cal_bank, recal, recal_dac_changed);
    }

    // Update recal count and check if the min recal count has been reached
    recal_cnt = recal_cnt + 1;

    if (recal_cnt > 0xFFFF)
    {
        recal_cnt = 0;
    }

    mem_pl_field_put(rx_lane_recal_cnt, lane, recal_cnt);

    if (!min_recal_cnt_reached)
    {
        unsigned int min_recal_cnt = mem_pg_field_get(rx_min_recal_cnt);

        if (recal_cnt >= min_recal_cnt)
        {
            mem_pl_bit_set(rx_min_recal_cnt_reached, lane);
            min_recal_cnt_reached = 1;
        }
    }

    // Clear cal lane sel
    clear_all_cal_lane_sel(gcr_addr); // clear rx_cal_lane_sel for all lanes

    // Re-enable CDR master mode on both banks (disable CDR slave mode)
    put_ptr_field(gcr_addr, rx_pr_edge_track_cntl_ab_alias, 0b100100, read_modify_write);

    // Perform Check of VGA, CTLE, LTE, and QPA values
    // Check pass/fail status of other steps, too
    // part of bist
    int bist_check_en = get_ptr_field(gcr_addr, rx_check_en_alias);

    if ( bist_check_en )
    {
        eo_vclq_checks(gcr_addr, cal_bank);
    }

    // In Recal, only switch banks at the end of a lane's recal when no abort or error and if reached the min lane recal count
    status |= check_rx_abort(gcr_addr);

    if (status == rc_no_error)
    {
        if (min_recal_cnt_reached)
        {
            // Cal Done:  Double check lock
            set_debug_state(0x3015); // DEBUG - Recal Final Edge Tracking and Bank Switch
            bool set_fir_on_error = true;
            wait_for_cdr_lock(gcr_addr, set_fir_on_error);

            // Switch banks
            cal_bank = switch_cal_bank(gcr_addr, cal_bank);
        }
        else     //!min_recal_cnt_reached
        {
            // Do not power down the Alt bank if still haven't reached the recal count since will be immediately re-running recal.
            disable_bank_powerdown = 1;
        }
    }
    else     // status!=rc_no_error - some status needs to be handled
    {
        // Recal Abort FIR
        if (status & abort_code)
        {
            set_fir(fir_code_recal_abort);
        }

        // Warning FIR and Bad Lane status on Warning/Error
        if ( (status & (warning_code | error_code)) )
        {
            set_rx_lane_bad(lane);
            set_fir(fir_code_warning);
        }
    } //if(status==rc_no_error)


    // Power Down the Alternate Bank (new cal_bank)
    if (!disable_bank_powerdown)
    {
        set_debug_state(0x301A); // DEBUG - Recal Alt Bank Power Down
        put_ptr_field(gcr_addr, rx_psave_req_alt, 0b1, read_modify_write);
    }

    return status;
} //eo_main_recal_rx


//////////////
// TX Recal //
//////////////
static int eo_main_recal_tx(t_gcr_addr* gcr_addr)
{
    int status = rc_no_error;
    set_gcr_addr_reg_id(gcr_addr, tx_group); // set to tx gcr address

    // Wait for the lane to be powered up (controlled by DL)
    int lane = get_gcr_addr_lane(gcr_addr);
    int lane_mask = (0x80000000 >> lane);
    int phy_dl_tx_psave_sts = 1;

    while (phy_dl_tx_psave_sts)
    {
        int phy_dl_tx_psave_sts_0_23 =
            (get_ptr_field(gcr_addr, tx_psave_sts_phy_0_15_sts)  << 16) |
            (get_ptr_field(gcr_addr, tx_psave_sts_phy_16_23_sts) << (16 - tx_psave_sts_phy_16_23_sts_width));
        phy_dl_tx_psave_sts = phy_dl_tx_psave_sts_0_23 & lane_mask;
    }

    // Cal Step: TX DCC
    int tx_dcc_enable = mem_pg_field_get(tx_rc_enable_dcc);

    if (tx_dcc_enable && (status == rc_no_error))
    {
        status |= tx_dcc_main_adjust(gcr_addr);
    }

    set_gcr_addr_reg_id(gcr_addr, rx_group); // set back to rx gcr address
    return status;
} //eo_main_recal_tx
