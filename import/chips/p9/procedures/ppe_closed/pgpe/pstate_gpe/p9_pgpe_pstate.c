/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_pstate.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2019                                                    */
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
#include "p9_pgpe.h"
#include "pstate_pgpe_cme_api.h"
#include "p9_pstates_common.h"
#include "p9_pgpe_gppb.h"
#include "p9_pgpe_boot_temp.h"
#include "avs_driver.h"
#include "p9_dd1_doorbell_wr.h"
#include "p9_pgpe_pstate.h"
#include "pstate_pgpe_occ_api.h"
#include "wof_sgpe_pgpe_api.h"
#include "p9_pgpe_header.h"
#include "p9_pgpe_optrace.h"
#include "ppe42_cache.h"
#include "stop_sgpe_cme_api.h"

//
//#Defines
//
#define GPE_BUFFER(declaration) \
    declaration __attribute__ ((__aligned__(8))) __attribute__ ((section (".noncacheable")))

//
//Global External Data
//
extern TraceData_t G_pgpe_optrace_data;
extern PgpeHeader_t* G_pgpe_header_data;
extern GlobalPstateParmBlock* G_gppb;
extern uint32_t G_ext_vrm_inc_rate_mult_usperv;
extern uint32_t G_ext_vrm_dec_rate_mult_usperv;
extern PgpePstateRecord G_pgpe_pstate_record;
extern void p9_pgpe_ipc_ack_sgpe_ctrl_stop_updt(ipc_msg_t* msg, void* arg);
extern void p9_pgpe_ipc_ack_sgpe_suspend_stop(ipc_msg_t* msg, void* arg);

//
//Global Data
//
GPE_BUFFER(ipc_async_cmd_t G_ipc_msg_pgpe_sgpe);
GPE_BUFFER(ipcmsg_p2s_ctrl_stop_updates_t G_sgpe_control_updt);
GPE_BUFFER(ipcmsg_p2s_suspend_stop_t G_sgpe_suspend_stop);

//Local Functions
void p9_pgpe_handle_nacks(uint32_t origCoreVector, uint32_t origAckVector, uint32_t expectedAcks, uint64_t db3val);
void p9_pgpe_pstate_freq_updt();
void p9_pgpe_pstate_wov_init();
inline void p9_pgpe_droop_throttle() __attribute__((always_inline));
inline void p9_pgpe_droop_unthrottle() __attribute__((always_inline));

//
//  p9_pgpe_pstate_init
//
//  This function initializes all non-zero values in G_pgpe_pstate_record.
//  To begin with all the fields in the structure are set to zero(see p9_pgpe_main.c).
//  Here only non-zero values are set
//
void p9_pgpe_pstate_init()
{
    uint32_t q;

    G_pgpe_pstate_record.pstatesStatus = PSTATE_INIT;

    if (G_gppb->safe_frequency_khz)
    {
        // As the safe frequency (eg Pstate) needs to be FASTER than the core floor,
        // truncate the resultant computation to the lower integer value (Pstate)
        // to have the higher frequency
        G_pgpe_pstate_record.safePstate = (G_gppb->reference_frequency_khz - G_gppb->safe_frequency_khz) /
                                          G_gppb->frequency_step_khz;
    }
    else
    {
        G_pgpe_pstate_record.safePstate = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        PK_TRACE_DBG("Safe Frequency is NOT set.  Using POWERSAVE as Pstate as safe");
    }

    sys_ps_t safePS;

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_pstate_record.psClipMax[q] = G_pgpe_pstate_record.safePstate;
        G_pgpe_pstate_record.psClipMin[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][ULTRA].pstate;
        safePS.fields.quads[q] = G_pgpe_pstate_record.safePstate;

    }

    safePS.fields.glb = G_pgpe_pstate_record.safePstate;
    G_pgpe_pstate_record.psComputed.value = safePS.value;
    G_pgpe_pstate_record.psTarget.value = safePS.value;
    G_pgpe_pstate_record.psCurr.value = safePS.value;
    G_pgpe_pstate_record.psNext.value = safePS.value;

    // The following overlay is done so allow external tooling to use
    // the earlier version of header (pre-adding the good_cores_in_sort
    // field in the options.pad word)
    GPPBOptionsPadUse pad;
    pad = (GPPBOptionsPadUse)G_gppb->options.pad;

    G_pgpe_pstate_record.numSortCores = pad.fields.good_cores_in_sort;

    //Init OCC Shared SRAM
    G_pgpe_pstate_record.pQuadState0 = (quad_state0_t*)G_pgpe_header_data->g_quad_status_addr;
    G_pgpe_pstate_record.pQuadState1 = (quad_state1_t*)(G_pgpe_header_data->g_quad_status_addr + 8);
    G_pgpe_pstate_record.pReqActQuads = (requested_active_quads_t*)(G_pgpe_header_data->g_pgpe_req_active_quad_address);
    G_pgpe_pstate_record.pWofValues = (pgpe_wof_values_t*)(G_pgpe_header_data->g_pgpe_wof_values_address);
    G_pgpe_pstate_record.pQuadState0->fields.quad0_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.quad1_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.quad2_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.quad3_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.active_cores = 0;
    G_pgpe_pstate_record.pQuadState1->fields.quad4_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState1->fields.quad5_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState1->fields.active_cores = 0x0;
    G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads = 0x0;
    G_pgpe_pstate_record.activeCoreUpdtAction = ACTIVE_CORE_UPDATE_ACTION_ERROR;
    G_pgpe_pstate_record.pWofValues->dw0.value = 0;
    G_pgpe_pstate_record.pWofValues->dw1.value = 0;
    G_pgpe_pstate_record.pWofValues->dw2.value = 0;
    G_pgpe_pstate_record.pWofValues->dw3.value = 0;
    G_pgpe_pstate_record.prevIdd = 0;
    G_pgpe_pstate_record.prevIdn = 0;
    G_pgpe_pstate_record.prevVdd = 0;
    G_pgpe_pstate_record.vddCurrentThresh = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][TURBO].idd_100ma;
    G_pgpe_pstate_record.excessiveDroop = 0;

    //Create Semaphores
    pk_semaphore_create(&(G_pgpe_pstate_record.sem_actuate), 0, 1);
    pk_semaphore_create(&(G_pgpe_pstate_record.sem_sgpe_wait), 0, 1);
    pk_semaphore_create(&(G_pgpe_pstate_record.sem_process_req), 0, 1);

    //WOV init
    p9_pgpe_pstate_wov_init();

    //Initialize avs_driver
    avs_driver_init();

    HcodeOCCSharedData_t* occ_shared_data = (HcodeOCCSharedData_t*)
                                            OCC_SHARED_SRAM_ADDR_START; //Bottom 2K of PGPE OCC Sram Space

    if (in32(OCB_OCCFLG2) & BIT32(OCCFLG2_ENABLE_PRODUCE_WOF_VALUES))
    {
        //Write the magic number in the HcodeOCCSharedData struct
        occ_shared_data->magic = HCODE_OCC_SHARED_MAGIC_NUMBER_OPS1;
        G_pgpe_pstate_record.produceWOFValues = 1;

        //Read VDN Voltage. On P9, VDN is NOT updated by PGPE, so we read it
        //once during init and then don't read it all
        uint32_t vdn = 0;
        avs_driver_voltage_read(G_gppb->avs_bus_topology.vdn_avsbus_num, G_gppb->avs_bus_topology.vdn_avsbus_rail, &vdn);
        G_pgpe_pstate_record.pWofValues->dw2.fields.vdn_avg_mv = vdn;
    }
    else
    {
        occ_shared_data->magic = HCODE_OCC_SHARED_MAGIC_NUMBER_OPS0;
        G_pgpe_pstate_record.produceWOFValues = 0;
    }
}

//
//  p9_pgpe_pstate_setup_process_pcb_type4
//
//  This is called only once during PGPE boot(actuate thread initialization)
//  It reads any pending opit4pr aka CME registration messages from
//  Quad Manager CME, and updates the list of activeQuad and activeCores.
//  Finally, it unmasks PCB_TYPE4 interrupt for future CME registration msgs
//
void p9_pgpe_pstate_setup_process_pcb_type4()
{
    ocb_ccsr_t ccsr;
    uint32_t opit4pr, opit4prQuad, q, c;
    opit4pr = in32(OCB_OPIT4PRA); //Read current opit4pr
    ccsr.value = in32(OCB_CCSR);

    for (q = 0; q < MAX_QUADS; q++)
    {
        opit4prQuad = (opit4pr >> ((MAX_QUADS - q + 1) << 2)) & 0xf;

        if (opit4prQuad)
        {
            G_pgpe_pstate_record.activeQuads |= QUAD_MASK(q);

            for (c = FIRST_CORE_FROM_QUAD(q); c < LAST_CORE_FROM_QUAD(q); c++)
            {
                if (ccsr.value & CORE_MASK(c))
                {
                    G_pgpe_pstate_record.activeDB |= CORE_MASK(c);
                }
            }
        }
    }

    //Fill OCC Shared Memory Area fields
    G_pgpe_pstate_record.activeCores = G_pgpe_pstate_record.activeDB;
    G_pgpe_pstate_record.pQuadState0->fields.active_cores = (G_pgpe_pstate_record.activeCores >> 16);
    G_pgpe_pstate_record.pQuadState1->fields.active_cores = (G_pgpe_pstate_record.activeCores & 0xFF00);
    G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads =  G_pgpe_pstate_record.activeQuads;

    PK_TRACE_DBG("PCB4: ActiveQuads=0x%x ActiveDB=0x%x, ActiveCores=0x%x opit4pr=0x%x\n", G_pgpe_pstate_record.activeQuads,
                 G_pgpe_pstate_record.activeDB, G_pgpe_pstate_record.activeCores, opit4pr,);

    //Enable PCB_INTR_TYPE4
    out32(OCB_OPIT4PRA_CLR, opit4pr);
    out32(OCB_OISR1_CLR, BIT32(17));
    g_oimr_override &= ~BIT64(49);
    out32(G_OCB_OIMR1_CLR, BIT32(17));
}

//
//  p9_pgpe_pstate_ipc_rsp_cb_sem_post
//
void p9_pgpe_pstate_ipc_rsp_cb_sem_post(ipc_msg_t* msg, void* arg)
{
    pk_semaphore_post((PkSemaphore*)arg);
}

//
//  p9_pgpe_pstate_do_auction
//
//  This function does the Pstate Auction. First, it does the local auction for
//  each active quad, and then global auction among all quads.
//  It reads from coresPSRequest structure, and produces auction results in
//  psComputed
//
void p9_pgpe_pstate_do_auction()
{
    PK_TRACE_DBG("AUC: Start");
    uint32_t q, c;

    //Local PStates Auction
    for (q = 0; q < MAX_QUADS; q++)
    {
        //Make sure quad is active
        if (G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {
            //Go through all the cores in this quad with pending request
            //and find the lowest numbered PState.  Pstate cannot be greater that
            //the safe Pstate.
            G_pgpe_pstate_record.psComputed.fields.quads[q] = G_pgpe_pstate_record.safePstate;

            for (c = FIRST_CORE_FROM_QUAD(q); c < LAST_CORE_FROM_QUAD(q); c++)
            {
                //If WOF_Enabled, only then activeCores is updated and represent the accurate state of activeCores.
                //Otherwise, activeDB represents which cores are active.
                //In the latter case, STOP 11 Entry/Exit can modify which cores are active
                if ((G_pgpe_pstate_record.wofStatus == WOF_ENABLED && (G_pgpe_pstate_record.activeCores & CORE_MASK(c))) ||
                    (G_pgpe_pstate_record.activeDB & CORE_MASK(c)))
                {
                    if (G_pgpe_pstate_record.psComputed.fields.quads[q] > G_pgpe_pstate_record.coresPSRequest[c])
                    {
                        G_pgpe_pstate_record.psComputed.fields.quads[q] = G_pgpe_pstate_record.coresPSRequest[c];
                    }
                }
            }
        }
        else
        {
            G_pgpe_pstate_record.psComputed.fields.quads[q] = 0xFF;
        }

    }

    //Global PState Auction
    G_pgpe_pstate_record.psComputed.fields.glb = G_pgpe_pstate_record.safePstate;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {
            if (G_pgpe_pstate_record.psComputed.fields.glb  > G_pgpe_pstate_record.psComputed.fields.quads[q])
            {
                G_pgpe_pstate_record.psComputed.fields.glb  = G_pgpe_pstate_record.psComputed.fields.quads[q];
            }

            PK_TRACE_INF("AUC: psComputed[%d]=0x%x", q, G_pgpe_pstate_record.psComputed.fields.quads[q]);
        }
    }

    PK_TRACE_INF("AUC: psComputed[glb]=0x%x", G_pgpe_pstate_record.psComputed.fields.glb);
}

//
//  p9_pgpe_pstate_apply_clips
//
//  This function applies the clips to currently computer local and global pstates.
//  And, generates the target local and global pstates in the psTarget field
void p9_pgpe_pstate_apply_clips()
{
    PK_TRACE_DBG("APC: Applying Clips");
    uint32_t q;

    //Apply Clips to Local Pstate
    for (q = 0; q < MAX_QUADS; q++)
    {
        uint8_t minPS = G_pgpe_pstate_record.psClipMin[q];
        uint8_t maxPS = G_pgpe_pstate_record.psClipMax[q] < G_pgpe_pstate_record.safePstate ?
                        G_pgpe_pstate_record.psClipMax[q] : G_pgpe_pstate_record.safePstate;

        if (G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {

            //If wof is enabled, then also take into WOF Clip
            if (G_pgpe_pstate_record.wofStatus == WOF_ENABLED)
            {
                if (G_pgpe_pstate_record.wofClip > minPS && (G_pgpe_pstate_record.wofClip < maxPS))
                {
                    minPS = G_pgpe_pstate_record.wofClip;
                }
                else if (G_pgpe_pstate_record.wofClip >= maxPS)
                {
                    minPS = maxPS;
                }
            }

            //Clip the pstates if outside the bounds of clips
            if (G_pgpe_pstate_record.psComputed.fields.quads[q] > maxPS)
            {
                G_pgpe_pstate_record.psTarget.fields.quads[q] = maxPS;
            }
            else if(G_pgpe_pstate_record.psComputed.fields.quads[q] < minPS)
            {
                G_pgpe_pstate_record.psTarget.fields.quads[q] = minPS;
            }
            else
            {
                G_pgpe_pstate_record.psTarget.fields.quads[q] = G_pgpe_pstate_record.psComputed.fields.quads[q];
            }
        }
        else
        {
            G_pgpe_pstate_record.psTarget.fields.quads[q] = 0xFF;
            G_pgpe_pstate_record.psCurr.fields.quads[q] = 0xFF;
            G_pgpe_pstate_record.psNext.fields.quads[q] = 0xFF;
        }
    }

    //Determine the target global pstate(lowest value)
    G_pgpe_pstate_record.psTarget.fields.glb = G_pgpe_pstate_record.safePstate;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {
            if (G_pgpe_pstate_record.psTarget.fields.glb  > G_pgpe_pstate_record.psTarget.fields.quads[q])
            {
                G_pgpe_pstate_record.psTarget.fields.glb  = G_pgpe_pstate_record.psTarget.fields.quads[q];
            }

            PK_TRACE_INF("AUC: psTarget[%d]=0x%x", q, G_pgpe_pstate_record.psTarget.fields.quads[q]);
        }
    }

    PK_TRACE_INF("AUC: psTarget[glb]=0x%x", G_pgpe_pstate_record.psTarget.fields.glb);
    G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.psTarget.fields.quads[2] << 24) |
                                  (G_pgpe_pstate_record.psTarget.fields.quads[3] << 16) |
                                  (G_pgpe_pstate_record.psTarget.fields.quads[4] << 8) |
                                  G_pgpe_pstate_record.psTarget.fields.quads[5];
    G_pgpe_optrace_data.word[1] = (AUCTION_DONE << 24) |
                                  (G_pgpe_pstate_record.psTarget.fields.glb << 16) |
                                  (G_pgpe_pstate_record.psTarget.fields.quads[0] << 8) |
                                  G_pgpe_pstate_record.psTarget.fields.quads[1];
    p9_pgpe_optrace(AUCTION_DONE);
}

//
//  p9_pgpe_pstate_calc_wof
//
//  This function determines the wofClip by calculating current
//  vratio and vindex, and then indexing into the current VFRT table
//
void p9_pgpe_pstate_calc_wof()
{
    PK_TRACE_DBG("WFC: Calc WOF");

    //1. Fratio calc
    //look at attributes
    //Currently, PGPE only supports FRATIO fixed mode.
    G_pgpe_pstate_record.fratio = 1;
    G_pgpe_pstate_record.findex = 0;

    //2. Vratio calc and VFRT table lookup
    //Currently, PGPE only support VRATIO Fixed and VRATIO active cores only
    if (G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_ENABLE_VRATIO)
    {
        G_pgpe_pstate_record.vratio = (G_pgpe_pstate_record.numActiveCores * MAX_VRATIO) / (G_pgpe_pstate_record.numSortCores);

        // Note we separate out numActiveCores = 0 case. Otherwise, subtracting 1 will
        // result in invalid vindex
        if (G_pgpe_pstate_record.numActiveCores != 0)
        {
            G_pgpe_pstate_record.vindex = (((24 * G_pgpe_pstate_record.vratio) + VRATIO_ROUNDING_ADJUST) / MAX_VRATIO) - 1;
        }
        else
        {
            G_pgpe_pstate_record.vindex = 0;
        }
    }
    else
    {
        G_pgpe_pstate_record.vratio = MAX_VRATIO; //0xFFFF
        G_pgpe_pstate_record.vindex = VFRT_VRATIO_SIZE - 1;
    }

    //3. Update wofClip(int. variable)
    G_pgpe_pstate_record.wofClip =
        G_pgpe_pstate_record.pVFRT->vfrt_data[G_pgpe_pstate_record.findex][G_pgpe_pstate_record.vindex];

    PK_TRACE_INF("WFC: FClip_PS=0x%x, vindex=0x%x, vratio=0x%x", G_pgpe_pstate_record.wofClip, G_pgpe_pstate_record.vindex,
                 G_pgpe_pstate_record.vratio);
    p9_pgpe_pstate_apply_clips();
    G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.vratio << 16) |
                                  (G_pgpe_pstate_record.fratio << 8);
    G_pgpe_optrace_data.word[1] = (WOF_CALC_DONE << 24) |
                                  (G_pgpe_pstate_record.wofClip << 16) |
                                  (G_pgpe_pstate_record.activeQuads << 8) |
                                  G_pgpe_pstate_record.numActiveCores;
    p9_pgpe_optrace(WOF_CALC_DONE);
}

//
//  p9_pgpe_pstate_update_wof_state
//
//  This function updates the wof state in the OCC Shared SRAM area
//
void p9_pgpe_pstate_update_wof_state()
{
    PK_TRACE_DBG("WFU: Updt WOF Shr Sram");
    pgpe_wof_state_t* wof_state = (pgpe_wof_state_t*)G_pgpe_header_data->g_pgpe_wof_state_address;
    wof_state->fields.fclip_ps = G_pgpe_pstate_record.wofClip;
    wof_state->fields.vclip_mv = G_pgpe_pstate_record.extVrmCurr;
    wof_state->fields.fratio = G_pgpe_pstate_record.fratio;
    wof_state->fields.vratio = G_pgpe_pstate_record.vratio;
    PK_TRACE_INF("WFU: FClip_PS=0x%x, vindex=0x%x, vratio=0x%x", G_pgpe_pstate_record.wofClip, G_pgpe_pstate_record.vindex,
                 G_pgpe_pstate_record.vratio);

}

//
//  p9_pgpe_pstate_update_wof_produced_values
//
//  This function updates the wof produced values in the OCC Shared SRAM area
//
void p9_pgpe_pstate_update_wof_produced_values()
{
    uint32_t current;

    avs_driver_current_read(G_gppb->avs_bus_topology.vdd_avsbus_num, G_gppb->avs_bus_topology.vdd_avsbus_rail, &current);
    PK_TRACE_DBG("VDD Current=0x%x, BusNum=0x%x, RailNum=0x%x", current, G_gppb->avs_bus_topology.vdd_avsbus_num,
                 G_gppb->avs_bus_topology.vdd_avsbus_rail);

    G_pgpe_pstate_record.pWofValues->dw1.fields.idd_avg_ma = (G_pgpe_pstate_record.prevIdd + current) >> 1;
    G_pgpe_pstate_record.prevIdd = current;

    avs_driver_current_read(G_gppb->avs_bus_topology.vdn_avsbus_num, G_gppb->avs_bus_topology.vdn_avsbus_rail, &current);
    PK_TRACE_DBG("VDN Current=0x%x, BusNum=0x%x, RailNum=0x%x", current, G_gppb->avs_bus_topology.vdn_avsbus_num,
                 G_gppb->avs_bus_topology.vdn_avsbus_rail);

    G_pgpe_pstate_record.pWofValues->dw1.fields.idn_avg_ma = (G_pgpe_pstate_record.prevIdn + current) >> 1;
    G_pgpe_pstate_record.prevIdn = current;

    G_pgpe_pstate_record.pWofValues->dw2.fields.vdd_avg_mv = (G_pgpe_pstate_record.prevVdd +
            G_pgpe_pstate_record.extVrmCurr) >> 1;
    G_pgpe_pstate_record.prevVdd = G_pgpe_pstate_record.extVrmCurr;


    uint32_t avg_pstate = 0;
    uint32_t q, num = 0;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {
            avg_pstate += G_pgpe_pstate_record.psComputed.fields.quads[q];
            num = num + 1;
        }
    }

    if (num > 0)
    {
        G_pgpe_pstate_record.pWofValues->dw0.fields.average_pstate = ((avg_pstate / num) + G_pgpe_pstate_record.prevAvgPstate)
                >> 1;
        G_pgpe_pstate_record.pWofValues->dw0.fields.average_frequency_pstate =
            G_pgpe_pstate_record.pWofValues->dw0.fields.average_pstate;
        G_pgpe_pstate_record.prevAvgPstate = G_pgpe_pstate_record.pWofValues->dw0.fields.average_pstate;
    }

    G_pgpe_pstate_record.pWofValues->dw0.fields.clip_pstate = G_pgpe_pstate_record.wofClip;
    G_pgpe_pstate_record.pWofValues->dw0.fields.vratio_inst = G_pgpe_pstate_record.vratio;
    G_pgpe_pstate_record.pWofValues->dw0.fields.vratio_avg  = (G_pgpe_pstate_record.vratio +
            G_pgpe_pstate_record.prevVratio) >> 1;
    G_pgpe_pstate_record.prevVratio = G_pgpe_pstate_record.vratio;

}

//
//  p9_pgpe_pstate_updt_actual_quad
//
//  Updates OCC Shared SRAM "quad_pstate" fields
void p9_pgpe_pstate_updt_actual_quad()
{
    PK_TRACE_DBG("SRM: Updt Quad Shr Sram");

    G_pgpe_pstate_record.pQuadState0->fields.quad0_pstate = G_pgpe_pstate_record.psCurr.fields.quads[0];
    G_pgpe_pstate_record.pQuadState0->fields.quad1_pstate = G_pgpe_pstate_record.psCurr.fields.quads[1];
    G_pgpe_pstate_record.pQuadState0->fields.quad2_pstate = G_pgpe_pstate_record.psCurr.fields.quads[2];
    G_pgpe_pstate_record.pQuadState0->fields.quad3_pstate = G_pgpe_pstate_record.psCurr.fields.quads[3];
    G_pgpe_pstate_record.pQuadState1->fields.quad4_pstate = G_pgpe_pstate_record.psCurr.fields.quads[4];
    G_pgpe_pstate_record.pQuadState1->fields.quad5_pstate = G_pgpe_pstate_record.psCurr.fields.quads[5];
}

//
//  p9_pgpe_send_db0
//
//  Generic function to send DB0(Doorbell0) to CMEs
//  Note: PGPE can only send one doorbell3 or doorbell0 at a time
//
//  p - Set of parameters filled up the caller of this function
//
void p9_pgpe_send_db0(db0_parms_t p)
{

    uint32_t c;
    G_pgpe_pstate_record.quadsNACKed = 0;

    PK_TRACE_INF("SDB: Send DB0 db0=0x%x tgtCores=0x%x,MultiNotUnicast=0x%x,expectedAckFrom(Quads)=0x%x", p.db0val >> 32,
                 p.targetCores, p.type,
                 p.expectedAckFrom);

    //In case of unicast, only write DB0 for active cores. However, in case of
    //multicast just write DB0 of every configured core, but care only about active cores.

    if (p.type == PGPE_DB0_TYPE_UNICAST)
    {
        for (c = 0; c < MAX_CORES; c++)
        {
            if (p.targetCores & CORE_MASK(c))
            {
#if NIMBUS_DD_LEVEL == 10
                p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEDB0, c), p.db0val);
#else
                GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB0, c), p.db0val)
#endif
            }
        }
    }
    else
    {
#if NIMBUS_DD_LEVEL == 10
        p9_dd1_db_multicast_wr(PCB_MULTICAST_GRP1 | CPPM_CMEDB0, p.db0val, p.targetCores);
#else
        GPE_PUTSCOM(PCB_MULTICAST_GRP1 | CPPM_CMEDB0, p.db0val)
#endif
    }

    if (p.waitForAcks == PGPE_DB_ACK_WAIT_CME)
    {
        p9_pgpe_wait_cme_db_ack(p.expectedAckFrom, p.expectedAckValue); //Wait for ACKs from QuadManagers

        if(G_pgpe_pstate_record.quadsNACKed)
        {
            uint64_t val = (uint64_t)MSGID_DB3_REPLAY_DB0 << 56;
            p9_pgpe_handle_nacks(p.targetCores, p.expectedAckFrom, p.expectedAckValue, val);
        }
    }
}

//
//  p9_pgpe_send_db3
//
//  Generic function to send Doorbell3 to CME
//  Note: PGPE can only send one doorbell3 or doorbell0 at a time
//
//  p - Set of parameters filled up the caller of this function
//
void p9_pgpe_send_db3(db3_parms_t p)
{
    uint32_t c;

    PK_TRACE_INF("SDB: Send DB3 db3val=0x%08x db0val=0x%08x tgtCores=0x%x,expectedAckFrom(Quads)=0x%x", p.db3val >> 32,
                 p.db0val >> 32, p.targetCores,
                 p.expectedAckFrom);

    for (c = 0; c < MAX_CORES; c++)
    {
        if (p.targetCores & CORE_MASK(c))
        {
            if(p.writeDB0 == PGPE_DB3_WRITE_DB0)
            {
                GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB0, c), p.db0val)
            }

            GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB3, c), p.db3val)
        }
    }

    if (p.waitForAcks == PGPE_DB_ACK_WAIT_CME)
    {
        p9_pgpe_wait_cme_db_ack(p.expectedAckFrom, p.expectedAckValue); //Wait for ACKs from QuadManagers

        if(G_pgpe_pstate_record.quadsNACKed && (p.checkNACKs == PGPE_DB3_CHECK_NACKS))
        {
            if(p.useDB3ValForNacks)
            {
                p9_pgpe_handle_nacks(p.targetCores, p.expectedAckFrom, p.expectedAckValue, p.db3val);
            }
            else
            {
                uint64_t val = (uint64_t)MSGID_DB3_REPLAY_DB0 << 56;
                p9_pgpe_handle_nacks(p.targetCores, p.expectedAckFrom, p.expectedAckValue, val);
            }
        }
    }

}

//
//  p9_pgpe_wait_cme_db_ack
//
//  Collects acks from CMEs by polling type4. CME uses type4 to
//  ack DB0 and DB3
//
//  quadAckExpect - Vector of quads from whose CMEs(one per quad/quad manager CME) to
//                  expect an ACK
//
//  expectedAck -   expected type of ack sent by CME. This is used for error checking
//
void p9_pgpe_wait_cme_db_ack(uint32_t quadAckExpect, uint32_t expectedAck)
{
    uint32_t q, c, ack;
    uint32_t opit4pr, opit4prQuad, opit4Clr = 0;
    ocb_opit4cn_t opit4cn;

    PK_TRACE_INF("DBW: AckExpect=0x%x, AckType=0x%x", quadAckExpect, expectedAck);

    //Wait until acks from all the expected CMEs have been received
    //by polling OPIT4PRA(type4)
    while(quadAckExpect != 0)
    {
        opit4pr = in32(OCB_OPIT4PRA);
        opit4Clr = 0;

        for (q = 0; q < MAX_QUADS; q++)
        {
            opit4prQuad = (opit4pr >> ((MAX_QUADS - q + 1) << 2)) & 0xf;

            if (opit4prQuad)
            {
                if (quadAckExpect & QUAD_MASK(q))
                {
                    quadAckExpect &= ~QUAD_MASK(q);
                    opit4Clr |= (opit4prQuad << ((MAX_QUADS - q + 1) << 2));
                    c = 0;

                    while(!(opit4prQuad & (0x8 >> c)))
                    {
                        c++;
                    }

                    opit4cn.value = in32(OCB_OPIT4CN((q * 4) + c));

                    PK_TRACE_INF("DBW: QuadACK opit4cn[%d]=0x%x", ((q * 4) + c), opit4cn.value);

                    ack = opit4cn.value & 0xf;

                    switch (ack)
                    {
                        case MSGID_PCB_TYPE4_ACK_ERROR: //0x0
                            PGPE_TRACE_AND_PANIC(PGPE_CME_DB_ERROR_ACK);
                            break;

                        case MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK: //0x1
                        case MSGID_PCB_TYPE4_ACK_PSTATE_SUSPENDED: //0x2
                        case MSGID_PCB_TYPE4_SUSPEND_ENTRY_ACK:    //0x5
                        case MSGID_PCB_TYPE4_UNSUSPEND_ENTRY_ACK:  //0x6

                            //Check if ack is same as expected
                            if (ack != expectedAck)
                            {
                                PGPE_TRACE_AND_PANIC(PGPE_CME_UNEXPECTED_DB_ACK);
                            }

                            break;

                        case MSGID_PCB_TYPE4_NACK_DROOP_PRESENT: //0x4
                            //Mark that this quad sent a NACK
                            PK_TRACE_DBG("DBW: Got NACK from %d", q);
                            G_pgpe_pstate_record.quadsNACKed |= QUAD_MASK(q);
                            break;

                        //Note this includes MSGID_PCB_TYPE4_QUAD_MGR_AVAILABLE(0x3)
                        //and other undefined encoding
                        default:
                            PK_TRACE_ERR("DBW:Unexpected qCME[%u] ACK type", q);
                            PGPE_TRACE_AND_PANIC(PGPE_CME_UNEXPECTED_DB_ACK);
                    }

                }
                else if(!(G_pgpe_pstate_record.pendQuadsRegisterReceive & QUAD_MASK(q)))
                {
                    PK_TRACE_ERR("DBW:Unexpected qCME[%u] ACK", q);
                    PGPE_TRACE_AND_PANIC(PGPE_CME_UNEXPECTED_DB_ACK);
                }
            }
        }

        //In case CME Fault occurs, quad is marked as errorQuad in the cme error interrupt
        //handler. Then we update the expected ack quads vector. Otherwise, PGPE can hang
        //here forever as ACK from faulted CME will never come.
        if (quadAckExpect & G_pgpe_pstate_record.errorQuads)
        {
            quadAckExpect &= ~G_pgpe_pstate_record.errorQuads;
        }

        out32(OCB_OPIT4PRA_CLR, opit4Clr);
    }

    PK_TRACE_INF("DBW: QuadsNACKed=0x%x", G_pgpe_pstate_record.quadsNACKed);
}

//
//  p9_pgpe_pstate_send_pmsr_updt
//
//  Wrapper function to send PMSR Updt DB0
//
void p9_pgpe_pstate_send_pmsr_updt(uint32_t command, uint32_t targetCoresVector, uint32_t quadsAckVector)
{
    pgpe_db0_pmsr_updt_t db0_pmsr_updt;
    db0_pmsr_updt.value = 0;
    db0_pmsr_updt.fields.msg_id = MSGID_DB0_PMSR_UPDT;
    db0_pmsr_updt.fields.command = command;

    db0_parms_t p;
    p.db0val             = db0_pmsr_updt.value;
    p.type               = PGPE_DB0_TYPE_UNICAST;
    p.targetCores        = targetCoresVector;
    p.waitForAcks        = PGPE_DB_ACK_WAIT_CME;
    p.expectedAckFrom    = quadsAckVector;
    p.expectedAckValue   = MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK;
    p9_pgpe_send_db0(p);
}

//
//  p9_pgpe_handle_nacks
//
//  In case a prolonged droop event happens, CME will detect a timeout and send nack.
//  This function handles the nacks from CME
//
void p9_pgpe_handle_nacks(uint32_t origTargetCores, uint32_t origExpectedAckFrom, uint32_t expectedAckVal,
                          uint64_t db3val)
{
    uint32_t q;
    uint32_t expectedAckFrom = origExpectedAckFrom;
    uint32_t targetCores = origTargetCores;
    db3_parms_t p;
    p.db3val = db3val;
    p.db0val = 0;
    p.writeDB0 = PGPE_DB3_SKIP_WRITE_DB0;
    p.waitForAcks = PGPE_DB_ACK_WAIT_CME;
    p.checkNACKs = PGPE_DB3_SKIP_CHECK_NACKS;

    //IF WOV-Undervolting is enabled, then remove WOV bias
    if (G_pgpe_pstate_record.wov.status & WOV_UNDERVOLT_ENABLED)
    {
        G_pgpe_pstate_record.wov.target_pct = 0; //Clear any WOV bias
        uint32_t tmpBiasSyspExtVrmNext = G_pgpe_pstate_record.biasSyspExtVrmNext; //Save Next Voltage

        //If Current Voltage != Next Voltage, then we are moving to lower pstate(low frequency/low voltage)
        //and votlage hasn't been updated yet. To remove WOV bias, we use the current voltage because
        //the p9_pgpe_pstate_updt_ext_volt function uses next voltage to write the VRMs
        if (G_pgpe_pstate_record.biasSyspExtVrmCurr != G_pgpe_pstate_record.biasSyspExtVrmNext)
        {
            G_pgpe_pstate_record.biasSyspExtVrmNext = G_pgpe_pstate_record.biasSyspExtVrmCurr;
        }

        p9_pgpe_pstate_updt_ext_volt(); //Do voltage update that is remove any WOV bias
        G_pgpe_pstate_record.biasSyspExtVrmNext = tmpBiasSyspExtVrmNext; //Restore Next voltage
    }

    //a) If OCC Scratch2 Core Throttle Continuous Change Enable
    if ((in32(G_OCB_OCCS2) & BIT32(CORE_THROTTLE_CONTINUOUS_CHANGE_ENABLE)))
    {
        PGPE_TRACE_AND_PANIC(PGPE_DROOP_AND_CORE_THROTTLE_ENABLED);
    }

    //b) If  OCC flag PGPE Prolonged Droop Workaround Active bit is not set,
    //    call droop_throttle()
    if (!(in32(G_OCB_OCCFLG) & BIT32(PGPE_PROLONGED_DROOP_WORKAROUND_ACTIVE)))
    {
        p9_pgpe_droop_throttle();
    }

    //c) Send DB3 (Replay Previous DB0 Operation) to only the CME Quad Managers, and
    //their Sibling CME (if present), that responded with a NACK.
    while(G_pgpe_pstate_record.quadsNACKed)
    {
        G_pgpe_pstate_record.cntNACKs++;
        expectedAckFrom = G_pgpe_pstate_record.quadsNACKed;

        for (q = 0; q < MAX_QUADS; q++)
        {
            //If quad provided an ACK, then don't send DB3 again
            if(!(G_pgpe_pstate_record.quadsNACKed & QUAD_MASK(q)))
            {
                targetCores &= (~QUAD_ALL_CORES_MASK(q));
            }
            else
            {
                G_pgpe_pstate_record.quadsCntNACKs[q]++;
            }
        }

        //If a NACK received was in response to the first retry (i.e. second failed attempt):
        if (G_pgpe_pstate_record.cntNACKs == 2)
        {
            // 1 SCOM Write to OCC FIR[prolonged_droop_detected] bit.   This FIR bit is set to recoverable so that it will create an informational error log.
            GPE_PUTSCOM(OCB_OCCLFIR_OR, BIT64(OCCLFIR_PROLONGED_DROOP_DETECTED));

            // 2 Set OCC Flag register PGPE PM Reset Suppress bit that OCC
            //  will read to tell OCC not to attempt a PM Complex reset on
            //  PGPE timeouts in the meantime.
            out32(G_OCB_OCCFLG_OR, BIT32(PGPE_PM_RESET_SUPPRESS));
            PK_TRACE_INF("NACK: PM_RESET_SUPPRESS SET");

            // 3 Send DB0 PMSR Update with message Set Pstates Suspended only
            // to the CME QM (and their Siblings) that provided an ACK
            // (note: PGPE must also wait for them to ACK the DB0)
            p9_pgpe_pstate_send_pmsr_updt(DB0_PMSR_UPDT_SET_PSTATES_SUSPENDED,
                                          origTargetCores & (~targetCores),
                                          origExpectedAckFrom & (~G_pgpe_pstate_record.quadsNACKed));
        }

        //The PGPE then retries the DB3 (Replay Previous DB0 Operation)
        //again as described above to all CME QM (and their Siblings)
        //that responded with NACK until it no longer gets a NACK (attempt to self-heal)
        p.targetCores = targetCores;
        p.expectedAckFrom = expectedAckFrom;
        p.expectedAckValue = expectedAckVal;
        G_pgpe_pstate_record.quadsNACKed = 0;
        p9_pgpe_send_db3(p);
    }//End while(quadNACked) loop

    //if OCC Flag Register PGPE Prolonged Droop Workaround Active bit is set and all CME QMs respond with ACK
    if (in32(G_OCB_OCCFLG) & BIT32(PGPE_PROLONGED_DROOP_WORKAROUND_ACTIVE))
    {
        p9_pgpe_droop_unthrottle();
    }
}

//
//  p9_pgpe_pstate_start()
//
//  Implement Pstate Start Protocol
//
void p9_pgpe_pstate_start(uint32_t pstate_start_origin)
{
    PK_TRACE_DBG("PST: Start");
    qppm_dpll_stat_t dpll;
    qppm_dpll_freq_t dpllFreq;
    ocb_qcsr_t qcsr;
    uint8_t qPS;
    uint32_t lowestDpll, syncPstate, q, c;
    uint64_t value;
    db0_parms_t p;

    qcsr.value = in32(G_OCB_QCSR);

    //1. Read DPLLs. Determine lowest DPLL
    lowestDpll = 0xFFF;
    dpll.value = 0;

    for (q = 0; q < MAX_QUADS; q++)
    {
        //Exclude deconfigured quads
        if (qcsr.fields.ex_config & (QUAD_EX0_MASK(q) | QUAD_EX1_MASK(q)))
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_DPLL_STAT, q), dpll.value);

            if ((dpll.fields.freqout)  < lowestDpll )
            {
                lowestDpll = dpll.fields.freqout;
            }

            PK_TRACE_DBG("PST: DPLL[%d]=0x%x", q, (dpll.fields.freqout));
        }
    }

    PK_TRACE_INF("PST: LowestDPLL:0x%x DPLL_PS0=0x%x", lowestDpll, G_gppb->dpll_pstate0_value);

    //2. Determine Sync Pstate
    if (lowestDpll > G_gppb->dpll_pstate0_value)
    {
        syncPstate = 0;
    }
    else
    {
        syncPstate = G_gppb->dpll_pstate0_value - lowestDpll;
    }

    //ClipRange for each quad should intersect with every other
    //quad's ClipRange. (Otherwise, clips are invalid). Therefore,
    //just ensuring that syncPstate is not outside the bounds
    //of any quads clip range is enough.
    for (q = 0; q < MAX_QUADS; q++)
    {
        if (syncPstate < G_pgpe_pstate_record.psClipMin[q])
        {
            syncPstate = G_pgpe_pstate_record.psClipMin[q];
        }

        if (syncPstate > G_pgpe_pstate_record.psClipMax[q])
        {
            syncPstate = G_pgpe_pstate_record.psClipMax[q];
        }
    }

    //3. Move system to SyncPState
    PK_TRACE_INF("VDD_BUS_NUM=0x%x" , G_gppb->avs_bus_topology.vdd_avsbus_num);
    PK_TRACE_INF("VDD_RAIL_NUM=0x%x", G_gppb->avs_bus_topology.vdd_avsbus_rail);
    PK_TRACE_INF("VDN_BUS_NUM=0x%x" , G_gppb->avs_bus_topology.vdn_avsbus_num);
    PK_TRACE_INF("VDN_RAIL_NUM=0x%x", G_gppb->avs_bus_topology.vdn_avsbus_rail);

    //avs_driver_init();
    avs_driver_voltage_read(G_gppb->avs_bus_topology.vdd_avsbus_num, G_gppb->avs_bus_topology.vdd_avsbus_rail,
                            &G_pgpe_pstate_record.extVrmCurr);

    G_pgpe_pstate_record.biasSyspExtVrmCurr = G_pgpe_pstate_record.extVrmCurr;
    G_pgpe_pstate_record.biasSyspExtVrmNext = p9_pgpe_gppb_intp_vdd_from_ps(syncPstate, VPD_PT_SET_BIASED_SYSP);
    PK_TRACE_INF("PST: SyncPstate=0x%x eVid(Boot)=%umV,eVid(SyncPstate)=%umV", syncPstate,
                 G_pgpe_pstate_record.biasSyspExtVrmCurr,
                 G_pgpe_pstate_record.biasSyspExtVrmNext);
    dpllFreq.value = 0;
    dpllFreq.fields.fmax  = G_gppb->dpll_pstate0_value - syncPstate;
    dpllFreq.fields.fmult = dpllFreq.fields.fmax;
    dpllFreq.fields.fmin  = dpllFreq.fields.fmax;

    G_pgpe_pstate_record.psNext.fields.glb = syncPstate;
    p9_pgpe_pstate_reset_wov();

    //Move voltage only if raising it. Otherwise, we lower it later after
    //sending Pstate Start DB0. This is to make sure VDMs are not affected in
    //this window
    if(G_pgpe_pstate_record.biasSyspExtVrmCurr < G_pgpe_pstate_record.biasSyspExtVrmNext)
    {
        p9_pgpe_pstate_updt_ext_volt(); //update voltage
    }

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (!(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q)))
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_CLR, q), BIT64(26));
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_DPLL_FREQ, q), dpllFreq.value);//Write DPLL
        }
    }

    //4. Init CoresPSRequest data structure
    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {
            qPS = syncPstate;
        }
        else
        {
            qPS = 0xFF;
        }

        for (c = (q * CORES_PER_QUAD); c < (q + 1)*CORES_PER_QUAD; c++)
        {
            G_pgpe_pstate_record.coresPSRequest[c] = qPS;
        }
    }

    p9_pgpe_pstate_do_auction();
    p9_pgpe_pstate_apply_clips();
    G_pgpe_pstate_record.psNext.value  = G_pgpe_pstate_record.psTarget.value;

    //5. Set up CME_SCRATCH0[Local_Pstate_Index]
    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {
            //Give Quad Manager CME control of DPLL through inter-ppm
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_OR, q), BIT64(26));

            if (qcsr.fields.ex_config & QUAD_EX0_MASK(q))
            {
                //CME Scratch0
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);
                value |= (uint64_t)((MAX_QUADS - 1 - q) << 3) << 32;
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);
            }

            if (qcsr.fields.ex_config &  QUAD_EX1_MASK(q))
            {
                //CME Scratch0
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 1), value);
                value |= (uint64_t)((MAX_QUADS - 1 - q) << 3) << 32;
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 1), value);
            }
        }
    }

    //6. Determine PMCR Owner
    if (pstate_start_origin == PSTATE_START_OCC_IPC)
    {
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd;
        ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;
        p9_pgpe_pstate_set_pmcr_owner(args->pmcr_owner);
    }
    else
    {
        //Bring up the PGPE in Characterizaion Mode by default. This mimics
        //first starting pstates with OCC as owner which enables SCOM writes
        //to PMCR, and then switching the owner to CHAR which enables PCB_TYPE1 interrupts
        //and allows CME to forward Pstate Requests
        p9_pgpe_pstate_set_pmcr_owner(PMCR_OWNER_OCC);
        PK_TRACE_INF("PST: OWNER_CHAR");
        G_pgpe_pstate_record.pmcrOwner = PMCR_OWNER_CHAR;
        g_oimr_override &= ~(BIT64(46));
        out32(G_OCB_OIMR1_CLR, BIT32(14)); //Enable PCB_INTR_TYPE1
    }

    //7. Send Pstate Start Doorbell0
    pgpe_db0_start_ps_bcast_t db0;
    db0.value = G_pgpe_pstate_record.psTarget.value;
    db0.fields.msg_id = MSGID_DB0_START_PSTATE_BROADCAST;
    p.db0val             = db0.value;
    p.type               = PGPE_DB0_TYPE_UNICAST;
    p.targetCores        = G_pgpe_pstate_record.activeDB;
    p.waitForAcks        = PGPE_DB_ACK_WAIT_CME;
    p.expectedAckFrom    = G_pgpe_pstate_record.activeQuads;
    p.expectedAckValue   = MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK;
    p9_pgpe_send_db0(p);

    //Now, send clip updates to all quads that are active
    pgpe_db0_clip_bcast_t db0_clip_bcast;
    db0_clip_bcast.value = 0;
    db0_clip_bcast.fields.msg_id = MSGID_DB0_CLIP_BROADCAST;
    db0_clip_bcast.fields.clip_type = DB0_CLIP_BCAST_TYPE_PMIN;
    db0_clip_bcast.fields.quad0_clip = G_pgpe_pstate_record.psClipMax[0];
    db0_clip_bcast.fields.quad1_clip = G_pgpe_pstate_record.psClipMax[1];
    db0_clip_bcast.fields.quad2_clip = G_pgpe_pstate_record.psClipMax[2];
    db0_clip_bcast.fields.quad3_clip = G_pgpe_pstate_record.psClipMax[3];
    db0_clip_bcast.fields.quad4_clip = G_pgpe_pstate_record.psClipMax[4];
    db0_clip_bcast.fields.quad5_clip = G_pgpe_pstate_record.psClipMax[5];
    p.db0val             = db0_clip_bcast.value;
    p9_pgpe_send_db0(p);

    db0_clip_bcast.value = 0;
    db0_clip_bcast.fields.msg_id = MSGID_DB0_CLIP_BROADCAST;
    db0_clip_bcast.fields.clip_type = DB0_CLIP_BCAST_TYPE_PMAX;
    db0_clip_bcast.fields.quad0_clip = G_pgpe_pstate_record.psClipMin[0];
    db0_clip_bcast.fields.quad1_clip = G_pgpe_pstate_record.psClipMin[1];
    db0_clip_bcast.fields.quad2_clip = G_pgpe_pstate_record.psClipMin[2];
    db0_clip_bcast.fields.quad3_clip = G_pgpe_pstate_record.psClipMin[3];
    db0_clip_bcast.fields.quad4_clip = G_pgpe_pstate_record.psClipMin[4];
    db0_clip_bcast.fields.quad5_clip = G_pgpe_pstate_record.psClipMin[5];
    p.db0val             = db0_clip_bcast.value;
    p9_pgpe_send_db0(p);


    //In case VDM Prolonged Droop event occured during PSTATE_START, then clearing
    //ensures OCC is notified about Prolonged Droop event resolution.
    //Also, at this point nothing else should be pending from OCC, so safe to clear.
    out32(G_OCB_OCCFLG_CLR, BIT32(PGPE_PM_RESET_SUPPRESS));

    //Lower voltage if boot voltage > syncPstate voltage
    if (G_pgpe_pstate_record.biasSyspExtVrmCurr > G_pgpe_pstate_record.biasSyspExtVrmNext)
    {
        p9_pgpe_pstate_updt_ext_volt(); //update voltage
    }

    G_pgpe_pstate_record.psCurr.value  = G_pgpe_pstate_record.psTarget.value;

    //Update Shared SRAM
    p9_pgpe_pstate_updt_actual_quad();

    //6. Enable PStates
    G_pgpe_pstate_record.pstatesStatus = PSTATE_ACTIVE;
    uint32_t occScr2 = in32(G_OCB_OCCS2);
    occScr2 |= BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE);
    PK_TRACE_DBG("PST: PGPE_PSTATE_PROTOCOL_ACTIVE set");
    out32(G_OCB_OCCS2, occScr2);

    //7. Enable Undervolt if needed
    if (G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_WOV_UNDERVOLT_ENABLE)
    {
        G_pgpe_pstate_record.wov.status = WOV_UNDERVOLT_ENABLED;
        PK_TRACE_INF("PST: Undervolting Enabled");
    }

    if (G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_WOV_OVERVOLT_ENABLE)
    {
        G_pgpe_pstate_record.wov.status = WOV_OVERVOLT_ENABLED;
        PK_TRACE_INF("PST: Overvolting Enabled");
    }

    PK_TRACE_DBG("PST: Start Done");
}

//
//  p9_pgpe_pstate_set_pmcr_owner
//
//  Note: This function doesn't check if owner is valid.
//  It must be passed either PMCR_OWNER_OCC or PMCR_OWNER_HOST or
//  PMCR_OWNER_CHAR
//
//  owner - New onwer of PMCR
//
void p9_pgpe_pstate_set_pmcr_owner(uint32_t owner)
{
    int q = 0;
    ocb_qcsr_t qcsr;
    qcsr.value = in32(G_OCB_QCSR);

//Write to LMCR register in SIMICS results in error
//So, adding a build flag for SIMICS.
//For SIMICS, LMCR should be set through command line
#if !SIMICS_TUNING

    PK_TRACE_INF("PMCR Owner=0x%x(0=HOST,1=OCC,2=CHAR)", G_pgpe_pstate_record.pmcrOwner);

    //Set PCB_TYPE1 interrupt
    if (owner == PMCR_OWNER_HOST)
    {
        G_pgpe_pstate_record.pmcrOwner = PMCR_OWNER_HOST;
        g_oimr_override &= ~(BIT64(46));
        out32(G_OCB_OIMR1_CLR, BIT32(14)); //Enable PCB_INTR_TYPE1
    }
    else if (owner == PMCR_OWNER_OCC)
    {
        G_pgpe_pstate_record.pmcrOwner = PMCR_OWNER_OCC;
        g_oimr_override |= BIT64(46);
        out32(G_OCB_OIMR1_OR, BIT32(14)); //Disable PCB_INTR_TYPE1
    }
    else if (owner == PMCR_OWNER_CHAR)
    {
        G_pgpe_pstate_record.pmcrOwner = PMCR_OWNER_CHAR;
        g_oimr_override &= ~(BIT64(46));
        out32(G_OCB_OIMR1_CLR, BIT32(14)); //Enable PCB_INTR_TYPE1
    }


    //If OWNER is switched to CHAR, the last LMCR setting is retained
    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {
            //CME0 within this quad
            if (qcsr.fields.ex_config & (0x800 >> (q * 2)))
            {
                if (owner == PMCR_OWNER_HOST)
                {
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_CLR, q, 0), BIT64(0));
                }
                else if (owner == PMCR_OWNER_OCC)
                {
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_OR, q, 0), BIT64(0));
                }
            }

            //CME1 within this quad
            if (qcsr.fields.ex_config & (0x400 >> (q * 2)))
            {
                if (owner == PMCR_OWNER_HOST)
                {
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_CLR, q, 1), BIT64(0));
                }
                else if (owner == PMCR_OWNER_OCC)
                {
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_OR, q, 1), BIT64(0));
                }
            }
        }
    }

#endif
}

//
//  p9_pgpe_pstate_stop()
//
//  This function implements the pstate stop protocol.
void p9_pgpe_pstate_stop()
{
    PK_TRACE_DBG("PSS: Pstate Stop Enter");
    uint32_t q;
    pgpe_db0_stop_ps_bcast_t db0_stop;
    ocb_qcsr_t qcsr;
    db0_parms_t p;

    //If WOF is enabled, then disable it also. We should never have
    //WOF enabled, but Pstate stopped
    if(G_pgpe_pstate_record.wofStatus == WOF_ENABLED)
    {
        p9_pgpe_pstate_wof_ctrl(PGPE_ACTION_WOF_OFF);
    }

    //Send PSTATE_STOP DB0
    qcsr.value = in32(G_OCB_QCSR);
    db0_stop.value = 0;
    db0_stop.fields.msg_id = MSGID_DB0_STOP_PSTATE_BROADCAST;
    p.db0val             = db0_stop.value;
    p.type               = PGPE_DB0_TYPE_UNICAST;
    p.targetCores        = G_pgpe_pstate_record.activeDB;
    p.waitForAcks        = PGPE_DB_ACK_WAIT_CME;
    p.expectedAckFrom    = G_pgpe_pstate_record.activeQuads;
    p.expectedAckValue   = MSGID_PCB_TYPE4_ACK_PSTATE_SUSPENDED;
    p9_pgpe_send_db0(p);

    //Note: We take away DPLL control from CME after stopping pstates on it
    //Otherwise, we can have a case where PGPE Heartbeat loss occurs after
    //PGPE has taken away DPLL control from CME, but haven't sent Pstate Stop
    //DB0. CME unmasks Heartbeat Loss interrupt upon receiving Pstate Start,
    //and masks it upon receiving Pstate Stop.
    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {
            //CME0 within this quad
            if (qcsr.fields.ex_config & (0x800 >> (q * 2)))
            {
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_OR, q, 0), BIT64(0));
            }

            //CME1 within this quad
            if (qcsr.fields.ex_config & (0x400 >> (q * 2)))
            {
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_OR, q, 1), BIT64(0));
            }

            //Only need to do that for active quads here because PGPE opens DPLL for SCOMs
            //for other quads.
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_CLR, q), BIT64(26));
        }
    }

    if (G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_WOV_UNDERVOLT_ENABLE)
    {
        G_pgpe_pstate_record.wov.status = WOV_DISABLED;
        PK_TRACE_INF("PST: Undervolting Enabled");
    }


    //Set status in OCC_Scratch2
    uint32_t occScr2 = in32(G_OCB_OCCS2);
    occScr2 &= ~BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE);
    out32(G_OCB_OCCS2, occScr2);
    G_pgpe_pstate_record.pstatesStatus = PSTATE_STOPPED;

    PK_TRACE_DBG("PSS: Stop Done");
}

void p9_pgpe_pstate_clip_bcast(uint32_t clip_bcast_type)
{
    PK_TRACE_DBG("CLB: Clip Bcast");
    pgpe_db0_clip_bcast_t db0;
    db0.value = 0;
    db0.fields.msg_id =  MSGID_DB0_DB3_PAYLOAD;
    db0.fields.clip_type = clip_bcast_type;

    //Note that we store PMIN as psClipMax(which is lower Pstate, but higher numbered Pstate)
    if (clip_bcast_type == DB0_CLIP_BCAST_TYPE_PMIN)
    {
        db0.fields.quad0_clip = G_pgpe_pstate_record.psClipMax[0];
        db0.fields.quad1_clip = G_pgpe_pstate_record.psClipMax[1];
        db0.fields.quad2_clip = G_pgpe_pstate_record.psClipMax[2];
        db0.fields.quad3_clip = G_pgpe_pstate_record.psClipMax[3];
        db0.fields.quad4_clip = G_pgpe_pstate_record.psClipMax[4];
        db0.fields.quad5_clip = G_pgpe_pstate_record.psClipMax[5];
    }
    else if (clip_bcast_type == DB0_CLIP_BCAST_TYPE_PMAX)
    {
        db0.fields.quad0_clip = G_pgpe_pstate_record.psClipMin[0];
        db0.fields.quad1_clip = G_pgpe_pstate_record.psClipMin[1];
        db0.fields.quad2_clip = G_pgpe_pstate_record.psClipMin[2];
        db0.fields.quad3_clip = G_pgpe_pstate_record.psClipMin[3];
        db0.fields.quad4_clip = G_pgpe_pstate_record.psClipMin[4];
        db0.fields.quad5_clip = G_pgpe_pstate_record.psClipMin[5];
    }

    //Write DB0, but with top-byte = 0. This way DB0 interrupt doesn't happen, but
    //we still send CME the necessary data. CME will read this inside the DB3 interrupt
    //which we write next
    db3_parms_t p = {   MSGID_DB3_CLIP_BROADCAST,
                        db0.value,
                        PGPE_DB3_WRITE_DB0,
                        G_pgpe_pstate_record.activeDB,
                        PGPE_DB_ACK_WAIT_CME,
                        G_pgpe_pstate_record.activeQuads,
                        MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK,
                        PGPE_DB3_SKIP_CHECK_NACKS
                    };
    p.db3val = (uint64_t)(MSGID_DB3_CLIP_BROADCAST) << 56;
    p9_pgpe_send_db3(p);
}
//
//  p9_pgpe_pstate_wof_ctrl
//
//  Enables or Disables WOF
//
//  action - PGPE_ACTION_WOF_ON(Enables WOF) or PGPE_ACTION_WOF_OFF(Disables WOF)
//
void p9_pgpe_pstate_wof_ctrl(uint32_t action)
{
    uint32_t activeCores, activeQuads, c;

    if (action == PGPE_ACTION_WOF_ON)
    {
        //In WOF Phase >= 2, we ask SGPE to start sending active core updates
        if ((G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_ENABLE_VRATIO) ||
            (G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_VRATIO_MODIFIER))
        {
            //If this is first time wof has been enabled since PGPE boot, then ask SGPE for
            //core active update. Otherwise, core active update are already enabled, and sending
            //a Ctrl Stop Updt IPC can cause a livelock where SGPE is waiting for an ack
            //for Active Cores Update and PGPE is waiting for an ack for Ctrl Stop Updt
            if (G_pgpe_pstate_record.activeCoreUpdtAction == ACTIVE_CORE_UPDATE_ACTION_ERROR)
            {
                p9_pgpe_pstate_send_ctrl_stop_updt(CTRL_STOP_UPDT_ENABLE_CORE);
                activeCores = G_sgpe_control_updt.fields.active_cores << 8;
            }
            else
            {
                activeCores = G_pgpe_pstate_record.activeCores;
            }

            G_pgpe_pstate_record.activeCoreUpdtAction = ACTIVE_CORE_UPDATE_ACTION_PROCESS_AND_ACK;
        }
        else
        {
            activeCores = G_pgpe_pstate_record.activeDB;
        }

        activeQuads = G_pgpe_pstate_record.activeQuads;
        G_pgpe_pstate_record.wofStatus = WOF_ENABLED;

        //Set to value returned by SGPE or initial value determined during boot(equal to configured cores)
        G_pgpe_pstate_record.activeCores = activeCores;

        //Update Shared Memory Region
        G_pgpe_pstate_record.pQuadState0->fields.active_cores = G_pgpe_pstate_record.activeCores >> 16;
        G_pgpe_pstate_record.pQuadState1->fields.active_cores = (G_pgpe_pstate_record.activeCores & 0xFF00);
        G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads = activeQuads;

        G_pgpe_pstate_record.numActiveCores = 0;

        for (c = 0; c < MAX_CORES; c++)
        {
            if (G_pgpe_pstate_record.activeCores & CORE_MASK(c))
            {
                G_pgpe_pstate_record.numActiveCores += 1;
            }
        }

        PK_TRACE_DBG("WCT: numActiveCores=0x%x", G_pgpe_pstate_record.numActiveCores);
        PK_TRACE_DBG("WCT: activeCores=0x%x", G_pgpe_pstate_record.activeCores);

        p9_pgpe_pstate_calc_wof();
        PK_TRACE_DBG("WCT: WOF Enabled");
    }
    else if (action == PGPE_ACTION_WOF_OFF)
    {
        //In WOF Phase >= 2, we take a note that WOF has been disabled, and
        //simply ACK any active cores updates that come from SGPE.
        if ((G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_ENABLE_VRATIO) ||
            (G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_VRATIO_MODIFIER))
        {
            G_pgpe_pstate_record.activeCoreUpdtAction = ACTIVE_CORE_UPDATE_ACTION_ACK_ONLY;
        }

        G_pgpe_pstate_record.wofStatus = WOF_DISABLED;

        //ACK any pending quad active update exit. PGPE might have been waiting for WOF VFRT from OCC, but
        //with WOF disabled that will never come.
        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_processing == 0 &&
            G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack == 1)
        {
            ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd;
            ipcmsg_s2p_update_active_quads_t* args = (ipcmsg_s2p_update_active_quads_t*)async_cmd->cmd_data;

            G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 0;
            G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads |= (args->fields.requested_quads << 2);

            p9_pgpe_pstate_process_quad_exit_notify(args->fields.requested_quads << 2);

            args->fields.return_active_quads = G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads >> 2;
            args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
            ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd, IPC_RC_SUCCESS);

            p9_pgpe_optrace(ACK_QUAD_ACTV);

            GPE_PUTSCOM(G_OCB_OCCFLG_CLR, BIT32(REQUESTED_ACTIVE_QUAD_UPDATE));//Clear OCCFLG[REQUESTED_ACTIVE_QUAD_UPDATE]
        }

        PK_TRACE_DBG("WCT: WOF Disabled");
    }
}


//
//  p9_pgpe_pstate_process_quad_entry_notify
//
//  Process Active Quad Update Entry(Notify) sent by SGPE
//
void p9_pgpe_pstate_process_quad_entry_notify(uint32_t quadsRequested)
{
    uint32_t q, c;
    qppm_dpll_freq_t dpllFreq;
    dpllFreq.value = 0;
    db0_parms_t p;
    pgpe_db0_stop_ps_bcast_t db0_stop;
    uint32_t target_cores;

    G_pgpe_pstate_record.activeQuads &= ~quadsRequested;
    db0_stop.value = 0;
    db0_stop.fields.msg_id = MSGID_DB0_STOP_PSTATE_BROADCAST;

    PK_TRACE_INF("QE:(Notify) QReq=0x%x QAct=%x \n", quadsRequested, G_pgpe_pstate_record.activeQuads);

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (quadsRequested & QUAD_MASK(q))
        {
            target_cores = 0;

            if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
            {
                for (c = FIRST_CORE_FROM_QUAD(q); c < LAST_CORE_FROM_QUAD(q); c++)
                {
                    if (G_pgpe_pstate_record.activeDB & CORE_MASK(c))
                    {
                        target_cores |= CORE_MASK(c);
                    }
                }


                //Send PSTATE_STOP DB0
                p.db0val             = db0_stop.value;
                p.type               = PGPE_DB0_TYPE_UNICAST;
                p.targetCores        = target_cores;
                p.waitForAcks        = PGPE_DB_ACK_WAIT_CME;
                p.expectedAckFrom    = QUAD_MASK(q);
                p.expectedAckValue   = MSGID_PCB_TYPE4_ACK_PSTATE_SUSPENDED;
                p9_pgpe_send_db0(p);

                G_pgpe_pstate_record.psTarget.fields.quads[q] = 0xFF;
                G_pgpe_pstate_record.psCurr.fields.quads[q] = 0xFF;
                G_pgpe_pstate_record.psNext.fields.quads[q] = 0xFF;
                G_pgpe_pstate_record.psComputed.fields.quads[q] = 0xFF;

                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_CLR, q), BIT64(26)); //Open DPLL for SCOMs

                //Write "Safe Frequency" for quad about to enter STOP
                //Note, we set fmax = fmult = fmin
                dpllFreq.fields.fmax  = G_gppb->dpll_pstate0_value - G_pgpe_pstate_record.safePstate;
                dpllFreq.fields.fmult = dpllFreq.fields.fmax;
                dpllFreq.fields.fmin  = dpllFreq.fields.fmax;
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_DPLL_FREQ, q), dpllFreq.value);
            }
            else
            {
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_CLR, q), BIT64(26)); //Open DPLL for SCOMs
            }

            G_pgpe_pstate_record.activeDB &= ~(QUAD_ALL_CORES_MASK(q));
            out32(OCB_OPIT4PRA_CLR, QUAD_ALL_CORES_MASK(q)); //Clear any pending PCB_Type4

        }
    }

    p9_pgpe_pstate_updt_actual_quad();

    G_pgpe_pstate_record.pendingActiveQuadUpdtDone = 1;
}

//
//  p9_pgpe_pstate_process_quad_entry_done
//
//  Process Active Quad Update Entry(Done) sent by SGPE
//
void p9_pgpe_pstate_process_quad_entry_done(uint32_t quadsRequested)
{
    //Update Shared Memory Region
    G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads &= (~(quadsRequested));
    PK_TRACE_INF("QE: (Done), QReq=0x%x QAct=%x", quadsRequested, G_pgpe_pstate_record.activeQuads);

    //If WOF Enabled, then interlock with OCC
    if(G_pgpe_pstate_record.wofStatus == WOF_ENABLED && G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
    {
        GPE_PUTSCOM(G_OCB_OCCFLG_OR, BIT32(REQUESTED_ACTIVE_QUAD_UPDATE));//Set OCCFLG[REQUESTED_ACTIVE_QUAD_UPDATE]
    }

    G_pgpe_pstate_record.pendingActiveQuadUpdtDone = 0;
}

//
//  p9_pgpe_pstate_process_quad_exit
//
//  Process Active Quad Update Exit(Notify) sent by SGPE
//
void p9_pgpe_pstate_process_quad_exit_notify(uint32_t quadsRequested)
{
    uint32_t q;
    qppm_dpll_freq_t dpllFreq;
    dpllFreq.value = 0;
    qppm_vdmcfgr_t vdmcfg;


    for (q = 0; q < MAX_QUADS; q++)
    {
        if (quadsRequested & QUAD_MASK(q))
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_CLR, q), BIT64(26)); //Open DPLL for SCOMs

            //Write "Safe Frequency" for quad about to enter STOP only if
            //Pstates are Active
            if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
            {
                //Note, we set fmax = fmult = fmin
                dpllFreq.fields.fmax  = G_gppb->dpll_pstate0_value - G_pgpe_pstate_record.safePstate;
                dpllFreq.fields.fmult = dpllFreq.fields.fmax;
                dpllFreq.fields.fmin  = dpllFreq.fields.fmax;
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_DPLL_FREQ, q), dpllFreq.value);

                //If VDMs are enabled, read the register overlay 0:7 and write the register
                //Otherwise, just write the VDM register
                vdmcfg.value = 0;

                if (G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_VDM_ENABLE)
                {
                    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_VDMCFGR, q), vdmcfg.value);
                }

                vdmcfg.fields.vdm_vid_compare = (G_pgpe_pstate_record.biasSyspExtVrmCurr - 512) >> 2;
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_VDMCFGR, q), vdmcfg.value);
            }
        }
    }

    //Add quads to pending registration list. They are taken out when
    //registration msg from the quad is received.
    G_pgpe_pstate_record.pendQuadsRegisterReceive |= quadsRequested;

    PK_TRACE_INF("QX: (Notify), QReq=0x%x,QAct=%x\n", quadsRequested, G_pgpe_pstate_record.activeQuads);

    G_pgpe_pstate_record.pendingActiveQuadUpdtDone = 1;
}

//
//  p9_pgpe_pstate_process_quad_exit_done
//
//  Process Active Quad Update Exit(Done) sent by SGPE
//
void p9_pgpe_pstate_process_quad_exit_done()
{

    G_pgpe_pstate_record.pendingActiveQuadUpdtDone = 0;
    PK_TRACE_INF("QX: (Done) QAct=%x\n", G_pgpe_pstate_record.activeQuads);
}

//
//  p9_pgpe_pstate_send_ctrl_stop_updt
//
//  Wrapper function to send Ctrl Stop Update IPC to SGPE
//
void p9_pgpe_pstate_send_ctrl_stop_updt(uint32_t action)
{
    uint32_t rc;

    G_sgpe_control_updt.fields.return_code = 0x0;
    G_sgpe_control_updt.fields.action = action;
    G_ipc_msg_pgpe_sgpe.cmd_data = &G_sgpe_control_updt;

    //Send "Enable Core Stop Updates" IPC to SGPE
    ipc_init_msg(&G_ipc_msg_pgpe_sgpe.cmd,
                 IPC_MSGID_PGPE_SGPE_CONTROL_STOP_UPDATES,
                 p9_pgpe_ipc_ack_sgpe_ctrl_stop_updt,
                 NULL);
    PK_TRACE_INF("CSU: Sent CTRL_STOP_UPDT(action=%u) to SGPE", action);

    rc = ipc_send_cmd(&G_ipc_msg_pgpe_sgpe.cmd);

    if(rc)
    {
        PK_TRACE_DBG("CSU: Ctrl Stop Updt IPC Fail");
        PGPE_TRACE_AND_PANIC(PGPE_SGPE_IPC_SEND_FAIL);
    }

    //Wait for return code to be set or if SGPE_FAULT happened then just call
    //p9_pstate_sgpe_fault()
    while((G_sgpe_control_updt.fields.return_code == IPC_SGPE_PGPE_RC_NULL) &&
          !G_pgpe_pstate_record.severeFault[SAFE_MODE_FAULT_SGPE])
    {
        dcbi(((void*)(&G_sgpe_control_updt)));
    }

    if (G_sgpe_control_updt.fields.return_code != IPC_SGPE_PGPE_RC_SUCCESS)
    {
        PK_TRACE_ERR("ERROR: SGPE Ctrl Stop Update Bad RC. Halting PGPE!");
        PGPE_TRACE_AND_PANIC(PGPE_SGPE_CTRL_STOP_UPDT_BAD_ACK);
    }

    PK_TRACE_INF("CSU:Ctrl Stop Updt Stop ACKed");
}

//
//p9_pgpe_pstate_send_suspend_stop
//
void p9_pgpe_pstate_send_suspend_stop()
{
    p9_pgpe_optrace(PRC_PM_SUSP);

    int rc;
    G_sgpe_suspend_stop.fields.msg_num = 0;
    G_sgpe_suspend_stop.fields.command  = SUSPEND_STOP_SUSPEND_ENTRY_EXIT;
    G_sgpe_suspend_stop.fields.return_code = 0x0;
    G_ipc_msg_pgpe_sgpe.cmd_data = &G_sgpe_suspend_stop;
    ipc_init_msg(&G_ipc_msg_pgpe_sgpe.cmd,
                 IPC_MSGID_PGPE_SGPE_SUSPEND_STOP,
                 p9_pgpe_ipc_ack_sgpe_suspend_stop,
                 (void*)NULL);

    //send the command
    rc = ipc_send_cmd(&G_ipc_msg_pgpe_sgpe.cmd);

    if(rc)
    {
        PK_TRACE_ERR("SUSP:Suspend Stop IPC FAIL");
        PGPE_TRACE_AND_PANIC(PGPE_SGPE_IPC_SEND_FAIL);
    }
}

//
//  p9_pgpe_pstate_apply_safe_clips
//
//  Updates current clips to safePstate
//
void p9_pgpe_pstate_apply_safe_clips()
{
    PK_TRACE_DBG("SCL: Apply Safe Enter");
    int q;

    //Set clips to safe pstate
    for (q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_pstate_record.psClipMax[q] = G_pgpe_pstate_record.safePstate;
        G_pgpe_pstate_record.psClipMin[q] = G_pgpe_pstate_record.safePstate;
    }

    //Update clips
    p9_pgpe_pstate_apply_clips();

    PK_TRACE_DBG("SCL: Apply Safe Exit");
}

//
//  p9_pgpe_pstate_safe_mode()
//
//  Note: Must call this procedure inside sub-critical section.
//
//  Implements the Safe Mode Protocol
//
void p9_pgpe_pstate_safe_mode()
{
    PK_TRACE_DBG("SAF: Safe Mode Enter");
    uint32_t occScr2 = in32(G_OCB_OCCS2);
    uint32_t suspend = in32(G_OCB_OCCFLG) & BIT32(PM_COMPLEX_SUSPEND)
                       && !(G_pgpe_pstate_record.severeFault[SAFE_MODE_FAULT_SGPE]);
    uint32_t safemode = in32(G_OCB_OCCFLG) & BIT32(PGPE_SAFE_MODE);
    db3_parms_t p;
    pgpe_db0_glb_bcast_t db0;

    // Generate OPTRACE Process Start
    G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) | (G_pgpe_pstate_record.psCurr.fields.glb <<
                                  16)
                                  | (G_pgpe_pstate_record.safePstate << 8) |
                                  G_pgpe_pstate_record.severeFault[SAFE_MODE_FAULT_PVREF] ? 0x20 : 0 |
                                  G_pgpe_pstate_record.severeFault[SAFE_MODE_FAULT_CME] ? 0x10 : 0  |
                                  G_pgpe_pstate_record.severeFault[SAFE_MODE_FAULT_SGPE] ? 0x8 : 0 |
                                  G_pgpe_pstate_record.severeFault[SAFE_MODE_FAULT_OCC] ? 0x4 : 0  |
                                  suspend ? 0x2 : 0 |
                                  safemode ? 0x1 : 0;

    p9_pgpe_optrace(PRC_SAFE_MODE);

    // Apply clips and actuate to safe mode
    p9_pgpe_pstate_apply_safe_clips();

    //Send DB3 Enter Safe Mode
    db0.value = G_pgpe_pstate_record.psTarget.value;
    db0.fields.msg_id = MSGID_DB0_DB3_PAYLOAD;
    p.db3val            = (uint64_t)MSGID_DB3_ENTER_SAFE_MODE << 56;
    p.db0val            = db0.value;
    p.writeDB0          = PGPE_DB3_WRITE_DB0;
    p.targetCores       = G_pgpe_pstate_record.activeDB;
    p.waitForAcks       = PGPE_DB_ACK_WAIT_CME;
    p.expectedAckFrom   = G_pgpe_pstate_record.activeQuads;
    p.expectedAckValue  = MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK;
    p.checkNACKs        = PGPE_DB3_CHECK_NACKS;
    p.useDB3ValForNacks = 1;
    p9_pgpe_send_db3(p);

    PK_TRACE_INF("SAF: Safe Mode Actuation Done!");

    //Update PstatesStatus to PM_SUSPEND_PENDING or PSTATE_SAFE_MODE
    G_pgpe_pstate_record.pstatesStatus = suspend ? PSTATE_PM_SUSPEND_PENDING : PSTATE_SAFE_MODE;

    //Ack any pending IPCs from OCC and SGPE
    p9_pgpe_pstate_handle_pending_occ_ack_on_fault();
    p9_pgpe_pstate_handle_pending_sgpe_ack_on_fault();

    ///Disable WOF, so that PGPE doesn't interlock with OCC anymore
    if(G_pgpe_pstate_record.wofStatus == WOF_ENABLED)
    {
        p9_pgpe_pstate_wof_ctrl(PGPE_ACTION_WOF_OFF);
    }

    //OPTRACE ACK done
    p9_pgpe_optrace(ACK_SAFE_DONE);

    //Update OCC Scratch2  (need to get new value because the suspend_stop callback changes the Scratch2 content)
    occScr2 &= ~BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE);
    occScr2 |= BIT32(PGPE_SAFE_MODE_ACTIVE);
    out32(G_OCB_OCCS2, occScr2);

    if (G_pgpe_pstate_record.severeFault[SAFE_MODE_FAULT_CME])
    {
        p9_pgpe_pstate_cme_fault();
    }

    if (G_pgpe_pstate_record.severeFault[SAFE_MODE_FAULT_SGPE])
    {
        p9_pgpe_pstate_sgpe_fault();
    }

    if (G_pgpe_pstate_record.severeFault[SAFE_MODE_FAULT_PVREF])
    {
        p9_pgpe_pstate_pvref_fault();
    }

    PK_TRACE_DBG("SAF: Safe Mode Exit");
}



//
//p9_pgpe_pstate_pm_complex_suspend
//
//  This function sends Suspend Stop(Entry and Exit) to SGPE
//  It is called as part of PM Complex Suspend processing. Before
//  calling this function it is assumed the system is in SAFE_MODE.
//  There is no function to undo the suspend. Only PM Reset can bring the
//  PM Complex out of this state.
//
void p9_pgpe_pstate_pm_complex_suspend()
{
    //Send Suspend Stop IPC
    p9_pgpe_pstate_send_suspend_stop();
}


//
//  p9_pgpe_pstate_sgpe_fault
//
//  This function implements the steps for handling SGPE error
//  Before this function is called, it is assumed that system has been
//  actuated to Psafe
void p9_pgpe_pstate_sgpe_fault()
{
    PK_TRACE_INF("SGPE Fault");

    db3_parms_t p;

    //2. PGPE sends all active CMEs a DB3 to disable SGPE Handoff
    p.db3val            = (uint64_t)MSGID_DB3_DISABLE_SGPE_HANDOFF << 56;
    p.db0val            = 0;
    p.writeDB0          = PGPE_DB3_SKIP_WRITE_DB0;
    p.targetCores       = G_pgpe_pstate_record.activeDB;
    p.waitForAcks       = PGPE_DB_ACK_WAIT_CME;
    p.expectedAckFrom   = G_pgpe_pstate_record.activeQuads;
    p.expectedAckValue  = MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK;
    p.checkNACKs        = PGPE_DB3_CHECK_NACKS;
    p.useDB3ValForNacks = 0;
    p9_pgpe_send_db3(p);

    //3. PGPE performs STOP Recovery Trigger to set a malfunction alert to the
    //    Hypervisor.
    //  1.  HYP checks OCC LFIR and notices OCC LFIR[gpe3_error] (12)  set
    //      (done by hardware) as a PM complex malfunction alert.
    //  2.  HYP performs special wake-up to all cores.  Any that do not produce
    //      special wake-up done are considered "dead". Note:  All cores in
    //      transition of STOP >= 5 will be dead.  Any cores in a quad that is
    //      in STOP 11 will be dead.
    p9_stop_recovery_trigger();

    //4.  Ceases to update the PGPE Beacon for the OCC.  This will cause the OCC
    //      and TMGT to request a PM Complex reset.
    G_pgpe_pstate_record.updatePGPEBeacon = 0;

}


//
//  p9_pgpe_pstate_cme_fault
//
//  This function implements the steps for handling CME error i
//  Before this function is called, it is assumed that system has been
//  actuated to Psafe
//
void p9_pgpe_pstate_cme_fault()
{
    PK_TRACE_INF("CME Fault");

    //5. Clears OCC Scratch 2 [PGPE Active].
    //  This keeps the SGPE from performing Update Active Cores and Update
    //  Active Quads IPC operations to PGPE in the future.
    uint32_t occScr2 = in32(G_OCB_OCCS2);
    occScr2 &= ~BIT32(PGPE_ACTIVE);
    out32(G_OCB_OCCS2, occScr2);

    //6. Responds to any Update Active Cores and Update Active Quads IPC
    //  operations.
    //  This allows present wake-up events in SGPE to proceed. (Note: the SGPE
    //  can only have one each of these outstanding at any time)
    //
    //  No new code as this will be handled by IPC handlers and process thread

    //7.  Sets OCC LFIR[cme_error_notify] (2) as an FFDC marker for this type of
    //   error. This is one of the bits that HYP will use as a PM Complex fault
    //   upon malfunction alert.
    GPE_PUTSCOM(OCB_OCCLFIR_OR, BIT64(2));

    //8.  If OCCS2[]Performs the STOP Recovery Trigger to cause a malfunction alert to HYP.
    p9_stop_recovery_trigger();

    //9.  Ceases to update the PGPE Beacon for the OCC.  This will cause the OCC
    //      and TMGT to request a PM Complex reset.
    G_pgpe_pstate_record.updatePGPEBeacon = 0;
}

//
//  p9_pgpe_pstate_pvref_fault
//
void p9_pgpe_pstate_pvref_fault()
{

    p9_stop_recovery_trigger();

    // Cease to update the PGPE Beacon for the OCC.  This will cause the OCC
    // and TMGT to request a PM Complex reset.
    G_pgpe_pstate_record.updatePGPEBeacon = 0;
}

//
// p9_pgpe_pstate_handle_pending_occ_ack_on_fault()
//
void p9_pgpe_pstate_handle_pending_occ_ack_on_fault()
{
    //Handle any pending ACKs
    ipc_async_cmd_t* async_cmd;

    //ACK back to OCC with "PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE"
    if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack == 1)
    {
        async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd;
        ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd, IPC_RC_SUCCESS);
        p9_pgpe_optrace(ACK_CLIP_UPDT);
    }

    //ACK back to OCC with "PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE"
    if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack == 1)
    {
        async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].cmd;
        ipcmsg_wof_vfrt_t* args_wof_vfrt = (ipcmsg_wof_vfrt_t*)async_cmd->cmd_data;
        args_wof_vfrt->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].cmd, IPC_RC_SUCCESS);
        p9_pgpe_optrace(ACK_WOF_VFRT);
    }
}

//
// p9_pgpe_pstate_handle_pending_sgpe_ack_on_fault()
//
void p9_pgpe_pstate_handle_pending_sgpe_ack_on_fault()
{
    //Handle any pending ACKs
    ipc_async_cmd_t* async_cmd;

    //ACK back to SGPE with "IPC_SGPE_PGPE_RC_SUCCESS"
    //At this point, every quad is at safe Pstate, so no need to to move quad's frequency. Also,
    //system is at safe frequency/voltage, so need to interlock with OCC for a quad exit. Simply,
    //ACK back to SGPE, so that it can complete STOP11 Exit.
    if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack == 1)
    {
        async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd;
        ipcmsg_s2p_update_active_quads_t* args = (ipcmsg_s2p_update_active_quads_t*)async_cmd->cmd_data;

        G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads |= (args->fields.requested_quads << 2);
        args->fields.return_active_quads = G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads >> 2;
        args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd, IPC_RC_SUCCESS);
        p9_pgpe_optrace(ACK_QUAD_ACTV);
    }

    //ACK back to SGPE with "IPC_SGPE_PGPE_RC_SUCCESS"
    if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack == 1)
    {
        async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd;
        ipcmsg_s2p_update_active_cores_t* args = (ipcmsg_s2p_update_active_cores_t*)async_cmd->cmd_data;

        if (args->fields.update_type == UPDATE_ACTIVE_CORES_TYPE_ENTRY)
        {
            G_pgpe_pstate_record.activeCores &= ~(args->fields.active_cores << 8);
        }
        else
        {
            G_pgpe_pstate_record.activeCores |= (args->fields.active_cores << 8);
        }

        args->fields.return_active_cores = G_pgpe_pstate_record.activeCores >> 8;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd, IPC_RC_SUCCESS);
        args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
        p9_pgpe_optrace(ACK_CORES_ACTV);
    }

}

//
//  p9_pgpe_pstate_at_target
//
//  This function checks if PGPE has actuated the system to the target pstate. It
//  is called in actuate thread loop
//
int32_t p9_pgpe_pstate_at_target()
{
    if( G_pgpe_pstate_record.psCurr.fields.glb != G_pgpe_pstate_record.psTarget.fields.glb ||
        ((G_pgpe_pstate_record.activeQuads & QUAD0_BIT_MASK)
         && G_pgpe_pstate_record.psCurr.fields.quads[0] ^ G_pgpe_pstate_record.psTarget.fields.quads[0]) ||
        ((G_pgpe_pstate_record.activeQuads & QUAD1_BIT_MASK)
         && G_pgpe_pstate_record.psCurr.fields.quads[1] ^ G_pgpe_pstate_record.psTarget.fields.quads[1]) ||
        ((G_pgpe_pstate_record.activeQuads & QUAD2_BIT_MASK)
         && G_pgpe_pstate_record.psCurr.fields.quads[2] ^ G_pgpe_pstate_record.psTarget.fields.quads[2]) ||
        ((G_pgpe_pstate_record.activeQuads & QUAD3_BIT_MASK)
         && G_pgpe_pstate_record.psCurr.fields.quads[3] ^ G_pgpe_pstate_record.psTarget.fields.quads[3]) ||
        ((G_pgpe_pstate_record.activeQuads & QUAD4_BIT_MASK)
         && G_pgpe_pstate_record.psCurr.fields.quads[4] ^ G_pgpe_pstate_record.psTarget.fields.quads[4]) ||
        ((G_pgpe_pstate_record.activeQuads & QUAD5_BIT_MASK)
         && G_pgpe_pstate_record.psCurr.fields.quads[5] ^ G_pgpe_pstate_record.psTarget.fields.quads[5]) )
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int32_t p9_pgpe_pstate_at_wov_target()
{
    if (G_pgpe_pstate_record.wov.curr_pct ^ G_pgpe_pstate_record.wov.target_pct)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

//
//  p9_pgpe_pstate_do_step
//
//  This function actuates(move frequency and voltage) the system towards target pstate
//  with 'external vrm step size" voltage at a time.
//
void p9_pgpe_pstate_do_step()
{

    //Do one actuate step
    PK_TRACE_DBG("STEP: Entry");
    PK_TRACE_INF("STEP: GTgt,GCurr 0x%x, 0x%x", G_pgpe_pstate_record.psTarget.fields.glb,
                 G_pgpe_pstate_record.psCurr.fields.glb);
    PK_TRACE_INF("STEP: QTgt,QCurr 0x%x,0x%x 0x%x,0x%x", G_pgpe_pstate_record.psTarget.fields.quads[0],
                 G_pgpe_pstate_record.psCurr.fields.quads[0], G_pgpe_pstate_record.psTarget.fields.quads[1],
                 G_pgpe_pstate_record.psCurr.fields.quads[1]);
    PK_TRACE_INF("STEP:QTgt,QCurr 0x%x,0x%x 0x%x,0x%x", G_pgpe_pstate_record.psTarget.fields.quads[2],
                 G_pgpe_pstate_record.psCurr.fields.quads[2], G_pgpe_pstate_record.psTarget.fields.quads[3],
                 G_pgpe_pstate_record.psCurr.fields.quads[3]);
    PK_TRACE_INF("STEP:QTgt,QCurr 0x%x,0x%x 0x%x,0x%x", G_pgpe_pstate_record.psTarget.fields.quads[4],
                 G_pgpe_pstate_record.psCurr.fields.quads[4], G_pgpe_pstate_record.psTarget.fields.quads[5],
                 G_pgpe_pstate_record.psCurr.fields.quads[5]);

    uint32_t q;
    uint32_t targetEVid = p9_pgpe_gppb_intp_vdd_from_ps(G_pgpe_pstate_record.psTarget.fields.glb, VPD_PT_SET_BIASED_SYSP);
    PK_TRACE_INF("STEP: biasSyspExtVrmCurr=0x%x, biasSyspExtVrmNext=0x%x, targetEVid=0x%x",
                 G_pgpe_pstate_record.biasSyspExtVrmCurr,
                 G_pgpe_pstate_record.biasSyspExtVrmNext, targetEVid);


    //Higher number PState
    if (((int16_t)(G_pgpe_pstate_record.psTarget.fields.glb) - (int16_t)(G_pgpe_pstate_record.psCurr.fields.glb)) > 0)
    {

        if ((G_pgpe_pstate_record.biasSyspExtVrmCurr - targetEVid ) <= G_gppb->ext_vrm_step_size_mv)
        {
            G_pgpe_pstate_record.biasSyspExtVrmNext = targetEVid;
            G_pgpe_pstate_record.psNext.fields.glb = G_pgpe_pstate_record.psTarget.fields.glb;

            PK_TRACE_INF("STEP: <= step_size");

            for (q = 0; q < MAX_QUADS; q++)
            {
                if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
                {
                    G_pgpe_pstate_record.psNext.fields.quads[q] = G_pgpe_pstate_record.psTarget.fields.quads[q];
                }
            }
        }
        else
        {
            G_pgpe_pstate_record.biasSyspExtVrmNext = G_pgpe_pstate_record.biasSyspExtVrmCurr - G_gppb->ext_vrm_step_size_mv;
            G_pgpe_pstate_record.psNext.fields.glb = p9_pgpe_gppb_intp_ps_from_ext_vdd(G_pgpe_pstate_record.biasSyspExtVrmNext);

            //It's possible that the interpolation function returns Pstate higher than
            //target due to rounding errors, so we adjust back.
            if (G_pgpe_pstate_record.psNext.fields.glb > G_pgpe_pstate_record.psTarget.fields.glb)
            {
                G_pgpe_pstate_record.psNext.fields.glb = G_pgpe_pstate_record.psTarget.fields.glb;
            }

            //Make sure voltage written corresponds exactly to a pstate
            G_pgpe_pstate_record.biasSyspExtVrmNext = p9_pgpe_gppb_intp_vdd_from_ps(G_pgpe_pstate_record.psNext.fields.glb,
                    VPD_PT_SET_BIASED_SYSP);

            for (q = 0; q < MAX_QUADS; q++)
            {
                if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
                {
                    G_pgpe_pstate_record.psNext.fields.quads[q] = G_pgpe_pstate_record.psTarget.fields.quads[q];
                }
            }

        }

        PK_TRACE_INF("STEP: biasSyspExtVrmNext=0x%x, glbPSNext=0x%x", G_pgpe_pstate_record.biasSyspExtVrmCurr,
                     G_pgpe_pstate_record.psNext.fields.glb);
        p9_pgpe_pstate_freq_updt(PGPE_FREQ_DIRECTION_DOWN);
        p9_pgpe_pstate_updt_ext_volt();
    }
    //Lower number PState
    else if (((int16_t)(G_pgpe_pstate_record.psTarget.fields.glb) - (int16_t)(G_pgpe_pstate_record.psCurr.fields.glb)) < 0)
    {

        if ((targetEVid - G_pgpe_pstate_record.biasSyspExtVrmCurr) <= G_gppb->ext_vrm_step_size_mv)
        {
            PK_TRACE_INF("STEP: <= step_size");
            G_pgpe_pstate_record.biasSyspExtVrmNext = targetEVid;
            G_pgpe_pstate_record.psNext.fields.glb = G_pgpe_pstate_record.psTarget.fields.glb;

            for (q = 0; q < MAX_QUADS; q++)
            {
                if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
                {
                    G_pgpe_pstate_record.psNext.fields.quads[q] = G_pgpe_pstate_record.psTarget.fields.quads[q];
                }
            }
        }
        else
        {
            PK_TRACE_INF("STEP: > step_size");
            G_pgpe_pstate_record.biasSyspExtVrmNext = G_pgpe_pstate_record.biasSyspExtVrmCurr + G_gppb->ext_vrm_step_size_mv;
            G_pgpe_pstate_record.psNext.fields.glb = p9_pgpe_gppb_intp_ps_from_ext_vdd(G_pgpe_pstate_record.biasSyspExtVrmNext);

            //It's possible that the interpolation function returns Pstate lower than
            //target due to rounding errors, so we adjust back.
            if (G_pgpe_pstate_record.psNext.fields.glb < G_pgpe_pstate_record.psTarget.fields.glb)
            {
                G_pgpe_pstate_record.psNext.fields.glb = G_pgpe_pstate_record.psTarget.fields.glb;
            }

            //Make sure voltage written corresponds exactly to a pstate
            G_pgpe_pstate_record.biasSyspExtVrmNext = p9_pgpe_gppb_intp_vdd_from_ps(G_pgpe_pstate_record.psNext.fields.glb,
                    VPD_PT_SET_BIASED_SYSP);

            for (q = 0; q < MAX_QUADS; q++)
            {
                if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
                {
                    if (G_pgpe_pstate_record.psTarget.fields.quads[q] <
                        G_pgpe_pstate_record.psNext.fields.glb)   //Keep localPS under GlobalPS
                    {
                        G_pgpe_pstate_record.psNext.fields.quads[q] = G_pgpe_pstate_record.psNext.fields.glb;
                    }
                    else
                    {
                        G_pgpe_pstate_record.psNext.fields.quads[q] = G_pgpe_pstate_record.psTarget.fields.quads[q];
                    }
                }
            }
        }

        PK_TRACE_INF("STEP: biasSyspExtVrmNext=0x%x, glbPSNext=0x%x", G_pgpe_pstate_record.biasSyspExtVrmCurr,
                     G_pgpe_pstate_record.psNext.fields.glb);
        p9_pgpe_pstate_updt_ext_volt();
        p9_pgpe_pstate_freq_updt(PGPE_FREQ_DIRECTION_UP);
    }
    else
    {
        //Local Pstate change
        if (p9_pgpe_pstate_at_target() == 0)
        {
            for (q = 0; q < MAX_QUADS; q++)
            {
                if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
                {
                    G_pgpe_pstate_record.psNext.fields.quads[q] = G_pgpe_pstate_record.psTarget.fields.quads[q];
                }
            }

            //Only local pstate change
            p9_pgpe_pstate_freq_updt(PGPE_FREQ_DIRECTION_NO_CHANGE);
        }

        if (p9_pgpe_pstate_at_wov_target() == 0)
        {
            PK_TRACE_INF("WOV updt ext_volt");
            p9_pgpe_pstate_updt_ext_volt();
        }
    }

    //Update current
    G_pgpe_pstate_record.psCurr.value = G_pgpe_pstate_record.psNext.value;

    //Update Shared SRAM
    p9_pgpe_pstate_updt_actual_quad();
    G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.psCurr.fields.quads[0] << 24) |
                                  (G_pgpe_pstate_record.psCurr.fields.quads[1]
                                   << 16) |
                                  (G_pgpe_pstate_record.psCurr.fields.quads[2] << 8) | G_pgpe_pstate_record.psCurr.fields.quads[3];
    G_pgpe_optrace_data.word[1] = (G_pgpe_pstate_record.psCurr.fields.quads[4] << 24) |
                                  (G_pgpe_pstate_record.psCurr.fields.quads[5]
                                   << 16) |
                                  G_pgpe_pstate_record.psCurr.fields.glb << 8 | G_pgpe_pstate_record.psTarget.fields.glb;
    G_pgpe_optrace_data.word[2] = (G_pgpe_pstate_record.biasSyspExtVrmCurr << 16) | G_pgpe_pstate_record.biasSyspExtVrmCurr;
    p9_pgpe_optrace(ACTUATE_STEP_DONE);
    PK_TRACE_DBG("STEP: Exit");
}

//
//  p9_pgpe_pstate__updt_ext_volt
//
//  Update External VRM to G_eVidNext
//
void p9_pgpe_pstate_updt_ext_volt()
{
    qppm_vdmcfgr_t vdmcfg;
    uint32_t cmeInterppmVdataEnableSet, q;
    qppm_qpmmr_t qpmmr;

    G_pgpe_pstate_record.wov.target_mv =
        (G_pgpe_pstate_record.biasSyspExtVrmNext * G_pgpe_pstate_record.wov.target_pct) / 1000;
    G_pgpe_pstate_record.extVrmNext = G_pgpe_pstate_record.biasSyspExtVrmNext - G_pgpe_pstate_record.wov.target_mv;

    if (G_gppb->wov_underv_vmin_mv  > G_pgpe_pstate_record.extVrmNext)
    {
        G_pgpe_pstate_record.extVrmNext = G_gppb->wov_underv_vmin_mv;
    }

#if !EPM_P9_TUNING
    uint32_t delay_ticks = 0;

    //Decreasing
    if (G_pgpe_pstate_record.extVrmNext < G_pgpe_pstate_record.extVrmCurr)
    {
        //Convert us to OTBR ticks. Each OTBR tick is 32ns, so 1us=(1000/32) OTBR ticks. But,
        //to keep the math simple(use shift instead of multiply) we approximate
        //1us as (1024/32)=32 OTBR ticks
        delay_ticks = ((G_pgpe_pstate_record.extVrmCurr - G_pgpe_pstate_record.extVrmNext) *
                       G_ext_vrm_dec_rate_mult_usperv) >> 5;
    }
    //Increasing
    else if (G_pgpe_pstate_record.extVrmNext > G_pgpe_pstate_record.extVrmCurr)
    {
        //Convert us to OTBR ticks. Each OTBR tick is 32ns, so 1us=(1000/32) OTBR ticks. But,
        //to keep the math simple(use shift instead of multiply) we approximate
        //1us as (1024/32)=32 OTBR ticks
        delay_ticks  = ((G_pgpe_pstate_record.extVrmNext - G_pgpe_pstate_record.extVrmCurr) *
                        G_ext_vrm_inc_rate_mult_usperv) >> 5;
    }

#endif

    //Update external voltage
    avs_driver_voltage_write(G_gppb->avs_bus_topology.vdd_avsbus_num, G_gppb->avs_bus_topology.vdd_avsbus_rail,
                             G_pgpe_pstate_record.extVrmNext);

#if !EPM_P9_TUNING

    //Delay for delay_ticks.
    //We do busy wait here, so that the running thread does NOT get blocked and is kept running by
    //PK kernel
    uint32_t tbStart, tbEnd, elapsed;

    if (delay_ticks > 0)
    {
        //Read TimebaseStart
        tbStart = in32(OCB_OTBR);

        do
        {
            //Read TimebaseEnd
            tbEnd = in32(OCB_OTBR);

            //Compute Elapsed Count with accounting for Timebase Wrapping
            if (tbEnd > tbStart)
            {
                elapsed = tbEnd - tbStart;
            }
            else
            {
                elapsed = 0xFFFFFFFF - tbStart + tbEnd + 1;
            }
        }
        while(elapsed < delay_ticks);
    }


    //We do busy wait here, so that the running thread does NOT get blocked and is kept running by
    //PK kernel
    if(G_pgpe_pstate_record.biasSyspExtVrmNext == p9_pgpe_gppb_intp_vdd_from_ps(G_pgpe_pstate_record.psNext.fields.glb,
            VPD_PT_SET_BIASED_SYSP))
    {
        delay_ticks = G_gppb->ext_vrm_stabilization_time_us >> 5;

        //Read TimebaseStart
        tbStart = in32(OCB_OTBR);

        do
        {
            //Read TimebaseEnd
            tbEnd = in32(OCB_OTBR);

            //Compute Elapsed Count with accounting for Timebase Wrapping
            if (tbEnd > tbStart)
            {
                elapsed = tbEnd - tbStart;
            }
            else
            {
                elapsed = 0xFFFFFFFF - tbStart + tbEnd + 1;
            }
        }
        while(elapsed < delay_ticks);

    }

#endif

    G_pgpe_pstate_record.biasSyspExtVrmCurr = G_pgpe_pstate_record.biasSyspExtVrmNext;
    G_pgpe_pstate_record.extVrmCurr = G_pgpe_pstate_record.extVrmNext;
    G_pgpe_pstate_record.wov.curr_mv =  G_pgpe_pstate_record.wov.target_mv;
    G_pgpe_pstate_record.wov.curr_pct =  G_pgpe_pstate_record.wov.target_pct;

    if (G_pgpe_pstate_record.wov.min_volt > G_pgpe_pstate_record.wov.curr_mv)
    {
        G_pgpe_pstate_record.wov.min_volt = G_pgpe_pstate_record.wov.curr_mv;
    }

    if (G_pgpe_pstate_record.wov.max_volt < G_pgpe_pstate_record.wov.curr_mv)
    {
        G_pgpe_pstate_record.wov.max_volt = G_pgpe_pstate_record.wov.curr_mv;
    }


    //If VDM is disabled, update VDMCFG register for every quad
    if (!(G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_VDM_ENABLE))
    {
        vdmcfg.value = 0;
        vdmcfg.fields.vdm_vid_compare = (G_pgpe_pstate_record.biasSyspExtVrmCurr - 512) >> 2;

        for (q = 0; q < MAX_QUADS; q++)
        {
            if (G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
            {
                //Take away CME control by writing to QPMMR
                GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR, q), qpmmr.value);
                cmeInterppmVdataEnableSet = qpmmr.fields.cme_interppm_vdata_enable;
                qpmmr.value = BIT64(24);
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_CLR, q), qpmmr.value);

                //Update 0:7 of VDMCFG
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_VDMCFGR, q), vdmcfg.value);

                //Restore QPMMR
                if (cmeInterppmVdataEnableSet == 1)
                {
                    qpmmr.value = BIT64(24);
                    GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_OR, q), qpmmr.value);
                }
            }
        }
    }
}

//
//  Frequency Update
//
//Sends a DB0 to all active CMEs, so that Quad Managers(CMEs) update DPLL
void p9_pgpe_pstate_freq_updt(uint32_t freq_change_dir)
{
    PK_TRACE_DBG("FREQ: Enter");

    G_pgpe_pstate_record.wov.frequency_change_direction =  freq_change_dir;

    if (G_pgpe_pstate_record.wov.status & WOV_UNDERVOLT_ENABLED)
    {
        p9_pgpe_pstate_adjust_wov();
    }

    pgpe_db0_glb_bcast_t db0;
    db0.value = G_pgpe_pstate_record.psNext.value;
    db0.fields.msg_id = MSGID_DB0_GLOBAL_ACTUAL_BROADCAST;

    //Ensure  is not lower numbered(higher freq/volt) than globalPS
    if ((G_pgpe_pstate_record.psNext.fields.quads[0] < G_pgpe_pstate_record.psNext.fields.glb) ||
        (G_pgpe_pstate_record.psNext.fields.quads[1] < G_pgpe_pstate_record.psNext.fields.glb) ||
        (G_pgpe_pstate_record.psNext.fields.quads[2] < G_pgpe_pstate_record.psNext.fields.glb) ||
        (G_pgpe_pstate_record.psNext.fields.quads[3] < G_pgpe_pstate_record.psNext.fields.glb) ||
        (G_pgpe_pstate_record.psNext.fields.quads[4] < G_pgpe_pstate_record.psNext.fields.glb) ||
        (G_pgpe_pstate_record.psNext.fields.quads[5] < G_pgpe_pstate_record.psNext.fields.glb))
    {
        PK_TRACE_ERR("FREQ: Invalid Freq Updt.  < globalPS");
        PGPE_TRACE_AND_PANIC(PGPE_INVALID_FREQ_UPDT);
    }

    p9_pgpe_optrace(ACTL_BROADCAST);

    //If ACTIVE_CORES_UPDT is pending, then send a DB3(High-Priority Pstate Request) with
    //payload in DB0.
    if((G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack == 1) ||
       (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack == 1))
    {
        //Write DB0, but with top-byte = 0. This way DB0 interrupt doesn't happen, but
        //we still send CME the necessary data. CME will read this inside the DB3 interrupt
        //which we write next
        db0.fields.msg_id =  MSGID_DB0_DB3_PAYLOAD;
        db3_parms_t p = {MSGID_DB3_HIGH_PRIORITY_PSTATE,
                         db0.value,
                         PGPE_DB3_WRITE_DB0,
                         G_pgpe_pstate_record.activeDB,
                         PGPE_DB_ACK_WAIT_CME,
                         G_pgpe_pstate_record.activeQuads,
                         MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK,
                         PGPE_DB3_CHECK_NACKS
                        };
        p.db3val = (uint64_t)(MSGID_DB3_HIGH_PRIORITY_PSTATE) << 56;
        p.useDB3ValForNacks = 0;
        p9_pgpe_send_db3(p);
    }
    //Otherwise, send regular DB0
    else
    {
        db0_parms_t p = {db0.value,
                         PGPE_DB0_TYPE_MULTICAST,
                         G_pgpe_pstate_record.activeDB,
                         PGPE_DB_ACK_WAIT_CME,
                         G_pgpe_pstate_record.activeQuads,
                         MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK
                        };
        p9_pgpe_send_db0(p);
    }

    p9_pgpe_optrace(ACK_ACTL_DONE);

    G_pgpe_pstate_record.wov.frequency_change_direction = PGPE_FREQ_DIRECTION_NO_CHANGE;

    PK_TRACE_DBG("FREQ: Exit");
}

//
//  p9_pgpe_pstate_write_core_throttle
//
//  Write to the PC Throttle Control register.  Ignore any PCB errors.
//  Option to retry on known PC hardware bug (always cleanup if happens)
//
void p9_pgpe_pstate_write_core_throttle(uint32_t throttleData, uint32_t enable_retry)
{
    uint32_t pc_fail;
    uint32_t value = mfmsr();
    mtmsr(value | MSR_THROTTLE_MASK); //don't cause halt if all cores offline or address error (PC Timeout)


    do
    {
        out64(THROTTLE_SCOM_MULTICAST_WRITE, ((uint64_t) throttleData << 32)); //apply new throttle SCOM setting

        // Work-around for PC HW problem. See SW407201
        // If ADDRESS_ERROR then perform a SCOM write of all zeros to
        // 2n010800 where n is the core number. Ignore ADDRESS_ERROR
        // and TIMEOUT returned.
        pc_fail = (((mfmsr() >> 20) & 0x7) == 0x4);

        if (pc_fail)
        {
            out64(WORKAROUND_SCOM_MULTICAST_WRITE, 0);
        }
    }
    while (enable_retry && pc_fail);

    mtmsr(value); // restore MSR
}


//
//  p9_pgpe_droop_throttle
//
inline void p9_pgpe_droop_throttle()
{
    PkMachineContext ctx __attribute__((unused));
    uint32_t q;
    ocb_qcsr_t qcsr;
    qcsr.value = in32(G_OCB_QCSR);
    uint64_t value;
    uint32_t ex;

    //1.  PGPE sends Suspend Stop Entry DB3 to all active CMEs
    db3_parms_t p;
    p.db3val = (uint64_t)MSGID_DB3_SUSPEND_STOP_ENTRY << 56;
    p.db0val = 0;
    p.writeDB0          = PGPE_DB3_SKIP_WRITE_DB0;
    p.targetCores       = G_pgpe_pstate_record.activeDB;
    p.waitForAcks       = PGPE_DB_ACK_SKIP; //We skip ACKs here bc CME will set CME_FLAGS[]
    p.expectedAckFrom   = G_pgpe_pstate_record.activeQuads;
    p.expectedAckValue  = MSGID_PCB_TYPE4_SUSPEND_ENTRY_ACK;
    p.checkNACKs        = PGPE_DB3_SKIP_CHECK_NACKS;
    p.useDB3ValForNacks = 0;
    p9_pgpe_send_db3(p);

    //We poll on CME_FLAGS[] here. The CME doesn't send an ACK for SUSPEND_ENTRY DB3.
    //Instead, the stop code on CME will set the CME_FLAGS[] when it has suspended stop
    //entries
    uint32_t expectedCMEs = 0;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {
            expectedCMEs |= (qcsr.fields.ex_config & (QUAD_EX0_MASK(q) | QUAD_EX1_MASK(q)));
        }
    }

    PK_TRACE_INF("DTH: Expected CMEs=0x%x", expectedCMEs);

    while (expectedCMEs != 0)
    {
        for (q = 0; q < MAX_QUADS; q++)
        {
            for (ex = 0; ex < 2; ex++)
            {
                if (expectedCMEs & (QUAD_EX0_MASK(q) >> ex))
                {
                    GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_FLAGS, q, ex), value);

                    if (value & BIT64(CME_FLAGS_DROOP_SUSPEND_ENTRY))
                    {
                        expectedCMEs &= (~ (QUAD_EX0_MASK(q) >> ex));
                        PK_TRACE_INF("DTH: Suspend Entry Set Expected CMEs=0x%x", expectedCMEs);
                    }
                }
            }
        }
    }


    //3.  Set the OCC flag PGPE Prolonged Droop Workaround Active bit.
    out32(G_OCB_OCCFLG_OR, BIT32(PGPE_PROLONGED_DROOP_WORKAROUND_ACTIVE));

    //2.  Call the core_instruction_throttle() procedure to enable throttle (same as used by FIT).
    p9_pgpe_pstate_write_core_throttle(CORE_IFU_THROTTLE, RETRY);


    //4.  Clear the Prolonged Droop Global variables (Bit vector and retry counts).
    G_pgpe_pstate_record.cntNACKs = 0;

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_pstate_record.quadsCntNACKs[q] = 0;
    }

    //5.  Write PK Trace and Optrace record that the Prolonged Throttle workaround was engaged, including a bit vector of Quads that provided the NACK(s).
    G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24)  |
                                  (G_pgpe_pstate_record.psCurr.fields.glb << 16) |
                                  (G_pgpe_pstate_record.psTarget.fields.glb << 8) |
                                  G_pgpe_pstate_record.quadsNACKed;
    p9_pgpe_optrace(PROLONGED_DROOP_EVENT);


    PK_TRACE_INF("DTH: Droop Throttle Done");
}


//
//  p9_pgpe_droop_unthrottle
//
inline void p9_pgpe_droop_unthrottle()
{

    //1.  Call the core_instruction_throttle() procedure to disable throttle (same as used by FIT).
    p9_pgpe_pstate_write_core_throttle(CORE_THROTTLE_OFF, RETRY);

    //2.  PGPE sends Unsuspend Stop Entry DB3 to all active CMEs
    db3_parms_t p;
    p.db3val = (uint64_t)MSGID_DB3_UNSUSPEND_STOP_ENTRY << 56;
    p.db0val = 0;
    p.writeDB0          = PGPE_DB3_SKIP_WRITE_DB0;
    p.targetCores       = G_pgpe_pstate_record.activeDB;
    p.waitForAcks       = PGPE_DB_ACK_WAIT_CME;
    p.expectedAckFrom   = G_pgpe_pstate_record.activeQuads;
    p.expectedAckValue  = MSGID_PCB_TYPE4_UNSUSPEND_ENTRY_ACK;
    p.checkNACKs        = PGPE_DB3_SKIP_CHECK_NACKS;
    p.useDB3ValForNacks = 0;
    p9_pgpe_send_db3(p);

    //3.  Send Doorbell0 PMSR Update with message Clear Pstates Suspended to all configured cores in the active Quads.
    p9_pgpe_pstate_send_pmsr_updt(DB0_PMSR_UPDT_CLEAR_PSTATES_SUSPENDED,
                                  G_pgpe_pstate_record.activeDB,
                                  G_pgpe_pstate_record.activeQuads);

    //4.  Clear the OCC flag PGPE Prolonged Droop Workaround Active. OCCFLG[PM_RESET_SUPPRESS] will be cleared later
    //after any pending IPCs from OCC have been processed and acked.
    out32(G_OCB_OCCFLG_CLR, BIT32(PGPE_PROLONGED_DROOP_WORKAROUND_ACTIVE));

    //5.  Write PK Trace and Optrace record that the Prolonged Throttle workaround was removed,
    //including the Total Retry Count and the most recent bit vector of Quads that provided the NACK(s) .
    G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.quadsNACKed << 24)  |
                                  (G_pgpe_pstate_record.activeCores >> 8);
    G_pgpe_optrace_data.word[1] = G_pgpe_pstate_record.cntNACKs;
    p9_pgpe_optrace(PROLONGED_DROOP_RESOLVED);

    PK_TRACE_INF("DTH: Droop Unthrottle Done");
}


//
// p9_pgpe_pstate_wov_init
//
void p9_pgpe_pstate_wov_init()
{
    G_pgpe_pstate_record.wov.avg_freq_gt_target_freq = 0;
    G_pgpe_pstate_record.wov.freq_loss_tenths_gt_max_droop_tenths = 0;
    G_pgpe_pstate_record.wov.status = WOV_DISABLED;
    G_pgpe_pstate_record.wov.info = 0xdeadde04;
}

//
//p9_pgpe_pstate_adjust_wov
//
void p9_pgpe_pstate_adjust_wov()
{
    uint32_t max_freq_loss_percent_tenths = 0;
    uint32_t sample_valid = 0;
    uint32_t q = 0;
    uint32_t freq_loss = 0;
    uint64_t qfmr;
    uint32_t delta_tb, delta_cycles, new_tb, new_cycles;

    PK_TRACE_DBG("WOV: Adjust");

    ocb_qcsr_t qcsr;
    qcsr.value = in32(G_OCB_QCSR);

    //Determine performance loss
    for (q = 0; q < MAX_QUADS; q++)
    {
        //If quad not in STOP11. Active quads only has quads that are NOT in STOP11, and
        //have been registered with PGPE. Therefore we OR in the requested_active_quads which
        //include quads that are up, but not yet registered with PGPE
        if (G_pgpe_pstate_record.activeQuads  &  QUAD_MASK(q))
        {
            //Sample Frequency
            //Read from EX0(if configured). Otherwise, read from EX1
            if (qcsr.fields.ex_config & QUAD_EX0_MASK(q))
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_QFMR, q, 0), qfmr);
            }
            else
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_QFMR, q, 1), qfmr);
            }

            new_tb = qfmr >> 32;
            new_cycles = qfmr & (0xFFFFFFFF);

            PK_TRACE_DBG("WOV: QFMR[%d]=0x%08x %08x ", q, qfmr >> 32, qfmr);

            //If freq_change_in_progress
            if (G_pgpe_pstate_record.wov.frequency_change_direction != PGPE_FREQ_DIRECTION_NO_CHANGE)
            {
                G_pgpe_pstate_record.wov.freq_changed[q] = G_pgpe_pstate_record.wov.frequency_change_direction;
            }
            else
            {
                sample_valid = 1;
                G_pgpe_pstate_record.wov.target_freq[q] = p9_pgpe_gppb_freq_from_ps(G_pgpe_pstate_record.psCurr.fields.quads[q]);

                //Calculate delta timebase while accounting for rollover
                delta_tb = new_tb - G_pgpe_pstate_record.wov.last_qfmr_tb[q];

                if (delta_tb & 0x80000000)
                {
                    delta_tb += 0xFFFFFFFF;
                }

                //Calculate delta cyles while accounting for rollover
                delta_cycles = new_cycles - G_pgpe_pstate_record.wov.last_qfmr_cycles[q];

                if (delta_cycles & 0x80000000)
                {
                    delta_cycles += 0xFFFFFFFF;
                }

                G_pgpe_pstate_record.wov.avg_freq[q] = (delta_cycles * (G_gppb->nest_frequency_mhz >> 3)) /
                                                       delta_tb;


                if (G_pgpe_pstate_record.wov.avg_freq[q] >
                    G_pgpe_pstate_record.wov.target_freq[q])   // ensure that the calculation doesn't result in negative loss
                {
                    //\todo Understand why is happening on pstate change and Add this back
                    PK_TRACE_INF("WOV: WARNING Avg Freq sampled greater than target freq for quad[%d], avg=0x%x,tgt=0x%x", q,
                                 G_pgpe_pstate_record.wov.avg_freq[q],
                                 G_pgpe_pstate_record.wov.target_freq[q]);
                    G_pgpe_pstate_record.wov.avg_freq_gt_target_freq = 1;
                    // PGPE_TRACE_AND_PANIC(PGPE_UVOLT_AVG_FREQ_GREATER_THAN_TARGET);//should not happen since we interlock with Pstate change
                }
                else
                {
                    freq_loss = G_pgpe_pstate_record.wov.target_freq[q] - G_pgpe_pstate_record.wov.avg_freq[q];
                }

                G_pgpe_pstate_record.wov.freq_loss_percent_tenths[q] = (freq_loss * 1000) / G_pgpe_pstate_record.wov.target_freq[q];

                PK_TRACE_DBG("AUV: Quad[%d] TgtFreq=0x%x Avg_Freq=0x%x FreqLossPercentTenths=0x%x", q,
                             G_pgpe_pstate_record.wov.target_freq[q], G_pgpe_pstate_record.wov.avg_freq[q],
                             G_pgpe_pstate_record.wov.freq_loss_percent_tenths[q]);

                if (G_pgpe_pstate_record.wov.freq_loss_percent_tenths[q] > G_gppb->wov_max_droop_pct)
                {
                    //\todo Understand why is happening on pstate change and Add this back
                    PK_TRACE_INF("AUV: WARNING Freq Lost Percent Tenths greater than Max Droop Percent Tenths for quad [%d], freq_loss=0x%x",
                                 q, G_pgpe_pstate_record.wov.freq_loss_percent_tenths[q]);
                    G_pgpe_pstate_record.wov.freq_loss_tenths_gt_max_droop_tenths =
                        G_pgpe_pstate_record.wov.freq_loss_percent_tenths[q];
                    //   PGPE_TRACE_AND_PANIC(PGPE_UVOLT_FREQ_LOSS_GREATER_THAN_MAX_DROOP);  // only DPLL droop can reduce frequency if not pstate change
                }

                // remember the most freq loss seen across all quads that didnt change pstate
                if (G_pgpe_pstate_record.wov.freq_loss_percent_tenths[q] > max_freq_loss_percent_tenths)
                {
                    max_freq_loss_percent_tenths = G_pgpe_pstate_record.wov.freq_loss_percent_tenths[q];
                }
            }

            G_pgpe_pstate_record.wov.last_qfmr_tb[q] = new_tb;
            G_pgpe_pstate_record.wov.last_qfmr_cycles[q] = new_cycles;
        }
    }

    if (sample_valid)   // don't update wov parameters unless at least one quad has a valid sample
    {
        // WOV ALGORITHM BEGIN
        if (max_freq_loss_percent_tenths < G_gppb->wov_underv_perf_loss_thresh_pct)
        {
            if (G_pgpe_pstate_record.wov.curr_pct < G_gppb->wov_underv_max_pct)
            {
                G_pgpe_pstate_record.wov.target_pct += G_gppb->wov_underv_step_incr_pct;
            }
            else
            {
                G_pgpe_pstate_record.wov.target_pct = G_gppb->wov_underv_max_pct;
            }

            G_pgpe_pstate_record.excessiveDroop = 0;
        }
        else
        {
            if (G_pgpe_pstate_record.wov.target_pct > 0)
            {
                G_pgpe_pstate_record.wov.target_pct -= G_gppb->wov_underv_step_incr_pct;
            }

            G_pgpe_pstate_record.excessiveDroop = 1;
        }
    }// WOV ALGORITHM END

    PK_TRACE_INF("WOV: wov_curr_pct=%d, wov_tgt_pct=%d",
                 G_pgpe_pstate_record.wov.curr_pct,
                 G_pgpe_pstate_record.wov.target_pct);

}

//
// p9_pgpe_pstate_reset_wov()
//
void p9_pgpe_pstate_reset_wov()
{
    uint64_t qfmr;
    ocb_qcsr_t qcsr;
    uint32_t q;

    //Reset wov steps to 0
    G_pgpe_pstate_record.wov.curr_pct = 0;
    G_pgpe_pstate_record.wov.target_pct = 0;

    //Update QFMR snapshot
    qcsr.value = in32(G_OCB_QCSR);

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (G_pgpe_pstate_record.activeQuads &  QUAD_MASK(q))
        {
            //Read from EX0(if configured). Otherwise, read from EX1
            if (qcsr.fields.ex_config & QUAD_EX0_MASK(q))
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_QFMR, q, 0), qfmr);
            }
            else
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_QFMR, q, 1), qfmr);
            }

            G_pgpe_pstate_record.wov.last_qfmr_tb[q] = ((qfmr >> 32) & 0xFFFFFFFF);
            G_pgpe_pstate_record.wov.last_qfmr_cycles[q] = qfmr & 0xFFFFFFFF;
        }
    }

}
