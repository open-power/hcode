/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_irq_handlers.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2020                                                    */
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
#include "pk.h"
#include "p9_pgpe.h"
#include "p9_pgpe_pstate.h"
#include "pstate_pgpe_occ_api.h"
#include "p9_dd1_doorbell_wr.h"
#include "ppe42_cache.h"
#include "p9_pgpe_gppb.h"
#include "p9_pgpe_optrace.h"

//
//External Global Data
//
extern TraceData_t G_pgpe_optrace_data;
extern PgpePstateRecord G_pgpe_pstate_record;
extern GlobalPstateParmBlock* G_gppb;

//Local Function Prototypes
void p9_pgpe_ocb_hb_error_init();
void p9_pgpe_irq_handler_ocb_err();
void p9_pgpe_irq_handler_sgpe_err();
void p9_pgpe_irq_handler_cme_err();
void p9_pgpe_irq_handler_pvref_err();

//
//  p9_pgpe_irq_init()
//
//  This function is called during PGPE boot, and does
//  needed initialization and setup of PGPE owned IRQs
void p9_pgpe_irq_init()
{
    //Set up OCB Heartbeat Loss(OISR[2])
    p9_pgpe_ocb_hb_error_init();

    //Setup SGPE_ERR(OISR[8]) and PVREF_ERR(OISR[20])
    out32(G_OCB_OISR0_CLR, BIT32(8) | BIT32(20));//Clear any pending interrupts
    out32(G_OCB_OIMR0_CLR, BIT32(8) | BIT32(20));//Unmask interrupts
}

//
//  p9_pgpe_ocb_hb_error_init
//
//  This is called during PGPE boot, and sets up OCB_HW loss fir bit
//  to generate OCB interrupt. Also, clears the FIR bit
//  and any pending OCB_HB interrupt
//
#define OCC_HB_ERROR_FIR 4
void p9_pgpe_ocb_hb_error_init()
{
    PK_TRACE_DBG("INIT: Occ Heartbeat Setup");

    uint64_t firact;

    //Set up OCB_HB loss FIR bit to generate interrupt
    GPE_GETSCOM(OCB_OCCLFIRACT0, firact);
    firact |= BIT64(OCC_HB_ERROR_FIR);
    GPE_PUTSCOM(OCB_OCCLFIRACT0, firact);

    GPE_GETSCOM(OCB_OCCLFIRACT1, firact);
    firact &= ~BIT64(OCC_HB_ERROR_FIR);
    GPE_PUTSCOM(OCB_OCCLFIRACT1, firact);

    GPE_PUTSCOM(OCB_OCCLFIRMASK_AND, ~BIT64(OCC_HB_ERROR_FIR));

    out64(OCB_OCCHBR, 0); //Clear and Disable OCC Heartbeat Register
    GPE_PUTSCOM(OCB_OCCLFIR_AND, ~BIT64(OCC_HB_ERROR_FIR));
    out32(G_OCB_OISR0_CLR, BIT32(2));//Clear any pending interrupts
    out32(G_OCB_OIMR0_CLR, BIT32(2));//Unmask interrupt
}

//
//  p9_pgpe_irq_handler_occ_sgpe_cme_pvref_error
//
//  This is the common handler for OISR[2/OCC_ERROR], OISR[8/GPE3_ERROR],
//  OISR[20/PVREF_ERROR] and  OISR[50/PCB_TYPE5]
//  All these interrupts are same priority in UIH(unified interrupt handler),
//  but OCB_ERROR is higher priority from HW perspective so UIH will always
//  call its handler. Therefore, we have one handler, and then check to see
//  which interrupt(s) fired
//
void p9_pgpe_irq_handler_occ_sgpe_cme_pvref_error(void* arg, PkIrqId irq)
{
    PkMachineContext  ctx;

    uint64_t oisr = ((uint64_t)(in32(OCB_OISR0)) << 32) | in32(OCB_OISR1);
    PK_TRACE_INF("Error IRQ Detected OISR=0x%08x%08x", oisr >> 32, oisr);

    //OCC Error
    if(oisr & BIT64(2))
    {
        p9_pgpe_irq_handler_ocb_err();
    }

    //SGPE Error
    if(oisr & BIT64(8))
    {
        p9_pgpe_irq_handler_sgpe_err();
    }

    //PVREF Error
    if(oisr & BIT64(20))
    {
        p9_pgpe_irq_handler_pvref_err();
    }

    //CME Error(PCB Type5)
    if (oisr & BIT64(50))
    {
        p9_pgpe_irq_handler_cme_err();
    }

    pk_irq_vec_restore(&ctx);
}

//
//  p9_pgpe_irq_handler_ocb_error
//
//  Handler for OCB_ERROR interrupt which is trigerred by a loss
//  of OCC heartbeat
//
void p9_pgpe_irq_handler_ocb_err()
{
    ocb_occlfir_t fir;
    fir.value = 0;

    PK_TRACE_INF("OCB FIR Detected");

    out32(G_OCB_OISR0_CLR, BIT32(2));

    PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_FIR_IRQ);

    //Read OCB_LFIR
    GPE_GETSCOM(OCB_OCCLFIR, fir.value);

    //If OCB_LFIR[occ_hb_error]
    if (fir.fields.occ_hb_error == 1)
    {

        G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) |
                                      (G_pgpe_pstate_record.activeCores >> 8);
        G_pgpe_optrace_data.word[1] = (G_pgpe_pstate_record.psCurr.fields.glb << 24) |
                                      (G_pgpe_pstate_record.extVrmCurr << 8) |
                                      PGPE_OP_TRACE_OCC_HB_FAULT;
        p9_pgpe_optrace(SEVERE_FAULT_DETECTED);

        if((G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE))
        {
            G_pgpe_pstate_record.pstatesStatus = PSTATE_SAFE_MODE_PENDING;
        }
        else
        {
            //Ack any pending IPCs from SGPE
            p9_pgpe_pstate_handle_pending_sgpe_ack_on_fault();
        }

        G_pgpe_pstate_record.severeFault[SAFE_MODE_FAULT_OCC] = 1;
    }
    else
    {
        PK_TRACE_ERR("OCCERR: Unexpected OCC_FIR[0x%08x%08x] ", UPPER32(fir.value), LOWER32(fir.value));
        G_pgpe_optrace_data.word[0] = PGPE_OP_UNEXPECTED_OCC_FIR;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
    }
}

//
//  p9_pgpe_irq_handler_sgpe_err
//
//  Handler for SGPE(GPE3) Fault
//
void p9_pgpe_irq_handler_sgpe_err()
{
    PK_TRACE_INF("SGPE Error");

    g_oimr_override |=   BIT64(8);
    out32(G_OCB_OIMR0_OR,  BIT32(8));
    out32(G_OCB_OISR0_CLR, BIT32(8));

    //Optrace
    G_pgpe_optrace_data.word[0] =   (G_pgpe_pstate_record.activeQuads << 24) |
                                    (G_pgpe_pstate_record.activeCores >> 8);
    G_pgpe_optrace_data.word[1] =   (G_pgpe_pstate_record.psCurr.fields.glb << 24) |
                                    (G_pgpe_pstate_record.extVrmCurr << 8) |
                                    PGPE_OP_TRACE_SGPE_FAULT;
    p9_pgpe_optrace(SEVERE_FAULT_DETECTED);


    //HALT if DEBUG_HALT is set
    PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_GPE3_ERROR);

    //Update pstatesStatus, so that actuate thread breaks out of pstatesStatus = ACTIVE_LOOP
    //And, then actuate to Psafe.
    if ((G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE))
    {
        G_pgpe_pstate_record.pstatesStatus = PSTATE_SAFE_MODE_PENDING;
    }
    else
    {
        //Ack any pending IPCs from OCC
        p9_pgpe_pstate_handle_pending_occ_ack_on_fault();

        p9_pgpe_pstate_sgpe_fault();
    }

    G_pgpe_pstate_record.severeFault[SAFE_MODE_FAULT_SGPE] = 1;

}

//
//  p9_pgpe_irq_handler_pvref_err
//
//  Handler for pvref error interrupt
//
void p9_pgpe_irq_handler_pvref_err()
{
    PK_TRACE_INF("PVREF Error");

    out32(G_OCB_OISR0_CLR, BIT32(20));

    //Optrace
    G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) |
                                  (G_pgpe_pstate_record.activeCores >> 8);
    G_pgpe_optrace_data.word[1] = (G_pgpe_pstate_record.psCurr.fields.glb << 24) |
                                  (G_pgpe_pstate_record.extVrmCurr << 8) |
                                  PGPE_OP_TRACE_PVREF_FAULT;
    p9_pgpe_optrace(SEVERE_FAULT_DETECTED);

    //HALT if DEBUG_HALT is set
    PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_PVREF_ERROR);

    //Update pstatesStatus, so that actuate thread breaks out of pstatesStatus = ACTIVE_LOOP
    //And, then actuate to Psafe.
    if ((G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE))
    {
        G_pgpe_pstate_record.pstatesStatus = PSTATE_SAFE_MODE_PENDING;
    }
    else
    {
        //Ack any pending IPCs from OCC and SGPE
        p9_pgpe_pstate_handle_pending_occ_ack_on_fault();
        p9_pgpe_pstate_handle_pending_sgpe_ack_on_fault();

        p9_pgpe_pstate_pvref_fault();
    }

    G_pgpe_pstate_record.severeFault[SAFE_MODE_FAULT_PVREF] = 1;

}

//
//  p9_pgpe_irq_handler_system_xstop
//
//  Handles system xstop. PGPE does NOT do anything in response
//  except logs it in the trace
//
void p9_pgpe_irq_handler_system_xstop(void* arg, PkIrqId irq)
{
    PK_TRACE_INF("SYSTEM XSTOP");
    PkMachineContext  ctx;

    g_oimr_override |=   BIT64(15);
    out32(G_OCB_OIMR0_OR,  BIT32(15));
    out32(G_OCB_OISR0_CLR, BIT32(15));

    //Optrace
    G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) |
                                  (G_pgpe_pstate_record.activeCores >> 8);
    G_pgpe_optrace_data.word[1] = (G_pgpe_pstate_record.psCurr.fields.glb << 24) |
                                  (G_pgpe_pstate_record.extVrmCurr << 8) |
                                  PGPE_OP_TRACE_SYS_XSTOP;
    p9_pgpe_optrace(SEVERE_FAULT_DETECTED);

    PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_XSTOP_GPE2); //Halt if DEBUG_HALT is set

    pk_irq_vec_restore(&ctx);//Restore interrupt

}

//
//  p9_pgpe_irq_handler_pcb_type1
//
//  Handler for PCB Type 1 interrupt which is forwarding of Pstates
//  Requests by CME
//
//  Pstate must be active and an onwer for PMSR must be set for any
//  effect. Otherwise, no action is taken
//
void p9_pgpe_irq_handler_pcb_type1(void* arg, PkIrqId irq)
{
    PK_TRACE_DBG("PCB1: Enter");
    PkMachineContext  ctx;
    ocb_opit1cn_t opit1cn;
    uint32_t c;
    uint32_t opit1pra;

    //If error injection bit is set in OCC Scratch 2, then halt PGPE immediately
    if(in32(G_OCB_OCCFLG2) & BIT32(OCCFLG2_PGPE_HCODE_PSTATE_REQ_ERR_INJ))
    {
        // Clear the injection so things are not permenently stuck
        out32(G_OCB_OCCFLG2_CLR, BIT32(OCCFLG2_PGPE_HCODE_PSTATE_REQ_ERR_INJ));
        PK_TRACE_ERR("PCB TYPE1 ERROR INJECT TRAP");
        PK_PANIC(PGPE_SET_PMCR_TRAP_INJECT);
    }

    if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE &&
        (G_pgpe_pstate_record.pmcrOwner == PMCR_OWNER_HOST ||
         G_pgpe_pstate_record.pmcrOwner == PMCR_OWNER_CHAR))
    {

        //Read and Clear before data is read
        opit1pra = in32(OCB_OPIT1PRA);
        out32(OCB_OPIT1PRA_CLR, opit1pra);

        //Process pending requests
        for (c = 0; c < MAX_CORES; c++)
        {
            //For each pending bit OPIT1PR[c] (OPIT1PR is 24 bits)
            if (opit1pra & CORE_MASK(c))
            {
                //Read payload from OPIT1C[c] register corresponding to the core 'c'
                opit1cn.value = in32(OCB_OPIT1CN(c));

                //Extract the LowerPState field and store the Pstate request
                G_pgpe_pstate_record.coresPSRequest[c] = opit1cn.value & 0xff;
                PK_TRACE_INF("PCB1: c[%d]=0%x", c, G_pgpe_pstate_record.coresPSRequest[c]);
                G_pgpe_optrace_data.word[0] = (c << 24) | (G_pgpe_pstate_record.psCurr.fields.glb << 16) |
                                              G_pgpe_pstate_record.coresPSRequest[c];
                p9_pgpe_optrace(PRC_PCB_T1);
            }
        }

        //Do auction, apply clips and generate new targets
        p9_pgpe_pstate_do_auction();
        p9_pgpe_pstate_apply_clips();
    }
    //If pstates aren't active or PMCR Onwer isn't set, then do nothing
    else
    {
        opit1pra = in32(OCB_OPIT1PRA);
        out32(OCB_OPIT1PRA_CLR, opit1pra);
        G_pgpe_optrace_data.word[0] = PGPE_OP_PCB_TYPE1_IN_PSTATE_STOPPED;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
    }

#if SIMICS_TUNING
    out32(OCB_OPIT1PRA, 0x00000000); //Clear out pending bits
    out32(OCB_OISR1_CLR, BIT32(14));
#endif
    pk_irq_vec_restore(&ctx);//Restore interrupts
    PK_TRACE_DBG("PCB1: Exit");
}

//
//  p9_pgpe_irq_handler_pcb_type4
//
//  Handles PCB Type4 interrupts from CME which are CME registration
//  messages. In this handler, PGPE simply takes note of which CMEs
//  sent registration message. The actual processing is handled in the
//  process thread.
//
void p9_pgpe_irq_handler_pcb_type4(void* arg, PkIrqId irq)
{
    PkMachineContext ctx;

    PK_TRACE_DBG("PCB4: Enter");
    volatile uint32_t opit4pr;
    uint32_t opit4prQuad, q;

    //Check which CMEs sent Registration Type4
    opit4pr = in32(OCB_OPIT4PRA);
    out32(OCB_OPIT4PRA_CLR, opit4pr);
    PK_TRACE_INF("PCB4: opit4pr 0x%x", opit4pr);

    for (q = 0; q < MAX_QUADS; q++)
    {
        opit4prQuad = (opit4pr >> ((MAX_QUADS - q + 1) << 2)) & 0xf;

        if (opit4prQuad)
        {
            //Already registered
            if (G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
            {
                PK_TRACE_ERR("PCB4: Quad %d Already Registered. opit4pra=0x%x", q, opit4pr);
                PGPE_TRACE_AND_PANIC(PGPE_CME_UNEXPECTED_REGISTRATION);
            }

            G_pgpe_pstate_record.pendQuadsRegisterProcess |= QUAD_MASK(q);
        }
    }

    if ((G_pgpe_pstate_record.semProcessPosted == 0) &&
        G_pgpe_pstate_record.pendQuadsRegisterProcess != 0)
    {
        PK_TRACE_DBG("PCB4: posted");
        G_pgpe_pstate_record.semProcessPosted = 1;
        pk_semaphore_post(&G_pgpe_pstate_record.sem_process_req);
    }

    G_pgpe_pstate_record.semProcessSrc |= SEM_PROCESS_SRC_TYPE4_IRQ;

    //Restore the interrupt here. However, it will be processed inside the process thread
    //This doesn't cause an issue because back to back type4 interrupts will just
    //set a bit in pendQuadsRegisterProcess bit field. However, semaphore to the process
    //thread will be posted only once. Also, once process thread starts processing it enters
    //sub-critical section, and masks all external interrupt through UIH priority mechanism.
    pk_irq_vec_restore(&ctx);
    PK_TRACE_DBG("PCB4: Exit");
}

//
//  p9_pgpe_irq_handler_cme_err
//
//  Handles CME error interrupt which is pcb type5 interrupt
//
// Take immediate action here since Pstates cannot be moved using the faulted
// CMEs per normal protocols.  The remainder of the actions in response to this error
// occur after going into safe mode
//
void p9_pgpe_irq_handler_cme_err()
{

    uint32_t c, q, idx, idx_off, freq_done;
    uint32_t opit5pr;
    uint32_t opit5prQuad;
    uint64_t value, baseVal, coreSsh;
    qppm_dpll_freq_t dpllFreq;
    ocb_qcsr_t qcsr;
    ocb_ccsr_t ccsr;
    qcsr.value = in32(G_OCB_QCSR);
    ccsr.value = in32(OCB_CCSR);
    uint64_t cme_flags = 0;
    uint64_t cme_cpmmr = 0;

    //Optrace
    G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) |
                                  (G_pgpe_pstate_record.activeCores << 8);
    G_pgpe_optrace_data.word[1] = (G_pgpe_pstate_record.psCurr.fields.glb << 24) |
                                  (G_pgpe_pstate_record.extVrmCurr << 8) |
                                  PGPE_OP_TRACE_CME_FAULT;
    p9_pgpe_optrace(SEVERE_FAULT_DETECTED);

    PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_CME_FAULT); //Halt if DEBUG_HALT is set

    //Check which CMEs sent Type5
    opit5pr = in32(OCB_OPIT5PRA);
    out32(OCB_OPIT5PRA_CLR, opit5pr);
    PK_TRACE_INF("CER:CME ERR opit5pr 0x%x", opit5pr);

    //If prolonged droop recovery is not active
    if (!(in32(G_OCB_OCCFLG) & BIT32(PGPE_PROLONGED_DROOP_WORKAROUND_ACTIVE)))
    {
        p9_pgpe_pstate_write_core_throttle(CORE_IFU_THROTTLE, RETRY);
    }

    for (q = 0; q < MAX_QUADS; q++)
    {
        opit5prQuad = (opit5pr >> ((MAX_QUADS - q + 1) << 2)) & 0xf;


        if (opit5prQuad)
        {
            G_pgpe_pstate_record.errorQuads |= QUAD_MASK(q);

            PK_TRACE_INF("CER:Quad[%d]", q);

            //1.1 Halt both CMEs in the quad containing faulted CME,
            if (qcsr.fields.ex_config & QUAD_EX0_MASK(q))
            {
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_XIXCR, q, 0), BIT64(3)); //XCR[1:3] = 001(Halt the CME)
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_FLAGS, q, 0), cme_flags);

                for (c = FIRST_CORE_FROM_QUAD(q); c < LAST_CORE_FROM_QUAD(q); c++)
                {
                    if (ccsr.value & CORE_MASK(c))
                    {
                        GPE_GETSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR, c), cme_cpmmr);

                        if( cme_cpmmr & BITS64(5, 2) )
                        {
                            GPE_PUTSCOM(OCB_OCCLFIR_OR, BIT64(61));
                        }
                    }
                }

            }

            if (qcsr.fields.ex_config & QUAD_EX1_MASK(q))
            {
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_XIXCR, q, 1), BIT64(3)); //XCR[1:3] = 001(Halt the CME)

                for (c = FIRST_CORE_FROM_QUAD(q); c < LAST_CORE_FROM_QUAD(q); c++)
                {
                    if (ccsr.value & CORE_MASK(c))
                    {
                        GPE_GETSCOM(GPE_SCOM_ADDR_CORE(CPPM_CPMMR, c), cme_cpmmr);

                        if( cme_cpmmr & BITS64(5, 2) )
                        {
                            GPE_PUTSCOM(OCB_OCCLFIR_OR, BIT64(61));
                        }
                    }
                }



                //Read CME1 CME_FLAGS, if CME0 not configured
                if (!(qcsr.fields.ex_config & QUAD_EX0_MASK(q)))
                {
                    GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_FLAGS, q, 1), cme_flags);
                }
            }

            /// Also read stop history of the cores belongs to both cmes,
            //  and assert auto special wakeup mode for the core that is not gated.
            for (c = 0; c < CORES_PER_QUAD; c++)
            {
                GPE_GETSCOM_VAR(PPM_SSHSRC, CORE_ADDR_BASE, ((q << 2) + c), 0, coreSsh);

                if (!(coreSsh & BIT64(0)))
                {
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_CLR, q, ((c & 2) >> 1)), (BIT64(12) >> (c & 1)));
                }
            }

            //1.2 The quad in error is stepped out of resonance by the PGPE. This keeps the cores that may be
            //  running in the quad operating. There is a momentary rise in power as resonance is disabled.
            //  (~100us).

            //Open Analog Controls for SCOM access in this quad
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_CLR, q), BIT64(22) | BIT64(24) | BIT64(26));

            if(cme_flags & BIT64(CME_FLAGS_RCLK_OPERABLE))
            {
                //. Read the QACCR
                GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QACCR, q), value);
                baseVal = value & BITS64(13, 51);
                value &= BITS64(0, 15);
                value = value >> 48;

                //Search from the lowest index of the resclk table until a match to the QACCR value
                idx_off = G_gppb->resclk.resclk_index[0];
                idx = idx_off;

                while(idx < RESCLK_STEPS)
                {
                    if (G_gppb->resclk.steparray[idx].value == value)
                    {
                        break;
                    }
                    else
                    {
                        idx++;
                    }
                }

                if (idx == RESCLK_STEPS)
                {
                    PK_TRACE_DBG("CER:Resclk Idx Search Failed");
                    PGPE_TRACE_AND_PANIC(PGPE_RESCLK_IDX_SEARCH_FAIL);
                }

                //PGPE steps down from that index to the off index value
                while (idx > idx_off)
                {
                    value = (((uint64_t)G_gppb->resclk.steparray[--idx].value) << 48) | baseVal;
                    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QACCR, q), value);
                }

            }

            //1.3 Move DPLL to Fsafe (~100us)
            dpllFreq.value = 0;
            dpllFreq.fields.fmax  = G_gppb->dpll_pstate0_value - G_pgpe_pstate_record.safePstate;
            dpllFreq.fields.fmult = dpllFreq.fields.fmax;
            dpllFreq.fields.fmin  = dpllFreq.fields.fmax;
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_DPLL_FREQ, q), dpllFreq.value);

            // poll DPLL Status frequency change done before proceeding
            //
            freq_done = 0;

            do
            {
                //Read DPLL_STAT
                GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_DPLL_STAT, q), value);

                if(cme_flags & BIT64(CME_FLAGS_VDM_OPERABLE))
                {
                    freq_done = value & BIT64(60); //[UPDATE_COMPLETE]=1 means done
                }
                else
                {
                    freq_done = !(value & BIT64(61)); //[FREQ_CHANGE]=0 means done
                }
            }
            while (!freq_done);


            //2. The quad in error is removed from the expected Ack vector.
            G_pgpe_pstate_record.activeQuads &= (~QUAD_MASK(q));
            G_pgpe_pstate_record.activeDB &= ~(QUAD_ALL_CORES_MASK(q));
            PK_TRACE_DBG("CER: Quad[%d] ResclkDisabled, Moved to Fsafe, and removed from activeQuads", q);
        }
    }

    PK_TRACE_INF("CER: CME Fault Processed");

    //If prolonged droop recovery is not active
    if (!(in32(G_OCB_OCCFLG) & BIT32(PGPE_PROLONGED_DROOP_WORKAROUND_ACTIVE)))
    {
        p9_pgpe_pstate_write_core_throttle(CORE_THROTTLE_OFF, RETRY);
    }

    //It is safe for PGPE to leave VDMs enabled and not change the vid compare
    //or thresholds later when the external voltage is dropped to Psafe worst
    //case, VDMs on the failing Quad will indicate a permanent droop which
    //causes the DPLL to drop 12.5% even if not needed

    if((G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE))
    {
        G_pgpe_pstate_record.pstatesStatus = PSTATE_SAFE_MODE_PENDING;
    }
    else
    {
        //Ack any pending IPCs from OCC and SGPE
        p9_pgpe_pstate_handle_pending_occ_ack_on_fault();
        p9_pgpe_pstate_handle_pending_sgpe_ack_on_fault();

        p9_pgpe_pstate_cme_fault();
    }


    G_pgpe_pstate_record.severeFault[SAFE_MODE_FAULT_CME] = 1;

}
