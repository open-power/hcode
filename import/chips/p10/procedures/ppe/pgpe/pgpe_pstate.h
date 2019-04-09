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

enum WOV_STATUS
{
    WOV_STATUS_DISABLED             =   0xFFFFFFFF, //Not using zero
    WOV_STATUS_OVERVOLT_ENABLED     =   0x00000001, //bit field. Over/Undervolt both can be enabled
    WOV_STATUS_UNDERVOLT_ENABLED    =   0x00000002  //bit field. Over/Undervolt both can be enabled
};

typedef enum CLIP_TYPE
{
    CLIP_MAX        = 0x1,
    CLIP_MIN        = 0x2,
} clip_type_t;

typedef struct pgpe_pstate
{
    uint32_t pstate_status;
    uint32_t wof_status;
    uint32_t wov_status;
    uint32_t pmcr_owner;
    uint32_t ps_request[32]; // \\TBD need to use MAX_CORES
    uint32_t pstate_computed, pstate_target, pstate_next, pstate_curr;
    uint32_t clip_min, clip_max, wof_clip;
    uint32_t vdd_curr, vdd_next, vdd_curr_uplift, vdd_next_uplift, vdd_curr_ext, vdd_next_ext;
    uint32_t vcs_curr, vcs_next, vcs_curr_uplift, vcs_next_uplift, vcs_curr_ext, vcs_next_ext;
    uint32_t vdd_bias, vcs_bias, vdd_bias_tgt, vcs_bias_tgt;
    uint32_t vratio, vindex;
    uint32_t update_pgpe_beacon;
} pgpe_pstate_t;

extern pgpe_pstate_t G_pgpe_pstate;

//Functions
void pgpe_pstate_init();
void pgpe_pstate_actuate_step();
void pgpe_pstate_compute();
void pgpe_pstate_apply_clips();

//Macro accessor function
#define pgpe_pstate_get(x) G_pgpe_pstate.x
#define pgpe_pstate_get_ps_request(core) G_pgpe_pstate.ps_request[core]
#define pgpe_pstate_get_clip(type) G_pgpe_pstate.##type
#define pgpe_pstate_set(x,val) G_pgpe_pstate.x = val
#define pgpe_pstate_set_ps_request(core,val) G_pgpe_pstate.ps_request[core] = val
#define pgpe_pstate_set_clip(type,val) G_pgpe_pstate.##type = val
#define pgpe_pstate_is_pstate_enabled() (G_pgpe_pstate.pstate_status == PSTATE_STATUS_ENABLED)

//Interpolation
uint32_t pgpe_pstate_intp_vdd_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_vcs_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_vddup_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_vcsup_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_idd_ac_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_idd_dc_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_ics_ac_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_ics_dc_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_ps_from_vdd(uint32_t vdd);
uint32_t pgpe_pstate_intp_ps_from_vcs(uint32_t vcs);
uint32_t pgpe_pstate_intp_ps_from_idd(uint32_t idd);
uint32_t pgpe_pstate_freq_from_ps(uint32_t ps);
uint32_t pgpe_pstate_is_at_target();


#endif
