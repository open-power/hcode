/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/pstate_cme/p9_cme_pstate.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2018                                                    */
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
//-----------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2014
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
//-----------------------------------------------------------------------------

/// \file   p9_cme_pstate.c
/// \brief  CME and QCME codes enforcing the Power protocols for Pstate, DPLL
///         actuation, iVRM, resonant clocking, and VDM.
/// \owner  Rahul Batra Email: rbatra@us.ibm.com
///

#include "pk.h"
#include "ppe42_scom.h"

#include "cme_firmware_registers.h"
#include "cme_register_addresses.h"
#include "cppm_firmware_registers.h"
#include "cppm_register_addresses.h"
#include "ppm_firmware_registers.h"
#include "ppm_register_addresses.h"
#include "qppm_firmware_registers.h"
#include "qppm_register_addresses.h"

#include "ppehw_common.h"
#include "cmehw_common.h"
#include "cmehw_interrupts.h"
#include "p9_cme_pstate.h"
#include "p9_hcode_image_defines.H"

//
//Globals
//
cmeHeader_t* G_cmeHeader;
LocalPstateParmBlock* G_lppb;
extern CmePstateRecord G_cme_pstate_record;
extern CmeRecord G_cme_record;

inline uint32_t update_vdm_jump_values_in_dpll(uint32_t pstate, uint32_t region) __attribute__((always_inline));

const uint8_t G_vdm_threshold_table[13] =
{
    0x00, 0x01, 0x03, 0x02, 0x06, 0x07, 0x05, 0x04,
    0x0C, 0x0D, 0x0F, 0x0E, 0x0A
};

//
//send_pig_packet
//
int send_pig_packet(uint64_t data, uint32_t coreMask)
{
    int               rc = 0;
    uint64_t          data_tmp;

    // First make sure no interrupt request is currently granted
    do
    {
        // Read PPMPIG status
        CME_GETSCOM(PPM_PIG, coreMask, data_tmp);
    }
    while (((ppm_pig_t)data_tmp).fields.intr_granted);

    // Send PIG packet
    CME_PUTSCOM(PPM_PIG, coreMask, data);

    return rc;
}

uint32_t poll_dpll_stat()
{
    data64_t data;
    uint32_t rc = 0;

    // DPLL Mode 2
    if(!(in32(CME_LCL_FLAGS) & BIT32(CME_FLAGS_VDM_OPERABLE)))
    {
        PK_TRACE_INF("Poll on DPLL_STAT[freq_change=0]");

        // ... to indicate that the DPLL is safely either at the new frequency
        // or in droop protection below the new frequency
        do
        {
            ippm_read(QPPM_DPLL_STAT, &data.value);
        }
        while((data.words.lower & BIT64SH(61)));
    }
    else
        // DPLL Mode 3
    {
        PK_TRACE_INF("Poll on DPLL_STAT[update_complete=1]");
        // ... to indicate that the DPLL has sampled the newly requested
        // frequency into its internal registers as a target,
        // but may not yet be there
        uint32_t tbStart, tbEnd, elapsed;
        cppm_csar_t csar;
        csar.value = 0;

        //Read CPPM_CSAR
        CME_GETSCOM(CPPM_CSAR, G_cme_pstate_record.firstGoodCoreMask, csar.value);

        //Read TimebaseStart
        tbStart = in32(CME_LCL_TBR);

        do
        {
            //Read DPLL_STAT
            ippm_read(QPPM_DPLL_STAT, &data.value);

            //If QPPM_DPLL_STAT[60/UPDATE_COMPLETE]=1
            if(data.words.lower & BIT64SH(60))
            {
                break;
            }

            //Read TimebaseEnd
            tbEnd = in32(CME_LCL_TBR);

            //Compute Elapsed Count with accounting for Timebase Wrapping
            if (tbEnd > tbStart)
            {
                elapsed = tbEnd - tbStart;
            }
            else
            {
                elapsed = 0xFFFFFFFF - tbStart + tbEnd + 1;
            }

            //If !CPPM_CSAR[DIS_NACK] AND (Elapsed Count > DROOP_POLL_COUNT), then prolonged
            //droop detected
            if (!(csar.value & BIT64(CPPM_CSAR_DISABLE_CME_NACK_ON_PROLONGED_DROOP)) &&
                elapsed > DROOP_POLL_COUNT)
            {
                rc = 1; //Non-zero return code
                break;
            }
        }
        while(1);
    }

    return rc;
}

// Non-atomic Interppm-read, this function is not made availabe via the header
// as the toplevel-wrapper (atomic) ippm_read should be used instead
void nonatomic_ippm_read(uint32_t addr, uint64_t* data)
{
    // G_cme_pstate_record.firstGoodCoreMask MUST be set!
    uint64_t val;

    cppm_ippmcmd_t cppm_ippmcmd;
    cppm_ippmcmd.value = 0;
    cppm_ippmcmd.fields.qppm_reg = addr & 0x000000ff;
    cppm_ippmcmd.fields.qppm_rnw = 1;
    CME_PUTSCOM(CPPM_IPPMCMD, G_cme_pstate_record.firstGoodCoreMask,
                cppm_ippmcmd.value);

    do
    {
        CME_GETSCOM(CPPM_IPPMSTAT, G_cme_pstate_record.firstGoodCoreMask, val);
    } // Check the QPPM_ONGOING bit

    while(val & BIT64(0));

    // QPPM_STATUS, non-zero indicates an error
    if(val & BITS64(1, 2))
    {
        PK_PANIC(CME_PSTATE_IPPM_ACCESS_FAILED);
    }

    CME_GETSCOM(CPPM_IPPMRDATA, G_cme_pstate_record.firstGoodCoreMask, val);

    *data = val;
}

void ippm_read(uint32_t addr, uint64_t* data)
{
    PkMachineContext ctx __attribute__((unused));
    pk_critical_section_enter(&ctx);
    nonatomic_ippm_read(addr, data);
    pk_critical_section_exit(&ctx);
}

// Non-atomic Interppm-write, this function is not made availabe via the header
// as the toplevel-wrapper (atomic) ippm_write should be used instead
void nonatomic_ippm_write(uint32_t addr, uint64_t data)
{
    // G_cme_pstate_record.firstGoodCoreMask MUST be set!
    uint64_t val;

    CME_PUTSCOM(CPPM_IPPMWDATA, G_cme_pstate_record.firstGoodCoreMask,
                data);
    cppm_ippmcmd_t cppm_ippmcmd;
    cppm_ippmcmd.value = 0;
    cppm_ippmcmd.fields.qppm_reg = addr & 0x000000ff;
    cppm_ippmcmd.fields.qppm_rnw = 0;
    CME_PUTSCOM(CPPM_IPPMCMD, G_cme_pstate_record.firstGoodCoreMask,
                cppm_ippmcmd.value);

    do
    {
        CME_GETSCOM(CPPM_IPPMSTAT, G_cme_pstate_record.firstGoodCoreMask, val);
    } // Check the QPPM_ONGOING bit

    while(val & BIT64(0));

    // QPPM_STATUS, non-zero indicates an error
    if(val & BITS64(1, 2))
    {
        PK_PANIC(CME_PSTATE_IPPM_ACCESS_FAILED);
    }
}

void ippm_write(uint32_t addr, uint64_t data)
{
    PkMachineContext ctx __attribute__((unused));
    pk_critical_section_enter(&ctx);
    nonatomic_ippm_write(addr, data);
    pk_critical_section_exit(&ctx);
}

void intercme_msg_send(uint32_t msg, INTERCME_MSG_TYPE type)
{
    out32(CME_LCL_ICSR, (msg << 4) | type);

    PK_TRACE_DBG("imt send | msg=%08x", ((msg << 4) | type));

    // Block on ack from companion CME
    while(!(in32(CME_LCL_EISR) & BIT32(30))) {}

    out32(CME_LCL_EISR_CLR, BIT32(30));
}

void intercme_msg_recv(uint32_t* msg, INTERCME_MSG_TYPE type)
{
    // Poll for inter-cme communication from QM
    while(!(in32(CME_LCL_EISR) & BIT32(29))) {}

    *msg = in32(CME_LCL_ICRR);
    PK_TRACE_DBG("imt recv | msg=%08x", *msg);

    if(*msg & type)
    {
        // Shift out the type field, leaving only the message data
        *msg >>= 4;
    }
    else
    {
        PK_PANIC(CME_PSTATE_UNEXPECTED_INTERCME_MSG);
    }

    // Ack back to companion CME that msg was received
    out32(CME_LCL_ICCR_OR, BIT32(0));
    // Clear the ack
    out32(CME_LCL_ICCR_CLR, BIT32(0));
    out32(CME_LCL_EISR_CLR, BIT32(29));
}

void intercme_direct(INTERCME_DIRECT_INTF intf, INTERCME_DIRECT_TYPE type, uint32_t retry_enable)
{
    uint32_t addr_offset = 0;
    uint32_t orig_intf = 0;
    uint32_t poll_count = 0;

    orig_intf = intf;

    // Send intercme interrupt, this is the same whether notifying or acking
    out32(CME_LCL_ICCR_OR , BIT32(intf));
    out32(CME_LCL_ICCR_CLR, BIT32(intf));

    // Adjust the EI*R base address based on which intercme direct interface
    // is used since the bits are spread across both words in the EI*R registers
    if(intf == INTERCME_DIRECT_IN0)
    {
        // IN0: ICCR[5], EI*R[7]
        intf += 2;
    }
    else
    {
        // IN1: ICCR[6], EI*R[38], ie. second half EI*R[6]
        // IN2: ICCR[7], EI*R[39], ie. second half EI*R[7]
        addr_offset = 4;
    }

    if(type == INTERCME_DIRECT_NOTIFY)
    {
        uint32_t intercme_acked = 0;
#if SIMICS_TUNING == 1
        intercme_acked = 1;
#endif
        poll_count = 0;

        while(!intercme_acked)
        {
            // if the master CME is booted long before the slave, the slave won't see the original interrupt
            if (retry_enable && ((poll_count & 0x1FF) == 0x1FF))
            {
                // Send intercme interrupt, this is the same whether notifying or acking
                out32(CME_LCL_ICCR_OR , BIT32(orig_intf));
                out32(CME_LCL_ICCR_CLR, BIT32(orig_intf));
            }

            if(in32((CME_LCL_EISR + addr_offset)) & BIT32(intf))
            {
                intercme_acked = 1;
            }

            poll_count++;
        }
    }

    out32((CME_LCL_EISR_CLR + addr_offset), BIT32(intf)); // Clear the interrupt
}

#ifdef USE_CME_RESCLK_FEATURE
uint32_t p9_cme_resclk_get_index(uint32_t pstate)
{
    int32_t i = RESCLK_FREQ_REGIONS;

    // Walk the table backwards by decrementing the index and checking for
    // a value less than or equal to the requested pstate
    // If no match is found then the index will be zero meaning resonance gets
    // disabled
    while((pstate > G_lppb->resclk.resclk_freq[--i]) && (i > 0)) {}

    PK_TRACE_DBG("resclk_idx[i=%d]=%d", i, G_lppb->resclk.resclk_index[i]);
    return((uint32_t)G_lppb->resclk.resclk_index[i]);
}
#endif//USE_CME_RESCLK_FEATURE

void p9_cme_core_stop_analog_control(uint32_t core_mask, ANALOG_CONTROL enable)
{
#ifdef USE_CME_RESCLK_FEATURE

    if(in32(CME_LCL_FLAGS) & BIT32(CME_FLAGS_RCLK_OPERABLE))
    {
        uint32_t pstate;
        uint32_t curr_idx;
        uint64_t val;

        if(enable)
        {
            PK_TRACE_INF("resclk | enabling resclks");

            if(core_mask == CME_MASK_C0)
            {
                // Use Core0 index since only updating that core
                curr_idx = G_cme_pstate_record.resclkData.core0_resclk_idx;
            }
            else
            {
                // Use Core1 index if a) only updating that core, or b) in the
                // case of both Cores since the indices will be the same
                curr_idx = G_cme_pstate_record.resclkData.core1_resclk_idx;
            }

            // 1) step CACCR to running pstate
            pstate = G_cme_pstate_record.quadPstate;
            p9_cme_resclk_update(core_mask, p9_cme_resclk_get_index(pstate), curr_idx);
            // 2) write CACCR[13:14]=0b11 to switch back to common control
            CME_PUTSCOM(CPPM_CACCR_OR, core_mask, (BITS64(13, 2)));
            // 3) Clear out the CACCR resclk values
            CME_PUTSCOM(CPPM_CACCR_CLR, core_mask, BITS64(0, 13));
        }
        else
        {
            PK_TRACE_INF("resclk | disabling resclks");
            // 1) copy QACCR[0:12] into CACCR[0:12], with CACCR[13:14]=0b00,
            //    to switch away from common control. QACCR will already be set
            //    to a value corresponding to the current quad Pstate
            ippm_read(QPPM_QACCR, &val);
            val &= BITS64(0, 13);
            // clk_sync enable (bit 15) is ALWAYS 0b0 at this point due to the
            // sequence of function calls in Stop Entry
            CME_PUTSCOM(CPPM_CACCR, core_mask, val);
            curr_idx = p9_cme_resclk_get_index(G_cme_pstate_record.quadPstate);
            // 2) step CACCR to a value which disables resonance
            pstate = ANALOG_PSTATE_RESCLK_OFF;
            p9_cme_resclk_update(core_mask, p9_cme_resclk_get_index(pstate), curr_idx);
        }
    }

#endif//USE_CME_RESCLK_FEATURE

#ifdef USE_CME_VDM_FEATURE

    if(in32(CME_LCL_FLAGS) & BIT32(CME_FLAGS_VDM_OPERABLE))
    {
        if(enable)
        {
            PK_TRACE_INF("vdm | enabling vdms");
            // Clear Disable
            // (Poweron is set earlier in Stop4 Exit flow
            // due to delay required between poweron and enable)
            CME_PUTSCOM(PPM_VDMCR_CLR, core_mask, BIT64(1));
        }
        else
        {
            PK_TRACE_INF("vdm | disabling vdms");
            // Set Disable (Poweron is cleared in Stop4 Entry)
            CME_PUTSCOM(PPM_VDMCR_OR, core_mask, BIT64(1));
        }
    }

#endif//USE_CME_VDM_FEATURE
}

#ifdef USE_CME_VDM_FEATURE
uint32_t pstate_to_vpd_region(uint32_t pstate)
{
    if(pstate > G_lppb->operating_points[NOMINAL].pstate)
    {
        return REGION_POWERSAVE_NOMINAL;
    }
    else if(pstate > G_lppb->operating_points[TURBO].pstate)
    {
        return REGION_NOMINAL_TURBO;
    }
    else
    {
        return REGION_TURBO_ULTRA;
    }
}

uint32_t pstate_to_vid_compare(uint32_t pstate, uint32_t region)
{
    // prevent compiler from using software multiply
    // to index the array of structs
    uint32_t base_pstate;
    compile_assert(NumSlopeRegions, VPD_NUM_SLOPES_REGION == 3);

    if (region == 0)
    {
        base_pstate = G_lppb->operating_points[0].pstate;
    }
    else if (region == 1)
    {
        base_pstate = G_lppb->operating_points[1].pstate;
    }
    else
    {
        base_pstate = G_lppb->operating_points[2].pstate;
    }

    uint32_t  psdiff = base_pstate - pstate;
// uint32_t  psdiff = (uint32_t)G_lppb->operating_points[region].pstate - pstate;

    // *INDENT-OFF*
        // use native PPE 16-bit multiply instruction
        // VID codes must by definition have positive slope so use unsigned
        // delta = slope times difference in pstate (interpolate)
    return(((mulu16((uint32_t)G_lppb->PsVIDCompSlopes[region], psdiff)
            // Apply the rounding adjust
             + VDM_VID_COMP_ADJUST) >> VID_SLOPE_FP_SHIFT_12)
            // Offset value at bottom of the range
             + (uint32_t)G_lppb->vid_point_set[region]);
    // *INDENT-ON*
}

#if NIMBUS_DD_LEVEL != 10
uint32_t calc_vdm_jump_values(uint32_t pstate, uint32_t region)
{
    static uint32_t vdm_jump_values[NUM_JUMP_VALUES] = { 0 };
    uint32_t new_jump_values = 0;
    uint32_t i;

    // prevent compiler from using software multiply
    // to index the array of structs
    uint32_t base_pstate;
    compile_assert(NumSlopeRegions, VPD_NUM_SLOPES_REGION == 3);

    if (region == 0)
    {
        base_pstate = G_lppb->operating_points[0].pstate;
    }
    else if (region == 1)
    {
        base_pstate = G_lppb->operating_points[1].pstate;
    }
    else
    {
        base_pstate = G_lppb->operating_points[2].pstate;
    }

    int32_t  psdiff = base_pstate - pstate;
// int32_t  psdiff = (uint32_t)G_lppb->operating_points[region].pstate - pstate;

    for(i = 0; i < NUM_JUMP_VALUES; ++i )
    {
        // *INDENT-OFF*
        // use native PPE 16-bit multiply instruction
        // jump values can decrease with voltage so must use signed
        // Cast every math term into 32b for more efficient PPE maths
        vdm_jump_values[i] = (uint32_t)
            // Offset by value at bottom of the range
              ((int32_t)G_lppb->jump_value_set[region][i]
            // delta = slope times difference in pstate (interpolate)
            + ((muls16((int32_t)G_lppb->PsVDMJumpSlopes[region][i] , psdiff)
            // Apply the rounding adjust
            + (int32_t)VDM_JUMP_VALUE_ADJUST) >> THRESH_SLOPE_FP_SHIFT));
        // *INDENT-ON*
    }

    // Enforce the following:
    // new_NL = MIN(MAX(I_NL, I_NS+1), MAX(NL[region], NL[region+1]))
    // new_SN = MIN(I_SN, I_NS)
    // new_LS = MIN(I_LS, new_NL - I_SN)
    // where I_* means the calculated (interpolated) value
    // *INDENT-OFF*
    vdm_jump_values[VDM_N_L_IDX] = MIN(
        MAX(vdm_jump_values[VDM_N_L_IDX], (vdm_jump_values[VDM_N_S_IDX]+1)),
        MAX(G_lppb->jump_value_set[region][VDM_N_L_IDX],
            G_lppb->jump_value_set[region+1][VDM_N_L_IDX]));
    vdm_jump_values[VDM_S_N_IDX] = MIN(vdm_jump_values[VDM_S_N_IDX],
                                       vdm_jump_values[VDM_N_S_IDX]);
    vdm_jump_values[VDM_L_S_IDX] = MIN(vdm_jump_values[VDM_L_S_IDX],
                                      (vdm_jump_values[VDM_N_L_IDX]
                                     - vdm_jump_values[VDM_S_N_IDX]));
    // *INDENT-ON*
    // Return the jump values in bit positions as they appear in DPLL_CTRL
    new_jump_values |= (vdm_jump_values[VDM_N_L_IDX] << SHIFT64SH(35))
                       |  (vdm_jump_values[VDM_N_S_IDX] << SHIFT64SH(39))
                       |  (vdm_jump_values[VDM_L_S_IDX] << SHIFT64SH(43))
                       |  (vdm_jump_values[VDM_S_N_IDX] << SHIFT64SH(47));
    return new_jump_values;
}

inline uint32_t update_vdm_jump_values_in_dpll(uint32_t pstate, uint32_t region)
{
    uint32_t rc = 0;
    data64_t scom_data = { 0 };
    uint32_t new_jump_values = calc_vdm_jump_values(pstate, region);
    // Read the current contents of DPLL_CTRL and then update only the jump
    // value fields
    ippm_read(QPPM_DPLL_CTRL, &scom_data.value);

    // This check works because the remaining bits are reserved in DPLL_CTRL[32:63]
    if(new_jump_values != scom_data.words.lower)
    {
        // Critical section to ensure this entire sequence is done atomically
        // (the nonatomic_ippm_read/write functions can be used safely)
        PkMachineContext ctx __attribute__((unused));
        pk_critical_section_enter(&ctx);

        qppm_dpll_freq_t saved_dpll_val;
        qppm_dpll_freq_t reduced_dpll_val;
        // The frequency needs to be reduced by the N_L amount, this depends on
        // if the frequency has already been changed (if raising ps, then the
        // freq has already been dropped and the N_L value is based on that, ie. "new")
        uint32_t adj_n_l = (pstate >= G_cme_pstate_record.quadPstate)
                           ? (new_jump_values & BITS32(0, 4)) >> 28
                           : (scom_data.words.lower & BITS32(0, 4)) >> 28;
        data64_t poll_data;
        // Read the current freq controls
        nonatomic_ippm_read(QPPM_DPLL_FREQ, &saved_dpll_val.value);
        // Reduce freq by N_L (in 32nds)
        reduced_dpll_val.value = 0;
        reduced_dpll_val.fields.fmult = mulu16(saved_dpll_val.fields.fmult
                                               , (32 - adj_n_l)) >> 5;
        reduced_dpll_val.fields.fmax = reduced_dpll_val.fields.fmult;
        reduced_dpll_val.fields.fmin = reduced_dpll_val.fields.fmult;
        // Write the reduced frequency
        nonatomic_ippm_write(QPPM_DPLL_FREQ, reduced_dpll_val.value);
        rc = poll_dpll_stat();

        if (!rc)
        {
            // Clear jump enable (drop to Mode 2)
            nonatomic_ippm_write(QPPM_DPLL_CTRL_CLR, BIT64(1));
            // Poll for lock
            PK_TRACE_INF("Poll on DPLL_STAT[block_active|lock]");

            // ... to indicate that the DPLL is safely either at the new frequency
            // or in droop protection below the new frequency
            do
            {
                nonatomic_ippm_read(QPPM_DPLL_STAT, &poll_data.value);
            }
            while(!(poll_data.words.lower & BITS32(30, 2)));

            // Write the new jump values (clear jump enable)
            scom_data.value &= ~BIT64(1);
            scom_data.words.lower = new_jump_values;
            nonatomic_ippm_write(QPPM_DPLL_CTRL, scom_data.value);
            // Set jump enable (switch back to Mode 3)
            nonatomic_ippm_write(QPPM_DPLL_CTRL_OR, BIT64(1));

            // The frequency will be raised as part of the pstate transition if
            // lowering the pstate, don't need to do anything here
            if(pstate >= G_cme_pstate_record.quadPstate)
            {
                // Restore frequency
                nonatomic_ippm_write(QPPM_DPLL_FREQ, saved_dpll_val.value);
                rc = poll_dpll_stat();
            }
        }

        pk_critical_section_exit(&ctx);
    }

    return rc;
}
#endif//NIMBUS_DD_LEVEL

void calc_vdm_threshold_indices(uint32_t pstate, uint32_t region,
                                uint32_t indices[])
{
    static VDM_ROUNDING_ADJUST vdm_rounding_adjust[NUM_THRESHOLD_POINTS] =
    {
        VDM_OVERVOLT_ADJUST,
        VDM_SMALL_ADJUST,
        VDM_LARGE_ADJUST,
        VDM_XTREME_ADJUST
    };

    // prevent compiler from using software multiply
    // to index the array of structs
    uint32_t base_pstate;
    compile_assert(NumSlopeRegions, VPD_NUM_SLOPES_REGION == 3);

    if (region == 0)
    {
        base_pstate = G_lppb->operating_points[0].pstate;
    }
    else if (region == 1)
    {
        base_pstate = G_lppb->operating_points[1].pstate;
    }
    else
    {
        base_pstate = G_lppb->operating_points[2].pstate;
    }

    uint32_t  psdiff = base_pstate - pstate;
// int32_t psdiff = (uint32_t)G_lppb->operating_points[region].pstate - pstate;

    uint32_t i;

    for(i = 0; i < NUM_THRESHOLD_POINTS; ++i)
    {
        // *INDENT-OFF*
        // use native PPE 16-bit multiply instruction
        // jump values can decrease with voltage so must use signed
        // Cast every math term into 32b for more efficient PPE maths
        indices[i] = (uint32_t)((int32_t)G_lppb->threshold_set[region][i]
            // delta = slope times difference in pstate (interpolate)
            + ((muls16((int32_t)G_lppb->PsVDMThreshSlopes[region][i] , psdiff)
            // Apply the rounding adjust
            + (int32_t)vdm_rounding_adjust[i]) >> THRESH_SLOPE_FP_SHIFT));
        // *INDENT-ON*
    }

    // Check the interpolation result; since each threshold has a distinct round
    // adjust, the calculated index can be invalid relative to another threshold
    // index. Overvolt does not need to be checked and Small Droop will always
    // be either 0 or greater than 0 by definition.
    // Ensure that small <= large <= xtreme; where any can be == 0.
    indices[VDM_LARGE_IDX] = ((indices[VDM_LARGE_IDX] < indices[VDM_SMALL_IDX])
                              && (indices[VDM_LARGE_IDX] != 0))
                             ? indices[VDM_SMALL_IDX] : indices[VDM_LARGE_IDX];
    indices[VDM_XTREME_IDX] = ((indices[VDM_XTREME_IDX] < indices[VDM_LARGE_IDX])
                               && (indices[VDM_XTREME_IDX] != 0))
                              ? indices[VDM_LARGE_IDX] : indices[VDM_XTREME_IDX];
    indices[VDM_XTREME_IDX] = ((indices[VDM_XTREME_IDX] < indices[VDM_SMALL_IDX])
                               && (indices[VDM_LARGE_IDX]  == 0)
                               && (indices[VDM_XTREME_IDX] != 0))
                              ? indices[VDM_SMALL_IDX] : indices[VDM_XTREME_IDX];
}

uint32_t p9_cme_vdm_update(uint32_t pstate)
{
    // Static forces this array into .sbss instead of calling memset()
    static uint32_t new_idx[NUM_THRESHOLD_POINTS] = { 0 };
    uint32_t i, rc = 0;
    // Set one bit per threshold starting at bit 31 (28,29,30,31)
    uint32_t not_done = BITS32(32 - NUM_THRESHOLD_POINTS, NUM_THRESHOLD_POINTS);
    data64_t scom_data;
    data64_t base_scom_data;
    uint32_t region = pstate_to_vpd_region(pstate);

    // Calculate the new index for each threshold
    calc_vdm_threshold_indices(pstate, region, new_idx);

    // Look-up the VID compare value using the Pstate
    // Populate the VID compare field and init all other bits to zero
    base_scom_data.value = (uint64_t)(pstate_to_vid_compare(pstate, region)
                                      & BITS32(24, 8)) << SHIFT64(7);

    // Step all thresholds in parallel until each reaches its new target.
    // Doing this in parallel minimizes the number of interppm scom writes.
    do
    {
        // Only keep the VID compare value
        scom_data = base_scom_data;

        // Loop over all 4 thresholds (overvolt, small, large, xtreme)
        for(i = 0; i < NUM_THRESHOLD_POINTS; ++i)
        {
            if(new_idx[i] != G_cme_pstate_record.vdmData.vdm_threshold_idx[i])
            {
                // Decrement or increment the current index, whichever is
                // required to reach the new/target index
                G_cme_pstate_record.vdmData.vdm_threshold_idx[i] +=
                    (G_cme_pstate_record.vdmData.vdm_threshold_idx[i] < new_idx[i])
                    ? 1 : -1;
            }
            else
            {
                // Clear the unique bit for each threshold as each threshold is stepped
                // to its new index
                not_done &= ~(0x1 << i);
            }

            // OR the new threshold greycode into the correct position
            scom_data.words.upper |= G_vdm_threshold_table[
                                         G_cme_pstate_record.vdmData.vdm_threshold_idx[i]]
                                     << (SHIFT32(11) - (i * 4));
        }

        ippm_write(QPPM_VDMCFGR, scom_data.value);
    }
    while(not_done);

#if NIMBUS_DD_LEVEL != 10
    rc = update_vdm_jump_values_in_dpll(pstate, region);
#endif//NIMBUS_DD_LEVEL
    return rc;
}
#endif//USE_CME_VDM_FEATURE

#ifdef USE_CME_RESCLK_FEATURE
void p9_cme_resclk_update(ANALOG_TARGET target, uint32_t next_idx, uint32_t curr_idx)
{
    uint64_t base_val;
    uint64_t val;
    int32_t  step;

    PK_TRACE_DBG("resclk | target=%08x", (uint32_t)target);
    PK_TRACE_DBG("resclk | curr_idx=%d", curr_idx);
    PK_TRACE_DBG("resclk | next_idx=%d", next_idx);

    // Determine the step polarity, step is not used if curr_idx == next_idx
    if(curr_idx < next_idx)
    {
        step = 1;
    }
    else
    {
        step = -1;
    }

    // Read out the resclk register that is currently in control
    if(target == ANALOG_COMMON)
    {
        ippm_read(QPPM_QACCR, &base_val);
    }
    else
    {
        CME_GETSCOM(CPPM_CACCR, target, base_val);
    }

    // Preserve only the resclk control bits
    base_val &= (BITS64(13, 51));

    while(curr_idx != next_idx)
    {
        curr_idx += step;
        val = (((uint64_t)G_lppb->resclk.steparray[curr_idx].value) << 48)
              | base_val;

        if(target == ANALOG_COMMON)
        {
            ippm_write(QPPM_QACCR, val);
        }
        else
        {
            CME_PUTSCOM(CPPM_CACCR, target, val);
        }

        // There is an attribute for step-delay which is currently not used,
        // this is where the delay would go.
    }

    // Update the resclk index variables
    if(target == ANALOG_COMMON)
    {
        G_cme_pstate_record.resclkData.common_resclk_idx = curr_idx;
    }
    else
    {
        if(target & ANALOG_CORE0)
        {
            G_cme_pstate_record.resclkData.core0_resclk_idx = curr_idx;
        }

        if(target & ANALOG_CORE1)
        {
            G_cme_pstate_record.resclkData.core1_resclk_idx = curr_idx;
        }
    }
}
#endif//USE_CME_RESCLK_FEATURE

// always update both cores regardless of partial good or stop state
//
void p9_cme_pstate_pmsr_updt()
{
    uint64_t pmsrData;

    //Note: PMSR[58/UPDATE_IN_PROGRESS] is always cleared here
    pmsrData  = ((uint64_t)G_cme_pstate_record.globalPstate) << 56;
    pmsrData |= ((uint64_t)(G_cme_pstate_record.quadPstate)) << 48;
    pmsrData |= ((uint64_t)(G_cme_pstate_record.pmin)) << 40;
    pmsrData |= ((uint64_t)(G_cme_pstate_record.pmax)) << 32;

    //LMCR[0] = 1 means PMCR SCOM update are enabled ie.
    //PMCR SPR does not control Pstates. We reflect that in
    //PMSR[32/PMCR_DISABLED]
    if ((in32(CME_LCL_LMCR) & BIT32(0)))
    {
        pmsrData |= BIT64(32);
    }

    //PMSR[33] is SAFE_MODE bit
    if(G_cme_pstate_record.safeMode)
    {
        pmsrData |= BIT64(33);
    }

    //PMSR[35] is PSTATES_SUSPENDED bit
    if(G_cme_pstate_record.pstatesSuspended)
    {
        pmsrData |= BIT64(35);
    }

    out64(CME_LCL_PMSRS0, pmsrData);
    out64(CME_LCL_PMSRS1, pmsrData);
}


// this is needed for our test exercisers to know
// when to check that DVFS changes are complete
// always update both cores regardless of partial good or stop state
//
void p9_cme_pstate_pmsr_updt_in_progress()
{

    out64(CME_LCL_PMSRS0, in64(CME_LCL_PMSRS0) | BIT64(PMSR_UPDATE_IN_PROGRESS));
    out64(CME_LCL_PMSRS1, in64(CME_LCL_PMSRS1) | BIT64(PMSR_UPDATE_IN_PROGRESS));
}
