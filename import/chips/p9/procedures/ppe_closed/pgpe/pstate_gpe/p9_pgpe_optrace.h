/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_optrace.h $ */
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
#ifndef _P9_PGPE_TRACE_HEADER_
#define _P9_PGPE_TRACE_HEADER_

#define PGPE_OPTRACE_DISABLE 0x00000080
#define START_STOP_IPC 0
#define START_STOP_FLAG 1

#define WOF_CALC_DONE     0x11
#define AUCTION_DONE      0x10
#define ACTUATE_STEP_DONE 0x73

#define ACK_WOF_VFRT      0xC2
#define ACK_WOF_CTRL      0xC4
#define ACTL_BROADCAST    0xC5
#define ACK_ACTL_DONE     0xC6
#define ACK_CLIP_UPDT     0xC7
#define ACK_START_STOP    0xC8
#define RESERVED_TS_0     0xC9
#define ACK_CORES_ACTV    0xCA
#define ACK_QUAD_ACTV     0xCB
#define ACK_START_TRACE   0xCC
#define INV_TRC_REQ       0xCD
#define ACK_PM_SUSP       0xCE
#define ACK_SAFE_DONE     0xCF

#define PRC_WOF_VFRT      0x62
#define PRC_WOF_CTRL      0x54
#define PRC_PCB_T4        0x55
#define PRC_PCB_T1        0x56
#define PRC_CLIP_UPDT     0x77
#define PRC_START_STOP    0x58
#define PRC_SET_PMCR      0x69
#define PRC_CORES_ACTV    0x5A
#define PRC_QUAD_ACTV     0x5B
#define FIT_TB_SYNC       0x5C
#define SGPE_SUSP_DONE    0x4D
#define PRC_PM_SUSP       0x4E
#define PRC_SAFE_MODE     0x5F


//
//Functions called by threads
//
typedef struct
{
    uint32_t word[4];
} TraceData_t;

void p9_pgpe_optrace_init();
void p9_pgpe_optrace(uint32_t mark);
#endif //
