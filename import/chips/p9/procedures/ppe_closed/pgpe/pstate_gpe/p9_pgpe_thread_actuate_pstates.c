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

#if PK_TRACE_ACT_TH_ENABLE_
    #define PK_TRACE_ACT_TH(...) PKTRACE(__VA_ARGS__)
#else
    #define PK_TRACE_ACT_TH(...)
#endif

//Constants, #defines
#define CCSR_CORE_CONFIG_MASK    0x80000000

//Local Function Prototypes
void p9_pgpe_thread_actuate_start();
void p9_pgpe_thread_actuate_stop();
void p9_pgpe_wait_cme_db_ack(uint8_t msg_id, uint32_t activeCores);
void p9_pgpe_thread_actuate_updt_ext_volt(uint32_t tgtEVid);
void p9_pgpe_thread_actuate_freq_updt(uint32_t activeCores);
void p9_pgpe_thread_actuate_do_step();
void p9_pgpe_thread_actuate_init_actual_quad();

//
//External Global Data
//
extern PgpePstateRecord G_pgpe_pstate_record;
extern uint32_t G_pstatesStatus;
extern uint8_t G_wofEnabled;                   //wof enable/disable
extern uint8_t G_quadPSTarget[MAX_QUADS];      //target Pstate per quad
extern volatile uint8_t G_globalPSTarget;               //target global Pstate
extern uint8_t G_quadPSCurr[MAX_QUADS];      //target Pstate per quad
extern volatile uint8_t G_globalPSCurr;               //target global Pstate
extern uint8_t G_quadPSNext[MAX_QUADS];      //target Pstate per quad
extern uint8_t G_globalPSNext;
extern uint32_t G_eVidCurr, G_eVidNext;
extern GlobalPstateParmBlock* G_gppb;
extern uint8_t G_psClipMax[MAX_QUADS],
       G_psClipMin[MAX_QUADS];         //pmin and pmax clips
extern uint8_t G_pmcrOwner;
extern ipc_req_t G_ipc_pend_tbl[MAX_IPC_PEND_TBL_ENTRIES];
extern uint8_t G_pstate0_dpll_value;
extern uint32_t G_ext_vrm_inc_rate_mult_usperus;
extern uint32_t G_ext_vrm_dec_rate_mult_usperus;
extern VpdOperatingPoint G_operating_points[NUM_VPD_PTS_SET][VPD_PV_POINTS];
extern quad_state0_t* G_quadState0;
extern quad_state1_t* G_quadState1;
extern requested_active_quads_t* G_reqActQuads;
extern ipc_async_cmd_t G_ipc_msg_pgpe_sgpe;
GPE_BUFFER(extern ipcmsg_p2s_ctrl_stop_updates_t G_sgpe_control_updt);

//Payload data non-cacheable region for IPCs sent to SGPE
//
//Thread Actuate PStates
//
void p9_pgpe_thread_actuate_pstates(void* arg)
{
    PK_TRACE_ACT_TH("ACT_TH: Started");
    uint32_t inRange, q  = 0;
    PkMachineContext  ctx;
    uint32_t restore_irq = 0;
    ocb_qcsr_t qcsr;
    qcsr.value = in32(OCB_QCSR);

    pk_semaphore_create(&(G_pgpe_pstate_record.sem_actuate), 0, 1);
    pk_semaphore_create(&(G_pgpe_pstate_record.sem_sgpe_wait), 0, 1);

    PK_TRACE_ACT_TH("ACT_TH: Inited");

    //Initialize Shared SRAM to a known state
    p9_pgpe_thread_actuate_init_actual_quad();

    // Set OCC Scratch2[PGPE_ACTIVE]
    uint32_t occScr2 = in32(OCB_OCCS2);
    occScr2 |= BIT32(PGPE_ACTIVE);
#if PGPE_UNIT_TEST
    occScr2 |= BIT32(30);
#endif
    PK_TRACE_INF("Setting PGPE_ACTIVE in OCC SCRATCH2 addr %X = %X", OCB_OCCS2, occScr2);
    out32(OCB_OCCS2, occScr2);

    //Thread Loop
    while(1)
    {
        PK_TRACE_ACT_TH("ACT_TH: Pend");
        pk_semaphore_pend(&(G_pgpe_pstate_record.sem_actuate), PK_WAIT_FOREVER);
        wrteei(1);

        //Pstates Start. This call will unmask IPC and block on SGPE ACK
        p9_pgpe_thread_actuate_start();

        //Loop while Pstate is enabled
        PK_TRACE_ACT_TH("ACT_TH: Status=%d", G_pstatesStatus);

        restore_irq = 0;

        while(G_pstatesStatus == PSTATE_ENABLE || G_pstatesStatus == PSTATE_SUSPENDED)
        {
            if(G_pstatesStatus != PSTATE_SUSPENDED)
            {
                //Actuate step(if needed)
                if( G_globalPSCurr != G_globalPSTarget ||
                    G_quadPSCurr[0] ^ G_quadPSTarget[0] ||
                    G_quadPSCurr[1] ^ G_quadPSTarget[1] ||
                    G_quadPSCurr[2] ^ G_quadPSTarget[2] ||
                    G_quadPSCurr[3] ^ G_quadPSTarget[3] ||
                    G_quadPSCurr[4] ^ G_quadPSTarget[4] ||
                    G_quadPSCurr[5] ^ G_quadPSTarget[5] )
                {
                    //We don't want actuate_step to interrupted by any external interrupt.
                    //However, we still want FIT Timer to be active, so we mask of all interrupts
                    //in the OIMR through UIH(by setting UIH priority lvl = 0)
                    pk_critical_section_enter(&ctx);
                    pk_irq_save_and_set_mask(0);
                    pk_critical_section_exit(&ctx);

                    //Do one actuate step
                    PK_TRACE_ACT_TH("ACT_TH: PSTgt: 0x%x PSCurr: 0x%x", G_globalPSTarget, G_globalPSCurr);
                    p9_pgpe_thread_actuate_do_step();


                    //Now, PGPE is done with actuate step, let's
                    //restore the interrupts in OIMR through UIH
                    pk_irq_vec_restore(&ctx);
                }

                //Check if CLIP_UPDT is pending and Pstates are clipped
                if (G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT].pending_ack == 1)
                {
                    inRange = 1;

                    for (q = 0; q < MAX_QUADS; q++)
                    {
                        if((G_reqActQuads->fields.requested_active_quads & (0x80 >> q)) &&
                           (qcsr.fields.ex_config & (0xC00 >> (2 * q))))
                        {
                            if (G_quadPSCurr[q] > G_psClipMax[q] ||
                                G_quadPSCurr[q] <  G_psClipMin[q])
                            {
                                PK_TRACE_ACT_TH("ACT_TH:!Clipped[%d) qPSCur: 0x%x", q, G_quadPSCurr[q]);
                                inRange = 0;
                            }
                        }
                    }

                    //ACK any pending and unmask IPC interrupt
                    if (inRange == 1)
                    {
                        ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT].cmd;
                        ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;
                        args->msg_cb.rc = PGPE_RC_SUCCESS;
                        G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT].pending_ack = 0;
                        ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_CLIP_UPDT].cmd, IPC_RC_SUCCESS);
                        restore_irq = 1;
                    }
                }


                //Check if IPC should be opened again
                if (restore_irq == 1)
                {
                    PK_TRACE_ACT_TH("ACT_TH: IRQ Restore");
                    restore_irq = 0;
                    pk_irq_vec_restore(&ctx);
                }
            }
        } //while loop

        //Pstates Stop
        //This call will unmask IPC and block on SGPE ACK
        p9_pgpe_thread_actuate_stop();
    }//Thread loop
}

//
//p9_pgpe_thread_actuate_start()
//
void p9_pgpe_thread_actuate_start()
{
    PK_TRACE_ACT_TH("ACT_TH: Start Enter");
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

    G_pstatesStatus = PSTATE_START_PENDING;

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
    PK_TRACE_ACT_TH("ACT_TH: CtrlStopUpdt Sent");
    rc = ipc_send_cmd(&G_ipc_msg_pgpe_sgpe.cmd);

    if(rc)
    {
        pk_halt();
    }

    //Wait for SGPE ACK with alive Quads
    pk_irq_vec_restore(&ctx);
    pk_semaphore_pend(&(G_pgpe_pstate_record.sem_sgpe_wait), PK_WAIT_FOREVER);

    PK_TRACE_ACT_TH("ACT_TH: CtrlStopUpdt Resp");

    if (G_sgpe_control_updt.fields.return_code == SGPE_PGPE_IPC_RC_SUCCESS)
    {
        //Update Shared Memory Region
        G_quadState0->fields.active_cores = (ccsr.value >> 16);
        G_quadState1->fields.active_cores = ccsr.value & 0xFF00 ;
        G_reqActQuads->fields.requested_active_quads = G_sgpe_control_updt.fields.active_quads << 2;
        PK_TRACE_ACT_TH("ACT_TH: core_pwr_st0=0x%x", (uint32_t)G_quadState0->fields.active_cores);
        PK_TRACE_ACT_TH("ACT_TH: core_pwr_st1=0x%x", (uint32_t)G_quadState1->fields.active_cores);
        PK_TRACE_ACT_TH("ACT_TH: req_active_quad=0x%x", (uint32_t)G_reqActQuads->fields.requested_active_quads);
    }
    else
    {
        pk_halt();
    }

#else
    G_quadState0->fields.active_cores = (ccsr.value >> 16);
    G_quadState1->fields.active_cores = (ccsr.value & 0xFF00);

    for (q = 0; q < MAX_QUADS; q++ )
    {
        if ((qcsr.fields.ex_config & (0x800 >> (2 * q))) ||
            (qcsr.fields.ex_config & (0x400 >> (2 * q))))
        {
            G_reqActQuads->fields.requested_active_quads |= (0x80 >> q) ;
        }
    }

#endif //_SGPE_IPC_ENABLED_

    PK_TRACE_ACT_TH("ACT_TH: Shr Mem Updt");

    //2. Read DPLLs
    lowestDpll = 0xFFF;
    dpll.value = 0;
    PK_TRACE_INF("ACT_TH: DPLL0Value=0x%x", G_pstate0_dpll_value );

    for (q = 0; q < MAX_QUADS; q++)
    {
        if((G_reqActQuads->fields.requested_active_quads & (0x80 >> q)) &&
           (qcsr.fields.ex_config & (0xC00 >> 2 * q)))
        {
#if SIMICS_TUNING == 0
            GPE_GETSCOM(GPE_SCOM_ADDR_QUAD(QPPM_DPLL_STAT, q), dpll.value);
#else
            dpll.fields.freqout = (G_pstate0_dpll_value
                                   - G_operating_points[VPD_PT_SET_BIASED_SYSP][NOMINAL].pstate);
#endif

            if ((dpll.fields.freqout)  < lowestDpll )
            {
                lowestDpll = dpll.fields.freqout;
            }

            PK_TRACE_ACT_TH("ACT_TH: Quad[%d]: DPLL=0x%x", q, (dpll.fields.freqout));
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
    PK_TRACE_INF("ACT_TH: GlblPsTgt:0x%x", G_globalPSTarget);

    //4. Determine PMCR Owner
    //We save it off so that CMEs that are currently in STOP11
    //can be told upon STOP11 Exit
    PK_TRACE_ACT_TH("ACT_TH: g_oimr_override:0x%llx", g_oimr_override);
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_ipc_pend_tbl[IPC_PEND_PSTATE_START].cmd;
    ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;

    if (args->pmcr_owner == PMCR_OWNER_HOST)
    {
        PK_TRACE_ACT_TH("ACT_TH: OWNER_HOST");
        G_pmcrOwner = PMCR_OWNER_HOST;
        g_oimr_override &= ~(BIT64(46));
        out32(OCB_OIMR1_CLR, BIT32(14)); //Enable PCB_INTR_TYPE1
    }
    else if (args->pmcr_owner == PMCR_OWNER_OCC)
    {
        PK_TRACE_ACT_TH("ACT_TH: OWNER_OCC");
        G_pmcrOwner = PMCR_OWNER_OCC;
        g_oimr_override |= BIT64(46);
        out32(OCB_OIMR1_OR, BIT32(14)); //Disable PCB_INTR_TYPE1
    }
    else if (args->pmcr_owner == PMCR_OWNER_CHAR)
    {
        PK_TRACE_ACT_TH("ACT_TH: OWNER_CHAR");
        G_pmcrOwner = PMCR_OWNER_CHAR;
        g_oimr_override &= ~(BIT64(46));
        out32(OCB_OIMR1_CLR, BIT32(14)); //Enable PCB_INTR_TYPE1
    }
    else
    {
        pk_halt();
    }

//    PK_TRACE_ACT_TH("ACT_TH: g_oimr_override:0x%llx", g_oimr_override);
    //Set LMCR for each CME
#if !SIMICS_TUNING

    //8 Byte write to LMCR register in SIMICS results in error
    //So, adding a build flag for SIMICS this out. Instead, in SIMICS set this through command line
    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_reqActQuads->fields.requested_active_quads & (0x80 >> q))
        {
            //CME0 within this quad
            if (qcsr.fields.ex_config & (0x800 >> 2 * q))
            {
                if (G_pmcrOwner == PMCR_OWNER_HOST)
                {
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_CLR, q, 0), BIT64(0));
                }
                else if (G_pmcrOwner == PMCR_OWNER_OCC)
                {
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_OR, q, 0), BIT64(0));
                }
            }

            //CME1 within this quad
            if (qcsr.fields.ex_config & (0x400 >> 2 * q))
            {
                if (G_pmcrOwner == PMCR_OWNER_HOST)
                {
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_CLR, q, 1), BIT64(0));
                }
                else if (G_pmcrOwner == PMCR_OWNER_OCC)
                {
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_LMCR_OR, q, 1), BIT64(0));
                }
            }
        }
    }

#endif

    //4. Set External VRM and Send DB0 to every active CME
    //\TODO: Need Greg's Response
    //Why does spec says to read external VDD. Is there
    //any other reason besides PGPE storing it
    external_voltage_control_init(&G_eVidCurr);
    PK_TRACE_INF("ACT_TH: eVidCurr=%umV", G_eVidCurr);
#if SIMICS_TUNING == 1
    G_eVidCurr = p9_pgpe_gppb_intp_vdd_from_ps(G_globalPSTarget, VPD_PT_SET_BIASED_SYSP, VPD_SLOPES_BIASED);
#endif
    G_eVidNext = p9_pgpe_gppb_intp_vdd_from_ps(G_globalPSTarget, VPD_PT_SET_BIASED_SYSP, VPD_SLOPES_BIASED);
    PK_TRACE_INF("ACT_TH: eVidNext=%umV", G_eVidNext);

    pgpe_db0_start_ps_bcast_t db0;
    db0.value = 0;
    db0.fields.msg_id = MSGID_DB0_START_PSTATE_BROADCAST;
    db0.fields.global_actual = G_globalPSTarget;
    db0.fields.quad0_ps = G_quadPSTarget[0];
    db0.fields.quad1_ps = G_quadPSTarget[1];
    db0.fields.quad2_ps = G_quadPSTarget[2];
    db0.fields.quad3_ps = G_quadPSTarget[3];
    db0.fields.quad4_ps = G_quadPSTarget[4];
    db0.fields.quad5_ps = G_quadPSTarget[5];

    if (G_eVidCurr > G_eVidNext)
    {
        p9_dd1_db_multicast_wr(PCB_MUTLICAST_GRP1 | CPPM_CMEDB0, db0.value, active_conf_cores);
        PK_TRACE_ACT_TH("ACT_TH: Send DB0");
        p9_pgpe_wait_cme_db_ack(MSGID_DB0_START_PSTATE_BROADCAST, active_conf_cores);//Wait for ACKs from all QuadManagers
        PK_TRACE_ACT_TH("ACT_TH: DB0 ACK");
        p9_pgpe_thread_actuate_updt_ext_volt(G_eVidNext);
    }
    else
    {
        p9_pgpe_thread_actuate_updt_ext_volt(G_eVidNext);
        p9_dd1_db_multicast_wr(PCB_MUTLICAST_GRP1 | CPPM_CMEDB0, db0.value, active_conf_cores);
        PK_TRACE_ACT_TH("ACT_TH: Send DB0");
        p9_pgpe_wait_cme_db_ack(MSGID_DB0_START_PSTATE_BROADCAST, active_conf_cores);//Wait for ACKs from all QuadManagers
        PK_TRACE_ACT_TH("ACT_TH: DB0 ACK");
    }

    G_globalPSCurr = G_globalPSTarget;
    PK_TRACE_INF("ACT_TH: GlbPSCurr:0x%x", G_globalPSCurr );

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_quadPSCurr[q] = G_quadPSTarget[q];
    }

    //Update Shared SRAM
    G_quadState0->fields.quad0_pstate = G_quadPSCurr[0];
    G_quadState0->fields.quad1_pstate = G_quadPSCurr[1];
    G_quadState0->fields.quad2_pstate = G_quadPSCurr[2];
    G_quadState0->fields.quad3_pstate = G_quadPSCurr[3];
    G_quadState1->fields.quad4_pstate = G_quadPSCurr[4];
    G_quadState1->fields.quad5_pstate = G_quadPSCurr[5];


    //7. Enable PStates
    G_pstatesStatus = PSTATE_ENABLE;
    PK_TRACE_ACT_TH("ACT_TH: PSTATE_ENABLE");

    //8. Send Pstate Start ACK to OCC
    args->msg_cb.rc = PGPE_RC_SUCCESS;
    G_ipc_pend_tbl[IPC_PEND_PSTATE_START].pending_ack = 0;
    ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_PSTATE_START].cmd, IPC_RC_SUCCESS);

    if ((G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing == 1) ||
        (G_ipc_pend_tbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_processing == 1))
    {
        PK_TRACE_ACT_TH("ACT_TH: Post PROC_TH");
        pk_semaphore_post(&G_pgpe_pstate_record.sem_process_req);
    }
    else
    {
        PK_TRACE_ACT_TH("ACT_TH: Restoring IRQs");
        pk_irq_vec_restore(&ctx);
    }

    PK_TRACE_ACT_TH("ACT_TH: Start Exit");
}

//
//p9_pgpe_thread_actuate_stop()
//
void p9_pgpe_thread_actuate_stop()
{
    PK_TRACE_ACT_TH("ACT_TH: Stop Enter");
    PK_TRACE_ACT_TH("ACT_TH: GlbPSCurr:0x%x", G_globalPSCurr );
    PK_TRACE_ACT_TH("ACT_TH: GlblPsTgt:0x%x", G_globalPSTarget);
    uint32_t q;
    PkMachineContext  ctx;
    uint32_t active_conf_cores = 0;
    ocb_qcsr_t qcsr;
    qcsr.value = in32(OCB_QCSR);

    //Determine active and configured cores
    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_reqActQuads->fields.requested_active_quads & (0x80 >> q))
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
    PK_TRACE_ACT_TH("ACT_TH: CtrlStopUpdt Sent");
    rc = ipc_send_cmd(&G_ipc_msg_pgpe_sgpe.cmd);

    if(rc)
    {
        pk_halt();
    }

    //Wait for SGPE ACK with alive Quads
    pk_irq_vec_restore(&ctx);
    pk_semaphore_pend(&(G_pgpe_pstate_record.sem_sgpe_wait), PK_WAIT_FOREVER);

    PK_TRACE_ACT_TH("ACT_TH: CtrlStopUpdt Rcvd");

    if (G_sgpe_control_updt.fields.return_code != SGPE_PGPE_IPC_RC_SUCCESS)
    {
        pk_halt();
    }

#endif// _SGPE_IPC_ENABLED_

    //Send STOP ACK to OCC
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_ipc_pend_tbl[IPC_PEND_PSTATE_STOP].cmd;
    ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;
    args->msg_cb.rc = PGPE_RC_SUCCESS;
    G_ipc_pend_tbl[IPC_PEND_PSTATE_STOP].pending_ack = 0;
    ipc_send_rsp(G_ipc_pend_tbl[IPC_PEND_PSTATE_STOP].cmd, IPC_RC_SUCCESS);

    // PK_TRACE_ACT_TH("ACT_TH: GlbPSCurr:0x%x", G_globalPSCurr );
    // PK_TRACE_ACT_TH("ACT_TH: GlblPsTgt:0x%x", G_globalPSTarget);
    pk_irq_vec_restore(&ctx);
    PK_TRACE_ACT_TH("ACT_TH: Stop Exit");
}

//
//p9_pgpe_thread_actuate_do_step
//
void p9_pgpe_thread_actuate_do_step()
{
    PK_TRACE_ACT_TH("ACT_TH: Step Entry");
    PK_TRACE_ACT_TH("ACT_TH: PSTgt: 0x%x PSCurr: 0x%x", G_globalPSTarget, G_globalPSCurr);
    PK_TRACE_ACT_TH("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[0], G_quadPSCurr[0]);
    PK_TRACE_ACT_TH("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[1], G_quadPSCurr[1]);
    PK_TRACE_ACT_TH("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[2], G_quadPSCurr[2]);
    PK_TRACE_ACT_TH("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[3], G_quadPSCurr[3]);
    PK_TRACE_ACT_TH("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[4], G_quadPSCurr[4]);
    PK_TRACE_ACT_TH("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[5], G_quadPSCurr[5]);
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

        PK_TRACE_ACT_TH("ACT_TH: act_c=0x%x", active_conf_cores);
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

        p9_pgpe_thread_actuate_freq_updt(active_conf_cores);
        p9_pgpe_thread_actuate_updt_ext_volt(targetEVid);
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

        p9_pgpe_thread_actuate_updt_ext_volt(targetEVid);
        p9_pgpe_thread_actuate_freq_updt(active_conf_cores);
    }
    else
    {
        for (q = 0; q < MAX_QUADS; q++)
        {
            G_quadPSNext[q] = G_quadPSTarget[q];
        }

        p9_pgpe_thread_actuate_freq_updt(active_conf_cores);
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

    PK_TRACE_ACT_TH("ACT_TH: PSTgt: 0x%x PSCurr: 0x%x", G_globalPSTarget, G_globalPSCurr);
    PK_TRACE_ACT_TH("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[0], G_quadPSCurr[0]);
    PK_TRACE_ACT_TH("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[1], G_quadPSCurr[1]);
    PK_TRACE_ACT_TH("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[2], G_quadPSCurr[2]);
    PK_TRACE_ACT_TH("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[3], G_quadPSCurr[3]);
    PK_TRACE_ACT_TH("ACT_TH: QTgt: 0x%x QCurr: 0x%x", G_quadPSTarget[4], G_quadPSCurr[4]);
    PK_TRACE_ACT_TH("ACT_TH: Step Exit");
}

//
//p9_pgpe_thread_actuate_updt_ext_volt
//
//Update External VRM to G_eVidNext
void p9_pgpe_thread_actuate_updt_ext_volt(uint32_t tgtEVid)
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
void p9_pgpe_thread_actuate_freq_updt(uint32_t activeCores)
{
    PK_TRACE_ACT_TH("ACT_TH: FreqUpdt Enter");
    PK_TRACE_ACT_TH("ACT_TH: act_cores=0x%x", activeCores);
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
    PK_TRACE_ACT_TH("ACT_TH: MCAST DB0");
    p9_pgpe_wait_cme_db_ack(MSGID_DB0_GLOBAL_ACTUAL_BROADCAST, activeCores);//Wait for ACKs from all CMEs
    PK_TRACE_ACT_TH("ACT_TH: Freq Updt Exit");
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
                    /*#if SIMICS_TUNING == 1
                                        uint32_t opit4prCurr;
                                        opit4prCurr = in32(OCB_OPIT4PRA);
                                        PK_TRACE_ACT_TH("ACT_TH: temp=0x%x", opit4prCurr);
                                        out32(OCB_OPIT4PRA, (~(CCSR_CORE_CONFIG_MASK >> c)) & opit4prCurr);
                    #endif*/
                    out32(OCB_OPIT4PRA_CLR, CCSR_CORE_CONFIG_MASK >> c); //Clear out pending bits
                    PK_TRACE_ACT_TH("ACT_TH: Ack C%02u", c);
                }
                else
                {
                    PK_TRACE_ACT_TH("ACT_TH: BadAck C%02u", c);
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


void p9_pgpe_thread_actuate_init_actual_quad()
{
    G_quadState0->fields.quad0_pstate = 0xff;
    G_quadState0->fields.quad1_pstate = 0xff;
    G_quadState0->fields.quad2_pstate = 0xff;
    G_quadState0->fields.quad3_pstate = 0xff;
    G_quadState0->fields.active_cores = 0;

    G_quadState1->fields.quad4_pstate = 0xff;
    G_quadState1->fields.quad5_pstate = 0xff;
    G_quadState1->fields.active_cores = 0x0;
    G_reqActQuads->fields.requested_active_quads = 0x0;
}
