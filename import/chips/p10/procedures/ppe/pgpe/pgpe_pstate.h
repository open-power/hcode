/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_pstate.h $          */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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

#ifndef __PARSER_TOOL__

    #include "pgpe.h"

#else
    #define MAX_CORES  32
#endif

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

typedef enum CLIP_TYPE
{
    CLIP_MAX        = 0x1,
    CLIP_MIN        = 0x2,
} clip_type_t;

enum SAFE_MODE_FAULT_INDEX
{
    SAFE_MODE_FAULT_OCC     = 0,
    SAFE_MODE_FAULT_XGPE    = 1,
    SAFE_MODE_FAULT_QME     = 2,
    SAFE_MODE_FAULT_PVREF   = 3
};


enum PS_FROM_FREQ_ROUNDING
{
    PS_FROM_FREQ_NO_ROUNDING    = 0,
    PS_FROM_FREQ_ROUND_UP       = 1,
};

typedef struct pgpe_pstate
{
    uint32_t pstate_status;
    uint32_t wof_status;
    uint32_t pmcr_owner;
    uint32_t ps_request[MAX_QUADS];
    uint32_t sort_core_count;
    uint32_t pstate_computed, pstate_target, pstate_next, pstate_curr;
    uint32_t pstate_safe;
    pmsr_t   pmsr;
    uint32_t clip_min, clip_max, clip_wof, dcm_sibling_ps;
    uint32_t vdd_curr, vdd_next, vdd_curr_uplift, vdd_next_uplift, vdd_curr_ext, vdd_next_ext;
    uint32_t vcs_curr, vcs_next, vcs_curr_uplift, vcs_next_uplift, vcs_curr_ext, vcs_next_ext;
    int32_t vdd_wov_bias, vcs_wov_bias;
    uint32_t idd, ics;
    VRT_t*   vrt;
    uint32_t vratio_inst, vratio_vcs_inst, vratio_vdd_inst, vindex;
    uint32_t power_proxy_scale;
    uint32_t update_pgpe_beacon;
    uint32_t rvrm_volt;
} pgpe_pstate_t;


extern pgpe_pstate_t G_pgpe_pstate;

//Functions
void pgpe_pstate_init();
void* pgpe_pstate_data_addr();
void pgpe_pstate_actuate_step();
void pgpe_pstate_actuate_pstate(uint32_t pstate);
void pgpe_pstate_actuate_safe_voltage_vdd();
void pgpe_pstate_actuate_safe_voltage_vcs();
void pgpe_pstate_compute();
void pgpe_pstate_apply_clips();
void pgpe_pstate_compute_vratio(uint32_t pstate);
void pgpe_pstate_compute_vindex();
uint32_t pgpe_pstate_is_at_target();
uint32_t pgpe_pstate_is_clip_bounded();
uint32_t pgpe_pstate_is_wof_clip_bounded();
void pgpe_pstate_pmsr_updt();
void pgpe_pstate_pmsr_set_safe_mode();
void pgpe_pstate_pmsr_write();
void pgpe_pstate_set_safe_mode();
void pgpe_pstate_sample_currents();

//Macro accessor function
#define pgpe_pstate_get(x) G_pgpe_pstate.x
#define pgpe_pstate_get_ps_request(core) G_pgpe_pstate.ps_request[core]
#define pgpe_pstate_get_clip(type) G_pgpe_pstate.##type
#define pgpe_pstate_set(x,val) G_pgpe_pstate.x = val
#define pgpe_pstate_set_ps_request(core,val) G_pgpe_pstate.ps_request[core] = val
#define pgpe_pstate_set_clip(type,val) G_pgpe_pstate.##type = val
#define pgpe_pstate_set_vrt(ptr) G_pgpe_pstate.vrt = ptr
#define pgpe_pstate_is_pstate_enabled() (G_pgpe_pstate.pstate_status == PSTATE_STATUS_ENABLED)
#define pgpe_pstate_is_wof_enabled() (G_pgpe_pstate.wof_status == WOF_STATUS_ENABLED)
void pgpe_pstate_update_vdd_vcs_ps();

//Interpolation
uint32_t pgpe_pstate_get_ps_region(uint32_t ps, uint32_t vpt_pt_set);
uint32_t pgpe_pstate_get_ps_vpd_pt(uint32_t ps);
uint32_t pgpe_pstate_intp_vdd_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_vcs_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_vddup_from_ps(uint32_t ps, uint32_t vpd_pt_set, uint32_t idd_scale);
uint32_t pgpe_pstate_intp_vcsup_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_idd_ac_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_idd_dc_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_ics_ac_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_ics_dc_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_ps_from_vdd(uint32_t vdd);
uint32_t pgpe_pstate_intp_ps_from_vcs(uint32_t vcs);
uint32_t pgpe_pstate_intp_ps_from_idd(uint32_t idd);
uint32_t pgpe_pstate_freq_from_ps(uint32_t ps);
uint32_t pgpe_pstate_ps_from_freq(uint32_t freq_khz);
uint32_t pgpe_pstate_ps_from_freq_clipped(uint32_t freq_khz, uint32_t round_up);


#endif
