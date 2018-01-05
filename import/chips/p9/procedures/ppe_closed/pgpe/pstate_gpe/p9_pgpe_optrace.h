/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_optrace.h $ */
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
#ifndef _P9_PGPE_TRACE_HEADER_
#define _P9_PGPE_TRACE_HEADER_


enum PGPE_OP_TRACE_ENCODES
{
    START_STOP_IPC    =   0,
    START_STOP_FLAG   =   1,

    //Without Timestamps
    WOF_CALC_DONE     =  0x11,
    AUCTION_DONE      =  0x10,
    FIT_TB_RESYNC     =  0x02,

    //ACKs
    RESERVED_TS0      =  0xC0,
    RESERVED_TS1      =  0xC1,
    ACK_WOF_VFRT      =  0xC2,
    RESERVED_TS3      =  0xC3,
    ACK_WOF_CTRL      =  0xC4,
    ACTL_BROADCAST    =  0xC5,
    ACK_ACTL_DONE     =  0xC6,
    ACK_CLIP_UPDT     =  0xC7,
    ACK_START_STOP    =  0xC8,
    RESERVED_TS9      =  0xC9,
    ACK_CORES_ACTV    =  0xCA,
    ACK_QUAD_ACTV     =  0xCB,
    ACK_START_TRACE   =  0xCC,
    INV_TRC_REQ       =  0xCD,
    ACK_PM_SUSP       =  0xCE,
    ACK_SAFE_DONE     =  0xCF,

    //Process
    HALT_CONDITION    =  0x50,
    UNEXPECTED_ERROR  =  0x51,
    PRC_WOF_VFRT      =  0x62,
    ACTUATE_STEP_DONE =  0x73,
    PRC_WOF_CTRL      =  0x54,
    PRC_PCB_T4        =  0x55,
    PRC_PCB_T1        =  0x56,
    PRC_CLIP_UPDT     =  0x77,
    PRC_START_STOP    =  0x58,
    PRC_SET_PMCR      =  0x69,
    PRC_CORES_ACTV    =  0x5A,
    PRC_QUAD_ACTV     =  0x5B,
    FIT_TB_SYNC       =  0x5C,
    SEVERE_FAULT_DETECTED   =  0x5D,
    SYSTEM_XSTOP      =  0x4D,
    PRC_PM_SUSP       =  0x4E,
    PRC_SAFE_MODE     =  0x4F,

    //Debug Markers
    PROLONGED_DROOP_EVENT       = 0x9E,
    PROLONGED_DROOP_RESOLVED    = 0xAF
};

enum PGPE_OP_TRACE_SEVERE_FAULTS
{
    PGPE_OP_TRACE_PVREF_FAULT     =   0x10,
    PGPE_OP_TRACE_SGPE_FAULT      =   0x8,
    PGPE_OP_TRACE_CME_FAULT       =   0x4,
    PGPE_OP_TRACE_OCC_HB_FAULT    =   0x2,
    PGPE_OP_TRACE_SYS_XSTOP       =   0x1
};

enum PGPE_OP_TRACE_SAFE_MODE_REASON
{
    PGPE_OP_TRACE_OCCFLG_SUSP     =   0x2,
    PGPE_OP_TRACE_OCCFLG_SAFE     =   0x1
};

//Unexpected Errors
enum PGPE_OP_TRACE_UNEXPECTED_ERRORS
{
    PGPE_OP_WOF_VFRT_IN_SAFE_MODE               =  0x01,
    PGPE_OP_WOF_VFRT_IN_PM_SUSP                 =  0x02,
    PGPE_OP_WOF_VFRT_IN_PSTATE_STOPPED          =  0x03,
    PGPE_OP_WOF_VFRT_WHILE_PENDING              =  0x04,
    PGPE_OP_WOF_CTRL_IN_SAFE_MODE               =  0x08,
    PGPE_OP_WOF_CTRL_IN_PM_SUSP                 =  0x09,
    PGPE_OP_WOF_CTRL_IN_PSTATE_STOPPED          =  0x0a,
    PGPE_OP_WOF_CTRL_ENABLE_WHEN_ENABLED        =  0x0b,
    PGPE_OP_WOF_CTRL_DISABLE_WHEN_DISABLED      =  0x0c,
    PGPE_OP_WOF_CTRL_WHILE_PENDING              =  0x0d,
    PGPE_OP_CLIP_UPDT_IN_SAFE_MODE              =  0x10,
    PGPE_OP_CLIP_UPDT_IN_PM_SUSP                =  0x11,
    PGPE_OP_CLIP_UPDT_IN_WHILE_PENDING          =  0x12,
    PGPE_OP_PSTATE_START_IN_SAFE_MODE           =  0x20,
    PGPE_OP_PSTATE_START_IN_PM_SUSP             =  0x21,
    PGPE_OP_PSTATE_STOP_IN_SAFE_MODE            =  0x23,
    PGPE_OP_PSTATE_STOP_IN_PM_SUSP              =  0x24,
    PGPE_OP_PSTATE_STOP_IN_PSTATE_STOPPED       =  0x25,
    PGPE_OP_PSTATE_START_STOP_WHILE_PENDING     =  0x26,
    PGPE_OP_SET_PMCR_AND_PMCR_OWNER_NOT_OCC     =  0x30,
    PGPE_OP_SET_PMCR_IN_PSTATE_STOPPED          =  0x31,
    PGPE_OP_SET_PMCR_IN_SAFE_MODE               =  0x32,
    PGPE_OP_SET_PMCR_IN_PM_SUSP                 =  0x33,
    PGPE_OP_SET_PMCR_WHILE_PENDING              =  0x34,
    PGPE_OP_CORES_ACTIVE_IN_SAFE_MODE           =  0x40,
    PGPE_OP_CORES_ACTIVE_IN_PM_SUSP             =  0x41,
    PGPE_OP_CORES_ACTIVE_IN_PSTATE_STOPPED      =  0x42,
    PGPE_OP_CORES_ACTIVE_IN_WOF_DISABLED        =  0x43,
    PGPE_OP_CORES_ACTIVE_WHILE_PENDING          =  0x44,
    PGPE_OP_QUADS_ACTIVE_IN_SAFE_MODE           =  0x50,
    PGPE_OP_QUADS_ACTIVE_IN_PM_SUSP             =  0x51,
    PGPE_OP_QUADS_ACTIVE_WHILE_PENDING          =  0x52,
    PGPE_OP_PCB_TYPE1_IN_PSTATE_STOPPED         =  0x60,
    PGPE_OP_PCB_TYPE1_IN_PMCR_OWNER_OCC         =  0x61,
    PGPE_OP_UNEXPECTED_OCC_FIR                  =  0x80
};

//
//Functions called by threads
//
typedef struct
{
    uint32_t word[4];
} TraceData_t;

void p9_pgpe_optrace_init();
void p9_pgpe_optrace(uint32_t mark);
void p9_pgpe_optrace_memcopy();
#endif //
