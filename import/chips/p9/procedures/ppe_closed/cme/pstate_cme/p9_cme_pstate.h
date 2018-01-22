/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/pstate_cme/p9_cme_pstate.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2018                                                    */
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

enum DPLL
{
    DPLL_MIN_VALUE = 60, //DPLL value @1000Mhz (1000/16.667)
    DPLL_MAX_VALUE = 300, //DPLL value @5000Mhz (5000/16.667)
};

enum DROOP_POLL
{
    DROOP_POLL_TIME_NS = 200000, //This defines the duration
    DROOP_POLL_COUNT = DROOP_POLL_TIME_NS / 32 //32ns per timebase tick
};

typedef struct
{
    uint32_t core0_resclk_idx;  //4
    uint32_t core1_resclk_idx;  //8
    uint32_t l2_ex0_resclk_idx; //12
    uint32_t l2_ex1_resclk_idx; //16
    uint32_t common_resclk_idx; //20
} cme_resclk_data_t;

typedef struct
{
    uint32_t vdm_threshold_idx[NUM_THRESHOLD_POINTS]; //4*4=16
} cme_vdm_data_t;

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
    VDM_OVERVOLT_IDX = 0,
    VDM_SMALL_IDX    = 1,
    VDM_LARGE_IDX    = 2,
    VDM_XTREME_IDX   = 3
} VDM_THRESHOLD_IDX;

typedef enum
{
    VDM_N_S_IDX = 0,
    VDM_N_L_IDX = 1,
    VDM_L_S_IDX = 2,
    VDM_S_N_IDX = 3
} VDM_JUMP_VALUE_IDX;

typedef enum
{
    // VDM_OVERVOLT_ADJUST
    // 4/8 rounding (8mV resolution so +/- 4 mV error)
    // yields 3/7 aggressive and 4/7 conservative to slightly favor not
    // increasing to Fmax as often
    VDM_OVERVOLT_ADJUST = (uint32_t)((1 << THRESH_SLOPE_FP_SHIFT) * ((float)4 / 8)),
    // VDM_SMALL_ADJUST
    // 5/8 rounding (8mV resolution so +5/-3 mV error)
    // yields 2/7 conservative and 5/7 aggressive to favor protecting against
    // performance loss
    VDM_SMALL_ADJUST    = (uint32_t)((1 << THRESH_SLOPE_FP_SHIFT) * ((float)5 / 8)),
    // VDM_LARGE_ADJUST and VDM_XTREME_ADJUST
    // 2/8 rounding (8mV resolution so +3/-5 mV error)
    // yields 2/7 aggressive and 5/7 conservative to favor protecting droop
    // guardband
    VDM_LARGE_ADJUST    = (uint32_t)((1 << THRESH_SLOPE_FP_SHIFT) * ((float)2 / 8)),
    VDM_XTREME_ADJUST   = (uint32_t)((1 << THRESH_SLOPE_FP_SHIFT) * ((float)2 / 8)),
    //VDM_VID_COMP_ADJUST
    // 2/4 rounding (4mV resolution so +/- 2mV error)
    // yields 1/3 (1mV) aggressive and 2/3 (1 or 2mV) conservative answer
    VDM_VID_COMP_ADJUST = (uint32_t)((1 << VID_SLOPE_FP_SHIFT_12) * ((float)2 / 4)),
    //VDM_JUMP_VALUE_ADJUST
    VDM_JUMP_VALUE_ADJUST = (uint32_t)((1 << THRESH_SLOPE_FP_SHIFT) * ((float)1 / 2))
} VDM_ROUNDING_ADJUST;

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

typedef enum
{
    INTERCME_DIRECT_IN0 = 5,
    INTERCME_DIRECT_IN1 = 6,
    INTERCME_DIRECT_IN2 = 7
} INTERCME_DIRECT_INTF;

typedef enum
{
    INTERCME_DIRECT_NOTIFY = 0,
    INTERCME_DIRECT_ACK    = 1
} INTERCME_DIRECT_TYPE;

enum DB0_TRIGGER
{
    PROCESS_DB0_TRIGGER_DB0_IRQ = 1,
    PROCESS_DB0_TRIGGER_DB3_IRQ = 2,
};

typedef struct
{
#if !defined(__IOTA__)
    PkSemaphore sem[2];
#endif
    uint32_t qmFlag;            //4
    uint32_t siblingCMEFlag;    //8
    uint32_t quadPstate;        //12
    uint32_t cmeMaskGoodCore;   //16
    uint32_t globalPstate;      //20
#ifdef USE_CME_RESCLK_FEATURE
    cme_resclk_data_t resclkData; //40
#endif//USE_CME_RESCLK_FEATURE
#ifdef USE_CME_VDM_FEATURE
    cme_vdm_data_t vdmData; //56
#endif//USE_CME_VDM_FEATURE
    uint32_t pmin;          //60
    uint32_t safeMode;      //64
    uint32_t pmax;          //68
    uint32_t pstatesSuspended; //72(0x48)
} CmePstateRecord;

typedef struct
{
    uint32_t seqNum;
} cme_pstate_pmcr_data_t;

void p9_cme_pstate_pmcr_thread(void*);
void p9_cme_pstate_db0_thread(void*);
void p9_cme_pstate_pmcr_handler(void*, PkIrqId);
void p9_cme_pstate_db0_handler(void*, PkIrqId);
void p9_cme_pstate_db3_handler(void*, PkIrqId);
void p9_cme_pstate_db3_handler_replay_db0();
void p9_cme_pstate_db3_handler_high_priority_pstate();
void p9_cme_pstate_intercme_in0_irq_handler(void*, PkIrqId);
void p9_cme_pstate_intercme_msg_handler(void* arg, PkIrqId irq);
void p9_cme_pstate_db0_safe_mode();
int send_pig_packet(uint64_t data, uint32_t coreMask);
uint32_t poll_dpll_stat();
void ippm_read(uint32_t addr, uint64_t* data);
void ippm_write(uint32_t addr, uint64_t data);
void intercme_msg_send(uint32_t msg, INTERCME_MSG_TYPE type);
void intercme_msg_recv(uint32_t* msg, INTERCME_MSG_TYPE type);
void intercme_direct(INTERCME_DIRECT_INTF intf, INTERCME_DIRECT_TYPE type, uint32_t retry_enable);
void p9_cme_core_stop_analog_control(uint32_t core_mask, ANALOG_CONTROL enable);
void p9_cme_pstate_pmsr_updt(uint32_t coreMask);
void p9_cme_pstate_pmsr_updt_in_progress(uint32_t coreMask);
void p9_cme_pstate_sibling_lock_and_intercme_protocol(uint32_t process_intercme_in0);
void p9_cme_pstate_process_db0_sibling();

#ifdef USE_CME_RESCLK_FEATURE
    uint32_t p9_cme_resclk_get_index(uint32_t pstate);
    void p9_cme_resclk_update(ANALOG_TARGET target, uint32_t next_idx, uint32_t curr_idx);
#endif//USE_CME_RESCLK_FEATURE
#ifdef USE_CME_VDM_FEATURE
uint32_t calc_vdm_jump_values(uint32_t pstate, uint32_t region);
uint32_t update_vdm_jump_values_in_dpll(uint32_t pstate, uint32_t region);
uint32_t p9_cme_vdm_update(uint32_t pstate);
uint32_t pstate_to_vid_compare(uint32_t pstate, uint32_t region);
uint32_t pstate_to_vpd_region(uint32_t pstate);
void calc_vdm_threshold_indices(uint32_t pstate, uint32_t region,
                                uint32_t indices[]);
#endif//USE_CME_VDM_FEATURE

#endif //_P9_CME_PSTATE_H_
