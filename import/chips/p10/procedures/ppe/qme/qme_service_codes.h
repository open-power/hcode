/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_service_codes.h $     */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2021,2022                                                    */
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
#ifndef _QME_SERVICE_CODES_H_
#define _QME_SERVICE_CODES_H_

enum qmeReasonCode
{
    REASON_SR_FAIL              =   0x01,
    PUTRING_PARALLEL_SCAN_ERR   =   0x02,
    PUTRING_HEADER_ERR          =   0x03,
    PUTRING_BAD_STRING          =   0x04,
    PUTRING_HEADER_MISMATCH     =   0x05,
    PUTRING_BAD_NIBBLE_INDEX    =   0x06,
    PUTRING_UNKNOWN_ERR         =   0x07,
    // do not change this before check qme_panic_codes.h
    ERR_REASON_ID_QME_SETUP     =   0x10,
    ERR_REASON_ID_IRQ_ERR       =   0x11,
    ERR_REASON_ID_MACH_CHECK    =   0x13,
    ERR_REASON_ID_FAULT_INJ     =   0x20,
    ERR_REASON_ID_STOP_REQ      =   0x21,
    ERR_REASON_ID_PFET_CLK      =   0x23,
    ERR_REASON_ID_STOP2_ENTRY   =   0x30,
    ERR_REASON_ID_STOP3_ENTRY   =   0x31,
    ERR_REASON_ID_STOP11_ENTRY  =   0x33,
    ERR_REASON_ID_STOP2_EXIT    =   0x40,
    ERR_REASON_ID_STOP3_EXIT    =   0x41,
    ERR_REASON_ID_STOP11_EXIT   =   0x43,
};

enum qmeExtReasonCode
{
    QME_STOP11_EXIT         =   0x01,
    QME_PUT_RING_FAIL       =   0x02,
    // see others in qme_panic_codes.h
    // qme error SRC doxygen tags are added to the below file
    // and it gets used as ext rc as well
#include "qme_panic_codes.h"
    QME_BAD_DD_LEVEL                          = 0x1c00, // 00xxx
    QME_MAIN_FAPI2_INIT_FAILED                = 0x1c01,
    QME_STOP11_RUNN_CONTAINED_MODE_ERROR      = 0x1c02,
    QME_STOP_BLOCK_COPY_AT_BOOT_FAILED        = 0x1c03,
    QME_STOP_BLOCK_COPY_AUTO_WKUP_FAILED      = 0x1c04,
    QME_STOP_BLOCK_PROTOCOL_TARGET_ERROR      = 0x1c05,
    QME_DEBUGGER_TRIGGER_DETECTED             = 0x1c08, // 01xxx
    QME_SYSTEM_CHECKSTOP_DETECTED             = 0x1c09,
    QME_LFIR_INDICATION_DETECTED              = 0x1c0a,
    QME_MACHINE_CHECK_COMMON_ERROR            = 0x1c0d,
    QME_MACHINE_CHECK_SCOM_ERROR              = 0x1c1c, // 11xxx
    QME_MACHINE_CHECK_LOCAL_ERROR             = 0x1c1d,
    QME_STOP23_ENTRY_FAULT_INJECT             = 0x1d02,
    QME_STOP11_ENTRY_FAULT_INJECT             = 0x1d03,
    QME_STOP2_EXIT_FAULT_INJECT               = 0x1d04,
    QME_STOP3_RVRM_POWON_FAULT_INJECT         = 0x1d05,
    QME_STOP11_POWON_FAULT_INJECT             = 0x1d06,
    QME_SELF_RESTORE_FAULT_INJECT             = 0x1d07,
    QME_FUSED_EVEN_STOP_LEVELS_DD1            = 0x1d09,
    QME_POWER_LOSS_WITH_STATE_LOSS_DISABLED   = 0x1d0a,
    QME_STOP_SELF_CORE_FIR                    = 0x1d0d,
    CORECACHE_CLK_CTRL_TIMEOUT_CORE           = 0x1d1c, // 11xxx
    CORECACHE_POW_CTRL_TIMEOUT                = 0x1d1d,
    CORECACHE_PFET_SEQ_STATE_ERROR            = 0x1d1e,
    L2_PURGE_DONE_TIMEOUT                     = 0x1e00, // 00xxx
    NCU_PURGE_DONE_TIMEOUT                    = 0x1e01,
    PMSR_SHIFT_INACTIVE_TIMEOUT               = 0x1e02,
    SHADOW_ENA_FDCR_UPDATE_IN_PROG_TIMEOUT    = 0x1e03,
    SHADOW_ENA_CORE_REFRESH_ACTIVE_TIMEOUT    = 0x1e04,
    TIMEFAC_FROM_PC_XFER_RECEIVE_DONE_TIMEOUT = 0x1e05,
    TIMEFAC_FROM_PC_TFCSR_ERROR_CHECK_FAILED  = 0x1e06,
    ECL2_CLK_SYNC_DROP_TIMEOUT                = 0x1e07,
    CORE_CHANGE_DONE_RESCLK_ENTRY_TIMEOUT     = 0x1e08, // 01xxx
    VMIN_ENA_RVID_ACTIVE_TIMEOUT              = 0x1e09,
    VMIN_ENA_VDD_PG_STATE_TIMEOUT             = 0x1e0a,
    VMIN_ENA_VDD_PFET_ENABLE_ACTUAL_FAILED    = 0x1e0d,
    L3_PURGE_DONE_TIMEOUT                     = 0x1e1c, // 11xxx
    POWERBUS_PURGE_DONE_TIMEOUT               = 0x1e1d,
    CHTM_PURGE_DONE_TIMEOUT                   = 0x1e1e,
    L3_CLK_SYNC_DROP_TIMEOUT                  = 0x1e1f,
    ECL2_CLK_SYNC_DONE_TIMEOUT                = 0x1f00, // 00xxx
    CORE_CHANGE_DONE_RESCLK_EXIT_TIMEOUT      = 0x1f01,
    SHADOW_DIS_FDCR_UPDATE_IN_PROG_TIMEOUT    = 0x1f02,
    SHADOW_DIS_CORE_SHADOW_STATE_TIMEOUT      = 0x1f03,
    TIMEFAC_TO_PC_XFER_SENT_DONE_TIMEOUT      = 0x1f04,
    TIMEFAC_TO_PC_TFCSR_ERROR_CHECK_FAILED    = 0x1f05,
    MSG_SEND_BLOCK_COPY_FAILED                = 0x1f06,
    QME_STOP_WAKEUP_PAIR_MISMATCH             = 0x1f07,
    VMIN_DIS_RVID_BYPASS_TIMEOUT              = 0x1f08, // 01xxx
    VMIN_DIS_RVID_ENABLED_TIMEOUT             = 0x1f09,
    VMIN_DIS_VDD_PFET_ENABLE_TIMEOUT          = 0x1f0a,
    VMIN_DIS_VDD_PG_STATE_TIMEOUT             = 0x1f0d,
    L3_CLK_SYNC_DONE_TIMEOUT                  = 0x1f1c, // 11xxx
    QME_STOP_BLOCK_COPY_SCAN_RING_FAILED      = 0x1f1d,
    QME_STOP_BLOCK_COPY_CL2_SCOM_FAILED       = 0x1f1e,
    QME_STOP_BLOCK_COPY_L3_SCOM_FAILED        = 0x1f1f,
};

enum qmeModuleId
{
    // do not change this before check qme_panic_codes.h
    QME_MODULE_ID_BASE_ERR   =   0x01,
    QME_MODULE_ID_STOP_FLOW  =   0x02,
    QME_MODULE_ID_STOP_ENTRY =   0x03,
    QME_MODULE_ID_STOP_EXIT  =   0x04,
    QME_MODULE_ID_QME_SCAN   =   0x05,
    QME_MODULE_ID_SR         =   0x06,
};

#endif // _QME_SERVICE_CODES_H_
