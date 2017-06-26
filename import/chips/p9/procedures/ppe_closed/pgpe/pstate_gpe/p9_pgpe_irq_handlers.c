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
    PK_TRACE_DBG("OCC HB: Enter\n");

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

    PK_TRACE_DBG("OCC HB: Exit\n");
}

void p9_pgpe_irq_handler_occ_error(void* arg, PkIrqId irq)
{
    PK_TRACE_DBG("OCC Error: Enter\n");
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
        //\todo handle other FIR Bits
        PK_TRACE_ERR("OCC Error: Unexpected OCC_FIR[0x%08x%08x] \n", UPPER32(fir.value), LOWER32(fir.value));
        PK_PANIC(PGPE_UNEXPECTED_OCC_FIR_IRQ);
    }

    pk_irq_vec_restore(&ctx);
    PK_TRACE_DBG("OCC Error: Exit\n");
}

//
//SGPE Halt Interrupt Handler
//
//\TODO: RTC 164107
//Implement this handler. Implement Safe Mode
void p9_pgpe_irq_handler_sgpe_halt(void* arg, PkIrqId irq)
{
    PK_TRACE_DBG("SGPE Halt: Enter\n");
    PkMachineContext  ctx;

    pk_irq_vec_restore(&ctx);//Restore interrupts
    PK_TRACE_DBG("SGPE Halt: Exit\n");
}

//
//Checkstop GPE2 Interrupt Handler
//
void p9_pgpe_irq_handler_xstop_gpe2(void* arg, PkIrqId irq)
{
    PK_TRACE_DBG("XSTOP GPE2: Enter\n");
    PkMachineContext  ctx;

    PK_PANIC(PGPE_XSTOP_SGPE_IRQ);

    pk_irq_vec_restore(&ctx);//Restore interrupts
    PK_TRACE_DBG("XSTOP GPE2: Exit\n");
}

//
//PCB Type 1 Interrupt Handler
//
void p9_pgpe_irq_handler_pcb_type1(void* arg, PkIrqId irq)
{
    PK_TRACE_DBG("PCB_TYPE1: Enter\n");

    //Snapshot
    PkMachineContext  ctx;
    ocb_opit0cn_t opit0cn;
    ocb_opit1cn_t opit1cn;
    uint32_t c;
    uint32_t coresPendPSReq = 0;
    uint32_t opit1pra;

    //Incrementally build a snapshot of core requests
    opit1pra = in32(OCB_OPIT1PRA);
    coresPendPSReq = opit1pra;

    //Keep looping until no more core requests
    while(opit1pra)
    {
        out32(OCB_OPIT1PRA_CLR, opit1pra);
        coresPendPSReq |= opit1pra;
        opit1pra = in32(OCB_OPIT1PRA);
    }

    if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE &&
        (G_pgpe_pstate_record.pmcrOwner == PMCR_OWNER_HOST ||
         G_pgpe_pstate_record.pmcrOwner == PMCR_OWNER_CHAR))
    {

        //Process pending requests
        for (c = 0; c < MAX_CORES; c++)
        {
            //For each pending bit OPIT1PR[c] (OPIT1PR is 24 bits)
            if (coresPendPSReq & (0x80000000 >> c))
            {
                //Read payload from OPIT0C[c] and OPIT1C[c] register corresponding to the core 'c'
                //Bits 20:31 OPIT0C - Phase 1 OPIT1C - Phase 2
                opit0cn.value = in32(OCB_OPIT0CN(c));
                opit1cn.value = in32(OCB_OPIT1CN(c));

                uint16_t op0 = opit0cn.fields.pcb_intr_payload;
                uint16_t op1 = opit1cn.fields.pcb_intr_payload;

                //make sure seq number matches for both phases
                //otherwise, ignore the request
                if (((op0 >> 10) && 0x3) ==
                    ((op1 >> 10) && 0x3))
                {
                    //Extract the LowerPState field
                    G_pgpe_pstate_record.coresPSRequest[c] = op1 & 0xff;
                    PK_TRACE_DBG("PCB_TYPE1: c[%d]=0%x\n", c, G_pgpe_pstate_record.coresPSRequest[c]);
                }
            }
        }

        p9_pgpe_pstate_do_auction(ALL_QUADS_BIT_MASK);
        p9_pgpe_pstate_apply_clips();
    }

#if SIMICS_TUNING
    out32(OCB_OPIT1PRA, 0x00000000); //Clear out pending bits
    out32(OCB_OISR1_CLR, BIT32(14));
#endif
    pk_irq_vec_restore(&ctx);//Restore interrupts
    PK_TRACE_DBG("PCB_TYPE1: Exit\n");
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

    PK_TRACE_DBG("PCB_TYPE4: Enter\n");
    ocb_ccsr_t ccsr;
    ccsr.value = in32(OCB_CCSR);
    ocb_qcsr_t qcsr;
    qcsr.value = in32(OCB_QCSR);
    uint32_t quadAckExpect = 0;
    volatile uint32_t opit4pr, opit4pr1;
    uint32_t opit4prQuad, q, c;
    uint64_t value;
    pgpe_db0_start_ps_bcast_t db0;
    db0.value = 0;
    db0.fields.msg_id = MSGID_DB0_START_PSTATE_BROADCAST;

    //Check which CMEs sent Registration Type4
    opit4pr = in32(OCB_OPIT4PRA);
    out32(OCB_OPIT4PRA_CLR, opit4pr);
    PK_TRACE_DBG("PCB_TYPE4: opit4pr 0x%x\n", opit4pr);

    for (q = 0; q < MAX_QUADS; q++)
    {
        opit4prQuad = (opit4pr >> ((MAX_QUADS - q + 1) << 2)) & 0xf;
        PK_TRACE_DBG("PCB_TYPE4: opit4prQuad 0x%x\n", opit4prQuad);

        if (opit4prQuad)
        {
            //Already registered
            if (G_pgpe_pstate_record.activeQuads & (0x80 >> q))
            {
                PK_TRACE_DBG("PCB_TYPE4: Quad %d Already Registered. opit4pra=0x%x", q, opit4pr);
                PK_PANIC(PGPE_CME_UNEXPECTED_REGISTRATION);
            }

            //Update activeQuads and activeCores
            G_pgpe_pstate_record.activeQuads |= (0x80 >> q);

            for (c = q << 2; c < ((q + 1) << 2); c++)
            {
                if (ccsr.value & ((0x80000000) >> c))
                {
                    G_pgpe_pstate_record.activeCores |= ((0x80000000) >> c);
                }
            }

            PK_TRACE_DBG("PCB_TYPE4: Quad %d Registered. qActive=0x%x cActive=0x%x", q, G_pgpe_pstate_record.activeQuads,
                         G_pgpe_pstate_record.activeCores);


            //If Pstates are active or suspended while active, then
            //send Pstate Start DB0 to quadManager CME
            if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
            {
                p9_pgpe_pstate_do_auction(ALL_QUADS_BIT_MASK);
                p9_pgpe_pstate_apply_clips();

                db0.fields.global_actual = G_pgpe_pstate_record.globalPSTarget;
                db0.fields.quad0_ps = G_pgpe_pstate_record.quadPSTarget[0];
                db0.fields.quad1_ps = G_pgpe_pstate_record.quadPSTarget[1];
                db0.fields.quad2_ps = G_pgpe_pstate_record.quadPSTarget[2];
                db0.fields.quad3_ps = G_pgpe_pstate_record.quadPSTarget[3];
                db0.fields.quad4_ps = G_pgpe_pstate_record.quadPSTarget[4];
                db0.fields.quad5_ps = G_pgpe_pstate_record.quadPSTarget[5];

                //Write CME_SCRATCH register
                if (qcsr.fields.ex_config &  (0x800 >> (q << 1)))
                {
                    GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);
                    value |= ((uint64_t)(MAX_QUADS - 1 - q) << 3) << 32;
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);
                }

                if (qcsr.fields.ex_config &  (0x400 >> (q << 1)))
                {
                    GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 1), value);
                    value |= ((uint64_t)(MAX_QUADS - 1 - q) << 3) << 32;
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 1), value);
                }

                for (c = q << 2; c < ((q + 1) << 2); c++)
                {
                    if (G_pgpe_pstate_record.activeCores & ((BIT32(0)) >> c))
                    {
                        opit4pr1 = in32(OCB_OPIT4PRA);
                        p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEDB0, c), db0.value);
                        PK_TRACE_DBG("PCB_TYPE4: Sent StartDB0 to %d\n", q);
                    }
                }

                quadAckExpect |= (0x80 >> q);
            }

        }
    }

    //Wait for all CMEs to ACK Pstate Start DB0
    opit4pr1 = in32(OCB_OPIT4PRA);
    PK_TRACE_DBG("PCB_TYPE4: opit4pr 0x%x, quadAckExpect=0x%x\n", opit4pr1, quadAckExpect);

    while(quadAckExpect != 0)
    {
        opit4pr1 = in32(OCB_OPIT4PRA);


        for (q = 0; q < MAX_QUADS; q++)
        {
            opit4prQuad = (opit4pr1 >> ((MAX_QUADS - q + 1) << 2)) & 0xf;

            if (opit4prQuad)
            {
                PK_TRACE_DBG("PCB_TYPE4: opit4prQuad 0x%x\n", opit4prQuad);

                if (quadAckExpect & (0x80 >> q))
                {
                    quadAckExpect &= ~(0x80 >> q);
                    out32(OCB_OPIT4PRA_CLR, opit4prQuad << ((MAX_QUADS - q + 1) << 2));
                    PK_TRACE_DBG("PCB_TYPE4: Got DB0 Start ACK from %d\n", q);
                    G_pgpe_pstate_record.quadPSCurr[q] = G_pgpe_pstate_record.quadPSTarget[q];
                    G_pgpe_pstate_record.quadPSNext[q] = G_pgpe_pstate_record.quadPSTarget[q];
                    p9_pgpe_pstate_updt_actual_quad(q);
                }
                else
                {
                    PK_TRACE_ERR("PCB_TYPE4: Unexpected ACK q=0x%x,opit4prQuad=0x%x\n", q, opit4prQuad);
                    PK_PANIC(PGPE_CME_UNEXPECTED_REGISTRATION);
                }
            }
        }
    }

    PK_TRACE_DBG("PCB_TYPE4: All ACKS rcvd. quadAckExpect=0x%x\n", quadAckExpect);
    out32(OCB_OISR1_CLR, BIT32(17)); //Clear out TYPE4 in OISR

    pk_irq_sub_critical_exit(&ctx);

    pk_irq_vec_restore(&ctx);
    PK_TRACE_DBG("PCB_TYPE4: Exit\n");
}
