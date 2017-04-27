/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_thread_actuate_pstates.c $ */
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
#include "pk.h"
#include "p9_pgpe.h"
#include "p9_pgpe_header.h"
#include "p9_pgpe_pstate.h"
#include "ipc_api.h"
#include "ipc_async_cmd.h"
#include "p9_pgpe_gppb.h"
#include "pstate_pgpe_occ_api.h"
#include "ipc_messages.h"
#include "p9_dd1_doorbell_wr.h"
#include "avs_driver.h"


//#defines
#define PSTATE_START_OCC_FLAG 0
#define PSTATE_START_OCC_IPC  1

//Local Function Prototypes
void p9_pgpe_thread_actuate_start(uint32_t pstate_start_origin);
void p9_pgpe_thread_actuate_stop();
void p9_pgpe_thread_actuate_init_actual_quad();

//
//External Global Data
//
extern PgpePstateRecord G_pgpe_pstate_record;
extern ipc_async_cmd_t G_ipc_msg_pgpe_sgpe;
GPE_BUFFER(extern ipcmsg_p2s_ctrl_stop_updates_t G_sgpe_control_updt);
extern uint32_t G_pstate0_dpll_value;
extern GlobalPstateParmBlock* G_gppb;

//Payload data non-cacheable region for IPCs sent to SGPE
//
//Thread Actuate PStates
//
void p9_pgpe_thread_actuate_pstates(void* arg)
{
    PK_TRACE_DBG("ACT_TH: Started");
    uint32_t inRange, q  = 0;
    PkMachineContext  ctx;
    uint32_t restore_irq = 0;
    ocb_qcsr_t qcsr;
    qcsr.value = in32(OCB_QCSR);

    pk_semaphore_create(&(G_pgpe_pstate_record.sem_actuate), 0, 1);
    pk_semaphore_create(&(G_pgpe_pstate_record.sem_sgpe_wait), 0, 1);

    PK_TRACE_DBG("ACT_TH: Inited");

    //Initialize Shared SRAM to a known state
    p9_pgpe_thread_actuate_init_actual_quad();


    //Upon PGPE Boot, if OCC_FLAGS[PGPE_PSTATE_PROTOCOL_ACTIVATE] is set, then we start Pstart here, and not wait
    //for an IPC to come from OCC
    ocb_occflg_t occFlag;
    occFlag.value = in32(OCB_OCCFLG);

    if (occFlag.value & BIT32(PGPE_PSTATE_PROTOCOL_ACTIVATE))
    {
        for (q = 0; q < MAX_QUADS; q++)
        {
            G_pgpe_pstate_record.psClipMax[q] = G_gppb->operating_points[POWERSAVE].pstate;
            G_pgpe_pstate_record.psClipMin[q] = G_gppb->operating_points[ULTRA].pstate;
        }

        p9_pgpe_thread_actuate_start(PSTATE_START_OCC_FLAG);
    }

    // Set OCC Scratch2[PGPE_ACTIVE]
    uint32_t occScr2 = in32(OCB_OCCS2);
    occScr2 |= BIT32(PGPE_ACTIVE);
    PK_TRACE_INF("Setting PGPE_ACTIVE in OCC SCRATCH2 addr %X = %X", OCB_OCCS2, occScr2);
    out32(OCB_OCCS2, occScr2);

    //Thread Loop
    while(1)
    {
        //If already active, then skip waiting for an OCC Pstate Start IPC
        if (G_pgpe_pstate_record.pstatesStatus != PSTATE_ACTIVE)
        {
            PK_TRACE_DBG("ACT_TH: Pend");
            pk_semaphore_pend(&(G_pgpe_pstate_record.sem_actuate), PK_WAIT_FOREVER);
            wrteei(1);

            //Pstates Start. This call will unmask IPC and block on SGPE ACK
            p9_pgpe_thread_actuate_start(PSTATE_START_OCC_IPC);
        }

        //Loop while Pstate is enabled
        PK_TRACE_DBG("ACT_TH: Status=%d", G_pgpe_pstate_record.pstatesStatus);

        restore_irq = 0;

        while(G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE || G_pgpe_pstate_record.pstatesStatus == PSTATE_SUSPENDED)
        {
            if(G_pgpe_pstate_record.pstatesStatus != PSTATE_SUSPENDED)
            {
                //Actuate step(if needed)
                if(p9_pgpe_pstate_at_target() == 0)
                {
                    p9_pgpe_pstate_do_step();
                }

                //Check if CLIP_UPDT is pending and Pstates are clipped
                if ((G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack == 1) ||
                    (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack == 1) ||
                    (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack == 1))
                {
                    inRange = 1;

                    uint32_t minPS;

                    for (q = 0; q < MAX_QUADS; q++)
                    {
                        if((G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads & (0x80 >> q)) &&
                           (qcsr.fields.ex_config & (0xC00 >> (2 * q))))
                        {
                            minPS = G_pgpe_pstate_record.psClipMin[q];

                            if (G_pgpe_pstate_record.wofEnabled)
                            {
                                if ((G_pgpe_pstate_record.wofClip <= G_pgpe_pstate_record.psClipMax[q]) &&
                                    (minPS < G_pgpe_pstate_record.wofClip))
                                {
                                    minPS = G_pgpe_pstate_record.wofClip;
                                }
                            }

                            if (G_pgpe_pstate_record.quadPSCurr[q] > G_pgpe_pstate_record.psClipMax[q] ||
                                G_pgpe_pstate_record.quadPSCurr[q] <  minPS)
                            {
                                //            PK_TRACE_DBG("ACT_TH:!Clipped[%d) qPSCur: 0x%x", q, G_pgpe_pstate_record.quadPSCurr[q]);
                                inRange = 0;
                            }
                        }
                    }

                    //ACK any pending and unmask IPC interrupt
                    if (inRange == 1)
                    {
                        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack == 1)
                        {
                            ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd;
                            ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
                            args->msg_cb.rc = PGPE_RC_SUCCESS;
                            G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack = 0;
                            ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd, IPC_RC_SUCCESS);
                        }

                        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack == 1)
                        {
                            p9_pgpe_pstate_update_wof_state();
                            ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].cmd;
                            ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
                            args->msg_cb.rc = PGPE_RC_SUCCESS;
                            G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack = 0;
                            ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].cmd, IPC_RC_SUCCESS);
                        }

                        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack == 1)
                        {
                            p9_pgpe_pstate_update_wof_state();
                            ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].cmd;
                            ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
                            args->msg_cb.rc = PGPE_RC_SUCCESS;
                            G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack = 0;
                            ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].cmd, IPC_RC_SUCCESS);
                        }



                        restore_irq = 1;
                    }
                }

                //Check if IPC should be opened again
                if (restore_irq == 1)
                {
                    PK_TRACE_DBG("ACT_TH: IRQ Restore");
                    restore_irq = 0;
                    pk_irq_vec_restore(&ctx);
                }
            }
        } //while loop

        if (G_pgpe_pstate_record.pstatesStatus == PSTATE_STOPPED)
        {
            //Pstates Stop
            //If we entered SAFE_MODE already, then do STOP protocol
            //This call will unmask IPC and block on SGPE ACK
            p9_pgpe_thread_actuate_stop();
        }
        else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING
                 || G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
        {
            //Actuate to PSAFE Pstate
            while (p9_pgpe_pstate_at_target() == 0)
            {
                p9_pgpe_pstate_do_step();
            }

            if (G_pgpe_pstate_record.pstatesStatus == PSTATE_PM_SUSPEND_PENDING)
            {
                p9_pgpe_pstate_send_suspend_stop(); //Notify SGPE}
            }
            else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_SAFE_MODE)
            {
                uint32_t occScr2 = in32(OCB_OCCS2);
                occScr2 |= BIT32(PGPE_SAFE_MODE_ACTIVE);
                out32(OCB_OCCS2, occScr2);
            }
        }
    }//Thread loop
}

//
//p9_pgpe_thread_actuate_start()
//
void p9_pgpe_thread_actuate_start(uint32_t pstate_start_origin)
{
    PK_TRACE_DBG("ACT_TH: Start Enter");
    ocb_ccsr_t ccsr;
    ccsr.value = in32(OCB_CCSR);
    ocb_qcsr_t qcsr;
    qcsr.value = in32(OCB_QCSR);
    uint8_t quadPstates[MAX_QUADS];
    uint32_t lowestDpll, syncPstate;
    qppm_dpll_stat_t dpll;
    PkMachineContext  ctx;
    uint32_t active_conf_cores = 0;
    uint32_t q;

    G_pgpe_pstate_record.pstatesStatus = PSTATE_START_PENDING;

    //1. Send 'Control Stop Updates' IPC to SGPE
#if SGPE_IPC_ENABLED == 1
    uint32_t rc;
    G_sgpe_control_updt.fields.msg_num = MSGID_PGPE_SGPE_CONTROL_STOP_UPDATES;
    G_sgpe_control_updt.fields.return_code = 0x0;
    G_sgpe_control_updt.fields.action = CTRL_STOP_UPDT_ENABLE_QUAD;
    G_ipc_msg_pgpe_sgpe.cmd_data = &G_sgpe_control_updt;
    ipc_init_msg(&G_ipc_msg_pgpe_sgpe.cmd,
                 IPC_MSGID_PGPE_SGPE_CONTROL_STOP_UPDATES,
                 p9_pgpe_pstate_ipc_rsp_cb_sem_post,
                 (void*)&G_pgpe_pstate_record.sem_sgpe_wait);

    //send the command
    PK_TRACE_DBG("ACT_TH: CtrlStopUpdt Sent");
    rc = ipc_send_cmd(&G_ipc_msg_pgpe_sgpe.cmd);

    if(rc)
    {
        pk_halt();
    }

    //Wait for SGPE ACK with alive Quads
    pk_irq_vec_restore(&ctx);
    pk_semaphore_pend(&(G_pgpe_pstate_record.sem_sgpe_wait), PK_WAIT_FOREVER);

    PK_TRACE_DBG("ACT_TH: CtrlStopUpdt Resp");

    if (G_sgpe_control_updt.fields.return_code == SGPE_PGPE_IPC_RC_SUCCESS)
    {
        //Update Shared Memory Region
        PK_TRACE_DBG("ACT_TH: ctrl_updt=0x%08x%08x", G_sgpe_control_updt.value >> 32, G_sgpe_control_updt.value);
        G_pgpe_pstate_record.pQuadState0->fields.active_cores = (ccsr.value >> 16);
        G_pgpe_pstate_record.pQuadState1->fields.active_cores = ccsr.value & 0xFF00 ;
        G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads = G_sgpe_control_updt.fields.active_quads << 2;
        PK_TRACE_DBG("ACT_TH: core_pwr_st0=0x%x", (uint32_t)G_pgpe_pstate_record.pQuadState0->fields.active_cores);
        PK_TRACE_DBG("ACT_TH: core_pwr_st1=0x%x", (uint32_t)G_pgpe_pstate_record.pQuadState1->fields.active_cores);
        PK_TRACE_DBG("ACT_TH: req_active_quad=0x%x",
                     (uint32_t)G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads);
    }
    else
    {
        PK_TRACE_DBG("ACT_TH: SGPE Ctrl Stop rc=0x%x", (uint32_t)G_sgpe_control_updt.fields.return_code);
        pk_halt();
    }

#else
    G_pgpe_pstate_record.pQuadState0->fields.active_cores = (ccsr.value >> 16);
    G_pgpe_pstate_record.pQuadState1->fields.active_cores = (ccsr.value & 0xFF00);

    for (q = 0; q < MAX_QUADS; q++ )
    {
        if ((qcsr.fields.ex_config & (0x800 >> (2 * q))) ||
            (qcsr.fields.ex_config & (0x400 >> (2 * q))))
        {
            G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads |= (0x80 >> q) ;
        }
    }

#endif //_SGPE_IPC_ENABLED_

    PK_TRACE_DBG("ACT_TH: Shr Mem Updt");

    //2. Read DPLLs
    lowestDpll = 0xFFF;
    dpll.value = 0;
    PK_TRACE_INF("ACT_TH: DPLL0Value=0x%x", G_pstate0_dpll_value );

    for (q = 0; q < MAX_QUADS; q++)
    {
        if((G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads & (0x80 >> q)) &&
           (qcsr.fields.ex_config & (0xC00 >> 2 * q)))
        {
#if SIMICS_TUNING == 0
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_DPLL_STAT, q), dpll.value);
#else
            dpll.fields.freqout = (G_pstate0_dpll_value
                                   - G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][NOMINAL].pstate);
#endif

            if ((dpll.fields.freqout)  < lowestDpll )
            {
                lowestDpll = dpll.fields.freqout;
            }

            PK_TRACE_DBG("ACT_TH: Quad[%d]: DPLL=0x%x", q, (dpll.fields.freqout));
            active_conf_cores |= (0xF0000000 >> q * 4);
        }
    }

    //3. Determine Sync Pstate
    //
    //\TODO: Need Greg's Response
    //Why does HCode Spec says current frequency might not
    //correspond to frequency of any Pstate? As I understand,
    //DPLL encoding and frequency/pstate have same step size, so
    //they should correspond one to one
    //
    if (lowestDpll > G_pstate0_dpll_value)
    {
        syncPstate = G_pstate0_dpll_value;
    }
    else
    {
        syncPstate = G_pstate0_dpll_value - lowestDpll;
    }

    //Init Core PStates
    for (q = 0; q < MAX_QUADS; q++)
    {
        if((qcsr.fields.ex_config & (0xC00 >> 2 * q)))
        {
            quadPstates[q] = syncPstate;
        }
        else
        {
            quadPstates[q] = 0xFF;
        }
    }

    p9_pgpe_pstate_update(quadPstates);
    PK_TRACE_INF("ACT_TH: Sync Pstate=0x%x", syncPstate);
    PK_TRACE_INF("ACT_TH: LowDPLL:0x%x", lowestDpll);
    PK_TRACE_INF("ACT_TH: GlblPsTgt:0x%x", G_pgpe_pstate_record.globalPSTarget);

    //4. Determine PMCR Owner
    //We save it off so that CMEs that are currently in STOP11
    //can be told upon STOP11 Exit
    if (pstate_start_origin == PSTATE_START_OCC_IPC)
    {
        PK_TRACE_DBG("ACT_TH: g_oimr_override:0x%llx", g_oimr_override);
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START].cmd;
        ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;

        if (args->pmcr_owner == PMCR_OWNER_HOST)
        {
            PK_TRACE_DBG("ACT_TH: OWNER_HOST");
            G_pgpe_pstate_record.pmcrOwner = PMCR_OWNER_HOST;
            g_oimr_override &= ~(BIT64(46));
            out32(OCB_OIMR1_CLR, BIT32(14)); //Enable PCB_INTR_TYPE1
        }
        else if (args->pmcr_owner == PMCR_OWNER_OCC)
        {
            PK_TRACE_DBG("ACT_TH: OWNER_OCC");
            G_pgpe_pstate_record.pmcrOwner = PMCR_OWNER_OCC;
            g_oimr_override |= BIT64(46);
            out32(OCB_OIMR1_OR, BIT32(14)); //Disable PCB_INTR_TYPE1
        }
        else if (args->pmcr_owner == PMCR_OWNER_CHAR)
        {
            PK_TRACE_DBG("ACT_TH: OWNER_CHAR");
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
        PK_TRACE_DBG("ACT_TH: OWNER_CHAR");
        G_pgpe_pstate_record.pmcrOwner = PMCR_OWNER_CHAR;
        g_oimr_override &= ~(BIT64(46));
        out32(OCB_OIMR1_CLR, BIT32(14)); //Enable PCB_INTR_TYPE1
    }

    //4. Set External VRM and Send DB0 to every active CME
    //\TODO: Need Greg's Response
    //Why does spec says to read external VDD. Is there
    //any other reason besides PGPE storing it
    external_voltage_control_init(&G_pgpe_pstate_record.eVidCurr);
    PK_TRACE_INF("ACT_TH: eVidCurr=%umV", G_pgpe_pstate_record.eVidCurr);
#if SIMICS_TUNING == 1
    G_pgpe_pstate_record.eVidCurr = p9_pgpe_gppb_intp_vdd_from_ps(G_pgpe_pstate_record.globalPSTarget,
                                    VPD_PT_SET_BIASED_SYSP, VPD_SLOPES_BIASED);
#endif
    G_pgpe_pstate_record.eVidNext = p9_pgpe_gppb_intp_vdd_from_ps(G_pgpe_pstate_record.globalPSTarget,
                                    VPD_PT_SET_BIASED_SYSP, VPD_SLOPES_BIASED);
    PK_TRACE_INF("ACT_TH: eVidNext=%umV", G_pgpe_pstate_record.eVidNext);

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
        p9_dd1_db_multicast_wr(PCB_MUTLICAST_GRP1 | CPPM_CMEDB0, db0.value, active_conf_cores);
        PK_TRACE_DBG("ACT_TH: Send DB0");
        p9_pgpe_wait_cme_db_ack(MSGID_DB0_START_PSTATE_BROADCAST, active_conf_cores);//Wait for ACKs from all QuadManagers
        PK_TRACE_DBG("ACT_TH: DB0 ACK");
        p9_pgpe_pstate_updt_ext_volt(G_pgpe_pstate_record.eVidNext);
    }
    else
    {
        p9_pgpe_pstate_updt_ext_volt(G_pgpe_pstate_record.eVidNext);
        p9_dd1_db_multicast_wr(PCB_MUTLICAST_GRP1 | CPPM_CMEDB0, db0.value, active_conf_cores);
        PK_TRACE_DBG("ACT_TH: Send DB0");
        p9_pgpe_wait_cme_db_ack(MSGID_DB0_START_PSTATE_BROADCAST, active_conf_cores);//Wait for ACKs from all QuadManagers
        PK_TRACE_DBG("ACT_TH: DB0 ACK");
    }

    G_pgpe_pstate_record.globalPSCurr = G_pgpe_pstate_record.globalPSTarget;
    PK_TRACE_INF("ACT_TH: GlbPSCurr:0x%x", G_pgpe_pstate_record.globalPSCurr );

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


    //7. Enable PStates
    G_pgpe_pstate_record.pstatesStatus = PSTATE_ACTIVE;
    PK_TRACE_DBG("ACT_TH: PSTATE_ACTIVE");

    //8. Send Pstate Start ACK to OCC
    if (pstate_start_origin == PSTATE_START_OCC_IPC)
    {
        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START].cmd;
        ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START].cmd, IPC_RC_SUCCESS);

        if ((G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing == 1) ||
            (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_processing == 1))
        {
            PK_TRACE_DBG("ACT_TH: Post PROC_TH");
            pk_semaphore_post(&G_pgpe_pstate_record.sem_process_req);
        }
        else
        {
            PK_TRACE_DBG("ACT_TH: Restoring IRQs");
            pk_irq_vec_restore(&ctx);
        }
    }

    PK_TRACE_DBG("ACT_TH: Start Exit");
}

//
//p9_pgpe_thread_actuate_stop()
//
void p9_pgpe_thread_actuate_stop()
{
    PK_TRACE_DBG("ACT_TH: Stop Enter");
    PK_TRACE_DBG("ACT_TH: GlbPSCurr:0x%x", G_pgpe_pstate_record.globalPSCurr );
    PK_TRACE_DBG("ACT_TH: GlblPsTgt:0x%x", G_pgpe_pstate_record.globalPSTarget);
    uint32_t q;
    PkMachineContext  ctx;
    uint32_t active_conf_cores = 0;
    ocb_qcsr_t qcsr;
    qcsr.value = in32(OCB_QCSR);

    //Determine active and configured cores
    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads & (0x80 >> q))
        {
            if (qcsr.fields.ex_config & (0x800 >> 2 * q))
            {
                active_conf_cores |= (0xC0000000 >> q * 4);
            }

            if (qcsr.fields.ex_config & (0x400 >> 2 * q))
            {
                active_conf_cores |= (0x30000000 >> q * 4);
            }
        }
    }

    pgpe_db0_stop_ps_bcast_t db0_stop;
    db0_stop.value = 0;
    db0_stop.fields.msg_id = MSGID_DB0_STOP_PSTATE_BROADCAST;
    p9_dd1_db_multicast_wr(PCB_MUTLICAST_GRP1 | CPPM_CMEDB0, db0_stop.value, active_conf_cores);

    //Wait for ACKs from all CMEs
    p9_pgpe_wait_cme_db_ack(MSGID_DB0_STOP_PSTATE_BROADCAST, active_conf_cores);

#if SGPE_IPC_ENABLED == 1
    uint32_t rc;
    //Send "Disable Core & Quad Stop Updates" IPC to SGPE
    G_sgpe_control_updt.fields.return_code = 0x0;
    G_sgpe_control_updt.fields.action = CTRL_STOP_UPDT_DISABLE_CORE_QUAD;
    G_ipc_msg_pgpe_sgpe.cmd_data = &G_sgpe_control_updt;
    ipc_init_msg(&G_ipc_msg_pgpe_sgpe.cmd,
                 IPC_MSGID_PGPE_SGPE_CONTROL_STOP_UPDATES,
                 p9_pgpe_pstate_ipc_rsp_cb_sem_post,
                 (void*)&G_pgpe_pstate_record.sem_sgpe_wait);

    //send the command
    PK_TRACE_DBG("ACT_TH: CtrlStopUpdt Sent");
    rc = ipc_send_cmd(&G_ipc_msg_pgpe_sgpe.cmd);

    if(rc)
    {
        pk_halt();
    }

    //Wait for SGPE ACK with alive Quads
    pk_irq_vec_restore(&ctx);
    pk_semaphore_pend(&(G_pgpe_pstate_record.sem_sgpe_wait), PK_WAIT_FOREVER);

    PK_TRACE_DBG("ACT_TH: CtrlStopUpdt Rcvd");

    if (G_sgpe_control_updt.fields.return_code != SGPE_PGPE_IPC_RC_SUCCESS)
    {
        pk_halt();
    }

#endif// _SGPE_IPC_ENABLED_

    //Send STOP ACK to OCC
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_STOP].cmd;
    ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS;
    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_STOP].pending_ack = 0;
    ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_STOP].cmd, IPC_RC_SUCCESS);

    pk_irq_vec_restore(&ctx);
    PK_TRACE_DBG("ACT_TH: Stop Exit");
}

//
//p9_pgpe_thread_actuate_do_step
//
//void p9_pgpe_thread_actuate_do_step()
//{
//}

void p9_pgpe_thread_actuate_init_actual_quad()
{
    G_pgpe_pstate_record.pQuadState0->fields.quad0_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.quad1_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.quad2_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.quad3_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState0->fields.active_cores = 0;

    G_pgpe_pstate_record.pQuadState1->fields.quad4_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState1->fields.quad5_pstate = 0xff;
    G_pgpe_pstate_record.pQuadState1->fields.active_cores = 0x0;
    G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads = 0x0;
}
