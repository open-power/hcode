/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_irq_handlers_fit.c $ */
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
//#include "p10_io_pwr.H"
#include "p10_io_pwr_types.H"
//#include "pstate_pgpe_occ_api.h"

#define IDDQ_FIT_SAMPLE_TICKS   8 //TODO RTC: 214486 Determine if this should be an attribute or hard-coded like this
const uint32_t FDIR_MC_WCLR = 0x6E0EFE47;
const uint32_t FDIR_MC_WOR  = 0x6E0EFE46;

extern XgpeHeader_t* G_xgpe_header_data;
uint32_t G_throttleOn = 0;
uint32_t G_throttleCount = 0;
uint32_t G_static_powr_mw = 0;
uint32_t G_io_done_once = 0;

extern uint32_t G_OCB_OCCFLG3_OR;
extern uint32_t G_OCB_OCCFLG3_CLR;
extern uint32_t G_OCB_OCCFLG3;
extern uint32_t G_OCB_OCCFLG6;
extern uint32_t G_OCB_OPITFSV;
extern uint32_t G_OCB_CCSR;
extern uint32_t G_OCB_OPITFPRD;
extern uint32_t G_OCB_OPITFSVRR;

void xgpe_eco_mode_update();
extern iddq_state_t G_iddq;

void xgpe_irq_fit_init()
{
    //Todo: Determine if XGPE should read OCC Shared SRAM from PGPE header
    HcodeOCCSharedData_t* occ_shared_data = (HcodeOCCSharedData_t*)G_xgpe_header_data->g_xgpe_sharedSramAddress;
    uint32_t c;

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
    occ_shared_data->iddq_activity_sample_depth = IDDQ_FIT_SAMPLE_TICKS;

    G_iddq.p_act_val =  (iddq_activity_t*)(G_xgpe_header_data->g_xgpe_sharedSramAddress +
                                           occ_shared_data->iddq_data_offset);
    G_iddq.p_wof_val =  (pgpe_wof_values_t*)(G_xgpe_header_data->g_xgpe_sharedSramAddress +
                        occ_shared_data->pgpe_data_offset);


    PK_TRACE("FIT: Initializing FIT p_act_val=0x%x p_wof_val=0x%x", (uint32_t)G_iddq.p_act_val,
             (uint32_t) G_iddq.p_wof_val);

    G_iddq.tick_cnt = 0;

    //Initialize each activity count to IDDQ_FIT_SAMPLE_TICKS(=8) for each core
    for (c = 0; c < MAX_CORES; c++)
    {
        G_iddq.p_act_val->act_val_core[c]  =  0x00000808;
    }

    //Update the activity counts for eco cores
    xgpe_eco_mode_update();
}

void xgpe_eco_mode_update()
{
    uint32_t c;
    uint32_t occflg6 = in32(G_OCB_OCCFLG6);

    for (c = 0; c < MAX_CORES; c++)
    {
        G_iddq.p_act_val->act_val[c][ACT_CNT_IDX_CORECLK_OFF]   = 0;
        G_iddq.p_act_val->act_val[c][ACT_CNT_IDX_CORE_VMIN]     = 0;
        G_iddq.p_act_val->act_val[c][ACT_CNT_IDX_MMA_OFF]       = 0;
        G_iddq.p_act_val->act_val[c][ACT_CNT_IDX_CORECACHE_OFF] = 0;


        if (occflg6 & CORE_MASK(c))
        {
            G_iddq.p_act_val->act_val[c][ACT_CNT_IDX_CORECLK_OFF]   = 0;
            G_iddq.p_act_val->act_val[c][ACT_CNT_IDX_CORE_VMIN]     = 0;
            G_iddq.p_act_val->act_val[c][ACT_CNT_IDX_MMA_OFF]       = 8;
            G_iddq.p_act_val->act_val[c][ACT_CNT_IDX_CORECACHE_OFF] = 8;
        }
    }
}

//
//  This is a periodic FIT Handler which is called up at fixed period
//  as determined by GPE_TIMER_SELECT register
//
void xgpe_irq_fit_handler()
{
    mtspr(SPRN_TSR, TSR_FIS);
    handle_error_inject();
    handle_pm_suspend();
    handle_wof_iddq_values();
    handle_core_throttle();
    compute_io_power();
}

void handle_error_inject()
{
    uint32_t l_occflg3;
    l_occflg3 = in32(G_OCB_OCCFLG3);

    if( l_occflg3 & BIT32(XGPE_HW_ERROR_INJECT))
    {
        out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR, BIT32(XGPE_HW_ERROR_INJECT));
        PK_TRACE("OCCFLG3[XGPE_HW_ERROR_INJECT]=1. Halting XGPE");
        IOTA_PANIC(XGPE_HW_ERROR_INJECT_TRAP);
    }

    if ( l_occflg3 & BITS32(XGPE_HCODE_ERROR_INJECT, XGPE_HCODE_ERROR_INJECT_LEN))
    {
        PK_TRACE("OCCFLG3[XGPE_HCODE_ERROR_INJECT]=0x3. FIT ERROR INJECT 0x%08x", l_occflg3);
        out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR, BITS32(XGPE_HCODE_ERROR_INJECT, XGPE_HCODE_ERROR_INJECT_LEN));

        xgpe_errl_create(XGPE_RC_HCODE_ERR_INJECT, 0, XGPE_MODID_FIT_HANDLER,
                         l_occflg3, 0xdeadbeef, 0xdeadbeef, ERRL_SEV_UNRECOVERABLE);
    }
}


extern XgpeHeader_t* _XGPE_IMG_HEADER __attribute__ ((section (".xgpe_image_header")));
///////////////////////////////////////////////////
// compute_io_power
///////////////////////////////////////////////////
void compute_io_power()
{
    uint32_t io_pgated_cntrlr = 0;
    uint64_t io_disable_lnks  = 0;
    XgpeHeader_t* l_header = (XgpeHeader_t*)&_XGPE_IMG_HEADER;
    HcodeOCCSharedData_t* occ_shared_data = (HcodeOCCSharedData_t*) OCC_SHARED_SRAM_ADDR_START;
    io_static_lnks_cntrls* static_lnk_cntlr = (io_static_lnks_cntrls*)XGPE_SRAM_IO_OFFSET_ADDR;
    uint32_t io_addr = XGPE_SRAM_IO_OFFSET_ADDR + sizeof(io_static_lnks_cntrls);
    controller_entry_t* io_cntrlr_data = (controller_entry_t*)io_addr;
    link_entry_t* io_lnk_data = (link_entry_t*)(io_addr + (sizeof(controller_entry_t) * NUM_IO_CNTRLS));

    uint32_t io_start = l_header->g_xgpe_ioStart;
    uint32_t io_step  = l_header->g_xgpe_ioStep;
    uint32_t io_count = l_header->g_xgpe_ioCount;
    uint32_t io_idx = 0;
    uint32_t io_idx_power = 0;
    uint32_t io_pwr_fraction = 0;
    uint32_t x = 0;
    uint32_t io_compute_state = 0;
    uint32_t powr_diff = 0;
    xgpe_wof_values_t* wof_io_values = (xgpe_wof_values_t*)&occ_shared_data->xgpe_wof_values;

    do
    {

        // RTC 283857 - this is to be removed once the updated I/O algorithm is available

        // This sets the I/O index to 4 to be modestly conservative.
        io_idx = 4;
        io_idx_power = io_start + (io_step * io_idx);
        // io_pwr_fraction is already 0.
        G_static_powr_mw = io_idx_power;

        wof_io_values->fields.io_power_proxy_0p01w = io_idx_power;
        wof_io_values->fields.io_index = (uint8_t)io_idx << 4; //OCC Shared SRAM io_index(1:3)

        if (!G_io_done_once)
        {
            PK_TRACE("Writing fixed I/O power %x, index %x and fraction %x to OCC sram", io_idx_power / 10, io_idx,
                     io_pwr_fraction);
            G_io_done_once = 1;
        }

        break;

        // End RTC 283857 - this is to be removed once the updated I/O algorithm is available

        if (G_static_powr_mw || io_compute_state)
        {
            break;
        }

        if(static_lnk_cntlr->io_magic ==
           0x53540000) //ST
        {
            PK_TRACE("xgpe_wof_values_t add %08x", (uint32_t)&occ_shared_data->xgpe_wof_values);
            io_pgated_cntrlr = static_lnk_cntlr->io_pwr_gated_cntrlrs;
            io_disable_lnks  = static_lnk_cntlr->io_disable_links;

            //Pgated power
            for ( x = EMO01; x < NUM_IO_CNTRLS; x++)
            {
                if (io_pgated_cntrlr & BIT32(x))
                {
                    G_static_powr_mw += io_cntrlr_data->base_power_mw;
                }

                io_cntrlr_data = (controller_entry_t*)(io_addr + (sizeof(controller_entry_t) * x));
            }

            io_addr = io_addr + (sizeof(controller_entry_t) * NUM_IO_CNTRLS);

            //Disable power
            for ( x = MC00_OMI0; x < NUMBER_OF_IO_LINKS; x++)
            {
                if (io_disable_lnks & BIT64(x))
                {
                    G_static_powr_mw += io_lnk_data->base_power_mw;
                }

                io_lnk_data = (link_entry_t*)(io_addr + (sizeof(link_entry_t) * x));
            }

            //compute io index from wof table
            //and update to occ sram
            if( G_static_powr_mw <= io_start )
            {
                io_idx = 0;
                io_idx_power = io_start;
                io_pwr_fraction = io_start;
                io_compute_state = 1;
            }
            else
            {
                for ( io_idx = 1; io_idx < io_count; ++io_idx)
                {
                    if (G_static_powr_mw <= (io_start + (io_step * io_idx)))
                    {
                        io_idx_power = io_start + (io_step * io_idx);
                        io_compute_state = 1;
                        break;
                    }
                }

                if ( io_idx == io_count)
                {
                    PK_TRACE("Didn't find any matching index from WOF table");
                    PK_TRACE("So considering the last index io powr value");
                    io_idx = io_count - 1;
                    io_idx_power = io_start + (io_step * io_idx);
                    G_static_powr_mw = io_idx_power;

                }


                powr_diff = io_idx_power  - (io_start + (io_step * io_idx ));

                if (powr_diff)
                {
                    io_pwr_fraction =
                        (io_idx_power - G_static_powr_mw) / powr_diff;
                }
            }

            if (G_static_powr_mw)
            {
                PK_TRACE("writing to occ sram %x %x %x", io_idx_power / 10, io_idx, io_pwr_fraction);
                wof_io_values->fields.io_power_proxy_0p01w = io_idx_power / 10;
                wof_io_values->fields.io_index = (uint8_t)io_idx << 4; //OCC Shared SRAM io_index(1:3)
                wof_io_values->fields.io_index = (uint8_t)io_pwr_fraction << 1; //SRAM io_index(4:6)
            }
        }
    }
    while(0);
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
            out64(FDIR_MC_WCLR, ((uint64_t)i_inject_response) << SHIFT64(21)); //Need to clear because of HW Issue
            //PK_TRACE("Set/Clear FDIR[20:21] =0x%08x",i_inject_response);
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
    uint32_t occflg6 = in32(G_OCB_OCCFLG6);

    opitasv0 = in32(TP_TPCHIP_OCC_OCI_OCB_OPITASV0);//Read PCB Type A0(Core off)
    opitasv1 = in32(TP_TPCHIP_OCC_OCI_OCB_OPITASV1);//Read PCB Type A1(Core Vmin)
    opitasv2 = in32(TP_TPCHIP_OCC_OCI_OCB_OPITASV2);//Read PCB Type A2(MMA Off)
    opitasv3 = in32(TP_TPCHIP_OCC_OCI_OCB_OPITASV3);//Read PCB Type A3(L3 Off)

    for (c = 0; c < MAX_CORES; c++)
    {
        if (in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW) & CORE_MASK(c) &&
            !(occflg6 & CORE_MASK(c))) //skip the cores which are in eco mode
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
        else if (!(occflg6 & CORE_MASK(c)))
        {
            G_iddq.curr_cnts.act_val[c][ACT_CNT_IDX_CORECACHE_OFF]++;
            G_iddq.curr_cnts.act_val[c][ACT_CNT_IDX_CORECLK_OFF]++;
        }
    }

    //G_iddq.vratio_vdd_accum += G_iddq.vratio_vdd_inst; //Accumulate the present vratios
    //G_iddq.vratio_vcs_accum += G_iddq.vratio_vcs_inst; //Accumulate the present vratios
    G_iddq.tick_cnt++;

    if(G_iddq.tick_cnt == IDDQ_FIT_SAMPLE_TICKS)
    {

        for (c = 0; c < MAX_CORES; c++)
        {
            if (in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW) & CORE_MASK(c))
            {
                G_iddq.p_act_val->act_val_core[c]  = G_iddq.curr_cnts.act_val_core[c];
                G_iddq.curr_cnts.act_val_core[c] = 0;
            }
        }

        //G_iddq.p_wof_val->dw0.fields.vratio_vdd_avg = G_iddq.vratio_vdd_accum / G_iddq.tick_cnt;
        //G_iddq.p_wof_val->dw0.fields.vratio_vcs_avg = G_iddq.vratio_vcs_accum / G_iddq.tick_cnt;
        //G_iddq.vratio_vdd_accum = 0;
        //G_iddq.vratio_vcs_accum = 0;
        G_iddq.tick_cnt = 0;
    }

}
