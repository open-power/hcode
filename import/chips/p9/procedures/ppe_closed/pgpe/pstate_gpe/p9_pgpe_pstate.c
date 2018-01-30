/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_pstate.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2018                                                    */
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
extern uint32_t G_ext_vrm_inc_rate_mult_usperus;
extern uint32_t G_ext_vrm_dec_rate_mult_usperus;
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
void p9_pgpe_pstate_freq_updt();
void p9_pgpe_pstate_dpll_write(uint32_t quadsVector, uint64_t val);
void p9_pgpe_droop_throttle();
void p9_pgpe_droop_unthrottle();

//
//p9_pgpe_pstate_init
//
//This function initializes all non-zero values in G_pgpe_pstate_record. To begin with all
//the fields in the structure are set to zero(see p9_pgpe_main.c). Here only non-zero value are set
void p9_pgpe_pstate_init()
{
    uint32_t q, c;
    ocb_ccsr_t ccsr;
    ccsr.value = in32(OCB_CCSR);

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
        PK_TRACE_INF("Safe Frequency is NOT set.  Using POWERSAVE as Pstate as safe");
    }

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_pstate_record.psClipMax[q] = G_pgpe_pstate_record.safePstate;
        G_pgpe_pstate_record.psClipMin[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][ULTRA].pstate;
        G_pgpe_pstate_record.quadPSComputed[q] = G_pgpe_pstate_record.safePstate;
        G_pgpe_pstate_record.globalPSComputed = G_pgpe_pstate_record.safePstate;
        G_pgpe_pstate_record.quadPSTarget[q] = G_pgpe_pstate_record.safePstate;
        G_pgpe_pstate_record.globalPSTarget = G_pgpe_pstate_record.safePstate;
        G_pgpe_pstate_record.quadPSCurr[q] = G_pgpe_pstate_record.safePstate;
        G_pgpe_pstate_record.globalPSCurr  = G_pgpe_pstate_record.safePstate;
        G_pgpe_pstate_record.quadPSNext[q] = G_pgpe_pstate_record.safePstate;
        G_pgpe_pstate_record.globalPSNext  = G_pgpe_pstate_record.safePstate;

        // Original behavior.  Can be removed once G_gppb->options.pad has
        // good_cores_in_sort always filled in correctly.
        for (c = (q * CORES_PER_QUAD); c < (q + 1)*CORES_PER_QUAD; c++)
        {
            if (ccsr.value & CORE_MASK(c))
            {
                G_pgpe_pstate_record.numConfCores += 1;
            }
        }
    }

    // CQ: SW415420
    // Load the number of cores for this part.  Note: this is called
    // "Configured Cores" but this is really not the actual case;  this
    // is the originally good cores from the VPD for this sort to be
    // used by the WOF algorithm to compute vratio.
    //
    // The following overlay is done so allow external tooling to use
    // the earlier version of header (pre-adding the good_cores_in_sort
    // field in the options.pad word).
    GPPBOptionsPadUse pad;
    pad = (GPPBOptionsPadUse)G_gppb->options.pad;

    if (pad.fields.good_cores_in_sort)
    {
        G_pgpe_pstate_record.numConfCores = pad.fields.good_cores_in_sort;
    }

    //Init OCC Shared SRAM
    G_pgpe_pstate_record.pQuadState0 = (quad_state0_t*)G_pgpe_header_data->g_quad_status_addr;
    G_pgpe_pstate_record.pQuadState1 = (quad_state1_t*)(G_pgpe_header_data->g_quad_status_addr + 2);
    G_pgpe_pstate_record.pReqActQuads = (requested_active_quads_t*)(G_pgpe_header_data->g_req_active_quad_addr);
    G_pgpe_pstate_record.pQuadState0->fields.quad0_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.quad1_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.quad2_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.quad3_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.active_cores = 0;
    G_pgpe_pstate_record.pQuadState1->fields.quad4_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState1->fields.quad5_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState1->fields.active_cores = 0x0;
    G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads = 0x0;

    //Create Semaphores
    pk_semaphore_create(&(G_pgpe_pstate_record.sem_actuate), 0, 1);
    pk_semaphore_create(&(G_pgpe_pstate_record.sem_sgpe_wait), 0, 1);
    pk_semaphore_create(&(G_pgpe_pstate_record.sem_process_req), 0, 1);
}

//
//p9_pgpe_pstate_setup_process_pcb_type4
//
//Called only once during PGPE boot(actuate thread initialization)
//It reads any pending opit4pr aka CME registration messages from
//Quad Manager CME, and updates the list of activeQuad and activeCores.
//Finally, it unmasks PCB_TYPE4 interrupt for future CME registration msgs
void p9_pgpe_pstate_setup_process_pcb_type4()
{
    ocb_ccsr_t ccsr;
    uint32_t opit4pr, opit4prQuad, q, c;
    opit4pr = in32(OCB_OPIT4PRA); //Read current opit4pr
    ccsr.value = in32(OCB_CCSR);

    PK_TRACE_INF("PCB4: opit4pr=0x%x\n", opit4pr);

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

    PK_TRACE_INF("PCB4: ActiveQuads=0x%x ActiveDB=0x%x, ActiveCores=0x%x\n", G_pgpe_pstate_record.activeQuads ,
                 G_pgpe_pstate_record.activeDB, G_pgpe_pstate_record.activeCores);

    //Enable PCB_INTR_TYPE4
    out32(OCB_OPIT4PRA_CLR, opit4pr);
    out32(OCB_OISR1_CLR, BIT32(17));
    g_oimr_override &= ~BIT64(49);
    out32(OCB_OIMR1_CLR, BIT32(17));
}

//
//p9_pgpe_pstate_do_auction
//
//This function does the Pstate Auction. First, it local auction for each quad, and then
//global auction. It reads from coresPSRequest structure, and produces auction results in
//quadPSComputed, and globalPSComputer.
void p9_pgpe_pstate_do_auction()
{
    PK_TRACE_INF("AUC: Start");
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
            G_pgpe_pstate_record.quadPSComputed[q] = G_pgpe_pstate_record.safePstate;

            for (c = FIRST_CORE_FROM_QUAD(q); c < LAST_CORE_FROM_QUAD(q); c++)
            {
                //If WOF_Enabled, only then activeCores is updated and represent the accurate state of activeCores.
                //Otherwise, activeDB represents which cores are active.
                //In the latter case, STOP 11 Entry/Exit can modify which cores are active
                if ((G_pgpe_pstate_record.wofStatus == WOF_ENABLED && (G_pgpe_pstate_record.activeCores & CORE_MASK(c))) ||
                    (G_pgpe_pstate_record.activeDB & CORE_MASK(c)))
                {
                    if (G_pgpe_pstate_record.quadPSComputed[q] > G_pgpe_pstate_record.coresPSRequest[c])
                    {
                        G_pgpe_pstate_record.quadPSComputed[q] = G_pgpe_pstate_record.coresPSRequest[c];
                    }
                }
            }
        }
        else
        {
            G_pgpe_pstate_record.quadPSComputed[q] = 0xFF;
        }

    }

    //Global PState Auction
    G_pgpe_pstate_record.globalPSComputed = G_pgpe_pstate_record.safePstate;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {
            if (G_pgpe_pstate_record.globalPSComputed  > G_pgpe_pstate_record.quadPSComputed[q])
            {
                G_pgpe_pstate_record.globalPSComputed  = G_pgpe_pstate_record.quadPSComputed[q];
            }
        }
    }

    PK_TRACE_DBG("AUC: [Computed] 0x%x[0] 0x%x[1] 0x%x[2] 0x%x[3]", G_pgpe_pstate_record.quadPSComputed[0]
                 , G_pgpe_pstate_record.quadPSComputed[1]
                 , G_pgpe_pstate_record.quadPSComputed[2],
                 G_pgpe_pstate_record.quadPSComputed[3]);
    PK_TRACE_DBG("AUC: [Computed] 0x%x[4] 0x%x[5] 0x%x(glb)", G_pgpe_pstate_record.quadPSComputed[4]
                 , G_pgpe_pstate_record.quadPSComputed[5]
                 , G_pgpe_pstate_record.globalPSComputed);
}

//
//p9_pgpe_pstate_apply_clips
//
void p9_pgpe_pstate_apply_clips()
{
    PK_TRACE_INF("APC: Applying Clips");
    uint32_t q;

    for (q = 0; q < MAX_QUADS; q++)
    {
        uint8_t minPS = G_pgpe_pstate_record.psClipMin[q];
        uint8_t maxPS = G_pgpe_pstate_record.psClipMax[q] < G_pgpe_pstate_record.safePstate ?
                        G_pgpe_pstate_record.psClipMax[q] : G_pgpe_pstate_record.safePstate;

        if (G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {

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

            if (G_pgpe_pstate_record.quadPSComputed[q] > maxPS)
            {
                G_pgpe_pstate_record.quadPSTarget[q] = maxPS;
            }
            else if(G_pgpe_pstate_record.quadPSComputed[q] < minPS)
            {
                G_pgpe_pstate_record.quadPSTarget[q] = minPS;
            }
            else
            {
                G_pgpe_pstate_record.quadPSTarget[q] = G_pgpe_pstate_record.quadPSComputed[q];
            }
        }
        else
        {
            G_pgpe_pstate_record.quadPSTarget[q] = 0xFF;
            G_pgpe_pstate_record.quadPSCurr[q] = 0xFF;
            G_pgpe_pstate_record.quadPSNext[q] = 0xFF;
        }
    }

    //Global PState Auction
    G_pgpe_pstate_record.globalPSTarget = G_pgpe_pstate_record.safePstate;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {
            if (G_pgpe_pstate_record.globalPSTarget  > G_pgpe_pstate_record.quadPSTarget[q])
            {
                G_pgpe_pstate_record.globalPSTarget  = G_pgpe_pstate_record.quadPSTarget[q];
            }
        }
    }

    PK_TRACE_DBG("APC: [Target] 0x%x[0] 0x%x[1] 0x%x[2] 0x%x[3]", G_pgpe_pstate_record.quadPSTarget[0],
                 G_pgpe_pstate_record.quadPSTarget[1],
                 G_pgpe_pstate_record.quadPSTarget[2],
                 G_pgpe_pstate_record.quadPSTarget[3]);
    G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.quadPSTarget[2] << 24) |
                                  (G_pgpe_pstate_record.quadPSTarget[3] << 16) |
                                  (G_pgpe_pstate_record.quadPSTarget[4] << 8) |
                                  G_pgpe_pstate_record.quadPSTarget[5];
    G_pgpe_optrace_data.word[1] = (AUCTION_DONE << 24) |
                                  (G_pgpe_pstate_record.globalPSTarget << 16) |
                                  (G_pgpe_pstate_record.quadPSTarget[0] << 8) |
                                  G_pgpe_pstate_record.quadPSTarget[1];
    p9_pgpe_optrace(AUCTION_DONE);
}

//
//p9_pgpe_pstate_calc_wof
//
void p9_pgpe_pstate_calc_wof()
{
    PK_TRACE_INF("WFC: Calc WOF");

    //1. Fratio calc
    //look at attributes
    //Currently, PGPE only supports FRATIO fixed mode.
    G_pgpe_pstate_record.fratio = 1;
    G_pgpe_pstate_record.findex = 0;

    //2. Vratio calc and VFRT table lookup
    //Currently, PGPE only support VRATIO Fixed and VRATIO active cores only
    if (G_pgpe_header_data->g_pgpe_qm_flags & PGPE_FLAG_ENABLE_VRATIO)
    {
        if (G_pgpe_pstate_record.numActiveCores != 0)
        {
            G_pgpe_pstate_record.vratio = ((G_pgpe_pstate_record.numActiveCores << 16) - 1) / G_pgpe_pstate_record.numConfCores;
        }
        else
        {
            G_pgpe_pstate_record.vratio = 0;
        }

        G_pgpe_pstate_record.vindex = (G_pgpe_pstate_record.vratio + 0xAAC - 0xA8B) / 0xAAC;
    }
    else
    {
        G_pgpe_pstate_record.vratio = 0xFFFF;
        G_pgpe_pstate_record.vindex = 23;
    }

    //3. Update wofClip(int. variable)
    G_pgpe_pstate_record.wofClip =
        G_pgpe_pstate_record.pVFRT->vfrt_data[G_pgpe_pstate_record.findex][G_pgpe_pstate_record.vindex];

    PK_TRACE_DBG("WFC: FClip_PS=0x%x, vindex=0x%x, vratio=0x%x", G_pgpe_pstate_record.wofClip, G_pgpe_pstate_record.vindex,
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
//p9_pgpe_pstate_update_wof_state
//
void p9_pgpe_pstate_update_wof_state()
{
    PK_TRACE_INF("WFU: Updt WOF Shr Sram");
    pgpe_wof_state_t* wof_state = (pgpe_wof_state_t*)G_pgpe_header_data->g_pgpe_wof_state_addr;
    wof_state->fields.fclip_ps = G_pgpe_pstate_record.wofClip;
    wof_state->fields.vclip_mv = G_pgpe_pstate_record.eVidCurr;
    wof_state->fields.fratio = G_pgpe_pstate_record.fratio;
    wof_state->fields.vratio = G_pgpe_pstate_record.vratio;
    PK_TRACE_DBG("WFC: FClip_PS=0x%x, vindex=0x%x, vratio=0x%x", G_pgpe_pstate_record.wofClip, G_pgpe_pstate_record.vindex,
                 G_pgpe_pstate_record.vratio);
}

//
//p9_pgpe_pstate_updt_actual_quad
//
//Updates OCC Shared SRAM "quad_pstate" fields
void p9_pgpe_pstate_updt_actual_quad(uint32_t quadsVector)
{
    PK_TRACE_INF("SRM: Updt Quad Shr Sram");
    uint32_t q;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (quadsVector & QUAD_MASK(q))
        {
            if (q == 0)
            {
                G_pgpe_pstate_record.pQuadState0->fields.quad0_pstate = G_pgpe_pstate_record.quadPSCurr[0];
            }
            else if(q == 1)
            {
                G_pgpe_pstate_record.pQuadState0->fields.quad1_pstate = G_pgpe_pstate_record.quadPSCurr[1];
            }
            else if(q == 2)
            {
                G_pgpe_pstate_record.pQuadState0->fields.quad2_pstate = G_pgpe_pstate_record.quadPSCurr[2];
            }
            else if(q == 3)
            {
                G_pgpe_pstate_record.pQuadState0->fields.quad3_pstate = G_pgpe_pstate_record.quadPSCurr[3];
            }
            else if(q == 4)
            {
                G_pgpe_pstate_record.pQuadState1->fields.quad4_pstate = G_pgpe_pstate_record.quadPSCurr[4];
            }
            else if(q == 5)
            {
                G_pgpe_pstate_record.pQuadState1->fields.quad5_pstate = G_pgpe_pstate_record.quadPSCurr[5];
            }
        }
    }
}

//
//p9_pgpe_send_db0
//
//Sends DB0 to CMEs
void p9_pgpe_send_db0(uint64_t db0, uint32_t origCoreVector,
                      uint32_t unicast, uint32_t ackWait, uint32_t origAckVector)
{

    uint32_t c, q;
    uint32_t ackVector = origAckVector;
    uint32_t coreVector = origCoreVector;
    G_pgpe_pstate_record.quadsNACKed = 0;

    PK_TRACE_DBG("SDB: Send DB0 coreVector=0x%x,unicast=0x%x,ackVector=0x%x", origCoreVector, unicast, origAckVector);

    //In case of unicast, only write DB0 for active cores. However, in case of
    //multicast just write DB0 of every configured core, but care only about active cores.

    if (unicast == PGPE_DB0_UNICAST)
    {
        for (c = 0; c < MAX_CORES; c++)
        {
            if (coreVector & CORE_MASK(c))
            {
#if NIMBUS_DD_LEVEL == 10
                p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEDB0, c), db0);
#else
                GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB0, c), db0)
#endif
            }
        }
    }
    else
    {
#if NIMBUS_DD_LEVEL == 10
        p9_dd1_db_multicast_wr(PCB_MULTICAST_GRP1 | CPPM_CMEDB0, db0, coreVector);
#else
        GPE_PUTSCOM(PCB_MULTICAST_GRP1 | CPPM_CMEDB0, db0)
#endif
    }

    p9_pgpe_wait_cme_db_ack(ackVector);//Wait for ACKs from QuadManagers

    PK_TRACE_DBG("SDB: quadsNACKed=0x%x", G_pgpe_pstate_record.quadsNACKed);

    if(G_pgpe_pstate_record.quadsNACKed)
    {
        PK_TRACE_DBG("SDB: quadsNACKed=0x%x", G_pgpe_pstate_record.quadsNACKed);

        //a. If OCC Scratch2 Core Throttle Continuous Change Enable bit is set (i.e. during Manufacturing test), halt the PGPE with a unique error code.
        //Engineering Note: characterization team is responsible to set CSAR bit "Disable CME NACK on Prolonged Droop" when doing PGPE throttle scom injection.
        if(in32(OCB_OCCS2) & BIT32(CORE_THROTTLE_CONTINUOUS_CHANGE_ENABLE))
        {
            PGPE_PANIC_AND_TRACE(PGPE_DROOP_AND_CORE_THRTLE_ENABLED);
        }

        //b) If  OCC flag PGPE Prolonged Droop Workaround Active bit is not set,
        //    call droop_throttle()

        if (!(in32(OCB_OCCFLG) & BIT32(PGPE_PROLONGED_DROOP_WORKAROUND_ACTIVE)))
        {
            p9_pgpe_droop_throttle();
        }

        //c) Send DB3 (Replay Previous DB0 Operation) to only the CME Quad Managers, and
        //their Sibling CME (if present), that responded with a NACK.
        uint64_t db3val = (uint64_t)MSGID_DB3_REPLAY_DB0 << 56;

        while(G_pgpe_pstate_record.quadsNACKed)
        {
            G_pgpe_pstate_record.cntNACKs++;
            ackVector = G_pgpe_pstate_record.quadsNACKed;

            for (q = 0; q < MAX_QUADS; q++)
            {
                //If quad provided an ACK, then don't send DB3 again
                if(!(G_pgpe_pstate_record.quadsNACKed & QUAD_MASK(q)))
                {
                    coreVector &= (~QUAD_ALL_CORES_MASK(q));
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
                out32(OCB_OCCFLG_OR, BIT32(PGPE_PM_RESET_SUPPRESS));

                // 3 Send DB0 PMSR Update with message Set Pstates Suspended only
                // to the CME QM (and their Siblings) that provided an ACK
                // (note: PGPE must also wait for them to ACK the DB0)
                p9_pgpe_pstate_pmsr_updt(DB0_PMSR_UPDT_SET_PSTATES_SUSPENDED,
                                         origCoreVector & (~coreVector),
                                         origAckVector & (~G_pgpe_pstate_record.quadsNACKed));
            }

            //The PGPE then retries the DB3 (Replay Previous DB0 Operation)
            //again as described above to all CME QM (and their Siblings)
            //that responded with NACK until it no longer gets a NACK (attempt to self-heal)
            for (c = 0; c < MAX_CORES; c++)
            {
                if (coreVector & CORE_MASK(c))
                {
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CORE(CPPM_CMEDB3, c), db3val)
                }
            }

            p9_pgpe_wait_cme_db_ack(ackVector);//Wait for ACKs from QuadManagers
        }//End while(quadNACked) loop

        //if OCC Flag Register PGPE Prolonged Droop Workaround Active bit is set and all CME QMs respond with ACK
        p9_pgpe_droop_unthrottle();
    }
}

void p9_pgpe_wait_cme_db_ack(uint32_t quadAckExpect)
{
    uint32_t q, c;
    uint32_t opit4pr, opit4prQuad, opit4Clr = 0;
    ocb_opit4cn_t opit4cn;

    PK_TRACE_INF("DBW: AckExpect=0x%x", quadAckExpect);

    //Now, wait for all Pstate Start DB0 to be ACKed
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
                    PK_TRACE_INF("DBW: Quad[%d] Acked", q);
                    quadAckExpect &= ~QUAD_MASK(q);
                    opit4Clr |= (opit4prQuad << ((MAX_QUADS - q + 1) << 2));
                    c = 0;

                    while(!(opit4prQuad & (0x8 >> c)))
                    {
                        c++;
                    }

                    opit4cn.value = in32(OCB_OPIT4CN((q * 4) + c));

                    PK_TRACE_INF("DBW: opit4cn[%d]=0x%x", c, opit4cn.value);

                    switch (opit4cn.value & 0xf)
                    {
                        case MSGID_PCB_TYPE4_ACK_ERROR: //0x0
                            PGPE_PANIC_AND_TRACE(PGPE_CME_DB0_ERROR_ACK);
                            break;

                        case MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK: //0x1
                        case MSGID_PCB_TYPE4_ACK_PSTATE_SUSPENDED: //0x2
                            //Do nothing as there is no error
                            break;

                        case MSGID_PCB_TYPE4_NACK_DROOP_PRESENT: //0x4
                            //Mark that this quad sent a NACK
                            PK_TRACE_DBG("DBW: Got NACK from %d", q);
                            G_pgpe_pstate_record.quadsNACKed |= QUAD_MASK(q);
                            PK_TRACE_DBG("DBW: QuadsNACKed=0x%x", G_pgpe_pstate_record.quadsNACKed);
                            break;

                        //Note this includes MSGID_PCB_TYPE4_QUAD_MGR_AVAILABLE(0x3)
                        //and other undefined encoding
                        default:
                            PK_TRACE_ERR("DBW:Unexpected qCME[%u] ACK type", q);
                            PGPE_PANIC_AND_TRACE(PGPE_CME_UNEXPECTED_DB0_ACK);
                    }

                }
                else if(!(G_pgpe_pstate_record.pendQuadsRegisterReceive & QUAD_MASK(q)))
                {
                    PK_TRACE_ERR("DBW:Unexpected qCME[%u] ACK", q);
                    PGPE_PANIC_AND_TRACE(PGPE_CME_UNEXPECTED_DB0_ACK);
                }
            }
        }

        out32(OCB_OPIT4PRA_CLR, opit4Clr);
    }

    PK_TRACE_DBG("DBW: QuadsNACKed=0x%x", G_pgpe_pstate_record.quadsNACKed);
}

//
//p9_pgpe_pstate_start()
//
void p9_pgpe_pstate_start(uint32_t pstate_start_origin)
{
    PK_TRACE_INF("PST: Start");
    qppm_dpll_stat_t dpll;
    qppm_dpll_freq_t dpllFreq;
    ocb_qcsr_t qcsr;
    uint8_t qPS;
    uint32_t lowestDpll, syncPstate, q, c;
    uint64_t value;

    qcsr.value = in32(OCB_QCSR);

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

            PK_TRACE_INF("PST: DPLL[%d]=0x%x", q, (dpll.fields.freqout));
        }
    }

    PK_TRACE_INF("PST: LowestDPLL:0x%x", lowestDpll);
    PK_TRACE_INF("PST: DPLL_PS0=0x%x", G_gppb->dpll_pstate0_value);

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

    PK_TRACE_INF("PST: SyncPstate=0x%x", syncPstate);

    //3. Move system to SyncPState
    external_voltage_control_init(&G_pgpe_pstate_record.eVidCurr);
    G_pgpe_pstate_record.eVidNext = p9_pgpe_gppb_intp_vdd_from_ps(syncPstate, VPD_PT_SET_BIASED_SYSP);
    PK_TRACE_INF("PST: eVid(Boot)=%umV,eVid(SyncPstate)=%umV", G_pgpe_pstate_record.eVidCurr,
                 G_pgpe_pstate_record.eVidNext);
    dpllFreq.value = 0;
    dpllFreq.fields.fmax  = G_gppb->dpll_pstate0_value - syncPstate;
    dpllFreq.fields.fmult = dpllFreq.fields.fmax;
    dpllFreq.fields.fmin  = dpllFreq.fields.fmax;

    //Move voltage only if raising it. Otherwise, we lower it later after
    //sending Pstate Start DB0. This is to make sure VDMs are not affected in
    //this window
    if (G_pgpe_pstate_record.eVidCurr > G_pgpe_pstate_record.eVidNext)
    {
        p9_pgpe_pstate_dpll_write(0xfc, dpllFreq.value);
    }
    else if(G_pgpe_pstate_record.eVidCurr < G_pgpe_pstate_record.eVidNext)
    {
        p9_pgpe_pstate_updt_ext_volt(G_pgpe_pstate_record.eVidNext); //update voltage
        p9_pgpe_pstate_dpll_write(0xfc, dpllFreq.value);
    }
    else
    {
        p9_pgpe_pstate_dpll_write(0xfc, dpllFreq.value);
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
                value |= BIT64(CME_SCRATCH_DB0_PROCESSING_ENABLE);
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);
            }

            if (qcsr.fields.ex_config &  QUAD_EX1_MASK(q))
            {
                //CME Scratch0
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 1), value);
                value |= (uint64_t)((MAX_QUADS - 1 - q) << 3) << 32;
                value |= BIT64(CME_SCRATCH_DB0_PROCESSING_ENABLE);
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
        out32(OCB_OIMR1_CLR, BIT32(14)); //Enable PCB_INTR_TYPE1
    }

    //7. Send clip updates to all quads that are active
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
    p9_pgpe_send_db0(db0_clip_bcast.value,
                     G_pgpe_pstate_record.activeDB,
                     PGPE_DB0_UNICAST,
                     PGPE_DB0_ACK_WAIT_CME,
                     G_pgpe_pstate_record.activeQuads);

    db0_clip_bcast.value = 0;
    db0_clip_bcast.fields.msg_id = MSGID_DB0_CLIP_BROADCAST;
    db0_clip_bcast.fields.clip_type = DB0_CLIP_BCAST_TYPE_PMAX;
    db0_clip_bcast.fields.quad0_clip = G_pgpe_pstate_record.psClipMin[0];
    db0_clip_bcast.fields.quad1_clip = G_pgpe_pstate_record.psClipMin[1];
    db0_clip_bcast.fields.quad2_clip = G_pgpe_pstate_record.psClipMin[2];
    db0_clip_bcast.fields.quad3_clip = G_pgpe_pstate_record.psClipMin[3];
    db0_clip_bcast.fields.quad4_clip = G_pgpe_pstate_record.psClipMin[4];
    db0_clip_bcast.fields.quad5_clip = G_pgpe_pstate_record.psClipMin[5];
    p9_pgpe_send_db0(db0_clip_bcast.value,
                     G_pgpe_pstate_record.activeDB,
                     PGPE_DB0_UNICAST,
                     PGPE_DB0_ACK_WAIT_CME,
                     G_pgpe_pstate_record.activeQuads);

    //Send Pstate Start Doorbell0
    pgpe_db0_start_ps_bcast_t db0;
    db0.value = 0;
    db0.fields.msg_id = MSGID_DB0_START_PSTATE_BROADCAST;
    db0.fields.global_actual = G_pgpe_pstate_record.globalPSTarget;
    db0.fields.quad0_ps = G_pgpe_pstate_record.quadPSTarget[0];
    db0.fields.quad1_ps = G_pgpe_pstate_record.quadPSTarget[1];
    db0.fields.quad2_ps = G_pgpe_pstate_record.quadPSTarget[2];
    db0.fields.quad3_ps = G_pgpe_pstate_record.quadPSTarget[3];
    db0.fields.quad4_ps = G_pgpe_pstate_record.quadPSTarget[4];
    db0.fields.quad5_ps = G_pgpe_pstate_record.quadPSTarget[5];

    p9_pgpe_send_db0(db0.value,
                     G_pgpe_pstate_record.activeDB,
                     PGPE_DB0_UNICAST,
                     PGPE_DB0_ACK_WAIT_CME,
                     G_pgpe_pstate_record.activeQuads);

    //In case VDM Prolonged Droop event occured during PSTATE_START, then clearing
    //ensures OCC is notified about Prolonged Droop event resolution.
    //Also, at this point nothing else should be pending from OCC, so safe to clear.
    out32(OCB_OCCFLG_CLR, BIT32(PGPE_PM_RESET_SUPPRESS));

    //Lower voltage if boot voltage > syncPstate voltage
    if (G_pgpe_pstate_record.eVidCurr > G_pgpe_pstate_record.eVidNext)
    {
        p9_pgpe_pstate_updt_ext_volt(G_pgpe_pstate_record.eVidNext); //update voltage
    }

    G_pgpe_pstate_record.globalPSCurr = G_pgpe_pstate_record.globalPSTarget;

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_pstate_record.quadPSCurr[q] = G_pgpe_pstate_record.quadPSTarget[q];
    }

    //Update Shared SRAM
    p9_pgpe_pstate_updt_actual_quad(0xFC);

    //6. Enable PStates
    G_pgpe_pstate_record.pstatesStatus = PSTATE_ACTIVE;
    uint32_t occScr2 = in32(OCB_OCCS2);
    occScr2 |= BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE);
    PK_TRACE_INF("PST: PGPE_PSTATE_PROTOCOL_ACTIVE set");
    out32(OCB_OCCS2, occScr2);

    PK_TRACE_INF("PST: Start Done");
}

//
//p9_pgpe_pstate_set_pmcr_owner
//
void p9_pgpe_pstate_set_pmcr_owner(uint32_t owner)
{
    int q = 0;
    ocb_qcsr_t qcsr;
    qcsr.value = in32(OCB_QCSR);

//Write to LMCR register in SIMICS results in error
//So, adding a build flag for SIMICS.
//For SIMICS, LMCR should be set through command line
#if !SIMICS_TUNING

    //Set PCB_TYPE1 interrupt
    if (owner == PMCR_OWNER_HOST)
    {
        PK_TRACE_DBG("OWNER_HOST");
        G_pgpe_pstate_record.pmcrOwner = PMCR_OWNER_HOST;
        g_oimr_override &= ~(BIT64(46));
        out32(OCB_OIMR1_CLR, BIT32(14)); //Enable PCB_INTR_TYPE1
    }
    else if (owner == PMCR_OWNER_OCC)
    {
        PK_TRACE_DBG("OWNER_OCC");
        G_pgpe_pstate_record.pmcrOwner = PMCR_OWNER_OCC;
        g_oimr_override |= BIT64(46);
        out32(OCB_OIMR1_OR, BIT32(14)); //Disable PCB_INTR_TYPE1
    }
    else if (owner == PMCR_OWNER_CHAR)
    {
        PK_TRACE_DBG("OWNER_CHAR");
        G_pgpe_pstate_record.pmcrOwner = PMCR_OWNER_CHAR;
        g_oimr_override &= ~(BIT64(46));
        out32(OCB_OIMR1_CLR, BIT32(14)); //Enable PCB_INTR_TYPE1
    }
    else
    {
        PK_TRACE_ERR("Invalid PMCR Owner=%u", owner);
        PGPE_PANIC_AND_TRACE(PGPE_INVALID_PMCR_OWNER);
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
//p9_pgpe_pstate_stop()
//
//This function runs the pstate stop protocol.
void p9_pgpe_pstate_stop()
{
    PK_TRACE_INF("PSS: Pstate Stop Enter");
    uint32_t q;
    pgpe_db0_stop_ps_bcast_t db0_stop;
    ocb_qcsr_t qcsr;

    qcsr.value = in32(OCB_QCSR);
    db0_stop.value = 0;
    db0_stop.fields.msg_id = MSGID_DB0_STOP_PSTATE_BROADCAST;

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

    p9_pgpe_send_db0(db0_stop.value,
                     G_pgpe_pstate_record.activeDB,
                     PGPE_DB0_UNICAST,
                     PGPE_DB0_ACK_WAIT_CME,
                     G_pgpe_pstate_record.activeQuads);

    //Set status in OCC_Scratch2
    uint32_t occScr2 = in32(OCB_OCCS2);
    occScr2 &= ~BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE);
    out32(OCB_OCCS2, occScr2);

    G_pgpe_pstate_record.pstatesStatus = PSTATE_STOPPED;

    //ACK back to OCC
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd;
    ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS;
    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_processing = 0;
    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_ack = 0;
    ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd, IPC_RC_SUCCESS);

    G_pgpe_optrace_data.word[0] = (START_STOP_FLAG << 24) | (G_pgpe_pstate_record.globalPSComputed << 16)
                                  | (in32(OCB_QCSR) >> 16);
    p9_pgpe_optrace(PRC_START_STOP);

    PK_TRACE_INF("PSS: Stop Done");
}

//
//p9_pgpe_pstate_clip_bcast
//
//This functions sends new clips to CMEs
void p9_pgpe_pstate_clip_bcast(uint32_t clip_bcast_type)
{
    PK_TRACE_INF("CLB: Clip Bcast");
    pgpe_db0_clip_bcast_t db0;
    db0.value = 0;
    db0.fields.msg_id = MSGID_DB0_CLIP_BROADCAST;
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

    p9_pgpe_send_db0(db0.value,
                     G_pgpe_pstate_record.activeDB,
                     PGPE_DB0_UNICAST,
                     PGPE_DB0_ACK_WAIT_CME,
                     G_pgpe_pstate_record.activeQuads);
}

//
//p9_pgpe_pstate_process_quad_entry_notify
//
void p9_pgpe_pstate_process_quad_entry_notify(uint32_t quadsRequested)
{
    uint32_t q;
    qppm_dpll_freq_t dpllFreq;
    dpllFreq.value = 0;
    ocb_qcsr_t qcsr;
    qcsr.value = in32(OCB_QCSR);
    uint64_t value;

    G_pgpe_pstate_record.activeQuads &= ~quadsRequested;

    PK_TRACE_INF("QE:(Notify) Vec=0x%x\n", quadsRequested);

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (quadsRequested & QUAD_MASK(q))
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_CLR, q), BIT64(26)); //Open DPLL for SCOMs

            G_pgpe_pstate_record.activeDB &= ~(QUAD_ALL_CORES_MASK(q));
            out32(OCB_OPIT4PRA_CLR, QUAD_ALL_CORES_MASK(q)); //Clear any pending PCB_Type4

            //CME_Scratch0[DB0_PROCESSING_ENABLE]=0
            if (qcsr.fields.ex_config &  (0x800 >> (q * 2)))
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);
                value &= ~BIT64(CME_SCRATCH_DB0_PROCESSING_ENABLE);
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);
            }

            if (qcsr.fields.ex_config &  (0x400 >> (q * 2)))
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 1), value);
                value &= ~BIT64(CME_SCRATCH_DB0_PROCESSING_ENABLE);
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 1), value);
            }


            if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
            {
                G_pgpe_pstate_record.quadPSTarget[q] = 0xFF;
                G_pgpe_pstate_record.quadPSCurr[q] = 0xFF;
                G_pgpe_pstate_record.quadPSNext[q] = 0xFF;
                G_pgpe_pstate_record.quadPSComputed[q] = 0xFF;

                //Write "Safe Frequency" for quad about to enter STOP
                //Note, we set fmax = fmult = fmin
                dpllFreq.fields.fmax  = G_gppb->dpll_pstate0_value - G_pgpe_pstate_record.safePstate;
                dpllFreq.fields.fmult = dpllFreq.fields.fmax;
                dpllFreq.fields.fmin  = dpllFreq.fields.fmax;
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_DPLL_FREQ, q), dpllFreq.value);
            }
        }
    }

    p9_pgpe_pstate_updt_actual_quad(0xFC);

    PK_TRACE_INF("QE:(Notify) End,qAct=%x\n", G_pgpe_pstate_record.activeQuads);
}

//
//p9_pgpe_pstate_process_quad_entry_done
//
void p9_pgpe_pstate_process_quad_entry_done(uint32_t quadsRequested)
{
    //Update Shared Memory Region
    G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads &= (~(quadsRequested));
    PK_TRACE_INF("QE: (Done), Vec=0x%x\n", quadsRequested);

    //If WOF Enabled, then interlock with OCC
    if(G_pgpe_pstate_record.wofStatus == WOF_ENABLED && G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
    {
        GPE_PUTSCOM(OCB_OCCFLG_OR, BIT32(REQUESTED_ACTIVE_QUAD_UPDATE));//Set OCCFLG[REQUESTED_ACTIVE_QUAD_UPDATE]
    }

    PK_TRACE_INF("QE:(Done) End,qAct=%x\n", G_pgpe_pstate_record.activeQuads);
}

//
//p9_pgpe_pstate_process_quad_exit
//
void p9_pgpe_pstate_process_quad_exit(uint32_t quadsRequested)
{
    uint32_t q;
    qppm_dpll_freq_t dpllFreq;
    dpllFreq.value = 0;
    qppm_vdmcfgr_t vdmcfg;

    PK_TRACE_INF("QX: (Done), Vec=0x%x\n", quadsRequested);

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

                if (G_pgpe_header_data->g_pgpe_qm_flags & PGPE_FLAG_VDM_ENABLE)
                {
                    GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_VDMCFGR, q), vdmcfg.value);
                }

                vdmcfg.fields.vdm_vid_compare = (G_pgpe_pstate_record.eVidCurr - 512) >> 2;
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_VDMCFGR, q), vdmcfg.value);
            }
        }
    }

    //Add quads to pending registration list. They are taken out when
    //registration msg from the quad is received.
    G_pgpe_pstate_record.pendQuadsRegisterReceive |= quadsRequested;

    PK_TRACE_INF("QX:End,qAct=%x\n", G_pgpe_pstate_record.activeQuads);
}

//
// p9_pgpe_pstate_wof_ctrl
//
void p9_pgpe_pstate_wof_ctrl(uint32_t action)
{
    uint32_t c;
    uint32_t activeCores, activeQuads;

    if (action == PGPE_ACTION_WOF_ON)
    {
        //In WOF Phase >= 2, we ask SGPE to start sending active core updates
        if ((G_pgpe_header_data->g_pgpe_qm_flags & PGPE_FLAG_ENABLE_VRATIO) ||
            (G_pgpe_header_data->g_pgpe_qm_flags & PGPE_FLAG_VRATIO_MODIFIER))
        {
            p9_pgpe_pstate_send_ctrl_stop_updt(CTRL_STOP_UPDT_ENABLE_CORE);
            activeCores = G_sgpe_control_updt.fields.active_cores << 8;
            activeQuads = G_sgpe_control_updt.fields.active_quads;
        }
        else
        {
            activeCores = G_pgpe_pstate_record.activeDB;
            activeQuads = G_pgpe_pstate_record.activeQuads;
        }

        G_pgpe_pstate_record.wofStatus = WOF_ENABLED;
        //Set to value returned by SGPE or initial value determined during boot(equal to configured cores)
        G_pgpe_pstate_record.activeCores = activeCores << 8;

        //Update Shared Memory Region
        G_pgpe_pstate_record.pQuadState0->fields.active_cores = G_pgpe_pstate_record.activeCores >> 16;
        G_pgpe_pstate_record.pQuadState1->fields.active_cores |= (G_pgpe_pstate_record.activeCores & 0xFF00);
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
        //In WOF Phase >= 2, we ask SGPE to stop sending active core updates
        if ((G_pgpe_header_data->g_pgpe_qm_flags & PGPE_FLAG_ENABLE_VRATIO) ||
            (G_pgpe_header_data->g_pgpe_qm_flags & PGPE_FLAG_VRATIO_MODIFIER))
        {
            p9_pgpe_pstate_send_ctrl_stop_updt(CTRL_STOP_UPDT_DISABLE_CORE);
        }

        G_pgpe_pstate_record.wofStatus = WOF_DISABLED;

        PK_TRACE_DBG("WCT: WOF Disabled");
    }
}

//
//p9_pgpe_pstate_send_ctrl_stop_updt
//
void p9_pgpe_pstate_send_ctrl_stop_updt(uint32_t action)
{
    uint32_t rc;

#if SGPE_IPC_ENABLED == 1
    G_sgpe_control_updt.fields.return_code = 0x0;
    G_sgpe_control_updt.fields.action = action;
    G_ipc_msg_pgpe_sgpe.cmd_data = &G_sgpe_control_updt;

    //Send "Enable Core Stop Updates" IPC to SGPE
    ipc_init_msg(&G_ipc_msg_pgpe_sgpe.cmd,
                 IPC_MSGID_PGPE_SGPE_CONTROL_STOP_UPDATES,
                 p9_pgpe_ipc_ack_sgpe_ctrl_stop_updt,
                 NULL);
    PK_TRACE_DBG("PTH: Sent CTRL_STOP_UPDT(ENABLE_CORE) to SGPE");

    rc = ipc_send_cmd(&G_ipc_msg_pgpe_sgpe.cmd);

    if(rc)
    {
        PK_PANIC(PGPE_SGPE_IPC_SEND_BAD_RC);
    }

    //Wait for return code to be set
    while(G_sgpe_control_updt.fields.return_code != SGPE_PGPE_IPC_RC_SUCCESS);

#endif// _SGPE_IPC_ENABLED_
}

//
// p9_pgpe_pstate_apply_safe_clips
//
void p9_pgpe_pstate_apply_safe_clips()
{
    PK_TRACE_INF("SCL: Apply Safe Enter");
    int q;

    //Set clips to safe pstate
    for (q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_pstate_record.psClipMax[q] = G_pgpe_pstate_record.safePstate;
        G_pgpe_pstate_record.psClipMin[q] = G_pgpe_pstate_record.safePstate;
    }

    //Update clips
    p9_pgpe_pstate_apply_clips();

    PK_TRACE_INF("SCL: Apply Safe Exit");
}

//
//p9_pgpe_pstate_safe_mode()
//
//Note: Must call this procedure inside sub-critical section.
//
void p9_pgpe_pstate_safe_mode()
{
    PK_TRACE_INF("SAF: Safe Mode Enter");
    uint32_t occScr2 = in32(OCB_OCCS2);
    uint32_t suspend = in32(OCB_OCCFLG) & BIT32(PM_COMPLEX_SUSPEND);
    uint32_t safemode = in32(OCB_OCCFLG) & BIT32(PGPE_SAFE_MODE);

    // Generate OPTRACE Process Start
    G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) | (G_pgpe_pstate_record.globalPSComputed << 16)
                                  | (G_pgpe_pstate_record.safePstate << 8)
                                  | ((suspend) ? 0x2 : 0)
                                  | ((safemode) ? 0x1 : 0);

    p9_pgpe_optrace(PRC_SAFE_MODE);

    // Apply clips and actuate to safe mode
    p9_pgpe_pstate_apply_safe_clips();

    while (p9_pgpe_pstate_at_target() == 0)
    {
        p9_pgpe_pstate_do_step();
    }

    PK_TRACE_INF("SAF: Safe Mode Actuation Done!");

    //Send SAFE Mode Bcast to all CMEs
    p9_pgpe_pstate_pmsr_updt(DB0_PMSR_UPDT_SET_SAFE_MODE,
                             G_pgpe_pstate_record.activeDB,
                             G_pgpe_pstate_record.activeQuads);

    //Update PstatesStatus to PM_SUSPEND_PENDING or PSTATE_SAFE_MODE
    G_pgpe_pstate_record.pstatesStatus = suspend ? PSTATE_PM_SUSPEND_PENDING : PSTATE_SAFE_MODE;

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
    }

    //ACK back to SGPE with "IPC_SGPE_PGPE_RC_SUCCESS"
    if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack == 1)
    {
        async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd;
        ipcmsg_s2p_update_active_quads_t* args = (ipcmsg_s2p_update_active_quads_t*)async_cmd->cmd_data;
        p9_pgpe_pstate_process_quad_exit(args->fields.requested_quads << 2);

        //activeQuads isn't updated until registration, so we OR with requested quads.
        args->fields.return_active_quads = (G_pgpe_pstate_record.activeQuads >> 2) | args->fields.requested_quads;
        args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 0;
    }

    //ACK back to SGPE with "IPC_SGPE_PGPE_RC_SUCCESS"
    if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack == 1)
    {
        async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd;
        ipcmsg_s2p_update_active_cores_t* args = (ipcmsg_s2p_update_active_cores_t*)async_cmd->cmd_data;
        args->fields.return_active_cores = G_pgpe_pstate_record.activeCores >> 8;
        args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd, IPC_RC_SUCCESS);
    }

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
    out32(OCB_OCCS2, occScr2);
    PK_TRACE_INF("SAF: Safe Mode Exit");
}

//
//p9_pgpe_pstate_send_suspend_stop
//
void p9_pgpe_pstate_send_suspend_stop(uint32_t command)
{
//#if SGPE_IPC_ENABLED == 1
    p9_pgpe_optrace(PRC_PM_SUSP);

    int rc;
    G_sgpe_suspend_stop.fields.msg_num = MSGID_PGPE_SGPE_SUSPEND_STOP;
    G_sgpe_suspend_stop.fields.command  = command;
    G_sgpe_suspend_stop.fields.return_code = 0x0;
    G_ipc_msg_pgpe_sgpe.cmd_data = &G_sgpe_suspend_stop;
    ipc_init_msg(&G_ipc_msg_pgpe_sgpe.cmd,
                 IPC_MSGID_PGPE_SGPE_SUSPEND_STOP,
                 p9_pgpe_ipc_ack_sgpe_suspend_stop,
                 (void*)NULL);

    //send the command
    PK_TRACE_INF("SUSP:Sending Suspend Stop(cmd=0x%x)", command);
    rc = ipc_send_cmd(&G_ipc_msg_pgpe_sgpe.cmd);

    if(rc)
    {
        PK_TRACE_ERR("SUSP:Suspend Stop BAD ACK");
        PGPE_PANIC_AND_TRACE(PGPE_SGPE_SUSPEND_STOP_BAD_ACK);
    }

    //Just block until SGPE writes the return code field
    //It is assumed that SGPE will write this field right before
    //calling ipc_send_rsp(). Also, note that PGPE will get the ACK
    //in the form of IPC interrupt which will call the ipc_ack_suspend_stop
    //This IPC handler is effectively a NOP writing the return code fields
    //act as ACK for PGPE. Alternative is to wait until ACKs arrives and do processing
    //in the IPC ACK handler, but this requires opening up IPC interrupt. Instead, we
    //do processing after blocking
    while(G_sgpe_suspend_stop.fields.return_code == IPC_SGPE_PGPE_RC_NULL)
    {
        dcbi(((void*)(&G_sgpe_suspend_stop)));
    }

    if (G_sgpe_suspend_stop.fields.return_code != IPC_SGPE_PGPE_RC_SUCCESS)
    {
        PK_TRACE_ERR("ERROR: SGPE Suspend STOP Bad RC. Halting PGPE!");
        PGPE_PANIC_AND_TRACE(PGPE_SGPE_SUSPEND_STOP_BAD_ACK);
    }

    PK_TRACE_INF("SUSP:Suspend Stop(cmd=0x%x) ACKed", command);
}

//
//This function sends Suspend Stop(Entry and Exit) to SGPE
//It is called as part of PM Complex Suspend processing. Before
//calling this function it is assumed the system is in SAFE_MODE.
//There is no function to undo the suspend. Only PM Reset can bring the
//PM Complex out of this state.
//
void p9_pgpe_pstate_pm_complex_suspend()
{
    int q = 0;
    ocb_qcsr_t qcsr;

    //Send IPC and wait for ACK
    p9_pgpe_pstate_send_suspend_stop(SUSPEND_STOP_SUSPEND_ENTRY_EXIT);

    //Change PMCR ownership
    PK_TRACE_INF("SUSP: Setting SCOM Ownership of PMCRs");
    qcsr.value = in32(OCB_QCSR);

    //Set LMCR for each CME
    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {
            //CME0 within this quad
            if (qcsr.fields.ex_config & QUAD_EX0_MASK(q))
            {
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_OR, q, 0), BIT64(0));
            }

            //CME1 within this quad
            if (qcsr.fields.ex_config & QUAD_EX1_MASK(q))
            {
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_OR, q, 1), BIT64(0));
            }
        }
    }

    //OP Trace and Set OCCS2[PM_COMPLEX_SUSPENDED)
    p9_pgpe_optrace(ACK_PM_SUSP);
    uint32_t occScr2 = in32(OCB_OCCS2);
    occScr2 |= BIT32(PM_COMPLEX_SUSPENDED);
    G_pgpe_pstate_record.pstatesStatus = PSTATE_PM_SUSPENDED;
    out32(OCB_OCCS2, occScr2);
}


void p9_pgpe_pstate_pmsr_updt(uint32_t command, uint32_t targetCoresVector, uint32_t quadsAckVector)
{
    pgpe_db0_pmsr_updt_t db0_pmsr_updt;
    db0_pmsr_updt.value = 0;
    db0_pmsr_updt.fields.msg_id = MSGID_DB0_PMSR_UPDT;
    db0_pmsr_updt.fields.command = command;
    p9_pgpe_send_db0(db0_pmsr_updt.value,
                     targetCoresVector,
                     PGPE_DB0_UNICAST,
                     PGPE_DB0_ACK_WAIT_CME,
                     quadsAckVector);
}


//
//p9_pgpe_pstate_at_target
//
int32_t p9_pgpe_pstate_at_target()
{
    if( G_pgpe_pstate_record.globalPSCurr != G_pgpe_pstate_record.globalPSTarget ||
        ((G_pgpe_pstate_record.activeQuads & QUAD0_BIT_MASK)
         && G_pgpe_pstate_record.quadPSCurr[0] ^ G_pgpe_pstate_record.quadPSTarget[0]) ||
        ((G_pgpe_pstate_record.activeQuads & QUAD1_BIT_MASK)
         && G_pgpe_pstate_record.quadPSCurr[1] ^ G_pgpe_pstate_record.quadPSTarget[1]) ||
        ((G_pgpe_pstate_record.activeQuads & QUAD2_BIT_MASK)
         && G_pgpe_pstate_record.quadPSCurr[2] ^ G_pgpe_pstate_record.quadPSTarget[2]) ||
        ((G_pgpe_pstate_record.activeQuads & QUAD3_BIT_MASK)
         && G_pgpe_pstate_record.quadPSCurr[3] ^ G_pgpe_pstate_record.quadPSTarget[3]) ||
        ((G_pgpe_pstate_record.activeQuads & QUAD4_BIT_MASK)
         && G_pgpe_pstate_record.quadPSCurr[4] ^ G_pgpe_pstate_record.quadPSTarget[4]) ||
        ((G_pgpe_pstate_record.activeQuads & QUAD5_BIT_MASK)
         && G_pgpe_pstate_record.quadPSCurr[5] ^ G_pgpe_pstate_record.quadPSTarget[5]) )
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

//
//p9_pgpe_pstate_do_step
//
void p9_pgpe_pstate_do_step()
{

    //Do one actuate step
    PK_TRACE_DBG("STEP: Entry");
    PK_TRACE_DBG("STEP: GTgt,GCurr 0x%x, 0x%x", G_pgpe_pstate_record.globalPSTarget,
                 G_pgpe_pstate_record.globalPSCurr);
    PK_TRACE_DBG("STEP: QTgt,QCurr 0x%x,0x%x 0x%x,0x%x", G_pgpe_pstate_record.quadPSTarget[0],
                 G_pgpe_pstate_record.quadPSCurr[0], G_pgpe_pstate_record.quadPSTarget[1],
                 G_pgpe_pstate_record.quadPSCurr[1]);
    PK_TRACE_DBG("STEP:QTgt,QCurr 0x%x,0x%x 0x%x,0x%x", G_pgpe_pstate_record.quadPSTarget[2],
                 G_pgpe_pstate_record.quadPSCurr[2], G_pgpe_pstate_record.quadPSTarget[3],
                 G_pgpe_pstate_record.quadPSCurr[3]);
    PK_TRACE_DBG("STEP:QTgt,QCurr 0x%x,0x%x 0x%x,0x%x", G_pgpe_pstate_record.quadPSTarget[4],
                 G_pgpe_pstate_record.quadPSCurr[4], G_pgpe_pstate_record.quadPSTarget[5],
                 G_pgpe_pstate_record.quadPSCurr[5]);

    uint32_t q;
    uint32_t targetEVid = p9_pgpe_gppb_intp_vdd_from_ps(G_pgpe_pstate_record.globalPSTarget, VPD_PT_SET_BIASED_SYSP);
    PK_TRACE_DBG("STEP: eVidCurr=0x%x, eVidNext=0x%x, targetEVid=0x%x", G_pgpe_pstate_record.eVidCurr,
                 G_pgpe_pstate_record.eVidNext, targetEVid);


    //Higher number PState
    if (((int16_t)(G_pgpe_pstate_record.globalPSTarget) - (int16_t)(G_pgpe_pstate_record.globalPSCurr)) > 0)
    {

        if ((G_pgpe_pstate_record.eVidCurr - targetEVid ) <= G_gppb->ext_vrm_step_size_mv)
        {
            G_pgpe_pstate_record.eVidNext = targetEVid;
            G_pgpe_pstate_record.globalPSNext = G_pgpe_pstate_record.globalPSTarget;

            PK_TRACE_DBG("STEP: <= step_size");

            for (q = 0; q < MAX_QUADS; q++)
            {
                if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
                {
                    G_pgpe_pstate_record.quadPSNext[q] = G_pgpe_pstate_record.quadPSTarget[q];
                }
            }
        }
        else
        {
            G_pgpe_pstate_record.eVidNext = G_pgpe_pstate_record.eVidCurr - G_gppb->ext_vrm_step_size_mv;
            G_pgpe_pstate_record.globalPSNext = p9_pgpe_gppb_intp_ps_from_ext_vdd(G_pgpe_pstate_record.eVidNext);

            //It's possible that the interpolation function returns Pstate higher than
            //target due to rounding errors, so we adjust back.
            if (G_pgpe_pstate_record.globalPSNext > G_pgpe_pstate_record.globalPSTarget)
            {
                G_pgpe_pstate_record.globalPSNext = G_pgpe_pstate_record.globalPSTarget;
            }

            //Make sure voltage written corresponds exactly to a pstate
            G_pgpe_pstate_record.eVidNext = p9_pgpe_gppb_intp_vdd_from_ps(G_pgpe_pstate_record.globalPSNext,
                                            VPD_PT_SET_BIASED_SYSP);

            for (q = 0; q < MAX_QUADS; q++)
            {
                if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
                {
                    G_pgpe_pstate_record.quadPSNext[q] = G_pgpe_pstate_record.quadPSTarget[q];
                }
            }

        }

        PK_TRACE_DBG("STEP: eVidNext=0x%x, glbPSNext=0x%x", G_pgpe_pstate_record.eVidCurr, G_pgpe_pstate_record.globalPSNext);
        p9_pgpe_pstate_freq_updt();
        p9_pgpe_pstate_updt_ext_volt(targetEVid);
    }
    //Lower number PState
    else if (((int16_t)(G_pgpe_pstate_record.globalPSTarget) - (int16_t)(G_pgpe_pstate_record.globalPSCurr)) < 0)
    {

        if ((targetEVid - G_pgpe_pstate_record.eVidCurr) <= G_gppb->ext_vrm_step_size_mv)
        {
            PK_TRACE_DBG("STEP: <= step_size");
            G_pgpe_pstate_record.eVidNext = targetEVid;
            G_pgpe_pstate_record.globalPSNext = G_pgpe_pstate_record.globalPSTarget;

            for (q = 0; q < MAX_QUADS; q++)
            {
                if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
                {
                    G_pgpe_pstate_record.quadPSNext[q] = G_pgpe_pstate_record.quadPSTarget[q];
                }
            }
        }
        else
        {
            PK_TRACE_DBG("STEP: > step_size");
            G_pgpe_pstate_record.eVidNext = G_pgpe_pstate_record.eVidCurr + G_gppb->ext_vrm_step_size_mv;
            G_pgpe_pstate_record.globalPSNext = p9_pgpe_gppb_intp_ps_from_ext_vdd(G_pgpe_pstate_record.eVidNext);

            //It's possible that the interpolation function returns Pstate lower than
            //target due to rounding errors, so we adjust back.
            if (G_pgpe_pstate_record.globalPSNext < G_pgpe_pstate_record.globalPSTarget)
            {
                G_pgpe_pstate_record.globalPSNext = G_pgpe_pstate_record.globalPSTarget;
            }

            //Make sure voltage written corresponds exactly to a pstate
            G_pgpe_pstate_record.eVidNext = p9_pgpe_gppb_intp_vdd_from_ps(G_pgpe_pstate_record.globalPSNext,
                                            VPD_PT_SET_BIASED_SYSP);

            for (q = 0; q < MAX_QUADS; q++)
            {
                if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
                {
                    if (G_pgpe_pstate_record.quadPSTarget[q] < G_pgpe_pstate_record.globalPSNext)   //Keep localPS under GlobalPS
                    {
                        G_pgpe_pstate_record.quadPSNext[q] = G_pgpe_pstate_record.globalPSNext;
                    }
                    else
                    {
                        G_pgpe_pstate_record.quadPSNext[q] = G_pgpe_pstate_record.quadPSTarget[q];
                    }
                }
            }
        }

        PK_TRACE_DBG("STEP: eVidNext=0x%x, glbPSNext=0x%x", G_pgpe_pstate_record.eVidCurr, G_pgpe_pstate_record.globalPSNext);
        p9_pgpe_pstate_updt_ext_volt(targetEVid);
        p9_pgpe_pstate_freq_updt();
    }
    else
    {
        for (q = 0; q < MAX_QUADS; q++)
        {
            if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
            {
                G_pgpe_pstate_record.quadPSNext[q] = G_pgpe_pstate_record.quadPSTarget[q];
            }
        }

        p9_pgpe_pstate_freq_updt();
    }

    //Update current
    G_pgpe_pstate_record.globalPSCurr = G_pgpe_pstate_record.globalPSNext;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {
            G_pgpe_pstate_record.quadPSCurr[q] = G_pgpe_pstate_record.quadPSNext[q];
        }
    }

    //Update Shared SRAM
    p9_pgpe_pstate_updt_actual_quad(0xFC);
    G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.quadPSCurr[0] << 24) | (G_pgpe_pstate_record.quadPSCurr[1]
                                  << 16) |
                                  (G_pgpe_pstate_record.quadPSCurr[2] << 8) | G_pgpe_pstate_record.quadPSCurr[3];
    G_pgpe_optrace_data.word[1] = (G_pgpe_pstate_record.quadPSCurr[4] << 24) | (G_pgpe_pstate_record.quadPSCurr[5]
                                  << 16) |
                                  G_pgpe_pstate_record.globalPSCurr << 8 | G_pgpe_pstate_record.globalPSTarget;
    G_pgpe_optrace_data.word[2] = (G_pgpe_pstate_record.eVidCurr << 16) | G_pgpe_pstate_record.eVidCurr;
    p9_pgpe_optrace(ACTUATE_STEP_DONE);
    PK_TRACE_DBG("STEP: Exit");
}

//
//p9_pgpe_pstate__updt_ext_volt
//
//Update External VRM to G_eVidNext
void p9_pgpe_pstate_updt_ext_volt(uint32_t tgtEVid)
{
    qppm_vdmcfgr_t vdmcfg;
    uint32_t cmeInterppmVdataEnableSet, q;
    qppm_qpmmr_t qpmmr;

#if !EPM_P9_TUNING
    uint32_t delay_us = 0;

    //Decreasing
    if (G_pgpe_pstate_record.eVidNext < G_pgpe_pstate_record.eVidCurr)
    {
        delay_us = (G_pgpe_pstate_record.eVidCurr - G_pgpe_pstate_record.eVidNext) *
                   G_ext_vrm_dec_rate_mult_usperus;
    }
    //Increasing
    else if(G_pgpe_pstate_record.eVidNext > G_pgpe_pstate_record.eVidCurr)
    {
        delay_us  = (G_pgpe_pstate_record.eVidNext - G_pgpe_pstate_record.eVidCurr) *
                    G_ext_vrm_inc_rate_mult_usperus;
    }

#endif

    //Update external voltage
    external_voltage_control_write(G_pgpe_pstate_record.eVidNext);

#if !EPM_P9_TUNING

    //Delay for delay_us
    if (delay_us > 0)
    {
        pk_sleep(PK_MICROSECONDS((delay_us)));
    }

    if(G_pgpe_pstate_record.eVidNext == tgtEVid)
    {
        pk_sleep(PK_MICROSECONDS((G_gppb->ext_vrm_stabilization_time_us)));
    }

#endif

    G_pgpe_pstate_record.eVidCurr = G_pgpe_pstate_record.eVidNext;

    //If VDM is disabled, update VDMCFG register for every quad
    if (!(G_pgpe_header_data->g_pgpe_qm_flags & PGPE_FLAG_VDM_ENABLE))
    {
        vdmcfg.value = 0;
        vdmcfg.fields.vdm_vid_compare = (G_pgpe_pstate_record.eVidCurr - 512) >> 2;

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
//Frequency Update
//
//Sends a DB0 to all active CMEs, so that Quad Managers(CMEs) update DPLL
void p9_pgpe_pstate_freq_updt()
{
    PK_TRACE_DBG("FREQ: Enter");


    pgpe_db0_glb_bcast_t db0;
    db0.value = 0;
    db0.fields.msg_id = MSGID_DB0_GLOBAL_ACTUAL_BROADCAST;
    db0.fields.global_actual = G_pgpe_pstate_record.globalPSNext;
    db0.fields.quad0_ps = G_pgpe_pstate_record.quadPSNext[0];
    db0.fields.quad1_ps = G_pgpe_pstate_record.quadPSNext[1];
    db0.fields.quad2_ps = G_pgpe_pstate_record.quadPSNext[2];
    db0.fields.quad3_ps = G_pgpe_pstate_record.quadPSNext[3];
    db0.fields.quad4_ps = G_pgpe_pstate_record.quadPSNext[4];
    db0.fields.quad5_ps = G_pgpe_pstate_record.quadPSNext[5];

    //Ensure quadPS is not lower numbered(higher freq/volt) than globalPS
    if ((G_pgpe_pstate_record.quadPSNext[0] < G_pgpe_pstate_record.globalPSNext) ||
        (G_pgpe_pstate_record.quadPSNext[1] < G_pgpe_pstate_record.globalPSNext) ||
        (G_pgpe_pstate_record.quadPSNext[2] < G_pgpe_pstate_record.globalPSNext) ||
        (G_pgpe_pstate_record.quadPSNext[3] < G_pgpe_pstate_record.globalPSNext) ||
        (G_pgpe_pstate_record.quadPSNext[4] < G_pgpe_pstate_record.globalPSNext) ||
        (G_pgpe_pstate_record.quadPSNext[5] < G_pgpe_pstate_record.globalPSNext))
    {
        PK_TRACE_ERR("FREQ: Invalid Freq Updt. quadPS < globalPS");
        PGPE_PANIC_AND_TRACE(PGPE_INVALID_FREQ_UPDT);
    }

    p9_pgpe_optrace(ACTL_BROADCAST);
    p9_pgpe_send_db0(db0.value,
                     G_pgpe_pstate_record.activeDB,
                     PGPE_DB0_MULTICAST,
                     PGPE_DB0_ACK_WAIT_CME,
                     G_pgpe_pstate_record.activeQuads);
    p9_pgpe_optrace(ACK_ACTL_DONE);

    PK_TRACE_DBG("FREQ: Exit");
}

void p9_pgpe_pstate_dpll_write(uint32_t quadsVector, uint64_t val)
{
    //qppm_qpmmr_t qpmmr;
    uint32_t q;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (quadsVector & (q >> 1))
        {
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_DPLL_FREQ, q), val);//Write DPLL
        }
    }
}

//
//p9_pgpe_pstate_ipc_rsp_cb_sem_post
//
void p9_pgpe_pstate_ipc_rsp_cb_sem_post(ipc_msg_t* msg, void* arg)
{
    pk_semaphore_post((PkSemaphore*)arg);
}

// Write to the PC Throttle Control register.  Ignore any PCB errors.
// Option to retry on known PC hardware bug (always cleanup if happens)
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

void p9_pgpe_droop_throttle()
{
    PK_TRACE_DBG("DTH: Droop Throttle Enter");

    uint32_t q;
    //1.  PGPE sends IPC to SGPE to Suspend Stop Entries Only, and poll for Success return code (do not open IPCs, ignore the subsequent ACK).  This will prevent a core from going into Stop2 and missing the subsequent "unthrottle."
    //p9_pgpe_pstate_send_suspend_stop(SUSPEND_STOP_SUSPEND_ENTRY);


    //2.  Call the core_instruction_throttle() procedure to enable throttle (same as used by FIT).
    p9_pgpe_pstate_write_core_throttle(CORE_IFU_THROTTLE, RETRY);

    //3.  Set the OCC flag PGPE Prolonged Droop Workaround Active bit.
    out32(OCB_OCCFLG_OR, BIT32(PGPE_PROLONGED_DROOP_WORKAROUND_ACTIVE));

    //4.  Clear the Prolonged Droop Global variables (Bit vector and retry counts).
    G_pgpe_pstate_record.cntNACKs = 0;

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_pstate_record.quadsCntNACKs[q] = 0;
    }

    //5.  Write PK Trace and Optrace record that the Prolonged Throttle workaround was engaged, including a bit vector of Quads that provided the NACK(s).
    G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24)  |
                                  (G_pgpe_pstate_record.globalPSCurr << 16) |
                                  (G_pgpe_pstate_record.globalPSTarget << 8) |
                                  G_pgpe_pstate_record.quadsNACKed;
    p9_pgpe_optrace(PROLONGED_DROOP_EVENT);


    PK_TRACE_DBG("DTH: Droop Throttle Exit");
}


void p9_pgpe_droop_unthrottle()
{
    PK_TRACE_DBG("DTH: Droop Unthrottle Enter");

    //1.  Call the core_instruction_throttle() procedure to disable throttle (same as used by FIT).
    p9_pgpe_pstate_write_core_throttle(CORE_THROTTLE_OFF, RETRY);

    //2.  PGPE sends IPC to SGPE to Unsuspend STOP entries & poll for Success return code (do not open IPCs, ignore the subsequent ACK).
    // p9_pgpe_pstate_send_suspend_stop(SUSPEND_STOP_UNSUSPEND_ENTRY);

    //3.  Send Doorbell0 PMSR Update with message Clear Pstates Suspended to all configured cores in the active Quads.
    p9_pgpe_pstate_pmsr_updt(DB0_PMSR_UPDT_CLEAR_PSTATES_SUSPENDED,
                             G_pgpe_pstate_record.activeDB,
                             G_pgpe_pstate_record.activeQuads);

    //4.  Clear the OCC flag PGPE Prolonged Droop Workaround Active. OCCFLG[PM_RESET_SUPPRESS] will be cleared later
    //after any pending IPCs from OCC have been processed and acked.
    out32(OCB_OCCFLG_CLR, BIT32(PGPE_PROLONGED_DROOP_WORKAROUND_ACTIVE));

    //5.  Write PK Trace and Optrace record that the Prolonged Throttle workaround was removed,
    //including the Total Retry Count and the most recent bit vector of Quads that provided the NACK(s) .
    G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.quadsNACKed << 24)  |
                                  (G_pgpe_pstate_record.activeCores);
    G_pgpe_optrace_data.word[0] = G_pgpe_pstate_record.cntNACKs;
    p9_pgpe_optrace(PROLONGED_DROOP_RESOLVED);

    PK_TRACE_DBG("DTH: Droop Unthrottle Exit");
}
