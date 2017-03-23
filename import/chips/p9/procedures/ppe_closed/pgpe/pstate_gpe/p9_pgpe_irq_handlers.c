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

//
//External Global Data
//
extern PgpePstateRecord G_pgpe_pstate_record;

//
//OCB Error Interrupt Handler
//
#define OCC_HB_ERROR 4
void p9_pgpe_ocb_hb_error_init()
{
    PK_TRACE_DBG("OCC HB: Enter\n");

    uint64_t firact;

    GPE_GETSCOM(OCB_OCCLFIRACT0, firact);
    firact |= BIT64(OCC_HB_ERROR);
    GPE_PUTSCOM(OCB_OCCLFIRACT0, firact);

    GPE_GETSCOM(OCB_OCCLFIRACT1, firact);
    firact &= ~BIT64(OCC_HB_ERROR);
    GPE_PUTSCOM(OCB_OCCLFIRACT1, firact);

    GPE_PUTSCOM(OCB_OCCLFIRMASK_AND, ~BIT64(OCC_HB_ERROR));

    out32(OCB_OIMR0_CLR, BIT32(OCC_HB_ERROR));

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
        p9_pgpe_pstate_pm_complex_suspend();
    }
    else
    {
        //\todo handle other FIR Bits
        PK_TRACE_INF("OCC Error: can't handle OCC_FIR[0x%08x%08x] \n", fir.value);
        pk_halt();
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

    pk_halt();

    pk_irq_vec_restore(&ctx);//Restore interrupts
    PK_TRACE_DBG("XSTOP GPE2: Exit\n");
}

//
//IPI2 Lo Priority Interrupt Handler
//
//\TODO: RTC 164107
//Implement this handler. Should call "process_flags" function(needs to be implemented).
void p9_pgpe_irq_handler_ipi2_lo(void* arg, PkIrqId irq)
{
    PK_TRACE_DBG("IPI2 Lo: Enter\n");
    PkMachineContext  ctx;
    ocb_occflg_t occFlag;

    out32(OCB_OISR1_CLR, BIT32(28));

    //Read OCC_FLAGS
    occFlag.value = 0;
    occFlag.value = in32(OCB_OCCFLG);

    //If OCC_FLAGS[PM_SUSPEND
    if (occFlag.value & BIT32(PM_COMPLEX_SUSPEND))
    {
        p9_pgpe_pstate_pm_complex_suspend();
    }
    else if (occFlag.value & BIT32(PGPE_SAFE_MODE))
    {
        p9_pgpe_pstate_safe_mode();
    }
    else
    {
        PK_TRACE_DBG("IPI2 Lo: !Suspend and !SafeMode\n");
    }


    pk_irq_vec_restore(&ctx);
    PK_TRACE_DBG("IPI2 Lo: Exit\n");
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
    uint32_t coresPendPSReq = in32(OCB_OPIT1PRA);
    uint32_t c;

    if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE && (G_pgpe_pstate_record.pmcrOwner == PMCR_OWNER_HOST ||
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
                    out32(OCB_OPIT1PRA_CLR, 0x80000000 >> c); //Clear out pending bits
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
