/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_thr_ctrl.h $        */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2022                                                    */
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
#define PGPE_THR_CTRL_CEFF_ERR_SAMPLE_SIZE 4
#define PGPE_THR_CTRL_CEFF_ERR_SAMPLE_SIZE_SHIFT 1

typedef struct pgpe_thr_ctrl
{
    uint32_t status;
    int32_t ceff_err_sum;
    uint32_t ceff_err_idx;
    uint32_t ceff_err_prev_idx;
    int32_t ceff_err_avg;
    int32_t curr_ftx, next_ftx;
    int32_t ceff_err_array[PGPE_THR_CTRL_CEFF_ERR_SAMPLE_SIZE];
} pgpe_thr_ctrl_t __attribute__((aligned (8)));

void pgpe_thr_ctrl_init();
void* pgpe_thr_ctrl_data_addr();
void pgpe_thr_ctrl_update(uint32_t target_throttle);
void pgpe_thr_ctrl_write_wcor();
void pgpe_thr_ctr_clear_ceff_err_array();

extern pgpe_thr_ctrl_t G_pgpe_thr_ctrl;

#define pgpe_thr_ctrl_is_enabled() (G_pgpe_thr_ctrl.status == PGPE_THR_CTRL_ENABLED)
#define pgpe_thr_ctrl_set_curr_ftx(ftx) G_pgpe_thr_ctrl.curr_ftx = ftx
#define pgpe_thr_ctrl_get_curr_ftx() G_pgpe_thr_ctrl.curr_ftx
#define pgpe_thr_ctrl_set_next_ftx(ftx) G_pgpe_thr_ctrl.next_ftx = ftx

#endif
