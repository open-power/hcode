/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe.h $                 */
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
#include "occ_hcode_errldefs.h"
#include "errldefs.h"
#include "pstate_pgpe_occ_api.h"


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
    uint32_t vratio_accum;
    uint32_t vratio_inst;
    uint32_t override_vret;
} iddq_state_t;



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

#ifdef __cplusplus
}
#endif

#endif //
