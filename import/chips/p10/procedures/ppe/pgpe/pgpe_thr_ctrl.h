/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_thr_ctrl.h $        */
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
#ifndef __PGPE_THR_CTRL_H__
#define __PGPE_THR_CTRL_H__

#ifndef __PARSER_TOOL__
    #include "pgpe.h"
#endif

enum PGPE_THR_CTRL_STATUS
{
    PGPE_THR_CTRL_DISABLED    = 0xFFFFFFFF,
    PGPE_THR_CTRL_ENABLED     = 0x00000002,
};

typedef struct pgpe_thr_ctrl
{
    uint32_t status;
    uint32_t ceff_ovr;
    uint32_t curr_ceff_ovr_idx;
    uint32_t mode;
} pgpe_thr_ctrl_t;

void pgpe_thr_ctrl_init();
void* pgpe_thr_ctrl_data_addr();
void pgpe_thr_ctrl_update(uint32_t pstate);
void pgpe_thr_ctrl_set_ceff_ovr_idx(uint32_t idx);
void pgpe_thr_ctrl_write_wcor();

extern pgpe_thr_ctrl_t G_pgpe_thr_ctrl;

#define pgpe_thr_ctrl_get_thr_idx() (G_pgpe_thr_ctrl.curr_ceff_ovr_idx)
#define pgpe_thr_ctrl_is_enabled() (G_pgpe_thr_ctrl.status == PGPE_THR_CTRL_ENABLED)

#endif
