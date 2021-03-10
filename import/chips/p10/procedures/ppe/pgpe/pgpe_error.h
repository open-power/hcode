/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_error.h $           */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2021                                                         */
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
#ifndef __PGPE_ERROR_H__
#define __PGPE_ERROR_H__


#include "pgpe.h"

enum PGPE_ERROR_STATUS
{
    PGPE_ERROR_STATUS_NOT_SEEN          =    0x0,
    PGPE_ERROR_STATUS_CRITICAL_SEEN     =    0x1,
    PGPE_ERROR_STATUS_INFO_SEEN         =    0x2,
    PGPE_ERROR_STATUS_BOTH_SEEN         =    0x3,
};

typedef struct pgpe_error_code
{
    uint16_t    mod_id;
    uint8_t     reason_code;
    uint8_t     pad;
    uint16_t    ext_reason_code;
    uint16_t    safe_mode_flag;
} pgpe_error_code_t;

typedef struct pgpe_error
{
    uint32_t ppe_context; //Use PPE Context Type
    uint32_t current_status;
    uint32_t critical_cnt, info_cnt;
    uint32_t first_info_err_idx, last_info_err_idx;
    uint32_t first_crit_err_idx, last_crit_err_idx;
} pgpe_error_t;

void pgpe_error_init();
void pgpe_error_set_jump();
void pgpe_error_long_jump();
void pgpe_error_critical_log(uint32_t pgpe_err_id);
void pgpe_error_info_log(uint32_t pgpe_err_id);
void pgpe_error_notify_critical(uint32_t pgpe_irr_id);
void pgpe_error_notify_info(uint32_t pgpe_irr_id);
void pgpe_error_stop_beacon();
void pgpe_error_mask_irqs();
void pgpe_error_ack_pending();
void pgpe_error_loop();
void pgpe_error_handle_fault(uint32_t pgpe_irr_id);
#endif
