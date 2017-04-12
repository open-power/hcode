/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/pstate_cme/p9_cme_pstate.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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
#include "p9_cme_stop.h" // For CmeStopRecord
#include "p9_hcode_image_defines.H"
#include "p9_cme_flags.h"

//
//Globals
//
cmeHeader_t* G_cmeHeader;
LocalPstateParmBlock* G_lppb;
extern CmePstateRecord G_cme_pstate_record;
extern CmeStopRecord G_cme_stop_record;


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
        CME_GETSCOM(PPM_PIG, coreMask, CME_SCOM_EQ, data_tmp);
    }
    while (((ppm_pig_t)data_tmp).fields.intr_granted);

    // Send PIG packet
    CME_PUTSCOM(PPM_PIG, coreMask, data);

    return rc;
}

void ippm_read(uint32_t addr, uint64_t* data)
{
    // G_cme_pstate_record.cmeMaskGoodCore MUST be set!
    uint64_t val;

    cppm_ippmcmd_t cppm_ippmcmd;
    cppm_ippmcmd.value = 0;
    cppm_ippmcmd.fields.qppm_reg = addr & 0x000000ff;
    cppm_ippmcmd.fields.qppm_rnw = 1;
    CME_PUTSCOM(CPPM_IPPMCMD, G_cme_pstate_record.cmeMaskGoodCore,
                cppm_ippmcmd.value);

    do
    {
        CME_GETSCOM(CPPM_IPPMSTAT, G_cme_pstate_record.cmeMaskGoodCore,
                    CME_SCOM_EQ, val);
    } // Check the QPPM_ONGOING bit

    while(val & BIT64(0));

    // QPPM_STATUS, non-zero indicates an error
    if(val & BITS64(1, 2))
    {
        PK_PANIC(CME_PSTATE_IPPM_ACCESS_FAILED);
    }

    CME_GETSCOM(CPPM_IPPMRDATA, G_cme_pstate_record.cmeMaskGoodCore,
                CME_SCOM_EQ, val);

    *data = val;
}

void ippm_write(uint32_t addr, uint64_t data)
{
    // G_cme_pstate_record.cmeMaskGoodCore MUST be set!
    uint64_t val;

    CME_PUTSCOM(CPPM_IPPMWDATA, G_cme_pstate_record.cmeMaskGoodCore,
                data);
    cppm_ippmcmd_t cppm_ippmcmd;
    cppm_ippmcmd.value = 0;
    cppm_ippmcmd.fields.qppm_reg = addr & 0x000000ff;
    cppm_ippmcmd.fields.qppm_rnw = 0;
    CME_PUTSCOM(CPPM_IPPMCMD, G_cme_pstate_record.cmeMaskGoodCore,
                cppm_ippmcmd.value);

    do
    {
        CME_GETSCOM(CPPM_IPPMSTAT, G_cme_pstate_record.cmeMaskGoodCore,
                    CME_SCOM_EQ, val);
    } // Check the QPPM_ONGOING bit

    while(val & BIT64(0));

    // QPPM_STATUS, non-zero indicates an error
    if(val & BITS64(1, 2))
    {
        PK_PANIC(CME_PSTATE_IPPM_ACCESS_FAILED);
    }
}

void intercme_msg_send(uint32_t msg, INTERCME_MSG_TYPE type)
{
    out32(CME_LCL_ICSR, (msg << 4) | type);

    PK_TRACE_DBG("imt send | msg=%08x", ((msg << 4) | type));
    PK_TRACE_DBG("buff");

    // Block on ack from companion CME
    while(!(in32(CME_LCL_EISR) & BIT32(30))) {}

    out32(CME_LCL_EISR_CLR, BIT32(30));
}

void intercme_msg_recv(uint32_t* msg, INTERCME_MSG_TYPE type)
{
    // Poll for inter-cme communication from QM
    while(!(in32(CME_LCL_EISR) & BIT32(29))) {}

    // Get the initial pstate value
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

void p9_cme_resclk_get_index(uint32_t pstate, uint32_t* resclk_index)
{
    int32_t i = RESCLK_FREQ_REGIONS;

    // Walk the table backwards by decrementing the index and checking for
    // a value less than or equal to the requested pstate
    // If no match is found then the index will be zero meaning resonance gets
    // disabled
    while((pstate > G_lppb->resclk.resclk_freq[--i]) && (i > 0)) {}

    PK_TRACE_DBG("resclk_idx[i=%d]=%d", i, G_lppb->resclk.resclk_index[i]);
    *resclk_index = (uint32_t)G_lppb->resclk.resclk_index[i];
}

void p9_cme_analog_control(uint32_t core_mask, ANALOG_CONTROL enable)
{
    if((in32(CME_LCL_FLAGS)) & CME_FLAGS_RCLK_OPERABLE)
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
            p9_cme_resclk_update(core_mask, pstate, curr_idx);
            // 2) write CACCR[13:15]=0b111 to switch back to common control
            //    and leave clksync enabled
            CME_PUTSCOM(CPPM_CACCR_OR, core_mask, (BITS64(13, 15)));

            // Update PMSRS (only on stop-exit)
            // TODO Revisit during CME code review, should use common PMSRS
            //      function instead (for when other fields are added in the
            //      future)
            uint64_t pmsrs = ((((uint64_t)pstate << 48) & BITS64(8, 15))
                              | (((uint64_t)G_cme_pstate_record.globalPstate << 56)
                                 & BITS64(0, 7)));

            if(core_mask & ANALOG_CORE0)
            {
                out64(CME_LCL_PMSRS0, pmsrs);
            }

            if(core_mask & ANALOG_CORE1)
            {
                out64(CME_LCL_PMSRS1, pmsrs);
            }
        }
        else
        {
            PK_TRACE_INF("resclk | disabling resclks");

            // 1) copy QACCR[0:12] into CACCR[0:12], with CACCR[13:15]=0b000,
            //    to switch away from common control while leaving clksync
            //    disabled. QACCR will already be set to a value corresponding
            //    to the current quad Pstate
            ippm_read(QPPM_QACCR, &val);
            val &= BITS64(13, 63);
            CME_PUTSCOM(CPPM_CACCR, core_mask, val);
            p9_cme_resclk_get_index(G_cme_pstate_record.quadPstate, &curr_idx);
            // 2) step CACCR to a value which disables resonance
            pstate = ANALOG_PSTATE_RESCLK_OFF;
            p9_cme_resclk_update(core_mask, pstate, curr_idx);
        }
    }
}

void p9_cme_resclk_update(ANALOG_TARGET target, uint32_t pstate, uint32_t curr_idx)
{
    uint64_t base_val;
    uint64_t val;
    uint32_t next_idx;
    int32_t  step;

    PK_TRACE_DBG("resclk | target=%08x", (uint32_t)target);
    PK_TRACE_DBG("resclk | pstate=%d"  , pstate);

    p9_cme_resclk_get_index(pstate, &next_idx);

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
        CME_GETSCOM(CPPM_CACCR, target, CME_SCOM_EQ, base_val);
    }

    // Preserve only the resclk control bits
    base_val &= (BITS64(13, 63));

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
