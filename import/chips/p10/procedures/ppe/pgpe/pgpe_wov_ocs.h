/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_wov_ocs.h $         */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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
#ifndef __PGPE_WOV_OCS_H__
#define __PGPE_WOV_OCS_H__

#ifndef __PARSER_TOOL__
    #include "pgpe.h"
#else
    #include "pstate_pgpe_occ_api.h"
#endif




#define HYSTERESIS_TICKS 3

enum WOV_STATUS
{
    WOV_STATUS_DISABLED    =   0xFFFFFFFF, //Not using zero
    WOV_STATUS_ENABLED     =   0x00000001,
};

enum OCS_STATUS
{
    OCS_STATUS_DISABLED     = 0xFFFFFFFF,
    OCS_STATUS_ENABLED      = 0x1
};

enum OCS_THRESH
{
    OCS_UNDER_THRESH   = 0x0,
    OCS_OVER_THRESH    = 0x1
};

enum DROOP_LEVEL
{
    DROOP_LVL_HEAVY  =       0x1,
    DROOP_LVL_LIGHT  =       0x2,
    DROOP_LVL_OK     =       0x3
};

enum WOV_THR_LOSS_STATUS
{
    WOV_THR_LOSS_STATUS_DISABLED    = 0xFFFFFFFF,
    WOV_THR_LOSS_STATUS_ENABLED     = 0x00000001
};

enum WOV_FREQ_LOSS_STATUS
{
    WOV_FREQ_LOSS_STATUS_DISABLED    = 0xFFFFFFFF,
    WOV_FREQ_LOSS_STATUS_ENABLED     = 0x00000001
};

enum OCS_DIRTY_SAMPLE_TYPE
{
    OCS_DIRTY_SAMPLE_TYPE_00 = 0x0, //Overcurrent Sensor Dirty=0,Type=0
    OCS_DIRTY_SAMPLE_TYPE_10 = 0x2, //Overcurrent Sensor Dirty=1,Type=0
    OCS_DIRTY_SAMPLE_TYPE_11 = 0x3, //Overcurrent Sensor Dirty=1,Type=1
};

typedef struct pgpe_wov_ocs
{
    uint32_t wov_uv_status;
    uint32_t wov_ov_status;
    uint32_t ocs_status;
    pgpe_wof_values_t* pwof_val;
    uint32_t wov_thr_loss_enable;
    uint32_t wov_freq_loss_enable;
    uint32_t light_loss;
    uint32_t heavy_loss;
    uint32_t droop_level;
    uint32_t dirty;
    uint32_t hysteresis_cnt;
    int32_t curr_pct, tgt_pct;
    uint32_t idd_current_thresh;
    uint32_t overcurrent_flag;
    uint32_t cnt_droop_ok;
    uint32_t cnt_droop_ok_oc;
    uint32_t cnt_droop_light;
    uint32_t cnt_droop_light_oc;
    uint32_t cnt_droop_heavy;
    uint32_t cnt_droop_heavy_oc;
    uint32_t cnt_wov_total_ticks;
    uint32_t cnt_wov_uv_ticks;
    uint32_t cnt_wov_ov_ticks;
    uint64_t eco_ttsr_mask;
} pgpe_wov_ocs_t;

extern pgpe_wov_ocs_t G_pgpe_wov_ocs;

void pgpe_wov_ocs_init();
void* pgpe_wov_ocs_data_addr();
void pgpe_wov_ocs_enable();
void pgpe_wov_ocs_disable();
void pgpe_wov_ocs_determine_perf_loss();
void pgpe_wov_ocs_update_dirty();
void pgpe_wov_ocs_step_curr_pct();
#define pgpe_wov_ocs_get_wov_tgt_pct() G_pgpe_wov_ocs.tgt_pct
#define pgpe_wov_ocs_clear_wov_tgt_pct() G_pgpe_wov_ocs.tgt_pct = 0
#define pgpe_wov_ocs_get_wov_curr_pct() G_pgpe_wov_ocs.curr_pct
#define pgpe_wov_ocs_set_wov_curr_pct(val) G_pgpe_wov_ocs.curr_pct = val
#define pgpe_wov_is_wov_at_target() (G_pgpe_wov_ocs.tgt_pct == G_pgpe_wov_ocs.curr_pct)
#define pgpe_wov_ocs_is_wov_overv_enabled() (G_pgpe_wov_ocs.wov_ov_status == WOV_STATUS_ENABLED)
#define pgpe_wov_ocs_is_wov_underv_enabled() (G_pgpe_wov_ocs.wov_uv_status == WOV_STATUS_ENABLED)
#define pgpe_wov_ocs_is_ocs_enabled() (G_pgpe_wov_ocs.ocs_status == OCS_STATUS_ENABLED)
#define pgpe_wov_ocs_is_overcurrent() (G_pgpe_wov_ocs.overcurrent_flag == OCS_OVER_THRESH)
#endif
