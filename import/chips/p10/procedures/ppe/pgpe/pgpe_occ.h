/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_occ.h $             */
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
#ifndef __PGPE_OCC_H__
#define __PGPE_OCC_H__

#include "pgpe.h"


typedef struct pgpe_occ
{
    pgpe_wof_values_t*  pwof_val;
    uint32_t sample_cnt;
    uint32_t vdd_accum, vcs_accum, idd_accum, ics_accum;
    uint32_t prev_tb, present_tb;
    uint32_t max_tb_delta, wof_tick, fit_tick;
    uint32_t idd_tb_accum, ics_tb_accum, vdd_tb_accum, vcs_tb_accum;
    uint32_t idd_fit_avg_ma, ics_fit_avg_ma, vdd_fit_avg_mv, vcs_fit_avg_mv;
    uint32_t idd_wof_avg_accum_ma, ics_wof_avg_accum_ma, vdd_wof_avg_accum_mv, vcs_wof_avg_accum_mv;
    uint32_t idd_avg_ma, ics_avg_ma, vdd_avg_mv, vcs_avg_mv;
} pgpe_occ_t;

void pgpe_occ_init();
void pgpe_occ_update_beacon();
void pgpe_occ_produce_wof_values();
void pgpe_occ_produce_wof_i_v_values();
void pgpe_occ_send_ipc_ack_cmd(ipc_msg_t* cmd);
void pgpe_occ_send_ipc_ack_cmd_rc(ipc_msg_t* cmd, uint32_t msg_rc);
void pgpe_occ_send_ipc_ack_type_rc(uint32_t ipc_type, uint32_t msg_rc);


#endif//
