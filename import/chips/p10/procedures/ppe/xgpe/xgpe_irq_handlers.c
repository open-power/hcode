/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_irq_handlers.c $    */
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
#include "xgpe_irq_handlers.h"
#include "p10_scom_eq.H"
//#include "p10_scom_eq_7.H"
//#include "p10_scom_eq_3.H"
//#include "p10_scom_eq_2.H"


//using namespace scomt::eq;


extern uint32_t G_OCB_OCCFLG3_OR;
extern uint32_t G_OCB_OCCFLG3;
extern uint32_t G_OCB_OCCFLG3_CLR;
extern uint32_t G_OCB_CCSR;
extern uint32_t G_OCB_OPITFSV;
extern uint32_t G_OCB_OISR0_CLR;

//This task gets triggered when OISR bits are
//set as mentioned below
IOTA_BEGIN_TASK_TABLE
IOTA_TASK(xgpe_irq_fault_handler),    //Bit 2,5
          IOTA_TASK(IOTA_NO_TASK),
          IOTA_TASK(ipc_irq_handler), //Bit 9
          IOTA_TASK(xgpe_gpe3_func_handler),    //Bit 11
          IOTA_TASK(xgpe_irq_pcb_typef_handler), // Bit 31
          IOTA_TASK(IOTA_NO_TASK)
          IOTA_END_TASK_TABLE;

///////////////////////////////////////////////
// xgpe_irq_fault_handler
///////////////////////////////////////////////
void xgpe_irq_fault_handler()
{

}

///////////////////////////////////////////////
// xgpe_gpe3_func_handler
///////////////////////////////////////////////
void xgpe_gpe3_func_handler()
{
    uint32_t l_occflg3 = in32(G_OCB_OCCFLG3);
    //Clear OISR0[GPE3_FUNC_TRIGGER]
    out32(G_OCB_OISR0_CLR, BIT32(11));
    uint64_t l_db1_data = 0;

    PK_TRACE("GPE3 interrupt handler %08x", l_occflg3);

    //if OCCFLG3[XGPE Ignore STOP  Control,Stop exit and stop action]
    //is set then need to enable block exit protocol where cores will be blocked
    //to exit any stop states
    if ((l_occflg3 & BIT32(XGPE_IGNORE_STOP_CONTROL)) &&
        (l_occflg3 & BIT32(XGPE_IGNORE_STOP_EXITS)) &&
        (l_occflg3 & BIT32(XGPE_IGNORE_STOP_ACTION)) )
    {
        l_db1_data |= (uint64_t)(SUSPEND_STOP_EXIT) << 56;
    }


    //if OCCFLG3[XGPE Ignore STOP  Control,Stop exit and stop action]
    //is clear then need to disable block exit protocol where cores will be un-blocked
    //to exit any stop states
    if ((l_occflg3 & BIT32(XGPE_IGNORE_STOP_CONTROL)) &&
        (l_occflg3 & BIT32(XGPE_IGNORE_STOP_EXITS)) &&
        !(l_occflg3 & BIT32(XGPE_IGNORE_STOP_ACTION)) )
    {
        l_db1_data |= (uint64_t)(UNSUSPEND_STOP_EXIT) << 56;
    }

    //if OCCFLG3[XGPE Ignore STOP  Control,Stop entry and stop action]
    //is set then need to enable block entry protocol where cores will be blocked
    //to exit any stop states
    if ((l_occflg3 & BIT32(XGPE_IGNORE_STOP_CONTROL)) &&
        (l_occflg3 & BIT32(XGPE_IGNORE_STOP_ENTRIES)) &&
        (l_occflg3 & BIT32(XGPE_IGNORE_STOP_ACTION)) )
    {
        l_db1_data |= (uint64_t)(SUSPEND_STOP_ENTRY) << 56;
    }


    //if OCCFLG3[XGPE Ignore STOP  Control,Stop entry and stop action]
    //is clear then need to disable block entry protocol where cores will be un-blocked
    //to exit any stop states
    if ((l_occflg3 & BIT32(XGPE_IGNORE_STOP_CONTROL)) &&
        (l_occflg3 & BIT32(XGPE_IGNORE_STOP_ENTRIES)) &&
        !(l_occflg3 & BIT32(XGPE_IGNORE_STOP_ACTION)) )
    {
        l_db1_data |= (uint64_t)(UNSUSPEND_STOP_ENTRY) << 56;
    }

    xgpe_send_db1_to_qme(l_db1_data);
}

///////////////////////////////////////////////
// xgpe_irq_pcb_typef_handler
///////////////////////////////////////////////
void xgpe_irq_pcb_typef_handler()
{
    uint32_t l_ccsr = in32(G_OCB_CCSR);
    uint32_t l_occflg3 = in32(G_OCB_OCCFLG3);
    uint32_t l_quad;
    uint32_t l_opitf_data;
    uint32_t l_pcb_type_f_msg = 0;
    uint32_t l_cci_data = BITS32(XGPE_IGNORE_STOP_CONTROL, XGPE_IGNORE_STOP_LEN);

    PK_TRACE("PCB TYPE F interrupt handler %08x", l_occflg3);

    //RTC 214436
    while (1)
    {
        //Read OPITFSV
        l_opitf_data = in32(G_OCB_OPITFSV);

        //If we are in mpipl/PM suspend mode
        if (G_xgpe_header_data->g_xgpe_flags & XGPE_PM_SUSPEND_MODE)
        {
            //Loop through the quad
            for (l_quad = 1; l_quad <= MAX_QUADS; ++l_quad)
            {
                if (IS_QUAD_CONFIG(l_ccsr, (l_quad << 2)))
                {
                    //Parse the OPITFSV data using quad position
                    l_opitf_data &= (PCB_TYPE_F_MASK >> ((l_quad - 1) << 2));
                    l_opitf_data = l_opitf_data >> SHIFT32((l_quad << 2) - 1);

                    //Need to make sure for all quads
                    //stop entry/exit are suspended.
                    // so reset before we verify.
                    l_pcb_type_f_msg = PM_SUSPEND_NONE;

                    if (l_opitf_data & SUSPEND_STOP_ENTRY_EXIT)
                    {
                        l_pcb_type_f_msg = PM_SUSPEND_COMPLETE;
                        //This below logic is to avoid verifying the quad again
                        //which is already stop entry/exit is suspended.
                        l_ccsr = MASK_CCSR(l_ccsr, (l_quad << 2));
                    }

                }
            }
        }

        //This condition makes sure, that we have received the interrupts from
        //all quads and its cores are suspended OR
        //CCI is complete
        //all quads and its cores are suspended.
        if (!l_ccsr)
        {
            break;
        }

        //If we are in CCI mode
        if ( l_occflg3 & l_cci_data)
        {
            if (l_opitf_data & BLOCK_WAKEUP_MASK)
            {
                l_pcb_type_f_msg = PM_CCI_COMPLETE;
                break;
            }
        }
    }

    if(l_pcb_type_f_msg == PM_SUSPEND_COMPLETE)
    {
        //PM Suspend process is done
        out32(G_OCB_OCCFLG3_OR, BIT32(XGPE_PM_COMPLEX_SUSPENDED));
        G_xgpe_header_data->g_xgpe_flags &= ~XGPE_PM_SUSPEND_MODE;
        PK_TRACE("XGPE_PM_COMPLEX_SUSPENDED successful");
    }

    if (l_pcb_type_f_msg == PM_CCI_COMPLETE)
    {
        //Initimates HWP that requested action is completed
        out32(G_OCB_OCCFLG3_CLR, BIT32(XGPE_IGNORE_STOP_CONTROL));
        PK_TRACE("XGPE_IGNORE_STOP_CONTROL is successful");
    }

    //Clear OISR0[PCB_TYPE_F]
    out32(G_OCB_OISR0_CLR, BIT32(31));
}

void xgpe_send_db1_to_qme(uint64_t i_db1_data)
{
    uint32_t l_quad;
    uint32_t l_ccsr = in32(G_OCB_CCSR);
    PK_TRACE("Kick off DB1 to qme %08x", i_db1_data >> 32);
#ifdef SIMICS_TUNING

    for (l_quad = 1; l_quad <= MAX_QUADS; ++l_quad)
    {
        if (IS_QUAD_CONFIG(l_ccsr, (l_quad << 2)))
        {
            PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_DB1, (l_quad - 1)), i_db1_data);
        }
    }

#else
    PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(QME_DB1, 0xF), i_db1_data);
#endif
}
