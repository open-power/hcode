/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_thread_process_requests.c $ */
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
#include "gpehw_common.h"
#include "p9_pgpe_pstate.h"
#include "pstate_pgpe_occ_api.h"
#include "wof_sgpe_pgpe_api.h"
#include "ipc_api.h"
#include "ipc_async_cmd.h"
#include "p9_pgpe_header.h"
#include "p9_pgpe_optrace.h"
#include "p9_pgpe_gppb.h"

//
//External Global Data
//
extern TraceData_t G_pgpe_optrace_data;
extern PgpePstateRecord G_pgpe_pstate_record;
extern PgpeHeader_t* G_pgpe_header_data;
extern GlobalPstateParmBlock* G_gppb;

//
//Local Function Prototypes
//
inline void p9_pgpe_process_sgpe_updt_active_cores() __attribute__((always_inline));
inline void p9_pgpe_process_sgpe_updt_active_quads() __attribute__((always_inline));
inline void p9_pgpe_process_start_stop() __attribute__((always_inline));
inline void p9_pgpe_process_clip_updt() __attribute__((always_inline));
inline void p9_pgpe_process_wof_ctrl() __attribute__((always_inline));
inline void p9_pgpe_process_wof_vfrt() __attribute__((always_inline));
inline void p9_pgpe_process_set_pmcr_req() __attribute__((always_inline));
inline void p9_pgpe_process_registration() __attribute__((always_inline));
inline void p9_pgpe_process_ack_sgpe_ctrl_stop_updt() __attribute__((always_inline));
inline void p9_pgpe_process_ack_sgpe_suspend_stop() __attribute__((always_inline));

//
//Process Request Thread
//
//This thread processes IPC request from SGPE and OCC, registration msg(type4),
//PMCR requests(type1), and IPC acks from SGPE. When any of interrupts associated
//with these require happen, the interrupt handler takes a note of the request, and
//posts semaphore.
//
void p9_pgpe_thread_process_requests(void* arg)
{
    PK_TRACE_DBG("PTH:Started");

    uint32_t restore_irq;
    PkMachineContext  ctx;

    //IPC Init
    p9_pgpe_ipc_init();

#if EPM_P9_TUNING
    asm volatile ("tw 0, 31, 0");
#endif

    // Set OCC Scratch2[PGPE_ACTIVE], so that external world knows that PGPE is UP
    // 00 - WOF Phase1(Vratio Fixed,Fratio Fixed)
    // 01 - WOF Phase2(Vratio Active Cores, Fratio Fixed)
    // 10 - WOF Phase3(Vratio Full, Fratio Fixed)
    // 11 - WOF Phase4(Vratio Full, Fratio Full)
    // Currently, only Phase 1 and 2 are supported.
    if ((G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_ENABLE_VRATIO) ||
        (G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_VRATIO_MODIFIER) ||
        (G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_ENABLE_FRATIO))
    {
        out32(G_OCB_OCCFLG_OR, BIT32(29));
    }

    PK_TRACE_DBG("PTH:Inited");

    while(1)
    {
        //pend on semaphore
        PK_TRACE_INF("PTH:Pend");
        pk_semaphore_pend(&(G_pgpe_pstate_record.sem_process_req), PK_WAIT_FOREVER);
        wrteei(1);

        //Enter Sub-Critical Section. Timer Interrupts are enabled
        pk_irq_sub_critical_enter(&ctx);
        G_pgpe_pstate_record.semProcessPosted = 0;

        restore_irq  = 1;

        PK_TRACE_DBG("PTH: Process Task");

        //Go through IPC Pending Table

        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_processing)
        {
            //During processo_wof_ctrl, it's pending_ack bit is cleared
            p9_pgpe_process_wof_ctrl();
        }

        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing == 1)
        {
            p9_pgpe_process_sgpe_updt_active_cores();

            //If we have pending_ack for active cores, then don't open up IPC yet. It will be opened
            //up after actuation
            if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_processing == 1)
        {
            //During process_spge_updt_active_quads, it's pending_ack bit may be cleared
            p9_pgpe_process_sgpe_updt_active_quads();
        }

        if ((G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_processing == 1) &&
            (G_pgpe_pstate_record.pendingActiveQuadUpdtDone != 1))
        {
            //During process_start_stop, it's pending_ack bit is cleared
            p9_pgpe_process_start_stop();
        }

        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_processing == 1)
        {
            p9_pgpe_process_clip_updt();

            //If we have pending_ack for clip_updt cores, then don't open up IPC yet. It will be opened
            //up after actuation
            if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_processing == 1)
        {
            p9_pgpe_process_wof_vfrt();

            //If we have pending_ack for wof_vfrt, then don't open up IPC yet. It will be opened
            //up after actuation
            if(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack == 1)
            {
                restore_irq = 0;
            }
        }

        if (G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].pending_processing == 1)
        {
            //During process_start_stop, it's pending_ack bit is cleared
            p9_pgpe_process_set_pmcr_req();
        }

        if (G_pgpe_pstate_record.ipcPendTbl[IPC_ACK_CTRL_STOP_UPDT].pending_processing)
        {
            p9_pgpe_process_ack_sgpe_ctrl_stop_updt();
        }

        if (G_pgpe_pstate_record.ipcPendTbl[IPC_ACK_SUSPEND_STOP].pending_processing)
        {
            p9_pgpe_process_ack_sgpe_suspend_stop();
        }

        if (G_pgpe_pstate_record.pendQuadsRegisterProcess != 0)
        {
            p9_pgpe_process_registration();
        }


        //Restore IPC IRQ if no pending acks. Otherwise, actuate thread will
        //eventually restore IPC interrupt. Also, make sure that IPC IRQ did post semphore. We
        //can have the case where type4 posted for processing the registration message. In that case,
        //no need to call pk_irq_vec_restore as type4 handler calls it. Clear semprocessSrc, and exit
        //sub-critical section
        if ((G_pgpe_pstate_record.semProcessSrc & SEM_PROCESS_SRC_IPI2_IRQ) && restore_irq == 1)
        {
            PK_TRACE_DBG("PTH: IRQ Restore");
            G_pgpe_pstate_record.semProcessSrc = 0;
            pk_irq_sub_critical_exit(&ctx);
            pk_irq_vec_restore(&ctx);
        }
        else
        {
            G_pgpe_pstate_record.semProcessSrc = 0;
            pk_irq_sub_critical_exit(&ctx);
        }
    }
}

//
//  p9_pgpe_process_sgpe_updt_active_cores
//
//  Process Update Active Cores IPC sent from SGPE
//
//  ACTION:
//      1) Do nothing(error ack), if WOF is disabled
//          and active core update action is set to error.
//      2) Update active_cores list and ack right away, if WOF is disabled
//          and active core update action is set to ack only.
//      3) Update active cores list, calculate wof clips, and new target pstate,
//          if WOF is enabled. If core is entrying stop, then ack is sent right away.
//          Otherwise, ack is sent after acutation
//  ACK:
//      1) IPC_SGPE_PGPE_RC_SUCCESS - If WOF is disabled and active core update action i
//          is ACTIVE_CORE_UPDATE_ACTION_ERROR. Or, WOF is enabled
//      2) SGPE_PGPE_RC_WOF_DISABLED - If WOF is  disabled and active core update action i
//          is ACTIVE_CORE_UPDATE_ACTION_ERROR
//
inline void p9_pgpe_process_sgpe_updt_active_cores()
{
    PK_TRACE_DBG("PTH: Core Updt Entry");
    uint32_t c, ack_now = 0, bad_rc = 0;

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd;
    ipcmsg_s2p_update_active_cores_t* args = (ipcmsg_s2p_update_active_cores_t*)async_cmd->cmd_data;

    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_processing = 0;

    if(G_pgpe_pstate_record.wofStatus != WOF_ENABLED)
    {
        ack_now = 1;

        if (G_pgpe_pstate_record.activeCoreUpdtAction == ACTIVE_CORE_UPDATE_ACTION_ERROR)
        {
            G_pgpe_optrace_data.word[0] = PGPE_OP_CORES_ACTIVE_IN_WOF_DISABLED;
            p9_pgpe_optrace(UNEXPECTED_ERROR);
            bad_rc = 1;
            PK_TRACE_DBG("PTH: Core Updt(WOF_Disabled) Error");
        }
        else
        {
            if (args->fields.update_type == UPDATE_ACTIVE_CORES_TYPE_ENTRY)
            {
                G_pgpe_pstate_record.activeCores &= ~(args->fields.active_cores << 8);
            }
            else
            {
                G_pgpe_pstate_record.activeCores |= (args->fields.active_cores << 8);
            }

            args->fields.return_active_cores = G_pgpe_pstate_record.activeCores >> 8;

            PK_TRACE_INF("PTH: Core Updt(WOF_Disabled) Ack Only numActiveCores=0x%x,activeCores=0x%x",
                         G_pgpe_pstate_record.numActiveCores, G_pgpe_pstate_record.activeCores);

        }
    }
    else
    {
        //If WOF_ENABLED=1, and pstatesStatus == ACITVE, then process active cores update
        //Otherwise, pstatesStatus == SAFE_MODE_PENDING, and requests will be ACKed
        //after actuating to Psafe
        if(G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
        {
            //Store separately as shared SRAM location is split
            PK_TRACE_INF("PTH: Core Updt type=%u(0/1=EN/EX) reqCores=0x%x", args->fields.update_type, args->fields.active_cores);

            //If ENTRY type then send ACK to SGPE immediately
            //Otherwise, wait to ACK until WOF Clip has been applied(from actuate_pstate thread)
            if (args->fields.update_type == UPDATE_ACTIVE_CORES_TYPE_ENTRY)
            {
                G_pgpe_pstate_record.activeCores &= ~(args->fields.active_cores << 8);
                args->fields.return_active_cores = G_pgpe_pstate_record.activeCores >> 8;
                ack_now = 1;
            }
            else
            {
                G_pgpe_pstate_record.activeCores |= (args->fields.active_cores << 8);
            }

            //Update Shared Memory Region
            G_pgpe_pstate_record.pQuadState0->fields.active_cores = (G_pgpe_pstate_record.activeCores >> 16);
            G_pgpe_pstate_record.pQuadState1->fields.active_cores = (G_pgpe_pstate_record.activeCores & 0x0000FF00);

            PK_TRACE_DBG("PTH: quadPS2=0x%08x%08x,activeCores=0x%x", G_pgpe_pstate_record.pQuadState0->value >> 32,
                         G_pgpe_pstate_record.pQuadState0->value, G_pgpe_pstate_record.pQuadState0->fields.active_cores );
            PK_TRACE_DBG("PTH: quadPS1=0x%08x%08x,activeCores=0x%x", G_pgpe_pstate_record.pQuadState1->value >> 32,
                         G_pgpe_pstate_record.pQuadState1->value, G_pgpe_pstate_record.pQuadState1->fields.active_cores);

            //Calculate number of active cores
            G_pgpe_pstate_record.numActiveCores = 0;

            for (c = 0; c < MAX_CORES; c++)
            {
                if (G_pgpe_pstate_record.activeCores  & CORE_MASK(c))
                {
                    G_pgpe_pstate_record.numActiveCores++;
                }
            }

            PK_TRACE_INF("PTH: numActiveCores=0x%x,activeCores=0x%x", G_pgpe_pstate_record.numActiveCores,
                         G_pgpe_pstate_record.activeCores);

            //OP_TRACE(Do before auction and wof calculation)
            G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24)  |
                                          ((args->fields.update_type == UPDATE_ACTIVE_CORES_TYPE_ENTRY) ? 0x2000000 : 0x1000000) |
                                          (G_pgpe_pstate_record.activeCores >> 8);
            p9_pgpe_optrace(PRC_CORES_ACTV);

            //Do auction and wof calculation
            p9_pgpe_pstate_do_auction();
            p9_pgpe_pstate_calc_wof();
        }
    }

    if (ack_now == 1)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_CORES_UPDT].cmd, IPC_RC_SUCCESS);
        PK_TRACE_DBG("PTH: Core Entry ACK back to SGPE");
        p9_pgpe_optrace(ACK_CORES_ACTV);

        //We set the return code after sending the ipc response. This is because
        //SGPE is polling on the return code and will move on as soon as it is set.
        //To prevent any race condition, we set the return code afterwards.
        if (bad_rc == 1)
        {
            args->fields.return_code = SGPE_PGPE_RC_WOF_DISABLED;
            PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_SGPE_IPC_ACK_BAD_RC);
        }
        else
        {
            args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
        }
    }

    PK_TRACE_DBG("PTH: Core Updt Exit");
}

//
//  p9_pgpe_process_sgpe_updt_active_quads
//
//  Process Update Active Quads IPC sent from SGPE
//
//  ACTION: Update Active Quads IPC is processed according to it's type. There are
//          4 types: Quad Entry Notify, Quad Entry Done, Quad Exit Notify, and
//          Quad Entry Notify.
//
//  ACK RETURN CODE:
//      1) IPC_SGPE_PGPE_RC_SUCCESS - If WOF is enabled, then Quad Exit Notify processing is
//          delayed until a WOF VFRT is received from OCC. Otherwise, an ACK is sent
//          always at the end of this function.
//
inline void p9_pgpe_process_sgpe_updt_active_quads()
{
    PK_TRACE_DBG("QX: Quad Updt Start");
    uint32_t ack_now = 1;
    uint32_t SS;
    uint32_t quads_requested;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd;
    ipcmsg_s2p_update_active_quads_t* args = (ipcmsg_s2p_update_active_quads_t*)async_cmd->cmd_data;
    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_processing = 0;


    if(args->fields.update_type == UPDATE_ACTIVE_QUADS_TYPE_ENTRY) //entry
    {
        SS = (args->fields.entry_type == UPDATE_ACTIVE_QUADS_ENTRY_TYPE_NOTIFY) ? 0x2 : 0x3;
    }
    else //exit
    {
        SS = 0x1;
    }

    //ENTRY
    quads_requested = (args->fields.requested_quads << 2);

    if (args->fields.update_type == UPDATE_ACTIVE_QUADS_TYPE_ENTRY)
    {
        if (args->fields.entry_type == UPDATE_ACTIVE_QUADS_ENTRY_TYPE_NOTIFY)
        {
            p9_pgpe_pstate_process_quad_entry_notify(quads_requested);
        }
        else
        {
            p9_pgpe_pstate_process_quad_entry_done(quads_requested);
        }

        args->fields.return_active_quads =
            ((G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads & (~(quads_requested))) >> 2);
        args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
    }
    //EXIT
    else
    {
        //Update Shared Memory Region
        G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads |= (quads_requested);

        if (args->fields.exit_type == UPDATE_ACTIVE_QUADS_EXIT_TYPE_NOTIFY)
        {

            //WOF Enabled
            //If WOF_ENABLED=1, and pstatesStatus == ACITVE, then request for WOF_VFRT
            //Otherwise, we don't as SAFE_MODE or PM_COMPLEX_SUSPEND or STOP is pending
            if(G_pgpe_pstate_record.wofStatus == WOF_ENABLED && G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
            {
                PK_TRACE_INF("PTH: OCCLFG[30] set");
                out32(G_OCB_OCCFLG_OR, BIT32(REQUESTED_ACTIVE_QUAD_UPDATE));//Set OCCFLG[REQUESTED_ACTIVE_QUAD_UPDATE]
                ack_now = 0;
            }
            else
            {
                p9_pgpe_pstate_process_quad_exit_notify(quads_requested);
                args->fields.return_active_quads = G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads >>
                                                   2; //activeQuads isn't updated until registration, so we OR with requested quads.
                args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
            }
        }
        else
        {
            p9_pgpe_pstate_process_quad_exit_done();
            args->fields.return_active_quads = G_pgpe_pstate_record.pReqActQuads->fields.requested_active_quads >>
                                               2; //activeQuads isn't updated until registration, so we OR with requested quads.
            args->fields.return_code = IPC_SGPE_PGPE_RC_SUCCESS;
        }

    }

    PK_TRACE_INF("QU: type=0x%x(EN=0,EX=1), req=0x%x,active=0x%x,ret=0x%x", args->fields.update_type,
                 args->fields.requested_quads, G_pgpe_pstate_record.activeQuads, args->fields.return_active_quads);
    G_pgpe_optrace_data.word[0] = (args->fields.requested_quads << 26) |
                                  (SS << 24) |
                                  (G_pgpe_pstate_record.activeCores >> 8);
    p9_pgpe_optrace(PRC_QUAD_ACTV);

    if (ack_now == 1)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SGPE_ACTIVE_QUADS_UPDT].cmd, IPC_RC_SUCCESS);
        p9_pgpe_optrace(ACK_QUAD_ACTV);
    }

    PK_TRACE_DBG("QX: Quad Updt End");
}


//
// p9_pgpe_process_start_stop
//
// Process PSTATE_START_STOP IPC from OCC
//
// ACTION:
//      1) Start Pstates and Set Onwer - If ACTION is START and PstatesStatus is INIT or STOPPED
//      2) Change PMCR Owner - If ACTION is START and PstatesStatus is ACTIVE
//      3) Stop Pstates - If ACTION is STOP and PstatesStatus is ACTIVE
//      4) Do nothing - If ACTION is STOP and PstatesStatus is STOPPED or INIT
//
// ACK RETURN CODE:
//      1) PGPE_RC_SUCCESS
//          a) If PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE is set in PGPE_FLAGS.
//          b) If PstateStatus is NOT one of these PSTATE_PM_SUSPEND_PENDING or
//              PSTATE_PM_SUSPENDED or PSTATE_SAFE_MODE_PENDING or PSTATE_SAFE_MODE.
//      2) PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE
//          a) If PstateStatus is one of these PSTATE_PM_SUSPEND_PENDING or
//              PSTATE_PM_SUSPENDED or PSTATE_SAFE_MODE_PENDING or PSTATE_SAFE_MODE.
//
inline void p9_pgpe_process_start_stop()
{
    PK_TRACE_DBG("PTH: Start/Stop Entry");
    uint32_t ack_now = 1, bad_rc = 0;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd;
    ipcmsg_start_stop_t* args = (ipcmsg_start_stop_t*)async_cmd->cmd_data;

    if(G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE)
    {
        PK_TRACE_DBG("START_STOP: Imm");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        G_pgpe_optrace_data.word[0] = (START_STOP_IPC << 24) |
                                      (G_pgpe_pstate_record.psComputed.fields.glb << 16) |
                                      (in32(G_OCB_QCSR) >> 16);
        p9_pgpe_optrace(PRC_START_STOP);

    }
    else if(G_pgpe_pstate_record.pstatesStatus & (PSTATE_PM_SUSPEND_PENDING | PSTATE_PM_SUSPENDED |
            PSTATE_SAFE_MODE_PENDING | PSTATE_SAFE_MODE))
    {
        PK_TRACE_DBG("START_STOP: PM_SUSP/Safe");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;

        if(G_pgpe_pstate_record.pstatesStatus & (PSTATE_SAFE_MODE_PENDING | PSTATE_SAFE_MODE))
        {

            if (args->action == PGPE_ACTION_PSTATE_START)
            {
                G_pgpe_optrace_data.word[0] = PGPE_OP_PSTATE_START_IN_SAFE_MODE;
            }
            else
            {
                G_pgpe_optrace_data.word[0] = PGPE_OP_PSTATE_STOP_IN_SAFE_MODE;
            }
        }
        else
        {
            if (args->action == PGPE_ACTION_PSTATE_START)
            {
                G_pgpe_optrace_data.word[0] = PGPE_OP_PSTATE_START_IN_PM_SUSP;
            }
            else
            {
                G_pgpe_optrace_data.word[0] = PGPE_OP_PSTATE_STOP_IN_PM_SUSP;
            }
        }

        p9_pgpe_optrace(UNEXPECTED_ERROR);
        bad_rc  = 1;

    }
    else
    {
        //If Start
        if (args->action == PGPE_ACTION_PSTATE_START)
        {
            if ((args->pmcr_owner == PMCR_OWNER_HOST) ||
                (args->pmcr_owner == PMCR_OWNER_OCC) ||
                (args->pmcr_owner == PMCR_OWNER_CHAR))
            {
                if(G_pgpe_pstate_record.pstatesStatus & (PSTATE_INIT |  PSTATE_STOPPED))
                {
                    p9_pgpe_pstate_start(PSTATE_START_OCC_IPC);
                    args->msg_cb.rc = PGPE_RC_SUCCESS;
                    pk_semaphore_post(&G_pgpe_pstate_record.sem_actuate);
                }
                else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
                {
                    p9_pgpe_pstate_set_pmcr_owner(args->pmcr_owner);
                    args->msg_cb.rc = PGPE_RC_SUCCESS;
                }

                G_pgpe_optrace_data.word[0] = (args->pmcr_owner << 25 ) |
                                              (1 << 24) |
                                              (G_pgpe_pstate_record.psCurr.fields.glb << 16) |
                                              (in32(G_OCB_QCSR) >> 16);
                p9_pgpe_optrace(PRC_START_STOP);
            }
            else
            {
                args->msg_cb.rc = PGPE_RC_INVALID_PMCR_OWNER;
                p9_pgpe_optrace(UNEXPECTED_ERROR);
                bad_rc  = 1;
            }
        }
        else
        {
            if(G_pgpe_pstate_record.pstatesStatus & (PSTATE_INIT |  PSTATE_STOPPED))
            {
                PK_TRACE_DBG("START_STOP: Already Stopped");
                args->msg_cb.rc = PGPE_RC_SUCCESS;
                G_pgpe_optrace_data.word[0] = PGPE_OP_PSTATE_STOP_IN_PSTATE_STOPPED;
                p9_pgpe_optrace(UNEXPECTED_ERROR);
                bad_rc = 1;
            }
            else if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
            {
                p9_pgpe_pstate_stop();
                args->msg_cb.rc = PGPE_RC_SUCCESS;
                G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.psCurr.fields.glb << 16) |
                                              (in32(G_OCB_QCSR) >> 16);
                p9_pgpe_optrace(PRC_START_STOP);
            }
        }
    }

    if (ack_now == 1)
    {
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].cmd, IPC_RC_SUCCESS);
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_ack = 0;
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_PSTATE_START_STOP].pending_processing = 0;
        p9_pgpe_optrace(ACK_START_STOP);

        if (bad_rc == 1)
        {
            PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_IPC_ACK_BAD_RC);
        }
    }

    PK_TRACE_DBG("PTH: Start/Stop End");
}


//
//p9_pgpe_process_clip_updt
//
// Process CLIP_UPDATE IPC from OCC
//
// ACTION:
//      1) Ack back only - If PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE is set in PGPE_FLAGS.
//      2) Ack back with error - If PstateStatus is NOT one of these
//          PSTATE_PM_SUSPEND_PENDING or PSTATE_PM_SUSPENDED or PSTATE_SAFE_MODE_PENDING
//          or PSTATE_SAFE_MODE.
//      3) Update Clips and Calculate New Pstart Target - If PstateStatus is NOT
//          one of these PSTATE_PM_SUSPEND_PENDING or PSTATE_PM_SUSPENDED or
//          PSTATE_SAFE_MODE_PENDING or PSTATE_SAFE_MODE.
//
// ACK RETURN CODE:
//      1) PGPE_RC_SUCCESS
//          a) If PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE is set in PGPE_FLAGS.
//          b) If PstateStatus is NOT one of these PSTATE_PM_SUSPEND_PENDING or
//              PSTATE_PM_SUSPENDED or PSTATE_SAFE_MODE_PENDING or PSTATE_SAFE_MODE.
//              Ack is sent right away if Pstates aren't active. Or, after system
//              has been actuated within the bounds of the clips
//      2) PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE
//          a) If PstateStatus is one of these PSTATE_PM_SUSPEND_PENDING or
//              PSTATE_PM_SUSPENDED or PSTATE_SAFE_MODE_PENDING or PSTATE_SAFE_MODE.
//
inline void p9_pgpe_process_clip_updt()
{
    PK_TRACE_DBG("PTH: Clip Updt Entry");

    uint32_t q, ack_now = 1, bad_rc = 0;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd;
    ipcmsg_clip_update_t* args = (ipcmsg_clip_update_t*)async_cmd->cmd_data;

    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_processing = 0;

    if(G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE)
    {
        PK_TRACE_DBG("PTH: Clip Updt Imme");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.psClipMax[0] << 24) |
                                      (G_pgpe_pstate_record.psClipMax[1] << 16) |
                                      (G_pgpe_pstate_record.psClipMax[2] << 8)  |
                                      (G_pgpe_pstate_record.psClipMax[3]);
        G_pgpe_optrace_data.word[1] = (G_pgpe_pstate_record.psClipMax[4] << 24) |
                                      (G_pgpe_pstate_record.psClipMax[5] << 16) |
                                      (G_pgpe_pstate_record.psClipMin[0] << 8)  |
                                      (G_pgpe_pstate_record.psClipMin[1]);
        G_pgpe_optrace_data.word[2] = (G_pgpe_pstate_record.psClipMin[2] << 24) |
                                      (G_pgpe_pstate_record.psClipMin[3] << 16) |
                                      (G_pgpe_pstate_record.psClipMin[4] << 8)  |
                                      (G_pgpe_pstate_record.psClipMin[5]);
        p9_pgpe_optrace(PRC_CLIP_UPDT);
    }
    else if (G_pgpe_pstate_record.pstatesStatus & (PSTATE_PM_SUSPENDED |
             PSTATE_PM_SUSPEND_PENDING |
             PSTATE_SAFE_MODE_PENDING |
             PSTATE_SAFE_MODE))
    {
        PK_TRACE_DBG("PTH: Clip Updt PMSUSP/Safe");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;

        if(G_pgpe_pstate_record.pstatesStatus & (PSTATE_SAFE_MODE_PENDING |
                PSTATE_SAFE_MODE))
        {
            G_pgpe_optrace_data.word[0] = PGPE_OP_CLIP_UPDT_IN_SAFE_MODE;
        }
        else
        {
            G_pgpe_optrace_data.word[0] = PGPE_OP_CLIP_UPDT_IN_PM_SUSP;
        }

        p9_pgpe_optrace(UNEXPECTED_ERROR);
        bad_rc = 1;
    }
    else
    {
        //IPC from 405 treats clip_min as Pstate for min frequency(higher numbered)
        //and clip_max as Pstate for max frequency(lower numbered). However, PGPE
        //Hcode stores them with reverse interpretation.
        for (q = 0; q < MAX_QUADS; q++)
        {
            if (G_pgpe_pstate_record.psClipMax[q] != args->ps_val_clip_min[q])
            {
                G_pgpe_pstate_record.psClipMax[q] = args->ps_val_clip_min[q];
                G_pgpe_pstate_record.pendingPminClipBcast = 1;
            }

            //We can't have max freq/voltage to be below safePstate, so just halt PGPE
            if(args->ps_val_clip_max[q] > G_pgpe_pstate_record.safePstate)
            {
                PGPE_TRACE_AND_PANIC(PGPE_PMAX_RCV_GREATER_THAN_PSAFE);
            }

            if (G_pgpe_pstate_record.psClipMin[q] != args->ps_val_clip_max[q])
            {
                G_pgpe_pstate_record.psClipMin[q] = args->ps_val_clip_max[q];
                G_pgpe_pstate_record.pendingPmaxClipBcast = 1;
            }
        }


        G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.psClipMax[0] << 24) |
                                      (G_pgpe_pstate_record.psClipMax[1] << 16) |
                                      (G_pgpe_pstate_record.psClipMax[2] << 8)  |
                                      (G_pgpe_pstate_record.psClipMax[3]);
        G_pgpe_optrace_data.word[1] = (G_pgpe_pstate_record.psClipMax[4] << 24) |
                                      (G_pgpe_pstate_record.psClipMax[5] << 16) |
                                      (G_pgpe_pstate_record.psClipMin[0] << 8) |
                                      (G_pgpe_pstate_record.psClipMin[1]);
        G_pgpe_optrace_data.word[2] = (G_pgpe_pstate_record.psClipMin[2] << 24) |
                                      (G_pgpe_pstate_record.psClipMin[3] << 16) |
                                      (G_pgpe_pstate_record.psClipMin[4] << 8)  |
                                      (G_pgpe_pstate_record.psClipMin[5]);
        p9_pgpe_optrace(PRC_CLIP_UPDT);

        p9_pgpe_pstate_apply_clips(&G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT]);

        //If CLIP_UPDT before Pstate Start, then ack now. Otherwise, ACK
        //after actuation
        if (G_pgpe_pstate_record.pstatesStatus & (PSTATE_INIT |  PSTATE_STOPPED))
        {
            args->msg_cb.rc = PGPE_RC_SUCCESS;
        }
        else
        {
            ack_now = 0;
        }
    }


    //Clips ACKed in error cases or if Pstates are not active yet
    if (ack_now == 1)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_CLIP_UPDT].cmd, IPC_RC_SUCCESS);
        p9_pgpe_optrace(ACK_CLIP_UPDT);

        if (bad_rc == 1)
        {
            PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_IPC_ACK_BAD_RC);
        }
    }

    PK_TRACE_DBG("PTH: Clip Upd Exit");
}

//
//  p9_pgpe_process_wof_ctrl
//
//  Process WOF_CTRL IPC from OCC
//
//  ACTION:
//      1) Ack back only -
//          a) If PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE is set in PGPE_FLAGS.
//          b) If WOF_CTRL(Enable) when WOF is already enabled
//          c) If WOF_CTRL(Disable) when WOF is already disabled
//      2) Ack with error -
//          a) If PstatesStatus is one of these PSTATE_INIT, PSTATE_STOPPED,
//              PSTATE_PM_SUSPENDED, PSTATE_PM_SUSPEND_PENDING,
//              PSTATE_SAFE_MODE_PENDING, PSTATE_SAFE_MODE
//          b) If NULL VFRT pointer is sent
//      3) Enable WOF - If WOF_CTRL(Enable), WOF is disabled and PstatesStatus is ACTIVE
//      3) Disable WOF - If WOF_CTRL(Enable), WOF is enabled and PstatesStatus is ACTIVE
//
//  ACK RETURN CODE:
//      1) PGPE_RC_PSTATES_NOT_STARTED - If PstatesStatus is one of
//          these PSTATE_INIT or PSTATE_STOPPED.
//      2) PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE - If PstatesStatus is one of these
//          PSTATE_PM_SUSPENDED, PSTATE_PM_SUSPEND_PENDING,
//          PSTATE_SAFE_MODE_PENDING, PSTATE_SAFE_MODE
//      4) PGPE_RC_SUCCESS -
//          a) If PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE is set in PGPE_FLAGS.
//          b) If WOF_CTRL(Enable) when WOF is already enabled
//          c) If WOF_CTRL(Disable) when WOF is already disabled
//
inline void p9_pgpe_process_wof_ctrl()
{
    PK_TRACE_DBG("PTH: WOF Ctrl Enter");

    uint32_t ack_now = 1, bad_rc = 0;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].cmd;
    ipcmsg_wof_control_t* args = (ipcmsg_wof_control_t*)async_cmd->cmd_data;


    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_processing = 0;

    if((G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) ||
       (G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_WOF_IPC_IMMEDIATE_MODE))
    {
        PK_TRACE_DBG("PTH: WOF Ctrl Imme");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) |
                                      (args->action << 16) |
                                      (in32(G_OCB_QCSR) >> 16);
        p9_pgpe_optrace(PRC_WOF_CTRL);
    }
    else if (G_pgpe_pstate_record.pstatesStatus & ( PSTATE_PM_SUSPENDED | PSTATE_PM_SUSPEND_PENDING |
             PSTATE_SAFE_MODE_PENDING | PSTATE_SAFE_MODE))
    {
        PK_TRACE_DBG("PTH: WOF Ctrl PMSUSP/Safe");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;

        if(G_pgpe_pstate_record.pstatesStatus & (PSTATE_SAFE_MODE_PENDING | PSTATE_SAFE_MODE))
        {
            G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_CTRL_IN_SAFE_MODE;
        }
        else
        {
            G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_CTRL_IN_PM_SUSP;
        }

        p9_pgpe_optrace(UNEXPECTED_ERROR);
        bad_rc = 1;
    }
    else if(G_pgpe_pstate_record.pstatesStatus & (PSTATE_INIT | PSTATE_STOPPED))
    {
        PK_TRACE_DBG("PTH: WOF Ctrl PSStop/Init");
        args->msg_cb.rc = PGPE_RC_PSTATES_NOT_STARTED;
        G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_CTRL_IN_PSTATE_STOPPED;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
        bad_rc = 1;
    }
    else
    {

        //If WOF ON
        if (args->action == PGPE_ACTION_WOF_ON)
        {
            if(G_pgpe_pstate_record.wofStatus == WOF_DISABLED)
            {
                PK_TRACE_INF("PTH: WOF Ctrl=ON,WOF_Enabled=0");

                p9_pgpe_pstate_wof_ctrl(PGPE_ACTION_WOF_ON);
                ack_now = 0; //For WOF_ENABLE, we ACK after WOF_CLIP has been honored(actuate thread)

                G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) |
                                              (args->action << 16) |
                                              (in32(G_OCB_QCSR) >> 16);
                p9_pgpe_optrace(PRC_WOF_CTRL);
            }
            else
            {
                args->msg_cb.rc = PGPE_RC_SUCCESS;
                PK_TRACE_INF("PTH: WOF Ctrl=ON,WOF_Enabled=1");
                G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_CTRL_ENABLE_WHEN_ENABLED;
                p9_pgpe_optrace(UNEXPECTED_ERROR);
                bad_rc = 1;
            }
        }
        else if (args->action == PGPE_ACTION_WOF_OFF)
        {
            if(G_pgpe_pstate_record.wofStatus == WOF_ENABLED)
            {
                PK_TRACE_INF("PTH: WOF Ctrl=OFF,WOF_Enabled=1");

                //Disable WOF, and we ACK to OCC below
                p9_pgpe_pstate_wof_ctrl(PGPE_ACTION_WOF_OFF);

                G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) |
                                              (args->action << 16) |
                                              (in32(G_OCB_QCSR) >> 16);
                p9_pgpe_optrace(PRC_WOF_CTRL);
                args->msg_cb.rc = PGPE_RC_SUCCESS;
            }
            else
            {
                args->msg_cb.rc = PGPE_RC_SUCCESS;
                PK_TRACE_INF("PTH: WOF Ctrl=OFF,WOF_Enabled=0");
                G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_CTRL_DISABLE_WHEN_DISABLED;
                p9_pgpe_optrace(UNEXPECTED_ERROR);
                bad_rc = 1;
            }
        }
    }

    if (ack_now == 1)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_CTRL].cmd, IPC_RC_SUCCESS);
        p9_pgpe_optrace(ACK_WOF_CTRL);

        if (bad_rc == 1)
        {
            PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_IPC_ACK_BAD_RC);
        }
    }

    PK_TRACE_DBG("PTH: WOF Ctrl Exit");
}

//
//  p9_pgpe_process_wof_vfrt
//
//  ACTION:
//      1) Ack back only - If PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE is set in PGPE_FLAGS.
//      2) Ack with error -
//          a) If PstatesStatus is one of these PSTATE_INIT, PSTATE_STOPPED,
//              PSTATE_PM_SUSPENDED, PSTATE_PM_SUSPEND_PENDING,
//              PSTATE_SAFE_MODE_PENDING, PSTATE_SAFE_MODE
//          b) If NULL VFRT pointer is sent
//      3) Update VFRT pointer, and if wof is enabled then
//          calculate wof clips, and generate new targets. Ack is sent right away
//          if WOF is enabled. Otherwise, ack is sent after actuation
//
//  ACK RETURN CODE:
//      1) PGPE_RC_PSTATES_NOT_STARTED - If PstatesStatus is one of
//          these PSTATE_INIT or PSTATE_STOPPED.
//      2) PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE - If PstatesStatus is one of these
//          PSTATE_PM_SUSPENDED, PSTATE_PM_SUSPEND_PENDING,
//          PSTATE_SAFE_MODE_PENDING, PSTATE_SAFE_MODE
//      3) PGPE_RC_NULL_VFRT_POINTER - If NULL VFRT pointer is sent.
//      4) PGPE_RC_SUCCESS -
//          a) If Pstate Status is ACTIVE and VFRT pointer is not NULL.
//          b) If PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE is set in PGPE_FLAGS.
//
inline void p9_pgpe_process_wof_vfrt()
{
    PK_TRACE_DBG("PTH: WOF VFRT Enter");
    uint32_t ack_now = 1, bad_rc = 0;

    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].cmd;
    ipcmsg_wof_vfrt_t* args = (ipcmsg_wof_vfrt_t*)async_cmd->cmd_data;

    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_processing = 0;

    if((G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE) ||
       (G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_WOF_IPC_IMMEDIATE_MODE))
    {
        PK_TRACE_DBG("PTH: WOF VFRT Imme");
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        G_pgpe_optrace_data.word[0] = 0;
        G_pgpe_optrace_data.word[1] = 0;
        p9_pgpe_optrace(PRC_WOF_VFRT);
    }
    else if (G_pgpe_pstate_record.pstatesStatus & (PSTATE_PM_SUSPENDED | PSTATE_PM_SUSPEND_PENDING |
             PSTATE_SAFE_MODE_PENDING | PSTATE_SAFE_MODE))
    {
        PK_TRACE_DBG("PTH: WOF VFRT PMSUSP/Safe");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;

        if(G_pgpe_pstate_record.pstatesStatus & (PSTATE_SAFE_MODE_PENDING | PSTATE_SAFE_MODE))
        {
            G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_VFRT_IN_SAFE_MODE;
        }
        else
        {
            G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_VFRT_IN_PM_SUSP;
        }

        p9_pgpe_optrace(UNEXPECTED_ERROR);
        bad_rc = 1;
    }
    else if(G_pgpe_pstate_record.pstatesStatus & (PSTATE_STOPPED | PSTATE_INIT))
    {
        PK_TRACE_DBG("PTH: WOF VFRT PSStop/Init");
        args->msg_cb.rc = PGPE_RC_PSTATES_NOT_STARTED;
        G_pgpe_optrace_data.word[0] = PGPE_OP_WOF_VFRT_IN_PSTATE_STOPPED;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
        bad_rc = 1;
    }
    else
    {
        if(args->homer_vfrt_ptr == NULL)
        {
            PK_TRACE_ERR("PTH: NULL VFRT Ptr");
            bad_rc = 1;
            args->msg_cb.rc = PGPE_RC_NULL_VFRT_POINTER;
        }

        //Update VFRT pointer
        G_pgpe_pstate_record.pVFRT = args->homer_vfrt_ptr;
        PK_TRACE_INF("PTH: VFRT Table 0x%x", (uint32_t)G_pgpe_pstate_record.pVFRT);
        PK_TRACE_INF("Mgc=0x%x, ver=%d, vdnid=%x,VddQAId=%x", G_pgpe_pstate_record.pVFRT->vfrtHeader.magic_number,
                     G_pgpe_pstate_record.pVFRT->vfrtHeader.type_version,
                     G_pgpe_pstate_record.pVFRT->vfrtHeader.res_vdnId,
                     G_pgpe_pstate_record.pVFRT->vfrtHeader.VddId_QAId);
        G_pgpe_optrace_data.word[0] = ((G_pgpe_pstate_record.pVFRT->vfrtHeader.magic_number << 16) |
                                       G_pgpe_pstate_record.pVFRT->vfrtHeader.reserved);
        G_pgpe_optrace_data.word[1] = ((G_pgpe_pstate_record.pVFRT->vfrtHeader.type_version << 24) |
                                       (G_pgpe_pstate_record.pVFRT->vfrtHeader.res_vdnId    << 16) |
                                       (G_pgpe_pstate_record.pVFRT->vfrtHeader.VddId_QAId   << 8)  |
                                       G_pgpe_pstate_record.pVFRT->vfrtHeader.rsvd_QAId);
        p9_pgpe_optrace(PRC_WOF_VFRT);

        if(G_pgpe_pstate_record.wofStatus == WOF_ENABLED)
        {
            p9_pgpe_pstate_calc_wof();
            ack_now = 0;
        }
        else
        {
            args->msg_cb.rc = PGPE_RC_SUCCESS;
        }
    }

    if (ack_now == 1)
    {
        G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].pending_ack = 0;
        ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_WOF_VFRT].cmd, IPC_RC_SUCCESS);
        p9_pgpe_optrace(ACK_WOF_VFRT);

        if (bad_rc == 1)
        {
            PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_IPC_ACK_BAD_RC);
        }
    }

    PK_TRACE_DBG("PTH: WOF VFRT Exit");
}

//
//  p9_pgpe_process_set_pmcr_req
//
//  Process Set PMCR Request from OCC
//
//  ACTION:
//      1) Ack back only - If PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE is set in PGPE_FLAGS.
//      2) Ack with error -
//          a) If pmcrOwner is NOT OCC
//          b) If PstatesStatus is one of these PSTATE_INIT, PSTATE_STOPPED,
//              PSTATE_PM_SUSPENDED, PSTATE_PM_SUSPEND_PENDING,
//              PSTATE_SAFE_MODE_PENDING, PSTATE_SAFE_MODE
//     3) Update coresPSRequest, do auction, apply clip and generate new
//          targets, and ack back if If Pstate Status is ACTIVE and pmcrOwner is OCC
//          Also, ack is sent right away. The actuation is performed later.
//
//   ACK RETURN CODE:
//      1) PGPE_RC_OCC_NOT_PMCR_OWNER - If pmcrOwner is NOT OCC
//      2) PGPE_RC_PSTATES_NOT_STARTED - If PstatesStatus is one of
//          these PSTATE_INIT or PSTATE_STOPPED.
//      3) PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE - If PstatesStatus is one of these
//          PSTATE_PM_SUSPENDED, PSTATE_PM_SUSPEND_PENDING,
//          PSTATE_SAFE_MODE_PENDING, PSTATE_SAFE_MODE
//      4) PGPE_RC_SUCCESS -
//          a) If Pstate Status is ACTIVE and pmcrOwner is OCC
//          b) If PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE is set in PGPE_FLAGS.
//
inline void p9_pgpe_process_set_pmcr_req()
{
    PK_TRACE_INF("PTH: Set PMCR Enter");

    uint32_t q, c, bad_rc = 0;
    ipc_async_cmd_t* async_cmd = (ipc_async_cmd_t*)G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].cmd;
    ipcmsg_set_pmcr_t* args = (ipcmsg_set_pmcr_t*)async_cmd->cmd_data;

    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].pending_processing = 0;

    if(G_pgpe_header_data->g_pgpe_flags & PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE)
    {
        PK_TRACE_DBG("PTH: Set PMCR Imme");
        p9_pgpe_optrace(PRC_SET_PMCR);
        args->msg_cb.rc = PGPE_RC_SUCCESS;
        G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.psTarget.fields.quads[0] << 24) |
                                      (G_pgpe_pstate_record.psTarget.fields.quads[1] << 16) |
                                      (G_pgpe_pstate_record.psTarget.fields.quads[2] << 8) |
                                      G_pgpe_pstate_record.psTarget.fields.quads[3];
        G_pgpe_optrace_data.word[1] = (G_pgpe_pstate_record.psTarget.fields.quads[4] << 24) |
                                      (G_pgpe_pstate_record.psTarget.fields.quads[5] << 16) |
                                      G_pgpe_pstate_record.psTarget.fields.glb << 8;
        p9_pgpe_optrace(PRC_SET_PMCR);
    }
    else  if(G_pgpe_pstate_record.pmcrOwner != PMCR_OWNER_OCC)
    {
        PK_TRACE_DBG("PTH: !OCC_PMCR_OWNER");
        args->msg_cb.rc = PGPE_RC_OCC_NOT_PMCR_OWNER;
        G_pgpe_optrace_data.word[0] = PGPE_OP_SET_PMCR_AND_PMCR_OWNER_NOT_OCC;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
        bad_rc = 1;
    }
    else if (G_pgpe_pstate_record.pstatesStatus & (PSTATE_INIT | PSTATE_STOPPED))
    {
        PK_TRACE_DBG("PTH: Pstates !Started");
        args->msg_cb.rc = PGPE_RC_PSTATES_NOT_STARTED;
        G_pgpe_optrace_data.word[0] = PGPE_OP_SET_PMCR_IN_PSTATE_STOPPED;
        p9_pgpe_optrace(UNEXPECTED_ERROR);
        bad_rc = 1;
    }
    else if (G_pgpe_pstate_record.pstatesStatus & (PSTATE_PM_SUSPENDED | PSTATE_PM_SUSPEND_PENDING |
             PSTATE_SAFE_MODE_PENDING | PSTATE_SAFE_MODE))
    {
        PK_TRACE_DBG("PTH: Set PMCR in PM_Susp/Safe");
        args->msg_cb.rc = PGPE_RC_PM_COMPLEX_SUSPEND_SAFE_MODE;

        if(G_pgpe_pstate_record.pstatesStatus & (PSTATE_SAFE_MODE_PENDING | PSTATE_SAFE_MODE))
        {
            G_pgpe_optrace_data.word[0] = PGPE_OP_SET_PMCR_IN_SAFE_MODE;
        }
        else
        {
            G_pgpe_optrace_data.word[0] = PGPE_OP_SET_PMCR_IN_PM_SUSP;
        }

        p9_pgpe_optrace(UNEXPECTED_ERROR);
        bad_rc = 1;
    }
    else
    {
        PK_TRACE_INF("PTH: Upd coresPSReq");

        for (q = 0; q < MAX_QUADS; q++)
        {
            for (c = (q * CORES_PER_QUAD); c < (q + 1)*CORES_PER_QUAD; c++)
            {
                G_pgpe_pstate_record.coresPSRequest[c] = (args->pmcr[q] >> 48) & 0x00FF;
            }

            PK_TRACE_INF("PTH: coresPSReq: 0x%x", G_pgpe_pstate_record.coresPSRequest[q * CORES_PER_QUAD]);
        }

        //PGPE Trace(PRC_SET_PMCR)
        G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.coresPSRequest[0] << 24) |
                                      (G_pgpe_pstate_record.coresPSRequest[4] << 16) |
                                      (G_pgpe_pstate_record.coresPSRequest[8] << 8) |
                                      G_pgpe_pstate_record.coresPSRequest[12];
        G_pgpe_optrace_data.word[1] = (G_pgpe_pstate_record.coresPSRequest[16] << 24) |
                                      (G_pgpe_pstate_record.coresPSRequest[20] << 16) |
                                      G_pgpe_pstate_record.psCurr.fields.glb << 8;
        p9_pgpe_optrace(PRC_SET_PMCR);

        p9_pgpe_pstate_do_auction();
        p9_pgpe_pstate_apply_clips();

        args->msg_cb.rc = PGPE_RC_SUCCESS; //Return Code
    }

    //Ack back to OCC
    G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].pending_ack = 0;
    ipc_send_rsp(G_pgpe_pstate_record.ipcPendTbl[IPC_PEND_SET_PMCR_REQ].cmd, IPC_RC_SUCCESS);

    if (bad_rc == 1)
    {
        PGPE_OPTIONAL_TRACE_AND_PANIC(PGPE_OCC_IPC_ACK_BAD_RC);
    }

    PK_TRACE_INF("PTH: Set PMCR Exit");
}

//
//  p9_pgpe_process_registration
//
//  Process Registration message from CME
//
inline void p9_pgpe_process_registration()
{
    PK_TRACE_DBG("PTH: Register Enter");

    ocb_ccsr_t ccsr;
    ccsr.value = in32(OCB_CCSR);
    ocb_qcsr_t qcsr;
    qcsr.value = in32(G_OCB_QCSR);
    uint32_t  q, c, oldActiveDB, oldActiveQuads, unicastCoresVector = 0, quadsRegisterProcess;
    uint32_t quadAckExpect = 0;
    uint64_t value;
    pgpe_db0_start_ps_bcast_t   db0_glb_bcast;
    pgpe_db0_clip_bcast_t       db0_clip_bcast;
    db0_parms_t db0p;
    pgpe_db0_pstate_register_done_t     db0_pstate_register_done;

    //Save it for global bcast sync in case GlobalPSTarget is higher in
    //after doing auctions with just registered quads
    oldActiveDB = G_pgpe_pstate_record.activeDB;
    oldActiveQuads = G_pgpe_pstate_record.activeQuads;

    //Save it because if pstates are active, then we need to start pstates on quads
    //that registered
    quadsRegisterProcess = G_pgpe_pstate_record.pendQuadsRegisterProcess;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if(G_pgpe_pstate_record.pendQuadsRegisterProcess & QUAD_MASK(q))
        {
            //Update activeQuads and coresActive
            G_pgpe_pstate_record.activeQuads |= QUAD_MASK(q);

            for (c = q << 2; c < ((q + 1) << 2); c++)
            {
                if (ccsr.value & CORE_MASK(c))
                {
                    G_pgpe_pstate_record.activeDB |= CORE_MASK(c);
                }
            }

            //Quad has registered. Remove from pending quads
            //registration list
            G_pgpe_pstate_record.pendQuadsRegisterReceive &= ~QUAD_MASK(q);
            G_pgpe_pstate_record.pendQuadsRegisterProcess &= ~QUAD_MASK(q);

            PK_TRACE_INF("PTH: Quad %d Registration Processing. qActive=0x%x cActive=0x%x", q, G_pgpe_pstate_record.activeQuads,
                         G_pgpe_pstate_record.activeDB);

            G_pgpe_optrace_data.word[0] = (G_pgpe_pstate_record.activeQuads << 24) | (G_pgpe_pstate_record.psCurr.fields.glb << 16)
                                          | (in32(G_OCB_QCSR) >> 16);
            p9_pgpe_optrace(PRC_PCB_T4);
        }
    }

    //If Pstates are active or suspended while active, then
    //send Pstate Start DB0 to quadManager CME
    if (G_pgpe_pstate_record.pstatesStatus == PSTATE_ACTIVE)
    {
        //do auction and apply clips
        p9_pgpe_pstate_do_auction();
        p9_pgpe_pstate_apply_clips();

        //If GlobalPSTarget has changed, then move voltage and send a global bcast
        //to quads that were previously active. This will ensure that before frequency is moved
        //on just registered quad as a result of processing Pstate Start(below), the voltage is
        //correct. Also, quads that were already active will learn the new global pstate value.
        if (G_pgpe_pstate_record.psTarget.fields.glb < G_pgpe_pstate_record.psCurr.fields.glb)
        {
            //Interpolate TargetVoltage from GlobalPSTarget
            uint32_t targetEVid = p9_pgpe_gppb_intp_vdd_from_ps((uint8_t)(G_pgpe_pstate_record.psTarget.fields.glb),
                                  VPD_PT_SET_BIASED_SYSP);

            //Move voltage by voltage step-size
            while(G_pgpe_pstate_record.biasSyspExtVrmCurr != targetEVid)
            {
                if ((targetEVid - G_pgpe_pstate_record.biasSyspExtVrmCurr) <= G_gppb->ext_vrm_step_size_mv)
                {
                    G_pgpe_pstate_record.biasSyspExtVrmNext = targetEVid;
                    G_pgpe_pstate_record.psNext.fields.glb = G_pgpe_pstate_record.psTarget.fields.glb;
                }
                else
                {
                    G_pgpe_pstate_record.biasSyspExtVrmNext = G_pgpe_pstate_record.biasSyspExtVrmCurr + G_gppb->ext_vrm_step_size_mv;
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

                }

                p9_pgpe_pstate_updt_ext_volt();
            }

            //Set GlobalPSCurr and Next
            G_pgpe_pstate_record.psCurr.fields.glb = G_pgpe_pstate_record.psTarget.fields.glb;
            G_pgpe_pstate_record.psNext.fields.glb = G_pgpe_pstate_record.psTarget.fields.glb;

            //Do globalbcast to sync up globalPS
            db0_glb_bcast.value = G_pgpe_pstate_record.psNext.value;
            db0_glb_bcast.fields.msg_id = MSGID_DB0_GLOBAL_ACTUAL_BROADCAST;
            db0p.db0val             = db0_glb_bcast.value;
            db0p.type               = PGPE_DB0_TYPE_MULTICAST;
            db0p.targetCores        = oldActiveDB;
            db0p.waitForAcks        = PGPE_DB_ACK_WAIT_CME;
            db0p.expectedAckFrom    = oldActiveQuads;
            db0p.expectedAckValue   = MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK;
            p9_pgpe_send_db0(db0p);
        }


        //Do setup for every quad that registered
        for (q = 0; q < MAX_QUADS; q++)
        {
            if(quadsRegisterProcess & QUAD_MASK(q))
            {
                //Give Quad Manager CME control of DPLL through inter-ppm
                //SGPE sets up the DPLL_SEL bits before booting CME
                //uint64_t safeDpll = G_gppb->dpll_pstate0_value - G_pgpe_pstate_record.safePstate;
                //safeDpll = safeDpll << 52;
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_OR, q), BIT64(26));

                for (c = FIRST_CORE_FROM_QUAD(q); c < LAST_CORE_FROM_QUAD(q); c++)
                {
                    if (G_pgpe_pstate_record.activeDB & CORE_MASK(c))
                    {
                        unicastCoresVector |= CORE_MASK(c);
                    }
                }

                //Write CME_SCRATCH and PMSR0/1 registers
                if (qcsr.fields.ex_config & QUAD_EX0_MASK(q))
                {
                    //CME_Scratch
                    GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);
                    value |= ((uint64_t)(MAX_QUADS - 1 - q) << 3) << 32;
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 0), value);
                }

                if (qcsr.fields.ex_config & QUAD_EX1_MASK(q))
                {
                    //CME_Scratch
                    GPE_GETSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 1), value);
                    value |= ((uint64_t)(MAX_QUADS - 1 - q) << 3) << 32;
                    GPE_PUTSCOM(GPE_SCOM_ADDR_CME(CME_SCOM_SRTCH0, q, 1), value);
                }

                quadAckExpect |= QUAD_MASK(q);
            }
        }

        //Send Pstate Start DB0 to all quads that registered
        db0_glb_bcast.value = G_pgpe_pstate_record.psTarget.value;
        db0_glb_bcast.fields.msg_id = MSGID_DB0_START_PSTATE_BROADCAST;
        db0p.db0val             = db0_glb_bcast.value;
        db0p.type               = PGPE_DB0_TYPE_UNICAST;
        db0p.targetCores        = unicastCoresVector;
        db0p.waitForAcks        = PGPE_DB_ACK_WAIT_CME;
        db0p.expectedAckFrom    = quadAckExpect;
        db0p.expectedAckValue   = MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK;
        p9_pgpe_send_db0(db0p);

        //Send clip updates to all quads that are already registered
        db0_clip_bcast.value = 0;
        db0_clip_bcast.fields.msg_id = MSGID_DB0_CLIP_BROADCAST;
        db0_clip_bcast.fields.clip_type = DB0_CLIP_BCAST_TYPE_PMIN;
        db0_clip_bcast.fields.quad0_clip = G_pgpe_pstate_record.psClipMax[0];
        db0_clip_bcast.fields.quad1_clip = G_pgpe_pstate_record.psClipMax[1];
        db0_clip_bcast.fields.quad2_clip = G_pgpe_pstate_record.psClipMax[2];
        db0_clip_bcast.fields.quad3_clip = G_pgpe_pstate_record.psClipMax[3];
        db0_clip_bcast.fields.quad4_clip = G_pgpe_pstate_record.psClipMax[4];
        db0_clip_bcast.fields.quad5_clip = G_pgpe_pstate_record.psClipMax[5];
        db0p.db0val             = db0_clip_bcast.value;
        p9_pgpe_send_db0(db0p);

        db0_clip_bcast.value = 0;
        db0_clip_bcast.fields.msg_id = MSGID_DB0_CLIP_BROADCAST;
        db0_clip_bcast.fields.clip_type = DB0_CLIP_BCAST_TYPE_PMAX;
        db0_clip_bcast.fields.quad0_clip = G_pgpe_pstate_record.psClipMin[0];
        db0_clip_bcast.fields.quad1_clip = G_pgpe_pstate_record.psClipMin[1];
        db0_clip_bcast.fields.quad2_clip = G_pgpe_pstate_record.psClipMin[2];
        db0_clip_bcast.fields.quad3_clip = G_pgpe_pstate_record.psClipMin[3];
        db0_clip_bcast.fields.quad4_clip = G_pgpe_pstate_record.psClipMin[4];
        db0_clip_bcast.fields.quad5_clip = G_pgpe_pstate_record.psClipMin[5];

        db0p.db0val             = db0_clip_bcast.value;
        p9_pgpe_send_db0(db0p);


        //Quads
        for (q = 0; q < MAX_QUADS; q++)
        {
            if (quadAckExpect & QUAD_MASK(q))
            {
                G_pgpe_pstate_record.psCurr.fields.quads[q] = G_pgpe_pstate_record.psTarget.fields.quads[q];
                G_pgpe_pstate_record.psNext.fields.quads[q] = G_pgpe_pstate_record.psTarget.fields.quads[q];
            }
        }

        p9_pgpe_pstate_updt_actual_quad();
    }
    //Send if Pstates aren't active anymore, REGISTER_DONE
    else
    {
        for (q = 0; q < MAX_QUADS; q++)
        {
            if(quadsRegisterProcess & QUAD_MASK(q))
            {
                //Give Quad Manager CME control of DPLL through inter-ppm
                //SGPE sets up the DPLL_SEL bits before booting CME
                GPE_PUTSCOM(GPE_SCOM_ADDR_QUAD(QPPM_QPMMR_OR, q), BIT64(26));

                for (c = FIRST_CORE_FROM_QUAD(q); c < LAST_CORE_FROM_QUAD(q); c++)
                {
                    if (G_pgpe_pstate_record.activeDB & CORE_MASK(c))
                    {
                        unicastCoresVector |= CORE_MASK(c);
                    }
                }

                quadAckExpect |= QUAD_MASK(q);
            }
        }

        db0_pstate_register_done.value = 0;
        db0_pstate_register_done.fields.msg_id = MSGID_DB0_REGISTER_DONE;
        db0p.db0val             = db0_pstate_register_done.value;
        db0p.type               = PGPE_DB0_TYPE_UNICAST;
        db0p.targetCores        = unicastCoresVector;
        db0p.waitForAcks        = PGPE_DB_ACK_WAIT_CME;
        db0p.expectedAckFrom    = quadAckExpect;
        db0p.expectedAckValue   = MSGID_PCB_TYPE4_ACK_PSTATE_PROTO_ACK;
        p9_pgpe_send_db0(db0p);
    }

    PK_TRACE_DBG("PTH: Register Exit");
}

//
//  p9_pgpe_process_ack_sgpe_ctrl_stop_updt
//
//  Process CTRL_STOP_UPDT IPC ack from SGPE
//
//  This is called when an ACK is received for CTRL_STOP_UPDT IPC
//  sent by PGPE to SGPE. This handler is effectively a NOP and is there
//  just to keep the IPC mechanism happy
//
inline void p9_pgpe_process_ack_sgpe_ctrl_stop_updt()
{
    G_pgpe_pstate_record.ipcPendTbl[IPC_ACK_CTRL_STOP_UPDT].pending_processing = 0;
    G_pgpe_pstate_record.ipcPendTbl[IPC_ACK_CTRL_STOP_UPDT].pending_ack = 0;
}

//
//  p9_pgpe_process_ack_sgpe_suspend_stop
//
//  Process SGPE_SUSPEND_STOP IPC ack from SGPE
//
//  PGPE sends Suspend Stop IPC to SGPE when PGPE is requested to
//  go into PM Complex Suspend. Upon receiving the ACK from SGPE
//  PGPE completes the rest of PM Complex Suspend protocol.
//
inline void p9_pgpe_process_ack_sgpe_suspend_stop()
{
    int q = 0;
    ocb_qcsr_t qcsr;

    G_pgpe_pstate_record.ipcPendTbl[IPC_ACK_SUSPEND_STOP].pending_processing = 0;
    G_pgpe_pstate_record.ipcPendTbl[IPC_ACK_SUSPEND_STOP].pending_ack = 0;


    //Change PMCR ownership
    PK_TRACE_INF("SUSP: Setting SCOM Ownership of PMCRs");
    qcsr.value = in32(G_OCB_QCSR);

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
    uint32_t occScr2 = in32(G_OCB_OCCS2);
    occScr2 |= BIT32(PM_COMPLEX_SUSPENDED);
    G_pgpe_pstate_record.pstatesStatus = PSTATE_PM_SUSPENDED;
    out32(G_OCB_OCCS2, occScr2);

    PK_TRACE_INF("SUSP: Suspend Stop Processed");
}
