/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_irq_handlers.c $    */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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
#include "p10_hcd_memmap_qme_sram.H"
#include "p10_hcode_image_defines.H"
#include "p10_stop_recovery_trigger.h"


extern XgpeHeader_t* G_xgpe_header_data;

extern uint32_t G_OCB_OCCFLG3_OR;
extern uint32_t G_OCB_OCCFLG3;
extern uint32_t G_OCB_OCCFLG3_CLR;
extern uint32_t G_OCB_CCSR;
extern uint32_t G_OCB_OPITFSV;
extern uint32_t G_OCB_OPITESV;
extern uint32_t G_OCB_OISR0_CLR;
extern uint32_t G_OCB_OPITFPRD;
extern uint32_t G_OCB_OPITFPRD_CLR;
extern uint32_t G_OCB_OPITEPRD;
extern uint32_t G_OCB_OPITEPRD_CLR;
extern uint32_t G_OCB_OPITFSVRR;
extern uint32_t G_OCB_OPITESVRR;

//This task gets triggered when OISR bits are
//set as mentioned below
IOTA_BEGIN_TASK_TABLE
IOTA_TASK(xgpe_irq_fault_handler),    //Bit 2,5
          IOTA_TASK(IOTA_NO_TASK),
          IOTA_TASK(ipc_irq_handler), //Bit 9
          IOTA_TASK(xgpe_gpe3_func_handler),    //Bit 11
          IOTA_TASK(xgpe_irq_pcb_typeE_handler), // Bit 30
          IOTA_TASK(xgpe_irq_pcb_typef_handler), // Bit 31
          IOTA_TASK(IOTA_NO_TASK)
          IOTA_END_TASK_TABLE;

///////////////////////////////////////////////
// xgpe_irq_fault_handler
///////////////////////////////////////////////
void xgpe_irq_fault_handler()
{
    out32(G_OCB_OISR0_CLR, BIT32(2));
    out32(G_OCB_OIMR0_OR, BIT32(2));

    p10_stop_recovery_trigger();
    g_oimr_override |= BIT64(2);

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
    g_oimr_override |= BIT64(11);
    g_oimr_override |= BITS64(30, 2);
}

///////////////////////////////////////////////
// xgpe_irq_pcb_typef_handler
///////////////////////////////////////////////
void xgpe_irq_pcb_typef_handler()
{
    uint32_t l_occflg3 = in32(G_OCB_OCCFLG3);
    uint32_t l_quad;
    uint32_t l_opitfsv_data = 0;
    uint32_t l_opitfpv_data = 0;
    uint32_t l_pcb_type_f_msg = 0;
    uint32_t QUAD_MASK = 0x80000000;

    //Clear OISR0[PCB_TYPE_F]
    out32(G_OCB_OISR0_CLR, BIT32(31));

    PK_TRACE("PCB TYPE F interrupt handler %08x", l_occflg3);

    l_opitfpv_data = in32(G_OCB_OPITFPRD);

    for (l_quad = 0; l_quad < MAX_QUADS; ++l_quad)
    {
        uint32_t l_tmp_pv_data = l_opitfpv_data & (QUAD_MASK >> l_quad);

        if (l_tmp_pv_data)
        {
            //Read OPITFSV
            l_opitfsv_data = in32(G_OCB_OPITFSV);

            //Parse the OPITFSV data using quad position
            l_opitfsv_data &= (PCB_TYPE_F_MASK >> ((l_quad) << 2));
            l_opitfsv_data = l_opitfsv_data >> SHIFT32(((l_quad + 1) << 2) - 1);

            if (!l_opitfsv_data)
            {
                out32(G_OCB_OPITFPRD_CLR, l_tmp_pv_data);
                continue;
            }

            if (G_xgpe_header_data->g_xgpe_xgpeFlags & XGPE_PM_SUSPEND_MODE)
            {
                //Need to make sure for all quads
                //stop entry/exit are suspended.
                // so reset before we verify.
                l_pcb_type_f_msg = PM_SUSPEND_NONE;

                if (l_opitfsv_data & SUSPEND_STOP_ENTRY_EXIT)
                {
                    l_pcb_type_f_msg = PM_SUSPEND_COMPLETE;
                }

                out32(G_OCB_OPITFPRD_CLR, l_tmp_pv_data);
            }
            else
            {
                if (l_opitfsv_data & BLOCK_WAKEUP_MASK)
                {
                    l_pcb_type_f_msg = PM_CCI_COMPLETE;
                    out32(G_OCB_OPITFPRD_CLR, l_tmp_pv_data);
                }
            }

        }
        else
        {
            continue;
        }
    } //end of quad loop

    if(l_pcb_type_f_msg == PM_SUSPEND_COMPLETE)
    {
        //PM Suspend process is done
        out32(G_OCB_OCCFLG3_OR, BIT32(XGPE_PM_COMPLEX_SUSPENDED));
        G_xgpe_header_data->g_xgpe_xgpeFlags &= ~XGPE_PM_SUSPEND_MODE;
        PK_TRACE("XGPE_PM_COMPLEX_SUSPENDED successful");
    }

    if (l_pcb_type_f_msg == PM_CCI_COMPLETE)
    {
        //Initimates HWP that requested action is completed
        out32(G_OCB_OCCFLG3_CLR, BIT32(XGPE_IGNORE_STOP_CONTROL));
        PK_TRACE("XGPE_IGNORE_STOP_CONTROL is successful");
    }

    g_oimr_override |= BITS64(30, 2);
    g_oimr_override |= BIT64(11);
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

void xgpe_irq_pcb_typeE_handler()
{
    uint32_t l_quad = 0;
    uint32_t l_opitesv_data = 0;
    uint32_t l_opitepv_data = 0;
    uint32_t QUAD_MASK = 0x80000000;
    uint32_t l_status = ERRL_STATUS_SUCCESS;

    //Clear OISR0[PCB_TYPE_E]
    out32(G_OCB_OISR0_CLR, BIT32(30));
    PK_TRACE("xgpe_irq_pcb_typeE_handler >>>");

    // Read & save the Type E Pending Reg
    l_opitepv_data = in32(G_OCB_OPITEPRD);
    // Read & save the Type E Summary Reg
    l_opitesv_data = in32(G_OCB_OPITESV);

    // Check for and process if any, errors from each quad (qme)
    for ( l_quad = 0;
          (l_quad < MAX_QUADS) && (ERRL_STATUS_SUCCESS == l_status);
          ++l_quad )
    {
        uint32_t l_tmp_pv_data = l_opitepv_data & (QUAD_MASK >> l_quad);

        if (l_tmp_pv_data)
        {
            //Parse the OPITESV data using quad position to get 4 bit value
            //eq0 [0:3] eq1[4:7] .. eq7[28:31]
            l_opitesv_data &= (PCB_TYPE_F_MASK >> (l_quad << 2));
            l_opitesv_data >>= (SHIFT32((l_quad + 1) << 2) + 1);

            //Read the Quad eLogTbl entry data and process QME error logs
            l_status = handleQmeErrl (l_quad, l_opitesv_data);

            out32(G_OCB_OPITEPRD_CLR, l_tmp_pv_data);
        }   // pending interrupt
    }   // end of all QMEs in chips

    g_oimr_override |= BITS64(30, 2);
    g_oimr_override |= BIT64(11);

    PK_TRACE("xgpe_irq_pcb_typeE_handler - status: %d<<<", l_status);
}
