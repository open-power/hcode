/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_irq_handlers_fit.c $ */
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
#include "p10_scom_eq.H"
//#include "p10_scom_eq_7.H"
//#include "p10_scom_eq_3.H"
//#include "p10_scom_eq_2.H"

//using namespace scomt::eq;
#include "p10_oci_proc_1.H"
#include "p10_oci_proc_5.H"
#include "p10_oci_proc_7.H"
#include "p10_oci_proc_b.H"
#include "p10_oci_proc_d.H"
#include "pstates_common.H"
//#include "pstate_pgpe_occ_api.h"

#define IDDQ_FIT_SAMPLE_TICKS   8
const uint32_t FDIR_MC_WCLR = 0x6E0EFE47;
const uint32_t FDIR_MC_WOR  = 0x6E0EFE46;

extern XgpeHeader_t* G_xgpe_header_data;
uint32_t G_throttleOn = 0;
uint32_t G_throttleCount = 0;

extern uint32_t G_OCB_OCCFLG3_OR;
extern uint32_t G_OCB_OCCFLG3_CLR;
extern uint32_t G_OCB_OCCFLG3;
extern uint32_t G_OCB_OPITFSV;
extern uint32_t G_OCB_CCSR;
extern uint32_t G_OCB_OPITFPRD;
extern uint32_t G_OCB_OPITFSVRR;

extern iddq_state_t G_iddq;

void xgpe_irq_fit_init()
{
    //Todo: Determine if XGPE should read OCC Shared SRAM from PGPE header
    HcodeOCCSharedData_t* occ_shared_data = (HcodeOCCSharedData_t*)G_xgpe_header_data->g_xgpe_sharedSramAddress;
    //uint32_t c;

    occ_shared_data->magic = HCODE_OCC_SHARED_MAGIC_NUMBER_OPS2;
    occ_shared_data->occ_data_offset = offsetof(HcodeOCCSharedData_t, occ_wof_values);
    occ_shared_data->occ_data_length = sizeof(occ_wof_values_t);
    occ_shared_data->pgpe_data_offset = offsetof(HcodeOCCSharedData_t, pgpe_wof_values);
    occ_shared_data->pgpe_data_length = sizeof(pgpe_wof_values_t);
    occ_shared_data->xgpe_data_offset = offsetof(HcodeOCCSharedData_t, xgpe_wof_values);
    occ_shared_data->xgpe_data_length = sizeof(xgpe_wof_values_t);
    occ_shared_data->iddq_data_offset = offsetof(HcodeOCCSharedData_t, iddq_activity_values);
    occ_shared_data->iddq_data_length = sizeof(iddq_activity_t);
    occ_shared_data->error_log_offset = offsetof(HcodeOCCSharedData_t, errlog_idx);
    occ_shared_data->pstate_table_offset = offsetof(HcodeOCCSharedData_t, pstate_table);
    occ_shared_data->iddq_activity_sample_depth =
        8; //TODO RTC: 214486 Determine if this should be an attribute or hard-coded like this


    G_iddq.p_act_val =  (iddq_activity_t*)(G_xgpe_header_data->g_xgpe_sharedSramAddress +
                                           occ_shared_data->iddq_data_offset);
    G_iddq.p_wof_val =  (pgpe_wof_values_t*)(G_xgpe_header_data->g_xgpe_sharedSramAddress +
                        occ_shared_data->iddq_data_offset);
}

//
//  This is a periodic FIT Handler which is called up at fixed period
//  as determined by GPE_TIMER_SELECT register
//
void xgpe_irq_fit_handler()
{
    mtspr(SPRN_TSR, TSR_FIS);
    handle_pm_suspend();
    handle_wof_iddq_values();
    handle_core_throttle();
}

///////////////////////////////////////////////////
//handle_core_throttle
///////////////////////////////////////////////////
void handle_core_throttle()
{
    uint32_t l_occflg3;
    uint32_t force_legacy_throttle = 0;
    uint32_t l_inject_response = 0;

    l_occflg3 = in32(G_OCB_OCCFLG3);
    l_inject_response = (l_occflg3 & BITS32(CORE_THROT_INJECT_RESP, CORE_THROT_INJECT_RESP_LEN)) >> 3;

    if( l_occflg3 & BIT32(CORE_THROT_CONTIN_CHANGE_ENABLE) ||
        l_occflg3 & BIT32(CORE_THROT_SINGLE_EVENT_INJECT))
    {
        uint32_t xgpe_throttle_assert   = G_xgpe_header_data->g_xgpe_coreThrottleAssertCnt;
        uint32_t xgpe_throttle_deassert = G_xgpe_header_data->g_xgpe_coreThrottleDeAssertCnt;
        force_legacy_throttle = l_occflg3 & BIT32(FORCE_LEGACY_THROTTLE);


        //if currently off, we don't desire always off, this is the first evaluation since become enabled, we are in always on,
        //or we (re enabled and have reached the count, then we turn throttling on (if both assert and deassert are 0 this statement fails)
        if(!G_throttleOn && xgpe_throttle_assert != 0 &&
           (G_throttleCount == 0 || xgpe_throttle_deassert == 0 || xgpe_throttle_deassert == G_throttleCount))
        {
            G_throttleOn = 1;
            G_throttleCount = 0;

            if (force_legacy_throttle)
            {
                out64(FDIR_MC_WCLR, ((uint64_t)FDIR_THROTTLE_DATA << 32));
                out64(FDIR_MC_WOR, ((uint64_t)FDIR_THROTTLE_LEGACY << 32));
            }
        }

        //if currently on and we desire always off or we don't desire always on and have reached the count,
        //then we turn it off (if both assert and deassert are 0 this statement true)
        else if(G_throttleOn &&
                (xgpe_throttle_assert == 0 || ( xgpe_throttle_deassert != 0 && xgpe_throttle_assert == G_throttleCount)))
        {
            //Clear inject enable bit
            G_throttleOn = 0;
            G_throttleCount = 0;

        }

        if (G_throttleCount == 0)
        {
            xgpe_write_core_throttle_data(G_throttleOn, l_inject_response);
        }

        G_throttleCount++;
    }
    // disable throttle if no longer have a continuous or single inject active
    else
    {
        if (G_throttleCount)
        {
            //Clear inject enable bit
            G_throttleOn = 0;
            G_throttleCount = 0;
            xgpe_write_core_throttle_data(G_throttleOn, l_inject_response);
        }
    }

}

///////////////////////////////////////////////////
//xgpe_write_core_throttle_data
///////////////////////////////////////////////////
void xgpe_write_core_throttle_data(uint32_t i_throttle_state,
                                   uint32_t i_inject_response)
{
    uint32_t mc_addr = i_throttle_state ? FDIR_MC_WOR : FDIR_MC_WCLR;

    if ( i_inject_response )
    {
        if (i_throttle_state)
        {
            //set the new value IRRITATE_INJECT_RESPONSE (20:21)
            out64(FDIR_MC_WOR, ((uint64_t)i_inject_response) << SHIFT64(21));
        }
    }
    else
    {
        out64(mc_addr, ((uint64_t) FDIR_INJECT_ENABLE << 32));
    }
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
        if (G_xgpe_header_data->g_xgpe_xgpeFlags & XGPE_OCC_PM_SUSPEND_IMMEDIATE_MODE)
        {
            out32(G_OCB_OCCFLG3_OR, BIT32(XGPE_PM_COMPLEX_SUSPENDED));
        }
        else
        {
            G_xgpe_header_data->g_xgpe_xgpeFlags = XGPE_PM_SUSPEND_MODE;
#ifdef SIMICS_TUNING

            for (l_quad = 1; l_quad <= MAX_QUADS; ++l_quad)
            {
                if (IS_QUAD_CONFIG(l_ccsr, (l_quad << 2)))
                {
                    //Change the PMCR ownership to scom
                    PPE_PUTSCOM(PPE_SCOM_ADDR_UC_Q(QME_QMCR_SCOM2, (l_quad - 1)),
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
            PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(QME_QMCR_SCOM2, 0xF),
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

void handle_wof_iddq_values()
{
    uint32_t c;
    uint32_t opitasv0;
    uint32_t opitasv1;
    uint32_t opitasv2;
    uint32_t opitasv3;

    opitasv0 = in32(TP_TPCHIP_OCC_OCI_OCB_OPITASV0);//Read PCB Type A0(Core off)
    opitasv1 = in32(TP_TPCHIP_OCC_OCI_OCB_OPITASV1);//Read PCB Type A1(Core Vmin)
    opitasv2 = in32(TP_TPCHIP_OCC_OCI_OCB_OPITASV2);//Read PCB Type A2(MMA Off)
    opitasv3 = in32(TP_TPCHIP_OCC_OCI_OCB_OPITASV3);//Read PCB Type A3(L3 Off)

    for (c = 0; c < MAX_CORES; c++)
    {
        if (in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW) & CORE_MASK(c))
        {
            //if core is ON/VMIN(0) and VMIN(0))
            if ( (!(opitasv0 & CORE_MASK(c))) && !(opitasv1 & CORE_MASK(c)))
            {
                //if core MMA is OFF(1)
                if (opitasv2 & CORE_MASK(c))
                {
                    G_iddq.curr_cnts.act_val[c][ACT_CNT_IDX_MMA_OFF]++;
                }
            }
            //if core c is Vmin(1)
            else if ((opitasv1 & CORE_MASK(c)))
            {
                G_iddq.curr_cnts.act_val[c][ACT_CNT_IDX_CORE_VMIN]++;
            }
            else if (opitasv0 & CORE_MASK(c))
            {
                G_iddq.curr_cnts.act_val[c][ACT_CNT_IDX_CORECLK_OFF]++;
            }

            if (opitasv3 & CORE_MASK(c))
            {
                G_iddq.curr_cnts.act_val[c][ACT_CNT_IDX_CORECACHE_OFF]++;
            }
        }
        else
        {
            G_iddq.curr_cnts.act_val[c][ACT_CNT_IDX_CORECACHE_OFF]++;
        }
    }

    G_iddq.vratio_accum += G_iddq.vratio_inst; //Accumulate the present vratios
    G_iddq.tick_cnt++;

    if(G_iddq.tick_cnt == IDDQ_FIT_SAMPLE_TICKS)
    {
        //TODO Fixme RTC 256834
#if 0
        while(in32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_RW) & BIT32(PGPE_EX_RATIOS_ATOMIC_FLAG))
        {
            //TODO add busy-wait timeout(20us)
            //Determine what XGPE needs to do here.
        }

#endif

        for (c = 0; c < MAX_CORES; c++)
        {
            if (in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW) & CORE_MASK(c))
            {
                G_iddq.p_act_val->act_val_core[c]  = G_iddq.curr_cnts.act_val_core[c];
                G_iddq.curr_cnts.act_val_core[c] = 0;
            }
        }

        out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_WO_OR, BIT32(PGPE_EX_RATIOS_ATOMIC_FLAG));
        G_iddq.p_wof_val->dw0.fields.vratio_avg = G_iddq.vratio_accum / G_iddq.tick_cnt;
        G_iddq.vratio_accum = 0;
        G_iddq.tick_cnt = 0;
    }

}
