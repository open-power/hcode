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
extern PgpePstateRecord G_pgpe_pstate_record;

//
//Global Data
//
GPE_BUFFER(ipc_async_cmd_t G_ipc_msg_pgpe_sgpe);
GPE_BUFFER(ipcmsg_p2s_ctrl_stop_updates_t G_sgpe_control_updt);
GPE_BUFFER(ipcmsg_s2p_suspend_pstate_t G_sgpe_suspend_stop);

//Local Functions
inline void p9_pgpe_pstate_freq_updt(uint32_t activeCores);
void p9_pgpe_suspend_stop_callback(ipc_msg_t* msg, void* arg);

//
//p9_pgpe_pstate_init
//
void p9_pgpe_pstate_init()
{
    uint32_t q;
    ocb_qcsr_t qcsr;
    qcsr.value = in32(OCB_QCSR);

    G_pgpe_pstate_record.pstatesStatus = PSTATE_INIT;
    G_pgpe_pstate_record.wofEnabled = 0;
    G_pgpe_pstate_record.wofPending = 0;

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_pstate_record.psClipMax[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.psClipMin[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.quadPSComputed[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.globalPSComputed = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.quadPSTarget[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][NOMINAL].pstate;
        G_pgpe_pstate_record.globalPSTarget = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.quadPSCurr[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.globalPSCurr  = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.quadPSNext[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
        G_pgpe_pstate_record.globalPSNext  = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;

        //Set quads active equal to configured quads
        if (qcsr.fields.ex_config & (0xC00 >> (q << 1)))
        {
            G_pgpe_pstate_record.quadsActive |= (0x80 >> q);
        }
    }

    G_pgpe_pstate_record.pQuadState0 = (quad_state0_t*)G_pgpe_header_data->g_quad_status_addr;
    G_pgpe_pstate_record.pQuadState1 = (quad_state1_t*)(G_pgpe_header_data->g_quad_status_addr + 2);
    G_pgpe_pstate_record.pReqActQuads = (requested_active_quads_t*)(G_pgpe_header_data->g_req_active_quad_addr);
    G_pgpe_pstate_record.safePstate = (G_gppb->reference_frequency_khz - G_gppb->safe_frequency_khz +
                                       (G_gppb->frequency_step_khz - 1)) / G_gppb->frequency_step_khz;
#if OVERRIDE_PSAFE_PSTATE == 1
    G_pgpe_pstate_record.safePstate = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][NOMINAL].pstate;
#endif

    PK_TRACE_INF("SafePstate=0x%x", G_pgpe_pstate_record.safePstate);
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
            G_pgpe_pstate_record.coresPSRequest[c] = s[q];
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
    PK_TRACE_DBG("Auction Start");
    uint32_t q, c;
    uint32_t activeCores = G_pgpe_pstate_record.pQuadState0->fields.active_cores;
    activeCores = (activeCores << 16) | (G_pgpe_pstate_record.pQuadState1->fields.active_cores);
    uint32_t activeQuads = G_pgpe_pstate_record.quadsActive;

    //Local PStates Auction
    for (q = 0; q < MAX_QUADS; q++)
    {
        //Make sure quad is active
        if ((activeQuads & (QUAD0_BIT_MASK >> q)) &
            (quadAuctionRequest & (QUAD0_BIT_MASK >> q)))
        {
            //Go through all the cores in this quad with pending request
            //and find the lowest numbered PState
            G_pgpe_pstate_record.quadPSComputed[q] = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;

            for (c = (q * CORES_PER_QUAD); c < (q + 1)*CORES_PER_QUAD; c++)
            {
                if (activeCores & (0x80000000 >> c))
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
        if (activeQuads & (QUAD0_BIT_MASK >> q))
        {
            if (G_pgpe_pstate_record.globalPSComputed  > G_pgpe_pstate_record.quadPSComputed[q])
            {
                G_pgpe_pstate_record.globalPSComputed  = G_pgpe_pstate_record.quadPSComputed[q];
            }
        }
    }

    PK_TRACE_DBG("qPSCmpd: 0x%x[0] 0x%x[1] 0x%x[2] 0x%x[3]", G_pgpe_pstate_record.quadPSComputed[0]
                 , G_pgpe_pstate_record.quadPSComputed[1]
                 , G_pgpe_pstate_record.quadPSComputed[2],
                 G_pgpe_pstate_record.quadPSComputed[3]);
    PK_TRACE_DBG("qPSCmpd: 0x%x[4] 0x%x[5] 0x%x(glb)", G_pgpe_pstate_record.quadPSComputed[4]
                 , G_pgpe_pstate_record.quadPSComputed[5]
                 , G_pgpe_pstate_record.globalPSComputed);
    PK_TRACE_DBG("Auction Done");
}

//
//p9_pgpe_pstate_apply_clips
//
void p9_pgpe_pstate_apply_clips()
{
    PK_TRACE_DBG("ApplyClip Start");
    uint32_t q;
    uint32_t activeQuads = G_pgpe_pstate_record.quadsActive;


    for (q = 0; q < MAX_QUADS; q++)
    {
        uint8_t minPS = G_pgpe_pstate_record.psClipMin[q];


        if (activeQuads & (QUAD0_BIT_MASK >> q))
        {

            if (G_pgpe_pstate_record.wofEnabled == 1)
            {
                if (G_pgpe_pstate_record.wofClip > minPS)
                {
                    minPS = G_pgpe_pstate_record.wofClip;
                }
            }

            if (G_pgpe_pstate_record.quadPSComputed[q] > G_pgpe_pstate_record.psClipMax[q])
            {
                G_pgpe_pstate_record.quadPSTarget[q] = G_pgpe_pstate_record.psClipMax[q];
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
        if (activeQuads & (QUAD0_BIT_MASK >> q))
        {
            if (G_pgpe_pstate_record.globalPSTarget  > G_pgpe_pstate_record.quadPSTarget[q])
            {
                G_pgpe_pstate_record.globalPSTarget  = G_pgpe_pstate_record.quadPSTarget[q];
            }
        }
    }

    PK_TRACE_INF("qPSTgt: 0x%x[0] 0x%x[1] 0x%x[2] 0x%x[3]", G_pgpe_pstate_record.quadPSTarget[0],
                 G_pgpe_pstate_record.quadPSTarget[1],
                 G_pgpe_pstate_record.quadPSTarget[2],
                 G_pgpe_pstate_record.quadPSTarget[3]);
    PK_TRACE_INF("qPSTgt: 0x%x[4] 0x%x[5] 0x%x(Glb)", G_pgpe_pstate_record.quadPSTarget[4],
                 G_pgpe_pstate_record.quadPSTarget[5],
                 G_pgpe_pstate_record.globalPSTarget);

    PK_TRACE_DBG("ApplyClip Done");
}

//
//p9_pgpe_pstate_calc_wof
//
void p9_pgpe_pstate_calc_wof()
{
    PK_TRACE_DBG("CALC_WOF: fclip_ps: 0x%x", G_pgpe_pstate_record.wofClip);
    G_pgpe_pstate_record.wofClip = G_pgpe_pstate_record.pVFRT->vfrt_data[0][23];

    p9_pgpe_pstate_apply_clips();
}

//
//p9_pgpe_pstate_update_wof_state
//
void p9_pgpe_pstate_update_wof_state()
{
    pgpe_wof_state_t* wof_state = (pgpe_wof_state_t*)G_pgpe_header_data->g_pgpe_wof_state_addr;
    PK_TRACE_INF("Wof Updt fclip_ps: 0x%x", G_pgpe_pstate_record.wofClip);
    wof_state->fields.fclip_ps = G_pgpe_pstate_record.wofClip;
    wof_state->fields.vclip_mv = G_pgpe_pstate_record.eVidCurr;
    wof_state->fields.fratio = 1;
    wof_state->fields.vratio = 1;
}

//
//p9_pgpe_pstate_process_quad_entry
//
void p9_pgpe_pstate_process_quad_entry(uint32_t quadsAffected)
{
    uint32_t q;

    G_pgpe_pstate_record.quadsActive &= ~quadsAffected;

    if (G_pgpe_pstate_record.pstatesStatus == PSTATE_SUSPENDED_WHILE_ACTIVE)
    {
        for (q = 0; q < MAX_QUADS; q++)
        {
            if (quadsAffected & (QUAD0_BIT_MASK >> q))
            {
                G_pgpe_pstate_record.quadPSTarget[q] = 0xFF;
                G_pgpe_pstate_record.quadPSCurr[q] = 0xFF;
                G_pgpe_pstate_record.quadPSNext[q] = 0xFF;
                G_pgpe_pstate_record.quadPSComputed[q] = 0xFF;
            }
        }

        G_pgpe_pstate_record.pQuadState0->fields.quad0_pstate = G_pgpe_pstate_record.quadPSCurr[0];
        G_pgpe_pstate_record.pQuadState0->fields.quad1_pstate = G_pgpe_pstate_record.quadPSCurr[1];
        G_pgpe_pstate_record.pQuadState0->fields.quad2_pstate = G_pgpe_pstate_record.quadPSCurr[2];
        G_pgpe_pstate_record.pQuadState0->fields.quad3_pstate = G_pgpe_pstate_record.quadPSCurr[3];
        G_pgpe_pstate_record.pQuadState1->fields.quad4_pstate = G_pgpe_pstate_record.quadPSCurr[4];
        G_pgpe_pstate_record.pQuadState1->fields.quad5_pstate = G_pgpe_pstate_record.quadPSCurr[5];

        p9_pgpe_pstate_do_auction(ALL_QUADS_BIT_MASK);
        p9_pgpe_pstate_apply_clips();

        //Stop Pending
        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_ack == 1)
        {

            ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd;
            ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;

            //If Start
            if (args->action == PGPE_ACTION_PSTATE_START)
            {
                p9_pgpe_pstate_set_pmcr_owner(PMCR_OWNER_OCC);
            }
            else
            {
                p9_pgpe_pstate_stop();
            }
        }
        else
        {
            G_pgpe_pstate_record.pstatesStatus = PSTATE_ACTIVE;
        }

        pk_semaphore_post(&G_pgpe_pstate_record.sem_actuate);
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_SUSPENDED_WHILE_STOPPED_INIT)
    {
        //Start Pending
        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_ack == 1)
        {
            p9_pgpe_pstate_start(PSTATE_START_OCC_IPC);
            pk_semaphore_post(&G_pgpe_pstate_record.sem_actuate);
        }
        else
        {
            G_pgpe_pstate_record.pstatesStatus = PSTATE_STOPPED;
        }

    }

    PK_TRACE_DBG("Q Entry Done.qAct=%x\n", G_pgpe_pstate_record.quadsActive);
}

//
//p9_pgpe_pstate_process_quad_exit
//
void p9_pgpe_pstate_process_quad_exit(uint32_t quadsAffected)
{
    uint32_t q;
    qppm_dpll_freq_t dpllFreq;
    dpllFreq.value = 0;
    qppm_qpmmr_t qpmmr;
    uint32_t cme_interppm_dpll_enable_set = 0;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (quadsAffected & (QUAD0_BIT_MASK >> q))
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR, q), qpmmr.value);
            cme_interppm_dpll_enable_set = qpmmr.fields.cme_interppm_dpll_enable;
            qpmmr.fields.cme_interppm_dpll_enable = 0;
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR, q), qpmmr.value);

            //Write QPPM_DPLL_FREQ for just woken up quads
            dpllFreq.fields.fmax  = (uint16_t)(G_gppb->dpll_pstate0_value -
                                               G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate);
            dpllFreq.fields.fmult = (uint16_t)(G_gppb->dpll_pstate0_value -
                                               G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate);
            dpllFreq.fields.fmin  = (uint16_t)(G_gppb->dpll_pstate0_value -
                                               G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate);
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_DPLL_FREQ, q), dpllFreq.value);

            qpmmr.fields.cme_interppm_dpll_enable = cme_interppm_dpll_enable_set;
            GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR, q), qpmmr.value);
        }
    }

    //ACK back to SGPE
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd;
    ipcmsg_s2p_update_active_quads_t* args = (ipcmsg_s2p_update_active_quads_t*)async_cmd->cmd_data;
    args->fields.return_code = SGPE_PGPE_IPC_RC_SUCCESS;
    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 0;
    ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd, IPC_RC_SUCCESS);

    PK_TRACE_DBG("Q Exit Done.qAct=%x\n", G_pgpe_pstate_record.quadsActive);
}
//
//p9_pgpe_pstate_ipc_rsp_cb_sem_post
//
void p9_pgpe_pstate_ipc_rsp_cb_sem_post(ipc_msg_t* msg, void* arg)
{
    pk_semaphore_post((PkSemaphore*)arg);
}

//
//p9_pgpe_pstate_suspend
//
void p9_pgpe_pstate_pm_complex_suspend()
{
    PK_TRACE_DBG("PM Suspend Enter");

    if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
    {
        G_pgpe_pstate_record.pstatesStatus = PSTATE_PM_SUSPEND_PENDING;
        p9_pgpe_pstate_apply_safe_clips();
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED)
    {
        //todo Set FIR[Bit] need to determine which one
        PK_TRACE_INF("PM Susp in PSTATE_STOPPED(Halting)");
        pk_halt();
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT)
    {
        G_pgpe_pstate_record.pstatesStatus = PSTATE_PM_SUSPEND_PENDING;
        p9_pgpe_pstate_send_suspend_stop();
    }

    PK_TRACE_DBG("PM Suspend Exit");
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
    PK_TRACE_INF("Suspend Stop Sent");
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
    PK_TRACE_INF("Susp Stop Cb");
    uint32_t occScr2 = in32(OCB_OCCS2);
    occScr2 |= BIT32(PM_COMPLEX_SUSPENDED);
    G_pgpe_pstate_record.pstatesStatus = PSTATE_PM_SUSPENDED;
    out32(OCB_OCCS2, occScr2);
}



//
//p9_pgpe_pstate_safe_mode()
//
void p9_pgpe_pstate_safe_mode()
{
    PK_TRACE_DBG("Safe Mode Enter");

    if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
    {
        G_pgpe_pstate_record.pstatesStatus = PSTATE_SAFE_MODE;
        p9_pgpe_pstate_apply_safe_clips();
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED)
    {
        //todo Set FIR[Bit] need to determine which one
        PK_TRACE_INF("PM Susp in PSTATE_STOPPED(Halting)");
        pk_halt();
    }
    else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_INIT)
    {
        G_pgpe_pstate_record.pstatesStatus = PSTATE_SAFE_MODE;
    }

    PK_TRACE_DBG("Safe Mode Exit");
}

//
// p9_pgpe_pstate_apply_safe_clips
//
void p9_pgpe_pstate_apply_safe_clips()
{
    PK_TRACE_DBG("Apply Safe Enter");
    int q;

    //Set clips to safe pstate
    for (q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_pstate_record.psClipMax[q] = G_pgpe_pstate_record.safePstate;
        G_pgpe_pstate_record.psClipMin[q] = G_pgpe_pstate_record.safePstate;
    }

    //Update clips
    p9_pgpe_pstate_apply_clips();

    PK_TRACE_DBG("Apply Safe Exit");
}

//
//p9_pgpe_pstate_at_target
//
int32_t p9_pgpe_pstate_at_target()
{
    if( G_pgpe_pstate_record.globalPSCurr != G_pgpe_pstate_record.globalPSTarget ||
        ((G_pgpe_pstate_record.quadsActive & QUAD0_BIT_MASK)
         && G_pgpe_pstate_record.quadPSCurr[0] ^ G_pgpe_pstate_record.quadPSTarget[0]) ||
        ((G_pgpe_pstate_record.quadsActive & QUAD1_BIT_MASK)
         && G_pgpe_pstate_record.quadPSCurr[1] ^ G_pgpe_pstate_record.quadPSTarget[1]) ||
        ((G_pgpe_pstate_record.quadsActive & QUAD2_BIT_MASK)
         && G_pgpe_pstate_record.quadPSCurr[2] ^ G_pgpe_pstate_record.quadPSTarget[2]) ||
        ((G_pgpe_pstate_record.quadsActive & QUAD3_BIT_MASK)
         && G_pgpe_pstate_record.quadPSCurr[3] ^ G_pgpe_pstate_record.quadPSTarget[3]) ||
        ((G_pgpe_pstate_record.quadsActive & QUAD4_BIT_MASK)
         && G_pgpe_pstate_record.quadPSCurr[4] ^ G_pgpe_pstate_record.quadPSTarget[4]) ||
        ((G_pgpe_pstate_record.quadsActive & QUAD5_BIT_MASK)
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
    PK_TRACE_DBG("Step Entry");
    PK_TRACE_DBG("GTgt,GCurr: 0x%x, 0x%x", G_pgpe_pstate_record.globalPSTarget,
                 G_pgpe_pstate_record.globalPSCurr);
    PK_TRACE_DBG("QTgt,QCurr: 0x%x,0x%x 0x%x,0x%x", G_pgpe_pstate_record.quadPSTarget[0],
                 G_pgpe_pstate_record.quadPSCurr[0], G_pgpe_pstate_record.quadPSTarget[1],
                 G_pgpe_pstate_record.quadPSCurr[1]);
    PK_TRACE_DBG("QTgt,QCurr: 0x%x,0x%x 0x%x,0x%x", G_pgpe_pstate_record.quadPSTarget[2],
                 G_pgpe_pstate_record.quadPSCurr[2], G_pgpe_pstate_record.quadPSTarget[3],
                 G_pgpe_pstate_record.quadPSCurr[3]);
    PK_TRACE_DBG("QTgt,QCurr: 0x%x,0x%x 0x%x,0x%x", G_pgpe_pstate_record.quadPSTarget[4],
                 G_pgpe_pstate_record.quadPSCurr[4], G_pgpe_pstate_record.quadPSTarget[5],
                 G_pgpe_pstate_record.quadPSCurr[5]);

    uint32_t q;
    ocb_qcsr_t qcsr;
    qcsr.value = in32(OCB_QCSR);
    uint32_t active_conf_cores = 0;
    uint32_t targetEVid = p9_pgpe_gppb_intp_vdd_from_ps(G_pgpe_pstate_record.globalPSTarget, VPD_PT_SET_BIASED_SYSP);

    //Determine active and configured cores
    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_pgpe_pstate_record.quadsActive & (0x80 >> q))
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

    }

    //Higher number PState
    if (((int16_t)(G_pgpe_pstate_record.globalPSTarget) - (int16_t)(G_pgpe_pstate_record.globalPSCurr)) > 0)
    {
        if ((G_pgpe_pstate_record.eVidCurr - targetEVid ) <= G_gppb->ext_vrm_step_size_mv)
        {
            G_pgpe_pstate_record.eVidNext = targetEVid;
            G_pgpe_pstate_record.globalPSNext = G_pgpe_pstate_record.globalPSTarget;

            for (q = 0; q < MAX_QUADS; q++)
            {
                if(G_pgpe_pstate_record.quadsActive & (0x80 >> q))
                {
                    G_pgpe_pstate_record.quadPSNext[q] = G_pgpe_pstate_record.quadPSTarget[q];
                }
            }
        }
        else
        {
            G_pgpe_pstate_record.eVidNext = G_pgpe_pstate_record.eVidCurr - G_gppb->ext_vrm_step_size_mv;
            G_pgpe_pstate_record.globalPSNext = p9_pgpe_gppb_intp_ps_from_ext_vdd(G_pgpe_pstate_record.eVidNext);

            for (q = 0; q < MAX_QUADS; q++)
            {
                if(G_pgpe_pstate_record.quadsActive & (0x80 >> q))
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

        p9_pgpe_pstate_freq_updt(active_conf_cores);
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
                if(G_pgpe_pstate_record.quadsActive & (0x80 >> q))
                {
                    G_pgpe_pstate_record.quadPSNext[q] = G_pgpe_pstate_record.quadPSTarget[q];
                }
            }
        }
        else
        {
            G_pgpe_pstate_record.eVidNext = G_pgpe_pstate_record.eVidCurr + G_gppb->ext_vrm_step_size_mv;
            G_pgpe_pstate_record.globalPSNext = p9_pgpe_gppb_intp_ps_from_ext_vdd(G_pgpe_pstate_record.eVidNext);

            for (q = 0; q < MAX_QUADS; q++)
            {
                if(G_pgpe_pstate_record.quadsActive & (0x80 >> q))
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
        p9_pgpe_pstate_freq_updt(active_conf_cores);
    }
    else
    {
        for (q = 0; q < MAX_QUADS; q++)
        {
            if(G_pgpe_pstate_record.quadsActive & (0x80 >> q))
            {
                G_pgpe_pstate_record.quadPSNext[q] = G_pgpe_pstate_record.quadPSTarget[q];
            }
        }

        p9_pgpe_pstate_freq_updt(active_conf_cores);
    }

    //Update current
    G_pgpe_pstate_record.globalPSCurr = G_pgpe_pstate_record.globalPSNext;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_pgpe_pstate_record.quadsActive & (0x80 >> q))
        {
            G_pgpe_pstate_record.quadPSCurr[q] = G_pgpe_pstate_record.quadPSNext[q];
        }
    }

    //Update Shared SRAM
    G_pgpe_pstate_record.pQuadState0->fields.quad0_pstate = G_pgpe_pstate_record.quadPSCurr[0];
    G_pgpe_pstate_record.pQuadState0->fields.quad1_pstate = G_pgpe_pstate_record.quadPSCurr[1];
    G_pgpe_pstate_record.pQuadState0->fields.quad2_pstate = G_pgpe_pstate_record.quadPSCurr[2];
    G_pgpe_pstate_record.pQuadState0->fields.quad3_pstate = G_pgpe_pstate_record.quadPSCurr[3];
    G_pgpe_pstate_record.pQuadState1->fields.quad4_pstate = G_pgpe_pstate_record.quadPSCurr[4];
    G_pgpe_pstate_record.pQuadState1->fields.quad5_pstate = G_pgpe_pstate_record.quadPSCurr[5];

    PK_TRACE_DBG("Step Exit");

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
}

//
//Frequency Update
//
//Sends a DB0 to all active CMEs, so that Quad Managers(CMEs) update DPLL
inline void p9_pgpe_pstate_freq_updt(uint32_t activeCores)
{
    PK_TRACE_DBG("FreqUpdt Enter");
    uint32_t q, c;
    ocb_ccsr_t ccsr;
    ccsr.value = in32(OCB_CCSR);
    uint32_t active_cores = 0;

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

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (G_pgpe_pstate_record.quadsActive & (0x80 >> q))
        {
            for (c = q << 2; c < ((q + 1) << 2); c++)
            {
                if (ccsr.value & ((0xc0000000) >> c))
                {
                    active_cores |= ((0xc0000000) >> c);
                }
            }
        }
    }

    p9_dd1_db_multicast_wr(PCB_MUTLICAST_GRP1 | CPPM_CMEDB0, db0.value, activeCores);
    // p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEDB0, active_cores), db0.value);
    p9_pgpe_wait_cme_db_ack(G_pgpe_pstate_record.quadsActive);//Wait for ACKs from all QuadManagers
    PK_TRACE_DBG("PS: Freq Updt Exit");
}

void p9_pgpe_wait_cme_db_ack(uint32_t quadAckExpect)
{
    uint32_t q;
    uint32_t opit4pr, opit4prQuad, opit4Clr = 0;

    PK_TRACE_INF("AckExpect=0x%x", quadAckExpect);

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
                if (quadAckExpect & (0x80 >> q))
                {
                    PK_TRACE_DBG("opit4prQuad=0x%x", opit4pr);
                    quadAckExpect &= ~(0x80 >> q);
                    opit4Clr |= (opit4prQuad << ((MAX_QUADS - q + 1) << 2));
                    PK_TRACE_INF("GotAck from %d", q);
                }
                else
                {
                    PK_TRACE_INF("Unexpected qCME[%u] ACK", q);
                    pk_halt();
                }
            }
        }

        out32(OCB_OPIT4PRA_CLR, opit4Clr);
    }


    PK_TRACE_INF("qCME ACKs rcvd");
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
        if(G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads & (0x80 >> q))
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
//p9_pgpe_pstate_start()
//
void p9_pgpe_pstate_start(uint32_t pstate_start_origin)
{
    PK_TRACE_DBG("Pstate Start Enter");
    ocb_ccsr_t ccsr;
    ccsr.value = in32(OCB_CCSR);
    uint8_t quadPstates[MAX_QUADS];
    uint32_t lowestDpll, syncPstate;
    qppm_dpll_stat_t dpll;
    uint32_t active_conf_cores = 0;
    uint32_t q, c;

    //Setup Shared Memory Area
    G_pgpe_pstate_record.pQuadState0->fields.active_cores = (ccsr.value >> 16);
    G_pgpe_pstate_record.pQuadState1->fields.active_cores = (ccsr.value & 0xFF00);
    G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads =  G_pgpe_pstate_record.quadsActive;
    PK_TRACE_DBG("Shr Mem Updt");

    //1. Read DPLLs
    lowestDpll = 0xFFF;
    dpll.value = 0;
    PK_TRACE_INF("DPLL0Value=0x%x", G_gppb->dpll_pstate0_value);

    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_pgpe_pstate_record.quadsActive & (0x80 >> q))
        {
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_DPLL_STAT, q), dpll.value);

            if ((dpll.fields.freqout)  < lowestDpll )
            {
                lowestDpll = dpll.fields.freqout;
            }

            PK_TRACE_DBG("Quad[%d]: DPLL=0x%x", q, (dpll.fields.freqout));
            active_conf_cores |= (0xF0000000 >> q * 4);
        }
    }

    //2. Determine Sync Pstate
    if (lowestDpll > G_gppb->dpll_pstate0_value)
    {
        syncPstate = G_gppb->dpll_pstate0_value;
    }
    else
    {
        syncPstate = G_gppb->dpll_pstate0_value - lowestDpll;
    }

    //Init Core PStates
    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_pgpe_pstate_record.quadsActive & (0x80 >> q))
        {
            quadPstates[q] = syncPstate;
        }
        else
        {
            quadPstates[q] = 0xFF;
        }
    }

    p9_pgpe_pstate_update(quadPstates);
    PK_TRACE_INF("Sync Pstate=0x%x", syncPstate);
    PK_TRACE_INF("LowDPLL:0x%x", lowestDpll);
    PK_TRACE_INF("GlblPsTgt:0x%x", G_pgpe_pstate_record.globalPSTarget);

    //3. Determine PMCR Owner
    //We save it off so that CMEs that are currently in STOP11
    //can be told upon STOP11 Exit
    if (pstate_start_origin == PSTATE_START_OCC_IPC)
    {
        PK_TRACE_DBG("g_oimr_override:0x%llx", g_oimr_override);
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd;
        ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;

        if (args->pmcr_owner == PMCR_OWNER_HOST)
        {
            PK_TRACE_DBG("OWNER_HOST");
            G_pgpe_pstate_record.pmcrOwner = PMCR_OWNER_HOST;
            g_oimr_override &= ~(BIT64(46));
            out32(OCB_OIMR1_CLR, BIT32(14)); //Enable PCB_INTR_TYPE1
        }
        else if (args->pmcr_owner == PMCR_OWNER_OCC)
        {
            PK_TRACE_DBG("OWNER_OCC");
            G_pgpe_pstate_record.pmcrOwner = PMCR_OWNER_OCC;
            g_oimr_override |= BIT64(46);
            out32(OCB_OIMR1_OR, BIT32(14)); //Disable PCB_INTR_TYPE1
        }
        else if (args->pmcr_owner == PMCR_OWNER_CHAR)
        {
            PK_TRACE_DBG("OWNER_CHAR");
            G_pgpe_pstate_record.pmcrOwner = PMCR_OWNER_CHAR;
            g_oimr_override &= ~(BIT64(46));
            out32(OCB_OIMR1_CLR, BIT32(14)); //Enable PCB_INTR_TYPE1
        }
        else
        {
            pk_halt();
        }

        //Set LMCR for each CME
        //If OWNER is switched to CHAR, the last LMCR setting is retained
        if (G_pgpe_pstate_record.pmcrOwner == PMCR_OWNER_HOST)
        {
            p9_pgpe_pstate_set_pmcr_owner(PMCR_OWNER_HOST);
        }
        else if (G_pgpe_pstate_record.pmcrOwner == PMCR_OWNER_OCC)
        {
            p9_pgpe_pstate_set_pmcr_owner(PMCR_OWNER_OCC);
        }

        //We set PCB TYPE1 and LMCR for characterization mode
        //and explicitly set PMCR OWNER to CHAR
    }
    else
    {
        p9_pgpe_pstate_set_pmcr_owner(PMCR_OWNER_OCC);
        PK_TRACE_DBG("OWNER_CHAR");
        G_pgpe_pstate_record.pmcrOwner = PMCR_OWNER_CHAR;
        g_oimr_override &= ~(BIT64(46));
        out32(OCB_OIMR1_CLR, BIT32(14)); //Enable PCB_INTR_TYPE1
    }

    //4. Set External VRM and Send DB0 to every active CME
    external_voltage_control_init(&G_pgpe_pstate_record.eVidCurr);
    PK_TRACE_INF("eVidCurr=%umV", G_pgpe_pstate_record.eVidCurr);
#if SIMICS_TUNING == 1
    G_pgpe_pstate_record.eVidCurr = p9_pgpe_gppb_intp_vdd_from_ps(G_pgpe_pstate_record.globalPSTarget,
                                    VPD_PT_SET_BIASED_SYSP);
#endif
    G_pgpe_pstate_record.eVidNext = p9_pgpe_gppb_intp_vdd_from_ps(G_pgpe_pstate_record.globalPSTarget,
                                    VPD_PT_SET_BIASED_SYSP);
    PK_TRACE_INF("eVidNext=%umV", G_pgpe_pstate_record.eVidNext);

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

    if (G_pgpe_pstate_record.eVidCurr > G_pgpe_pstate_record.eVidNext)
    {
        //Send DB0
        PK_TRACE_DBG("Send DB0");

        for (q = 0; q < MAX_QUADS; q++)
        {
            if(G_pgpe_pstate_record.quadsActive & (0x80 >> q))
            {
                for (c = q << 2; c < ((q + 1) << 2); c++)
                {
                    if (ccsr.value & ((0xc0000000) >> c))
                    {
                        p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEDB0, c), db0.value);
                    }
                }
            }
        }

        p9_pgpe_wait_cme_db_ack(G_pgpe_pstate_record.quadsActive);//Wait for ACKs from all QuadManagers
        PK_TRACE_DBG("DB0 ACK");

        p9_pgpe_pstate_updt_ext_volt(G_pgpe_pstate_record.eVidNext); //update voltage
    }
    else
    {
        p9_pgpe_pstate_updt_ext_volt(G_pgpe_pstate_record.eVidNext); //update voltage

        //Send DB0
        for (q = 0; q < MAX_QUADS; q++)
        {
            if (G_pgpe_pstate_record.quadsActive & (0x80 >> q))
            {
                for (c = q << 2; c < ((q + 1) << 2); c++)
                {
                    if (ccsr.value & ((0xc0000000) >> c))
                    {
                        p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEDB0, c), db0.value);
                    }
                }
            }
        }

        PK_TRACE_DBG("Send START DB0");
        p9_pgpe_wait_cme_db_ack(G_pgpe_pstate_record.quadsActive);//Wait for ACKs from all QuadManagers
        PK_TRACE_DBG("DB0 ACK");
    }

    G_pgpe_pstate_record.globalPSCurr = G_pgpe_pstate_record.globalPSTarget;
    PK_TRACE_INF("GlbPSCurr:0x%x", G_pgpe_pstate_record.globalPSCurr );

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_pstate_record.quadPSCurr[q] = G_pgpe_pstate_record.quadPSTarget[q];
    }

    //Update Shared SRAM
    G_pgpe_pstate_record.pQuadState0->fields.quad0_pstate = G_pgpe_pstate_record.quadPSCurr[0];
    G_pgpe_pstate_record.pQuadState0->fields.quad1_pstate = G_pgpe_pstate_record.quadPSCurr[1];
    G_pgpe_pstate_record.pQuadState0->fields.quad2_pstate = G_pgpe_pstate_record.quadPSCurr[2];
    G_pgpe_pstate_record.pQuadState0->fields.quad3_pstate = G_pgpe_pstate_record.quadPSCurr[3];
    G_pgpe_pstate_record.pQuadState1->fields.quad4_pstate = G_pgpe_pstate_record.quadPSCurr[4];
    G_pgpe_pstate_record.pQuadState1->fields.quad5_pstate = G_pgpe_pstate_record.quadPSCurr[5];


    //6. Enable PStates
    G_pgpe_pstate_record.pstatesStatus = PSTATE_ACTIVE;
    uint32_t occScr2 = in32(OCB_OCCS2);
    occScr2 |= BIT32(PGPE_PSTATE_PROTOCOL_ACTIVE);
    PK_TRACE_INF("PGPE_PSTATE_PROTOCOL_ACTIVE set");
    out32(OCB_OCCS2, occScr2);

    uint32_t opit4pr;
    opit4pr = in32(OCB_OPIT4PRA);
    out32(OCB_OPIT4PRA_CLR, opit4pr);
    out32(OCB_OISR1_CLR, BIT32(17));
    g_oimr_override &= ~BIT64(49);
    out32(OCB_OIMR1_CLR, BIT32(17)); //Enable PCB_INTR_TYPE4

    //7. Send Pstate Start ACK to OCC
    if (pstate_start_origin == PSTATE_START_OCC_IPC)
    {
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd;
        ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_processing = 0;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd, IPC_RC_SUCCESS);

    }

    PK_TRACE_DBG("Start Done");
}

//
//p9_pgpe_pstate_stop()
//
void p9_pgpe_pstate_stop()
{
    PK_TRACE_DBG("Stop Enter");
    uint32_t q, c;
    ocb_ccsr_t ccsr;
    ccsr.value = in32(OCB_CCSR);

    pgpe_db0_stop_ps_bcast_t db0_stop;
    db0_stop.value = 0;
    db0_stop.fields.msg_id = MSGID_DB0_STOP_PSTATE_BROADCAST;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if (G_pgpe_pstate_record.quadsActive & (0x80 >> q))
        {
            for (c = q << 2; c < ((q + 1) << 2); c++)
            {
                if (ccsr.value & ((0xc0000000) >> c))
                {
                    p9_dd1_db_unicast_wr(GPE_SCOM_ADDR_CORE(CPPM_CMEDB0, c), db0_stop.value);
                }
            }
        }
    }

    PK_TRACE_INF("Sent STOP DB0");

    p9_pgpe_wait_cme_db_ack(G_pgpe_pstate_record.quadsActive);//Wait for ACKs from all CMEs

    G_pgpe_pstate_record.pstatesStatus = PSTATE_STOPPED;

    //Send STOP ACK to OCC
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd;
    ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS;
    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_processing = 0;
    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_ack = 0;
    ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd, IPC_RC_SUCCESS);

    PK_TRACE_DBG("Stop Done");
}


void p9_pgpe_pstate_updt_actual_quad(uint32_t q)
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
