/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/eo_qpa.c $               */
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
// *! FILENAME    : eo_qpa.c
// *! TITLE       :
// *! DESCRIPTION : Run QPA servosDDC and update the historical eye width
// *!
// *! OWNER NAME  : John Gullickson     Email: gullicks@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// jfg19052000 |jfg     | Remove lock sticky check as not intended. Simplify division bias for smaller code size.
// jfg19051703 |jfg     | typo2. no coffee today.
// jfg19051702 |jfg     | typo
// jfg19051701 |jfg     | HW490409 Average measurement of 3 needs special treatment to give better average.
// jfg19051700 |jfg     | HW491645 Add config to disable CDR lock check (default on)
// jfg19051600 |jfg     | HW490631 HW491945 Had inverted direction fix for same sign offset
// jfg19051300 |jfg     | HW490617 Simplify prior change for large offset bias by using /4 of remaining offset as bias correction. Fix error in sign correction.
// jfg19051000 |jfg     | Smoke test found condition of Offset between two same-sign results needing CDR track correction added
// jfg19050700 |jfg     | HW490631 Add a center offset detection to switch direction of odd-offset remainder
// jfg19040800 |jfg     | Comment updates and remove ber_lim from edge_seek
// jfg19031400 |jfg     | HW485870 Add same-sign bias detection / correction
// jfg19042900 |jfg     | HW489995 Replace per-phase hysteresis with total phase hystersis (any movement > 1)
// jfg19042400 |jfg     | HW485870 Remove phase independence in split/balanced offset result
// jfg19041801 |jfg     | Add single stepping error state repositioning.
// jfg19041600 |jfg     | HW485870 Repair bias errors and fix hysteresis to cancel a change unless both phases need to move.
// jfg19031900 |jfg     | HW485870 Add same-sign bias detection / correction
// jfg19031400 |jfg     | HW486026 fix bank select conditional and separate error E087 state
// jfg19030500 |jfg     | Rename recal_1strun as recal_2ndrun to match usage in main
// jfg19022800 |jfg     | Add result hysteresis and restore
// jfg19022200 |jfg     | Add error checking for vote_ratio and qpa_pattern. Add hysteresis for recal
// jfg19021501 |jfg     | fix rx_abort call
// jfg19021500 |jfg     | Remove debug statements
// jfg19021400 |jfg     | Many bugfixes to get loops and math working.
// jfg19020600 |jfg     | Initial QPA flow leveraging DDC edge functions
// -----------------------------------------------------------------------------

#include <stdbool.h>

#include "io_lib.h"
#include "pk.h"

#include "eo_common.h"
#include "servo_ops.h"
#include "eo_qpa.h"
#include "eo_ddc.h"

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

#define edge_max_left -10
#define edge_max_right 10

#define prmask_Dns(a) ( ((a) & (rx_a_pr_ns_data_mask >> rx_a_pr_ns_edge_shift)) >> (rx_a_pr_ns_data_shift - rx_a_pr_ns_edge_shift) )
#define prmask_Ens(a) ( ((a) & (rx_a_pr_ns_edge_mask >> rx_a_pr_ns_edge_shift)) )
#define prmask_Dew(a) ( ((a) & (rx_a_pr_ew_data_mask >> rx_a_pr_ew_edge_shift)) >> (rx_a_pr_ew_data_shift - rx_a_pr_ew_edge_shift) )
#define prmask_Eew(a) ( ((a) & (rx_a_pr_ew_edge_mask >> rx_a_pr_ew_edge_shift)) )

#define mk_opcode(op,opcode) ( op | ((opcode & ((0b1 << (c_op_code_width-1)) - 1)) << (16-c_op_code_startbit-c_op_code_width)))



void set_qpa_err (t_gcr_addr* gcr_addr, t_bank bank, int lane, uint32_t* bank_pr, int* pr_active)
{
    mem_pl_bit_set(rx_quad_phase_fail, lane);
    // mem_pg_field_put(rx_lane_bad_16_23, new_lane_bad);
    // mem_pg_field_put(rx_lane_bad_0_15, new_lane_bad >> 8);
    int tgt = pr_active[prEns_i] - prmask_Ens(bank_pr[0]);
    bool dirL1R0 = tgt < 0;
    tgt = abs(tgt);

    while ((tgt != 0))
    {
        nedge_seek_step(gcr_addr, bank, 0, 1, dirL1R0, true, noseekNS, pr_active);
        tgt--;
    }

    tgt = pr_active[prEew_i] - prmask_Eew(bank_pr[1]);
    dirL1R0 = tgt < 0;
    tgt = abs(tgt);

    while ((tgt != 0))
    {
        nedge_seek_step(gcr_addr, bank, 0, 1, dirL1R0, true, noseekEW, pr_active);
        tgt--;
    }
}


/////////////////////////////////////////////////////////////////////////////////
// FUNCDOC: nedge_seek_step
// multi-purpose eye sample position shifting and testing
// Note: There's an engineering decision here to check the BER count *after* the PR movement. Yes after.
//       The motivation is to return a value which encompases the post-movement position. It should be understood
//       that this value may include a longer term measurement from the last PR position depending on the time
//       elapsed outside the function before a repeat call.
//       This is deemed more conservative because it 1) captures the newly positioned sample and
//       2) provides hysteresis of diminishing error when a sub-threshold rate is sought
// parms:
// - Estep   : Step size for edge mini-PR to take
// - Dstep   : Step size for data mini-PR to take
// - pr_vals: 4 int array containing values of MINI-PR in order of NS Data; NS Edge; EW Data; EW Edge
//--- dirL1R0 -- noBER -- seek_edge --- ACTION --- (IF PR MAX or PR MIN exceeded return max_eye) -------------------
//    FALSE      FALSE    noseek{ns/ew} Subtract D from selected DATA PR and add E to EDGE; Reset & Perform BER check
//    FALSE      FALSE    doseek        Add D to both DATA PR and subtract E from EDGE PR; Perform BER check
//    FALSE      TRUE     noseek{ns/ew} Subtract D from selected DATA PR and add E to EDGE; Do NOT run BER check
//    FALSE      TRUE     doseek        Add D to both DATA PR and subtract E from EDGE PR; Do NOT run BER check
//    TRUE       FALSE    noseek{ns/ew} Add D to selected DATA PR and subtract E from EDGE; Reset & Perform BER check
//    TRUE       FALSE    doseek        Subtract D from both DATA PR and add E to EDGE PR; Perform BER check
//    TRUE       TRUE     noseek{ns/ew} Add D to selected DATA PR and subtract E from EDGE ; Do NOT run BER check
//    TRUE       TRUE     doseek        Subtract D from both DATA PR and add E to EDGE PR; Do NOT run BER check
// Return value:
//   -- An error count value if noBER = false else 0
//   -- A constant == "max_eye" if the mini-PR extents will be violated
int nedge_seek_step (t_gcr_addr* gcr_addr, t_bank bank, unsigned int Dstep, unsigned int Estep, bool dirL1R0,
                     bool noBER, t_seek seek_edge, int* pr_vals)
{

    int ns_edge_step = (seek_edge != noseekEW) ? Estep :
                       0; //((pr_vals[prEns_i] > edge_half_left) && (pr_vals[prEns_i] < edge_half_right)) ? (2) : (1);
    int ns_data_step = (seek_edge != noseekEW) ? Dstep : 0; //stepsize-1;
    int ew_edge_step = (seek_edge != noseekNS) ? Estep :
                       0; //((pr_vals[prEns_i] > edge_half_left) && (pr_vals[prEns_i] < edge_half_right)) ? (2) : (1);
    int ew_data_step = (seek_edge != noseekNS) ? Dstep : 0; //stepsize-1;
    int ber_count = 0;
    int pr_temp[4];

    if (!dirL1R0)
    {
        if (seek_edge == doseek)
        {
            pr_temp[prDns_i] = pr_vals[prDns_i] + ns_data_step;
            pr_temp[prDew_i] = pr_vals[prDew_i] + ew_data_step;
            pr_temp[prEns_i] = pr_vals[prEns_i] - ns_edge_step;
            pr_temp[prEew_i] = pr_vals[prEew_i] - ew_edge_step;
        } // if seek_edge
        else
        {
            //edge_step = stepsize-1;
            pr_temp[prDns_i] = pr_vals[prDns_i] - ns_data_step;//1;
            pr_temp[prDew_i] = pr_vals[prDew_i] - ew_data_step;//1;
            pr_temp[prEns_i] = pr_vals[prEns_i] + ns_edge_step;
            pr_temp[prEew_i] = pr_vals[prEew_i] + ew_edge_step;
        }
    } // if dir LEFT
    else
    {
        if (seek_edge == doseek)
        {
            pr_temp[prDns_i] = pr_vals[prDns_i] - ns_data_step;
            pr_temp[prDew_i] = pr_vals[prDew_i] - ew_data_step;
            pr_temp[prEns_i] = pr_vals[prEns_i] + ns_edge_step;
            pr_temp[prEew_i] = pr_vals[prEew_i] + ew_edge_step;
        } // if seek_edge
        else
        {
            //edge_step = stepsize-1;
            pr_temp[prDns_i] = pr_vals[prDns_i] + ns_data_step;//1;
            pr_temp[prDew_i] = pr_vals[prDew_i] + ew_data_step;//1;
            pr_temp[prEns_i] = pr_vals[prEns_i] - ns_edge_step;
            pr_temp[prEew_i] = pr_vals[prEew_i] - ew_edge_step;
        }
    } // else dir RIGHT

    // Bounds Checking
    if ((((pr_temp[prDns_i] > pr_mini_max) || (pr_temp[prDew_i] > pr_mini_max) || (Dstep == 0)) &&
         ((pr_temp[prEns_i] < pr_mini_min) || (pr_temp[prEew_i] < pr_mini_min) || (Estep == 0))) ||
        (((pr_temp[prDns_i] < pr_mini_min) || (pr_temp[prDew_i] < pr_mini_min) || (Dstep == 0)) &&
         ((pr_temp[prEns_i] > pr_mini_max) || (pr_temp[prEew_i] > pr_mini_max)
          || (Estep == 0)))) // Coverage may require an initial pr_*_edge offset > 1/2 max
    {
        return max_eye; // New position has exceeded the PR max/min. Return error value.
    }
    else
    {
        int i;

        for ( i = 0; i < 4; i++)
        {
            if (pr_temp[i] > pr_mini_max)
            {
                pr_vals[i] = pr_mini_max;
            }
            else if (pr_temp[i] < pr_mini_min)
            {
                pr_vals[i] = pr_mini_min;
            }
            else
            {
                pr_vals[i] = pr_temp[i];
            }
        }
    }

    // Now pack the four PR values into two ints and fast-write them into the PR regs.
    uint32_t bank_pr[2];

    if (seek_edge != noseekEW)
    {
        bank_pr[0] = (pr_vals[prDns_i] << (rx_a_pr_ns_data_shift - rx_a_pr_ns_edge_shift)) | pr_vals[prEns_i];

        if (bank == bank_a)
        {
            put_ptr_fast(gcr_addr, rx_a_pr_ns_data_addr, rx_a_pr_ns_edge_endbit, bank_pr[0]);
        }
        else
        {
            put_ptr_fast(gcr_addr, rx_b_pr_ns_data_addr, rx_b_pr_ns_edge_endbit, bank_pr[0]);
        }

    }

    if (seek_edge != noseekNS)
    {
        bank_pr[1] = (pr_vals[prDew_i] << (rx_a_pr_ew_data_shift - rx_a_pr_ew_edge_shift)) | pr_vals[prEew_i];

        if (bank == bank_a)
        {
            put_ptr_fast(gcr_addr, rx_a_pr_ew_data_addr, rx_a_pr_ew_edge_endbit, bank_pr[1]);
        }
        else
        {
            put_ptr_fast(gcr_addr, rx_b_pr_ew_data_addr, rx_b_pr_ew_edge_endbit, bank_pr[1]);
        }
    }

    if (!noBER)
    {
        int ber_status;

        if (seek_edge == doseek)
        {
            ber_count = get_ptr(gcr_addr, rx_berpl_count_addr, rx_berpl_count_startbit, rx_berpl_count_endbit);
            // Check if long timeout error has exceed limit prior to timeout and indicate shorter timeout needed
            //if (ber_count >= ber_lim) {
            //  ber_status = get_ptr(gcr_addr, rx_ber_timer_running_addr, rx_ber_timer_running_startbit, rx_ber_timer_running_endbit);
            //  if (ber_status != 0) {
            //    ber_count = ber_too_long;
            //    put_ptr_fast(gcr_addr, rx_ber_reset_addr, rx_ber_reset_endbit, 1);
            //  }
            //}
        }
        else
        {
            // FOR non-seek always expire BER timer for accurate count read
            // Also reset the BER before the cont read so that it only pertains to the current position.
            put_ptr_fast(gcr_addr, rx_ber_reset_addr, rx_ber_reset_endbit, 1);

            do
            {
                ber_status = get_ptr(gcr_addr, rx_ber_timer_running_addr, rx_ber_timer_running_startbit, rx_ber_timer_running_endbit);
            }
            while (ber_status != 0);

            ber_count = get_ptr(gcr_addr, rx_berpl_count_addr, rx_berpl_count_startbit, rx_berpl_count_endbit);
        }
    }
    else
    {
        ber_count = 0; // BER is not requested just return 0
    }

    return ber_count;
}


////////////////////////////////////////////////////////////////////////////
// Run QPA on a lane and update historical width
// PHY state prior to DDC adjustment
//  Lane is fully powered on
//  CDR tracking main bank (bank_sel = A on initial cal), All quadrant.
//  DC Cal and edge offset complete on latches, along with vga gain
//  Servo queue is empty
//  All register modes are pre-set and stable
// PHY state at the completion of DDC adjustment
//   CDR tracking main bank (bank_sel = A on initial cal), All quadrant.
//   Mini PR offsets written with measured phase offset correction
int eo_qpa(t_gcr_addr* gcr_addr, t_bank bank, bool recal_2ndrun, bool* pr_changed)
{
    set_debug_state(0xE000); // DEBUG - QPA Start
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

    // Calculate Center offset
    bool centerskew_ns = abs(16 - pr_active[prEns_i]) > abs(16 - pr_active[prEew_i]);
    bool centerdir_ns = pr_active[prEns_i] > pr_active[prEew_i];

    uint32_t vote_ratio = get_ptr(gcr_addr, rx_qpa_vote_ratio_cfg_addr,  rx_qpa_vote_ratio_cfg_startbit,
                                  rx_qpa_vote_ratio_cfg_endbit);

    if (vote_ratio == 0)
    {
        // Error case: Fix the users transgressions to prevent servo breakage.
        // If 0 vote_ratio is requested, force setting of 1 since 0 will eventually be used to end the vote after a direction change.
        put_ptr(gcr_addr, rx_qpa_vote_ratio_cfg_addr,  rx_qpa_vote_ratio_cfg_startbit, rx_qpa_vote_ratio_cfg_endbit, 1,
                read_modify_write);
    }

    int lane = get_gcr_addr_lane(gcr_addr);

    // Check CDR lock status before clearing sticky bit to start test.
    int cdrlock_ignore = mem_pg_field_get(rx_qpa_cdrlock_ignore);
    cdr_status = wait_for_cdr_lock(gcr_addr, true);

    //cdr_status = (bank == bank_a) ? (cdr_status & 0x2) : (cdr_status & 0x1);
    if ((cdr_status != pass_code) && (cdrlock_ignore != 1))
    {
        set_qpa_err (gcr_addr, bank, lane, bank_pr_save, pr_active);
        set_debug_state(0xE081); // DEBUG: Algorithm error. CDR not locked.
        set_fir(fir_code_warning);
        return warning_code;
    }

    // See Workbook Table x.x.1.1 "rx_ddc_min_err_lim Register Decode" in QPA Section
    int servo_pattern_enable = mem_pg_field_get(rx_qpa_pattern_enable);
    int servo_pattern = mem_pg_field_get(rx_qpa_pattern);
    //const int ber_lim=0;

    uint16_t servo_code_a[4] = {c_qpa_ae_n000, c_qpa_ae_e000, c_qpa_ae_s000, c_qpa_ae_w000};
    uint16_t servo_code_b[4] = {c_qpa_be_n000, c_qpa_be_e000, c_qpa_be_s000, c_qpa_be_w000};

    if (servo_pattern_enable == 0b1)
    {
        bool noTXatH1H0 = ((servo_pattern & (0x4)) ^ (servo_pattern & (0x2))) == 0b0;

        if (noTXatH1H0)
        {
            // This is a user error condition where the custom pattern has no transition at H0 and therefore cannot measure an edge position.
            // In this case, fail the servo and set all QPA OBS values to 7 which is an impossible normal result.
            mem_pl_field_put(rx_qpa_ne_obs, lane, 7);
            mem_pl_field_put(rx_qpa_ee_obs, lane, 7);
            mem_pl_field_put(rx_qpa_se_obs, lane, 7);
            mem_pl_field_put(rx_qpa_we_obs, lane, 7);
            abort_status |= error_code;
            mem_pl_bit_set(rx_quad_phase_fail, lane);
            set_debug_state(0xE08F); //DEBUG: Main RX abort
        }

        servo_code_a[0] = mk_opcode(c_qpa_prg_ae_n000, servo_pattern);
        servo_code_a[1] = mk_opcode(c_qpa_prg_ae_e000, servo_pattern);
        servo_code_a[2] = mk_opcode(c_qpa_prg_ae_s000, servo_pattern);
        servo_code_a[3] = mk_opcode(c_qpa_prg_ae_w000, servo_pattern);
        servo_code_b[0] = mk_opcode(c_qpa_prg_be_n000, servo_pattern);
        servo_code_b[1] = mk_opcode(c_qpa_prg_be_e000, servo_pattern);
        servo_code_b[2] = mk_opcode(c_qpa_prg_be_s000, servo_pattern);
        servo_code_b[3] = mk_opcode(c_qpa_prg_be_w000, servo_pattern);
    }

    set_debug_state(0xE001); // DEBUG - QPA Setup



    // Assume already switched to the correct bank prior to this being called
    /////// Initial Setup
    // Read existing ctle_coarse preset for use in abort sequence and select the correct servo ops
    uint16_t servo_ops[1];
    uint16_t quad = 4;
    int32_t servo_results[4];

    // Disable servo status for result at min/max
    PK_STATIC_ASSERT(rx_servo_status_error_en_width == 4); // Write values need to be updated if field width changes
    put_ptr_field(gcr_addr, rx_servo_status_error_en, 0b0011, read_modify_write);

    do
    {
        quad--;
        servo_ops[0] = (bank == bank_a) ? servo_code_a[quad] : servo_code_b[quad];
        // Verify that the servo queues are empty
        int servo_queue_status = get_ptr_field(gcr_addr, rx_servo_queue_status_full_reg_alias);
        int op_queue_empty     = bitfield_get(servo_queue_status, rx_servo_op_queue_empty_mask,
                                              rx_servo_op_queue_empty_shift);
        int result_queue_empty = bitfield_get(servo_queue_status, rx_servo_result_queue_empty_mask,
                                              rx_servo_result_queue_empty_shift);
        int both_queues_empty  = (op_queue_empty & result_queue_empty);

        if (!both_queues_empty)
        {
            set_qpa_err(gcr_addr, bank, lane, bank_pr_save, pr_active);
            // Set the FIR if either queue is not empty.
            set_debug_state(0xE01F); // Servo queues not empty
            set_fir(fir_code_warning);
            return warning_code;
        }

        // Run the servo ops
        abort_status = run_servo_ops_and_get_results(gcr_addr, c_servo_queue_general, 1, servo_ops, &servo_results[quad]);
        abort_status |= check_rx_abort(gcr_addr);
        set_debug_state(0xE010 | quad); // DEBUG - CTLE Run Servo Op

        int pridx;
        t_seek seek_quad;

        if ((quad == 2 || quad == 0))
        {
            pridx = prEns_i;
            seek_quad = noseekNS;
        }
        else
        {
            pridx = prEew_i;
            seek_quad = noseekEW;
        }

        int Ediff = servo_results[quad];
        // Range checking is not neccessary here because the servo is limited in it's excursions and will only return the amount of change actually applied to the PR
        pr_active[pridx] += Ediff;

        // The undo direction is the opposite of where the servo moved the PRs
        bool dirL1R0 = !(Ediff < 0);
        Ediff = (dirL1R0) ? Ediff : (~Ediff + 1);
        // NO. Divide wrecks the bias correction: Now divide original Ediff by two as the new PR result.
        //int Ediff_half = ((Ediff)  >> 1) + (Ediff & 0b1);
        //servo_results[quad] = dirL1R0?(Ediff_half) : (~Ediff_half + 1);

        //DEBUG set_debug_state(Ediff & 0xFFFF);
        while ((Ediff != 0))
        {
            //calling nedge_seek_step with L1 move, using noBER, and no seek with step=2 to move Edge/Data back to new center
            nedge_seek_step(gcr_addr, bank, 0, 1, dirL1R0, true, seek_quad, pr_active);//, ber_lim
            Ediff--;
        }

        set_debug_state(0xE020 | quad); // DEBUG - QPA Run Servo Op
    }
    while ((quad != 0) && (abort_status == 0));

    // Re-enable servo status for result at min/max
    put_ptr_field(gcr_addr, rx_servo_status_error_en, 0b1111, read_modify_write);

    // Note: If failed, return warning_code  don't switch banks.
    // Note: still set failed status
    if (abort_status != pass_code)
    {
        mem_pl_bit_set(rx_quad_phase_fail, lane);
        set_debug_state(0xE080); //DEBUG: Main RX abort
        return abort_status;
    }


    // 5: Calculate average of mini-pr offsets
    // First each quadrant pair edge offset is averaged
    // Equally split offset
    // If the original values of *both* quadrant pairs have the same sign then there is a bias which must be subtracted.
    //   -- Bias easily occurs due to pattern selection on random idiosyncracy
    // Then move PR into new position. Negative number is a leftward shift.
    int EsumNS = servo_results[0] + servo_results[2] ;
    int EsumEW = servo_results[1] + servo_results[3] ;
    bool dirL1R0NS = (EsumNS) < 0;
    bool dirL1R0EW = (EsumEW) < 0;

    uint32_t EsumNS_abs = abs(EsumNS);
    uint32_t EsumEW_abs = abs(EsumEW);
    EsumNS = (EsumNS_abs + 1)  >> 1;
    EsumEW = (EsumEW_abs + 1)  >> 1;
    /* if (EsumNS_abs != 3) { */
    /*   EsumNS = EsumNS + (EsumNS_abs & 0b1); */
    /* } */
    /* if (EsumEW_abs != 3) { */
    /*   EsumEW = EsumEW + (EsumEW_abs & 0b1); */
    /* } */

    uint32_t OffsetNS;
    uint32_t OffsetEW;
    bool hysteresis_en = mem_pg_field_get(rx_qpa_hysteresis_enable) == 1;

    // Eliminate potential bias.
    // If the average value of each pair appear skewed to one side
    // then find their difference as the phase offset.
    // However, if the center is still between the pairs then treat as if opposite to correct CDR track offset
    if (! (dirL1R0NS ^ dirL1R0EW) )
    {
        OffsetNS = abs(EsumNS - EsumEW); // Divide offset between the pairs later on.
        //int offset_half_temp = OffsetNS >> 1;
        // Since a larger bias expands the offset remove it. Smaller bias's don't affect it.
        int offset_bias_temp = OffsetNS >> 2;
        OffsetNS = OffsetNS - offset_bias_temp;
        // Now correct the signs for a balanced movement
        // Same sign results worked servo harder to move out of a skewed eye
        // The quadrant closest to that skewed eye moved more and will be the larger.
        // ---> Therefore the smaller quadrant measurement moves against it's measured sign. <---
        dirL1R0NS = dirL1R0NS ^ (EsumNS < EsumEW);
        dirL1R0EW = !dirL1R0NS;
        //// If predicted offset is still between pairs, correct CDR dead space.
        //if ((EsumNS < offset_half_temp) || (EsumEW < offset_half_temp)) {
        //  OffsetNS = (OffsetNS >> 1) + (OffsetNS & 0b1);
        //}
    }
    else
    {
        // Otherwise EW and NS are opposite in sign (previously sign stripped of course)
        OffsetNS = EsumNS + EsumEW;
    }

    // Divide to compensate CDR track offset (dead space) but only when signs differ.
    //OffsetNS = (OffsetNS >> 1) + (OffsetNS & 0b1);
    OffsetNS = (OffsetNS + 1) >> 1;
    // Split difference in shifts evenly between phases
    OffsetEW = OffsetNS;
    int ENavg_tgt;
    int EEavg_tgt;

    if (centerskew_ns && (centerdir_ns ^ dirL1R0NS))
    {
        ENavg_tgt = OffsetNS >> 1;
        EEavg_tgt = OffsetEW - ENavg_tgt;
    }
    else
    {
        EEavg_tgt = OffsetEW >> 1;
        ENavg_tgt = OffsetNS - EEavg_tgt;
    }


    // Post result averaging hysteresis applied to help reduce chances of result oscillation during Main VGA loop
    // Correct for fixed 1-step hysteresis during recal or post 1st iteration and when manually enabled
    // If hysteresis stability is triggered then neither phase should move.
    if (!((recal_2ndrun || hysteresis_en) && (OffsetNS < 2)))
    {

        set_debug_state(0xE030); // DEBUG - Phase adjust exceeds hysteresis

        // Indicate if the PR value changed
        *pr_changed = (EEavg_tgt != 0) || (ENavg_tgt != 0);


        while ((ENavg_tgt != 0))
        {
            //calling nedge_seek_step with variable L1/R0, using noBER, and no seek with step=1 to move Edge to new center
            nedge_seek_step(gcr_addr, bank, 0, 1, dirL1R0NS, true, noseekNS, pr_active);
            ENavg_tgt--;
        }

        while ((EEavg_tgt != 0))
        {
            //calling nedge_seek_step with variable L1/R0, using noBER, and no seek with step=1 to move Edge to new center
            nedge_seek_step(gcr_addr, bank, 0, 1, dirL1R0EW, true, noseekEW, pr_active);
            EEavg_tgt--;
        }
    }

    // Write results but mask off leading bits to prevent corruption
    mem_pl_field_put(rx_qpa_ne_obs, lane, servo_results[0] & ((0b1 << rx_qpa_ne_obs_width) - 1));
    mem_pl_field_put(rx_qpa_ee_obs, lane, servo_results[1] & ((0b1 << rx_qpa_ee_obs_width) - 1));
    mem_pl_field_put(rx_qpa_se_obs, lane, servo_results[2] & ((0b1 << rx_qpa_se_obs_width) - 1));
    mem_pl_field_put(rx_qpa_we_obs, lane, servo_results[3] & ((0b1 << rx_qpa_we_obs_width) - 1));

    set_debug_state(0xE031); // DEBUG - Phase adjust done


    // qpa passed
    mem_pl_bit_clr(rx_quad_phase_fail, lane);

    //Checking done
    if (bank == bank_a)
    {
        mem_pl_field_put(rx_a_quad_phase_done , lane, 0b1);   //ppe pl
    }
    else
    {
        mem_pl_field_put(rx_b_quad_phase_done , lane, 0b1);
    }

    set_debug_state(0xE0FF); // DEBUG: 10: exit pass

    // Return Success
    return abort_status;
} //eo_qpa
