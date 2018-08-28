/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme.h $                   */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2017,2019                                                    */
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
#ifndef _QME_H_
#define _QME_H_

#include "iota.h"
/*TBD
 * #include "pm_hcd_flags.h"


extern uint32_t G_QME_LCL_EINR;
extern uint32_t G_QME_LCL_EISR;
extern uint32_t G_QME_LCL_EISR_CLR;
extern uint32_t G_QME_LCL_EISR_OR;
extern uint32_t G_QME_LCL_EIMR_CLR;
extern uint32_t G_QME_LCL_EIMR_OR;
extern uint32_t G_QME_LCL_EIPR_CLR;
extern uint32_t G_QME_LCL_EIPR_OR;
extern uint32_t G_QME_LCL_EITR_OR;
extern uint32_t G_QME_LCL_FLAGS;
extern uint32_t G_QME_LCL_FLAGS_CLR;
extern uint32_t G_QME_LCL_FLAGS_OR;
extern uint32_t G_QME_LCL_SRTCH0;
extern uint32_t G_QME_LCL_TSEL;
extern uint32_t G_QME_LCL_TBR;
extern uint32_t G_QME_LCL_DBG;
extern uint32_t G_QME_LCL_LMCR;
extern uint32_t G_QME_LCL_LMCR_CLR;
extern uint32_t G_QME_LCL_LMCR_OR;
extern uint32_t G_QME_LCL_ICSR;
extern uint32_t G_QME_LCL_ICRR;
extern uint32_t G_QME_LCL_ICCR_CLR;
extern uint32_t G_QME_LCL_ICCR_OR;
extern uint32_t G_QME_LCL_SISR;
extern uint32_t G_QME_LCL_SICR_CLR;
extern uint32_t G_QME_LCL_SICR_OR;
extern uint32_t G_QME_LCL_PSCRS00;
extern uint32_t G_QME_LCL_PSCRS10;
extern uint32_t G_QME_LCL_PSCRS20;
extern uint32_t G_QME_LCL_PSCRS30;
*/


typedef struct
{
    uint32_t    scoreboard_version;
    uint32_t    scoreboard_size;
    uint32_t    proc_dd_level;
    uint32_t    git_head;

    uint32_t    stop_level_enabled;
    uint32_t    fused_core_enabled;
    uint32_t    wof_status;
    uint32_t    safe_mode_status;

    uint32_t    pmcr_fwd_enabled;
    uint32_t    throttle_enabled;
    uint32_t    mma_enabled;
    uint32_t    fit_timer_enabled;

    uint32_t    c_configured;
    uint32_t    c_stopped;
    uint32_t    c_targeting;
    uint32_t    c_targeted;

    uint32_t    f_executing;
    uint32_t    f_to_return;
    uint32_t    uih_stack;
    uint32_t    uih_phantom;

    uint32_t    c_entering;
    uint32_t    c_exiting;
    uint32_t    c_pm_state_active_req;
    uint32_t    c_regular_wakeup_req;

    uint32_t    c_pm_state[4];

    uint32_t    c_special_wakeup_req;
    uint32_t    c_special_wakeup_done;
    uint32_t    c_special_wakeup_source;
    uint32_t    c_special_wakeup_error;

    uint32_t    c_stop2_req;
    uint32_t    c_stop2_done;
    uint32_t    c_stop5_req;
    uint32_t    c_stop5_done;

    uint32_t    c_catching_stop2;
    uint32_t    c_aborting_stop5;
    uint32_t    c_stop11_req;
    uint32_t    c_stop11_done;

    uint32_t    c_checkstop;
    uint32_t    c_clock_failed;
    uint32_t    c_resclk_failed;
    uint32_t    c_vdm_failed;

    uint32_t    c_pfet_failed;
    uint32_t    c_scan_failed;
    uint32_t    c_self_failed;
    uint32_t    cache_errors;

    uint32_t    qme_debugger;
    uint32_t    pgpe_hb_loss;
    uint32_t    pv_ref_failed;
    uint32_t    quad_checktop;

    uint32_t    c_block_wake_req;
    uint32_t    c_block_wake_done;
    uint32_t    c_block_stop_req;
    uint32_t    c_block_stop_done;

    uint32_t    c_pmcr_forward_req;
    uint32_t    c_pmcr_forward_done;
    uint32_t    c_throttle_req;
    uint32_t    c_throttle_done;

    uint32_t    c_mma_poweron_req;
    uint32_t    c_mma_poweron_done;
    uint32_t    reserved_3;
    uint32_t    reserved_4;

} QmeRecord __attribute__ ((aligned (8)));


//void qme_init();
//void qme_eval_eimr_override();

//void qme_stop_entry();
//void qme_stop_exit();

// QME Interrupt Events Handling
void qme_high_priority_event();
void qme_doorbell2_event();
void qme_doorbell1_event();
void qme_special_wakeup_event();
void qme_regular_wakeup_event();
void qme_pmcr_update_event();
void qme_doorbell0_event();
void qme_mma_active_event();
void qme_pm_state_active_event();
void qme_low_priority_event();

// QME Timer Handlers
void qme_fit_handler();
void qme_dec_handler();

#endif //_P9_QME_H_
