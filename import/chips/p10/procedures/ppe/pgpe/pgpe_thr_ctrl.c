/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_thr_ctrl.c $        */
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
#include "pgpe_thr_ctrl.h"
#include "pgpe_pstate.h"
#include "p10_scom_eq_d.H"
#include "p10_scom_eq_7.H"
#include "p10_scom_c_9.H"
#include "pgpe_gppb.h"


pgpe_thr_ctrl_t G_pgpe_thr_ctrl __attribute__((section (".data_structs")));

//
//pgpe_thr_ctrl_data_addr
//
void* pgpe_thr_ctrl_data_addr()
{
    return &G_pgpe_thr_ctrl;
}

void pgpe_thr_ctrl_init()
{
    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_WOF_THROTTLE_ENABLE))
    {
        G_pgpe_thr_ctrl.status = PGPE_THR_CTRL_ENABLED;
        PPE_PUTSCOM_MC_Q(QME_QMCR_SCOM2, BIT64(33)); //Set QMCR[WOF_AUTO_SEQ_ENABLE]
        PK_TRACE_INF("THR: Inited");
    }

    //G_pgpe_thr_ctrl.ceff_ovr = 0;
    //G_pgpe_thr_ctrl.curr_ceff_ovr_idx = 0;
    uint32_t i = 0;

    for (i = 0; i < PGPE_THR_CTRL_CEFF_ERR_SAMPLE_SIZE; i++)
    {
        G_pgpe_thr_ctrl.ceff_err_array[i] = 0;
    }

    G_pgpe_thr_ctrl.ceff_err_idx = 0;
    G_pgpe_thr_ctrl.ceff_err_sum = 0;
    G_pgpe_thr_ctrl.ceff_err_avg = 0;
    G_pgpe_thr_ctrl.curr_ftx = 0;
    G_pgpe_thr_ctrl.next_ftx = 0;
}

void pgpe_thr_ctrl_update(uint32_t pstate)
{
    uint32_t target_ftx = pstate - pgpe_pstate_get(pstate_safe);
    uint32_t ceff_err, ceff_prop, ceff_intg, ceff_adj;

    PK_TRACE_INF("THR: Update, ps=%u, target_ftx=%u", pstate, target_ftx);

    do
    {
        ceff_err = (target_ftx - G_pgpe_thr_ctrl.curr_ftx) > 0 ? (target_ftx - G_pgpe_thr_ctrl.curr_ftx) : 0;

        //Compute CEFF_AVG_ERR
        G_pgpe_thr_ctrl.ceff_err_sum = G_pgpe_thr_ctrl.ceff_err_sum -
                                       G_pgpe_thr_ctrl.ceff_err_array[G_pgpe_thr_ctrl.ceff_err_idx] + ceff_err;
        G_pgpe_thr_ctrl.ceff_err_avg = (G_pgpe_thr_ctrl.ceff_err_sum + PGPE_THR_CTRL_CEFF_ERR_SAMPLE_SIZE) >>
                                       (PGPE_THR_CTRL_CEFF_ERR_SAMPLE_SIZE_SHIFT);
        G_pgpe_thr_ctrl.ceff_err_array[G_pgpe_thr_ctrl.ceff_err_idx] = ceff_err;
        G_pgpe_thr_ctrl.ceff_err_idx = (G_pgpe_thr_ctrl.ceff_err_idx + 1) % PGPE_THR_CTRL_CEFF_ERR_SAMPLE_SIZE;

        PK_TRACE_INF("THR: ceff_err_sum=%u, ceff_err_avg=%u,ceff_err_idx=%u", G_pgpe_thr_ctrl.ceff_err_sum,
                     G_pgpe_thr_ctrl.ceff_err_avg, G_pgpe_thr_ctrl.ceff_err_idx);

        //No throttle
        if ((ceff_err == 0) && target_ftx <= 0)
        {
            G_pgpe_thr_ctrl.next_ftx = 0;
            break;
        }

        //PI coefficients
        ceff_prop = pgpe_gppb_get_thr_ctrl_kp() * ceff_err;
        ceff_intg = ((target_ftx + G_pgpe_thr_ctrl.curr_ftx) != 0) ? pgpe_gppb_get_thr_ctrl_ki() *
                    G_pgpe_thr_ctrl.ceff_err_avg : 0;
        ceff_adj  = (ceff_prop + ceff_intg) >> 6;

        //Next FTX
        if (ceff_err > 0 && target_ftx <= 0)
        {
            G_pgpe_thr_ctrl.next_ftx = ceff_adj;
        }
        else if (ceff_err > 0 && (target_ftx > G_pgpe_thr_ctrl.curr_ftx))
        {
            G_pgpe_thr_ctrl.next_ftx = target_ftx + ceff_adj;
        }
        else if(ceff_err > 0 && (target_ftx < G_pgpe_thr_ctrl.curr_ftx))
        {
            G_pgpe_thr_ctrl.next_ftx = target_ftx + (ceff_adj >> 1);
        }
        else if(ceff_err == 0 && (target_ftx > G_pgpe_thr_ctrl.curr_ftx))
        {
            G_pgpe_thr_ctrl.next_ftx = target_ftx + (ceff_adj >> 1);
        }
        else if(ceff_err == 0 && (target_ftx < G_pgpe_thr_ctrl.curr_ftx))
        {
            G_pgpe_thr_ctrl.next_ftx = target_ftx + ceff_adj;
        }

        PK_TRACE_INF("THR: ceff_prop=%u, ceff_intg=%u,ceff_adj=%u", ceff_prop, ceff_intg, ceff_adj);
        PK_TRACE_INF("THR: next_ftx=%u", G_pgpe_thr_ctrl.next_ftx);

    }
    while(0);

    //prev_ftx = next_ftx;
    pgpe_thr_ctrl_write_wcor(G_pgpe_thr_ctrl.next_ftx);
    G_pgpe_thr_ctrl.next_ftx = G_pgpe_thr_ctrl.curr_ftx;
}

void pgpe_thr_ctrl_write_wcor(uint32_t ceff_ovr_idx)
{
    qme_wcor_t wcor;
    wcor.value = 0;

    //Replicate present_ceff_overage_index to all Cx_THROTTLE_INDEX fields
    wcor.fields.c3_thr_idx = ceff_ovr_idx;
    wcor.fields.c2_thr_idx = ceff_ovr_idx;
    wcor.fields.c1_thr_idx = ceff_ovr_idx;
    wcor.fields.c0_thr_idx = ceff_ovr_idx;

    //Multicast Write all QMEs WCOR with above value
    if (ceff_ovr_idx != 0)
    {
        PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(CPMS_FDIR_WO_OR, 0xF), BITS64(CPMS_FDIR_PREFETCH_THROTTLE_INJECT,
                    CPMS_FDIR_PREFETCH_THROTTLE_INJECT_LEN));
    }
    else
    {
        PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(CPMS_FDIR_WO_CLEAR, 0xF), BITS64(CPMS_FDIR_PREFETCH_THROTTLE_INJECT,
                    CPMS_FDIR_PREFETCH_THROTTLE_INJECT_LEN));
    }

    PPE_PUTSCOM_MC_Q(QME_WCOR, wcor.value);
    PK_TRACE_INF("THR: ceff_ovr_idx=0x%08x", ceff_ovr_idx);
}

/*
void pgpe_thr_ctrl_set_ceff_ovr_idx(uint32_t idx)
{
    G_pgpe_thr_ctrl.curr_ceff_ovr_idx = idx;
}

void pgpe_thr_ctrl_write_wcor()
{
    qme_wcor_t wcor;
    wcor.value = 0;

    //Replicate present_ceff_overage_index to all Cx_THROTTLE_INDEX fields
    wcor.fields.c3_thr_idx = G_pgpe_thr_ctrl.curr_ceff_ovr_idx;
    wcor.fields.c2_thr_idx = G_pgpe_thr_ctrl.curr_ceff_ovr_idx;
    wcor.fields.c1_thr_idx = G_pgpe_thr_ctrl.curr_ceff_ovr_idx;
    wcor.fields.c0_thr_idx = G_pgpe_thr_ctrl.curr_ceff_ovr_idx;

    //Multicast Write all QMEs WCOR with above value
    PPE_PUTSCOM_MC_Q(QME_WCOR, wcor.value);
}*/
