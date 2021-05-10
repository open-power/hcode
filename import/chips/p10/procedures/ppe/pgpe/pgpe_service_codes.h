/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_service_codes.h $   */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2021                                                    */
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
#if !defined(__PGPE_SERVICE_CODES_H__)
#define __PGPE_SERVICE_CODES_H__


enum pgpeModuleId
{
    PGPE_ERR_MODULE_AVSBUS_DRIVER   =       0x1,
    PGPE_ERR_MODULE_DDS             =       0x2,
    PGPE_ERR_MODULE_DPLL            =       0x3,
    PGPE_ERR_MODULE_EVENT_MANAGER   =       0x4,
    PGPE_ERR_MODULE_EVENT_PROCESS   =       0x5,
    PGPE_ERR_MODULE_EVENT_TABLE     =       0x6,
    PGPE_ERR_MODULE_GPPB            =       0x7,
    PGPE_ERR_MODULE_OCC_FAULT       =       0x8,
    PGPE_ERR_MODULE_PVREF_FAULT     =       0x9,
    PGPE_ERR_MODULE_XGPE_FAULT      =       0xA,
    PGPE_ERR_MODULE_XSTOP           =       0xB,
    PGPE_ERR_MODULE_IPC             =       0xC,
    PGPE_ERR_MODULE_FIT             =       0xD,
    PGPE_ERR_MODULE_OCC             =       0xE,
    PGPE_ERR_MODULE_PSTATE          =       0xF,
    PGPE_ERR_MODULE_RESCLK          =       0x10,
    PGPE_ERR_MODULE_THR_CTRL        =       0x11,
    PGPE_ERR_MODULE_UIH             =       0x12,
    PGPE_ERR_MODULE_WOV_OCS         =       0x13,
    PGPE_ERR_MODULE_XGPE            =       0x14,
};

enum pgpeReasonCode
{
    PGPE_ERR_REASON_CODE_VOLTAGE    =     0x10,
    PGPE_ERR_REASON_CODE_CURRENT    =     0x30,
    PGPE_ERR_REASON_CODE_DPLL       =     0x40,
    PGPE_ERR_REASON_CODE_RESCLK     =     0x50,
    PGPE_ERR_REASON_CODE_DDS        =     0x60,
    PGPE_ERR_REASON_CODE_XGPE       =     0x70,
    PGPE_ERR_REASON_CODE_IRQ_FAULT  =     0x80,
    PGPE_ERR_REASON_CODE_PSTATES    =     0x90,
    PGPE_ERR_REASON_CODE_WOF        =     0xb0,
    PGPE_ERR_REASON_CODE_INJECT     =     0xc0,
};

enum pgpeExtReasonCode
{
    //VOLTAGE
    PGPE_ERR_EXT_CODE_AVSBUS_VDD_INVALID_BUSNUM                     =   0x1010,
    PGPE_ERR_EXT_CODE_AVSBUS_VCS_INVALID_BUSNUM                     =   0x1011,
    PGPE_ERR_EXT_CODE_AVSBUS_INIT_ERR                               =   0x1012,
    PGPE_ERR_EXT_CODE_AVSBUS_VOLTAGE_OUT_OF_BOUNDS                  =   0x1013,
    PGPE_ERR_EXT_CODE_AVSBUS_VOLTAGE_READ_ONGOING_TIMEOUT           =   0x1014,
    PGPE_ERR_EXT_CODE_AVSBUS_VOLTAGE_READ_RESYNC_ERROR              =   0x1015,
    PGPE_ERR_EXT_CODE_AVSBUS_VOLTAGE_WRITE_ONGOING_TIMEOUT          =   0x1016,
    PGPE_ERR_EXT_CODE_AVSBUS_VOLTAGE_WRITE_RESYNC_ERROR             =   0x1017,

    //CURRENT
    PGPE_ERR_EXT_CODE_AVSBUS_CURRENT_READ_ONGOING_TIMEOUT           =   0x1030,
    PGPE_ERR_EXT_CODE_AVSBUS_CURRENT_READ_RESYNC_ERROR              =   0x1031,

    //DPLL
    PGPE_ERR_EXT_CODE_DPLL_WRITE_UPDATE_COMPLETE_AND_LOCK_TIMEOUT   =   0x1040,
    PGPE_ERR_EXT_CODE_DPLL_UNSUPPORTED_MODE                         =   0x1041,

    //Resclk
    PGPE_ERR_EXT_CODE_RESCLK_RCIMR_AT_ENABLEMENT_NOT_EQUAL          =   0x1050,
    PGPE_ERR_EXT_CODE_RESCLK_RCPTR_PSTATE_ACK_TIMEOUT                =   0x1051,
    PGPE_ERR_EXT_CODE_RESCLK_RCPTR_TGT_PSTATE_NOT_EQUAL             =   0x1052,

    //DDS
    PGPE_ERR_EXT_CODE_DDS_FDCR_UPDATE_TIMEOUT                       =   0x1060,

    //XGPE
    PGPE_ERR_EXT_CODE_XGPE_PGPE_VRET_UPDATE_BAD_ACK                 =   0x1070,

    //IRQs
    PGPE_ERR_EXT_CODE_PGPE_UNEXPECTED_OCC_FIR_IRQ                   =   0x1080,
    PGPE_ERR_EXT_CODE_PGPE_XSTOP_GPE2                               =   0x1081,
    PGPE_ERR_EXT_CODE_PGPE_GPE3_ERROR                               =   0x1082,
    PGPE_ERR_EXT_CODE_PGPE_PVREF_ERROR                              =   0x1083,
    //#define PGPE_BAD_DD_LEVEL                               0x1064

    //PSTATES
    PGPE_ERR_EXT_CODE_PGPE_INVALID_PMCR_OWNER                       =   0x1090,
    PGPE_ERR_EXT_CODE_PGPE_CLIP_UPDT_IN_SAFE_MODE                   =   0x1091,
    PGPE_ERR_EXT_CODE_PGPE_CLIP_UPDT_WHILE_PENDING                  =   0x1092,
    PGPE_ERR_EXT_CODE_PGPE_PSTATE_START_IN_SAFE_MODE                =   0x1093,
    PGPE_ERR_EXT_CODE_PGPE_PSTATE_STOP_IN_SAFE_MODE                 =   0x1094,
    PGPE_ERR_EXT_CODE_PGPE_PSTATE_STOP_IN_PSTATE_STOPPED            =   0x1095,
    PGPE_ERR_EXT_CODE_PGPE_PSTATE_START_STOP_WHILE_PENDING          =   0x1096,
    PGPE_ERR_EXT_CODE_PGPE_SET_PMCR_AND_PMCR_OWNER_NOT_OCC          =   0x1097,
    PGPE_ERR_EXT_CODE_PGPE_SET_PMCR_IN_PSTATE_STOPPED               =   0x1098,
    PGPE_ERR_EXT_CODE_PGPE_SET_PMCR_IN_SAFE_MODE                    =   0x1099,
    PGPE_ERR_EXT_CODE_PGPE_SET_PMCR_WHILE_PENDING                   =   0x109a,
    PGPE_ERR_EXT_CODE_PGPE_PCB_TYPE1_IN_PSTATE_STOPPED              =   0x109b,
    PGPE_ERR_EXT_CODE_PGPE_PCB_TYPE1_IN_PMCR_OWNER_OCC              =   0x109c,
    PGPE_ERR_EXT_CODE_PGPE_SAFE_MODE_IN_PSTATE_STOPPED              =   0x109d,

    //WOF
    PGPE_ERR_EXT_CODE_PGPE_WOF_NULL_VRT_PTR                         =   0x10b0,
    PGPE_ERR_EXT_CODE_PGPE_WOF_VRT_IN_SAFE_MODE                     =   0x10b1,
    PGPE_ERR_EXT_CODE_PGPE_WOF_VRT_IN_PSTATE_STOPPED                =   0x10b2,
    PGPE_ERR_EXT_CODE_PGPE_WOF_VRT_WHILE_PENDING                    =   0x10b3,
    PGPE_ERR_EXT_CODE_PGPE_WOF_CTRL_WHILE_PENDING                   =   0x10b4,
    PGPE_ERR_EXT_CODE_PGPE_WOF_CTRL_IN_SAFE_MODE                    =   0x10b5,
    PGPE_ERR_EXT_CODE_PGPE_WOF_CTRL_IN_PSTATE_STOPPED               =   0x10b6,
    PGPE_ERR_EXT_CODE_PGPE_WOF_CTRL_ENABLE_WHEN_ENABLED             =   0x10b7,
    PGPE_ERR_EXT_CODE_PGPE_WOF_CTRL_DISABLE_WHEN_WOF_DISABLED       =   0x10b8,
    PGPE_ERR_EXT_CODE_PGPE_WOF_CTRL_DISABLE_IN_PSTATE_STOPPED       =   0x10b9,
    PGPE_ERR_EXT_CODE_PGPE_WOF_CTRL_ENABLE_WITHOUT_VRT              =   0x10ba,

    //Error Injection
    PGPE_ERR_EXT_CODE_PGPE_ACTUATE_ERROR_INJECT_CRITICAL            =   0x10d0,
    PGPE_ERR_EXT_CODE_PGPE_ACTUATE_ERROR_INJECT_INFO                =   0x10d1,
    PGPE_ERR_EXT_CODE_PGPE_FIT_ERROR_INJECT                         =   0x10d2,
};


#endif
