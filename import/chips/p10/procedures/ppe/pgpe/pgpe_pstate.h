/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_pstate.h $          */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2023                                                    */
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

#define PMCR_PMSR_VERSION_3 3

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

typedef struct pgpe_profile
{
    uint32_t cnt;
    uint32_t total_time;
    uint32_t max_time;
    uint32_t min_time;
} pgpe_profile_t;

typedef struct pgpe_pstate
{
    uint32_t pstate_status;         //0
    uint32_t wof_status;            //1
    uint32_t pmcr_owner;            //2
    uint32_t update_pgpe_beacon;    //3
    uint32_t sort_core_count;       //4
    uint32_t power_proxy_scale;     //5
    uint32_t rvrm_volt;             //6
    uint32_t pstate_safe;           //7
    uint32_t ps_request[MAX_QUADS]; //15
    uint32_t pstate_computed, pstate_target, pstate_next, pstate_curr;  //16-19
    uint32_t clip_min, clip_max, clip_wof, dcm_sibling_ps;              //20-23
    uint32_t vdd_curr, vdd_next, vdd_curr_uplift, vdd_next_uplift, vdd_curr_ext, vdd_next_ext; //24-29
    uint32_t vcs_curr, vcs_next, vcs_curr_uplift, vcs_next_uplift, vcs_curr_ext, vcs_next_ext; //30-35
    int32_t vdd_wov_bias, vcs_wov_bias; //36-37
    uint32_t idd, ics;                  //38-39
    pmsr_t   pmsr;                      //40-47
    VRT_t*   vrt;                       //48-55
    uint32_t stopped_ac_vdd_64ths, stopped_ac_vcs_64ths;            //56-57
    uint32_t active_core_ratio_64th, vratio_index_format,           //58-59
             vratio_vdd_snapup_64th, vratio_vcs_snapup_64th,        //60-61
             vratio_vdd_rounded_64th, vratio_vcs_rounded_64th,      //62-63
             vratio_vdd_loadline_64th, vratio_vdd_ceff_inst_64th,   //64-65
             vratio_vcs_loadline_64th, vratio_vcs_ceff_ins_64th,    //66-67
             vratio_vdd_rounded, vratio_vcs_rounded;                //68-69
    uint32_t vindex;                                                //70
    uint32_t pstate_ceiling;        //71
    uint32_t eco_core_count;        //72
    uint32_t voltage_step_trace_cnt;//73
    uint32_t vratio_core_count;     //74
    uint32_t throttle_pmcr, throttle_clip, throttle_vrt;
    uint32_t throttle_target, throttle_curr, throttle_pending;
    pgpe_profile_t fit_prof; //78
    pgpe_profile_t step_prof; //82
    pgpe_profile_t dds_prof_cmp; //86
    pgpe_profile_t dds_prof_pre; //90
    pgpe_profile_t dds_prof_post; //94
    pgpe_profile_t resclk_prof; //98
    uint32_t marker; //99
    uint32_t start_ttsr_cnt;  //100
    uint64_t start_ttsr;   //101
    uint32_t spare_core_count; //102
    uint32_t active_core_accum_64th;
    uint32_t vratio_vdd_accum_64th;
    uint32_t clock_off_accum_64th;
    uint32_t corecache_off_accum_64th;
} pgpe_pstate_t;


extern pgpe_pstate_t G_pgpe_pstate;

//Functions
void pgpe_pstate_init();
void* pgpe_pstate_data_addr();
void pgpe_pstate_actuate_step();
void pgpe_pstate_actuate_voltage_step();
void pgpe_pstate_actuate_safe_mode();
void pgpe_pstate_actuate_throttle();
void pgpe_pstate_compute();
void pgpe_pstate_apply_clips();
void pgpe_pstate_throttle_compute();
void pgpe_pstate_set_throttle_pmcr();
void pgpe_pstate_set_throttle_clip();
void pgpe_pstate_set_throttle_vrt();
void pgpe_pstate_compute_vratio(uint32_t pstate);
void pgpe_pstate_compute_vindex();
uint32_t pgpe_pstate_is_at_target();
uint32_t pgpe_pstate_is_throttle_pending();
uint32_t pgpe_pstate_is_clip_bounded();
uint32_t pgpe_pstate_is_wof_clip_bounded();
void pgpe_pstate_pmsr_updt();
void pgpe_pstate_pmsr_set_safe_mode();
void pgpe_pstate_pmsr_write();
void pgpe_pstate_set_safe_mode();
void pgpe_pstate_profile(pgpe_profile_t* p, uint32_t time);

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
uint32_t pgpe_pstate_get_ps_closest_vpd_pt(uint32_t ps);
uint32_t pgpe_pstate_intp_vdd_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_vcs_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_vddup_from_ps(uint32_t ps, uint32_t vpd_pt_set, uint32_t vratio_vdd);
uint32_t pgpe_pstate_intp_vcsup_from_ps(uint32_t ps, uint32_t vpd_pt_set, uint32_t vratio_vcs);
uint32_t pgpe_pstate_intp_idd_ac_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_idd_dc_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_ics_ac_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_ics_dc_from_ps(uint32_t ps, uint32_t vpd_pt_set);
uint32_t pgpe_pstate_intp_ps_from_vdd(uint32_t vdd);
uint32_t pgpe_pstate_intp_ps_from_vcs(uint32_t vcs); //unused
uint32_t pgpe_pstate_intp_ps_from_idd(uint32_t idd); //unused
uint32_t pgpe_pstate_freq_from_ps(uint32_t ps);
uint32_t pgpe_pstate_ps_from_freq(uint32_t freq_khz);
uint32_t pgpe_pstate_ps_from_freq_clipped(uint32_t freq_khz, uint32_t round_up);


#endif
