/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_wov_ocs.c $         */
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
#include "pgpe_wov_ocs.h"
#include "p10_scom_eq_b.H"
#include "p10_scom_c_d.H"
#include "pgpe_header.h"
#include "pstate_pgpe_occ_api.h"
#include "p10_oci_proc.H"
#include "pgpe_gppb.h"
#include "p10_scom_eq_7.H"
#include "p10_scom_c_3.H"
#include "pgpe_occ.h"
#include "pgpe_pstate.h"
#include "pgpe_error.h"

pgpe_wov_ocs_t G_pgpe_wov_ocs __attribute__((section (".data_structs")));
void pgpe_wov_ocs_dec_tgt_pct();
void pgpe_wov_ocs_inc_tgt_pct();
uint32_t G_overv_max_cnt_log = 0;

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
    G_pgpe_wov_ocs.idd_current_thresh = pgpe_gppb_get_wov_idd_thresh() * 10;

    G_pgpe_wov_ocs.overcurrent_flag = OCS_UNDER_THRESH;
    G_pgpe_wov_ocs.cnt_droop_ok = 0;
    G_pgpe_wov_ocs.cnt_droop_ok_oc = 0;
    G_pgpe_wov_ocs.cnt_droop_light = 0;
    G_pgpe_wov_ocs.cnt_droop_light_oc = 0;
    G_pgpe_wov_ocs.cnt_droop_heavy = 0;
    G_pgpe_wov_ocs.cnt_droop_heavy_oc = 0;
    G_pgpe_wov_ocs.overv_max_cnt = 0;
    G_overv_max_cnt_log = 0;

    //Store rdp_limit_10ma value in occ sram space
    G_pgpe_wov_ocs.pwof_val->dw1.fields.rdp_limit_10ma = G_pgpe_wov_ocs.idd_current_thresh;

    uint32_t ecomask;
    ecomask = in32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW);
    G_pgpe_wov_ocs.eco_ttsr_mask = 0;
    uint32_t i;

    for (i = 0; i < MAX_CORES; i++)
    {
        if (ecomask & CORE_MASK(i))
        {
            G_pgpe_wov_ocs.eco_ttsr_mask |= (0x8800000000000000 >> (8 * (i / 4) + (i % 4)));
        }
    }

    G_pgpe_wov_ocs.eco_ttsr_mask = ~G_pgpe_wov_ocs.eco_ttsr_mask;
    PK_TRACE_INF("WOV: ECO TTSR Mask 0x%llX",  G_pgpe_wov_ocs.eco_ttsr_mask);

    /*PK_TRACE_DBG("WOV: overv_max_pct  = 0x%x", pgpe_gppb_get_wov_overv_max_pct());
    PK_TRACE_DBG("WOV: underv_max_pct = 0x%x", pgpe_gppb_get_wov_underv_max_pct());

    PK_TRACE_DBG("WOV: WOV_DIRTY_UC_CTRL_LIGHT_DROOP=%u",
             pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_LIGHT_DROOP));
    PK_TRACE_DBG("WOV: WOV_DIRTY_UC_CTRL_HEAVY_DROOP=%u",
             pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_HEAVY_DROOP));*/
    PK_TRACE_INF("WOV: Inited");
}

void pgpe_wov_ocs_enable()
{
    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_WOV_UNDERVOLT_ENABLE))
    {
        PK_TRACE_DBG("WOV: Undervolt Enabled");
        G_pgpe_wov_ocs.wov_uv_status = WOV_STATUS_ENABLED;
    }

    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_WOV_OVERVOLT_ENABLE))
    {
        PK_TRACE_DBG("WOV: Overvolt Enabled");
        G_pgpe_wov_ocs.wov_ov_status = WOV_STATUS_ENABLED;
    }


    if (!pgpe_gppb_get_pgpe_flags(PGPE_FLAG_OCS_DISABLE))
    {
        PK_TRACE_DBG("WOV: OCS Enabled");
        G_pgpe_wov_ocs.ocs_status = OCS_STATUS_ENABLED;
    }

    //\todo Determine which attribute and pgpe_flags to use
    //\todo RTC 247186
    G_pgpe_wov_ocs.wov_thr_loss_enable = WOV_THR_LOSS_STATUS_ENABLED;
    G_pgpe_wov_ocs.wov_freq_loss_enable = WOV_FREQ_LOSS_STATUS_DISABLED;
    PK_TRACE_INF("WOV: Enablement Status(OCS=0x%x,UNDERV=0x%x,OVERV=0x%x", G_pgpe_wov_ocs.ocs_status,
                 G_pgpe_wov_ocs.wov_uv_status, G_pgpe_wov_ocs.wov_ov_status);
}

void pgpe_wov_ocs_disable()
{
    PK_TRACE_INF("WOV: Disabled");
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

    uint64_t thr_light_loss = 0;
    uint64_t thr_heavy_loss = 0;
    uint64_t ttsr_masked = 0;
    uint64_t ttsr = 0;
    uint32_t thr_light_loss_upper = 0;
    uint32_t thr_light_loss_lower = 0;
    uint32_t thr_heavy_loss_upper = 0;
    uint32_t thr_heavy_loss_lower = 0;
    uint64_t chip_idle = 0;
    uint32_t chip_idle_upper = 0;

    if ((G_pgpe_wov_ocs.ocs_status == OCS_STATUS_ENABLED) ||
        (G_pgpe_wov_ocs.wov_uv_status  & WOV_STATUS_ENABLED)
        || (G_pgpe_wov_ocs.wov_ov_status & WOV_STATUS_ENABLED))
    {


        if(G_pgpe_wov_ocs.wov_thr_loss_enable == WOV_THR_LOSS_STATUS_ENABLED)
        {
            //Read TTSR
            PPE_GETSCOM_MC_Q_OR(QME_TTSR, ttsr);
            PPE_GETSCOM(PPE_SCOM_ADDR_MC_AND(CPMS_FDCR, 0xF), chip_idle);
            chip_idle_upper = chip_idle >> 32;
            ttsr_masked = ttsr & G_pgpe_wov_ocs.eco_ttsr_mask;
            thr_light_loss = ttsr_masked & 0XF0F0F0F0F0F0F0F0;
            thr_heavy_loss = ttsr_masked & 0X0F0F0F0F0F0F0F0F;
            //PK_TRACE("OCS: light_loss=0x%x, heavy_loss=0x%x, ttsr=0x%08x%08x",thr_light_loss,thr_heavy_loss, (ttsr>>32)&0xFFFFFFFF,ttsr&0xFFFFFFFF);

            if (ttsr)
            {
                //Update TTSR data to occ shared sram space
                G_pgpe_wov_ocs.ttsr_masked = ttsr;
            }
        }

        thr_light_loss_upper = thr_light_loss >> 32;
        thr_light_loss_lower = thr_light_loss & 0xFFFFFFFF;

        if((thr_light_loss_upper != 0) || (thr_light_loss_lower != 0))
        {
            G_pgpe_wov_ocs.light_loss = 1;
        }
        else
        {
            G_pgpe_wov_ocs.light_loss = 0;
        }

        thr_heavy_loss_upper = thr_heavy_loss >> 32;
        thr_heavy_loss_lower = thr_heavy_loss & 0xFFFFFFFF;

        if((thr_heavy_loss_upper != 0) || (thr_heavy_loss_lower != 0))
        {
            G_pgpe_wov_ocs.heavy_loss = 1;
        }
        else
        {
            G_pgpe_wov_ocs.heavy_loss = 0;
        }

        if(chip_idle_upper & 0x80000000)
        {
            G_pgpe_wov_ocs.chip_idle = 1;
        }
        else
        {
            G_pgpe_wov_ocs.chip_idle = 0;
        }

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
    else if(G_pgpe_wov_ocs.chip_idle)
    {
        droop = DROOP_LVL_CHIP_IDLE;
    }
    else
    {
        droop = DROOP_LVL_OK;
    }

    //Check for overrcurrent status
    if(pgpe_occ_get(idd_ocs_running_avg) >= G_pgpe_wov_ocs.idd_current_thresh)
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
        //ppe_trace_op(PGPE_OPT_OCS_DROOP_COND, pgpe_opt_get());
        PK_TRACE_DBG("WOV: old_droop_lvl=0x%x, new_droop_lvl=0x%x", G_pgpe_wov_ocs.droop_level, droop);
    }

    //Trace if change in overcurrent status
    if (G_pgpe_wov_ocs.overcurrent_flag != overcurrent)
    {
        pgpe_opt_set_word(0, 0);
        pgpe_opt_set_half(0, G_pgpe_wov_ocs.idd_current_thresh);
        pgpe_opt_set_half(1, pgpe_occ_get(idd_ocs_running_avg) - G_pgpe_wov_ocs.idd_current_thresh);
        //ppe_trace_op(PGPE_OPT_OCS_THRESH_TRANS, pgpe_opt_get());
        PK_TRACE_DBG("WOV: old_ocs=0x%x, new_ocs=0x%x idd_avg_ma=0x%x, idd_thresh=0x%x", G_pgpe_wov_ocs.overcurrent_flag,
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
            //Update current running avg value to occ sram space
            G_pgpe_wov_ocs.pwof_val->dw4.fields.dirty_current_10ma = pgpe_occ_get(idd_ocs_running_avg);
            G_pgpe_wov_ocs.pwof_val->dw5.fields.dirty_ttsr = G_pgpe_wov_ocs.ttsr_masked;

            //Use pstate_next because either the FIT will occur in the middle of actuate step or outside. In case,
            //it happens in the middle of actuate step, then pstate_next and pstate_curr may not be equal for a little bit and pstate_next
            //represents pstate actuated to. In case, FIT occurs outside actuate step, then pstate_next == pstate_curr
            G_pgpe_wov_ocs.pwof_val->dw2.fields.dirty_pstate_inst = pgpe_pstate_get(pstate_next);
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            G_pgpe_wov_ocs.hysteresis_cnt = HYSTERESIS_TICKS;
            dirty = OCS_DIRTY_SAMPLE_TYPE_11;

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
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY));
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
                dirty = OCS_DIRTY_SAMPLE_TYPE_00;
            }

            //Update instrumentation counters
            G_pgpe_wov_ocs.cnt_droop_ok++;

            //Buffer trace \\todo
        }

    }
    else if (droop == DROOP_LVL_LIGHT)
    {
        if (overcurrent == OCS_OVER_THRESH)
        {
            //Update current running avg value to occ sram space
            G_pgpe_wov_ocs.pwof_val->dw4.fields.dirty_current_10ma = pgpe_occ_get(idd_ocs_running_avg);
            G_pgpe_wov_ocs.pwof_val->dw5.fields.dirty_ttsr = G_pgpe_wov_ocs.ttsr_masked;
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
            dirty = OCS_DIRTY_SAMPLE_TYPE_00;

            if (pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_LIGHT_DROOP) == 0)
            {
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY));
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            }
            else if  (pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_LIGHT_DROOP) == 2)
            {
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
                dirty = OCS_DIRTY_SAMPLE_TYPE_10;
            }
            else if  (pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_LIGHT_DROOP) == 3)
            {
                //Update current running avg value to occ sram space
                G_pgpe_wov_ocs.pwof_val->dw4.fields.dirty_current_10ma = pgpe_occ_get(idd_ocs_running_avg);
                G_pgpe_wov_ocs.pwof_val->dw5.fields.dirty_ttsr = G_pgpe_wov_ocs.ttsr_masked;
                //Use pstate_next because either the FIT will occur in the middle of actuate step or outside. In case,
                //it happens in the middle of actuate step, then pstate_next and pstate_curr may not be equal for a little bit and pstate_next
                //represents pstate actuated to. In case, FIT occurs outside actuate step, then pstate_next == pstate_curr
                G_pgpe_wov_ocs.pwof_val->dw2.fields.dirty_pstate_inst = pgpe_pstate_get(pstate_next);
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
                dirty = OCS_DIRTY_SAMPLE_TYPE_11;
            }

            G_pgpe_wov_ocs.hysteresis_cnt = HYSTERESIS_TICKS;
            pgpe_wov_ocs_inc_tgt_pct();
            //Update instrumentation counters
            G_pgpe_wov_ocs.cnt_droop_light++;

            //Buffer trace \\todo
        }
    }
    else if (droop == DROOP_LVL_HEAVY)
    {
        if (overcurrent == OCS_OVER_THRESH)
        {
            //Update current running avg value to occ sram space
            G_pgpe_wov_ocs.pwof_val->dw4.fields.dirty_current_10ma = pgpe_occ_get(idd_ocs_running_avg);

            G_pgpe_wov_ocs.pwof_val->dw5.fields.dirty_ttsr = G_pgpe_wov_ocs.ttsr_masked;
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
            dirty = OCS_DIRTY_SAMPLE_TYPE_00;

            if (pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_HEAVY_DROOP) == 0)
            {
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY));
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            }
            else if (pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_HEAVY_DROOP) == 2)
            {
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
                dirty = OCS_DIRTY_SAMPLE_TYPE_10;
            }
            else if (pgpe_gppb_get_wov_dirty_undercurr_control(WOV_DIRTY_UC_CTRL_HEAVY_DROOP) == 3)
            {
                //Update current running avg value to occ sram space
                G_pgpe_wov_ocs.pwof_val->dw4.fields.dirty_current_10ma = pgpe_occ_get(idd_ocs_running_avg);
                G_pgpe_wov_ocs.pwof_val->dw5.fields.dirty_ttsr = G_pgpe_wov_ocs.ttsr_masked;
                //Use pstate_next because either the FIT will occur in the middle of actuate step or outside. In case,
                //it happens in the middle of actuate step, then pstate_next and pstate_curr may not be equal for a little bit and pstate_next
                //represents pstate actuated to. In case, FIT occurs outside actuate step, then pstate_next == pstate_curr
                G_pgpe_wov_ocs.pwof_val->dw2.fields.dirty_pstate_inst = pgpe_pstate_get(pstate_next);
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
                out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
                dirty = OCS_DIRTY_SAMPLE_TYPE_11;
            }

            G_pgpe_wov_ocs.hysteresis_cnt = HYSTERESIS_TICKS;
            pgpe_wov_ocs_inc_tgt_pct();

            //update instrumentation counters
            G_pgpe_wov_ocs.cnt_droop_heavy++;

            //Buffer trace \\todo
        }
    }
    else
    {
        if (overcurrent == OCS_OVER_THRESH)
        {
            //Update current running avg value to occ sram space
            G_pgpe_wov_ocs.pwof_val->dw4.fields.dirty_current_10ma = pgpe_occ_get(idd_ocs_running_avg);
            G_pgpe_wov_ocs.pwof_val->dw5.fields.dirty_ttsr = G_pgpe_wov_ocs.ttsr_masked;

            //Use pstate_next because either the FIT will occur in the middle of actuate step or outside. In case,
            //it happens in the middle of actuate step, then pstate_next and pstate_curr may not be equal for a little bit and pstate_next
            //represents pstate actuated to. In case, FIT occurs outside actuate step, then pstate_next == pstate_curr
            G_pgpe_wov_ocs.pwof_val->dw2.fields.dirty_pstate_inst = pgpe_pstate_get(pstate_next);
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
            G_pgpe_wov_ocs.hysteresis_cnt = HYSTERESIS_TICKS;
            dirty = OCS_DIRTY_SAMPLE_TYPE_11;
            //update instrumentation counters
            G_pgpe_wov_ocs.cnt_droop_chip_idle_oc++;

            //Buffer trace \\todo
        }
        else
        {
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY));
            out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));

            G_pgpe_wov_ocs.hysteresis_cnt = HYSTERESIS_TICKS;
            dirty = OCS_DIRTY_SAMPLE_TYPE_00;

            //update instrumentation counters
            G_pgpe_wov_ocs.cnt_droop_chip_idle++;

            //Buffer trace \\todo
        }

    }

    if (G_pgpe_wov_ocs.tgt_pct >= pgpe_gppb_get_wov_overv_max_pct())
    {
        out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY));
        out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, BIT32(PGPE_SAMPLE_DIRTY_TYPE));
        dirty = OCS_DIRTY_SAMPLE_TYPE_11;

        if (!G_overv_max_cnt_log)
        {
            G_pgpe_wov_ocs.overv_max_cnt += 1;
        }

        PK_TRACE_INF("WOV: tgt_pct=0x%x, overv_max_pct=0x%x", G_pgpe_wov_ocs.tgt_pct, pgpe_gppb_get_wov_overv_max_pct());
    }

    //Log only once
    if(G_pgpe_wov_ocs.overv_max_cnt == 3)
    {
        pgpe_error_info_log(PGPE_ERR_CODE_PGPE_WOV_OVERV_MAX_CNT);
        G_overv_max_cnt_log = 1;
    }

    if (G_pgpe_wov_ocs.dirty != dirty)
    {
        pgpe_opt_set_word(0, 0);
        pgpe_opt_set_byte(0, dirty);
        //ppe_trace_op(PGPE_OPT_OCS_DIRTY_TYPE , pgpe_opt_get());
        PK_TRACE_DBG("WOV: new_dirty=0x%x, old_dirty=0x%x", dirty, G_pgpe_wov_ocs.dirty);
    }

    G_pgpe_wov_ocs.dirty = dirty;

    if(pgpe_pstate_get(vdd_wov_bias) > 0)
    {
        G_pgpe_wov_ocs.cnt_wov_ov_ticks++;
    }
    else if(pgpe_pstate_get(vdd_wov_bias) < 0)
    {
        G_pgpe_wov_ocs.cnt_wov_uv_ticks++;
    }

    G_pgpe_wov_ocs.cnt_wov_total_ticks++;
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

void pgpe_wov_ocs_step_curr_pct()
{
    if (G_pgpe_wov_ocs.tgt_pct < G_pgpe_wov_ocs.curr_pct)
    {
        if (G_pgpe_wov_ocs.curr_pct > 0)
        {
            G_pgpe_wov_ocs.curr_pct -=  pgpe_gppb_get_wov_overv_step_decr_pct();
        }
        else if(G_pgpe_wov_ocs.curr_pct <= 0)
        {
            G_pgpe_wov_ocs.curr_pct -=  pgpe_gppb_get_wov_underv_step_decr_pct();
        }

        if (G_pgpe_wov_ocs.curr_pct < G_pgpe_wov_ocs.tgt_pct)
        {
            G_pgpe_wov_ocs.curr_pct = G_pgpe_wov_ocs.tgt_pct;
        }
    }
    else if (G_pgpe_wov_ocs.tgt_pct > G_pgpe_wov_ocs.curr_pct)
    {
        if (G_pgpe_wov_ocs.curr_pct > 0)
        {
            G_pgpe_wov_ocs.curr_pct +=  pgpe_gppb_get_wov_overv_step_incr_pct();
        }
        else if(G_pgpe_wov_ocs.curr_pct <= 0)
        {
            G_pgpe_wov_ocs.curr_pct +=  pgpe_gppb_get_wov_underv_step_incr_pct();
        }

        if (G_pgpe_wov_ocs.curr_pct > G_pgpe_wov_ocs.tgt_pct)
        {
            G_pgpe_wov_ocs.curr_pct = G_pgpe_wov_ocs.tgt_pct;
        }
    }
}
