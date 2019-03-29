/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_pstate.h $          */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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
#ifndef __PGPE_PSTATE_H__
#define __PGPE_PSTATE_H__

#include "pgpe.h"

//Types
enum PSTATE_STATUS
{
    PSTATE_STATUS_DISABLED  =   0xFFFFFFFF, //Not using zero
    PSTATE_STATUS_ENABLED   =   0x00000001
};

enum WOF_STATUS
{
    WOF_STATUS_DISABLED     =   0xFFFFFFFF, //Not using zero
    WOF_STATUS_ENABLED      =   0x00000001
};

enum WOF_STATUS
{
    WOF_STATUS_DISABLED             =   0xFFFFFFFF, //Not using zero
    WOF_STATUS_OVERVOLT_ENABLED     =   0x00000001, //bit field. Over/Undervolt both can be enabled
    WOF_STATUS_UNDERVOLT_ENABLED    =   0x00000002  //bit field. Over/Undervolt both can be enabled
};

typedef enum CLIP_TYPE
{
    CLIP_MAX        = 0x1;
    CLIP_MAX        = 0x2;
} clip_type_t;

typedef struct pgpe_pstate
{
    uint32_t pstate_status;
    uint32_t wof_status;
    uint32_t wov_status;
    uint32_t pmcr_owner
    uint32_t ps_request[32]; // \\TBD need to use MAX_CORES
    uint32_t pstate_computed, pstate_target, pstate_next, pstate_curr;
    uint32_t clip_min, clip_max, wof_clip;
    uint32_t vdd_curr, vdd_next, vcs_curr, vcs_next;
    uint32_t vdd_bias, vcs_bias, vdd_bias_tgt, vcs_bias_tgt;
    uint32_t vratio, vindex;
} pgpe_pstate_t;

//Functions
void pgpe_pstate_actuate_step();
//Interpolation
uint32_t pgpe_pstate_intp_vdd_from_ps(Pstate ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_vcs_from_ps(Pstate ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_idd_from_ps(Pstate ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_ps_from_ext_vdd(uint32_t vdd);
uint32_t pgpe_pstate_intp_ps_from_ext_vcs(uint32_t vcs);
uint32_t pgpe_pstate_intp_ps_from_ext_idd(uint32_t idd);
uint32_t pgpe_pstate_freq_from_ps(uint32_t ps);
