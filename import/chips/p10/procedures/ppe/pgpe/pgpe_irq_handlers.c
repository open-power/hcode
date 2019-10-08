/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_irq_handlers.c $    */
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
#include "pgpe.h"
#include "pgpe_irq_handlers.h"
#include "pgpe_event_table.h"
#include "p10_oci_proc_5.H"
#include "p10_oci_proc_6.H"
#include "p10_oci_proc_a.H"
#include "p10_oci_proc_c.H"
#include "p10_oci_proc_f.H"

//Local Functions

extern void pgpe_irq_ipc_init();
extern void pgpe_irq_fit_init();

//FAULT
void pgpe_irq_occ_fault_handler();
void pgpe_irq_qme_fault_handler();
void pgpe_irq_xgpe_fault_handler();
void pgpe_irq_pvref_fault_handler();
void pgpe_irq_xstop_handler();
void pgpe_ipc_done_hook();

// IRQ handler table
IOTA_BEGIN_TASK_TABLE
IOTA_TASK(pgpe_irq_fault_handler),
          IOTA_TASK(pgpe_irq_pbax_handler),
          IOTA_TASK(ipc_irq_handler),
          IOTA_TASK(pgpe_irq_pcb_handler),
          IOTA_TASK(IOTA_NO_TASK)
          IOTA_END_TASK_TABLE;

pcb_set_pmcr_args_t G_pcb_set_pmcr_args;

void pgpe_irq_init()
{
    PK_TRACE("IRQ: Init");
    //Init IPC
    pgpe_irq_ipc_init();

    //Init FIT
    pgpe_irq_fit_init();

    //Init OCC Heartbeatloss //TBD

    //Clear all PGPE interrupts except IPI2.
    //IPI2 is cleared and setup by ipc_init call above
    uint32_t oisr0 = 0x590EE000;
    out32(TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR, oisr0);

    //Unmask all error PGPE interrupts.
    //PCB interrupts are masked(and some are never unmasked)
    //later when pstates are enabled
    uint32_t oimr0 = 0x59000000;
    out32(TP_TPCHIP_OCC_OCI_OCB_OIMR0_WO_CLEAR, oimr0);
}



void pgpe_irq_pcb_handler()
{
    PK_TRACE("PCB: Enter");

    uint32_t oisr = in32(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO);

    if(oisr & BIT32(16))
    {
        PK_TRACE("PCB: Type0");
        out32(TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR, BIT32(16));
    }

    if(oisr & BIT32(17))
    {
        PK_TRACE("PCB: Type1");

        //Read Pending bits
        uint32_t opit1pra = in32(TP_TPCHIP_OCC_OCI_OCB_OPIT1PRA_RO);
        uint32_t q;

        PK_TRACE("PCB: opit1pra=0x%x", opit1pra);

        //Loop through quads
        for (q = 0; q < MAX_QUADS; q++)
        {
            //Read payload
            if (opit1pra & QUAD_MASK(q))
            {
                uint32_t data  = in32(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0RR + (q << 3));
                //Save into the args
                G_pcb_set_pmcr_args.ps_request[q] = data;
                G_pcb_set_pmcr_args.ps_valid[q] = 1;
            }
        }

        pgpe_event_tbl_set(EV_PCB_SET_PMCR, EVENT_PENDING, (void*)&G_pcb_set_pmcr_args);
    }

    if(oisr & BIT32(18))
    {
        PK_TRACE("PCB: Type2");
        out32(TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR, BIT32(18));
    }

    PK_TRACE("PCB: Exit");
}

void pgpe_irq_fault_handler()
{
}

void pgpe_irq_pbax_handler()
{
}

void pgpe_irq_occ_fault_handler()
{
}

void pgpe_irq_qme_fault_handler()
{
}

void pgpe_irq_xgpe_fault_handler()
{
}

void pgpe_irq_pvref_fault_handler()
{
}

void pgpe_irq_xstop_handler()
{
}
