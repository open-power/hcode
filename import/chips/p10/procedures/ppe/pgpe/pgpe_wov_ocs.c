/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_wov_ocs.c $         */
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
#include "pgpe_wov_ocs.h"
#include "p10_scom_eq_b.H"
#include "p10_scom_c_d.H"
#include "pgpe_header.h"
#include "pstate_pgpe_occ_api.h"
#include "p10_oci_proc.H"
#include "pgpe_gppb.h"
#include "p10_scom_eq_7.H"

pgpe_wov_ocs_t G_pgpe_wov_ocs;
void pgpe_wov_ocs_dec_tgt_pct();
void pgpe_wov_ocs_inc_tgt_pct();

void pgpe_wov_ocs_init()
{

    //ATTR_DROOP_COUNT_CONTROL->GPPB
    //Multicast DCCR to define the events that make up LIGHT_LOSS and HEAVY_LOSS
    //\todo Read the value from GPPB
    uint64_t data  = 0x1F01F01480000000ULL;
    PPE_PUTSCOM_MC(CPMS_DCCR, 0xF, data);

    PPE_PUTSCOM_MC_Q(QME_QMCR_SCOM2, BIT64(25)); //Enable TTSR

    G_pgpe_wov_ocs.wov_status = WOV_STATUS_DISABLED;
    G_pgpe_wov_ocs.ocs_status = OCS_STATUS_DISABLED;
    G_pgpe_wov_ocs.wov_thr_loss_enable = WOV_THR_LOSS_STATUS_DISABLED;
    G_pgpe_wov_ocs.wov_freq_loss_enable = WOV_FREQ_LOSS_STATUS_DISABLED;
    G_pgpe_wov_ocs.pwof_val = (pgpe_wof_values_t*)(pgpe_header_get(g_wof_state_addr));
}

void pgpe_wov_ocs_enable()
{
    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_WOV_UNDERVOLT_ENABLE))
    {
        G_pgpe_wov_ocs.wov_status |= WOV_STATUS_UNDERVOLT_ENABLED;
    }

    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_WOV_OVERVOLT_ENABLE))
    {
        G_pgpe_wov_ocs.wov_status |= WOV_STATUS_OVERVOLT_ENABLED;
    }

    if (!pgpe_gppb_get_pgpe_flags(PGPE_FLAG_OCS_DISABLE))
    {
        G_pgpe_wov_ocs.ocs_status = OCS_STATUS_ENABLED;
    }

    //\todo Determine which attribute and pgpe_flags to use
    G_pgpe_wov_ocs.wov_thr_loss_enable = WOV_THR_LOSS_STATUS_ENABLED;
    G_pgpe_wov_ocs.wov_freq_loss_enable = WOV_FREQ_LOSS_STATUS_ENABLED;
}

void pgpe_wov_ocs_disable()
{
    G_pgpe_wov_ocs.wov_status = WOV_STATUS_DISABLED;
    G_pgpe_wov_ocs.ocs_status = OCS_STATUS_DISABLED;
    G_pgpe_wov_ocs.wov_thr_loss_enable = WOV_THR_LOSS_STATUS_DISABLED;
    G_pgpe_wov_ocs.wov_freq_loss_enable = WOV_FREQ_LOSS_STATUS_DISABLED;
    G_pgpe_wov_ocs.wov_thr_loss_enable = WOV_THR_LOSS_STATUS_DISABLED;
}

void pgpe_wov_ocs_determine_perf_loss()
{
    //PK_TRACE("OCS: Perf loss");

    if ((G_pgpe_wov_ocs.ocs_status == OCS_STATUS_ENABLED) ||
        (G_pgpe_wov_ocs.wov_status  & WOV_STATUS_OVERVOLT_ENABLED)
        || (G_pgpe_wov_ocs.wov_status & WOV_STATUS_UNDERVOLT_ENABLED))
    {
        uint64_t thr_light_loss = 0;
        uint64_t thr_heavy_loss = 0;
        uint64_t freq_light_loss = 0;
        uint64_t freq_heavy_loss = 0;

        //PK_TRACE("OCS: Enabled");

        if(G_pgpe_wov_ocs.wov_thr_loss_enable == WOV_THR_LOSS_STATUS_ENABLED)
        {
            //Read TTSR
            uint64_t ttsr = 0;
            PPE_GETSCOM_MC_Q_OR(QME_TTSR, ttsr);
            thr_light_loss = ttsr & 0XF0F0F0F0F0F0F0F0;
            thr_heavy_loss = ttsr & 0X0F0F0F0F0F0F0F0F;
            //PK_TRACE("OCS: light_loss=0x%x, heavy_loss=0x%x, ttsr=0x%08x%08x",thr_light_loss,thr_heavy_loss, (ttsr>>32)&0xFFFFFFFF,ttsr&0xFFFFFFFF);
        }

        //\todo RTC 247186
        if(G_pgpe_wov_ocs.wov_freq_loss_enable == WOV_FREQ_LOSS_STATUS_ENABLED)
        {
        }

        G_pgpe_wov_ocs.light_loss = thr_light_loss || freq_light_loss;
        G_pgpe_wov_ocs.heavy_loss = thr_heavy_loss || freq_heavy_loss;

    }
}

void pgpe_wov_ocs_update_dirty()
{
    uint32_t droop;

    if (G_pgpe_wov_ocs.heavy_loss)
    {
        droop = DROOP_LVL_HEAVY;
    }
    else if (G_pgpe_wov_ocs.light_loss)
    {
        droop = DROOP_LVL_LIGHT;
    }
    else
    {
        droop = DROOP_LVL_OK;
    }

    if (droop == DROOP_LVL_OK)
    {
        if(G_pgpe_wov_ocs.pwof_val->dw1.fields.idd_avg_ma  >= G_pgpe_wov_ocs.idd_current_thresh)
        {
            //Update instrumentation counters
        }
        else
        {
            if (G_pgpe_wov_ocs.hysteresis_cnt > 0)
            {
                G_pgpe_wov_ocs.hysteresis_cnt--;
            }

            if (G_pgpe_wov_ocs.hysteresis_cnt == 0)
            {
                pgpe_wov_ocs_dec_tgt_pct(); //Bound this by attributes
            }

            //Update instrumentation counters
            //Buffer trace
        }

        out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY));
        out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
    }
    else if (droop == DROOP_LVL_LIGHT)
    {
        if(G_pgpe_wov_ocs.pwof_val->dw1.fields.idd_avg_ma  >= G_pgpe_wov_ocs.idd_current_thresh)
        {
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            G_pgpe_wov_ocs.hysteresis_cnt = HYSTERESIS_TICKS;
            //Update instrumentation counters
            //Buffer trace
        }
        else
        {
            //\todo Make it configurable
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY));
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            G_pgpe_wov_ocs.hysteresis_cnt = HYSTERESIS_TICKS;
            pgpe_wov_ocs_inc_tgt_pct();
            //Update instrumentation counters
            //Buffer trace
        }
    }
    else
    {
        if (G_pgpe_wov_ocs.pwof_val->dw1.fields.idd_avg_ma  >= G_pgpe_wov_ocs.idd_current_thresh)
        {
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            G_pgpe_wov_ocs.hysteresis_cnt = HYSTERESIS_TICKS;
            //update instrumentation counters
            //Buffer trace
        }
        else
        {
            //\todo Make it configurable
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            G_pgpe_wov_ocs.hysteresis_cnt = HYSTERESIS_TICKS;
            pgpe_wov_ocs_inc_tgt_pct();
            //update instrumentation counters
            //Buffer trace
        }
    }

    if (G_pgpe_wov_ocs.tgt_pct >= G_gppb->wov_overv_max_pct)
    {
        out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
        out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
    }
}

void pgpe_wov_ocs_dec_tgt_pct()
{
    //Adjust WOV Target Pct
    int32_t min_pct;

    if ((G_pgpe_wov_ocs.wov_status & WOV_STATUS_UNDERVOLT_ENABLED))
    {
        min_pct = -pgpe_gppb_get(wov_underv_max_pct);
    }
    else
    {
        min_pct = 0;
    }

    if (G_pgpe_wov_ocs.curr_pct > min_pct)
    {
        G_pgpe_wov_ocs.tgt_pct -= pgpe_gppb_get(wov_underv_step_incr_pct);
    }
    else
    {
        G_pgpe_wov_ocs.tgt_pct = min_pct;
    }
}

void pgpe_wov_ocs_inc_tgt_pct()
{
    //Adjust WOV Target Pct
    int32_t max_pct;

    if ((G_pgpe_wov_ocs.wov_status & WOV_STATUS_OVERVOLT_ENABLED))
    {
        max_pct = pgpe_gppb_get(wov_overv_max_pct);
    }
    else
    {
        max_pct = 0;
    }

    if (G_pgpe_wov_ocs.curr_pct < max_pct)
    {
        G_pgpe_wov_ocs.tgt_pct += pgpe_gppb_get(wov_underv_step_decr_pct);
    }
    else
    {
        G_pgpe_wov_ocs.tgt_pct = max_pct;
    }
}
