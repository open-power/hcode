/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/pstate_cme/p9_cme_pstate.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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
//-----------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2014
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
//-----------------------------------------------------------------------------

/// \file p9_cme_pstate.h
/// \brief Shared and global definitions for pstate H codes.
/// \owner  Rahul Batra Email: rbatra@us.ibm.com
///
#ifndef _P9_CME_PSTATE_H_
#define _P9_CME_PSTATE_H_

#include "pk.h"
#include "pstate_pgpe_cme_api.h"
#include "gpehw_common.h"
#include "cmehw_common.h"
#include "p9_hcode_image_defines.H"
#include "p9_pstates_cmeqm.h"
#include "p9_cme.h"

enum  PMCR_CONTROL
{
    PMCR0_DISABLE  =    0x1,
    PMCR1_DISABLE  =    0x2,
    PMCR0_ENABLE   =    0x4,
    PMCR1_ENABLE   =    0x8
};

typedef struct
{
    uint32_t core0_resclk_idx;
    uint32_t core1_resclk_idx;
    uint32_t l2_ex0_resclk_idx;
    uint32_t l2_ex1_resclk_idx;
    uint32_t common_resclk_idx;
} cme_resclk_data_t;

typedef enum
{
    ANALOG_CORE0  = (uint32_t)CME_MASK_C0,
    ANALOG_CORE1  = (uint32_t)CME_MASK_C1,
    ANALOG_BOTHC  = (uint32_t)CME_MASK_BC,
    ANALOG_L2EX0  = (uint32_t)0x00000100,
    ANALOG_L2EX1  = (uint32_t)0x00000200,
    ANALOG_BOTHL  = (uint32_t)0x00000300,
    ANALOG_COMMON = (uint32_t)0x00001000
} ANALOG_TARGET;

typedef enum
{
    ANALOG_DISABLE = (uint32_t)0,
    ANALOG_ENABLE  = (uint32_t)1
} ANALOG_CONTROL;

typedef enum
{
    ANALOG_PSTATE_RESCLK_OFF = (uint32_t)255
} ANALOG_CONSTANTS;

typedef enum
{
    IMT_INIT_PSTATE  = (uint32_t)0x00000001,
    IMT_LOCK_SIBLING = (uint32_t)0x00000002,
    IMT_SYNC_SIBLING = (uint32_t)0x00000003
} INTERCME_MSG_TYPE;

typedef struct
{
    PkSemaphore sem[2];
    uint32_t qmFlag;
    uint32_t siblingCMEFlag;
    uint32_t quadPstate;
    uint32_t globalPstate;
    uint32_t cmeMaskGoodCore;
    uint32_t pmcrSeenErr;
    cme_resclk_data_t resclkData;
} CmePstateRecord;

typedef struct
{
    uint32_t seqNum;
} cme_pstate_pmcr_data_t;


void p9_cme_pstate_pmcr_thread(void*);
void p9_cme_pstate_db_thread(void*);
void p9_cme_pstate_pmcr_handler(void*, PkIrqId);
void p9_cme_pstate_db_handler(void*, PkIrqId);
void p9_cme_pstate_intercme_in0_handler(void*, PkIrqId);
void p9_cme_pstate_intercme_msg_handler(void* arg, PkIrqId irq);
int send_pig_packet(uint64_t data, uint32_t coreMask);
void ippm_read(uint32_t addr, uint64_t* data);
void ippm_write(uint32_t addr, uint64_t data);
void intercme_msg_send(uint32_t msg, INTERCME_MSG_TYPE type);
void intercme_msg_recv(uint32_t* msg, INTERCME_MSG_TYPE type);
void p9_cme_resclk_get_index(uint32_t pstate, uint32_t* resclk_index);
void p9_cme_analog_control(uint32_t core_mask, ANALOG_CONTROL enable);
void p9_cme_resclk_update(ANALOG_TARGET target, uint32_t pstate, uint32_t curr_idx);
void p9_cme_pstate_pmsr_updt(uint32_t coreMask);


#endif //_P9_CME_PSTATE_H_
