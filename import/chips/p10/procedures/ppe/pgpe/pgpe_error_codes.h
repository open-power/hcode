/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_error_codes.h $     */
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
#if !defined(__PGPE_ERROR_CODES_H__)
#define __PGPE_ERROR_CODES_H__

#include "pgpe_service_codes.h"

enum PGPE_ERR_SAFE_MODE_FLAG
{
    PGPE_ERR_SAFE_MODE_FLAG_NO                                      = 0x0,
    PGPE_ERR_SAFE_MODE_FLAG_YES                                     = 0x1,
};


enum  PGPE_ERR_CODE_IDX
{
    //VOLTAGE
    PGPE_ERR_CODE_AVSBUS_VDD_INVALID_BUSNUM                     =   1,
    PGPE_ERR_CODE_AVSBUS_VCS_INVALID_BUSNUM                     =   2,
    PGPE_ERR_CODE_AVSBUS_INIT_ERR                               =   3,
    PGPE_ERR_CODE_AVSBUS_VOLTAGE_OUT_OF_BOUNDS                  =   4,
    PGPE_ERR_CODE_AVSBUS_VOLTAGE_READ_ONGOING_TIMEOUT           =   5,
    PGPE_ERR_CODE_AVSBUS_VOLTAGE_READ_RESYNC_ERROR              =   6,
    PGPE_ERR_CODE_AVSBUS_VOLTAGE_WRITE_ONGOING_TIMEOUT          =   7,
    PGPE_ERR_CODE_AVSBUS_VOLTAGE_WRITE_RESYNC_ERROR             =   8,

    //CURRENT
    PGPE_ERR_CODE_AVSBUS_CURRENT_READ_ONGOING_TIMEOUT           =   9,
    PGPE_ERR_CODE_AVSBUS_CURRENT_READ_RESYNC_ERROR              =   10,

    //DPLL
    PGPE_ERR_CODE_DPLL_WRITE_UPDATE_COMPLETE_AND_LOCK_TIMEOUT   =   11,
    PGPE_ERR_CODE_DPLL_UNSUPPORTED_MODE                         =   12,

    //Resclk
    PGPE_ERR_CODE_RESCLK_RCIMR_AT_ENABLEMENT_NOT_EQUAL          =   13,
    PGPE_ERR_CODE_RESCLK_RCPTR_PSTATE_ACK_TIMEOUT                =  14,
    PGPE_ERR_CODE_RESCLK_RCPTR_TGT_PSTATE_NOT_EQUAL             =   15,

    //DDS
    PGPE_ERR_CODE_DDS_FDCR_UPDATE_TIMEOUT                       =   16,

    //XGPE
    PGPE_ERR_CODE_XGPE_PGPE_VRET_UPDATE_BAD_ACK                 =   17,

    //IRQs
    PGPE_ERR_CODE_PGPE_UNEXPECTED_OCC_FIR_IRQ                   =   18,
    PGPE_ERR_CODE_PGPE_XSTOP_GPE2                               =   19,
    PGPE_ERR_CODE_PGPE_GPE3_ERROR                               =   20,
    PGPE_ERR_CODE_PGPE_PVREF_ERROR                              =   21,

    //PSTATES
    PGPE_ERR_CODE_PGPE_INVALID_PMCR_OWNER                       =   22,
    PGPE_ERR_CODE_PGPE_CLIP_UPDT_IN_SAFE_MODE                   =   23,
    PGPE_ERR_CODE_PGPE_CLIP_UPDT_WHILE_PENDING                  =   24,
    PGPE_ERR_CODE_PGPE_PSTATE_START_IN_SAFE_MODE                =   25,
    PGPE_ERR_CODE_PGPE_PSTATE_STOP_IN_SAFE_MODE                 =   26,
    PGPE_ERR_CODE_PGPE_PSTATE_STOP_IN_PSTATE_STOPPED            =   27,
    PGPE_ERR_CODE_PGPE_PSTATE_START_STOP_WHILE_PENDING          =   28,
    PGPE_ERR_CODE_PGPE_SET_PMCR_AND_PMCR_OWNER_NOT_OCC          =   29,
    PGPE_ERR_CODE_PGPE_SET_PMCR_IN_PSTATE_STOPPED               =   30,
    PGPE_ERR_CODE_PGPE_SET_PMCR_IN_SAFE_MODE                    =   31,
    PGPE_ERR_CODE_PGPE_SET_PMCR_WHILE_PENDING                   =   32,
    PGPE_ERR_CODE_PGPE_PCB_TYPE1_IN_PSTATE_STOPPED              =   33,
    PGPE_ERR_CODE_PGPE_PCB_TYPE1_IN_PMCR_OWNER_OCC              =   34,

    //WOF
    PGPE_ERR_CODE_PGPE_WOF_NULL_VRT_PTR                         =   35,
    PGPE_ERR_CODE_PGPE_WOF_VRT_IN_SAFE_MODE                     =   36,
    PGPE_ERR_CODE_PGPE_WOF_VRT_IN_PSTATE_STOPPED                =   37,
    PGPE_ERR_CODE_PGPE_WOF_VRT_WHILE_PENDING                    =   38,
    PGPE_ERR_CODE_PGPE_WOF_CTRL_WHILE_PENDING                   =   39,
    PGPE_ERR_CODE_PGPE_WOF_CTRL_IN_SAFE_MODE                    =   40,
    PGPE_ERR_CODE_PGPE_WOF_CTRL_IN_PSTATE_STOPPED               =   41,
    PGPE_ERR_CODE_PGPE_WOF_CTRL_ENABLE_WHEN_ENABLED             =   42,
    PGPE_ERR_CODE_PGPE_WOF_CTRL_DISABLE_WHEN_WOF_DISABLED       =   43,
    PGPE_ERR_CODE_PGPE_WOF_CTRL_DISABLE_IN_PSTATE_STOPPED       =   44,
    PGPE_ERR_CODE_PGPE_WOF_CTRL_ENABLE_WITHOUT_VRT              =   45,

    //ERROR Injection
    PGPE_ERR_CODE_PGPE_ACTUATE_ERROR_INJECT_CRITICAL = 46,
    PGPE_ERR_CODE_PGPE_ACTUATE_ERROR_INJECT_INFO    = 47,
    PGPE_ERR_CODE_PGPE_FIT_ERROR_INJECT             = 48,
};




#endif
