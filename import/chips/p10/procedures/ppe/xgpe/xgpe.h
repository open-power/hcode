/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe.h $                 */
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
#ifndef __XGPE_H__
#define __XGPE_H__


#include "iota.h"
#include "iota_trace.h"
#include "ipc_api.h"
#include "ipc_async_cmd.h"
#include "p10_pm_hcd_flags.h"
#include "p10_hcd_common.H"
#include "gpehw_common.h"
#include "ppehw_common.h"
#include "ppe42_scom.h"
#include "xgpe_header.h"
#include "p10_hcode_image_defines.H"
#include "errlutil.h"
#include "pstate_pgpe_occ_api.h"
#include "xgpe_service_codes.h"


#define EQ_CORE_MASK   0xF
#define PCB_TYPE_F_MASK 0xF0000000

#define IS_QUAD_CONFIG(ccsr, num)     (ccsr & (EQ_CORE_MASK << SHIFT32(num-1)))
#define MASK_CCSR(ccsr,num)           (ccsr  & ~(EQ_CORE_MASK << SHIFT32(num-1)))
#define BLOCK_WAKEUP_MASK  0x33333333
#define CORE_MASK(core) \
    (0x80000000 >> core)

#define MAX_QME_ERRORLOG_ENTRIES 16

enum PCB_TYPE_F_MSG
{
    UNSUSPEND_STOP_ENTRY      = 0x01,
    UNSUSPEND_STOP_EXIT       = 0x02,
    UNSUSPEND_STOP_ENTRY_EXIT = 0x03,
    SUSPEND_STOP_ENTRY        = 0x05,
    SUSPEND_STOP_EXIT         = 0x06,
    SUSPEND_STOP_ENTRY_EXIT   = 0x07,
};

enum PCB_TYPE_F_TASK
{
    PM_SUSPEND_NONE     = 0,
    PM_SUSPEND_COMPLETE = 1,
    PM_CCI_COMPLETE     = 2,
};
typedef struct iddq_state
{
    iddq_activity_t* p_act_val; //OCC Shared SRAM Location
    pgpe_wof_values_t* p_wof_val; //OCC Shared SRAM Location
    iddq_activity_t curr_cnts;
    uint32_t tick_cnt;
    uint32_t vratio_vdd_accum;
    uint32_t vratio_vcs_accum;
    uint32_t vratio_vdd_inst;
    uint32_t vratio_vcs_inst;
    uint32_t override_vret;
} iddq_state_t;


enum SCOM_THROTTLE_VALUES
{
    FDIR_INJECT_ENABLE   = 0x80000000,
    FDIR_THROTTLE_DATA   = 0xFFFFF000,
    FDIR_THROTTLE_LEGACY = 0x10000000,
    FDIR_INJECT_RESPONSE = 0x00000C00,
};
/// ----------------------------------------------
/// @brief Starting point to initialize some of the
//  flg register and invoke other sub functions
/// @return none
/// ---------------------------------------------
void xgpe_init();

#ifdef __cplusplus
extern "C" {
#endif
/// ----------------------------------------------
/// @brief Fit handler which gets trigggered for every Xus
/// @return none
/// ---------------------------------------------
void xgpe_irq_fit_handler();

/// ----------------------------------------------
/// @brief Handle PM suspend request during mpipl
/// @return none
/// ---------------------------------------------
void handle_pm_suspend();

/// ----------------------------------------------
/// @brief Generates WOF Iddq values in OCC Shared SRAM
/// @return none
/// ---------------------------------------------
void handle_wof_iddq_values();

/// ----------------------------------------------
/// @brief Sends DB1 message to QME
/// @param[in] i_db1_data DB1 msg data
/// @return none
/// ---------------------------------------------
void xgpe_send_db1_to_qme(uint64_t i_db1_data);

/// ----------------------------------------------
/// @brief Core throttle support
/// @return none
/// ---------------------------------------------
void handle_core_throttle();

/// ----------------------------------------------
/// @brief Compute io static power
/// @return none
/// ---------------------------------------------
void compute_io_power();


/// @brief Enable/disable core throttle operation
/// @param[in] i_throttle_state  state of throttle
/// @param[in] i_inject_response response data
/// @return none
/// ---------------------------------------------
void xgpe_write_core_throttle_data(uint32_t i_throttle_state,
                                   uint32_t i_inject_response);

//
//  xgpe_pgpe_beacon_stop_req
//
//  IPC function called to PGPE for beacon stop
//
//
void xgpe_pgpe_beacon_stop_req();

#ifdef __cplusplus
}
#endif

#endif //
