/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_common.c $            */
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
// *! FILENAME    : eo_common.c
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
// vbr20101201 |vbr     | HW549006: Removed the abort check on recal_req since that doesn't work with auto recal and command interface recals.
// vbr20101200 |vbr     | HW549006: DL asserting psave_req or lowering recal_req when entering degraded mode is treated as a recal abort.
// gap20091500 |gap     | HW542315: updated to use is_p10_dd1
// bja20090800 |bja     | HW542315: make in_tx_half_width_mode() return false for p10 dd1 omi
// gap20082500 |gap     | HW542315: add tx_write_4_bit_pat to handle half/full width modes
// vbr20030500 |vbr     | HW523782/HW523779: When fw_spread_en, min cdr lock wait time is 5us.
// mwh20040201 |mwh     | Fix a issue with having cap Int change to int -- add ; in debug_state in fir.
// mwh20040200 |mwh     | Fix a comment issue had tx when should of been rx
// mwh20040100 |mwh     | Add in debug state for check_for_rxpsave_req_sts and check_for_txpsave_req_sts
// mwh20022400 |mwh     | Add in function check_for_rxpsave_req_sts and check_for_txpsave_req_sts
// vbr20021100 |vbr     | HW522731: smarter lane cal copy based on flywheel lane.
// vbr20020600 |vbr     | HW522210: Check for lane_bad before copying lane cal; added set/clr_rx_lane_bad() functions.
// bja20021300 |bja     | Don't override tx_fifo_l2u_dly bc reset val is appropriate
// bja20020500 |bja     | Add tx_fifo_init()
// cws20011400 |cws     | Added Debug Logs
// jfg19091200 |jfg     | Experimental ONLY change for DFE filter parms RE ALLEYEOPT DAC inconsistency
// vbr19092601 |vbr     | Added option to enable/disable copying of LTE settings between lanes
// mbs19072500 |mbs     | Added amp_setting_ovr_enb
// mbs19051600 |mbs     | HW491617: Separated servo setup for dfe_fast and dfe_full
// vbr19050500 |vbr     | Copy LTE settings between lanes
// vbr19041500 |vbr     | Updated register names
// mbs19030400 |mbs     | Added set_fir call in check_rx_abort
// vbr19012200 |vbr     | Only check recal abort when init_done.
// cws19011300 |cws     | Updated dfe rx_eo_servo_setup inc2/dec2 to latest defaults
// vbr18111400 |vbr     | Updated calls to set_fir.
// vbr18101700 |vbr     | Updated wait_for_cdr_lock() to use the timescaling (not needed if we always run at same frequency, but safer to include).
// vbr18100300 |vbr     | Improved efficiency of wait_for_cdr_lock().
// vbr18100200 |vbr     | wait_for_cdr_lock() now has an option to set the fir on a lock fail and uses the timer for the timeout.
// cws18092600 |cws     | Added rx_eo_servo_setup()
// vbr18082000 |vbr     | Restructured check_rx_abort()
// vbr18081701 |vbr     | Added some assumption checking
// vbr18033100 |vbr     | Updated CDR controls.
// vbr18022000 |vbr     | Updating CDR controls.
// vbr17103100 |vbr     | Check abort sticky bit.
// jgr17091800 |jgr     | Commented out edge bank logic
// vbr17062901 |vbr     | Switched from DdcEdgeToInt to TwosCompToInt.
// vbr17062900 |vbr     | Removed thread input from various functions.
// vbr17062200 |vbr     | Commented out uses of registers which no longer exist.
// vbr17061200 |vbr     | Added check of NVDL signals to check_rx_abort().
// vbr17051800 |vbr     | Remove IOF code.
// vbr17022200 |vbr     | Added function to adjust latch offset.
// vbr17011800 |vbr     | Added function for copying lane cal results to another lane as a starting point.
// vbr16102700 |vbr     | Separated return codes for check_rx_abort
// mtk16100600 |mtk     | Added sls_valid_cmd_rcv checker function
// mtk16093000 |mtk     | Used SLS structs throughout SLS functions
// mtk16092900 |mtk     | Added function to calculate the SLS sleep count wait
// vbr16082500 |vbr     | Moved recal check out of check_rx_abort_base
// vbr16081800 |vbr     | Moved some functions from eo_common to io_lib (and renamed some).
// vbr16081700 |vbr     | Added ppe_last_thread_run to io_sleep() and updated check_rx_abort
// vbr16080800 |vbr     | Minor changes to reduce code size of switch_cal_bank/set_cal_bank
// vbr16072700 |vbr     | Simplified set_lane_invalid a little.
// vbr16072600 |vbr     | Replaced Debruijn with __builtin_ctz (significantly faster, ~248B saved).
// vbr16072001 |vbr     | set_cal_bank is no longer inline (fairly large & wasn't inlining anyways).
// vbr16072000 |vbr     | Added polling_interval constant
// vbr16071400 |vbr     | io_wait() is no longer valid for IOO, brought in PK_BASE_FREQ_HZ fix
// vbr16071300 |vbr     | io_wait() is no longer inline
// vbr16070100 |vbr     | Optimization to get ddc width
// vbr16062700 |vbr     | Switch to gcr_addr functions; fixed a few calls that seemed to be using thread/group incorrectly
// mbs16062400 |mbs     | Added gcr_addr struct
// vbr16060800 |vbr     | Updated return codes and timeouts
// vbr16060700 |vbr     | io_sleep() & run_servo_op_and_get_result() are no longer inline
// mtk16060200 |mtk     | Fixed shift up in io_set_rx_sls_ln function
// vbr16050500 |vbr     | Moved mem_regs and various functions from eo_common to io_lib
// vbr16042700 |vbr     | Multithreaded (initial round-robin implementation)
// vbr16042600 |vbr     | Different bits set in servo op in recal for IOO/IOF
// vbr16042100 |vbr     | Removed unneeded init_interrupts() & init_mem_regs()
// vbr16042000 |vbr     | Added procedure for setting lane_invalid bits (IOF only)
// vbr16032300 |vbr     | Added procedure for getting lane eye width from ddc results
// vbr16032200 |vbr     | Added timeout on edge tracking and error code
// vbr16031700 |vbr     | Moved some functions from inline to non-inline
// vbr16030400 |vbr     | Initial Rev
// -----------------------------------------------------------------------------

#include <stdbool.h>
#include <stdint.h>

#include "io_lib.h"
#include "pk.h"

#include "eo_common.h"
#include "io_logger.h"

#include "ppe_fw_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FUNCTIONS / PROCEDURES
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Wait for lock on both banks.
// Set FIR if not locked after X checks.
// Lock could take relatively long due to spread spectrum, so use sleep in between checks.
PK_STATIC_ASSERT(rx_pr_locked_ab_alias_width == 2);
int wait_for_cdr_lock(t_gcr_addr* gcr_addr, bool set_fir_on_error)
{
    PkTimebase start_time = pk_timebase_get();

    // HW523782/HW523779: When spread is enabled, we wait a minumum of 5 us before checking for lock.
    // This is to prevent advancing on the false lock that may occur when the flywheel is far from the correct value.
    // Since this function is called both right after enabling the CDR and again at the end of cal before switching banks,
    // this minimum wait will be incurred twice in each calibration.
    if (fw_field_get(fw_spread_en))
    {
        io_wait_us(get_gcr_addr_thread(gcr_addr), 5); // sleep until 5us has elapsed
    }

    while ( true )
    {
        // Check CDR status
        int locked_ab = get_ptr_field(gcr_addr, rx_pr_locked_ab_alias);

        if (locked_ab == 0b11)
        {
            return pass_code; // Exit when locked
        }
        else
        {
            // Check timeout if not locked as yet
            bool timeout = (pk_timebase_get() - start_time) > (32 * scaled_microsecond);

            if (timeout)
            {
                if(set_fir_on_error)
                {
                    set_fir(fir_code_warning);    // Set FIR on a timeout.
                }

                ADD_LOG(DEBUG_RX_CDR_LOCK_TIMEOUT, gcr_addr, locked_ab);
                return warning_code; // Exit when timeout
            }

            // Sleep before polling again
#if PK_THREAD_SUPPORT
            io_sleep(get_gcr_addr_thread(gcr_addr));
#else
            io_spin_us(polling_interval_us);
#endif
        } //if...else...
    } //while
} //wait_for_cdr_lock

// Abort check
// Called after servo ops to check for an abort condition. Returns abort_code if an abort code is detected; returns pass_code otherwise.
int check_rx_abort(t_gcr_addr* gcr_addr)
{
    int ret_val = pass_code;

    // Only perform when rx_init_done=1 (only in recal).
    int lane = get_gcr_addr_lane(gcr_addr);
    int init_done = mem_pl_field_get(rx_init_done, lane);

    if (init_done)
    {
        // Check the recal_abort mem_reg and the DL sticky abort signal.
        int abort_val0 = mem_pl_field_get(rx_recal_abort, lane);
        int abort_val1 = get_ptr_field(gcr_addr, rx_dl_phy_recal_abort_sticky);
        int abort_val  = (abort_val0 | abort_val1);

        // HW549006: DL may assert psave_req and lower recal_req in the middle of a recal when entering degraded mode; treat this as an abort.
        // Only checking psave_req and not recal_req since recal_req will not be asserted in an auto recal or command interface recal.
        //int recal_req = get_ptr_field(gcr_addr, rx_dl_phy_recal_req);
        int psave_req = get_ptr_field(gcr_addr, rx_psave_req_dl);

        if ( abort_val | psave_req )
        {
            ret_val = abort_code;
            set_fir(fir_code_recal_abort); // Added call to set_fir in order to trap ppe_error_state info
            ADD_LOG(DEBUG_RECAL_ABORT, gcr_addr, 0x0);
        }
        else
        {
            ret_val = pass_code;
        }
    }

    return ret_val;
} //check_rx_abort


// Copy the cal results to destination lane from its flywheel source lane to use as a starting point.
// To save time, only reads some of the Bank A results and copies them where needed by cal.
// Does not copy if source lane is un-calibrated or marked as lane_bad.
// gcr_addr->lane will be set to lane_dst after calling this function.
PK_STATIC_ASSERT(rx_a_ctle_gain_peak_full_reg_alias_width == 16);
PK_STATIC_ASSERT(rx_b_ctle_gain_peak_full_reg_alias_width == 16);
PK_STATIC_ASSERT(rx_a_lte_gain_zero_alias_width == rx_b_lte_gain_zero_alias_width);
void eo_copy_lane_cal(t_gcr_addr* gcr_addr, int lane_dst)
{
    // HW522731: Use the psave flywheel snapshot source lane as the cal source
    set_gcr_addr_lane(gcr_addr, lane_dst);
    int fw_mux_sel = get_ptr_field(gcr_addr, rx_psave_fw_val_sel);
    int lane_src;

    if (fw_mux_sel == 0)
    {
        lane_src = get_ptr_field(gcr_addr, rx_psave_fw_val0_sel);
    }
    else if (fw_mux_sel == 1)
    {
        lane_src = get_ptr_field(gcr_addr, rx_psave_fw_val1_sel);
    }
    else if (fw_mux_sel == 2)
    {
        lane_src = get_ptr_field(gcr_addr, rx_psave_fw_val2_sel);
    }
    else     //fw_mux_sel == 3
    {
        lane_src = get_ptr_field(gcr_addr, rx_psave_fw_val3_sel);
    }

    // HW522210: If the source lane is un-calibrated or marked as bad, do not copy from it (return without doing anything)
    if ( !mem_pl_field_get(rx_init_done, lane_src) || mem_pl_field_get(rx_lane_bad, lane_src) )
    {
        return;
    }

    // Additional settings
    bool lte_copy_en = mem_pg_field_get(rx_enable_lane_cal_lte_copy);

    // Read from source lane
    set_gcr_addr_lane(gcr_addr, lane_src);
    int gain_and_peak = get_ptr_field(gcr_addr, rx_a_ctle_gain_peak_full_reg_alias); // ctle_gain and ctle_peak1/2
    int lte_gain_zero = 0;

    if (lte_copy_en)
    {
        lte_gain_zero = get_ptr_field(gcr_addr, rx_a_lte_gain_zero_alias); // lte_gain and lte_zero
    }

    // Write to destination lane
    set_gcr_addr_lane(gcr_addr, lane_dst);
    put_ptr_field(gcr_addr, rx_a_ctle_gain_peak_full_reg_alias, gain_and_peak, fast_write);
    put_ptr_field(gcr_addr, rx_b_ctle_gain_peak_full_reg_alias, gain_and_peak, fast_write);

    if (lte_copy_en)
    {
        put_ptr_field(gcr_addr, rx_a_lte_gain_zero_alias, lte_gain_zero, read_modify_write);
        put_ptr_field(gcr_addr, rx_b_lte_gain_zero_alias, lte_gain_zero, read_modify_write);
    }
} //eo_copy_lane_cal


void rx_eo_servo_setup(t_gcr_addr* i_tgt, const t_servo_setup i_servo_setup)
{
    // Switch for sim or lab to disable settings overrides
    int amp_setting_ovr = mem_regs_u16_get(pg_addr(amp_setting_ovr_enb_addr), amp_setting_ovr_enb_mask,
                                           amp_setting_ovr_enb_shift);

    switch(i_servo_setup)
    {
        case SERVO_SETUP_VGA:
            put_ptr_field(i_tgt, rx_amp_servo_mask_h0      , 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_servo_vote_bias_dec, 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_servo_vote_bias_inc, 0x01, read_modify_write);

            if ( amp_setting_ovr == 0 )
            {
                put_ptr_field(i_tgt, rx_amp_filter_depth_inc0  , 0x00, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_inc1  , 0x00, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_inc2  , 0x00, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_inc3  , 0x00, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_dec0  , 0x04, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_dec1  , 0x04, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_dec2  , 0x04, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_dec3  , 0x06, read_modify_write);
            }

            break;

        case SERVO_SETUP_DFE_FAST:
            put_ptr_field(i_tgt, rx_amp_servo_mask_h0      , 0x01, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_servo_vote_bias_dec, 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_servo_vote_bias_inc, 0x00, read_modify_write);

            if ( amp_setting_ovr == 0 )
            {
                put_ptr_field(i_tgt, rx_amp_filter_depth_inc0  , 0x03, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_dec0  , 0x03, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_inc1  , 0x02, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_dec1  , 0x02, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_inc2  , 0x02, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_dec2  , 0x02, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_inc3  , 0x05, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_dec3  , 0x04, read_modify_write);
            }

            break;

        case SERVO_SETUP_DFE_FULL:
            put_ptr_field(i_tgt, rx_amp_servo_mask_h0      , 0x01, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_servo_vote_bias_inc, 0x00, read_modify_write);
            put_ptr_field(i_tgt, rx_amp_servo_vote_bias_dec, 0x01, read_modify_write);

            if ( amp_setting_ovr == 0 )
            {
                put_ptr_field(i_tgt, rx_amp_filter_depth_inc0  , 0x05, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_dec0  , 0x00, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_inc1  , 0x05, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_dec1  , 0x01, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_inc2  , 0x04, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_dec2  , 0x00, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_inc3  , 0x06, read_modify_write);
                put_ptr_field(i_tgt, rx_amp_filter_depth_dec3  , 0x00, read_modify_write);
            }

            break;
    }

    return;
}

// Broadcast write pulse to rx_clr_cal_lane_sel.
// Activates data pipe clocks, allowing lingering data to clear.
void clear_all_cal_lane_sel(t_gcr_addr* gcr_addr)
{
    // save currently active lane
    int saved_lane = get_gcr_addr_lane(gcr_addr);
    // use broadcast lane num
    set_gcr_addr_lane(gcr_addr, bcast_all_lanes);
    // broadcast write pulse to clr reg
    put_ptr_field(gcr_addr, rx_clr_cal_lane_sel, 0b1, fast_write);
    // restore active lane
    set_gcr_addr_lane(gcr_addr, saved_lane);
    return;
}




// Functions to set or clear a lane's status in rx_lane_bad (pl) and rx_lane_bad_0_23 (pg)
PK_STATIC_ASSERT(rx_lane_bad_0_15_width == 16);
PK_STATIC_ASSERT(rx_lane_bad_16_23_width == 8);
PK_STATIC_ASSERT(rx_lane_bad_16_23_startbit == 0);
void set_rx_lane_bad(unsigned int lane)
{
    uint32_t lane_mask = 0x80000000 >> lane;

    if (lane < 16)
    {
        mem_regs_u16_bit_set(pg_addr(rx_lane_bad_0_15_addr), (lane_mask >> 16));
    }
    else     // lane>=16
    {
        mem_regs_u16_bit_set(pg_addr(rx_lane_bad_16_23_addr), lane_mask);
    }

    mem_pl_bit_set(rx_lane_bad, lane);
} //set_rx_lane_bad()

void clr_rx_lane_bad(unsigned int lane)
{
    uint32_t lane_mask = 0x80000000 >> lane;

    if (lane < 16)
    {
        mem_regs_u16_bit_clr(pg_addr(rx_lane_bad_0_15_addr), (lane_mask >> 16));
    }
    else     // lane>=16
    {
        mem_regs_u16_bit_clr(pg_addr(rx_lane_bad_16_23_addr), lane_mask);
    }

    mem_pl_bit_clr(rx_lane_bad, lane);
} //clr_rx_lane_bad()


// apply (un)load settings and synchronize
void tx_fifo_init(t_gcr_addr* gcr_addr)
{
    // (BJA 2/5/20) Override TX FIFO "margin" settings here in PPE code
    // because it's too close to RIT to change the RegDef.
    // The unload select is reduced by 1 to maintain same the margins
    // as were seen in simulation prior to the HW521134 verilog update.
    //put_ptr_field(gcr_addr, tx_fifo_l2u_dly, 0b001, read_modify_write);
    put_ptr_field(gcr_addr, tx_unload_sel,   0b100, read_modify_write);

    put_ptr_field_fast(gcr_addr, tx_clr_unload_clk_disable,   0b1);
    put_ptr_field_fast(gcr_addr, tx_fifo_init,   0b1);
    put_ptr_field_fast(gcr_addr, tx_set_unload_clk_disable,   0b1);
    return;
}

//Check that tx psave is quiesced and that req is not = 1 will set fir
void check_for_txpsave_req_sts(t_gcr_addr* gcr_addr)  //start void
{
    set_debug_state(0x0300); //start check_for_txpsave_req_sts
    set_gcr_addr_reg_id(gcr_addr, tx_group);

// Wait for the lane to has req = sts
    int lane_mask = (0x80000000 >> get_gcr_addr_lane(gcr_addr));
    int tx_psave_req = 0;
    int cnt = 0;
    int phy_dl_tx_psave_sts_0_23, phy_dl_tx_psave_req_0_23;

    do
    {
        cnt++;

        if (cnt == 32) //begin if
        {
            set_debug_state(0x0301); //in tx sleep cnt loop
            cnt = 0;
            io_sleep(get_gcr_addr_thread(gcr_addr));
        }//end if

        phy_dl_tx_psave_sts_0_23 = (get_ptr_field(gcr_addr, tx_psave_sts_phy_0_15_sts)  << 16) |
                                   (get_ptr_field(gcr_addr, tx_psave_sts_phy_16_23_sts) << (16 - tx_psave_sts_phy_16_23_sts_width));

        phy_dl_tx_psave_req_0_23 = (get_ptr_field(gcr_addr, tx_psave_req_dl_0_15_sts)  << 16) |
                                   (get_ptr_field(gcr_addr, tx_psave_req_dl_16_23_sts) << (16 - tx_psave_req_dl_16_23_sts_width));

        tx_psave_req = phy_dl_tx_psave_req_0_23 &
                       lane_mask;//bit and the lane sts with mask change all to 0 but the lane that looking at

    }
    while (((phy_dl_tx_psave_sts_0_23  ^ phy_dl_tx_psave_req_0_23 )& lane_mask) !=
           0);  // bit xoring and using mask to get lane want look at

    set_debug_state(0x0302); //out of do loop check_for_txpsave_req_sts

    //If the powerdown lane req is high after check that req=sts -- error -- see Mike S -- CQ522215
    if (tx_psave_req != 0 )
    {
        set_debug_state(0x0303);
        set_fir(fir_code_fatal_error);
    }

}//end void

//Check that rx psave is quiesced and that req is not = 1 will set fir
void check_for_rxpsave_req_sts(t_gcr_addr* gcr_addr)  //begin void
{
    set_debug_state(0x0310); //start check_for_rxpsave_req_sts
    // Wait for the lane to has req = sts
    set_gcr_addr_reg_id(gcr_addr, rx_group);

    //If the powerdown lane is asked for but we are doing a init or recal than that a no-no see Mike S -- CQ522215
    int rx_dl_phy_run_lane_int =  get_ptr_field (gcr_addr, rx_dl_phy_run_lane);
    int rx_dl_phy_recal_req_int =  get_ptr_field (gcr_addr, rx_dl_phy_recal_req);

    if ((rx_dl_phy_run_lane_int == 1) || (rx_dl_phy_recal_req_int == 1 ))
    {
        set_debug_state(0x0314);
        set_fir(fir_code_fatal_error);
    }

    int rx_psave_sts_alt_int , rx_psave_req_alt_int;
    int rx_psave_sts_phy_int, rx_psave_req_dl_int;
    int cnt = 0;

    do
    {
        cnt++;

        if (cnt == 32) //begin if
        {
            set_debug_state(0x0311); //in rx sleep cnt loop
            cnt = 0;
            io_sleep(get_gcr_addr_thread(gcr_addr));
        }//end if

        rx_psave_sts_alt_int = get_ptr_field(gcr_addr, rx_psave_sts_alt );//pl
        rx_psave_req_alt_int = get_ptr_field(gcr_addr, rx_psave_req_alt);//pl

        rx_psave_sts_phy_int = get_ptr_field(gcr_addr, rx_psave_sts_phy);//pl
        rx_psave_req_dl_int = get_ptr_field(gcr_addr, rx_psave_req_dl);//pl


    }
    while (((rx_psave_sts_alt_int ^ rx_psave_req_alt_int) != 0) || ((rx_psave_sts_phy_int ^ rx_psave_req_dl_int) != 0));

    set_debug_state(0x0312); //out of do loop check_for_rxpsave_req_sts

    //If the powerdown lane req is high after check that req=sts -- error -- see Mike S -- CQ522215
    if ((rx_psave_req_alt_int != 0 ) || (rx_psave_req_dl_int != 0 ))
    {
        set_debug_state(0x0313);
        set_fir(fir_code_fatal_error);
    }

}//end void

// write a repeating 4-bit pattern to the tx pattern register
void tx_write_4_bit_pat(t_gcr_addr* gcr_addr, unsigned int pat_4)
{
    unsigned int pat_8 = 0;
    unsigned int pat_16 = 0;

    // this copies the 4-bits to the even bits of an 8-bit word,
    // considering msb as 0
    // two steps to move to odd; then, shift 1 to move to even
    if (in_tx_half_width_mode())
    {
        pat_8 = ((pat_4 << 2) | pat_4) & 0x33; // move 2 msb over 2; odd bits are in correct relative place now
        pat_8 = ((pat_8 << 1) | pat_8) & 0x55; // move even bits over 1;
        pat_8 = pat_8 << 1; // shift to move odd to even
    }
    else
    {
        pat_8 = pat_4 | (pat_4 << 4);
    }

    pat_16 = pat_8 | (pat_8 << 8);

    put_ptr_field(gcr_addr, tx_pattern_0_15,   pat_16,  fast_write);
    put_ptr_field(gcr_addr, tx_pattern_16_31,  pat_16,  fast_write);
    put_ptr_field(gcr_addr, tx_pattern_32_47,  pat_16,  fast_write);
    put_ptr_field(gcr_addr, tx_pattern_48_63,  pat_16,  fast_write);
} // tx_write_4_bit_pat

// Determine if in tx_half_width_mode
bool in_tx_half_width_mode()
{
    bool half_width_mode = false;

    if ( is_p10_dd1() )
    {
        // HW542315: Even though OMI is 16:1, it does not use half width mode. In P10 DD1 -
        // the only time that hwm is possible - OMI can be distinguished by fw_num_lanes=16.
        // Checking ppe_current_thread was also a candidate, but so far it's only used for
        // debug. Its reliability is untested.
        if ( fw_field_get(fw_num_lanes) != 16 )
        {
            half_width_mode = true;
        }
    }

    return half_width_mode;
} // in_tx_half_widt_mode


