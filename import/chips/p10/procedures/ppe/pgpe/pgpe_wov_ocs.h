/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_wov_ocs.h $         */
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
#ifndef __PGPE_WOV_OCS_H__
#define __PGPE_WOV_OCS_H__

#include "pgpe.h"



#define HYSTERESIS_TICKS 3

enum WOV_STATUS
{
    WOV_STATUS_DISABLED             =   0xFFFFFFFF, //Not using zero
    WOV_STATUS_OVERVOLT_ENABLED     =   0x00000001, //bit field. Over/Undervolt both can be enabled
    WOV_STATUS_UNDERVOLT_ENABLED    =   0x00000002  //bit field. Over/Undervolt both can be enabled
};

enum OCS_STATUS
{
    OCS_STATUS_DISABLED     = 0xFFFFFFFF,
    OCS_STATUS_ENABLED      = 0x1
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

typedef struct pgpe_wov_ocs
{
    uint32_t wov_status;
    uint32_t ocs_status;
    pgpe_wof_values_t* pwof_val;
    uint32_t wov_thr_loss_enable;
    uint32_t wov_freq_loss_enable;
    uint32_t light_loss;
    uint32_t heavy_loss;
    uint32_t curr_pct, tgt_pct;
    uint32_t curr_mv, target_mv;
    uint32_t hysteresis_cnt;
    uint32_t idd_current_thresh;
    uint32_t cnt_droop_ok;
    uint32_t cnt_droop_ok_oc;
    uint32_t cnt_droop_light;
    uint32_t cnt_droop_light_oc;
    uint32_t cnt_droop_heavy;
    uint32_t cnt_droop_heavy_oc;
} pgpe_wov_ocs_t;

extern pgpe_wov_ocs_t G_pgpe_wov_ocs;

void pgpe_wov_ocs_init();
void pgpe_wov_ocs_enable();
void pgpe_wov_ocs_disable();
void pgpe_wov_ocs_determine_perf_loss();
void pgpe_wov_ocs_update_dirty();
#define pgpe_wov_ocs_is_wov_overv_enabled() (G_pgpe_wov_ocs.wov_status & WOV_STATUS_OVERVOLT_ENABLED)
#define pgpe_wov_ocs_is_wov_underv_enabled() (G_pgpe_wov_ocs.wov_status & WOV_STATUS_UNDERVOLT_ENABLED)
#define pgpe_wov_ocs_is_ocs_enabled() (G_pgpe_wov_ocs.ocs_status == OCS_STATUS_ENABLED)

#endif
