/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_pstate.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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
#include "ipc_messages.h"
#include "p9_pgpe_header.h"

//
//#Defines
//
#define GPE_BUFFER(declaration) \
    declaration __attribute__ ((__aligned__(8))) __attribute__ ((section (".noncacheable")))

//
//Global External Data
//
extern PgpeHeader_t* G_pgpe_header_data;
extern GlobalPstateParmBlock* G_gppb;
extern uint32_t G_ext_vrm_inc_rate_mult_usperus;
extern uint32_t G_ext_vrm_dec_rate_mult_usperus;

//
//Global Data
//
//uint8_t G_safeModeEnabled;              //safe mode enabled/disabled
uint32_t G_pstatesStatus;
uint8_t G_pmcrOwner;
uint8_t G_wofEnabled;                   //wof enable/disable
uint8_t G_wofPending;                   //wof enable pending
uint8_t G_psClipMax[MAX_QUADS],         //higher numbered(min freq and volt)
        G_psClipMin[MAX_QUADS];         //lower numbered(max freq and volt)
uint8_t G_wofClip;                      //wof clip
uint8_t G_coresPSRequest[MAX_CORES];    //per core requested pstate
uint8_t G_quadPSComputed[MAX_QUADS];    //computed Pstate per quad
uint8_t G_globalPSComputed;             //computed global Pstate
uint8_t G_quadPSTarget[MAX_QUADS];      //target Pstate per quad
uint8_t G_globalPSTarget;               //target global Pstate
uint8_t G_quadPSCurr[MAX_QUADS];      //target Pstate per quad
uint8_t G_globalPSCurr;               //target global Pstate
uint8_t G_quadPSNext[MAX_QUADS];      //target Pstate per quad
uint8_t G_globalPSNext;
uint8_t G_safe_pstate;
uint32_t G_eVidCurr, G_eVidNext;
VFRT_Hcode_t* G_vfrt_ptr;
quad_state0_t* G_quadState0;
quad_state1_t* G_quadState1;
requested_active_quads_t* G_reqActQuads;
GPE_BUFFER(ipc_async_cmd_t G_ipc_msg_pgpe_sgpe);
GPE_BUFFER(ipcmsg_p2s_ctrl_stop_updates_t G_sgpe_control_updt);
GPE_BUFFER(ipcmsg_s2p_suspend_pstate_t G_sgpe_suspend_stop);

//Local Functions
inline void p9_pgpe_pstate_freq_updt(uint32_t activeCores);
void p9_pgpe_suspend_stop_callback(ipc_msg_t* msg, void* arg);
void p9_pgpe_wait_cme_db_ack(uint8_t msg_id, uint32_t activeCores);

//
//Data passing between IPC interrupt and threads
//
ipc_req_t G_ipc_pend_tbl[MAX_IPC_PEND_TBL_ENTRIES];
uint32_t G_already_sem_posted;
uint32_t G_process_pm_suspend;


//
//p9_pgpe_pstate_init
//
void p9_pgpe_pstate_init()
{
    uint32_t q;

    G_process_pm_suspend = 0;
//    G_safeModeEnabled = 0;
    G_pstatesStatus = PSTATE_INIT;
    G_wofEnabled = 0;
    G_wofPending = 0;

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_psClipMax[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_psClipMin[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_quadPSComputed[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_globalPSComputed = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_quadPSTarget[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_globalPSTarget = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_quadPSCurr[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_globalPSCurr  = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_quadPSNext[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_globalPSNext  = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
    }

    G_quadState0 = (quad_state0_t*)G_pgpe_header_data->g_quad_status_addr;
    G_quadState1 = (quad_state1_t*)(G_pgpe_header_data->g_quad_status_addr + 2);
    G_reqActQuads = (requested_active_quads_t*)(G_pgpe_header_data->g_req_active_quad_addr);
    G_safe_pstate = (G_gppb->reference_frequency_khz - G_gppb->safe_frequency_khz +
                     (G_gppb->frequency_step_khz - 1)) / G_gppb->frequency_step_khz;
#if OVERRIDE_PSAFE_PSTATE == 1
    G_safe_pstate = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][NOMINAL].pstate;
#endif

    PK_TRACE_INF("PS: G_safe_pstate=0x%x", G_safe_pstate);
}

//
//p9_pgpe_pstate_update
//
void p9_pgpe_pstate_update(uint8_t* s)
{
    uint32_t q, c;

    for (q = 0; q < MAX_QUADS; q++)
    {
        for (c = (q * CORES_PER_QUAD); c < (q + 1)*CORES_PER_QUAD; c++)
        {
            G_coresPSRequest[c] = s[q];
        }
    }

    p9_pgpe_pstate_do_auction(ALL_QUADS_BIT_MASK);
    p9_pgpe_pstate_apply_clips(NULL);
}

//
//p9_pgpe_pstate_do_auction
//
void p9_pgpe_pstate_do_auction(uint8_t quadAuctionRequest)
{
    PK_TRACE_INF("AUCT: Enter");
    //Get active cores and quads
    uint32_t q, c;
    uint32_t activeCores = G_quadState0->fields.active_cores;
    activeCores = (activeCores << 16) | (G_quadState1->fields.active_cores);
    uint32_t activeQuads = G_reqActQuads->fields.requested_active_quads;

    //Local PStates Auction
    for (q = 0; q < MAX_QUADS; q++)
    {
        //Make sure quad is active
        if ((activeQuads & (QUAD0_BIT_MASK >> q)) &
            (quadAuctionRequest & (QUAD0_BIT_MASK >> q)))
        {
            //Go through all the cores in this quad with pending request
            //and find the lowest numbered PState
            G_quadPSComputed[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;

            for (c = (q * CORES_PER_QUAD); c < (q + 1)*CORES_PER_QUAD; c++)
            {
                if (activeCores & (0x80000000 >> c))
                {
                    if (G_quadPSComputed[q] > G_coresPSRequest[c])
                    {
                        G_quadPSComputed[q] = G_coresPSRequest[c];
                    }
                }
            }
        }
        else
        {
            G_quadPSComputed[q] = 0xFF;
        }

        PK_TRACE_INF("AUCTION: G_quadPSComputed: 0x%x", G_quadPSComputed[q]);
    }

    //Global PState Auction
    G_globalPSComputed = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (activeQuads & (QUAD0_BIT_MASK >> q))
        {
            if (G_globalPSComputed  > G_quadPSComputed[q])
            {
                G_globalPSComputed  = G_quadPSComputed[q];
            }
        }
    }

    PK_TRACE_INF("AUCT glbPSCmpted: 0x%x", G_globalPSComputed);
    PK_TRACE_INF("AUCT: Exit");
}

//
//p9_pgpe_pstate_apply_clips
//
void p9_pgpe_pstate_apply_clips()
{
    PK_TRACE_INF("APCLP: Enter");
    uint32_t q;
    uint32_t activeQuads = G_reqActQuads->fields.requested_active_quads;

    //Apply clips to quad computed
    PK_TRACE_INF("APCLP: 0x%x", activeQuads);

    for (q = 0; q < MAX_QUADS; q++)
    {
        uint8_t maxPS = G_psClipMax[q];

        G_quadPSTarget[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;

        if (activeQuads & (QUAD0_BIT_MASK >> q))
        {

            if (G_wofEnabled == 1)
            {
                if (G_wofClip <= G_psClipMax[q])
                {
                    maxPS = G_wofClip;
                }
            }

            if (G_quadPSComputed[q] > maxPS)
            {
                G_quadPSTarget[q] = maxPS;
            }
            else if(G_quadPSComputed[q] < G_psClipMin[q])
            {
                G_quadPSTarget[q] = G_psClipMin[q];
            }
            else
            {
                G_quadPSTarget[q] = G_quadPSComputed[q];
            }
        }
        else
        {
            G_quadPSTarget[q] = 0xFF;
        }

        PK_TRACE_INF("APCLP: qPSTgt: 0x%x,cl=0x%x,0x%x", G_quadPSTarget[q], maxPS, G_psClipMin[q]);
    }

    //Global PState Auction
    G_globalPSTarget = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (activeQuads & (QUAD0_BIT_MASK >> q))
        {
            if (G_globalPSTarget  > G_quadPSTarget[q])
            {
                G_globalPSTarget  = G_quadPSTarget[q];
            }
        }
    }

    PK_TRACE_INF("APCLP: glbPSTgt: 0x%x", G_globalPSTarget);
    PK_TRACE_INF("APCLP: Exit");
}

//
//p9_pgpe_pstate_calc_wof
//
void p9_pgpe_pstate_calc_wof()
{
    //\TODO RTC 162896
    //Figure out how to calculate WOF Clip
    G_wofClip = 150;

    p9_pgpe_pstate_apply_clips();
}

void p9_pgpe_pstate_ipc_rsp_cb_sem_post(ipc_msg_t* msg, void* arg)
{
    pk_semaphore_post((PkSemaphore*)arg);
}

//
//p9_pgpe_pstate_suspend
//
void p9_pgpe_pstate_pm_complex_suspend()
{
    PK_TRACE_INF("PS:PM Susp Enter");

    if (G_pstatesStatus == PSTATE_ACTIVE)
    {
        G_pstatesStatus = PSTATE_PM_SUSPEND_PENDING;
        p9_pgpe_pstate_apply_safe_clips();
    }
    else if (G_pstatesStatus == PSTATE_STOPPED)
    {
        //todo Set FIR[Bit] need to determine which one
        PK_TRACE_INF("PS:PM Susp in PSTATE_STOPPED(Halting)");
        pk_halt();
    }
    else if (G_pstatesStatus == PSTATE_INIT)
    {
        G_pstatesStatus = PSTATE_PM_SUSPEND_PENDING;
        p9_pgpe_pstate_send_suspend_stop();
    }

    PK_TRACE_INF("PS:PM Susp Exit");
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
                 MSGID_PGPE_SGPE_SUSPEND_STOP,
                 p9_pgpe_suspend_stop_callback,
                 (void*)NULL);

    //send the command
    PK_TRACE_INF("PS: Susp Stop Sent");
    rc = ipc_send_cmd(&G_ipc_msg_pgpe_sgpe.cmd);

    if(rc)
    {
        pk_halt();
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
    PK_TRACE_INF("PS: Susp Stop Cb");
    uint32_t occScr2 = in32(OCB_OCCS2);
    occScr2 |= BIT32(PM_COMPLEX_SUSPENDED);
    G_pstatesStatus = PSTATE_PM_SUSPENDED;
    out32(OCB_OCCS2, occScr2);
}



//
//p9_pgpe_pstate_safe_mode()
//
void p9_pgpe_pstate_safe_mode()
{
    PK_TRACE_INF("PS:Safe Mode Enter");

    if (G_pstatesStatus == PSTATE_ACTIVE)
    {
        G_pstatesStatus = PSTATE_SAFE_MODE;
        p9_pgpe_pstate_apply_safe_clips();
    }
    else if (G_pstatesStatus == PSTATE_STOPPED)
    {
        //todo Set FIR[Bit] need to determine which one
        PK_TRACE_INF("PS:PM Susp in PSTATE_STOPPED(Halting)");
        pk_halt();
    }
    else if (G_pstatesStatus == PSTATE_INIT)
    {
        G_pstatesStatus = PSTATE_SAFE_MODE;
    }

    PK_TRACE_INF("PS:Safe Mode Exit");
}

//
//
//
void p9_pgpe_pstate_apply_safe_clips()
{
    PK_TRACE_INF("PS: Apply Safe Enter");
    int q;

    //Set clips to safe pstate
    for (q = 0; q < MAX_QUADS; q++)
    {
        G_psClipMax[q] = G_safe_pstate;
        G_psClipMin[q] = G_safe_pstate;
    }

    //Update clips
    p9_pgpe_pstate_apply_clips();

    PK_TRACE_INF("PS: Apply Safe Exit");
}

//
//p9_pgpe_pstate_at_target
//
int32_t p9_pgpe_pstate_at_target()
{
    if( G_globalPSCurr != G_globalPSTarget ||
        G_quadPSCurr[0] ^ G_quadPSTarget[0] ||
        G_quadPSCurr[1] ^ G_quadPSTarget[1] ||
        G_quadPSCurr[2] ^ G_quadPSTarget[2] ||
        G_quadPSCurr[3] ^ G_quadPSTarget[3] ||
        G_quadPSCurr[4] ^ G_quadPSTarget[4] ||
        G_quadPSCurr[5] ^ G_quadPSTarget[5] )
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
    PkMachineContext ctx;
    //We don't want actuate_step to interrupted by any external interrupt.
    //However, we still want FIT Timer to be active, so we mask of all interrupts
    //in the OIMR through UIH(by setting UIH priority lvl = 0)
    pk_critical_section_enter(&ctx);
    pk_irq_save_and_set_mask(0);
    pk_critical_section_exit(&ctx);

    //Do one actuate step
    PK_TRACE_DBG("ACT_TH: PSTgt: 0x%x PSCurr: 0x%x", G_globalPSTarget, G_globalPSCurr);

    PK_TRACE_DBG("ACT_TH: Step Entry");
    PK_TRACE_DBG("ACT_TH: PSTgt: 0x%x PSCurr: 0x%x", G_globalPSTarget, G_globalPSCurr);
    PK_TRACE_DBG("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[0], G_quadPSCurr[0]);
    PK_TRACE_DBG("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[1], G_quadPSCurr[1]);
    PK_TRACE_DBG("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[2], G_quadPSCurr[2]);
    PK_TRACE_DBG("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[3], G_quadPSCurr[3]);
    PK_TRACE_DBG("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[4], G_quadPSCurr[4]);
    PK_TRACE_DBG("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[5], G_quadPSCurr[5]);
    uint32_t q;
    ocb_qcsr_t qcsr;
    qcsr.value = in32(OCB_QCSR);
    uint32_t active_conf_cores = 0;
    uint32_t targetEVid = p9_pgpe_gppb_intp_vdd_from_ps(G_globalPSTarget, VPD_PT_SET_BIASED_SYSP, VPD_SLOPES_BIASED);

    //Determine active and configured cores
    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_reqActQuads->fields.requested_active_quads & (0x80 >> q))
        {
            if (qcsr.fields.ex_config & (0x800 >> (q << 1)))
            {
                active_conf_cores |= (0xC0000000 >> (q << 2));
            }

            if (qcsr.fields.ex_config & (0x400 >> (q << 1)))
            {
                active_conf_cores |= (0x30000000 >> (q << 2));
            }
        }

        PK_TRACE_INF("ACT_TH: act_c=0x%x", active_conf_cores);
    }

    //Higher number PState
    if (((int16_t)(G_globalPSTarget) - (int16_t)(G_globalPSCurr)) > 0)
    {
        if ((G_eVidCurr - targetEVid ) <= G_gppb->ext_vrm_step_size_mv)
        {
            G_eVidNext = targetEVid;
            G_globalPSNext = G_globalPSTarget;

            for (q = 0; q < MAX_QUADS; q++)
            {
                G_quadPSNext[q] = G_quadPSTarget[q];
            }
        }
        else
        {
            G_eVidNext = G_eVidCurr - G_gppb->ext_vrm_step_size_mv;
            G_globalPSNext = p9_pgpe_gppb_intp_ps_from_ext_vdd(G_eVidNext);

            for (q = 0; q < MAX_QUADS; q++)
            {
                if (G_quadPSTarget[q] > G_globalPSNext)   //Keep localPS under GlobalPS
                {
                    G_quadPSNext[q] = G_globalPSNext;
                }
                else
                {
                    G_quadPSNext[q] = G_quadPSTarget[q];
                }
            }
        }

        p9_pgpe_pstate_freq_updt(active_conf_cores);
        p9_pgpe_pstate_updt_ext_volt(targetEVid);
    }
    //Lower number PState
    else if (((int16_t)(G_globalPSTarget) - (int16_t)(G_globalPSCurr)) < 0)
    {
        if ((targetEVid - G_eVidCurr) <= G_gppb->ext_vrm_step_size_mv)
        {
            G_eVidNext = targetEVid;
            G_globalPSNext = G_globalPSTarget;

            for (q = 0; q < MAX_QUADS; q++)
            {
                G_quadPSNext[q] = G_quadPSTarget[q];
            }
        }
        else
        {
            G_eVidNext = G_eVidCurr + G_gppb->ext_vrm_step_size_mv;
            G_globalPSNext = p9_pgpe_gppb_intp_ps_from_ext_vdd(G_eVidNext);

            for (q = 0; q < MAX_QUADS; q++)
            {
                if (G_quadPSTarget[q] < G_globalPSNext)   //Keep localPS under GlobalPS
                {
                    G_quadPSNext[q] = G_globalPSNext;
                }
                else
                {
                    G_quadPSNext[q] = G_quadPSTarget[q];
                }
            }
        }

        p9_pgpe_pstate_updt_ext_volt(targetEVid);
        p9_pgpe_pstate_freq_updt(active_conf_cores);
    }
    else
    {
        for (q = 0; q < MAX_QUADS; q++)
        {
            G_quadPSNext[q] = G_quadPSTarget[q];
        }

        p9_pgpe_pstate_freq_updt(active_conf_cores);
    }

    //Update current
    G_globalPSCurr = G_globalPSNext;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_reqActQuads->fields.requested_active_quads & (0x80 >> q) &&
           (qcsr.fields.ex_config & (0xC00 >> 2 * q)))
        {
            G_quadPSCurr[q] = G_quadPSNext[q];
        }
    }

    //Update Shared SRAM
    G_quadState0->fields.quad0_pstate = G_quadPSCurr[0];
    G_quadState0->fields.quad1_pstate = G_quadPSCurr[1];
    G_quadState0->fields.quad2_pstate = G_quadPSCurr[2];
    G_quadState0->fields.quad3_pstate = G_quadPSCurr[3];
    G_quadState1->fields.quad4_pstate = G_quadPSCurr[4];
    G_quadState1->fields.quad5_pstate = G_quadPSCurr[5];

    PK_TRACE_DBG("ACT_TH: PSTgt: 0x%x PSCurr: 0x%x", G_globalPSTarget, G_globalPSCurr);
    PK_TRACE_DBG("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[0], G_quadPSCurr[0]);
    PK_TRACE_DBG("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[1], G_quadPSCurr[1]);
    PK_TRACE_DBG("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[2], G_quadPSCurr[2]);
    PK_TRACE_DBG("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[3], G_quadPSCurr[3]);
    PK_TRACE_DBG("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[4], G_quadPSCurr[4]);
    PK_TRACE_DBG("ACT_TH: Step Exit");


    //Now, PGPE is done with actuate step, let's
    //restore the interrupts in OIMR through UIH
    pk_irq_vec_restore(&ctx);
}

//
//p9_pgpe_pstate__updt_ext_volt
//
//Update External VRM to G_eVidNext
void p9_pgpe_pstate_updt_ext_volt(uint32_t tgtEVid)
{
#if !EPM_P9_TUNING
    uint32_t delay_us = 0;

    //Decreasing
    if (G_eVidNext < G_eVidCurr)
    {
        delay_us = (G_eVidCurr - G_eVidNext) *
                   G_ext_vrm_dec_rate_mult_usperus;
    }
    //Increasing
    else if(G_eVidNext > G_eVidCurr)
    {
        delay_us  = (G_eVidNext - G_eVidCurr) *
                    G_ext_vrm_inc_rate_mult_usperus;
    }

#endif

    //Update external voltage
    external_voltage_control_write(G_eVidNext);

#if !EPM_P9_TUNING

    //Delay for delay_us
    if (delay_us > 0)
    {
        pk_sleep(PK_MICROSECONDS((delay_us)));
    }

    if(G_eVidNext == tgtEVid)
    {
        pk_sleep(PK_MICROSECONDS((G_gppb->ext_vrm_stabilization_time_us)));
    }

#endif

    G_eVidCurr = G_eVidNext;
}

//
//Frequency Update
//
//Sends a DB0 to all active CMEs, so that Quad Managers(CMEs) update DPLL
inline void p9_pgpe_pstate_freq_updt(uint32_t activeCores)
{
    PK_TRACE_INF("ACT_TH: FreqUpdt Enter");
    PK_TRACE_INF("ACT_TH: act_cores=0x%x", activeCores);
    pgpe_db0_glb_bcast_t db0;
    db0.value = 0;
    db0.fields.msg_id = MSGID_DB0_GLOBAL_ACTUAL_BROADCAST;
    db0.fields.global_actual = G_globalPSNext;
    db0.fields.quad0_ps = G_quadPSNext[0];
    db0.fields.quad1_ps = G_quadPSNext[1];
    db0.fields.quad2_ps = G_quadPSNext[2];
    db0.fields.quad3_ps = G_quadPSNext[3];
    db0.fields.quad4_ps = G_quadPSNext[4];
    db0.fields.quad5_ps = G_quadPSNext[5];
    p9_dd1_db_multicast_wr(PCB_MUTLICAST_GRP1 | CPPM_CMEDB0, db0.value, activeCores);
    PK_TRACE_INF("ACT_TH: MCAST DB0");
    p9_pgpe_wait_cme_db_ack(MSGID_DB0_GLOBAL_ACTUAL_BROADCAST, activeCores);//Wait for ACKs from all CMEs
    PK_TRACE_INF("ACT_TH: Freq Updt Exit");
}


//
//Wait for CME to ack DB0
//
void p9_pgpe_wait_cme_db_ack(uint8_t msg_id, uint32_t active_conf_cores)
{
    int32_t c, q;
    uint32_t opit4pr;
    uint8_t pendingAcks = 0;
    uint8_t quadPendDBAck[MAX_QUADS];

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (active_conf_cores & (0xF0000000 >> (q << 2)))
        {
            quadPendDBAck[q] = 1;
        }
        else
        {
            quadPendDBAck[q] = 0;
        }
    }

    //Wait for all the acks to come
    pendingAcks = 1;

    while (pendingAcks)
    {
        //Process acks
        opit4pr = in32(OCB_OPIT4PRA);

        for (c = 0; c < MAX_CORES; c++)
        {
            if (opit4pr & (CCSR_CORE_CONFIG_MASK >> c))
            {
                if (quadPendDBAck[QUAD_FROM_CORE(c)])
                {
                    quadPendDBAck[QUAD_FROM_CORE(c)] = 0;
                    out32(OCB_OPIT4PRA_CLR, CCSR_CORE_CONFIG_MASK >> c); //Clear out pending bits
                    PK_TRACE_INF("ACT_TH: Ack C%02u", c);
                }
                else
                {
                    PK_TRACE_INF("ACT_TH: BadAck C%02u", c);
                    pk_halt();
                }
            }
        }

        //Check if any pending left
        pendingAcks = 0;

        for (q = 0; q < MAX_QUADS; q++)
        {
            if (quadPendDBAck[q])
            {
                pendingAcks = 1;
            }
        }
    }
}


void p9_pgpe_pstate_set_pmcr_owner(uint32_t owner)
{
    int q = 0;
    ocb_qcsr_t qcsr;
    qcsr.value = in32(OCB_QCSR);
//Write to LMCR register in SIMICS results in error
//So, adding a build flag for SIMICS.
//For SIMICS, LMCR should be set through command line
#if !SIMICS_TUNING

    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_reqActQuads->fields.requested_active_quads & (0x80 >> q))
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
