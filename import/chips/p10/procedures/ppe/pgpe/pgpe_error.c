/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_error.c $           */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2021                                                         */
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
#include "pgpe_error.h"
#include "pgpe_pstate.h"
#include "pgpe_event_table.h"
#include "pgpe_error_codes.h"
#include "pgpe_occ.h"
#include "p10_oci_proc_6.H"

extern  uint64_t  g_oimr_override;

pgpe_error_code_t G_PGPE_ERROR_CODES[] =
{
    {0, 0, 0, 0}, //Leave first index unused

    //Voltage
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_VOLTAGE, 0, PGPE_ERR_EXT_CODE_AVSBUS_VDD_INVALID_BUSNUM},//1
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_VOLTAGE, 0, PGPE_ERR_EXT_CODE_AVSBUS_VCS_INVALID_BUSNUM},//2
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_VOLTAGE, 0, PGPE_ERR_EXT_CODE_AVSBUS_INIT_ERR},//3
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_VOLTAGE, 0, PGPE_ERR_EXT_CODE_AVSBUS_VOLTAGE_OUT_OF_BOUNDS},//4
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_VOLTAGE, 0, PGPE_ERR_EXT_CODE_AVSBUS_VOLTAGE_READ_ONGOING_TIMEOUT},//5
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_VOLTAGE, 0, PGPE_ERR_EXT_CODE_AVSBUS_VOLTAGE_READ_RESYNC_ERROR},//6
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_VOLTAGE, 0, PGPE_ERR_EXT_CODE_AVSBUS_VOLTAGE_WRITE_ONGOING_TIMEOUT},//7
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_VOLTAGE, 0, PGPE_ERR_EXT_CODE_AVSBUS_VOLTAGE_WRITE_RESYNC_ERROR},//8

    //Current
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_CURRENT, 0, PGPE_ERR_EXT_CODE_AVSBUS_CURRENT_READ_ONGOING_TIMEOUT},//9
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_CURRENT, 0, PGPE_ERR_EXT_CODE_AVSBUS_CURRENT_READ_RESYNC_ERROR},//10

    //DPLL
    {PGPE_ERR_MODULE_DPLL, PGPE_ERR_REASON_CODE_DPLL, 0, PGPE_ERR_EXT_CODE_DPLL_WRITE_UPDATE_COMPLETE_AND_LOCK_TIMEOUT},//11
    {PGPE_ERR_MODULE_DPLL, PGPE_ERR_REASON_CODE_DPLL, 0, PGPE_ERR_EXT_CODE_DPLL_UNSUPPORTED_MODE},//12

    //Resclk
    {PGPE_ERR_MODULE_RESCLK, PGPE_ERR_REASON_CODE_RESCLK, 0, PGPE_ERR_EXT_CODE_RESCLK_RCIMR_AT_ENABLEMENT_NOT_EQUAL},//13
    {PGPE_ERR_MODULE_RESCLK, PGPE_ERR_REASON_CODE_RESCLK, 0, PGPE_ERR_EXT_CODE_RESCLK_RCPTR_PSTATE_ACK_TIMEOUT},//14
    {PGPE_ERR_MODULE_RESCLK, PGPE_ERR_REASON_CODE_RESCLK, 0, PGPE_ERR_EXT_CODE_RESCLK_RCPTR_TGT_PSTATE_NOT_EQUAL},//15

    //DDS
    {PGPE_ERR_MODULE_DDS, PGPE_ERR_REASON_CODE_DDS, 0, PGPE_ERR_EXT_CODE_DDS_FDCR_UPDATE_TIMEOUT},//16

    //XGPE
    {PGPE_ERR_MODULE_XGPE, PGPE_ERR_REASON_CODE_XGPE, 0, PGPE_ERR_EXT_CODE_XGPE_PGPE_VRET_UPDATE_BAD_ACK},//17

    //IRQs
    {PGPE_ERR_MODULE_OCC_FAULT, PGPE_ERR_REASON_CODE_IRQ_FAULT, 0, PGPE_ERR_EXT_CODE_PGPE_UNEXPECTED_OCC_FIR_IRQ },//18
    {PGPE_ERR_MODULE_XSTOP, PGPE_ERR_REASON_CODE_IRQ_FAULT, 0, PGPE_ERR_EXT_CODE_PGPE_XSTOP_GPE2},//19
    {PGPE_ERR_MODULE_XGPE_FAULT, PGPE_ERR_REASON_CODE_IRQ_FAULT, 0, PGPE_ERR_EXT_CODE_PGPE_GPE3_ERROR},//20
    {PGPE_ERR_MODULE_PVREF_FAULT, PGPE_ERR_REASON_CODE_IRQ_FAULT, 0, PGPE_ERR_EXT_CODE_PGPE_PVREF_ERROR},//21

    //PSTATES
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_PSTATES, 0, PGPE_ERR_EXT_CODE_PGPE_INVALID_PMCR_OWNER },//22
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_PSTATES, 0, PGPE_ERR_EXT_CODE_PGPE_CLIP_UPDT_IN_SAFE_MODE},//23
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_PSTATES, 0, PGPE_ERR_EXT_CODE_PGPE_CLIP_UPDT_WHILE_PENDING},//24
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_PSTATES, 0, PGPE_ERR_EXT_CODE_PGPE_PSTATE_START_IN_SAFE_MODE},//25
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_PSTATES, 0, PGPE_ERR_EXT_CODE_PGPE_PSTATE_STOP_IN_SAFE_MODE},//26
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_PSTATES, 0, PGPE_ERR_EXT_CODE_PGPE_PSTATE_STOP_IN_PSTATE_STOPPED},//27
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_PSTATES, 0, PGPE_ERR_CODE_PGPE_PSTATE_START_STOP_WHILE_PENDING },//28
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_PSTATES, 0, PGPE_ERR_EXT_CODE_PGPE_SET_PMCR_AND_PMCR_OWNER_NOT_OCC},//29
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_PSTATES, 0, PGPE_ERR_EXT_CODE_PGPE_SET_PMCR_IN_PSTATE_STOPPED},//30
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_PSTATES, 0, PGPE_ERR_EXT_CODE_PGPE_SET_PMCR_IN_SAFE_MODE},//31
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_PSTATES, 0, PGPE_ERR_EXT_CODE_PGPE_SET_PMCR_WHILE_PENDING},//32
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_PSTATES, 0, PGPE_ERR_EXT_CODE_PGPE_PCB_TYPE1_IN_PSTATE_STOPPED},//33
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_PSTATES, 0, PGPE_ERR_EXT_CODE_PGPE_PCB_TYPE1_IN_PMCR_OWNER_OCC},//34
    {PGPE_ERR_MODULE_EVENT_PROCESS, PGPE_ERR_REASON_CODE_PSTATES, 0, PGPE_ERR_EXT_CODE_PGPE_SAFE_MODE_IN_PSTATE_STOPPED},//35

    //WOF
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_WOF, 0, PGPE_ERR_EXT_CODE_PGPE_WOF_NULL_VRT_PTR}, //36
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_WOF, 0, PGPE_ERR_EXT_CODE_PGPE_WOF_VRT_IN_SAFE_MODE}, //37
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_WOF, 0, PGPE_ERR_EXT_CODE_PGPE_WOF_VRT_IN_PSTATE_STOPPED}, //38
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_WOF, 0, PGPE_ERR_EXT_CODE_PGPE_WOF_VRT_WHILE_PENDING}, //39
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_WOF, 0, PGPE_ERR_EXT_CODE_PGPE_WOF_CTRL_WHILE_PENDING}, //40
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_WOF, 0, PGPE_ERR_EXT_CODE_PGPE_WOF_CTRL_IN_SAFE_MODE}, //41
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_WOF, 0, PGPE_ERR_EXT_CODE_PGPE_WOF_CTRL_IN_PSTATE_STOPPED}, //42
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_WOF, 0, PGPE_ERR_EXT_CODE_PGPE_WOF_CTRL_ENABLE_WHEN_ENABLED}, //43
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_WOF, 0, PGPE_ERR_EXT_CODE_PGPE_WOF_CTRL_DISABLE_WHEN_WOF_DISABLED}, //44
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_WOF, 0, PGPE_ERR_EXT_CODE_PGPE_WOF_CTRL_DISABLE_IN_PSTATE_STOPPED}, //45
    {PGPE_ERR_MODULE_PSTATE, PGPE_ERR_REASON_CODE_WOF, 0, PGPE_ERR_EXT_CODE_PGPE_WOF_CTRL_ENABLE_WITHOUT_VRT}, //46
    {PGPE_ERR_MODULE_EVENT_MANAGER, PGPE_ERR_REASON_CODE_INJECT, 0, PGPE_ERR_CODE_PGPE_ACTUATE_ERROR_INJECT_CRITICAL}, //47
    {PGPE_ERR_MODULE_EVENT_MANAGER, PGPE_ERR_REASON_CODE_INJECT, 0, PGPE_ERR_CODE_PGPE_ACTUATE_ERROR_INJECT_INFO}, //48
    {PGPE_ERR_MODULE_EVENT_MANAGER, PGPE_ERR_REASON_CODE_INJECT, 0, PGPE_ERR_EXT_CODE_PGPE_FIT_ERROR_INJECT}, //49

    {PGPE_ERR_MODULE_DPLL, PGPE_ERR_REASON_CODE_DPLL, 0, PGPE_ERR_EXT_CODE_DPLL_PARITY_ERROR}, //50
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_VOLTAGE, 0, PGPE_ERR_EXT_CODE_AVSBUS_VOLTAGE_WRITE_NOT_IN_PGPE_CONTROL}, //51
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_VOLTAGE, 0, PGPE_ERR_EXT_CODE_AVSBUS_VOLTAGE_WRITE_UNKNOWN_ERROR}, //52
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_VOLTAGE, 0, PGPE_ERR_EXT_CODE_AVSBUS_VOLTAGE_READ_NOT_IN_PGPE_CONTROL},//53
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_VOLTAGE, 0, PGPE_ERR_EXT_CODE_AVSBUS_VOLTAGE_READ_UNKNOWN_ERROR}, //54

    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_CURRENT, 0, PGPE_ERR_EXT_CODE_AVSBUS_CURRENT_READ_NOT_IN_PGPE_CONTROL}, //55
    {PGPE_ERR_MODULE_AVSBUS_DRIVER, PGPE_ERR_REASON_CODE_CURRENT, 0, PGPE_ERR_EXT_CODE_AVSBUS_CURRENT_READ_UNKNOWN_ERROR}, //56

    //Machine Check
    {PGPE_ERR_MODULE_MACHINE_CHECK, PGPE_ERR_REASON_CODE_IRQ_FAULT, 0, PGPE_ERR_EXT_CODE_PGPE_MACHINE_CHECK}//57
};


pgpe_error_t G_pgpe_error;

void pgpe_error_init()
{
    G_pgpe_error.current_status = PGPE_ERROR_STATUS_NOT_SEEN;
    G_pgpe_error.critical_cnt = 0;
    G_pgpe_error.info_cnt = 0;
    G_pgpe_error.first_info_err_idx = 0;
    G_pgpe_error.last_info_err_idx = 0;
    G_pgpe_error.first_crit_err_idx = 0;
    G_pgpe_error.last_crit_err_idx = 0;
    IOTA_MC_HANDLER(pgpe_error_machine_check_handler);
}



void pgpe_error_info_log(uint32_t pgpe_err_id)
{
    //Create Info Error Log
    // @TODO via RTC: 282696 - tmp disable info errors on pgpe
#ifdef __PPE_PGPE
    uint32_t o_status;
    PPE_LOG_ERR_INF(G_PGPE_ERROR_CODES[pgpe_err_id].reason_code,
                    G_PGPE_ERROR_CODES[pgpe_err_id].ext_reason_code,
                    G_PGPE_ERROR_CODES[pgpe_err_id].mod_id,
                    0x0,
                    0x0,
                    0x0,
                    NULL,
                    o_status);
    PK_TRACE_INF("ERRL: o_status=0x%x", o_status); //TODO Check error code
#else
    PK_TRACE_INF("SKIPPING INFO ERRL: 0x%08X", pgpe_err_id);
#endif

}

void pgpe_error_critical_log(uint32_t pgpe_err_id)
{
    //Create Critical Log
    uint32_t o_status;
    PPE_LOG_ERR_CRITICAL(G_PGPE_ERROR_CODES[pgpe_err_id].reason_code,
                         G_PGPE_ERROR_CODES[pgpe_err_id].ext_reason_code,
                         G_PGPE_ERROR_CODES[pgpe_err_id].mod_id,
                         0x0,
                         0x0,
                         0x0,
                         NULL,
                         NULL,
                         o_status);
    PK_TRACE_INF("ERRL: o_status=0x%x", o_status);//TODO Check error code
}

void pgpe_error_critical_log_usr(uint32_t pgpe_err_id, errlDataUsrDtls_t* usr_dtls)
{
    //Create Critical Log
    uint32_t o_status;
    PPE_LOG_ERR_CRITICAL(G_PGPE_ERROR_CODES[pgpe_err_id].reason_code,
                         G_PGPE_ERROR_CODES[pgpe_err_id].ext_reason_code,
                         G_PGPE_ERROR_CODES[pgpe_err_id].mod_id,
                         0x0,
                         0x0,
                         0x0,
                         usr_dtls,
                         NULL,
                         o_status);
    PK_TRACE_INF("ERRL: o_status=0x%x", o_status);//TODO Check error code
}
void pgpe_error_notify_critical(uint32_t pgpe_err_id)
{
    G_pgpe_error.critical_cnt++;

    if(!(G_pgpe_error.current_status & PGPE_ERROR_STATUS_CRITICAL_SEEN))
    {
        G_pgpe_error.first_crit_err_idx = pgpe_err_id;
    }

    G_pgpe_error.last_crit_err_idx = pgpe_err_id;

    G_pgpe_error.current_status |= PGPE_ERROR_STATUS_CRITICAL_SEEN;
    PK_TRACE("ERR: Notify Critical");
}

void pgpe_error_notify_info(uint32_t pgpe_err_id)
{
    G_pgpe_error.info_cnt++;

    if(G_pgpe_error.current_status  & PGPE_ERROR_STATUS_INFO_SEEN)
    {
        G_pgpe_error.first_info_err_idx = pgpe_err_id;
    }

    G_pgpe_error.last_info_err_idx = pgpe_err_id;

    G_pgpe_error.current_status |= PGPE_ERROR_STATUS_INFO_SEEN;
}


void pgpe_error_stop_beacon()
{
    pgpe_pstate_set(update_pgpe_beacon, 0);
    PK_TRACE("ERR: PGPE Beacon Update Stopped");
}

void pgpe_error_mask_irqs()
{
    uint32_t oimr0 = 0x400EE020; //Except IPC and GPE3_ERROR, XSTOP_GPE2, and PVREF error
    g_oimr_override |= BIT64(2) |
                       BIT64(12) | BIT64(13) | BIT64(14) |
                       BIT64(16) | BIT64(17) | BIT64(18) |
                       BIT64(26);
    out32(TP_TPCHIP_OCC_OCI_OCB_OIMR0_WO_OR, oimr0);
    PK_TRACE("ERR: IRQs Masked");
}

void pgpe_error_ack_pending()
{
    event_t* e = pgpe_event_tbl_get(EV_IPC_PSTATE_START_STOP);

    //Start Stop
    e = pgpe_event_tbl_get(EV_IPC_PSTATE_START_STOP);
    ipc_msg_t* cmd;

    if (e->status == EVENT_PENDING)
    {
        pgpe_event_tbl_set_status(EV_IPC_PSTATE_START_STOP, EVENT_INACTIVE);
        cmd = (ipc_msg_t*)e;
        pgpe_occ_send_ipc_ack_cmd_rc(cmd, PGPE_RC_SUCCESS);
    }

    //Clip Updt
    e = pgpe_event_tbl_get(EV_IPC_CLIP_UPDT);

    if (e->status == EVENT_PENDING)
    {
        pgpe_event_tbl_set_status(EV_IPC_CLIP_UPDT, EVENT_INACTIVE);
        cmd = (ipc_msg_t*)e;
        pgpe_occ_send_ipc_ack_cmd_rc(cmd, PGPE_RC_SUCCESS);
    }

    //Set PMCR
    e = pgpe_event_tbl_get(EV_IPC_SET_PMCR);

    if (e->status == EVENT_PENDING)
    {
        pgpe_event_tbl_set_status(EV_IPC_SET_PMCR, EVENT_INACTIVE);
        cmd = (ipc_msg_t*)e;
        pgpe_occ_send_ipc_ack_cmd_rc(cmd, PGPE_RC_SUCCESS);
    }

    //Set WOF VRT
    e = pgpe_event_tbl_get(EV_IPC_WOF_VRT);

    if (e->status == EVENT_PENDING)
    {
        pgpe_event_tbl_set_status(EV_IPC_WOF_VRT, EVENT_INACTIVE);
        cmd = (ipc_msg_t*)e;
        pgpe_occ_send_ipc_ack_cmd_rc(cmd, PGPE_RC_SUCCESS);
    }


    //Set WOF_CTRL
    e = pgpe_event_tbl_get(EV_IPC_WOF_CTRL);

    if (e->status == EVENT_PENDING)
    {
        pgpe_event_tbl_set_status(EV_IPC_WOF_CTRL, EVENT_INACTIVE);
        cmd = (ipc_msg_t*)e;
        pgpe_occ_send_ipc_ack_cmd_rc(cmd, PGPE_RC_SUCCESS);
    }

    PK_TRACE("ERR: Pending IPC Acked");
}


void pgpe_error_handle_fault(uint32_t pgpe_err_id)
{
    //Mask interrupt except IPC and Error
    pgpe_error_mask_irqs();

    //Take out a critical log
    pgpe_error_critical_log(pgpe_err_id);

    //Stop beacon updates
    pgpe_error_stop_beacon();

    //Notify error module
    pgpe_error_notify_critical(pgpe_err_id);

    //ack any pending IPCS with bad rc
    pgpe_error_ack_pending();
}

void pgpe_error_machine_check_handler()
{
    uint32_t srr0  = mfspr(SPRN_SRR0);
    uint32_t srr1  = mfspr(SPRN_SRR1);
    uint32_t edr   = mfspr(SPRN_EDR);

    PK_TRACE_INF("ERR: Machine Check  EDR:%x SRR1:%x SRR0:%x", edr, srr1, srr0);
    uint32_t o_status;
    PPE_LOG_ERR_CRITICAL(G_PGPE_ERROR_CODES[PGPE_ERR_CODE_PGPE_MACHINE_CHECK].reason_code,
                         G_PGPE_ERROR_CODES[PGPE_ERR_CODE_PGPE_MACHINE_CHECK].ext_reason_code,
                         G_PGPE_ERROR_CODES[PGPE_ERR_CODE_PGPE_MACHINE_CHECK].mod_id,
                         srr0,
                         srr1,
                         edr,
                         NULL,
                         NULL,
                         o_status);
    PK_TRACE_INF("ERRL: o_status=0x%x", o_status);

    //Mask interrupt except IPC and Error
    pgpe_error_mask_irqs();

    //Notify error module
    pgpe_error_notify_critical(PGPE_ERR_CODE_PGPE_MACHINE_CHECK);

    //Stop Beacon Updates
    pgpe_error_stop_beacon();

    //Ack any pending IPCS with bad rc
    pgpe_error_ack_pending();

}

void pgpe_error_state_loop()
{

    PK_TRACE_INF("ERR: In Error State Loop");

    while(1)
    {
    }
}
