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

//
//Global Data
//
GPE_BUFFER(ipc_async_cmd_t G_ipc_msg_pgpe_sgpe);
GPE_BUFFER(ipcmsg_p2s_ctrl_stop_updates_t G_sgpe_control_updt);
GPE_BUFFER(ipcmsg_p2s_suspend_stop_t G_sgpe_suspend_stop);

//Local Functions
void p9_pgpe_pstate_freq_updt();
void p9_pgpe_suspend_stop_callback(ipc_msg_t* msg, void* arg);
void p9_pgpe_pstate_dpll_write(uint32_t quadsVector, uint64_t val);

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
        G_pgpe_pstate_record.safePstate = (G_gppb->reference_frequency_khz - G_gppb->safe_frequency_khz -
                                           (G_gppb->frequency_step_khz)) / G_gppb->frequency_step_khz;
    }
    else
    {
        G_pgpe_pstate_record.safePstate = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        PK_TRACE_INF("Safe Frequency is NOT set.  Using POWERSAVE as Pstate as safe");
    }

    PK_TRACE_INF("SafePstate=0x%x", G_pgpe_pstate_record.safePstate);
    PK_TRACE_INF("SafeFrequency=0x%x,SafeVoltage=0x%x", G_gppb->safe_frequency_khz, G_gppb->safe_voltage_mv);

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_pstate_record.psClipMax[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.psClipMin[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][ULTRA].pstate;
        G_pgpe_pstate_record.quadPSComputed[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.globalPSComputed = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.quadPSTarget[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.globalPSTarget = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.quadPSCurr[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.globalPSCurr  = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.quadPSNext[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.globalPSNext  = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;

        for (c = (q * CORES_PER_QUAD); c < (q + 1)*CORES_PER_QUAD; c++)
        {
            if (ccsr.value & CORE_MASK(c))
            {
                G_pgpe_pstate_record.numConfCores += 1;
            }
        }
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
                    G_pgpe_pstate_record.activeCores |= CORE_MASK(c);
                }
            }
        }
    }

    //Fill OCC Shared Memory Area fields
    G_pgpe_pstate_record.pQuadState0->fields.active_cores = (G_pgpe_pstate_record.activeCores >> 16);
    G_pgpe_pstate_record.pQuadState1->fields.active_cores = (G_pgpe_pstate_record.activeCores & 0xFF00);
    G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads =  G_pgpe_pstate_record.activeQuads;

    PK_TRACE_INF("PCB4: ActiveQuads=0x%x ActiveCores=0x%x\n", G_pgpe_pstate_record.activeQuads ,
                 G_pgpe_pstate_record.activeCores);

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
            //and find the lowest numbered PState
            G_pgpe_pstate_record.quadPSComputed[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;

            for (c = FIRST_CORE_FROM_QUAD(q); c < LAST_CORE_FROM_QUAD(q); c++)
            {
                if (G_pgpe_pstate_record.activeCores & CORE_MASK(c))
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
    G_pgpe_pstate_record.globalPSComputed = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;

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

            if (G_pgpe_pstate_record.wofEnabled == 1)
            {
                if (G_pgpe_pstate_record.wofClip > minPS && (G_pgpe_pstate_record.wofClip < maxPS))
                {
                    minPS = G_pgpe_pstate_record.wofClip;
                }
                else if (G_pgpe_pstate_record.wofClip > maxPS)
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
    G_pgpe_pstate_record.globalPSTarget = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;

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

    //2. Vratio calc
    //Currently, PGPE only support VRATIO Fixed and VRATIO active cores only
    if (G_pgpe_header_data->g_pgpe_qm_flags & PGPE_FLAG_ENABLE_VRATIO)
    {
        G_pgpe_pstate_record.vratio = (G_pgpe_pstate_record.numActiveCores << 16) / G_pgpe_pstate_record.numConfCores;
    }
    else
    {
        G_pgpe_pstate_record.vratio = 0xFFFF;
    }

    //3. VFRT table lookup
    G_pgpe_pstate_record.vindex = (G_pgpe_pstate_record.vratio - 0xA8B) / 0xAAC;

    //4. Update wofClip(int. variable)
    G_pgpe_pstate_record.wofClip =
        G_pgpe_pstate_record.pVFRT->vfrt_data[G_pgpe_pstate_record.findex][G_pgpe_pstate_record.vindex];

    PK_TRACE_DBG("WFC: FClip_PS=0x%x, vindex=%d, vratio=%d", G_pgpe_pstate_record.wofClip, G_pgpe_pstate_record.vindex,
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
    PK_TRACE_DBG("WFU: FClip_PS=0x%x, vindex=%d, vratio=%d", G_pgpe_pstate_record.wofClip, G_pgpe_pstate_record.vindex,
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
void p9_pgpe_send_db0(uint64_t db0, uint32_t coreVector, uint32_t unicast, uint32_t ack, uint32_t ackVector)
{

    uint32_t c;

    PK_TRACE_DBG("SDB: Send DB0");

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
        p9_dd1_db_multicast_wr(PCB_MULTICAST_GRP1 | CPPM_CMEDB0, db0, G_pgpe_pstate_record.activeCores);
#else
        GPE_PUTSCOM(PCB_MULTICAST_GRP1 | CPPM_CMEDB0, db0)
#endif
    }

    if (ack == PGPE_DB0_ACK_WAIT_CME)
    {
        p9_pgpe_wait_cme_db_ack(ackVector);//Wait for ACKs from all QuadManagers
    }
}

void p9_pgpe_wait_cme_db_ack(uint32_t quadAckExpect)
{
    uint32_t q;
    uint32_t opit4pr, opit4prQuad, opit4Clr = 0;

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
                    quadAckExpect &= ~QUAD_MASK(q);
                    opit4Clr |= (opit4prQuad << ((MAX_QUADS - q + 1) << 2));
                    PK_TRACE_DBG("DBW: GotAck from %d", q);
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

    PK_TRACE_DBG("DBW:qCME ACKs rcvd");
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
        if (qcsr.fields.ex_config & (0xC00 >> (q << 1)))
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

            if (qcsr.fields.ex_config &  (0x800 >> (q << 1)))
            {
                //CME Scratch0
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);
                value |= (uint64_t)((MAX_QUADS - 1 - q) << 3) << 32;
                value |= BIT64(CME_SCRATCH_DB0_PROCESSING_ENABLE);
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);
            }

            if (qcsr.fields.ex_config &  (0x400 >> (q << 1)))
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

    //7. Send Pstate Start Doorbell0
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
                     G_pgpe_pstate_record.activeCores,
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
                     G_pgpe_pstate_record.activeCores,
                     PGPE_DB0_UNICAST,
                     PGPE_DB0_ACK_WAIT_CME,
                     G_pgpe_pstate_record.activeQuads);


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
                     G_pgpe_pstate_record.activeCores,
                     PGPE_DB0_UNICAST,
                     PGPE_DB0_ACK_WAIT_CME,
                     G_pgpe_pstate_record.activeQuads);

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
            if (qcsr.fields.ex_config & (0x800 >> 2 * q))
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
            if (qcsr.fields.ex_config & (0x400 >> 2 * q))
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
    pgpe_db0_stop_ps_bcast_t db0_stop;
    db0_stop.value = 0;
    db0_stop.fields.msg_id = MSGID_DB0_STOP_PSTATE_BROADCAST;

    p9_pgpe_send_db0(db0_stop.value,
                     G_pgpe_pstate_record.activeCores,
                     PGPE_DB0_UNICAST,
                     PGPE_DB0_ACK_WAIT_CME,
                     G_pgpe_pstate_record.activeQuads);

    uint32_t occScr2 = in32(OCB_OCCS2);
    occScr2 &= ~BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE);
    out32(OCB_OCCS2, occScr2);

    G_pgpe_pstate_record.pstatesStatus = PSTATE_STOPPED;
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
                     G_pgpe_pstate_record.activeCores,
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

            G_pgpe_pstate_record.activeCores &= ~(QUAD_ALL_CORES_MASK(q));
            out32(OCB_OPIT4PRA_CLR, QUAD_ALL_CORES_MASK(q)); //Clear any pending PCB_Type4

            //CME_Scratch0[DB0_PROCESSING_ENABLE]=0
            if (qcsr.fields.ex_config &  (0x800 >> (q << 1)))
            {
                GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);
                value &= ~BIT64(CME_SCRATCH_DB0_PROCESSING_ENABLE);
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);
            }

            if (qcsr.fields.ex_config &  (0x400 >> (q << 1)))
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
    G_pgpe_pstate_record.pQuadState0->fields.active_cores = (G_pgpe_pstate_record.activeCores >> 16);
    G_pgpe_pstate_record.pQuadState1->fields.active_cores = (G_pgpe_pstate_record.activeCores & 0xFF00);
    PK_TRACE_INF("QE: (Done), Vec=0x%x\n", quadsRequested);

    //If WOF Enabled, then interlock with OCC
    if(G_pgpe_pstate_record.wofEnabled == 1)
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

    PK_TRACE_INF("SCL: Apply Safe Enter");
}

//
//p9_pgpe_pstate_safe_mode()
//
void p9_pgpe_pstate_safe_mode()
{
    PK_TRACE_INF("SAF: Safe Mode Enter");
    uint32_t occScr2 = in32(OCB_OCCS2);
    uint32_t suspend = in32(OCB_OCCFLG) & BIT32(PM_COMPLEX_SUSPEND);
    uint32_t trace = suspend ? PRC_PM_SUSP : PRC_SAFE_MODE;

    if(!suspend)
    {
        G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) | (G_pgpe_pstate_record.globalPSComputed << 16)
                                      | (G_pgpe_pstate_record.safePstate << 8) | ((in32(OCB_OCCFLG) & BIT32(PGPE_SAFE_MODE)) ? 1 : 0);
    }

    p9_pgpe_optrace(trace);

    if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
    {
        occScr2 |= BIT32(PGPE_SAFE_MODE_ACTIVE);
        //In the case of suspend, if active the send_suspend is handled in actuate_pstates thread
        p9_pgpe_pstate_apply_safe_clips();
    }
    else
    {
        occScr2 |= BIT32(PGPE_SAFE_MODE_ERROR);

        if(suspend)
        {
            p9_pgpe_pstate_send_suspend_stop();
        }
    }

    G_pgpe_pstate_record.pstatesStatus = suspend ? PSTATE_PM_SUSPEND_PENDING : PSTATE_SAFE_MODE;
    trace = suspend ? ACK_PM_SUSP : ACK_SAFE_DONE;
    p9_pgpe_optrace(trace);
    occScr2 &= ~BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE);
    out32(OCB_OCCS2, occScr2);
    PK_TRACE_INF("SAF: Safe Mode Exit");
}

//
//p9_pgpe_pstate_send_suspend_stop
//
void p9_pgpe_pstate_send_suspend_stop()
{
#if SGPE_IPC_ENABLED == 1
    int rc;
    G_sgpe_suspend_stop.fields.msg_num = MSGID_PGPE_SGPE_SUSPEND_STOP;
    G_sgpe_suspend_stop.fields.return_code = 0x0;
    G_ipc_msg_pgpe_sgpe.cmd_data = &G_sgpe_suspend_stop;
    ipc_init_msg(&G_ipc_msg_pgpe_sgpe.cmd,
                 IPC_MSGID_PGPE_SGPE_SUSPEND_STOP,
                 p9_pgpe_suspend_stop_callback,
                 (void*)NULL);

    //Set SCOM Ownership of PMCR
    PK_TRACE_INF("SUSP: Setting SCOM Ownership of PMCRs");

    int q = 0;
    ocb_qcsr_t qcsr;
    qcsr.value = in32(OCB_QCSR);

    //Set LMCR for each CME
    for (q = 0; q < MAX_QUADS; q++)
    {
        //if(G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads & (0x80 >> q))
        if(G_pgpe_pstate_record.activeQuads & QUAD_MASK(q))
        {
            //CME0 within this quad
            if (qcsr.fields.ex_config & (0x800 >> (q << 1)))
            {
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_OR, q, 0), BIT64(0));
            }

            //CME1 within this quad
            if (qcsr.fields.ex_config & (0x400 >> (q << 1)))
            {
                GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_OR, q, 1), BIT64(0));
            }
        }
    }

    //send the command
    PK_TRACE_INF("SUSP:Sending Suspend  IPC to SGPE");
    rc = ipc_send_cmd(&G_ipc_msg_pgpe_sgpe.cmd);

    if(rc)
    {
        PK_TRACE_ERR("SUSP:Suspend Stop BAD ACK");
        PGPE_PANIC_AND_TRACE(PGPE_SGPE_SUSPEND_STOP_BAD_ACK);
    }

#else
    p9_pgpe_suspend_stop_callback(NULL, NULL);
#endif
}

//
//p9_pgpe_suspend_stop_callback
//
void p9_pgpe_suspend_stop_callback(ipc_msg_t* msg, void* arg)
{
    PK_TRACE_INF("SUSP:Stop Cb");
    p9_pgpe_optrace(SGPE_SUSP_DONE);
    uint32_t occScr2 = in32(OCB_OCCS2);
    occScr2 |= BIT32(PM_COMPLEX_SUSPENDED);
    G_pgpe_pstate_record.pstatesStatus = PSTATE_PM_SUSPENDED;
    out32(OCB_OCCS2, occScr2);
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
                    if (G_pgpe_pstate_record.quadPSTarget[q] > G_pgpe_pstate_record.globalPSNext)   //Keep localPS under GlobalPS
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

        p9_pgpe_pstate_freq_updt();
        p9_pgpe_pstate_updt_ext_volt(targetEVid);
    }
    //Lower number PState
    else if (((int16_t)(G_pgpe_pstate_record.globalPSTarget) - (int16_t)(G_pgpe_pstate_record.globalPSCurr)) < 0)
    {

        if ((targetEVid - G_pgpe_pstate_record.eVidCurr) <= G_gppb->ext_vrm_step_size_mv)
        {
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

    p9_pgpe_optrace(ACTL_BROADCAST);
    p9_pgpe_send_db0(db0.value,
                     G_pgpe_pstate_record.activeCores,
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
