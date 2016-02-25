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

/// \file   pstate_cme.c
/// \brief  CME and QCME codes enforcing the Power protocols for Pstate, DPLL
///         actuation, iVRM, resonant clocking, and VDM.
/// \owner  Michael Olsen   Email: cmolsen@us.ibm.com
///

/// Features of this H-code:
/// - The thread works in conjunction with the pstate thread on the PGPE.
///
/// Assumptions:
/// 1. PGPE is assumed up and running and ready at the time the QCME sends
///    it registration request.
///
///

#include "pk.h"
#include "cme_register_addresses.h"
#include "ppm_register_addresses.h"
#include "ppm_firmware_registers.h"
#include "cppm_register_addresses.h"
#include "cppm_firmware_registers.h"
#include "qppm_register_addresses.h"
#include "qppm_firmware_registers.h"
#include "ppe42_scom.h"
#include "p9_cme_irq.h"
#include "p9_cme_pstate.h"

//
// HOMER variables updated by PGPE
//
uint32_t    ULTRA_TURBO_FREQ_STEPS_PS;

#define PIG_PAYLOAD_MASK            0x0fff000000000000
#define PIG_INTR_FIELD_MASK         0x7000000000000000
#define PIG_INTR_GRANTED_MASK       0x0000000080000000

// Type1 specific defines
#define PIG_PAYLOAD_PSTATE_MASK     0x03ff000000000000
#define PIG_PAYLOAD_PSTATE_SEQ_INCR 0x0400000000000000  // Seq increment value


int
register_qcme_with_pgpe(void);


void
unified_irq_task_handler(void* arg, PkIrqId irq)
{
    pk_semaphore_post((PkSemaphore*)arg);
}


void
unified_irq_nontask_handler(void* arg, PkIrqId irq)
{
    MY_TRACE_ERR("Got an non-task IRQ=%d", irq);
    pk_halt();
}


int
send_pig_packet(uint32_t addr, uint64_t data)
{
    int               rc = 0;
    uint64_t          data_tmp;

    // First make sure no interrupt request is currently granted
    do
    {
        // Read PPMPIG status
        rc = getscom(0, addr, &data_tmp);

        if (rc)
        {
            MY_TRACE_ERR("getscom(addr=0x%08x) failed w/rc=0x%08x", addr, rc);
            pk_halt();
        }
    }
    while (((ppm_pig_t)data_tmp).fields.intr_granted);

    // Send PIG packet
    rc = putscom(0, addr, data);

    if (rc)
    {
        MY_TRACE_ERR("putscom(addr=0x%08x) failed w/rc=0x%08x", addr, rc);
        pk_halt();
    }

    return rc;
}


void
pmcr_db0_thread(void* arg)
{
    int               rc = 0, rc_api = API_RC_SUCCESS;
    uint8_t           bDB0 = FALSE, bPMCR = FALSE;
    PkMachineContext  ctx;
    PkSemaphore       sem;
    uint64_t          thisIrqPrtyVec;
    uint8_t           irqPrty;
    uint8_t           ps_local;
    int               statusIrqDb0C0;
    int               statusIrqDb0C1;
    int               statusIrqPmcrC0;
    int               statusIrqPmcrC1;
    uint8_t           thisCoreIdx = 0xff;  // Index=0 or =1
    uint8_t           nextCoreIdx = 0xff;  // Index=0 or =1
    PkIrqId           IRQ_THIS = 0xff;
    uint8_t           seqNum = 0;         // Phase message sequence (0,1,2,3,0,..)
    uint32_t          addr_db0 = 0;
    uint32_t          addr_db0_0, addr_db0_1;     // One for each of the two cores
    uint32_t          addr_pmcr = 0;
    uint32_t          addr_pmcr_0, addr_pmcr_1;     // One for each of the two cores
    uint32_t          addr_ppm_pig;
    uint32_t          addr_ppm_pig_0, addr_ppm_pig_1; // One for each of the two cores
    uint64_t          data_pmcr;
    cb_to_qcme_base_t   cb_from_pgpe_base;
    cb_to_pgpe_ack_t  cb_to_pgpe_ack;
    cb_to_pgpe_qcme_t cb_to_pgpe_qcme;
    uint32_t          addr_ippmr, addr_ippmw, addr_ippmcmd;
    qppm_dpll_freq_t  qppm_dpll_freq;
    cppm_ippmcmd_t    cppm_ippmcmd;
    ppm_pig_t         data_ppm_pig;
    uint64_t          data;
    uint32_t          data32;
    uint8_t           fsm_unacked_qcme_registration;
    uint32_t          l_pir;
    uint8_t           bQcmeRegister;
    uint8_t           thisCmeInstance;


    PK_TRACE("PMCR_DB0 thread starting...");

    // Lock this in now to avoid typing mistakes later-on. And make sure you're
    //  using the correct PRTY level for this task.
    thisIrqPrtyVec = ext_irq_vectors_cme[IDX_PRTY_LVL_PMCR_DB0][IDX_PRTY_VEC];


    // Calculate anticipated SCOM addresses, or fractions of them up front
    //

    // Local PMCR0 used by cores "left" and "right"
    addr_pmcr_0 = CME_LCL_PMCRS0;
    addr_pmcr_1 = CME_LCL_PMCRS1;

    // CPPM_DB0_0/1 regs used by cores "left" and "right"
    addr_db0_0 = CPPM_CMEDB0 | CORE_SEL_LEFT;
    addr_db0_1 = CPPM_CMEDB0 | CORE_SEL_RIGHT;

    // PPM_PIG_0/1 belong to cores "left" and "right"
    addr_ppm_pig_0 = PPM_PIG | CORE_SEL_LEFT;
    addr_ppm_pig_1 = PPM_PIG | CORE_SEL_RIGHT;


    // Create a semaphore, updated by a single interrupt handler that services
    // two PMCR and two DB0 interrupts. Thus, max sem count set to four.
    pk_semaphore_create(&sem, 0, 4);


    //--------------------------------------------//
    // Register the unified interrupt handler.    //
    //--------------------------------------------//

    // Notes:
    // - Register the two PMCR and the two DB0 interrupts
    // - Never consider IRQs beyond IRQ>=44 because they are reserved and
    //   permanently firing.
    // - Also register high-priority interrupt handlers
    //
    for (irqPrty = 0; irqPrty < 44; irqPrty++)
    {
        if ( ext_irq_vectors_cme[IDX_PRTY_LVL_PMCR_DB0][IDX_PRTY_VEC] &
             (RIGHT_SHIFT_PTRN_0x8_64BIT >> irqPrty) )
        {
            rc = pk_irq_handler_set( irqPrty,
                                     unified_irq_task_handler,
                                     (void*)&sem );

            if (rc)
            {
                PK_TRACE("pk_irq_handler_set(%d) failed w/rc=0x%08x", irqPrty, rc);
                pk_halt();
            }
        }
        else if ( ext_irq_vectors_cme[IDX_PRTY_LVL_HIPRTY][IDX_PRTY_VEC] &
                  (RIGHT_SHIFT_PTRN_0x8_64BIT >> irqPrty) )
        {
            rc = pk_irq_handler_set( irqPrty,
                                     unified_irq_nontask_handler,
                                     (void*)&sem );

            if (rc)
            {
                PK_TRACE("pk_irq_handler_set(%d) failed w/rc=0x%08x", irqPrty, rc);
                pk_halt();
            }
        }

    }


    //
    // Clear (until Simics gets fixed) and unmask the [non-task] shared HIPRTY IRQs.
    //
    pk_irq_vec_status_clear( ext_irq_vectors_cme[IDX_PRTY_LVL_HIPRTY][IDX_PRTY_VEC]);
    pk_irq_vec_enable( ext_irq_vectors_cme[IDX_PRTY_LVL_HIPRTY][IDX_PRTY_VEC]);

    //
    // Clear and then unmask our interrupts.
    // (Note, this must be done BEFORE registering QCME as otherwise race
    //  condition between EISR clearing and PGPE sending Ack.)
    //
    pk_irq_vec_status_clear( thisIrqPrtyVec);
    pk_irq_vec_enable( thisIrqPrtyVec);


    //------------------------------------------------------------------------------//
    //  Determine QMGR status and register as QMGR, ie QCME, if CME is QMGR master  //
    //------------------------------------------------------------------------------//

    // First determine if this CME is a QMRG master, i.e. QCME
    //
    bQcmeRegister = FALSE;

    asm volatile ("mfpir %[data] \n" : [data]"=r"(l_pir) );

    thisCmeInstance = (uint8_t)(l_pir & PIR_INSTANCE_NUM_MASK);

    rc = getscom( 0, CME_LCL_FLAGS, &data );
    data32 = (uint32_t)(data >> 32);

    if ( data32 & CME_FLAGS_QMGR_MASTER )
    {
        bQcmeRegister = TRUE;
        MY_TRACE_DBG("This CME#%d is the QMGR master", thisCmeInstance);
    }
    else  // Sanity check since this CME is NOT a QMGR mstr, that it is an odd CME. Otherwise, error.
    {
        if ( l_pir & PIR_INSTANCE_EVEN_ODD_MASK ) // Sanity test that bit31==1 and thus this CME is odd.
        {
            bQcmeRegister = FALSE;
            MY_TRACE_DBG("This [odd] CME#%d is the QMGR slave", thisCmeInstance);
        }
        else
        {
            MY_TRACE_ERR("CME_LCL_FLAGS indicate QMGR slave status for even CME.");
            MY_TRACE_ERR("This is not allowed. Even CMEs must be QMGR master.");
            pk_halt();
        }
    }

    // FSM Notes:
    // - Register this CME with PGPE if it's the QMGR master.
    // - Note that registration MUST be done AFTER clearing and unmasking
    //   interrupts.
    //
    fsm_unacked_qcme_registration = 0;

    if (bQcmeRegister)
    {
        // Format Type4 PIG message - Populate the CB, then the PIG payload
        //
        cb_to_pgpe_qcme.value = 0;
        cb_to_pgpe_qcme.fields.msg_id = MSGID_T4_REGISTER_QCME;

        data_ppm_pig.value = 0;
        data_ppm_pig.fields.req_intr_payload = cb_to_pgpe_qcme.value;
        data_ppm_pig.fields.req_intr_type = 4;

//CMO - TBD - Determine which of the two cores are configured. Pick the smallest
//            numbered. We'll assume idx=0 for now. Another RTC story will deal
//            with the issue of picking the lowest registered core's PIG.
        addr_ppm_pig = addr_ppm_pig_0;

        // Assumption 1:
        // Before sending Type4 QCME registration, make sure PGPE is running.
        // For now, use pk_sleep.
        // Need some kind of handshake here. Or we need to know for sure that
        // PGPE is always running before QCME.
        pk_sleep(PK_NANOSECONDS(1000));
        rc = send_pig_packet(addr_ppm_pig, data_ppm_pig.value);

        if (rc)
        {
            MY_TRACE_ERR("send_pig_packet(addr=0x%08x) failed w/rc=0x%08x", addr_ppm_pig, rc);
            pk_halt();
        }

        // Update the unacked registration tracker
        if (!fsm_unacked_qcme_registration)
        {
            fsm_unacked_qcme_registration++;
        }
        else
        {
            MY_TRACE_ERR("Code bug: fsm_unacked_qcme_registration (=%d) > 0",
                         fsm_unacked_qcme_registration);
            pk_halt();
        }
    }


    //
    // Reset indices and seq no
    //
    nextCoreIdx = 0;
    thisCoreIdx = 0xff;
    seqNum     = 0;

#if EPM_P9_TUNING
    asm volatile ( "tw 0, 31, 0" );
#endif

    // FSM: Indicate PMCR thread is ready.
    out32(CME_LCL_FLAGS_OR, CME_FLAGS_PMCR_READY);


    while(1)
    {

        // Go to sleep
        pk_semaphore_pend(&sem, PK_WAIT_FOREVER);


        //
        // First we need to determine which of the four interrupts fired.
        // This incl which of the two cores, "left" (index0) or "right" (index1),
        // were used.
        // - Give priority to DB0 over PMCR. (More important to wrap up ongoing
        //   PMCR request than to start a new.)
        // - If both of the PMCRs fired by the time we get to this point, alternate
        //   between them using nextCoreIdx and thisCoreIdx.
        // - If both of the DB0s fired, we have an error.
        //

        do
        {
            bDB0 = bPMCR = FALSE;

            statusIrqDb0C0 = pk_irq_status_get(CMEHW_IRQ_DOORBELL0_C0);
            statusIrqDb0C1 = pk_irq_status_get(CMEHW_IRQ_DOORBELL0_C1);

            if (statusIrqDb0C0 && statusIrqDb0C1)
            {
                // Both fired (We do NOT support this.)
                PK_TRACE("Code bug: Both DB0s fired. Probably PGPE problem.");
                pk_halt();
            }
            else if (statusIrqDb0C0)
            {
                thisCoreIdx = 0; // "left" core idx
                IRQ_THIS = CMEHW_IRQ_DOORBELL0_C0;
                addr_db0 = addr_db0_0;
                addr_ppm_pig = addr_ppm_pig_0;
                bDB0 = TRUE;
            }
            else if (statusIrqDb0C1)
            {
                thisCoreIdx = 1;  // "right" core idx
                IRQ_THIS = CMEHW_IRQ_DOORBELL0_C1;
                addr_db0 = addr_db0_1;
                addr_ppm_pig = addr_ppm_pig_1;
                bDB0 = TRUE;
            }
            else
            {
                statusIrqPmcrC0 = pk_irq_status_get(CMEHW_IRQ_PMCR_UPDATE_C0);
                statusIrqPmcrC1 = pk_irq_status_get(CMEHW_IRQ_PMCR_UPDATE_C1);

                if (statusIrqPmcrC0 && statusIrqPmcrC1)
                {
                    // Both fired (We support this.)
                    thisCoreIdx = nextCoreIdx;
                    nextCoreIdx++;
                    nextCoreIdx = nextCoreIdx - (nextCoreIdx >> 1) * 2;

                    if (thisCoreIdx != 0 && thisCoreIdx != 1)
                    {
                        PK_TRACE("Code bug: Illegal value of thisCoreIdx (=%d).", thisCoreIdx);
                        pk_halt();
                    }
                }
                else if (statusIrqPmcrC0)
                {
                    thisCoreIdx = 0; // "left" core idx
                }
                else if (statusIrqPmcrC1)
                {
                    thisCoreIdx = 1; // "right" core idx
                }
                else
                {
                    PK_TRACE("Illegal interrupt status.");
                    PK_TRACE("Neither of the {PMCR,DB0}_C0/1 interrupts are set.");
                    pk_halt();
                }

                bPMCR = TRUE;

                // Set the core specific values for the interrupt, pmcr addr and
                // ppmpig addr. Note, we already did this earlier for db0.
                if (thisCoreIdx == 0)
                {
                    IRQ_THIS = CMEHW_IRQ_PMCR_UPDATE_C0;
                    addr_pmcr = addr_pmcr_0;
                    addr_ppm_pig = addr_ppm_pig_0;
                }
                else
                {
                    IRQ_THIS = CMEHW_IRQ_PMCR_UPDATE_C1;
                    addr_pmcr = addr_pmcr_1;
                    addr_ppm_pig = addr_ppm_pig_1;
                }
            }
        }
        while(0);

        MY_TRACE_DBG("IRQ_THIS=0x%02x, addr_ppm_pig=0x%08x",
                     IRQ_THIS, addr_ppm_pig);

        // Clear the status of the currently selected interrupt
        pk_irq_status_clear(IRQ_THIS);


        //------------------------------------------------------------------//
        //                            Do the work                           //
        //------------------------------------------------------------------//

        if (bDB0)
            //-------------------------------------------//
            //                Process DB0                //
            //-------------------------------------------//
        {

            MY_TRACE_DBG("IRQ_THIS=0x%02x, addr_db0=0x%08x, addr_ppm_pig=0x%08x",
                         IRQ_THIS, addr_db0, addr_ppm_pig);

            // Get the payload from DB0
            rc = getscom(0, addr_db0, &cb_from_pgpe_base.value);

            if (rc)
            {
                MY_TRACE_ERR("getscom(addr=0x%08x,data=0x%08x%08x) failed w/rc=0x%08x",
                             addr_db0, cb_from_pgpe_base.value, rc);
                pk_halt();
            }

//MY_TRACE_DBG("DB0 payload = 0x%08x%08x",
//              (uint32_t)(cb_from_pgpe_base.value>>32),(uint32_t)(cb_from_pgpe_base.value));

            //
            // Act on msg_id and do what needs be done
            // Note that there's only support for PS_BROADCAST and Ack so far.
            //
            switch (cb_from_pgpe_base.fields.msg_id)
            {

                case MSGID_DB0_PS_BROADCAST:

                    if (fsm_unacked_qcme_registration)
                    {
                        MY_TRACE_ERR("Code bug: fsm_unacked_qcme_registration (=%d) != 0",
                                     fsm_unacked_qcme_registration);
                        pk_halt();
                    }

                    ps_local = ((cb_to_qcme_ps_bc_t)cb_from_pgpe_base.value).fields.ps_local;

                    MY_TRACE_DBG("cb_from_pgpe_ps_bc.fields.ps_local=%d", ps_local);

                    // Update the DPLL_FREQ register
                    //

                    // In the following setup,
                    // - use the CPPM that you received the DB0 on
                    // - use CorePPM1 for the INTERPPM (done from PGPE)
                    //
                    if (thisCoreIdx == 0)
                    {
                        addr_ippmr = CPPM_IPPMRDATA | CORE_SEL_LEFT;
                        addr_ippmw = CPPM_IPPMWDATA | CORE_SEL_LEFT;
                        addr_ippmcmd = CPPM_IPPMCMD | CORE_SEL_LEFT;
                    }
                    else
                    {
                        addr_ippmr = CPPM_IPPMRDATA | CORE_SEL_RIGHT;
                        addr_ippmw = CPPM_IPPMWDATA | CORE_SEL_RIGHT;
                        addr_ippmcmd = CPPM_IPPMCMD | CORE_SEL_RIGHT;
                    }

                    rc = getscom(0, addr_ippmr, &(qppm_dpll_freq.value));

                    if (rc)
                    {
                        MY_TRACE_ERR("getscom(CPPM_IPPMRDATA=0x%08x) failed w/rc=0x%08x",
                                     addr_ippmr, rc);
                        pk_halt();
                        //MY_PK_PANIC(SCOM_TROUBLE);
                    }

                    qppm_dpll_freq.fields.fmax      =
                        qppm_dpll_freq.fields.freq_mult =
                            qppm_dpll_freq.fields.fmin      = ULTRA_TURBO_FREQ_STEPS_PS - ps_local;
                    rc = putscom(0, addr_ippmw, qppm_dpll_freq.value);

                    if (rc)
                    {
                        MY_TRACE_ERR("putscom(CPPM_IPPMWDATA=0x%08x) failed w/rc=0x%08x",
                                     addr_ippmw, rc);
                        pk_halt();
                        //MY_PK_PANIC(SCOM_TROUBLE);
                    }

                    // Now write the DPLL_FREQ reg through the inter-PPM mechanism
                    //
                    cppm_ippmcmd.value = 0;
                    cppm_ippmcmd.fields.qppm_reg = QPPM_DPLL_FREQ & 0x000000ff;
                    cppm_ippmcmd.fields.qppm_rnw = 0; // Use CorePPM1
                    rc = putscom(0, addr_ippmcmd, cppm_ippmcmd.value);

                    if (rc)
                    {
                        MY_TRACE_ERR("putscom(CPPM_IPPMCMD=0x%08x) failed w/rc=0x%08x",
                                     addr_ippmcmd, rc);
                        pk_halt();
                        //MY_PK_PANIC(SCOM_TROUBLE);
                    }

                    //
                    // Send an PIG Type4 ack back to PGPE
                    //

                    cb_to_pgpe_ack.value = 0;
                    cb_to_pgpe_ack.fields.msg_id = MSGID_T4_ACK;
                    cb_to_pgpe_ack.fields.msg_id_ref = ((cb_to_qcme_ps_bc_t)cb_from_pgpe_base.value).fields.msg_id;
                    cb_to_pgpe_ack.fields.rc = rc_api;

                    data_ppm_pig.value = 0;
                    data_ppm_pig.fields.req_intr_payload = cb_to_pgpe_ack.value;
                    data_ppm_pig.fields.req_intr_type = 4;

                    // Send Ack back to PGPE to acknowledge receipt and processing
                    //  of the Pstate broadcast.
                    rc = send_pig_packet(addr_ppm_pig, data_ppm_pig.value);

                    if (rc)
                    {
                        MY_TRACE_ERR("send_pig_packet(addr=0x%08x) failed w/rc=0x%08x", addr_ppm_pig, rc);
                        pk_halt();
                    }

                    break;

                case MSGID_DB0_ACK:

                    MY_TRACE_DBG("Received an DB0 Ack");

                    if (fsm_unacked_qcme_registration == 1)
                    {
                        fsm_unacked_qcme_registration--;
                    }
                    else
                    {
                        MY_TRACE_ERR("Code bug: fsm_unacked_qcme_registration (=%d) != 1",
                                     fsm_unacked_qcme_registration);
                        pk_halt();
                    }

                    // FSM: Indicate QMGR master status and QMGR ready in CME FLAGS.
                    out32(CME_LCL_FLAGS_OR, CME_FLAGS_QMGR_READY);

                    break;

                default:

                    MY_TRACE_ERR("Unsupported msg_id. Only MSGID_DB0_PS_BROADCAST supported.");
                    pk_halt();

                    break;

            } // End of switch()

        }
        else if (bPMCR)
            //-------------------------------------------//
            //               Process PMCR                //
            //-------------------------------------------//
        {

            MY_TRACE_DBG("IRQ_THIS=0x%02x, addr_pmcr=0x%08x, addr_ppm_pig=0x%08x",
                         IRQ_THIS, addr_pmcr, addr_ppm_pig);

            // Read PMCRS
            rc = getscom(0, addr_pmcr, &data_pmcr);

            if (rc)
            {
                PK_TRACE("getscom(addr_pmcr%d=0x%08x) failed w/rc=0x%08x",
                         thisCoreIdx, addr_pmcr, rc);
                pk_halt();
            }

#if DEV_DEBUG
            PK_TRACE("data_pmcr%d=0x%08x%08x",
                     thisCoreIdx, (uint32_t)(data_pmcr >> 32), (uint32_t)data_pmcr);
#endif

            // Bump/wrap the payload sequence number
            seqNum++;
            seqNum = seqNum - (seqNum / 4) * 4;

            //
            // Phase 1 PIG message
            //

            // Format Pstate phase 1 PIG message - Populate intr_type and payload fields
            //
            // 1) Copy the 10-bit PMCR(6:15) payload to PPMPIG(6:15).
            // 2) Mask off all other content.
            // 3) Indicate the sequence number in the payload field.
            // 4) Indicate the phase 1 (Type0) in the interrupt field.
            data_ppm_pig.value = data_pmcr & PIG_PAYLOAD_PSTATE_MASK;
            data_ppm_pig.value = data_ppm_pig.value | PIG_PAYLOAD_PSTATE_SEQ_INCR * seqNum;
            data_ppm_pig.fields.req_intr_type = 0;

            // Send PIG phase 1 message, but only if no intr request is currently granted
            rc = send_pig_packet(addr_ppm_pig, data_ppm_pig.value);

            if (rc)
            {
                MY_TRACE_ERR("send_pig_packet(addr=0x%08x) failed w/rc=0x%08x", addr_ppm_pig, rc);
                pk_halt();
            }

            //
            // Phase 2 PIG message
            //

            // Format Pstate phase 2 PIG message - Populate intr_type and payload fields
            //
            // 1) Copy the 10-bit PMCR(22:31) payload to PPMPIG(6:15).
            // 2) Mask off all other content.
            // 3) Indicate the sequence number in the payload field.
            // 4) Indicate the phase 2 (Type1) in the interrupt field.
            // in data_ppm_pig.
            data_ppm_pig.value = (data_pmcr << 16) & PIG_PAYLOAD_PSTATE_MASK;
            data_ppm_pig.value = data_ppm_pig.value | PIG_PAYLOAD_PSTATE_SEQ_INCR * seqNum;
            data_ppm_pig.fields.req_intr_type = 1;

            // Send PIG phase 2 message, but only if no intr request is currently granted
            rc = send_pig_packet(addr_ppm_pig, data_ppm_pig.value);

            if (rc)
            {
                MY_TRACE_ERR("send_pig_packet(addr=0x%08x) failed w/rc=0x%08x", addr_ppm_pig, rc);
                pk_halt();
            }

#if DEV_DEBUG
            // Read PPMPIG status
            rc = getscom(0, addr_ppm_pig, &data);

            if (rc)
            {
                PK_TRACE("getscom(addr_ppm_pig%d=0x%08x) failed w/rc=0x%08x",
                         thisCoreIdx, addr_ppm_pig, rc);
                pk_halt();
            }

            PK_TRACE("(After PIG phase 2): data_ppm_pig%d=0x%08x%08x",
                     thisCoreIdx, (uint32_t)(data >> 32), (uint32_t)data);
#endif

        }
        else
        {
            PK_TRACE("Code bug.");
            PK_TRACE("Neither of the {PMCR,DB0}_C0/1 interrupts were selected.");
            pk_halt();
        }


        // Restore the EIMR to the value it had when the IRQ handler was entered.
        // (Note that we've already cleared the EISR earlier.)
        //
        pk_irq_vec_restore(&ctx);
        /*
                pk_critical_section_enter(&ctx);
                if (g_eimr_stack_ctr>=0)
                {
                    out64( STD_LCL_EIMR,
                           ext_irq_vectors_cme[g_eimr_stack[g_eimr_stack_ctr]][IDX_MASK_VEC]);
                    out64( STD_LCL_EIMR_CLR,
                           g_eimr_override_stack[g_eimr_stack_ctr]);
                    out64( STD_LCL_EIMR_OR,
                           g_eimr_override);
        //CMO-temporarily commenting following three lines which asap should replace above line.
        //    but if i do that, then i get a machine check in the timer_bh_handler (which is
        //    a result of pk_delay kicked of way earlier than this code here!!) right after it
        //    executes bctrl and jumps to an illegal instruction. Yeah, no make sense!!!
        //            out64( STD_LCL_EIMR,
        //                   (ext_irq_vectors_cme[g_eimr_stack[g_eimr_stack_ctr]][IDX_MASK_VEC] &
        //                    ~g_eimr_override_stack[g_eimr_stack_ctr]) | g_eimr_override);
                    // Restore the prty level tracker to the task that was interrupted, if any.
                    g_current_prty_level = g_eimr_stack[g_eimr_stack_ctr];
                    g_eimr_stack_ctr--;
                }
                else
                {
                    MY_TRACE_ERR("Code bug: Messed up EIMR book keeping: g_eimr_stack_ctr=%d",
                                  g_eimr_stack_ctr);
                    pk_halt();
                }
                pk_critical_section_exit(&ctx);
        */

    }
}
