/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_irq_handlers_fit.c $ */
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
#include "xgpe.h"
#include "p10_scom_eq.H"
//#include "p10_scom_eq_7.H"
//#include "p10_scom_eq_3.H"
//#include "p10_scom_eq_2.H"

//using namespace scomt::eq;

extern uint32_t G_OCB_OCCFLG3_OR;
extern uint32_t G_OCB_OCCFLG3_CLR;
extern uint32_t G_OCB_OCCFLG3;
extern uint32_t G_OCB_OPITFSV;
extern uint32_t G_OCB_CCSR;
extern uint32_t G_OCB_OPITFPRD;
extern uint32_t G_OCB_OPITFSVRR;


//
//  This is a periodic FIT Handler which is called up at fixed period
//  as determined by GPE_TIMER_SELECT register
//
void xgpe_irq_fit_handler()
{
    handle_pm_suspend();
}


///////////////////////////////////////////////////
//handle_pm_suspend
///////////////////////////////////////////////////
void handle_pm_suspend()
{
    uint32_t l_occflg3;
    uint32_t l_intr_pen;
    uint32_t l_quad;
    uint32_t l_ccsr = in32(G_OCB_CCSR);

    //Read OCCFLG3 and check for XGPE_PM_COMPLEX_SUSPEND
    //if this is set.. then we are in mpipl mode.
    l_occflg3 = in32(G_OCB_OCCFLG3);

    if (l_occflg3 & BIT32(XGPE_PM_COMPLEX_SUSPEND))
    {
        //Clear XGPE_PM_COMPLEX_SUSPEND
        out32(G_OCB_OCCFLG3_CLR, BIT32(XGPE_PM_COMPLEX_SUSPEND));

        PK_TRACE("XGPE_PM_COMPLEX_SUSPEND request");

        //if this is set.. then just set pm suspended is done(useful to test the
        //procedure unit test)
        if (G_xgpe_header_data->g_xgpe_flags & XGPE_OCC_PM_SUSPEND_IMMEDIATE_MODE)
        {
            out32(G_OCB_OCCFLG3_OR, BIT32(XGPE_PM_COMPLEX_SUSPENDED));
        }
        else
        {
            G_xgpe_header_data->g_xgpe_flags = XGPE_PM_SUSPEND_MODE;
#ifdef SIMICS_TUNING

            for (l_quad = 1; l_quad <= MAX_QUADS; ++l_quad)
            {
                if (IS_QUAD_CONFIG(l_ccsr, (l_quad << 2)))
                {
                    //Change the PMCR ownership to scom
                    PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_QMCR_WO_OR, (l_quad - 1)),
                                BIT64(QME_QMCR_PMCR_OVERRIDE_EN));

                    //Multicast QME_Scratch_B_CLEAR(q, 0xFFFF000000000000)
                    //Clearing Ignore STOP Exits[0:3], Ignore STOP Entries [0:3], Core
                    //Block STOP Exit Enabled[0:3] and Core Block STOP Entry
                    //Enabled[0:3] fields
                    PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_SCRB_WO_CLEAR, (l_quad - 1)),
                                BITS64(0, 16));

                    //Multicast QME_Scratch_B_OR(q, 0xFF00000000000000)
                    //Clearing Ignore STOP Exits[0:3] and Ignore STOP Entries [0:3]
                    //fields
                    PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_SCRB_WO_OR, (l_quad - 1)),
                                BITS64(0, 8));
                }
            }

#else
            //Send request to QME to suspend all its stop states
            //Change the PMCR ownership to scom
            PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(QME_QMCR_WO_OR, 0xF),
                        BIT64(QME_QMCR_PMCR_OVERRIDE_EN));

            //Multicast QME_Scratch_B_CLEAR(q, 0xFFFF000000000000)
            //Clearing Ignore STOP Exits[0:3], Ignore STOP Entries [0:3], Core
            //Block STOP Exit Enabled[0:3] and Core Block STOP Entry
            //Enabled[0:3] fields
            PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(QME_SCRB_WO_CLEAR, 0xF),
                        BITS64(0, 16));

            //Multicast QME_Scratch_B_OR(q, 0xFF00000000000000)
            //Clearing Ignore STOP Exits[0:3] and Ignore STOP Entries [0:3]
            //fields
            PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(QME_SCRB_WO_OR, 0xF),
                        BITS64(0, 8));
#endif

            //Check any pcb type f interrupt is pending
            //If there are any pending bits...then read the summary vector reset
            //register which clears the pending register bits and continue
            l_intr_pen = in32(G_OCB_OPITFPRD);

            if (l_intr_pen & BITS32(0, 8))
            {
                PK_TRACE("PCB type F interrupt pending"
                         "G_OCB_OPITFPRD %8x G_OCB_OPITFSVRR %08X",
                         l_intr_pen, in32(G_OCB_OPITFSVRR));
            }

#ifdef SIMICS_TUNING

            for (l_quad = 1; l_quad <= MAX_QUADS; ++l_quad)
            {
                if (IS_QUAD_CONFIG(l_ccsr, (l_quad << 2)))
                {
                    //Kick off DB1 to QME for suspend stop on all cores
                    //Bit 5:Suspend stop entries
                    //Bit 6:Suspend stop exits
                    //Bit 7:Suspend stop entries and exits
                    PK_TRACE("Kick off DB1 to QME %d", l_quad - 1);
                    PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_DB1, (l_quad - 1)), BITS64(5, 3));
                }
            }

#else
            //Kick off DB1 to QME for suspend stop on all cores
            //Bit 5:Suspend stop entries
            //Bit 6:Suspend stop exits
            //Bit 7:Suspend stop entries and exits
            PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(QME_DB1, 0xF), BITS64(5, 3));
#endif
        }

    }
}

