/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_occ.h $             */
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
#ifndef __PGPE_OCC_H__
#define __PGPE_OCC_H__

#ifndef __PARSER_TOOL__
    #include "pgpe.h"
#else
    #include "pstate_pgpe_occ_api.h"
#endif


typedef struct pgpe_occ
{
    pgpe_wof_values_t*  pwof_val;
    uint32_t sample_cnt;
    uint32_t prev_tb, present_tb;
    uint32_t max_tb_delta, wof_tick, fit_tick;
    uint32_t ps_tb_accum, ps_fit_avg, ps_wof_avg_accum;
    uint32_t ps_freq_tb_accum, ps_freq_fit_avg, ps_freq_wof_avg_accum;
    uint32_t thr_idx_tb_accum, thr_idx_fit_avg, thr_idx_wof_avg_accum;
    uint32_t idd_ma, idd_tb_accum, idd_fit_avg_ma, idd_wof_avg_accum_ma;
    uint32_t ics_ma, ics_tb_accum, ics_fit_avg_ma, ics_wof_avg_accum_ma;
    uint32_t vdd_accum, vdd_tb_accum, vdd_fit_avg_mv, vdd_wof_avg_accum_mv, vdd_avg_mv;
    uint32_t vcs_accum, vcs_tb_accum, vcs_fit_avg_mv, vcs_wof_avg_accum_mv, vcs_avg_mv;
    uint32_t ocs_avg_pct_tb_accum, ocs_avg_pct_fit, ocs_avg_pct_wof_accum;
    uint32_t vratio_vdd_tb_accum, vratio_vdd_fit_avg, vratio_vdd_wof_accum;
    uint32_t vratio_vcs_tb_accum, vratio_vcs_fit_avg, vratio_vcs_wof_accum;
    uint32_t wof_tick_rnd;
} pgpe_occ_t;

#ifndef __PARSER_TOOL__
    void pgpe_sync_qme_occ_timebase();
    void pgpe_occ_init();
    void* pgpe_occ_data_addr();
    void pgpe_occ_update_beacon();
    void pgpe_occ_produce_wof_values();
    void pgpe_occ_send_ipc_ack_cmd(ipc_msg_t* cmd);
    void pgpe_occ_send_ipc_ack_cmd_rc(ipc_msg_t* cmd, uint32_t msg_rc);
    void pgpe_occ_send_ipc_ack_type_rc(uint32_t ipc_type, uint32_t msg_rc);
#endif

#endif//
