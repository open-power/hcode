/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_thr_ctrl.c $        */
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
#include "pgpe_thr_ctrl.h"
#include "pgpe_pstate.h"
#include "p10_scom_eq_d.H"
#include "pgpe_gppb.h"


pgpe_thr_ctrl_t G_pgpe_thr_ctrl;

void pgpe_thr_ctrl_init()
{
    //todo Check PGPE_FLAG bits
    G_pgpe_thr_ctrl.status = PGPE_THR_CTRL_ENABLED;
    G_pgpe_thr_ctrl.curr_ceff_ovr_idx = 0;
}

void pgpe_thr_ctrl_update(uint32_t pstate)
{
    if (G_pgpe_thr_ctrl.status == PGPE_THR_CTRL_ENABLED)
    {
        uint32_t vrt_overage =  pstate - pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, POWERSAVE);

        PK_TRACE("THR: vrt_over=0x%x, curr_ceff_ovr_idx=0x%x", vrt_overage, G_pgpe_thr_ctrl.curr_ceff_ovr_idx);

        //if  VRT overage == 0 && present_ceff_overage_index == 0
        if ((vrt_overage == 0) && (G_pgpe_thr_ctrl.curr_ceff_ovr_idx == 0))
        {
            //nop
        }
        else if ((vrt_overage > 0) &&  (vrt_overage > G_pgpe_thr_ctrl.curr_ceff_ovr_idx))
        {
            G_pgpe_thr_ctrl.curr_ceff_ovr_idx = vrt_overage;
            pgpe_thr_ctrl_write_wcor();
        }
        else if ((vrt_overage > 0) &&  (vrt_overage < G_pgpe_thr_ctrl.curr_ceff_ovr_idx))
        {
            G_pgpe_thr_ctrl.curr_ceff_ovr_idx = (G_pgpe_thr_ctrl.curr_ceff_ovr_idx - vrt_overage) / 2 + vrt_overage;
            pgpe_thr_ctrl_write_wcor();
        }
        else if ((vrt_overage == 0) && (G_pgpe_thr_ctrl.curr_ceff_ovr_idx != 0))
        {
            G_pgpe_thr_ctrl.curr_ceff_ovr_idx = (G_pgpe_thr_ctrl.curr_ceff_ovr_idx) / 2;
            pgpe_thr_ctrl_write_wcor();
        }
        else
        {
            //ERROR \\todo
        }

        PK_TRACE("THR: vrt_over=0x%x, curr_ceff_ovr_idx=0x%x", vrt_overage, G_pgpe_thr_ctrl.curr_ceff_ovr_idx);
    }
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
}
