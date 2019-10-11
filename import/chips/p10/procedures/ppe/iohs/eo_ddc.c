/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_ddc.c $               */
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
// *! FILENAME    : eo_ddc.c
// *! TITLE       :
// *! DESCRIPTION : Run DDC and update the historical eye width
// *|                 The Quad Phase Adjust (QPA) is also calculated independently for data phases.
// *!
// *! OWNER NAME  : John Gullickson     Email: gullicks@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// jfg19090900 |jfg     | HW499875 As described in Verif Forum All Eye Opt remove the max_eye condition on the
//             |        | initial edge search in 8002 (still relies on the one in 8023).
//             |        | In state 8002 the step jump-back of data/edge will now use all data steps to avoid running out.
// jfg19071800 |jfg     | HW502715 Restore quads to original position in 8023 pre edge tune
// jfg19071800 |jfg     | HW497599 prevent async hazard when changing berpl_thresh
// jfg19071800 |jfg     | HW496621 Add status indicator for lack of mini-PR steps when seeking edges.
// jfg19062400 |jfg     | moved single stepping wrapper function down into nedge_seek_step so use original
// vbr19061200 |vbr     | HW492354/HW492202 - With Mini PR gray coding, can only move Mini PR 1 step at at time.
// jfg19061700 |jfg     | Enhance Eye search with extra double step correction into error free window if too many errors
// jfg19061500 |jfg     | Repair lefthand error recenter of negative edge. Attempt to detect direction change in hysteresis accounting.
// jfg19060600 |jfg     | Enhance error-based recentering for wierd data & edge relationships
// jfg19060600 |jfg     | Prevent lefthand seek hang
// jfg19052203 |jfg     | Remove commented code
// jfg19052000 |jfg     | Remove lock sticky check as not intended.
// jfg19050801 |jfg     | HW475341 Split rx_ddc_hist_left_edge for a & b banks. Replace ppe_ddc_failed_status with rx_ddc_fail
// jfg19050800 |jfg     | Fix endless loop in leftward seek due to data step == 0
// jfg19043000 |jfg     | Missing else on max_eye conditional in seek_loop causing EW eye tune to be skipped
// jfg19043000 |jfg     | Minor change to move BER threshold reset after fuzz is found.
// jfg19042500 |jfg     | Fix threshold limit set when ber_count == 1. No dividing.
// jfg19041900 |jfg     | Remove old seek_edge function. Using qpa version now. Add error state PR step return.
// jfg19041601 |jfg     | Fix leftward search for a valid 0 error rate. go figure.
// jfg19041601 |jfg     | Add a step to reduce the dual seek upon first error to allow better non-error margin for phase seek
// jfg19040400 |jfg     | Readjust BER goals to +1 from -1 as typo. Added ber_sel_done for final eye check.
// jfg19040400 |jfg     | Redesign split phase fine tune to ensure both phases are inside eye to prevent breaking DFE speculation
// jfg19040200 |jfg     | Skip extra edge in st 8002 and 8006 so that data doesn't travel as far during fine tune
// jfg19040200 |jfg     | Discussed in PR#439 to make the L/R history update dependent on either phase moving.
// jfg19040200 |jfg     | Discussed in PR#439 cutting BER goals /2 for phase-based search to maintain same joint error rate.
// jfg19032100 |jfg     | Fix comparison of left and right edges against hysteresis. Previously ignoring EW value.
// jfg19030800 |jfg     | Incorporate QPA architecture updates into DDC behavior
// mwh19043000 |mwh     | add in set_fir(fir_code_dft_error);
// mwh19040119 |mwh     | removed the rx_fail_flag code -- code size hit and taking out reduce sim
// mwh19012100 |mwh     | Added in rxbist fail flag
// vbr19012200 |vbr     | Updated function calls
// mwh19011000 |mwh     | Added in rxbist check stuff
// jfg18122900 |jfg     | HW474827 Marginal low error rates broke left edge seek. Added mid-range BER reset. Fix jfg18122600 range check.
// jfg18122800 |jfg     | Fix hang due to edge step by disabling check with stepsize=0
// jfg18122800 |jfg     | HW474827 Remove if check for ber_reported before attempting final search to force entry into fine staging.
// jfg18122600 |jfg     | HW474827 Increase range of max_eye by decopling data&edge checks. Perform range check before writing mem_reg
// jfg18122200 |jfg     | Switch first center loop from do to while to avoid 0 data adjust error. Add two extra error escapes.
// jfg18122100 |jfg     | Fixing missing bounds check on PR position inside edge_seek
// jfg18121700 |jfg     | Clear Edge offset adjust to 0 to preserve QPA. Clean up some coverage conditionals.
// jfg18121600 |jfg     | And one more typo for not fixing all the offset equations.
// jfg18121500 |jfg     | Resolve a number of marginal sneak paths around low error boundaries and save offset truncation bit
// jfg18121301 |jfg     | Reduce outward search by 1 for a more conservative 2-step edge margin and fix sign on Eleft recenter.
// jfg18121300 |jfg     | HW474503 Replace the overcomplicated conditionals with while loops for repositioning.
// jfg18121300 |jfg     | HW474503 Replace final reposition math with conditionals for + and - offset
// jfg18121300 |jfg     | Moved ber_reset in seek function ahead of wait to improve excess shift inward. Also cleaned up comments.
// jfg18121201 |jfg     | Moved error handling code to a function and added BER default restores there as well.
// jfg18121200 |jfg     | Needed to restore berpl_exp_data_sel to default and set initial ber check duration to match final
// jfg18121102 |jfg     | Needed to restore berpl_sat_thresh to default
// jfg18121101 |jfg     | HW472436/HW474499 Revert last change and rewrite error limit flows for less overhead
// jfg18121100 |jfg     | HW472436/HW474499 Reduce Initial BER measurement limit to 1 error out of a short window
// jfg18121001 |jfg     | Fix ber threshold disable from to max from 0 (since 0 inhibits count)
// jfg18121000 |jfg     | HW474503/HW474501 Fix reposition math for final edge adjust.
// jfg18121000 |jfg     | HW472436/HW474499 Initial BER measurement fails due to missing reset. Also Added additional paranoia checks for eyes that are too small to measure with this algorithm.
// jfg18120500 |jfg     | HW472825 Add some missing BER resets and add additional ber_running reads to slow things down. See HW474100
// jfg18120400 |jfg     | HW472825 Fix edge_seek ber_lim >= check.
// jfg18120400 |jfg     | HW472825 Fix direction search in state 8007 and add edge shift balancing to prevent false pass prior to middle
// jfg18112001 |jfg     | HW472825 Increase/enhance BER duration and choices for 10^5 target. See Workbook.
// vbr18111400 |vbr     | Added calls to set_fir
// jfg18102300 |jfg     | Replace initial lock b check with alias / bank aware
// jfg18110200 |jfg     | HW471171 Update hist_min_eye_width addr to lane version for mem_reg read during valid=1 compare
// jfg18101700 |jfg     | A comment update on ber_sel_long to match code
// jfg18101600 |jfg     | HW467166 Add rx_berpl_sat_thresh for reading count value while BER runs
// jfg18100200 |jfg     | Revert long_ber_count back to 7
// jfg18093000 |jfg     | Increase BER sel setting by 1 per request of Rell due to design change.
// jfg18092700 |jfg     | Refactor ber_running check for accurate ber count reporting
// jfg18092700 |jfg     | Fixed error in fast write of ber_timer_sel field causing hang and general ber errors
// jfg18092500 |jfg     | Identified a bad lane setting bug which flipped the 0_15 and 16_23 portions
// jfg18092000 |jfg     | HW461866 increase BER sel width and error check duration for pre and post edge error rates
// jfg18091300 |jfg     | HW461949 Replace loop-based cdr lock check with end of measure check
// jfg18082900 |jfg     | HW461947 add rx_abort recenter and fix edge on non-seek move to allow non-zero move
// jfg18082200 |jfg     | Change  rx_bad_lane_16_19 to  rx_bad_lane_16_23
// jfg18082200 |jfg     | Change  seek edge stepsize to 2:1 decision based on distance away from center
// jfg18082200 |jfg     | Change  recal_dac_change term into || to allow a future non-hysteresis based override
// jfg18082000 |jfg     | Switch last & hist edge regs to per-lane
// jfg18082000 |jfg     | Fix offset math by /2 and negative data travel
// jfg18081500 |jfg     | Replace L/R edge puts with individual functions
// jfg18081500 |jfg     | Fix sum of max adjusted step math to difference
// jfg18081400 |jfg     | Fix Eew comparison to prmini (>) in edge_seek function
// jfg18081400 |jfg     | Fix prmask shifting to match mask values. Add ber_reported=0 after first search to eliminate flythrough on max extent
// jfg18081400 |jfg     | Replace last and hist edge writes with mem_put
// jfg18081300 |jfg     | Replace ppe_ddc_failed_status set with clr on abort pass
// jfg18081300 |jfg     | Add missing ff and 1f debug states
// jfg18081300 |jfg     | Move re-center shift outside hysteresis check and clear offset on fail.
// jfg18081300 |jfg     | Fix L/R edge reg data packing shift position
// jfg18081300 |jfg     | Reposition hist_eye_width reg accessess per regdef.
// jfg18081300 |jfg     | Fix prmask macros to match post-function data
// jfg18073100 |jfg     | Converted file to ppe-based DDC flow
// -----------------------------------------------------------------------------

#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "eo_common.h"
#include "eo_ddc.h"
#include "eo_qpa.h"

#include "ppe_com_reg_const_pkg.h"
#include "ppe_mem_reg_const_pkg.h"
#include "config_ioo.h"

#define max_eye 0xFFFF
#define ber_too_long 1023
#define lock_error -1
// All four PR positions packed in as: {Data NS, Edge NS, Data EW, Edge EW}
#define prDns_i 0
#define prEns_i 1
#define prDew_i 2
#define prEew_i 3

#define edge_half_left (pr_mini_cen-((pr_mini_cen - pr_mini_min)>>1)-4)
#define edge_half_right (pr_mini_cen+((pr_mini_max - pr_mini_cen)>>1)+4)

#define prmask_Dns(a) ( ((a) & (rx_a_pr_ns_data_mask >> rx_a_pr_ns_edge_shift)) >> (rx_a_pr_ns_data_shift - rx_a_pr_ns_edge_shift) )
#define prmask_Ens(a) ( ((a) & (rx_a_pr_ns_edge_mask >> rx_a_pr_ns_edge_shift)) )
#define prmask_Dew(a) ( ((a) & (rx_a_pr_ew_data_mask >> rx_a_pr_ew_edge_shift)) >> (rx_a_pr_ew_data_shift - rx_a_pr_ew_edge_shift) )
#define prmask_Eew(a) ( ((a) & (rx_a_pr_ew_edge_mask >> rx_a_pr_ew_edge_shift)) )

#define edge_size(cnt,ref) ((cnt <= (ref<<1))?2:1)

#define dirRnoseek true
#define dirLnoseek false
#define dirRseek   false
#define dirLseek   true

//static const int Didx[2] = {prDns_i, prDew_i};
//static const int Eidx[2] = {prEns_i, prEew_i};
//static const t_seek seekidx[2] = {noseekNS, noseekEW};

const int ber_sel_long = 0x6; // Arbitrarily long Selects 16M@des16 or 33M@des32
const int ber_sel_short = 0xB + 0x1; // Selects 16K@des16 or 33K@des32. Divided for split phase
const int ber_sel_done = 0x9; // Selects 262K@des16 or 524K@des32.
const int ber_sel_final = 0x9 + 0x1; // Selects 262K@des16 or 524K@des32. Divided for split phase


/////////////////////////////////////////////////////////////////////////////////
// FUNCDOC: pr_recenter
// multi-purpose mini phase rotator position recentering
// Returns Data and Edge PR positions independently for NS and EW to the original position plus a signed offset.
// Note: For simplicity, the Edge position is assumed to be 0 if it has an offset which is on the same side as the data when
// compared to the original position. The nedge seek function assumes data and edge both move in concert or one is set to 0.
// parms:
// - pr_vals: 4 uint array containing values of MINI-PR in order of NS Data; NS Edge; EW Data; EW Edge
// - Esave  : 2 uint array containing original PR position packed into NS / EW format
// - Dsave  : 2 uint array containing original PR position packed into NS / EW format
// - Doff   : 2 int array containing signed offset from orignal start if desired. Otherwise set = 0
// Return value:
//  False   : Edge value was not on the opposite side of the data compared to the original target position. It must be dealt with separately.
bool  pr_recenter(t_gcr_addr* gcr_addr, t_bank bank, int* pr_vals, uint32_t* Esave, uint32_t* Dsave, int* Doffset)
{
    int i;
    bool status = true;

    for (i = 0; i < 2; i++)
    {
        int Eoffset =  0; // There will always be an error term here and a non-zero risks upsetting QPA positioning anyway.
        int Eidx, Didx;
        uint32_t ds, es;
        int Eleft, Dleft;
        bool dirL1R0 = false;
        t_seek seek_quad;

        if (i == 0 )
        {
            seek_quad = noseekNS;
            Didx = prDns_i;
            Eidx = prEns_i;
        }
        else
        {
            seek_quad = noseekEW;
            Didx = prDew_i;
            Eidx = prEew_i;
        }

        Eleft = (pr_vals[Eidx]) - Esave[i] + (Eoffset);
        Dleft = Dsave[i] - (pr_vals[Didx]) + (Doffset[i]);
        dirL1R0 = dirRnoseek;

        if ((Eleft < 0) && (Dleft < 0))
        {
            dirL1R0 = dirLnoseek;
            Eleft = abs(Eleft);
            Dleft = abs(Dleft);
        }
        else
        {
            if (Dleft < 0)
            {
                status = false; // Indicates Edge is not on the opposite side of data vs. original position and a subsequent correction may be needed
                dirL1R0 = dirLnoseek;
                Eleft = 0;
                Dleft = abs(Dleft);
            }

            if (Eleft < 0)
            {
                status = false; // Indicates Edge is not on the opposite side of data vs. original position and a subsequent correction may be needed
                dirL1R0 = dirLnoseek;
                Eleft = abs(Eleft);
                Dleft = 0;
            }
        }

        while ((Eleft > 0) || (Dleft > 0))
        {
            //calling edge_seek_step with L1 move, using noBER, and no seek with step=X to move Edge/Data back to new center
            ds = (Dleft > 0) ? 1 : 0;
            es = (Eleft > 0) ? 1 : 0;
            // make X steps until each individual phase is at 0
            nedge_seek_step(gcr_addr, bank, ds, es, dirL1R0, true, seek_quad, pr_vals);//, 0
            Eleft -= es;
            Dleft -= ds;
        }
    }

    return status;
}


void set_ddc_err (t_gcr_addr* gcr_addr, t_bank bank, int lane, uint32_t new_lane_bad, int* pr_vals, uint32_t* Esave,
                  uint32_t* Dsave)
{
    mem_pl_bit_set(rx_bad_eye_opt_width, lane);
    mem_pl_bit_set(rx_ddc_fail, lane);
    mem_pg_field_put(rx_lane_bad_16_23, new_lane_bad);
    mem_pg_field_put(rx_lane_bad_0_15, new_lane_bad >> 8);
    //Disable BER
    put_ptr(gcr_addr, rx_ber_en_addr, rx_ber_en_startbit, rx_ber_en_endbit, 0, read_modify_write);
    // Disable the per-lane counter
    put_ptr(gcr_addr, rx_berpl_count_en_addr, rx_berpl_count_en_startbit, rx_berpl_count_en_endbit, 0, read_modify_write);
    // Reset BER compare A/B data banks to PRBS
    put_ptr(gcr_addr, rx_berpl_exp_data_sel_addr, rx_berpl_exp_data_sel_startbit, rx_berpl_exp_data_sel_endbit, 0,
            read_modify_write);
    put_ptr(gcr_addr, rx_berpl_mask_mode_addr, rx_berpl_mask_mode_startbit, rx_berpl_mask_mode_endbit, 0,
            read_modify_write);
    put_ptr(gcr_addr, rx_err_trap_mask_addr, rx_err_trap_mask_startbit, rx_err_trap_mask_endbit, 0 , read_modify_write);
    /* int ds = 1; */
    /* int es = 0; */
    /* // make 1 data step */
    /* ber_reported = nedge_seek_step(gcr_addr, bank, ds, es, false, false, noseek, pr_active, ber_count); */
    int offsets[2] = {0, 0};
    pr_recenter(gcr_addr, bank, pr_vals, Esave, Dsave, offsets);
    // Run this twice in case D/E get out of whack and need to restore in opposite directions
    pr_recenter(gcr_addr, bank, pr_vals, Esave, Dsave, offsets);

}

int ddc_seek_loop (t_gcr_addr* gcr_addr, t_bank bank, int* pr_vals, bool seekdir, int* ber_reported, int ber_count)
{
    uint32_t quad_mask;
    uint32_t ds = 2;
    uint32_t es = 2;//edge_size(*ber_reported,ber_count);
    bool revSeekDir = !seekdir;
    int ber_status;
    int ber_lim = (ber_count == 1) ? 1 : ber_count >> 1;
    int lane = get_gcr_addr_lane(gcr_addr);

    *ber_reported = 0;
    //Disable then enable BER
    put_ptr(gcr_addr, rx_ber_en_addr, rx_ber_en_startbit, rx_ber_en_endbit, 0, read_modify_write);
    //Initialize sat_thresh to max value to begin error search
    put_ptr_fast(gcr_addr, rx_berpl_sat_thresh_addr, rx_berpl_sat_thresh_endbit, ber_lim);
    put_ptr(gcr_addr, rx_ber_en_addr, rx_ber_en_startbit, rx_ber_en_endbit, 1, read_modify_write);

    // Reset the timer to long timeout and start edge search
    put_ptr(gcr_addr, rx_ber_timer_sel_addr, rx_ber_timer_sel_startbit, rx_ber_timer_sel_endbit, ber_sel_long,
            read_modify_write);
    put_ptr_fast(gcr_addr, rx_ber_reset_addr, rx_ber_reset_endbit, 1);

    //ber_status = get_ptr(gcr_addr, rx_ber_timer_running_addr, rx_ber_timer_running_startbit, rx_ber_timer_running_endbit);
    // 3: Search RIGHT Edge //////////////////////////////////////////////////
    while ((*ber_reported == 0) && (*ber_reported != max_eye))
    {
        // 4 step moves until 1/2 cumulative count is seen
        *ber_reported = nedge_seek_step(gcr_addr, bank, ds, es, seekdir, false, doseek, pr_vals);//, ber_count
    }

    // Paranoia check that max_eye was actually reached under low BER condition is not needed here
    // and in fact can have the detrimental effect of mis-representing a step or two edge tuning when
    // this max is borderline bad
    put_ptr(gcr_addr, rx_ber_timer_sel_addr, rx_ber_timer_sel_startbit, rx_ber_timer_sel_endbit, ber_sel_short,
            read_modify_write);

    // Reduce last step movement for margin before continuing Rightward seek.
    ds = 4;
    es = 0;
    *ber_reported = nedge_seek_step(gcr_addr, bank, ds, es, seekdir, false, noseek, pr_vals);//, ber_count

    if (*ber_reported > ber_count)   //This is pure paranoia and may not be coverable except on really bad channel
    {
        nedge_seek_step(gcr_addr, bank, ds, es, seekdir, false, noseek, pr_vals);
    }

    set_debug_state(0x8002); // DEBUG - 3: Search RIGHT

    t_seek seek_quad = noseekEW;

    //Disable then enable BER
    put_ptr(gcr_addr, rx_ber_en_addr, rx_ber_en_startbit, rx_ber_en_endbit, 0, read_modify_write);

    // The threshold reset is placed here to allow for the previous step reduction to move the sample out of the fuzz
    // It also keeps the register write outside of the phase loop
    put_ptr_fast(gcr_addr, rx_berpl_sat_thresh_addr, rx_berpl_sat_thresh_endbit, (0x1 << rx_berpl_sat_thresh_width) - 1 );
    put_ptr(gcr_addr, rx_berpl_mask_mode_addr, rx_berpl_mask_mode_startbit, rx_berpl_mask_mode_endbit, 1,
            read_modify_write);
    put_ptr(gcr_addr, rx_ber_en_addr, rx_ber_en_startbit, rx_ber_en_endbit, 1, read_modify_write);
    // Save original position for returning a quad to ensure same edge dynamics for all other quad searches
    uint32_t Esave[2];
    Esave[0] = pr_vals[prEns_i];
    Esave[1] = pr_vals[prEew_i];
    uint32_t Dsave[2];
    Dsave[0] = pr_vals[prDns_i];
    Dsave[1] = pr_vals[prDew_i];
    uint32_t Dedge[2];
    int Doffset[2] = {0, 0};

    do
    {
        // quad_mask assumes N samples aligned to data_pipe(0) and counts N and S together. Smaller granularity is not practical since they can't be aligned independently
        quad_mask = (seek_quad == noseekEW) ? 0xA : 0x5;
        put_ptr(gcr_addr, rx_err_trap_mask_addr, rx_err_trap_mask_startbit, rx_err_trap_mask_endbit, quad_mask ,
                read_modify_write);
        put_ptr_fast(gcr_addr, rx_ber_reset_addr, rx_ber_reset_endbit, 1);
        set_debug_state(0x8023); // DEBUG - Set Quadrant mask

        // 4: Search RIGHT until above below threshold ///////////////////////////////////////////////////
        ds = 1;

        //es = 0;
        do
        {
            io_sleep(get_gcr_addr_thread(gcr_addr));
            ber_status = get_ptr(gcr_addr, rx_ber_timer_running_addr, rx_ber_timer_running_startbit, rx_ber_timer_running_endbit);
        }
        while (ber_status != 0);

        *ber_reported = get_ptr(gcr_addr, rx_berpl_count_addr, rx_berpl_count_startbit, rx_berpl_count_endbit);

        while ((*ber_reported <= ber_count) && (*ber_reported != max_eye))
        {
            // make 1 data step to get into fuzz
            *ber_reported = nedge_seek_step(gcr_addr, bank, ds, es, revSeekDir, false, seek_quad, pr_vals);//, ber_count
        }

        // If MAX EYE is reached while < ber_count it means that quad phase balancing is not possible nor required due to huge eye or other error.
        if (*ber_reported == max_eye)
        {
            // In this case, simply remove one step for margin to ensure no errors and exit with a large eye measurement.
            *ber_reported = nedge_seek_step(gcr_addr, bank, ds, es, seekdir, false, seek_quad, pr_vals);//, ber_count
            mem_pl_field_put(rx_ddc_measure_limited, 1, lane);
            set_debug_state(0x8012 ); // DEBUG max eye check
        }
        else
        {

            //An extra step for margin.
            *ber_reported = nedge_seek_step(gcr_addr, bank, ds, es, revSeekDir, false, seek_quad, pr_vals);//, ber_count

            ///////DEBUG
            set_debug_state(0x8013); // DEBUG - 4: Search LEFT to return to ber_count limit
            put_ptr(gcr_addr, rx_ber_timer_sel_addr, rx_ber_timer_sel_startbit, rx_ber_timer_sel_endbit, ber_sel_final,
                    read_modify_write);
            put_ptr_fast(gcr_addr, rx_ber_reset_addr, rx_ber_reset_endbit, 1);
            get_ptr(gcr_addr, rx_ber_timer_running_addr, rx_ber_timer_running_startbit,
                    rx_ber_timer_running_endbit); // throwaway to sync up BER status

            do
            {
                io_sleep(get_gcr_addr_thread(gcr_addr));
                ber_status = get_ptr(gcr_addr, rx_ber_timer_running_addr, rx_ber_timer_running_startbit, rx_ber_timer_running_endbit);
            }
            while (ber_status != 0);

            *ber_reported = get_ptr(gcr_addr, rx_berpl_count_addr, rx_berpl_count_startbit, rx_berpl_count_endbit);

            while ((*ber_reported >= ber_count) && (*ber_reported != max_eye))
            {
                // make 1 data step
                *ber_reported = nedge_seek_step(gcr_addr, bank, ds, es, seekdir, false, seek_quad, pr_vals);//, ber_count
            } ;

            // Paranoia check for an idiosyncratic lane failure during search. This prevents a PPE hang.
            //       The result could be a shift all the way over to the LEFT extreme and could goof up the centering math.
            if (*ber_reported == max_eye)
            {
                //set_ddc_err (gcr_addr, bank, lane, new_lane_bad, pr_vals, Esave, Dsave);
                //set_debug_state(0x8087); // DEBUG: Algorithm error. Lane broke during measure
                //set_fir(fir_code_warning);
                return warning_code;
            }
        } // Max Eye reported during phase-based fuzz seek.

        /////////DEBUG
        //uint32_t stat = (seek_quad == noseekNS) << 8;
        set_debug_state(0x8003); // DEBUG - 4: Search LEFT

        if (seek_quad == noseekEW)
        {
            Dedge[1] = pr_vals[prDew_i];
        }
        else
        {
            Dedge[0] = pr_vals[prDns_i];
        }

        pr_recenter(gcr_addr, bank, pr_vals, Esave, Dsave, Doffset);

        seek_quad--;
    }
    while (seek_quad != doseek);

    pr_recenter(gcr_addr, bank, pr_vals, Esave, Dedge, Doffset);
    put_ptr(gcr_addr, rx_berpl_mask_mode_addr, rx_berpl_mask_mode_startbit, rx_berpl_mask_mode_endbit, 0,
            read_modify_write);
    put_ptr(gcr_addr, rx_err_trap_mask_addr, rx_err_trap_mask_startbit, rx_err_trap_mask_endbit, 0 , read_modify_write);
    return pass_code;
}

////////////////////////////////////////////////////////////////////////////
// Run DDC on a lane and update historical width
// Adjust *DATA* NS and EW mini-rotators independently to accomplish quad phase adjustment
// PHY state prior to DDC adjustment
//   Lane is fully powered on
//   CDR tracking alt bank in slave mode (bank_sel = B on initial cal), all quadrant
//   Eye on the calibrated bank has been improved by initial VGA, Peaking, Edge Offset, LTE, DFE, and various latch offset Calibrations.
//   Quad Phase Adjust has adjusted *EDGE* mini rotators to fix phase error
//   Base line data sample error rate must be lower than rx_ddc_min_err_lim or function will exit with error..
//   All register modes are pre-set and stable
// PHY state at the completion of DDC adjustment
//   Mini-PR offset positions are applied by shifting via rx_{ab}_pr_{ns/ew}_data.
//   Historic minimums are written to rx_ddc_hist_left_edge and rx_ddc_hist_right_edge.
//   CDR tracking is left as is.
int eo_ddc(t_gcr_addr* gcr_addr, t_bank bank, bool recal, bool recal_dac_changed)
{
    set_debug_state(0x8000); // DEBUG - DDC Start
    int abort_status = pass_code;
    uint32_t bank_pr_save[2];
    int pr_active[4]; // All four PR positions packed in as: {Data NS, Edge NS, Data EW, Edge EW}
    int cdr_status = 1;


    // 2: Set initial values
    // Load ****both**** data and edge values on read. Assumes in same reg address in data + edge order
    if (bank == bank_a)
    {
        bank_pr_save[0] = get_ptr(gcr_addr, rx_a_pr_ns_data_addr,  rx_a_pr_ns_data_startbit, rx_a_pr_ns_edge_endbit);
        bank_pr_save[1] = get_ptr(gcr_addr, rx_a_pr_ew_data_addr,  rx_a_pr_ew_data_startbit, rx_a_pr_ew_edge_endbit);
    }
    else
    {
        bank_pr_save[0] = get_ptr(gcr_addr, rx_b_pr_ns_data_addr,  rx_b_pr_ns_data_startbit, rx_b_pr_ns_edge_endbit);
        bank_pr_save[1] = get_ptr(gcr_addr, rx_b_pr_ew_data_addr,  rx_b_pr_ew_data_startbit, rx_b_pr_ew_edge_endbit);
    }

    pr_active[prDns_i] = prmask_Dns(bank_pr_save[0]);
    pr_active[prEns_i] = prmask_Ens(bank_pr_save[0]);
    pr_active[prDew_i] = prmask_Dew(bank_pr_save[1]);
    pr_active[prEew_i] = prmask_Eew(bank_pr_save[1]);

    uint32_t Dsave[2];
    Dsave[0] = prmask_Dns(bank_pr_save[0]);
    Dsave[1] = prmask_Dew(bank_pr_save[1]);
    uint32_t Esave[2];
    Esave[0] = prmask_Ens(bank_pr_save[0]);
    Esave[1] = prmask_Eew(bank_pr_save[1]);

    int lane = get_gcr_addr_lane(gcr_addr);
    uint32_t new_lane_bad = (mem_pg_field_get(rx_lane_bad_0_15)  << 8) | mem_pg_field_get(rx_lane_bad_16_23);
    new_lane_bad = new_lane_bad | (0b1 << (23 - lane));

    // Check CDR lock status before clearing sticky bit to start test.
    cdr_status = wait_for_cdr_lock(gcr_addr, true);

    if (cdr_status != pass_code)
    {
        set_ddc_err (gcr_addr, bank, lane, new_lane_bad, pr_active, Esave, Dsave);
        set_debug_state(0x8082); // DEBUG: Algorithm error. CDR not locked.
        set_fir(fir_code_warning);
        return warning_code;
    }

    // See Workbook Table x.x.1.1 "rx_ddc_min_err_lim Register Decode" in DDC Section
    int ddc_min_err_lim = mem_pg_field_get(rx_ddc_min_err_lim);
    int ber_sel, ber_count;

    //int ber_sel_final = 0x9+0x1; // Selects 262K@des16 or 524K@des32. Divided for split phase
    // While edge searching: This upper limit allows for roughly 3x10^-3 error rate between PR shifts occurring every 50K UI or so
    // The official edge point: When used in conjuction with the ber_sel_short it saturates the count at a rate of 9x10^-3 errors
    switch (ddc_min_err_lim)
    {
        case 0:
            ber_count = 1;
            break;

        case 1:
            ber_count = 2;
            break;

        case 2:
            ber_count = 4;
            break;

        case 3:
            ber_count = 8;
            break;

        case 4:
            ber_count = 16;
            break;

        case 5:
            ber_count = 24;
            break;

        case 6:
            ber_count = 32;
            break;

        default: // This setting should achieve a 33% confidence at 1/3 the checking duration
            ber_count = 2;
            //ber_sel_final = 0xA+0x1;
            break;
    }

    ber_sel = (0b1 << rx_ber_timer_sel_width) | ber_sel_final;
    //int ber_lim=ber_count>>1; //NOTE: This must match function usage of ber_count>>1
    // Set BER to compare A/B data banks instead of PRBS
    put_ptr(gcr_addr, rx_berpl_exp_data_sel_addr, rx_berpl_exp_data_sel_startbit, rx_berpl_exp_data_sel_endbit, 0,
            read_modify_write);
    // Enable the per-lane counter and reset the main count.
    put_ptr(gcr_addr, rx_berpl_count_en_addr, rx_berpl_count_en_startbit, rx_berpl_count_en_endbit, 1, read_modify_write);
    // Set BER Timer with count length based on decode and ber_en on same fast write to rx_ctl_cntl1_pg
    put_ptr_fast(gcr_addr, rx_ber_en_addr, rx_ber_timer_sel_endbit, ber_sel);
    //put_ptr(gcr_addr, rx_ber_timer_sel_addr, rx_ber_timer_sel_endbit, ber_sel,);
    // WO kickoff for checker A reset
    put_ptr_fast(gcr_addr, rx_ber_reset_addr, rx_ber_reset_endbit, 1);
    mem_pl_field_put(rx_ddc_measure_limited, 0, lane); //Clear out any prior bad measurement indicator.

    set_debug_state(0x8001); // DEBUG - DDC Setup

    // 3: Search RIGHT first error
    int ber_status;
    //slow down reads to ensure reset completes
    ber_status = get_ptr(gcr_addr, rx_ber_timer_running_addr, rx_ber_timer_running_startbit, rx_ber_timer_running_endbit);
    ber_status = get_ptr(gcr_addr, rx_ber_timer_running_addr, rx_ber_timer_running_startbit, rx_ber_timer_running_endbit);

    ///////DEBUG
    //set_debug_state(0x8041 | (ber_status << 4)); // DEBUG - DDC Setup
    ////////
    do
    {
        io_sleep(get_gcr_addr_thread(gcr_addr));
        ber_status = get_ptr(gcr_addr, rx_ber_timer_running_addr, rx_ber_timer_running_startbit, rx_ber_timer_running_endbit);
    }
    while (ber_status != 0);

    uint32_t ds = 2;
    uint32_t es = 2;//edge_size(ber_reported,ber_count);
    int ber_reported = get_ptr(gcr_addr, rx_berpl_count_addr, rx_berpl_count_startbit, rx_berpl_count_endbit);

    // NOTE: Basic stipulation that the opening eye position must be error free.
    // NOTE: DDC Does not implement a binary search algorithm to locate an arbitrary starting eye center position.
    // Nor is it tolerant of unbalanced eyes that do not possess a minimum of *X* steps between the start point and the edge.
    if (ber_reported > ber_count)
    {
        set_ddc_err (gcr_addr, bank, lane, new_lane_bad, pr_active, Esave, Dsave);
        set_debug_state(0x8081); // DEBUG: Algorithm error. Problem with data eye.
        set_fir(fir_code_warning);
        return warning_code;
    } // ber_reported > ber_count

    // Reset the timer to long timeout and start edge search
    ////ber_status = get_ptr(gcr_addr, rx_ber_timer_running_addr, rx_ber_timer_running_startbit, rx_ber_timer_running_endbit);
    ///////DEBUG
    //set_debug_state(0x8041 | (ber_status << 5) | ((ber_reported == 0 ? 0:1) << 7)); // DEBUG - DDC Setup
    ////////
    // 3: Search RIGHT Edge //////////////////////////////////////////////////
    abort_status |= ddc_seek_loop (gcr_addr, bank, pr_active, dirRseek, &ber_reported, ber_count);

    if ((ber_reported == max_eye) && (abort_status != pass_code))
    {
        set_ddc_err (gcr_addr, bank, lane, new_lane_bad, pr_active, Esave, Dsave);
        set_debug_state(0x8087); // DEBUG: Algorithm error. Lane broke during measure
        set_fir(fir_code_warning);
        return warning_code;
    }

    // 5: Calculate mini-pr and total right-side edge width
    // First each quadrant pair data and edge position is saved
    // Then find the distance traveled from the last saved center to the new edge
    // distance = data - last center + last edge - edge
    // If the algorithm is working correctly this should never be negative.
    int Dright[2];
    Dright[0] = (pr_active[prDns_i]) - Dsave[0] ;
    Dright[1] = (pr_active[prDew_i]) - Dsave[1] ;
    int Eright[2];
    Eright[0] = Esave[0] - (pr_active[prEns_i]);
    Eright[1] = Esave[1] - (pr_active[prEew_i]);
    // TODO-JG: Is error detection of negative values here neccessary? While a negative here would screw stuff up is it possible?
    int last_right_edge[2];
    last_right_edge[0] = Dright[0] + Eright[0]; // Defined as positive distance of edge right of center
    last_right_edge[1] = Dright[1] + Eright[1]; // Defined as positive distance of edge right of center

    // 6: Search LEFT first error
    //put_ptr_fast(gcr_addr, rx_berpl_sat_thresh_addr, rx_berpl_sat_thresh_endbit, ber_lim);
    put_ptr(gcr_addr, rx_ber_timer_sel_addr, rx_ber_timer_sel_startbit, rx_ber_timer_sel_endbit, ber_sel_long,
            read_modify_write);

    // Do not enable BER until we've moved past the original start point to avoid false passes
    while ((pr_active[prDns_i] > Dsave[0]) || (pr_active[prEns_i] < Esave[0]) ||
           (pr_active[prDew_i] > Dsave[1]) || (pr_active[prEew_i] < Esave[1]))   //OLD limit: ber_lim
    {
        // The left seek continually gets fooled by marginal error rates lower than 10^5 that sneak in
        // prior to advancing far enough from the right edge to avoid corrupting the error read
        t_seek seek_quad = noseek; // NOTE: to maintain edge balance noseek must be active if es > 0. Otherwise es must be 0
        ds = 2;
        es = 2;//Needs to match RIGHT search to retain EvsE offset. //edge_size(ber_reported,ber_count);

        if ((pr_active[prDns_i] <= Dsave[0]) && (pr_active[prEns_i] >= Esave[0]))
        {
            seek_quad = noseekEW;
            es = 0;

            if (pr_active[prEew_i] < Esave[1])
            {
                break; //Something misaligned the edges so need to jump out now
            }
        }
        else
        {
            if (pr_active[prDns_i] <= Dsave[0])   //(pr_active[prDns_i] > Dsave)
            {
                // Pause data moves
                ds = 0;
            }

            // Double check this on edge as well since edge and data can get outta sync
            if (pr_active[prEns_i] >= Esave[0])   //else {
            {
                // Pause edge moves
                es = 0;
            }
        }

        if ((pr_active[prDew_i] <= Dsave[1]) && (pr_active[prEew_i] >= Esave[1]))
        {
            seek_quad = noseekNS;
            es = 0;

            if (pr_active[prEns_i] < Esave[0])
            {
                break; //Something misaligned the edges so need to jump out now
            }
        }
        else
        {
            if (pr_active[prDew_i] <= Dsave[1])   //(pr_active[prDns_i] > Dsave)
            {
                // Pause data moves
                ds = 0;
            }

            // Double check this on edge as well since edge and data can get outta sync
            if (pr_active[prEew_i] >= Esave[1])   //else {
            {
                // Pause edge moves
                es = 0;
            }
        }

        nedge_seek_step(gcr_addr, bank, ds, es, dirLnoseek, true, seek_quad, pr_active);//, 0
        //}
    }

    set_debug_state(0x800B); // DEBUG - X: Return to center. Begin LEFT search

    abort_status |= ddc_seek_loop (gcr_addr, bank, pr_active, dirLseek, &ber_reported, ber_count);

    if ((ber_reported == max_eye) && (abort_status != pass_code))
    {
        set_ddc_err (gcr_addr, bank, lane, new_lane_bad, pr_active, Esave, Dsave);
        set_debug_state(0x8088); // DEBUG: Algorithm error. Lane broke during measure
        set_fir(fir_code_warning);
        return warning_code;
    }

    // 8: Calculate mini-pr and total left-side edge width
    // Then find the distance traveled from the last saved center to the new edge
    // distance = last center - (data) + (edge) - last edge
    // If the algorithm is working correctly this should never be negative.
    int Dleft[2];
    Dleft[0] = Dsave[0] - (pr_active[prDns_i]);
    Dleft[1] = Dsave[1] - (pr_active[prDew_i]);
    int Eleft[2];
    Eleft[0] = (pr_active[prEns_i]) - Esave[0];
    Eleft[1] = (pr_active[prEew_i]) - Esave[1];
    // TODO-JG: Is error detection of negative values here neccessary? While a negative here would screw stuff up is it possible?
    int last_left_edge[2];
    last_left_edge[0] = Dleft[0] + Eleft[0];
    last_left_edge[1] = Dleft[1] + Eleft[1]; // Defined as positive distance of edge left of center
    int last_left_edge_reg = (last_left_edge[0] + last_left_edge[1]) >> 1;
    int last_right_edge_reg = (last_right_edge[0] + last_right_edge[1]) >> 1;

    abort_status |= check_rx_abort(gcr_addr);
    int ddc_hyst_val = mem_pg_field_get(rx_ddc_hysteresis);
    // Defined as a positive value which shifts to the right or left if negative
    int ddc_offset_w_hyst[2];
    ddc_offset_w_hyst[0] = (last_right_edge[0] - last_left_edge[0]) >> 1;
    ddc_offset_w_hyst[1] = (last_right_edge[1] - last_left_edge[1]) >> 1;

    if (last_left_edge_reg >= (0b1 << rx_ddc_last_left_edge_width))
    {
        last_left_edge_reg = (0b1 << rx_ddc_last_left_edge_width) - 1;
    }

    if (last_right_edge_reg >= (0b1 << rx_ddc_last_right_edge_width))
    {
        last_right_edge_reg = (0b1 << rx_ddc_last_right_edge_width) - 1;
    }

    mem_pl_field_put(rx_ddc_last_left_edge, lane, last_left_edge_reg);
    mem_pl_field_put(rx_ddc_last_right_edge, lane, last_right_edge_reg);
    int old_offset = Dsave[0] - Dsave[1];
    int new_offset = ddc_offset_w_hyst[0] - ddc_offset_w_hyst[1];

    // If the difference between the left and right edges exceeds the hysteresis then shift the offset and save the new measurements.
    if (((((abs(ddc_offset_w_hyst[0]) > ddc_hyst_val) || (abs(ddc_offset_w_hyst[1]) > ddc_hyst_val)
           || (abs(old_offset - new_offset) > (ddc_hyst_val << 1)))
          || recal_dac_changed)
         || !recal) &&
        (abort_status == pass_code))
    {
        if (bank == bank_a)
        {
            mem_pl_field_put(rx_a_ddc_hist_left_edge, lane, last_left_edge_reg);
            mem_pl_field_put(rx_a_ddc_hist_right_edge, lane, last_right_edge_reg);
        }
        else
        {
            mem_pl_field_put(rx_b_ddc_hist_left_edge, lane, last_left_edge_reg);
            mem_pl_field_put(rx_b_ddc_hist_right_edge, lane, last_right_edge_reg);
        }
    }
    else
    {
        if ((abs(ddc_offset_w_hyst[0]) <= ddc_hyst_val))
        {
            ddc_offset_w_hyst[0] = 0;
        }

        if ((abs(ddc_offset_w_hyst[1]) <= ddc_hyst_val))
        {
            ddc_offset_w_hyst[1] = 0;
        }
    }

    set_debug_state(0x800C); // DEBUG - 8: DDC Check Width and update historic eye values.

    if (abort_status != pass_code)   // This returns us to prior sample position.
    {
        ddc_offset_w_hyst[0] = 0;
        ddc_offset_w_hyst[1] = 0;
    }

    ds = 1;
    es = 1;
    pr_recenter(gcr_addr, bank, pr_active, Esave, Dsave, ddc_offset_w_hyst);

    set_debug_state(0x801F); // DEBUG: 8: Shift back to sample position done

    // Note: If failed, return warning_code to skip result_check and ber_test and don't switch banks.
    // Note: Do the same thing if aborted, but return abort_code instead; still set ddc_failed_status so eo_main does not switch back to the DDC clock.
    if (abort_status != pass_code)
    {
        //Disable BER
        put_ptr(gcr_addr, rx_ber_en_addr, rx_ber_en_startbit, rx_ber_en_endbit, 0, read_modify_write);
        // Disable the per-lane counter
        put_ptr(gcr_addr, rx_berpl_count_en_addr, rx_berpl_count_en_startbit, rx_berpl_count_en_endbit, 0, read_modify_write);
        put_ptr_fast(gcr_addr, rx_berpl_sat_thresh_addr, rx_berpl_sat_thresh_endbit, 0xFFF);
        // Reset BER compare A/B data banks to PRBS
        put_ptr(gcr_addr, rx_berpl_exp_data_sel_addr, rx_berpl_exp_data_sel_startbit, rx_berpl_exp_data_sel_endbit, 0,
                read_modify_write);
        mem_pl_bit_set(rx_ddc_fail, lane);
        set_debug_state(0x8080); //DEBUG: Main RX abort
        return abort_status;
    }

    cdr_status = wait_for_cdr_lock(gcr_addr, true);

    if (cdr_status != pass_code)
    {
        set_ddc_err (gcr_addr, bank, lane, new_lane_bad, pr_active, Esave, Dsave);
        set_debug_state(0x8083); // DEBUG: Algorithm error. Final lock error
        set_fir(fir_code_warning);
        return warning_code;
    }
    else
    {
        // WO kickoff for checker
        put_ptr(gcr_addr, rx_ber_timer_sel_addr, rx_ber_timer_sel_startbit, rx_ber_timer_sel_endbit, ber_sel_done,
                read_modify_write);
        put_ptr_fast(gcr_addr, rx_ber_reset_addr, rx_ber_reset_endbit, 1);
        get_ptr(gcr_addr, rx_ber_timer_running_addr, rx_ber_timer_running_startbit,
                rx_ber_timer_running_endbit); // throwaway to sync up BER status

        do
        {
            io_sleep(get_gcr_addr_thread(gcr_addr));
            ber_status = get_ptr(gcr_addr, rx_ber_timer_running_addr, rx_ber_timer_running_startbit, rx_ber_timer_running_endbit);
        }
        while (ber_status == 1);

        ber_reported = get_ptr(gcr_addr, rx_berpl_count_addr, rx_berpl_count_startbit, rx_berpl_count_endbit);

        if (ber_reported >  ber_count)
        {
            set_ddc_err (gcr_addr, bank, lane, new_lane_bad, pr_active, Esave, Dsave);
            set_debug_state(0x8084); // DEBUG: Problem with data eye: final error check failed.
            set_fir(fir_code_warning);
            return warning_code;
        } // ber_reported > ber_count
    }

    // ddc passed
    mem_pl_bit_clr(rx_ddc_fail, lane);
    //Disable BER
    put_ptr(gcr_addr, rx_ber_en_addr, rx_ber_en_startbit, rx_ber_en_endbit, 0, read_modify_write);
    // Disable the per-lane counter
    put_ptr(gcr_addr, rx_berpl_count_en_addr, rx_berpl_count_en_startbit, rx_berpl_count_en_endbit, 0, read_modify_write);
    put_ptr_fast(gcr_addr, rx_berpl_sat_thresh_addr, rx_berpl_sat_thresh_endbit, 0xFFF);
    // Reset BER compare A/B data banks to PRBS
    put_ptr(gcr_addr, rx_berpl_exp_data_sel_addr, rx_berpl_exp_data_sel_startbit, rx_berpl_exp_data_sel_endbit, 0,
            read_modify_write);

    // Get Left/Right Edges and compare against historical, record if new min.
    // Only read the current lane's width and compare if all lane mode (0), or the correct lane in single lane mode (1)
    int update_mode =  mem_pg_field_get(rx_hist_min_eye_width_mode);
    int hist_width_reg   = mem_regs_u16[pg_addr(
                                            rx_hist_min_eye_width_lane_addr)]; //Only works if lane & valid occupy same addr.
    int hist_width_lane  = bitfield_get(hist_width_reg, rx_hist_min_eye_width_lane_mask, rx_hist_min_eye_width_lane_shift);

    if ( update_mode == 0 || ((update_mode == 1) && (lane == hist_width_lane)) )
    {
        int hist_width_valid = bitfield_get(hist_width_reg, rx_hist_min_eye_width_valid_mask,
                                            rx_hist_min_eye_width_valid_shift);
        int hist_width       = mem_pg_field_get(rx_hist_min_eye_width);

        // Read width of lane
        int width = last_right_edge_reg + last_left_edge_reg;

        // Write if no previous recording or if the width is a new min. Requirement: rx_hist_min_eye_width_valid and rx_hist_min_eye_width_lane occupy same reg
        if ( (hist_width_valid == 0) || (width < hist_width) )
        {
            hist_width_reg = (0b1 << (rx_hist_min_eye_width_valid_shift - rx_hist_min_eye_width_lane_shift)) | (lane);
            mem_regs_u16_put(pg_addr(rx_hist_min_eye_width_valid_addr),
                             rx_hist_min_eye_width_valid_mask | rx_hist_min_eye_width_lane_mask, rx_hist_min_eye_width_lane_shift, hist_width_reg);
            mem_pg_field_put(rx_hist_min_eye_width, width);
        }
    } //width_mode

    //Rxbist check min eye width
    //After DDC runs should have min eye width of 40 -- could change based on hardware
    //Perfect eye would be 63 -- width will be postive only.
    int rx_ddc_check_en_int =  get_ptr(gcr_addr, rx_ddc_check_en_addr , rx_ddc_check_en_startbit  ,
                                       rx_ddc_check_en_endbit); //pg

    if (rx_ddc_check_en_int)
    {
        //begin 1
        int check_eye_width_min =  mem_pg_field_get(rx_eye_width_min_check);//ppe pg
        int rx_bist_eye_width   =  last_right_edge_reg + last_left_edge_reg;

        if ( rx_bist_eye_width  < check_eye_width_min)
        {
            mem_pl_field_put(rx_ddc_fail, lane, 0b1 );
            set_fir(fir_code_dft_error);
        }
    }//end 1

    //Checking done
    if (bank == bank_a)
    {
        mem_pl_field_put(rx_a_ddc_done, lane, 0b1);   //ppe pl
    }
    else
    {
        mem_pl_field_put(rx_b_ddc_done, lane, 0b1);
    }

    set_debug_state(0x80FF); // DEBUG: 10: exit pass

    // Return Success
    return abort_status;
} //eo_ddc
