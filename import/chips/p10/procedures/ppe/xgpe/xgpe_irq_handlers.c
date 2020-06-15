/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_irq_handlers.c $    */
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



#include "xgpe.h"
#include "xgpe_irq_handlers.h"
#include "p10_scom_eq.H"
#include "p10_hcd_memmap_qme_sram.H"
#include "p10_hcode_image_defines.H"



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
extern uint64_t g_oimr_override;
uint32_t g_qme_elog_value;

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
hcode_error_table_t g_xgpe_qme_etbl;
//uint8_t G_errLogUnrec[ERRL_MAX_ENTRY_SZ]  __attribute__ ((aligned (8))) = {0};
//uint8_t G_errLogInfo [ERRL_MAX_ENTRY_SZ]  __attribute__ ((aligned (8))) = {0};


errlHndl_t  g_SharedHcodeErrLogs[MAX_ELOG_ENTRIES];


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


///////////////////////////////////////////////
// xgpe_irq_pcb_typeE_handler
///////////////////////////////////////////////
void xgpe_irq_pcb_typeE_handler()
{
    uint32_t l_quad;
    uint32_t l_quadId;
    uint32_t l_opitesv_data;
    uint32_t l_opitepv_data;
    uint32_t l_words_to_access;
    uint32_t l_log_slots = 0;
    uint32_t SIZE_OF_ETBL = 24;
    uint32_t QUAD_MASK = 0x80000000;
    //Clear OISR0[PCB_TYPE_E]
    out32(G_OCB_OISR0_CLR, BIT32(30));
    PK_TRACE("xgpe_irq_pcb_typeE_handler >>>");

    do
    {
        if ( !g_qme_elog_value)
        {
            QmeHeader_t* pQmeImgHdr = (QmeHeader_t*)(QME_SRAM_HEADER_ADDR);
            g_qme_elog_value = (uint32_t) & (pQmeImgHdr->g_qme_elog_addr);
            uint64_t addr;
            xgpe_qme_sram_access(0, g_qme_elog_value, 1, &addr);
            g_qme_elog_value = addr;
            PK_TRACE("g_qme_elog_value %08x", g_qme_elog_value);
        }

        l_opitepv_data = in32(G_OCB_OPITEPRD);

        //Loop through the quad
        for (l_quad = 1; l_quad <= MAX_QUADS; ++l_quad)
        {
            l_quadId = l_quad - 1;
            uint32_t l_tmp_pv_data = l_opitepv_data & (QUAD_MASK >> l_quadId);

            if (l_tmp_pv_data)
            {
                //Read OPITESV
                l_opitesv_data = in32(G_OCB_OPITESV);


                //Parse the OPITFSV data using quad position
                l_opitesv_data &= (PCB_TYPE_F_MASK >> ((l_quad - 1) << 2));
                l_opitesv_data = l_opitesv_data >> SHIFT32((l_quad << 2) - 1);

                if (!l_opitesv_data)
                {
                    out32(G_OCB_OPITEPRD_CLR, l_tmp_pv_data);
                    continue;
                }

            }
            else
            {
                continue;
            }

            //Read the Quad eLogTbl entry data
            l_words_to_access = SIZE_OF_ETBL >> 3;
            uint64_t l_data[l_words_to_access];
            xgpe_qme_sram_access(l_quadId, g_qme_elog_value, l_words_to_access, l_data);
            //Mark the header by own
            ////reset the global qme elog table

            g_xgpe_qme_etbl.dw0.value = l_data[0] ; //header
            g_xgpe_qme_etbl.dw0.fields.total_log_slots += l_log_slots;
            l_log_slots = g_xgpe_qme_etbl.dw0.fields.total_log_slots;

            g_xgpe_qme_etbl.elog[l_quadId * 2].dw0.value = l_data[1]; //Unrecoverable entry
            g_xgpe_qme_etbl.elog[l_quadId * 2 + 1].dw0.value = l_data[2]; //Informational entry

            //Read the errorlog payload from QME sram
            // and copy into xgpe shared sram
            if (!g_xgpe_qme_etbl.elog[l_quadId].dw0.value)
            {
                out32(G_OCB_OPITEPRD_CLR, l_tmp_pv_data);
                continue;
            }

            uint32_t len = g_xgpe_qme_etbl.elog[l_quadId].dw0.fields.errlog_len;
            uint32_t mod = len % 8;
            len = len >> 3;

            if (mod)
            {
                len += 1;
            }

            uint64_t* err = (uint64_t*)&g_SharedHcodeErrLogs[l_quadId];

            xgpe_qme_sram_access(l_quadId,
                                 g_xgpe_qme_etbl.elog[l_quadId].dw0.fields.errlog_addr,
                                 len,
                                 err);

            out32(G_OCB_OPITEPRD_CLR, l_tmp_pv_data);
        } //end of qme elog entries

    }
    while(0);

    g_oimr_override |= BITS64(30, 2);
    g_oimr_override |= BIT64(11);

    PK_TRACE("xgpe_irq_pcb_typeE_handler <<<");
}

///////////////////////////////////////////////
// xgpe_qme_sram_access
///////////////////////////////////////////////
void xgpe_qme_sram_access(uint32_t i_quadId,
                          uint32_t i_address,
                          uint32_t i_words_to_access,
                          uint64_t* o_data)
{
    uint64_t l_data64;
    uint64_t l_qscr;
    uint32_t l_sram_start_addr;
    uint32_t l_indx;

    PK_TRACE("xgpe_qme_sram_access qudId %d address %08x>>>", i_quadId, i_address);

    do
    {
        if (!i_address)
        {
            break;
        }

        //Check the ownership befre QME sram access
        PPE_GETSCOM(PPE_SCOM_ADDR_UC_Q(QME_FLAGS_RW, i_quadId), l_data64);
        PPE_GETSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSCR_RW, i_quadId), l_qscr);

        //TODO  RTC 212641 - handle timeout
        while (l_data64 & BIT64(QME_FLAGS_SRAM_SBE_MODE) || l_qscr & BIT64(0))
        {
            PPE_GETSCOM(PPE_SCOM_ADDR_UC_Q(QME_FLAGS_RW, i_quadId), l_data64);
            PPE_GETSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSCR_RW, i_quadId), l_qscr);
        }

        //Set the ownership bit
        PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_FLAGS_WO_OR, i_quadId), BIT64(QME_FLAGS_SRAM_GPE_MODE));

        // Set the QME SRAM address as defined by 16:28 (64k)
        l_sram_start_addr = i_address & 0x0000FFF8;
        l_data64 = (uint64_t)l_sram_start_addr << 32;
        PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSAR, i_quadId), l_data64);

        //Set auto increment
        PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSCR_WO_OR, i_quadId), BIT64(0));

        for (l_indx = 0; l_indx < i_words_to_access; l_indx++)
        {
            PPE_GETSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSAR, i_quadId), l_data64);
            PK_TRACE("ASAR %08x", l_data64 >> 32);
            PPE_GETSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSDR, i_quadId), l_data64);
            PK_TRACE("DATA1 %08x %08x", l_data64 >> 32, l_data64);
            *(o_data + l_indx) = l_data64;
        }

        //clear auto increment
        PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_QSCR_WO_CLEAR, i_quadId), BIT64(0));
        //Clear the ownership bit
        PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_FLAGS_WO_CLEAR, i_quadId), BIT64(QME_FLAGS_SRAM_GPE_MODE));
    }
    while(0);

    PK_TRACE("xgpe_qme_sram_access <<<");
}
