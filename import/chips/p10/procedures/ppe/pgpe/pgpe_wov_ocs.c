/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_wov_ocs.c $         */
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
#include "pgpe_wov_ocs.h"
#include "p10_scom_eq_b.H"
#include "p10_scom_c_d.H"
#include "pgpe_header.h"
#include "pstate_pgpe_occ_api.h"
#include "p10_oci_proc.H"
#include "pgpe_gppb.h"
#include "p10_scom_eq_7.H"

pgpe_wov_ocs_t G_pgpe_wov_ocs __attribute__((section (".data_structs")));
void pgpe_wov_ocs_dec_tgt_pct();
void pgpe_wov_ocs_inc_tgt_pct();

//
//pgpe_wov_ocs_data_addr
//
void* pgpe_wov_ocs_data_addr()
{
    return &G_pgpe_wov_ocs;
}

void pgpe_wov_ocs_init()
{

    PPE_PUTSCOM_MC_Q(QME_QMCR_SCOM2, BIT64(QME_QMCR_TTSR_READ_ENABLE)); //Enable TTSR

    G_pgpe_wov_ocs.wov_uv_status = WOV_STATUS_DISABLED;
    G_pgpe_wov_ocs.wov_ov_status = WOV_STATUS_DISABLED;
    G_pgpe_wov_ocs.ocs_status = OCS_STATUS_DISABLED;
    G_pgpe_wov_ocs.pwof_val = (pgpe_wof_values_t*)(pgpe_header_get(g_pgpe_pgpeWofStateAddress));
    G_pgpe_wov_ocs.wov_thr_loss_enable = WOV_THR_LOSS_STATUS_DISABLED;
    G_pgpe_wov_ocs.wov_freq_loss_enable = WOV_FREQ_LOSS_STATUS_DISABLED;
    G_pgpe_wov_ocs.droop_level = DROOP_LVL_OK;
    G_pgpe_wov_ocs.dirty = OCS_DIRTY_SAMPLE_TYPE_00;
    G_pgpe_wov_ocs.curr_pct = 0;
    G_pgpe_wov_ocs.tgt_pct = 0;
    G_pgpe_wov_ocs.hysteresis_cnt = 0;
    G_pgpe_wov_ocs.idd_current_thresh = pgpe_gppb_get_wov_idd_thresh();

    G_pgpe_wov_ocs.overcurrent_flag = OCS_UNDER_THRESH;
    G_pgpe_wov_ocs.cnt_droop_ok = 0;
    G_pgpe_wov_ocs.cnt_droop_ok_oc = 0;
    G_pgpe_wov_ocs.cnt_droop_light = 0;
    G_pgpe_wov_ocs.cnt_droop_light_oc = 0;
    G_pgpe_wov_ocs.cnt_droop_heavy = 0;
    G_pgpe_wov_ocs.cnt_droop_heavy_oc = 0;

    PK_TRACE("WOV_OCS: overv_max_pct  = 0x%x", pgpe_gppb_get_wov_overv_max_pct());
    PK_TRACE("WOV_OCS: underv_max_pct = 0x%x", pgpe_gppb_get_wov_underv_max_pct());

    PK_TRACE("WOV_OCS: WOV_DIRTY_UC_CTRL_LIGHT_DROOP=%u",
             pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_LIGHT_DROOP));
    PK_TRACE("WOV_OCS: WOV_DIRTY_UC_CTRL_HEAVY_DROOP=%u",
             pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_HEAVY_DROOP));
    PK_TRACE("WOV_OCS: Inited");
}

void pgpe_wov_ocs_enable()
{
    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_WOV_UNDERVOLT_ENABLE))
    {
        PK_TRACE("WOV_OCS: Undervolt Enabled");
        G_pgpe_wov_ocs.wov_uv_status = WOV_STATUS_ENABLED;
    }

    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_WOV_OVERVOLT_ENABLE))
    {
        PK_TRACE("OV_OCS: Overvolt Enabled");
        G_pgpe_wov_ocs.wov_ov_status = WOV_STATUS_ENABLED;
    }


    if (!pgpe_gppb_get_pgpe_flags(PGPE_FLAG_OCS_DISABLE))
    {
        PK_TRACE("WOV_OCS: OCS Enabled");
        G_pgpe_wov_ocs.ocs_status = OCS_STATUS_ENABLED;
    }

    //\todo Determine which attribute and pgpe_flags to use
    //\todo RTC 247186
    G_pgpe_wov_ocs.wov_thr_loss_enable = WOV_THR_LOSS_STATUS_ENABLED;
    G_pgpe_wov_ocs.wov_freq_loss_enable = WOV_FREQ_LOSS_STATUS_DISABLED;
    PK_TRACE("WOV_OCS: WOV_UNDERV_STATUS=0x%x", G_pgpe_wov_ocs.wov_uv_status);
    PK_TRACE("WOV_OCS: WOV_OVERV_STATUS=0x%x", G_pgpe_wov_ocs.wov_ov_status);
}

void pgpe_wov_ocs_disable()
{
    PK_TRACE("WOV_OCS: Disabled");
    G_pgpe_wov_ocs.wov_uv_status = WOV_STATUS_DISABLED;
    G_pgpe_wov_ocs.wov_ov_status = WOV_STATUS_DISABLED;
    G_pgpe_wov_ocs.ocs_status = OCS_STATUS_DISABLED;
    G_pgpe_wov_ocs.wov_thr_loss_enable = WOV_THR_LOSS_STATUS_DISABLED;
    G_pgpe_wov_ocs.wov_freq_loss_enable = WOV_FREQ_LOSS_STATUS_DISABLED;
    G_pgpe_wov_ocs.wov_thr_loss_enable = WOV_THR_LOSS_STATUS_DISABLED;
    G_pgpe_wov_ocs.overcurrent_flag = OCS_UNDER_THRESH;
}

void pgpe_wov_ocs_determine_perf_loss()
{
    //PK_TRACE("OCS: Perf loss");

    if ((G_pgpe_wov_ocs.ocs_status == OCS_STATUS_ENABLED) ||
        (G_pgpe_wov_ocs.wov_uv_status  & WOV_STATUS_ENABLED)
        || (G_pgpe_wov_ocs.wov_ov_status & WOV_STATUS_ENABLED))
    {
        uint64_t thr_light_loss = 0;
        uint64_t thr_heavy_loss = 0;
        uint64_t freq_light_loss = 0;
        uint64_t freq_heavy_loss = 0;


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
    uint32_t overcurrent;
    uint32_t dirty;

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

    //Check for overrcurrent status
    if(G_pgpe_wov_ocs.pwof_val->dw1.fields.idd_avg_10ma  >= G_pgpe_wov_ocs.idd_current_thresh)
    {
        overcurrent = OCS_OVER_THRESH;
    }
    else
    {
        overcurrent = OCS_UNDER_THRESH;
    }

    //Trace if change in droop level
    if (G_pgpe_wov_ocs.droop_level != droop)
    {
        pgpe_opt_set_word(0, 0);
        pgpe_opt_set_byte(0, droop);
        ppe_trace_op(PGPE_OPT_OCS_DROOP_COND, pgpe_opt_get());
        PK_TRACE("OCS: old_droop_lvl=0x%x, new_droop_lvl=0x%x", G_pgpe_wov_ocs.droop_level, droop);
    }

    //Trace if change in overcurrent status
    if (G_pgpe_wov_ocs.overcurrent_flag != overcurrent)
    {
        pgpe_opt_set_word(0, 0);
        pgpe_opt_set_half(0, G_pgpe_wov_ocs.idd_current_thresh);
        pgpe_opt_set_half(1, G_pgpe_wov_ocs.pwof_val->dw1.fields.idd_avg_10ma - G_pgpe_wov_ocs.idd_current_thresh);
        ppe_trace_op(PGPE_OPT_OCS_THRESH_TRANS, pgpe_opt_get());
        PK_TRACE("OCS: old_ocs=0x%x, new_ocs=0x%x idd_avg_ma=0x%x, idd_thresh=0x%x", G_pgpe_wov_ocs.overcurrent_flag,
                 overcurrent,
                 G_pgpe_wov_ocs.pwof_val->dw1.fields.idd_avg_10ma,
                 G_pgpe_wov_ocs.idd_current_thresh);
    }

    G_pgpe_wov_ocs.droop_level = droop;
    G_pgpe_wov_ocs.overcurrent_flag = overcurrent;

    if (droop == DROOP_LVL_OK)
    {
        if (overcurrent == OCS_OVER_THRESH)
        {
            //Update instrumentation counters
            G_pgpe_wov_ocs.cnt_droop_ok_oc++;
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
            G_pgpe_wov_ocs.cnt_droop_ok++;

            //Buffer trace \\todo
        }

        out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY));
        out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
        dirty = OCS_DIRTY_SAMPLE_TYPE_00;
    }
    else if (droop == DROOP_LVL_LIGHT)
    {
        if (overcurrent == OCS_OVER_THRESH)
        {
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            G_pgpe_wov_ocs.hysteresis_cnt = HYSTERESIS_TICKS;
            dirty = OCS_DIRTY_SAMPLE_TYPE_11;

            //Update instrumentation counters
            G_pgpe_wov_ocs.cnt_droop_light_oc++;

            //Buffer trace \\todo
        }
        else
        {
            if (pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_LIGHT_DROOP) == 0)
            {
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY));
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            }
            else if  (pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_LIGHT_DROOP) == 2)
            {
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            }
            else if  (pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_LIGHT_DROOP) == 3)
            {
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            }

            G_pgpe_wov_ocs.hysteresis_cnt = HYSTERESIS_TICKS;
            pgpe_wov_ocs_inc_tgt_pct();
            dirty = OCS_DIRTY_SAMPLE_TYPE_00;
            //Update instrumentation counters
            G_pgpe_wov_ocs.cnt_droop_light++;

            //Buffer trace \\todo
        }
    }
    else
    {
        if (overcurrent == OCS_OVER_THRESH)
        {
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            G_pgpe_wov_ocs.hysteresis_cnt = HYSTERESIS_TICKS;
            dirty = OCS_DIRTY_SAMPLE_TYPE_11;
            //update instrumentation counters
            G_pgpe_wov_ocs.cnt_droop_heavy_oc++;

            //Buffer trace \\todo
        }
        else
        {
            if (pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_HEAVY_DROOP) == 0)
            {
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY));
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            }
            else if (pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_HEAVY_DROOP) == 2)
            {
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            }
            else if (pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_HEAVY_DROOP) == 3)
            {
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            }

            G_pgpe_wov_ocs.hysteresis_cnt = HYSTERESIS_TICKS;
            pgpe_wov_ocs_inc_tgt_pct();
            dirty = OCS_DIRTY_SAMPLE_TYPE_10;

            //update instrumentation counters
            G_pgpe_wov_ocs.cnt_droop_heavy++;

            //Buffer trace \\todo
        }
    }

    if (G_pgpe_wov_ocs.tgt_pct > G_gppb->wov_overv_max_pct)
    {
        out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
        out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
        dirty = OCS_DIRTY_SAMPLE_TYPE_11;
        PK_TRACE("OCS: tgt_pct=0x%x, overv_max_pct=0x%x", G_pgpe_wov_ocs.tgt_pct, G_gppb->wov_overv_max_pct);
    }

    if (G_pgpe_wov_ocs.dirty != dirty)
    {
        pgpe_opt_set_word(0, 0);
        pgpe_opt_set_byte(0, dirty);
        ppe_trace_op(PGPE_OPT_OCS_DIRTY_TYPE , pgpe_opt_get());
        PK_TRACE("OCS: new_dirty=0x%x, old_dirty=0x%x", dirty, G_pgpe_wov_ocs.dirty);
    }

    G_pgpe_wov_ocs.dirty = dirty;
}

void pgpe_wov_ocs_dec_tgt_pct()
{
    //Adjust WOV Target Pct
    int32_t min_pct, step_size;

    if (pgpe_wov_ocs_is_wov_underv_enabled())
    {
        min_pct = -pgpe_gppb_get_wov_underv_max_pct();
    }
    else
    {
        min_pct = 0;
    }

    if (G_pgpe_wov_ocs.tgt_pct > 0)
    {
        step_size =  pgpe_gppb_get_wov_overv_step_decr_pct();
    }
    else
    {
        step_size =  pgpe_gppb_get_wov_underv_step_decr_pct();
    }

    if (G_pgpe_wov_ocs.tgt_pct > min_pct)
    {
        G_pgpe_wov_ocs.tgt_pct -= step_size;
    }
    else
    {
        G_pgpe_wov_ocs.tgt_pct = min_pct;
    }
}

void pgpe_wov_ocs_inc_tgt_pct()
{
    //Adjust WOV Target Pct
    int32_t max_pct, step_size;

    if (pgpe_wov_ocs_is_wov_overv_enabled())
    {
        max_pct = pgpe_gppb_get_wov_overv_max_pct();
    }
    else
    {
        max_pct = 0;
    }

    if (G_pgpe_wov_ocs.tgt_pct > 0)
    {
        step_size =  pgpe_gppb_get_wov_overv_step_incr_pct();
    }
    else
    {
        step_size =  pgpe_gppb_get_wov_underv_step_incr_pct();
    }

    if (G_pgpe_wov_ocs.tgt_pct < max_pct)
    {
        G_pgpe_wov_ocs.tgt_pct += step_size;
    }
    else
    {
        G_pgpe_wov_ocs.tgt_pct = max_pct;
    }
}
