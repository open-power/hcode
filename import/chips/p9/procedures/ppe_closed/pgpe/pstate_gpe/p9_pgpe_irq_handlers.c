/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_irq_handlers.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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
extern TraceData_t G_pgpe_optrace_data;
//
//External Global Data
//
extern PgpePstateRecord G_pgpe_pstate_record;
extern GlobalPstateParmBlock* G_gppb;

//
//OCB Error Interrupt Handler
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
    out32(OCB_OISR0_CLR, BIT32(2));//Clear any pending interrupts
    out32(OCB_OIMR0_CLR, BIT32(2));//Unmask interrupt
}

void p9_pgpe_irq_handler_occ_error(void* arg, PkIrqId irq)
{
    PK_TRACE_DBG("OCCHB: Enter");
    PkMachineContext  ctx;

    ocb_occlfir_t fir;
    fir.value = 0;

    out32(OCB_OISR0_CLR, BIT32(2));

    //Read OCB_LFIR
    GPE_GETSCOM(OCB_OCCLFIR, fir.value);

    //If OCB_LFIR[occ_hb_error]
    if (fir.fields.occ_hb_error == 1)
    {
        GPE_PUTSCOM(OCB_OCCLFIR_AND, ~BIT64(OCC_HB_ERROR_FIR));
        p9_pgpe_pstate_safe_mode();
    }
    else
    {
        PK_TRACE_ERR("OCCHB: Unexpected OCC_FIR[0x%08x%08x] ", UPPER32(fir.value), LOWER32(fir.value));
    }

    pk_irq_vec_restore(&ctx);
    PK_TRACE_DBG("OCC Error: Exit");
}

//
//SGPE Halt Interrupt Handler
//
//\TODO: RTC 164107
//Implement this handler. Implement Safe Mode
void p9_pgpe_irq_handler_sgpe_halt(void* arg, PkIrqId irq)
{
    PK_TRACE_DBG("SGPE Halt: Enter");
    PkMachineContext  ctx;

    pk_irq_vec_restore(&ctx);//Restore interrupts
    PK_TRACE_DBG("SGPE Halt: Exit");
}

//
//Checkstop GPE2 Interrupt Handler
//
void p9_pgpe_irq_handler_xstop_gpe2(void* arg, PkIrqId irq)
{
    PK_TRACE_DBG("XSTOP GPE2: Enter");
    PkMachineContext  ctx;

    PGPE_PANIC_AND_TRACE(PGPE_XSTOP_SGPE_IRQ);

    pk_irq_vec_restore(&ctx);//Restore interrupts
    PK_TRACE_DBG("XSTOP GPE2: Exit");
}

//
//PCB Type 1 Interrupt Handler
//
//\\tbd RTC:177526 GA1 only Phase1 data is used since only LowerPS fields is supported in PMCR
//
void p9_pgpe_irq_handler_pcb_type1(void* arg, PkIrqId irq)
{
    PK_TRACE_DBG("PCB1: Enter");
    PkMachineContext  ctx;
    ocb_opit1cn_t opit1cn;
    uint32_t c;
    uint32_t opit1pra;

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
                //RTC:177526 GA1 only Phase1 data is used since only LowerPS fields is supported in PMCR
                G_pgpe_pstate_record.coresPSRequest[c] = opit1cn.value & 0xff;
                PK_TRACE_DBG("PCB1: c[%d]=0%x", c, G_pgpe_pstate_record.coresPSRequest[c]);
                G_pgpe_optrace_data.word[0] = (c << 24) | (G_pgpe_pstate_record.globalPSCurr << 16) |
                                              G_pgpe_pstate_record.coresPSRequest[c];
                p9_pgpe_optrace(PRC_PCB_T1);
            }
        }

        //Do auction, apply clips and generate new targets
        p9_pgpe_pstate_do_auction();
        p9_pgpe_pstate_apply_clips();
    }
    else
    {
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
//PCB Type 4 Interrupt Handler
//
//This interrupt is enabled at PGPE Init and stays enabled always
//However, behaviour depends on pstates status.
//If pstates are enabled, then activeQuads variable is updated, quad manager
//CME(s) is/are sent a Pstate Start Doorbell, and then ACKs are collected. If pstates are disabled,
//then only activeQuads variable is updated
void p9_pgpe_irq_handler_pcb_type4(void* arg, PkIrqId irq)
{
    PkMachineContext ctx;

    pk_irq_sub_critical_enter(&ctx);

    PK_TRACE_DBG("PCB4: Enter");
    ocb_ccsr_t ccsr;
    ccsr.value = in32(OCB_CCSR);
    ocb_qcsr_t qcsr;
    qcsr.value = in32(OCB_QCSR);
    uint32_t quadAckExpect = 0;
    volatile uint32_t opit4pr, opit4pr1;
    uint32_t opit4prQuad, q, c, coresVector;
    uint64_t value;
    pgpe_db0_start_ps_bcast_t db0;
    db0.value = 0;

    //Check which CMEs sent Registration Type4
    opit4pr = in32(OCB_OPIT4PRA);
    out32(OCB_OPIT4PRA_CLR, opit4pr);
    PK_TRACE_DBG("PCB4: opit4pr 0x%x", opit4pr);

    for (q = 0; q < MAX_QUADS; q++)
    {
        opit4prQuad = (opit4pr >> ((MAX_QUADS - q + 1) << 2)) & 0xf;
        PK_TRACE_DBG("PCB4: opit4prQuad 0x%x", opit4prQuad);

        if (opit4prQuad)
        {
            //Already registered
            if (G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
            {
                PK_TRACE_DBG("PCB4: Quad %d Already Registered. opit4pra=0x%x", q, opit4pr);
                PGPE_PANIC_AND_TRACE(PGPE_CME_UNEXPECTED_REGISTRATION);
            }

            //Update activeQuads and coresActive
            G_pgpe_pstate_record.activeQuads |= QUAD_MASK(q);

            for (c = q << 2; c < ((q + 1) << 2); c++)
            {
                if (ccsr.value & CORE_MASK(c))
                {
                    G_pgpe_pstate_record.activeCores |= CORE_MASK(c);
                }
            }

            //Quad has registered. Remove from pending quads
            //registration list
            G_pgpe_pstate_record.pendQuadsRegistration &= ~QUAD_MASK(q);

            PK_TRACE_DBG("PCB4: Quad %d Registered. qActive=0x%x cActive=0x%x", q, G_pgpe_pstate_record.activeQuads,
                         G_pgpe_pstate_record.activeCores);

            //If Pstates are active or suspended while active, then
            //send Pstate Start DB0 to quadManager CME
            if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
            {
                p9_pgpe_pstate_do_auction();
                p9_pgpe_pstate_apply_clips();

                //Write CME_SCRATCH and PMSR0/1 registers
                if (qcsr.fields.ex_config &  (0x800 >> (q << 1)))
                {
                    //CME_Scratch
                    GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);
                    value |= ((uint64_t)(MAX_QUADS - 1 - q) << 3) << 32;
                    value |= BIT64(CME_SCRATCH_DB0_PROCESSING_ENABLE);
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);

                    //PMSR0/1
                    value = ((uint64_t)G_pgpe_pstate_record.psClipMax[q] << SHIFT64(23)) | ((uint64_t)G_pgpe_pstate_record.psClipMin[q] <<
                            SHIFT64(31));
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_OR, q, 0), BIT64(2));
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_PMSRS0, q, 0), value);
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_PMSRS1, q, 0), value);
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_CLR, q, 0), BIT64(2));
                }

                if (qcsr.fields.ex_config &  (0x400 >> (q << 1)))
                {
                    //CME_Scratch
                    GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 1), value);
                    value |= ((uint64_t)(MAX_QUADS - 1 - q) << 3) << 32;
                    value |= BIT64(CME_SCRATCH_DB0_PROCESSING_ENABLE);
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 1), value);

                    //PMSR0/1
                    value = ((uint64_t)G_pgpe_pstate_record.psClipMax[q] << SHIFT64(23)) | ((uint64_t)G_pgpe_pstate_record.psClipMin[q] <<
                            SHIFT64(31));
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_OR, q, 1), BIT64(2));
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_PMSRS0, q, 1), value);
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_PMSRS1, q, 1), value);
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_CLR, q, 1), BIT64(2));
                }

                //Give Quad Manager CME control of DPLL through inter-ppm
                //SGPE sets up the DPLL_SEL bits before booting CME
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_OR, q), BIT64(26));

                //Send DB0
                db0.fields.msg_id = MSGID_DB0_START_PSTATE_BROADCAST;
                db0.fields.global_actual = G_pgpe_pstate_record.globalPSTarget;
                db0.fields.quad0_ps = G_pgpe_pstate_record.quadPSTarget[0];
                db0.fields.quad1_ps = G_pgpe_pstate_record.quadPSTarget[1];
                db0.fields.quad2_ps = G_pgpe_pstate_record.quadPSTarget[2];
                db0.fields.quad3_ps = G_pgpe_pstate_record.quadPSTarget[3];
                db0.fields.quad4_ps = G_pgpe_pstate_record.quadPSTarget[4];
                db0.fields.quad5_ps = G_pgpe_pstate_record.quadPSTarget[5];

                coresVector = 0;

                for (c = FIRST_CORE_FROM_QUAD(q); c < LAST_CORE_FROM_QUAD(q); c++)
                {
                    if (G_pgpe_pstate_record.activeCores & CORE_MASK(c))
                    {
                        opit4pr1 = in32(OCB_OPIT4PRA);
                        coresVector |= CORE_MASK(c);
                    }
                }

                PK_TRACE_DBG("PCB4: quad=%d,coresVector0x%x", q, coresVector);
                p9_pgpe_send_db0(db0.value, coresVector, PGPE_DB0_UNICAST, PGPE_DB0_ACK_SKIP);

                quadAckExpect |= QUAD_MASK(q);
            }

            G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) | (G_pgpe_pstate_record.globalPSCurr << 16)
                                          | (in32(OCB_QCSR) >> 16);
            p9_pgpe_optrace(PRC_PCB_T4);
        }
    }

    //Update Active Cores in OCC Shared SRAM
    G_pgpe_pstate_record.pQuadState0->fields.active_cores = (G_pgpe_pstate_record.activeCores >> 16);
    G_pgpe_pstate_record.pQuadState1->fields.active_cores = (G_pgpe_pstate_record.activeCores & 0xFF00);

    //Wait for all CMEs to ACK Pstate Start DB0
    opit4pr1 = in32(OCB_OPIT4PRA);
    PK_TRACE_DBG("PCB4: opit4pr 0x%x, quadAckExpect=0x%x", opit4pr1, quadAckExpect);

    while(quadAckExpect != 0)
    {
        opit4pr1 = in32(OCB_OPIT4PRA);


        for (q = 0; q < MAX_QUADS; q++)
        {
            opit4prQuad = (opit4pr1 >> ((MAX_QUADS - q + 1) << 2)) & 0xf;

            if (opit4prQuad)
            {
                //We expect type4 from this quad for the Pstate Start sent above
                if (quadAckExpect & QUAD_MASK(q))
                {
                    quadAckExpect &= ~QUAD_MASK(q);
                    out32(OCB_OPIT4PRA_CLR, opit4prQuad << ((MAX_QUADS - q + 1) << 2));
                    PK_TRACE_DBG("PCB4: Got DB0 Start ACK from %d", q);
                    G_pgpe_pstate_record.quadPSCurr[q] = G_pgpe_pstate_record.quadPSTarget[q];
                    G_pgpe_pstate_record.quadPSNext[q] = G_pgpe_pstate_record.quadPSTarget[q];
                    p9_pgpe_pstate_updt_actual_quad(QUAD_MASK(q));
                }
                else if(!(G_pgpe_pstate_record.pendQuadsRegistration & QUAD_MASK(q)))
                {
                    PK_TRACE_ERR("PCB4: Unexpected ACK q=0x%x,opit4prQuad=0x%x", q, opit4prQuad);
                    PGPE_PANIC_AND_TRACE(PGPE_CME_UNEXPECTED_REGISTRATION);
                }
            }
        }
    }

    out32(OCB_OISR1_CLR, BIT32(17)); //Clear out TYPE4 in OISR
    pk_irq_sub_critical_exit(&ctx);
    pk_irq_vec_restore(&ctx);
    PK_TRACE_DBG("PCB4: Exit");
}
