/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_pstate.c $          */
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

#include "pgpe_pstate.h"
#include "pgpe_gppb.h"
#include "pgpe_avsbus_driver.h"
#include "pgpe_dpll.h"
#include "pgpe_dds.h"
#include "pgpe_wov_ocs.h"
#include "pgpe_xgpe.h"
#include "p10_scom_c_1.H"
#include "p10_oci_proc.H"
#include "pgpe_resclk.h"
#include "pgpe_thr_ctrl.h"
#include "p10_hcd_common.H"
#include "pstate_pgpe_occ_api.h"
#include "pgpe_header.h"
#include "p10_scom_eq_3.H"
#include "p10_scom_c_4.H"
#include "p10_scom_eq_8.H"
#include "pstates_occ.H"

//
//Local function prototypes
//
uint32_t pgpe_pstate_is_at_target();
uint32_t pgpe_pstate_get_vdd_region(uint32_t vdd);
uint32_t pgpe_pstate_get_vcs_region(uint32_t vcs);
uint32_t pgpe_pstate_get_idd_ac_region(uint32_t idd); //unused
uint32_t pgpe_pstate_get_idd_dc_region(uint32_t idd); //unused
uint32_t pgpe_pstate_get_ics_ac_region(uint32_t ics); //unused
uint32_t pgpe_pstate_get_ics_dc_region(uint32_t ics); //unused

pgpe_pstate_t G_pgpe_pstate __attribute__((section (".data_structs")));

void pgpe_pstate_init()
{
    PK_TRACE_INF("PSS: Init");
    uint32_t i;
    uint32_t ccsr;
    uint32_t ecomask;
    uint64_t rvcr;

    G_pgpe_pstate.pstate_status = PSTATE_STATUS_DISABLED;
    G_pgpe_pstate.wof_status = WOF_STATUS_DISABLED;
    G_pgpe_pstate.pmcr_owner = 0xFFFFFFFF;

    ccsr = in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW);
    ecomask = in32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW);

    G_pgpe_pstate.sort_core_count = 0;

    for (i = 0; i < MAX_QUADS; i++)
    {
        G_pgpe_pstate.ps_request[i] = 0xFF;
    }


    uint32_t* oppb_address = (uint32_t*)0x80300040;
    OCCPstateParmBlock_t* oppb = (OCCPstateParmBlock_t*)(*oppb_address + 0x80300000);
    PK_TRACE_INF("PSS: OPPB_Offset=0x%08x, OPPB_Addr=0x%08x", *oppb_address, (uint32_t)oppb);
    uint32_t msr = mfmsr();
    mtmsr(msr & ~MSR_IPE);
    G_pgpe_pstate.sort_core_count =  oppb->iddq.good_normal_cores_per_sort;
    mtmsr(msr);//Restore MSR

    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_ECO_COUNT) & 0x80)
    {
        G_pgpe_pstate.eco_core_count = pgpe_gppb_get_pgpe_flags(PGPE_FLAG_ECO_COUNT) & 0x7F;
    }
    else
    {
        for (i = 0; i < MAX_CORES; i++)
        {
            if (ecomask & CORE_MASK(i))
            {
                G_pgpe_pstate.eco_core_count++;
            }
        }
    }

    PK_TRACE_INF("PSS: sort_core_cores=%u; eco_core_count", G_pgpe_pstate.sort_core_count, G_pgpe_pstate.eco_core_count);

    if(G_pgpe_pstate.sort_core_count <= G_pgpe_pstate.eco_core_count)
    {
        G_pgpe_pstate.vratio_core_count = 1;
    }
    else
    {
        G_pgpe_pstate.vratio_core_count = G_pgpe_pstate.sort_core_count - G_pgpe_pstate.eco_core_count;
    }

    // If we don't have core bits set in CSSR, then
    // we shouldn't run any following features
    if (!ccsr)
    {
        pgpe_gppb_set_pgpe_flags_disable(PGPE_FLAG_RESCLK_ENABLE);
        pgpe_gppb_set_pgpe_flags_disable(PGPE_FLAG_RVRM_ENABLE);
        pgpe_gppb_set_pgpe_flags_disable(PGPE_FLAG_DDS_ENABLE);
    }

    G_pgpe_pstate.pstate_computed   = 0xFF;
    G_pgpe_pstate.pstate_target     = 0xFF;
    G_pgpe_pstate.pstate_next       = 0xFF;
    G_pgpe_pstate.pstate_curr       = 0xFF;
    G_pgpe_pstate.clip_min          = 0x0;
    G_pgpe_pstate.clip_max          = 0xFF;
    G_pgpe_pstate.clip_wof          = 0x0;
    G_pgpe_pstate.dcm_sibling_ps    = 0x0;
    G_pgpe_pstate.vdd_curr          = 0;
    G_pgpe_pstate.vdd_next          = 0;
    G_pgpe_pstate.vdd_curr_uplift   = 0;
    G_pgpe_pstate.vdd_next_uplift   = 0;
    G_pgpe_pstate.vdd_curr_ext      = 0;
    G_pgpe_pstate.vdd_next_ext      = 0;
    G_pgpe_pstate.vcs_curr          = 0;
    G_pgpe_pstate.vcs_next          = 0;
    G_pgpe_pstate.vcs_curr_uplift   = 0;
    G_pgpe_pstate.vcs_next_uplift   = 0;
    G_pgpe_pstate.vcs_curr_ext      = 0;
    G_pgpe_pstate.vcs_next_ext      = 0;

    G_pgpe_pstate.pmsr.value = 0;
    G_pgpe_pstate.pmsr.fields.version = PMCR_PMSR_VERSION_3;

    G_pgpe_pstate.vrt                = 0;
    G_pgpe_pstate.vindex             = 0;
    G_pgpe_pstate.active_core_ratio_64th    = 0;
    G_pgpe_pstate.vratio_vdd_snapup_64th    = 0;
    G_pgpe_pstate.vratio_vcs_snapup_64th    = 0;
    G_pgpe_pstate.vratio_vdd_rounded_64th   = 0;
    G_pgpe_pstate.vratio_vcs_rounded_64th   = 0;
    G_pgpe_pstate.vratio_index_format       = 0;
    G_pgpe_pstate.vratio_vdd_loadline_64th  = 64;
    G_pgpe_pstate.vratio_vdd_ceff_inst_64th = 0;
    G_pgpe_pstate.vratio_vcs_loadline_64th  = 64;
    G_pgpe_pstate.vratio_vcs_ceff_ins_64th  = 0;

    G_pgpe_pstate.power_proxy_scale  = 0;
    G_pgpe_pstate.update_pgpe_beacon = 1;
    G_pgpe_pstate.voltage_step_trace_cnt = 0;
    G_pgpe_pstate.throttle_clip = 0;
    G_pgpe_pstate.throttle_vrt = 0;
    G_pgpe_pstate.throttle_pmcr = 0;
    G_pgpe_pstate.throttle_target = 0;
    G_pgpe_pstate.throttle_curr = 0;
    G_pgpe_pstate.throttle_pending = 0;

    G_pgpe_pstate.fit_prof.cnt  = 0;
    G_pgpe_pstate.fit_prof.total_time = 0;
    G_pgpe_pstate.fit_prof.max_time = 0;
    G_pgpe_pstate.fit_prof.min_time = 0xFFFFFFFF;

    G_pgpe_pstate.step_prof.cnt = 0;
    G_pgpe_pstate.step_prof.total_time = 0;
    G_pgpe_pstate.step_prof.max_time = 0;
    G_pgpe_pstate.step_prof.min_time = 0xFFFFFFFF;


    G_pgpe_pstate.dds_prof_cmp.cnt = 0;
    G_pgpe_pstate.dds_prof_cmp.total_time = 0;
    G_pgpe_pstate.dds_prof_cmp.max_time = 0;
    G_pgpe_pstate.dds_prof_cmp.min_time = 0xFFFFFFFF;

    G_pgpe_pstate.dds_prof_pre.cnt = 0;
    G_pgpe_pstate.dds_prof_pre.total_time = 0;
    G_pgpe_pstate.dds_prof_pre.max_time = 0;
    G_pgpe_pstate.dds_prof_pre.min_time = 0xFFFFFFFF;

    G_pgpe_pstate.dds_prof_post.cnt = 0;
    G_pgpe_pstate.dds_prof_post.total_time = 0;
    G_pgpe_pstate.dds_prof_post.max_time = 0;
    G_pgpe_pstate.dds_prof_post.min_time = 0xFFFFFFFF;

    G_pgpe_pstate.resclk_prof.cnt = 0;
    G_pgpe_pstate.resclk_prof.total_time = 0;
    G_pgpe_pstate.resclk_prof.max_time = 0;
    G_pgpe_pstate.resclk_prof.min_time = 0xFFFFFFFF;

    G_pgpe_pstate.marker = 0xbabadead;

    PPE_GETSCOM_MC_Q_EQU(QME_RVCR, rvcr);
    G_pgpe_pstate.rvrm_volt  = (((rvcr >> 56) & 0xFF) <<
                                3); //Extract RVID Value from RVCR[1:7] and then multiply by 8 to get RVRM voltage


    if (pgpe_gppb_get_safe_frequency())
    {
        G_pgpe_pstate.pstate_safe = (pgpe_gppb_get_reference_frequency() -
                                     pgpe_gppb_get_safe_frequency() +  (pgpe_gppb_get_frequency_step() >> 1) ) / pgpe_gppb_get_frequency_step();

    }
    else
    {
        G_pgpe_pstate.pstate_safe = pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, CF0);
    }

    if(pgpe_gppb_get_ceiling_frequency())
    {
        G_pgpe_pstate.pstate_ceiling = (pgpe_gppb_get_reference_frequency() -
                                        pgpe_gppb_get_ceiling_frequency() + (pgpe_gppb_get_frequency_step() >> 1)) / pgpe_gppb_get_frequency_step();
    }
    else
    {
        G_pgpe_pstate.pstate_ceiling = 0;
    }

    G_pgpe_pstate.stopped_ac_vdd_64ths = pgpe_gppb_get_vratio_vdd(WOF_VRATIO_VDD_IDX_CORE)  + pgpe_gppb_get_vratio_vdd(
            WOF_VRATIO_VDD_IDX_RACETRACK_PER_CORE);
    G_pgpe_pstate.stopped_ac_vcs_64ths = pgpe_gppb_get_vratio_vcs(WOF_VRATIO_VCS_IDX_CORE)  + pgpe_gppb_get_vratio_vcs(
            WOF_VRATIO_VCS_IDX_CACHE_BASE);

    PK_TRACE_DBG("PSS: Psafe=0x%x", G_pgpe_pstate.pstate_safe);
    PK_TRACE_DBG("PSS: Pceil=0x%x, Ceiling Frequency=%u", G_pgpe_pstate.pstate_ceiling, pgpe_gppb_get_ceiling_frequency());
}

void* pgpe_pstate_data_addr()
{
    return &G_pgpe_pstate;
}

void pgpe_pstate_actuate_step()
{
    PkMachineContext ctx;
    uint32_t q, c;
    uint32_t ccsr;
    ccsr = in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW);

    PK_TRACE_INF("PSS: Enter Act_S PsCurr=0x%x, PsTgt=0x%x", G_pgpe_pstate.pstate_curr, G_pgpe_pstate.pstate_target);


    uint32_t start_time = in32(TP_TPCHIP_OCC_OCI_OCB_OTBR);

    //Compute vdd_next corresponding to pstate_target, and set pstate_next = pstate_target for now
    G_pgpe_pstate.vdd_next = pgpe_pstate_intp_vdd_from_ps(G_pgpe_pstate.pstate_target, VPD_PT_SET_BIASED);
    G_pgpe_pstate.pstate_next = G_pgpe_pstate.pstate_target;
    int32_t curr_wov_pct =
        pgpe_wov_ocs_get_wov_curr_pct(); //Curr wov pct is only read and written by pgpe_pstate.c module, so no need for synchronization
    int32_t vdd_wov_bias_next = ((int32_t)(G_pgpe_pstate.vdd_next) * curr_wov_pct) / 1000;

    G_pgpe_pstate.vdd_next_uplift = pgpe_pstate_intp_vddup_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED,
                                    G_pgpe_pstate.vratio_vdd_loadline_64th) >> 6;

    uint32_t vdd_next_w_wov = (uint32_t)((int32_t)G_pgpe_pstate.vdd_next + vdd_wov_bias_next);
    uint32_t vdd_curr_w_wov = (uint32_t)((int32_t)G_pgpe_pstate.vdd_curr + G_pgpe_pstate.vdd_wov_bias);
    uint32_t delta;
    uint32_t set_tgt_wov_pct = 0;
    uint32_t tgt_wov_pct = 0;
    uint32_t step_size = pgpe_gppb_get_ext_vrm_parms_step_size_mv(RUNTIME_RAIL_VDD);
    PK_TRACE_INF("PSS: Act_S VddCurr=%u, VddCurrUp=%u, VddCurrWovBias=%d, VddCurrExt=%u", G_pgpe_pstate.vdd_curr,
                 G_pgpe_pstate.vdd_curr_uplift, G_pgpe_pstate.vdd_wov_bias, G_pgpe_pstate.vdd_curr_ext);
    PK_TRACE_INF("PSS: Act_S VddNext=%u, VddNextUp=%u, VddNextWovBias=%d, VddNextExt=%u", G_pgpe_pstate.vdd_next,
                 G_pgpe_pstate.vdd_next_uplift, vdd_wov_bias_next, G_pgpe_pstate.vdd_next_ext);
    PK_TRACE_INF("PSS: Act_S VddCurrWWov=%u, VddNextWWov=%u CurrWovPct=%d", vdd_curr_w_wov  , vdd_next_w_wov, curr_wov_pct);

    //If lowering frequency (raising Pstates)
    if (G_pgpe_pstate.pstate_next > G_pgpe_pstate.pstate_curr)
    {
        PK_TRACE_INF("Lowering Frequency");

        if (G_pgpe_pstate.vdd_wov_bias < 0)   // Undervolting
        {
            PK_TRACE_INF("Undervolt");

            //Case1: Retain Current Voltage and Adjust Curr_WOV_Pct
            //Current voltage(including WOV bias) is lower than next pstate voltage
            if (vdd_curr_w_wov < G_pgpe_pstate.vdd_next)   //Case 1
            {
                PK_TRACE_INF("PSS: Act_S Lowering Freq, Case1, adjust(Pre),  wov_pct=%d,vdd_wov_bias=%d", curr_wov_pct,
                             vdd_wov_bias_next);
                curr_wov_pct = (((int32_t)vdd_curr_w_wov - (int32_t)G_pgpe_pstate.vdd_next) * 1000) / (int32_t)G_pgpe_pstate.vdd_next;

                PK_TRACE_INF("PSS: Act_S Lowering Freq, Case1, adjust(Post1) wov_pct=%d,vdd_wov_bias=%d", curr_wov_pct,
                             vdd_wov_bias_next);
                //Divide and multiply by step size to make curr_wov_pct a multiple of it
                curr_wov_pct = curr_wov_pct / pgpe_gppb_get_wov_underv_step_decr_pct();
                curr_wov_pct = curr_wov_pct * pgpe_gppb_get_wov_underv_step_decr_pct();
                PK_TRACE_INF("PSS: Act_S Lowering Freq, Case1, adjust(Post2) wov_pct=%d,vdd_wov_bias=%d", curr_wov_pct,
                             vdd_wov_bias_next);
                vdd_wov_bias_next = ((int32_t)(G_pgpe_pstate.vdd_next) * (curr_wov_pct)) / 1000;
                G_pgpe_pstate.vdd_next_ext = (uint32_t)((int32_t)G_pgpe_pstate.vdd_next + vdd_wov_bias_next +
                                                        (int32_t) G_pgpe_pstate.vdd_next_uplift);
                PK_TRACE_INF("PSS: Act_S Lowering Freq, Case1, adjust(Post) wov_pct=%d,vdd_wov_bias=%d", curr_wov_pct,
                             vdd_wov_bias_next);
            }
            //Case2: Clear WOV
            //Next Pstate Voltage is lower than the current voltage(including WOV bias)
            else
            {
                curr_wov_pct = 0;
                vdd_wov_bias_next = 0;
                set_tgt_wov_pct = 1;
                tgt_wov_pct = 0;

                //Make sure voltage jump isn't more than step size
                if ((int32_t)((int32_t)vdd_curr_w_wov - (int32_t)vdd_next_w_wov) > (int32_t)step_size)
                {
                    PK_TRACE_INF("PSS: Act_S Lowering Freq, Case2 jump > 50mV, clear(Pre) wov_pct=%d,vdd_wov_bias=%d", curr_wov_pct,
                                 vdd_wov_bias_next);
                    G_pgpe_pstate.vdd_next = (uint32_t)((int32_t)G_pgpe_pstate.vdd_curr + G_pgpe_pstate.vdd_wov_bias -
                                                        (int32_t) step_size);
                    G_pgpe_pstate.pstate_next = pgpe_pstate_intp_ps_from_vdd(
                                                    G_pgpe_pstate.vdd_next);//Interpolate next pstate based on next_voltage
                    G_pgpe_pstate.vdd_next = pgpe_pstate_intp_vdd_from_ps(G_pgpe_pstate.pstate_next,
                                             VPD_PT_SET_BIASED);//Interpolate next pstate voltage based on next pstate
                    G_pgpe_pstate.vdd_next_uplift = pgpe_pstate_intp_vddup_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED,
                                                    G_pgpe_pstate.vratio_vdd_loadline_64th) >> 6;
                    PK_TRACE_INF("PSS: Act_S Lowering Freq, Case2 jump > 50mV, clear(Post) pstate_next=%u, vdd_next=%d,vdd_wov_bias=%d",
                                 G_pgpe_pstate.pstate_next, G_pgpe_pstate.vdd_next, vdd_wov_bias_next);
                }

                G_pgpe_pstate.vdd_next_ext = (uint32_t)((int32_t)G_pgpe_pstate.vdd_next + vdd_wov_bias_next +
                                                        (int32_t) G_pgpe_pstate.vdd_next_uplift);
            }
        }
        else     // curr_wov_pct >= 0 -> No WOV or Overvolting
        {
            PK_TRACE_INF("NO WOV or Overvolting");

            //Case3: Retain WOV(will be 0 if no WOV)
            if ((int32_t)((int32_t)vdd_curr_w_wov - (int32_t)vdd_next_w_wov) > (int32_t)step_size)
            {
                PK_TRACE_INF("PSS: Act_S Lowering Freq, Case3 jump > 50mV, retain(Pre) wov_pct=%d,vdd_wov_bias=%d", curr_wov_pct,
                             vdd_wov_bias_next);
                uint32_t delta = (uint32_t)((int32_t)(step_size * 1000) /
                                            (1000 + curr_wov_pct));
                G_pgpe_pstate.vdd_next = G_pgpe_pstate.vdd_curr - delta;
                G_pgpe_pstate.pstate_next = pgpe_pstate_intp_ps_from_vdd(
                                                G_pgpe_pstate.vdd_next);//Interpolate next pstate based on next_voltage
                G_pgpe_pstate.vdd_next = pgpe_pstate_intp_vdd_from_ps(G_pgpe_pstate.pstate_next,
                                         VPD_PT_SET_BIASED);//Interpolate next pstate voltage based on next pstate
                G_pgpe_pstate.vdd_next_uplift = pgpe_pstate_intp_vddup_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED,
                                                G_pgpe_pstate.vratio_vdd_loadline_64th) >> 6;
                vdd_wov_bias_next = ((int32_t)(G_pgpe_pstate.vdd_next) * curr_wov_pct) / 1000;
                PK_TRACE_INF("PSS: Act_S Lowering Freq, Case3 jump > 50mV, retain(Post) pstate_next=%u, vdd_next=%d,vdd_wov_bias=%d",
                             G_pgpe_pstate.pstate_next, G_pgpe_pstate.vdd_next, vdd_wov_bias_next);
            }

            //next_voltage_loadline w WOV = Target Pstate voltage w WOV + uplift(target pstate, vratio)
            G_pgpe_pstate.vdd_next_ext = (uint32_t)((int32_t)G_pgpe_pstate.vdd_next + vdd_wov_bias_next +
                                                    (int32_t) G_pgpe_pstate.vdd_next_uplift);
        }
    }
    //If raising frequency (lowering Pstates)
    else
    {
        PK_TRACE_INF("Raising Frequency");

        if (G_pgpe_pstate.vdd_wov_bias < 0)   // Undervolting
        {
            PK_TRACE_INF("Undervolting");
            PK_TRACE_INF("PSS: Act_S VddCurrWWov=%u(0x%x), VddNextWWov=%u(0x%x)", vdd_curr_w_wov, vdd_curr_w_wov, vdd_next_w_wov,
                         vdd_next_w_wov);
            delta = vdd_next_w_wov - vdd_curr_w_wov;
            PK_TRACE_INF("PSS: Act_S delta=%d(0x%x), stepsize=%u", (int32_t)delta, delta, step_size);

            if ((int32_t)((int32_t)vdd_next_w_wov - (int32_t)vdd_curr_w_wov) > (int32_t)step_size)
            {
                PK_TRACE_INF("PSS: Act_S Raising Freq, Case1 jump > 50mV, retain(Pre), wov_pct=%d,vdd_wov_bias=%d", curr_wov_pct,
                             vdd_wov_bias_next);
                delta = (uint32_t)((int32_t)(step_size * 1000) /
                                   (1000 + curr_wov_pct));
                G_pgpe_pstate.vdd_next = G_pgpe_pstate.vdd_curr + delta;
                G_pgpe_pstate.pstate_next = pgpe_pstate_intp_ps_from_vdd(
                                                G_pgpe_pstate.vdd_next);//Interpolate next pstate based on next_voltage
                G_pgpe_pstate.vdd_next = pgpe_pstate_intp_vdd_from_ps(G_pgpe_pstate.pstate_next,
                                         VPD_PT_SET_BIASED);//Interpolate next pstate voltage based on next pstate
                G_pgpe_pstate.vdd_next_uplift = pgpe_pstate_intp_vddup_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED,
                                                G_pgpe_pstate.vratio_vdd_loadline_64th) >> 6;
                vdd_wov_bias_next = ((int32_t)(G_pgpe_pstate.vdd_next) * curr_wov_pct) / 1000;
                PK_TRACE_INF("PSS: Act_S Raising Freq, Case1 jump > 50mV, retain(Post) pstate_next=%u, vdd_next=%u, wov_pct=%d, vdd_wov_bias=%d",
                             G_pgpe_pstate.pstate_next, G_pgpe_pstate.vdd_next, curr_wov_pct, vdd_wov_bias_next);
            }

            G_pgpe_pstate.vdd_next_ext = (uint32_t)((int32_t)G_pgpe_pstate.vdd_next + vdd_wov_bias_next +
                                                    (int32_t) G_pgpe_pstate.vdd_next_uplift);

        }
        else if (G_pgpe_pstate.vdd_wov_bias > 0)
        {
            PK_TRACE_INF("Overvolting");

            //Case2: Retain WOV
            if ((int32_t)((int32_t)vdd_next_w_wov - (int32_t)vdd_curr_w_wov) > (int32_t)step_size)
            {
                PK_TRACE_INF("PSS: Act_S Raising Freq, Case2 jump > 50mV, retain(Pre) wov_pct=%d,vdd_wov_bias=%d", curr_wov_pct,
                             vdd_wov_bias_next);
                uint32_t delta = (uint32_t)((int32_t)(step_size * 1000) /
                                            (1000 + curr_wov_pct));
                G_pgpe_pstate.vdd_next = G_pgpe_pstate.vdd_curr + delta;
                G_pgpe_pstate.pstate_next = pgpe_pstate_intp_ps_from_vdd(
                                                G_pgpe_pstate.vdd_next);//Interpolate next pstate based on next_voltage
                G_pgpe_pstate.vdd_next = pgpe_pstate_intp_vdd_from_ps(G_pgpe_pstate.pstate_next,
                                         VPD_PT_SET_BIASED);//Interpolate next pstate voltage based on next pstate
                G_pgpe_pstate.vdd_next_uplift = pgpe_pstate_intp_vddup_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED,
                                                G_pgpe_pstate.vratio_vdd_loadline_64th) >> 6;
                vdd_wov_bias_next = ((int32_t)(G_pgpe_pstate.vdd_next) * curr_wov_pct) / 1000;
                PK_TRACE_INF("PSS: Act_S Raising Freq, Case2 jump > 50mV, retain(Post) pstate_next=%u, vdd_next=%d,vdd_wov_bias=%d",
                             G_pgpe_pstate.pstate_next, G_pgpe_pstate.vdd_next, vdd_wov_bias_next);
            }

            //next_voltage_loadline w WOV = Target Pstate voltage w WOV + uplift(target pstate, vratio)
            G_pgpe_pstate.vdd_next_ext = (uint32_t)((int32_t)G_pgpe_pstate.vdd_next + vdd_wov_bias_next +
                                                    (int32_t) G_pgpe_pstate.vdd_next_uplift);

        }
        else // No WOV
        {
            PK_TRACE_INF("NO WOV");

            if ((int32_t)((int32_t)vdd_next_w_wov - (int32_t)vdd_curr_w_wov) > (int32_t)step_size)
            {
                G_pgpe_pstate.vdd_next = G_pgpe_pstate.vdd_curr + step_size;
                G_pgpe_pstate.pstate_next = pgpe_pstate_intp_ps_from_vdd(
                                                G_pgpe_pstate.vdd_next);//Interpolate next pstate based on next_voltage
                G_pgpe_pstate.vdd_next = pgpe_pstate_intp_vdd_from_ps(G_pgpe_pstate.pstate_next,
                                         VPD_PT_SET_BIASED);//Interpolate next pstate voltage based on next pstate
                G_pgpe_pstate.vdd_next_uplift = pgpe_pstate_intp_vddup_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED,
                                                G_pgpe_pstate.vratio_vdd_loadline_64th) >> 6;
            }

            G_pgpe_pstate.vdd_next_ext = G_pgpe_pstate.vdd_next + G_pgpe_pstate.vdd_next_uplift;
            PK_TRACE_INF("PSS: Act_S Raising Freq, Case3, NO WOV wov_pct=%d,vdd_wov_bias=%d", curr_wov_pct, vdd_wov_bias_next);
        }
    }

    //Undervolting vmin check
    if (curr_wov_pct < 0)
    {
        if (((int32_t)G_pgpe_pstate.vdd_next + vdd_wov_bias_next) < (int32_t)pgpe_gppb_get_wov_underv_vmin_mv())
        {
            vdd_wov_bias_next = pgpe_gppb_get_wov_underv_vmin_mv() - G_pgpe_pstate.vdd_next;
            curr_wov_pct = (vdd_wov_bias_next * 1000) / (int32_t)G_pgpe_pstate.vdd_next;
            curr_wov_pct = curr_wov_pct / pgpe_gppb_get_wov_underv_step_decr_pct();
            curr_wov_pct = curr_wov_pct * pgpe_gppb_get_wov_underv_step_decr_pct();
            set_tgt_wov_pct = 1;
            tgt_wov_pct = curr_wov_pct;
            vdd_wov_bias_next = ((int32_t)(G_pgpe_pstate.vdd_next) * (curr_wov_pct)) / 1000;
            G_pgpe_pstate.vdd_next_ext = (uint32_t)((int32_t)G_pgpe_pstate.vdd_next + vdd_wov_bias_next +
                                                    (int32_t) G_pgpe_pstate.vdd_next_uplift);
            PK_TRACE_INF("PSS: Act_S UnderV_Vmin=%u, VddNext=%d, VddWovBiasNext=%d, CurrWovPct=%d",
                         pgpe_gppb_get_wov_underv_vmin_mv(), G_pgpe_pstate.vdd_next
                         , vdd_wov_bias_next,  curr_wov_pct);
        }
    }

    //Overvolting vmax check
    if (curr_wov_pct > 0)
    {
        if (((int32_t)G_pgpe_pstate.vdd_next + vdd_wov_bias_next) > (int32_t)pgpe_gppb_get_wov_overv_vmax_mv())
        {
            vdd_wov_bias_next = pgpe_gppb_get_wov_overv_vmax_mv() - G_pgpe_pstate.vdd_next;
            curr_wov_pct = (vdd_wov_bias_next * 1000) / (int32_t)G_pgpe_pstate.vdd_next;
            curr_wov_pct = curr_wov_pct / pgpe_gppb_get_wov_overv_step_incr_pct();
            curr_wov_pct = curr_wov_pct * pgpe_gppb_get_wov_overv_step_incr_pct();
            set_tgt_wov_pct = 1;
            tgt_wov_pct = curr_wov_pct;
            G_pgpe_pstate.vdd_next_ext = (uint32_t)((int32_t)G_pgpe_pstate.vdd_next + vdd_wov_bias_next +
                                                    (int32_t) G_pgpe_pstate.vdd_next_uplift);
            PK_TRACE_INF("PSS: Act_S OverV_Vmax=%u, VddWovBiasNext=%d, CurrWovPct=%d", pgpe_gppb_get_wov_overv_vmax_mv()
                         , vdd_wov_bias_next,  curr_wov_pct);
        }
    }


    G_pgpe_pstate.vdd_wov_bias = vdd_wov_bias_next;
    pgpe_wov_ocs_set_wov_curr_pct(curr_wov_pct);
    pk_critical_section_enter(&ctx);

    if(set_tgt_wov_pct)
    {
        pgpe_wov_ocs_set_wov_tgt_pct(tgt_wov_pct);
    }

    pk_critical_section_exit(&ctx);
    G_pgpe_pstate.voltage_step_trace_cnt = 0;

    //compute vcs_next
    G_pgpe_pstate.vcs_next = pgpe_pstate_intp_vcs_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED);

    //compute load line drop
    G_pgpe_pstate.vcs_next_uplift = pgpe_pstate_intp_vcsup_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED,
                                    G_pgpe_pstate.vratio_vcs_loadline_64th) >> 6;//Shift by 6 since vratio is in 64ths

    G_pgpe_pstate.vcs_next_ext = G_pgpe_pstate.vcs_next + G_pgpe_pstate.vcs_next_uplift;



    PK_TRACE_INF("PSS: Act_S, Final, PsTgt=0x%x, PsNext=0x%x", G_pgpe_pstate.pstate_target,
                 G_pgpe_pstate.pstate_next);
    PK_TRACE_INF("PSS: Act_S VddNext=%u, VddNextUp=%u, VddNextWovBias=%d, VddCurrExt=%u", G_pgpe_pstate.vdd_next,
                 G_pgpe_pstate.vdd_next_uplift, vdd_wov_bias_next, G_pgpe_pstate.vdd_next_ext);
    PK_TRACE_INF("PSS: Act_S VddCurrWWov=%u, VddNextWWov=%u CurrWovPct=%d", vdd_curr_w_wov,  vdd_next_w_wov, curr_wov_pct);
    //Compute power proxy scale factor
    cpms_dpcr dpcr;
    dpcr.value = 0;
    uint32_t power_proxy_scale_tgt;
    uint32_t x = G_pgpe_pstate.vdd_next * G_pgpe_pstate.vdd_next;
    //X>>8 minus X>>11 minus X>>13 plus (X>>7)&0x1 plus (X>>10)&0x1 plus (X>>12)&0x1   // approximate a divide by 295
    power_proxy_scale_tgt =  (x >> 8) - (x >> 11) - (x >> 13) + ((x >> 7) & 0x1) + ((x >> 10) & 0x1) + ((x >> 12) & 0x1);

    if (G_pgpe_pstate.vdd_next_ext <= pgpe_gppb_get_array_write_vdd_mv())
    {
        PPE_PUTSCOM_MC_Q(NET_CTRL0_RW_WOR, BIT64(NET_CTRL0_ARRAY_WRITE_ASSIST_EN));
    }

    //DDS Compute
    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_DDS_ENABLE))
    {
        uint32_t time = in32(TP_TPCHIP_OCC_OCI_OCB_OTBR);
        pgpe_dds_compute(G_pgpe_pstate.pstate_next);
        pgpe_pstate_profile(&G_pgpe_pstate.dds_prof_cmp, time);

        time = in32(TP_TPCHIP_OCC_OCI_OCB_OTBR);
        pgpe_dds_update_pre(G_pgpe_pstate.pstate_next);
        pgpe_pstate_profile(&G_pgpe_pstate.dds_prof_pre, time);
    }

    //See whether to set rVRM enablement override
    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_RVRM_ENABLE) && (in32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW) && BIT32(XGPE_ACTIVE)))
    {
        if ((G_pgpe_pstate.vdd_next_ext - G_pgpe_pstate.rvrm_volt) < pgpe_gppb_get_rvrm_deadzone_mv())
        {
            pgpe_xgpe_send_vret_updt(UPDATE_VRET_TYPE_SET);

            //Set RVCSR[RVID_OVERRIDE]
            for(q = 0; q < MAX_QUADS; q++)
            {
                if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_RVRM_QVID_ENABLE_VEC) & (0x00000080 >> q))
                {
                    for (c = 0; c < CORES_PER_QUAD; c++)
                    {
                        uint32_t core_num = q * CORES_PER_QUAD + c;

                        if (ccsr & CORE_MASK(core_num))
                        {
                            uint32_t core = 0x8 >> c;
                            PPE_PUTSCOM(PPE_SCOM_ADDR_UC(CPMS_RVCSR_WO_OR, q, core), BIT64(CPMS_RVCSR_RVID_OVERRIDE));
                        }
                    }
                }
            }
        }
    }

    //if lowering frequency
    if (G_pgpe_pstate.pstate_next > G_pgpe_pstate.pstate_curr)
    {
        //resclk
        uint32_t time = in32(TP_TPCHIP_OCC_OCI_OCB_OTBR);
        pgpe_resclk_update(G_pgpe_pstate.pstate_next);
        pgpe_pstate_profile(&G_pgpe_pstate.resclk_prof, time);

        //write DPLL(Update freq)
        pgpe_dpll_write_dpll_freq_ps(G_pgpe_pstate.pstate_next);

        //Write average of proxy_scale_factor_target and proxy_scale_factor_prev to DPCRs
        dpcr.fields.proxy_scale_factor = (power_proxy_scale_tgt + G_pgpe_pstate.power_proxy_scale) >> 1;
        PPE_PUTSCOM_MC(CPMS_DPCR, 0xF, dpcr.value);

        //lower VDD
        if (!pgpe_gppb_get_pgpe_flags(PGPE_FLAG_STATIC_VOLTAGE_ENABLE))
        {
            pgpe_avsbus_voltage_write(pgpe_gppb_get_avs_bus_topology_vdd_avsbus_num(),
                                      pgpe_gppb_get_avs_bus_topology_vdd_avsbus_rail(),
                                      G_pgpe_pstate.vdd_next_ext);
        }

        //Write proxy_scale_factor_target to DPCRs
        dpcr.fields.proxy_scale_factor = power_proxy_scale_tgt;
        PPE_PUTSCOM_MC(CPMS_DPCR, 0xF, dpcr.value);

        //lower VCS
        if (!pgpe_gppb_get_pgpe_flags(PGPE_FLAG_STATIC_VOLTAGE_ENABLE))
        {
            pgpe_avsbus_voltage_write(pgpe_gppb_get_avs_bus_topology_vcs_avsbus_num(),
                                      pgpe_gppb_get_avs_bus_topology_vcs_avsbus_rail(),
                                      G_pgpe_pstate.vcs_next_ext);
        }

        if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_DDS_ENABLE))
        {
            time = in32(TP_TPCHIP_OCC_OCI_OCB_OTBR);
            pgpe_dds_update_post(G_pgpe_pstate.pstate_next);
            pgpe_pstate_profile(&G_pgpe_pstate.dds_prof_post, time);
        }
    }

    //raising frequency
    else if (G_pgpe_pstate.pstate_next < G_pgpe_pstate.pstate_curr)
    {
        //raise VCS
        if (!pgpe_gppb_get_pgpe_flags(PGPE_FLAG_STATIC_VOLTAGE_ENABLE))
        {
            pgpe_avsbus_voltage_write(pgpe_gppb_get_avs_bus_topology_vcs_avsbus_num(),
                                      pgpe_gppb_get_avs_bus_topology_vcs_avsbus_rail(),
                                      G_pgpe_pstate.vcs_next_ext);
        }

        //Write average of proxy_scale_factor_target and proxy_scale_factor_prev to DPCRs
        dpcr.fields.proxy_scale_factor = (power_proxy_scale_tgt + G_pgpe_pstate.power_proxy_scale) >> 1;
        PPE_PUTSCOM_MC(CPMS_DPCR, 0xF, dpcr.value);

        //raise VDD
        if (!pgpe_gppb_get_pgpe_flags(PGPE_FLAG_STATIC_VOLTAGE_ENABLE))
        {
            pgpe_avsbus_voltage_write(pgpe_gppb_get_avs_bus_topology_vdd_avsbus_num(),
                                      pgpe_gppb_get_avs_bus_topology_vdd_avsbus_rail(),
                                      G_pgpe_pstate.vdd_next_ext);
        }

        //Write proxy_scale_factor_target to DPCRs
        dpcr.fields.proxy_scale_factor = power_proxy_scale_tgt;
        PPE_PUTSCOM_MC(CPMS_DPCR, 0xF, dpcr.value);

        //write DPLL(Update freq)
        pgpe_dpll_write_dpll_freq_ps(G_pgpe_pstate.pstate_next);

        //resclk
        uint32_t time = in32(TP_TPCHIP_OCC_OCI_OCB_OTBR);
        pgpe_resclk_update(G_pgpe_pstate.pstate_next);
        pgpe_pstate_profile(&G_pgpe_pstate.resclk_prof, time);

        if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_DDS_ENABLE))
        {
            time = in32(TP_TPCHIP_OCC_OCI_OCB_OTBR);
            pgpe_dds_update_post(G_pgpe_pstate.pstate_next);
            pgpe_pstate_profile(&G_pgpe_pstate.dds_prof_post, time);
        }
    }

    //See whether to remove rVRM enablement override
    if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_RVRM_ENABLE) && (in32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW) && BIT32(XGPE_ACTIVE)))
    {
        if ((G_pgpe_pstate.vdd_next_ext - G_pgpe_pstate.rvrm_volt) >= pgpe_gppb_get_rvrm_deadzone_mv())
        {
            pgpe_xgpe_send_vret_updt(UPDATE_VRET_TYPE_CLEAR);

            for(q = 0; q < MAX_QUADS; q++)
            {
                if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_RVRM_QVID_ENABLE_VEC) & (0x00000080 >> q))
                {
                    for (c = 0; c < CORES_PER_QUAD; c++)
                    {
                        uint32_t core_num = q * CORES_PER_QUAD + c;

                        if (ccsr & CORE_MASK(core_num))
                        {
                            //Set RVCSR[RVID_OVERRIDE]
                            uint32_t core = 0x8 >> c;
                            PPE_PUTSCOM(PPE_SCOM_ADDR_UC(CPMS_RVCSR_WO_CLEAR, q, core), BIT64(CPMS_RVCSR_RVID_OVERRIDE));
                        }
                    }
                }
            }
        }
    }

    if (G_pgpe_pstate.vdd_next_ext > pgpe_gppb_get_array_write_vdd_mv())
    {
        PPE_PUTSCOM_MC_Q(NET_CTRL0_RW_WAND, ~BIT64(NET_CTRL0_ARRAY_WRITE_ASSIST_EN));
    }

    G_pgpe_pstate.power_proxy_scale = power_proxy_scale_tgt;
    pgpe_pstate_update_vdd_vcs_ps();
    pgpe_pstate_pmsr_updt();
    pgpe_pstate_pmsr_write();

    pgpe_opt_set_word(0, 0);
    pgpe_opt_set_word(1, 0);
    pgpe_opt_set_byte(0, pgpe_pstate_get(pstate_target));
    pgpe_opt_set_byte(1, pgpe_pstate_get(pstate_curr));
    pgpe_opt_set_half(1, pgpe_pstate_get(vdd_curr_ext));
    pgpe_opt_set_half(2, pgpe_pstate_get(vcs_curr_ext));
    //pgpe_opt_set_byte(6, );  //\TODO Add RVRM Transition
    ppe_trace_op(PGPE_OPT_ACTUATE_STEP_DONE, pgpe_opt_get());
    pgpe_pstate_profile(&G_pgpe_pstate.step_prof, start_time);

}

void pgpe_pstate_actuate_voltage_step()
{
    PkMachineContext ctx;

    if (pgpe_wov_ocs_is_wov_overv_enabled() || pgpe_wov_ocs_is_wov_underv_enabled() )
    {
        int32_t curr_wov_pct, tgt_wov_pct, vdd_wov_bias_next, updt_wov_pct;
        updt_wov_pct = 0;

        //1 Step WOV Curr Pct towards WOV Target Pct
        pgpe_wov_ocs_step_curr_pct();

        //2 Calculate VDD WOV Bias
        curr_wov_pct = pgpe_wov_ocs_get_wov_curr_pct();
        vdd_wov_bias_next = ((int32_t)(G_pgpe_pstate.vdd_curr)  *
                             pgpe_wov_ocs_get_wov_curr_pct()) / 1000;

        if(G_pgpe_pstate.voltage_step_trace_cnt < 10)
        {
            PK_TRACE_INF("PSS: Act_V VddCurr=%u, VddWovBiasNext=%d, CurrWovPct=%d", G_pgpe_pstate.vdd_curr, vdd_wov_bias_next,
                         curr_wov_pct);
        }


        //3 Clip vdd wov bias
        //Undervolting
        if (curr_wov_pct < 0)
        {
            if (((int32_t)G_pgpe_pstate.vdd_curr + vdd_wov_bias_next) < (int32_t)pgpe_gppb_get_wov_underv_vmin_mv())
            {
                vdd_wov_bias_next = pgpe_gppb_get_wov_underv_vmin_mv() - G_pgpe_pstate.vdd_curr;
                curr_wov_pct = (vdd_wov_bias_next * 1000) / (int32_t)G_pgpe_pstate.vdd_next;
                curr_wov_pct = curr_wov_pct / pgpe_gppb_get_wov_underv_step_decr_pct();
                curr_wov_pct = curr_wov_pct * pgpe_gppb_get_wov_underv_step_decr_pct();
                tgt_wov_pct = curr_wov_pct;
                updt_wov_pct = 1;
                vdd_wov_bias_next = ((int32_t)(G_pgpe_pstate.vdd_next) * (curr_wov_pct)) / 1000;


                //PK_TRACE_INF("PSS: Act_V UnderV_Vmin =%u, VddWovBiasNext=%d, CurrWovPct=%d", pgpe_gppb_get_wov_underv_vmin_mv()
                //             , vdd_wov_bias_next,  curr_wov_pct);
            }
        }

        //Overvolting vmax check
        if (curr_wov_pct > 0)
        {
            if (((int32_t)G_pgpe_pstate.vdd_next + vdd_wov_bias_next) > (int32_t)pgpe_gppb_get_wov_overv_vmax_mv())
            {
                vdd_wov_bias_next = pgpe_gppb_get_wov_overv_vmax_mv() - G_pgpe_pstate.vdd_next;
                curr_wov_pct = (vdd_wov_bias_next * 1000) / (int32_t)G_pgpe_pstate.vdd_next;
                curr_wov_pct = curr_wov_pct / pgpe_gppb_get_wov_overv_step_incr_pct();
                curr_wov_pct = curr_wov_pct * pgpe_gppb_get_wov_overv_step_incr_pct();
                tgt_wov_pct = curr_wov_pct;
                updt_wov_pct = 1;
                //PK_TRACE_INF("PSS: Act_S OverV_Vmax=%u, VddWovBiasNext=%d, CurrWovPct=%d", pgpe_gppb_get_wov_overv_vmax_mv()
                //         , vdd_wov_bias_next,  curr_wov_pct);
            }
        }

        G_pgpe_pstate.vdd_wov_bias = vdd_wov_bias_next;
        G_pgpe_pstate.vdd_next_ext = G_pgpe_pstate.vdd_next + G_pgpe_pstate.vdd_next_uplift + G_pgpe_pstate.vdd_wov_bias;

        //Update target and curr wov pct
        if(updt_wov_pct)
        {
            pgpe_wov_ocs_set_wov_curr_pct(curr_wov_pct); //This is update only during actuate step or actuate voltage step
            //Need this inside critical section because tgt_pct is updated inside FIT
            pk_critical_section_enter(&ctx);
            {
                pgpe_wov_ocs_set_wov_tgt_pct(tgt_wov_pct);
            }
            pk_critical_section_exit(&ctx);
        }


        //Compute power proxy scale factor
        cpms_dpcr dpcr;
        dpcr.value = 0;
        uint32_t power_proxy_scale_tgt;
        uint32_t x = G_pgpe_pstate.vdd_next * G_pgpe_pstate.vdd_next;
        //X>>8 minus X>>11 minus X>>13 plus (X>>7)&0x1 plus (X>>10)&0x1 plus (X>>12)&0x1   // approximate a divide by 295
        power_proxy_scale_tgt =  (x >> 8) - (x >> 11) - (x >> 13) + ((x >> 7) & 0x1) + ((x >> 10) & 0x1) + ((x >> 12) & 0x1);

        if (G_pgpe_pstate.vdd_next_ext <= pgpe_gppb_get_array_write_vdd_mv())
        {
            PPE_PUTSCOM_MC_Q(NET_CTRL0_RW_WOR, BIT64(NET_CTRL0_ARRAY_WRITE_ASSIST_EN));
        }

        //See whether to set rVRM enablement override
        if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_RVRM_ENABLE) && (in32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW) && BIT32(XGPE_ACTIVE)))
        {
            if ((G_pgpe_pstate.vdd_next_ext - G_pgpe_pstate.rvrm_volt) < pgpe_gppb_get_rvrm_deadzone_mv())
            {
                pgpe_xgpe_send_vret_updt(UPDATE_VRET_TYPE_SET);
                //Set RVCSR[RVID_OVERRIDE]
                PPE_PUTSCOM_MC(CPMS_RVCSR_WO_OR, 0xF, BIT64(CPMS_RVCSR_RVID_OVERRIDE));
            }
        }

        //lowering voltage
        if (G_pgpe_pstate.vdd_next_ext < G_pgpe_pstate.vdd_curr_ext)
        {
            //Write average of proxy_scale_factor_target and proxy_scale_factor_prev to DPCRs
            dpcr.fields.proxy_scale_factor = (power_proxy_scale_tgt + G_pgpe_pstate.power_proxy_scale) >> 1;
            PPE_PUTSCOM_MC(CPMS_DPCR, 0xF, dpcr.value);

            //lower VDD
            if (!pgpe_gppb_get_pgpe_flags(PGPE_FLAG_STATIC_VOLTAGE_ENABLE))
            {
                pgpe_avsbus_voltage_write(pgpe_gppb_get_avs_bus_topology_vdd_avsbus_num(),
                                          pgpe_gppb_get_avs_bus_topology_vdd_avsbus_rail(),
                                          G_pgpe_pstate.vdd_next_ext);
            }

            //Write proxy_scale_factor_target to DPCRs
            dpcr.fields.proxy_scale_factor = power_proxy_scale_tgt;
            PPE_PUTSCOM_MC(CPMS_DPCR, 0xF, dpcr.value);
        }
        //raising voltage
        else if (G_pgpe_pstate.vdd_next_ext > G_pgpe_pstate.vdd_curr_ext)
        {
            //Write average of proxy_scale_factor_target and proxy_scale_factor_prev to DPCRs
            dpcr.fields.proxy_scale_factor = (power_proxy_scale_tgt + G_pgpe_pstate.power_proxy_scale) >> 1;
            PPE_PUTSCOM_MC(CPMS_DPCR, 0xF, dpcr.value);

            //raise VDD
            if (!pgpe_gppb_get_pgpe_flags(PGPE_FLAG_STATIC_VOLTAGE_ENABLE))
            {
                pgpe_avsbus_voltage_write(pgpe_gppb_get_avs_bus_topology_vdd_avsbus_num(),
                                          pgpe_gppb_get_avs_bus_topology_vdd_avsbus_rail(),
                                          G_pgpe_pstate.vdd_next_ext);
            }

            //Write proxy_scale_factor_target to DPCRs
            dpcr.fields.proxy_scale_factor = power_proxy_scale_tgt;
            PPE_PUTSCOM_MC(CPMS_DPCR, 0xF, dpcr.value);
        }

        //See whether to remove rVRM enablement override
        if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_RVRM_ENABLE) && (in32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW) && BIT32(XGPE_ACTIVE)))
        {
            if ((G_pgpe_pstate.vdd_next_ext - G_pgpe_pstate.rvrm_volt) >= pgpe_gppb_get_rvrm_deadzone_mv())
            {
                pgpe_xgpe_send_vret_updt(UPDATE_VRET_TYPE_CLEAR);
                //Set RVCSR[RVID_OVERRIDE]
                PPE_PUTSCOM_MC(CPMS_RVCSR_WO_CLEAR, 0xF, BIT64(CPMS_RVCSR_RVID_OVERRIDE));
            }
        }

        if (G_pgpe_pstate.vdd_next_ext > pgpe_gppb_get_array_write_vdd_mv())
        {
            PPE_PUTSCOM_MC_Q(NET_CTRL0_RW_WAND, ~BIT64(NET_CTRL0_ARRAY_WRITE_ASSIST_EN));
        }

        G_pgpe_pstate.power_proxy_scale = power_proxy_scale_tgt;
        pgpe_pstate_update_vdd_vcs_ps();

        if(G_pgpe_pstate.voltage_step_trace_cnt < 10)
        {
            PK_TRACE_INF("PSS: Act_V, VddNextExt=%d VddWovBias=%d WovTgtPct=%d WovCurrPct=%d", G_pgpe_pstate.vdd_next_ext,
                         G_pgpe_pstate.vdd_wov_bias, pgpe_wov_ocs_get_wov_tgt_pct(), pgpe_wov_ocs_get_wov_curr_pct());
            G_pgpe_pstate.voltage_step_trace_cnt++;
        }

    }
}

void pgpe_pstate_actuate_throttle()
{
    PK_TRACE_INF("PSS: Actuate Throttle thr_tgt=%u thr_curr=%u", G_pgpe_pstate.throttle_target,
                 G_pgpe_pstate.throttle_curr);

    //Throttle PI Loop
    if(pgpe_pstate_is_wof_enabled())
    {
        pgpe_thr_ctrl_update(G_pgpe_pstate.throttle_target);
    }
    //Directly go to throttle
    else
    {
        pgpe_thr_ctrl_set_next_ftx(G_pgpe_pstate.throttle_target);
        pgpe_thr_ctrl_write_wcor(G_pgpe_pstate.throttle_target);
        pgpe_thr_ctrl_set_curr_ftx(G_pgpe_pstate.throttle_target);
    }

    G_pgpe_pstate.throttle_curr = pgpe_thr_ctrl_get_curr_ftx();
}

void pgpe_pstate_actuate_safe_mode()
{
    PkMachineContext ctx;

    //Move throttling to ATTR_SAFE_MODE_THROTTLE_IDX
    if (pgpe_thr_ctrl_is_enabled())
    {
        pgpe_thr_ctrl_set_curr_ftx(pgpe_gppb_get_safe_throttle_idx());
        pgpe_thr_ctrl_write_wcor(pgpe_gppb_get_safe_throttle_idx());
    }

    //Set ps request, clips and target to safe mode
    uint32_t q;

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_pstate.ps_request[q] = pgpe_pstate_get(pstate_safe);
    }

    pgpe_pstate_set(clip_min, pgpe_pstate_get(pstate_safe));
    pgpe_pstate_set(clip_max, pgpe_pstate_get(pstate_safe));
    pgpe_pstate_compute();
    pgpe_pstate_apply_clips();

    //Actuate to safe mode
    //Actuate to safe mode(disable WOV before)
    pk_critical_section_enter(&ctx);
    pgpe_wov_ocs_disable();
    pgpe_wov_ocs_clear_wov_tgt_pct();
    pgpe_wov_ocs_set_wov_curr_pct(0);
    pgpe_pstate_set(vdd_wov_bias, 0);
    pgpe_pstate_set(vcs_wov_bias, 0);
    pk_critical_section_exit(&ctx);

    while(!pgpe_pstate_is_at_target())
    {
        pgpe_pstate_actuate_step();
    }

    //Update PMSR
    pgpe_pstate_update_vdd_vcs_ps();
    pgpe_pstate_pmsr_set_safe_mode();
    pgpe_pstate_pmsr_write();
    out32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_WO_OR, BIT32(PGPE_SAFE_MODE_ACTIVE));
    ppe_trace_op(PGPE_OPT_SAFE_MODE_DONE, 0);

}

//\todo Determine if this is really needed. One optimization
//is to keep a minimum value which is updated whenever a set_pmcr IPC comes in
//or pmcr request is forwarded. That is update the min whenever G_pgpe_pstate.ps_request
//is updated
void pgpe_pstate_compute()
{
    uint32_t q;
    uint32_t min = 0xFF;

    for (q = 0; q < MAX_QUADS; q++)
    {
        if ((G_pgpe_pstate.ps_request[q]) < min)
        {
            min = G_pgpe_pstate.ps_request[q];
        }
    }

    G_pgpe_pstate.pstate_computed = min;

    PK_TRACE_INF("PSS: PsComputed=0x%x", G_pgpe_pstate.pstate_computed);
}

void pgpe_pstate_set_throttle_pmcr()
{
    G_pgpe_pstate.throttle_pmcr = G_pgpe_pstate.pstate_computed > pgpe_pstate_get(pstate_safe)
                                  ? G_pgpe_pstate.pstate_computed - pgpe_pstate_get(pstate_safe) : 0;
    PK_TRACE_INF("PSS: PMCRThr=0x%x", G_pgpe_pstate.throttle_pmcr);
}

void pgpe_pstate_set_throttle_clip()
{
    G_pgpe_pstate.throttle_clip = G_pgpe_pstate.clip_min  > pgpe_pstate_get(pstate_safe)
                                  ? G_pgpe_pstate.clip_min - pgpe_pstate_get(pstate_safe) : 0;
    PK_TRACE_INF("PSS: ClipThr=0x%x", G_pgpe_pstate.throttle_clip);
}

void pgpe_pstate_set_throttle_vrt()
{
    G_pgpe_pstate.throttle_vrt = G_pgpe_pstate.clip_wof  > pgpe_pstate_get(pstate_safe)
                                 ? G_pgpe_pstate.clip_wof - pgpe_pstate_get(pstate_safe) : 0;
    PK_TRACE_INF("PSS: VRTThr=0x%x", G_pgpe_pstate.throttle_vrt);
}

void pgpe_pstate_throttle_compute()
{
    G_pgpe_pstate.throttle_target = G_pgpe_pstate.throttle_pmcr;

    if(G_pgpe_pstate.throttle_target < G_pgpe_pstate.throttle_clip)
    {
        G_pgpe_pstate.throttle_target = G_pgpe_pstate.throttle_clip;
    }

    if(G_pgpe_pstate.throttle_target < G_pgpe_pstate.throttle_vrt)
    {
        G_pgpe_pstate.throttle_target = G_pgpe_pstate.throttle_vrt;
    }

    G_pgpe_pstate.throttle_pending = 1;


    //Currently not in throttle space and throttle target is zero
    if ((G_pgpe_pstate.throttle_curr == 0) && (G_pgpe_pstate.throttle_target == 0))
    {
        pgpe_thr_ctr_clear_ceff_err_array();
        G_pgpe_pstate.throttle_pending = 0;
    }

    PK_TRACE_INF("PSS: PsThrCurr =0x%08x, PsThrTarget=0x%x", G_pgpe_pstate.throttle_curr, G_pgpe_pstate.throttle_target);
}

uint32_t pgpe_pstate_is_throttle_pending()
{
    return (G_pgpe_pstate.throttle_pending);
}

void pgpe_pstate_apply_clips()
{
    //\todo Use sibling pstate(DCM)
    G_pgpe_pstate.pstate_target = G_pgpe_pstate.pstate_computed;

    uint32_t clip_min, clip_max;

    clip_min = G_pgpe_pstate.clip_min;

    //Min Pstate(higher freq) should not be lower(higher freq) than pstate_ceiling
    clip_min = G_pgpe_pstate.clip_min > G_pgpe_pstate.pstate_ceiling ?
               G_pgpe_pstate.clip_min : G_pgpe_pstate.pstate_ceiling;

    //Check if wof_clip is lower(freq) than clip_min. Otherwise, clip_min is thermal clip min
    if (G_pgpe_pstate.clip_wof > clip_min)
    {
        clip_min = G_pgpe_pstate.clip_wof;

        //Make sure that clip_min is not lower(freq),higher pstate than clip_max. If, yes,
        //then set it to clip_max
        if(clip_min > G_pgpe_pstate.clip_max)
        {
            clip_min = G_pgpe_pstate.clip_max;
        }

        //Make sure that clip_min is not lower(freq), higher pstate than clip_min. If, yes, then set
        //it to pstate_safe
        if(clip_min > G_pgpe_pstate.pstate_safe)
        {
            clip_min = G_pgpe_pstate.pstate_safe;
        }
    }

    //Max Pstate(lower freq) should not be higher(lower freq) than pstate_safe
    clip_max = G_pgpe_pstate.clip_max < G_pgpe_pstate.pstate_safe ?
               G_pgpe_pstate.clip_max : G_pgpe_pstate.pstate_safe;

    if (G_pgpe_pstate.pstate_computed < clip_min)
    {
        G_pgpe_pstate.pstate_target = clip_min;
    }

    if (G_pgpe_pstate.pstate_computed > clip_max)
    {
        G_pgpe_pstate.pstate_target = clip_max;
    }

    PK_TRACE_INF("PSS: PsTgt=0x%x", G_pgpe_pstate.pstate_target);
    pgpe_opt_set_word(0, 0);
    pgpe_opt_set_byte(0, G_pgpe_pstate.pstate_target);
    ppe_trace_op(PGPE_OPT_AUCTION_DONE, pgpe_opt_get());
}

void pgpe_pstate_compute_vratio(uint32_t pstate)
{
    uint32_t ccsr;
    uint32_t ecomask;
    uint32_t c;
    uint32_t vratio_vdd_accum_64th = 0;
    uint32_t vratio_vcs_accum_64th = 0;
    uint32_t active_core_accum_64th = 0;
    HcodeOCCSharedData_t* occ_shared_data = (HcodeOCCSharedData_t*)OCC_SHARED_SRAM_ADDR_START;
    iddq_activity_t* G_p_iddq_act_val =  (iddq_activity_t*)(OCC_SHARED_SRAM_ADDR_START + occ_shared_data->iddq_data_offset);

    ccsr = in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW);
    ecomask = in32(TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW);

    for (c = 0; c < MAX_CORES; c++)
    {
        if (ecomask & CORE_MASK(c))
        {
            continue;
        }

        if (ccsr & CORE_MASK(c))
        {
            uint32_t coreclk_off_64th = G_p_iddq_act_val->act_val[c][ACT_CNT_IDX_CORECLK_OFF] << 3;
            uint32_t corecache_off_64th = G_p_iddq_act_val->act_val[c][ACT_CNT_IDX_CORECACHE_OFF] << 3;
            uint32_t mma_off_64th = G_p_iddq_act_val->act_val[c][ACT_CNT_IDX_MMA_OFF] << 3;
            uint32_t stopped_64th = coreclk_off_64th + corecache_off_64th;
            active_core_accum_64th += 64 - stopped_64th;
            vratio_vdd_accum_64th  += 64 - (  ((G_pgpe_pstate.stopped_ac_vdd_64ths * stopped_64th) >> 6)
                                              + ((pgpe_gppb_get_vratio_vdd(WOF_VRATIO_VDD_IDX_CACHE_BASE) * corecache_off_64th) >> 6)
                                              + ((pgpe_gppb_get_vratio_vdd(WOF_VRATIO_VDD_IDX_MMA) * mma_off_64th) >> 6));
            vratio_vcs_accum_64th += 64 - (((G_pgpe_pstate.stopped_ac_vcs_64ths * stopped_64th) >> 6)
                                           + ((pgpe_gppb_get_vratio_vcs(WOF_VRATIO_VCS_IDX_CACHE_BASE) * corecache_off_64th) >> 6));
        }
    }

    PK_TRACE_DBG("PSS: active_core_accum_64th=0x%08x, vratio_vdd_accum_64th=0x%08x, vratio_vcs_accum_64th=0x%08x",
                 active_core_accum_64th, vratio_vdd_accum_64th, vratio_vcs_accum_64th);
    //Index Format is 16-bits. We accumulate in 6bits, so do a shift by 10
    G_pgpe_pstate.vratio_index_format       = ((((active_core_accum_64th) << 10) - 1) /
            (G_pgpe_pstate.vratio_core_count));
    G_pgpe_pstate.active_core_ratio_64th    = G_pgpe_pstate.vratio_index_format >> 10; //Index format back to 64ths
    G_pgpe_pstate.vratio_vdd_snapup_64th    = ((vratio_vdd_accum_64th + 63) /
            (G_pgpe_pstate.vratio_core_count));
    G_pgpe_pstate.vratio_vcs_snapup_64th    = ((vratio_vcs_accum_64th + 63) /
            (G_pgpe_pstate.vratio_core_count));
    G_pgpe_pstate.vratio_vdd_rounded_64th   = ((vratio_vdd_accum_64th + 32) /
            (G_pgpe_pstate.vratio_core_count));
    G_pgpe_pstate.vratio_vcs_rounded_64th   = ((vratio_vcs_accum_64th + 32) /
            (G_pgpe_pstate.vratio_core_count));
    G_pgpe_pstate.vratio_vdd_snapup_64th    = G_pgpe_pstate.vratio_vdd_snapup_64th < 64 ?
            G_pgpe_pstate.vratio_vdd_snapup_64th : 64;
    G_pgpe_pstate.vratio_vcs_snapup_64th    = G_pgpe_pstate.vratio_vcs_snapup_64th < 64 ?
            G_pgpe_pstate.vratio_vcs_snapup_64th : 64;
    G_pgpe_pstate.vratio_vdd_rounded_64th   = G_pgpe_pstate.vratio_vdd_rounded_64th < 64 ?
            G_pgpe_pstate.vratio_vdd_rounded_64th : 64;
    G_pgpe_pstate.vratio_vcs_rounded_64th   = G_pgpe_pstate.vratio_vcs_rounded_64th < 64 ?
            G_pgpe_pstate.vratio_vcs_rounded_64th : 64;


    G_pgpe_pstate.vratio_vdd_rounded        = ((((vratio_vdd_accum_64th + 32) << 10) - 1) /
            (G_pgpe_pstate.vratio_core_count));
    G_pgpe_pstate.vratio_vcs_rounded        = ((((vratio_vcs_accum_64th + 32) << 10) - 1) /
            (G_pgpe_pstate.vratio_core_count));
    G_pgpe_pstate.vratio_vdd_rounded        = G_pgpe_pstate.vratio_vdd_rounded <= 0xFFFF ? G_pgpe_pstate.vratio_vdd_rounded
            : 0xFFFF;
    G_pgpe_pstate.vratio_vcs_rounded        = G_pgpe_pstate.vratio_vcs_rounded <= 0xFFFF ? G_pgpe_pstate.vratio_vcs_rounded
            : 0xFFFF;


    G_pgpe_pstate.vratio_vdd_loadline_64th  = G_pgpe_pstate.vratio_vdd_snapup_64th;
    G_pgpe_pstate.vratio_vdd_ceff_inst_64th = G_pgpe_pstate.vratio_vdd_rounded_64th;
    G_pgpe_pstate.vratio_vcs_loadline_64th  = G_pgpe_pstate.vratio_vcs_snapup_64th;
    G_pgpe_pstate.vratio_vcs_ceff_ins_64th  = G_pgpe_pstate.vratio_vcs_rounded_64th;
}

void pgpe_pstate_compute_vindex()
{
    uint32_t msd = ((G_pgpe_pstate.vratio_index_format & 0xF000) >> 12);
    uint32_t rem = (G_pgpe_pstate.vratio_index_format & 0x0FFF);
    uint32_t idx_rnd = (rem > 0x800) ? 1 : 0;
    G_pgpe_pstate.vindex = (msd >= 5) ? (msd - 5 + idx_rnd) : 0;
    PK_TRACE_INF("PSS: Vindex=0x%x", G_pgpe_pstate.vindex);
}

uint32_t pgpe_pstate_intp_vdd_from_ps(uint32_t ps, uint32_t vpd_pt_set)
{
    uint32_t vdd;
    uint32_t r  = pgpe_pstate_get_ps_region(ps, vpd_pt_set);

    //Round-up by adding 1/2
    vdd = (((pgpe_gppb_get_psv_slope(RUNTIME_RAIL_VDD, vpd_pt_set, r)) *
            (-ps + pgpe_gppb_get_ops_ps(vpd_pt_set, r))) >> (VID_SLOPE_FP_SHIFT_12 - 1)) +
          (pgpe_gppb_get_ops_vdd(vpd_pt_set, r) << 1) + 1;

    vdd = vdd >> 1; //Shift back
    //PK_TRACE("PS: ps=0x%x, r=%u, vdd=0x%x", ps, r, vdd);
    /*PK_TRACE("PS: slope=0x%x,ps=%u,vdd=0x%x", pgpe_gppb_get_psv_slope(RUNTIME_RAIL_VDD, vpd_pt_set, r),
             pgpe_gppb_get_ops_ps(vpd_pt_set, r),
             pgpe_gppb_get_ops_vdd(vpd_pt_set, r));*/
    return vdd;
}

uint32_t pgpe_pstate_intp_vcs_from_ps(uint32_t ps, uint32_t vpd_pt_set)
{
    uint32_t vcs;
    uint32_t r  = pgpe_pstate_get_ps_region(ps, vpd_pt_set);

    //Round-up by adding 1/2
    vcs = (((pgpe_gppb_get_psv_slope(RUNTIME_RAIL_VCS, vpd_pt_set, r)) *
            (-ps + pgpe_gppb_get_ops_ps(vpd_pt_set, r))) >> (VID_SLOPE_FP_SHIFT_12 - 1)) +
          (pgpe_gppb_get_ops_vcs(vpd_pt_set, r) << 1) + 1;

    vcs = vcs >> 1; //Shift back

    //PK_TRACE("PS: ps=0x%x, r=%u, vdd=0x%x", ps, r, vcs);
    /*PK_TRACE("PS: slope=0x%x,ps=%u,vcs=0x%x", pgpe_gppb_get_psv_slope(RUNTIME_RAIL_VCS, vpd_pt_set, r),
             pgpe_gppb_get_ops_ps(vpd_pt_set, r),
             pgpe_gppb_get_ops_vcs(vpd_pt_set, r));*/
    return vcs;
}

uint32_t pgpe_pstate_intp_vddup_from_ps(uint32_t ps, uint32_t vpd_pt_set, uint32_t vratio_vdd)
{
    //interpolate new current(AC and DC) based on pstate next
    uint32_t idd_ac = pgpe_pstate_intp_idd_ac_from_ps(ps, VPD_PT_SET_BIASED);
    uint32_t idd_dc = pgpe_pstate_intp_idd_dc_from_ps(ps, VPD_PT_SET_BIASED);

    //compute load line drop
    uint32_t vdd_uplift = ((((idd_ac + idd_dc) * vratio_vdd) * (pgpe_gppb_get_vdd_sysparm_loadline() +
                            pgpe_gppb_get_vdd_sysparm_distloss())) / 100
                           + pgpe_gppb_get_vdd_sysparm_distoffset()) / 1000;

    PK_TRACE_DBG("PSS: ps=0x%x, idd_ac=0x%x, idd_dc=0x%x, vdd_up=0x%x", ps, idd_ac, idd_dc, vdd_uplift);
    return vdd_uplift;
}

uint32_t pgpe_pstate_intp_vcsup_from_ps(uint32_t ps, uint32_t vpd_pt_set, uint32_t vratio_vcs)
{
    uint32_t ics_ac = pgpe_pstate_intp_ics_ac_from_ps(ps, VPD_PT_SET_BIASED);
    uint32_t ics_dc = pgpe_pstate_intp_ics_dc_from_ps(ps, VPD_PT_SET_BIASED);

    uint32_t vcs_uplift = ((((ics_ac + ics_dc) * vratio_vcs) *  (pgpe_gppb_get_vcs_sysparm_loadline() +
                            pgpe_gppb_get_vcs_sysparm_distloss())) / 100
                           + pgpe_gppb_get_vcs_sysparm_distoffset()) / 1000;

    PK_TRACE_DBG("PSS: ps=0x%x, ics_ac=0x%x, ics_dc=0x%x, vcs_up=0x%x", ps, ics_ac, ics_dc, vcs_uplift);
    return vcs_uplift;
}

uint32_t pgpe_pstate_intp_idd_ac_from_ps(uint32_t ps, uint32_t vpd_pt_set)
{
    uint32_t idd_ac;
    uint32_t r  = pgpe_pstate_get_ps_region(ps, vpd_pt_set);

    //Round-up by adding 1/2
    idd_ac = (((pgpe_gppb_get_ps_iac_slope(RUNTIME_RAIL_VDD, vpd_pt_set, r )) *
               (-ps + pgpe_gppb_get_ops_ps(vpd_pt_set, r))) >> (I_SLOPE_FP_SHIFT_9 - 1)) +
             (pgpe_gppb_get_ops_idd_ac(vpd_pt_set, r) << 1) + 1;

    idd_ac = idd_ac >> 1; //Shift back
    //PK_TRACE("PS: ps=0x%x, r=%u, idd_ac=0x%x", ps, r, idd_ac);
    /*PK_TRACE("PS: slope=0x%x,ps=0x%x,idd_ac=0x%x", pgpe_gppb_get_ps_iac_slope(RUNTIME_RAIL_VDD, vpd_pt_set, r),
             pgpe_gppb_get_ops_ps(vpd_pt_set, r),
             pgpe_gppb_get_ops_idd_ac(vpd_pt_set, r));*/


    return idd_ac;
}

uint32_t pgpe_pstate_intp_idd_dc_from_ps(uint32_t ps, uint32_t vpd_pt_set)
{
    uint32_t idd_dc;
    uint32_t r  = pgpe_pstate_get_ps_region(ps, vpd_pt_set);

    //Round-up by adding 1/2
    idd_dc = (((pgpe_gppb_get_ps_idc_slope(RUNTIME_RAIL_VDD, vpd_pt_set, r)) *
               (-ps + pgpe_gppb_get_ops_ps(vpd_pt_set, r))) >> (I_SLOPE_FP_SHIFT_9 - 1)) +
             (pgpe_gppb_get_ops_idd_dc(vpd_pt_set, r) << 1) + 1;

    idd_dc = idd_dc >> 1; //Shift back
    //PK_TRACE("PS: ps=0x%x, r=%u, idd_dc=0x%x", ps, r, idd_dc);
    /*PK_TRACE("PS: slope=0x%x,ps=0x%x,idd_dc=0x%x", pgpe_gppb_get_ps_idc_slope(RUNTIME_RAIL_VDD, vpd_pt_set, r),
             pgpe_gppb_get_ops_ps(vpd_pt_set, r),
             pgpe_gppb_get_ops_idd_dc(vpd_pt_set, r));*/

    return idd_dc;
}

uint32_t pgpe_pstate_intp_ics_ac_from_ps(uint32_t ps, uint32_t vpd_pt_set)
{
    uint32_t ics_ac;
    uint32_t r  = pgpe_pstate_get_ps_region(ps, vpd_pt_set);

    //Round-up by adding 1/2
    ics_ac = (((pgpe_gppb_get_ps_iac_slope(RUNTIME_RAIL_VCS, vpd_pt_set, r)) *
               (-ps + pgpe_gppb_get_ops_ps(vpd_pt_set, r))) >> (I_SLOPE_FP_SHIFT_9 - 1)) +
             (pgpe_gppb_get_ops_ics_ac(vpd_pt_set, r) << 1) + 1;

    ics_ac = ics_ac >> 1; //Shift back
    //PK_TRACE("PS: ps=0x%x, r=%u, ics_ac=0x%x", ps, r, ics_ac);
    /*PK_TRACE("PS: slope=0x%x,ps=0x%x,ics_ac=0x%x", pgpe_gppb_get_ps_iac_slope(RUNTIME_RAIL_VCS, vpd_pt_set, r),
             pgpe_gppb_get_ops_ps(vpd_pt_set, r),
             pgpe_gppb_get_ops_ics_ac(vpd_pt_set, r));*/

    return ics_ac;
}

uint32_t pgpe_pstate_intp_ics_dc_from_ps(uint32_t ps, uint32_t vpd_pt_set)
{
    uint32_t ics_dc;
    uint32_t r  = pgpe_pstate_get_ps_region(ps, vpd_pt_set);

    //Round-up by adding 1/2
    ics_dc = (((pgpe_gppb_get_ps_idc_slope(RUNTIME_RAIL_VCS, vpd_pt_set, r)) *
               (-ps + pgpe_gppb_get_ops_ps(vpd_pt_set, r))) >> (I_SLOPE_FP_SHIFT_9 - 1)) +
             (pgpe_gppb_get_ops_ics_dc(vpd_pt_set, r) << 1) + 1;

    ics_dc = ics_dc >> 1; //Shift back
    //PK_TRACE("PS: ps=0x%x, r=%u, ics_dc=0x%x", ps, r, ics_dc);
    /*PK_TRACE("PS: slope=0x%x,ps=0x%x,idd_dc=0x%x", pgpe_gppb_get_ps_idc_slope(RUNTIME_RAIL_VCS, vpd_pt_set, r),
             pgpe_gppb_get_ops_ps(vpd_pt_set, r),
             pgpe_gppb_get_ops_ics_dc(vpd_pt_set, r));*/

    return ics_dc;
}

uint32_t pgpe_pstate_intp_ps_from_vdd(uint32_t vdd)
{
    uint32_t ps;
    uint32_t r = pgpe_pstate_get_vdd_region(vdd);

    //Do the math using shifted by 1.
    ps = -(((pgpe_gppb_get_vps_slope(RUNTIME_RAIL_VDD, VPD_PT_SET_BIASED, r)) *
            (vdd - pgpe_gppb_get_ops_vdd(VPD_PT_SET_BIASED, r))) >> (VID_SLOPE_FP_SHIFT_12 - 1)) +
         (pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, r) << 1)  ;
    ps = ps >> 1;//Shift it back

    //We need to make sure ps doesn't go below region0
    //Here pstate value is greater means lower frequency, it should be
    //with in the safe mode pstate
    if ( ps > G_pgpe_pstate.pstate_safe)
    {
        ps = G_pgpe_pstate.pstate_safe;
    }



    return ps;
}

uint32_t pgpe_pstate_intp_ps_from_vcs(uint32_t vcs)
{
    uint32_t ps;
    uint32_t r = pgpe_pstate_get_vcs_region(vcs);

    //Do the math using shifted by 1.
    ps = -(((pgpe_gppb_get_vps_slope(RUNTIME_RAIL_VCS, VPD_PT_SET_BIASED, r)) *
            (vcs - pgpe_gppb_get_ops_vcs(VPD_PT_SET_BIASED, r))) >> (VID_SLOPE_FP_SHIFT_12 - 1)) +
         (pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, r) << 1)  ;
    ps = ps >> 1;//Shift it back

    return ps;
}

uint32_t pgpe_pstate_intp_ps_from_idd(uint32_t idd)
{
    return 0;
}


//
//
//
uint32_t pgpe_pstate_get_ps_region(uint32_t ps, uint32_t vpt_pt_set)
{
    //We use binary search to deteremine the region
    if (ps <= pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF3))
    {
        if (ps <= pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF6))
        {
            return REGION_CF6_CF7;
        }
        else if (ps <= pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF5))
        {
            return REGION_CF5_CF6;
        }
        else
        {
            if (ps <= pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF4))
            {
                return REGION_CF4_CF5;
            }
            else
            {
                return REGION_CF3_CF4;
            }
        }
    }
    else
    {
        if (ps > pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF1))
        {
            return REGION_CF0_CF1;
        }
        else
        {
            if (ps <= pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF2))
            {
                return REGION_CF2_CF3;
            }
            else
            {
                return REGION_CF1_CF2;
            }
        }
    }
}

uint32_t pgpe_pstate_get_ps_closest_vpd_pt(uint32_t ps)
{

    //We use binary search to determine the region
    if (ps < ((pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF3) + pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED,
               VPD_PV_CF4)) >> 1))
    {
        if (ps < ((pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF6) + pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED,
                   VPD_PV_CF7)) >> 1))
        {
            return CF7;
        }

        if (ps < ((pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF5) + pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED,
                   VPD_PV_CF6)) >> 1))
        {
            return CF6;
        }
        else if (ps > ((pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF4) + pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED,
                        VPD_PV_CF5)) >> 1))
        {
            return CF4;
        }

        else
        {
            return CF5;
        }
    }
    else if(ps > ((pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF3) + pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED,
                   VPD_PV_CF2)) >> 1))
    {
        if (ps < ((pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF1) + pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED,
                   VPD_PV_CF2)) >> 1))
        {
            return CF2;
        }
        else if (ps > ((pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF1) + pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED,
                        VPD_PV_CF0)) >> 1))
        {
            return CF0;
        }

        else
        {
            return CF1;
        }
    }
    else
    {
        return CF3;
    }


}

uint32_t pgpe_pstate_get_vdd_region(uint32_t vdd)
{
    if (vdd >= pgpe_gppb_get_ops_vdd(VPD_PT_SET_BIASED, VPD_PV_CF3))
    {
        if (vdd >= pgpe_gppb_get_ops_vdd(VPD_PT_SET_BIASED, VPD_PV_CF6))
        {
            return REGION_CF6_CF7;
        }
        else if (vdd >= pgpe_gppb_get_ops_vdd(VPD_PT_SET_BIASED, VPD_PV_CF5))
        {
            return REGION_CF5_CF6;
        }
        else
        {
            if (vdd >= pgpe_gppb_get_ops_vdd(VPD_PT_SET_BIASED, VPD_PV_CF4))
            {
                return REGION_CF4_CF5;
            }
            else
            {
                return REGION_CF3_CF4;
            }
        }
    }
    else
    {
        if (vdd <= pgpe_gppb_get_ops_vdd(VPD_PT_SET_BIASED, VPD_PV_CF1))
        {
            return REGION_CF0_CF1;
        }
        else
        {
            if (vdd <= pgpe_gppb_get_ops_vdd(VPD_PT_SET_BIASED, VPD_PV_CF2))
            {
                return REGION_CF1_CF2;
            }
            else
            {
                return REGION_CF2_CF3;
            }
        }
    }
}

uint32_t pgpe_pstate_get_vcs_region(uint32_t vcs)
{
    if (vcs >= pgpe_gppb_get_ops_vcs(VPD_PT_SET_BIASED, VPD_PV_CF3))
    {
        if (vcs >= pgpe_gppb_get_ops_vcs(VPD_PT_SET_BIASED, VPD_PV_CF6))
        {
            return REGION_CF6_CF7;
        }
        else if (vcs >= pgpe_gppb_get_ops_vcs(VPD_PT_SET_BIASED, VPD_PV_CF5))
        {
            return REGION_CF5_CF6;
        }
        else
        {
            if (vcs >= pgpe_gppb_get_ops_vcs(VPD_PT_SET_BIASED, VPD_PV_CF5))
            {
                return REGION_CF4_CF5;
            }
            else
            {
                return REGION_CF3_CF4;
            }
        }
    }
    else
    {
        if (vcs <=  pgpe_gppb_get_ops_vcs(VPD_PT_SET_BIASED, VPD_PV_CF1))
        {
            return REGION_CF0_CF1;
        }
        else
        {
            if (vcs <=  pgpe_gppb_get_ops_vcs(VPD_PT_SET_BIASED, VPD_PV_CF2))
            {
                return REGION_CF1_CF2;
            }
            else
            {
                return REGION_CF2_CF3;
            }
        }
    }
}

uint32_t pgpe_pstate_get_idd_ac_region(uint32_t idd)
{
    if (idd >= pgpe_gppb_get_ops_idd_ac(VPD_PT_SET_BIASED, VPD_PV_CF3))
    {

        if (idd  >=  pgpe_gppb_get_ops_idd_ac(VPD_PT_SET_BIASED, VPD_PV_CF6))
        {
            return REGION_CF6_CF7;
        }
        else if (idd  >=  pgpe_gppb_get_ops_idd_ac(VPD_PT_SET_BIASED, VPD_PV_CF5))
        {
            return REGION_CF5_CF6;
        }
        else
        {
            if (idd >=  pgpe_gppb_get_ops_idd_ac(VPD_PT_SET_BIASED, VPD_PV_CF4))
            {
                return REGION_CF4_CF5;
            }
            else
            {
                return REGION_CF3_CF4;
            }
        }
    }
    else
    {
        if (idd <=  pgpe_gppb_get_ops_idd_ac(VPD_PT_SET_BIASED, VPD_PV_CF1))
        {
            return REGION_CF0_CF1;
        }
        else
        {
            if (idd <=  pgpe_gppb_get_ops_idd_ac(VPD_PT_SET_BIASED, VPD_PV_CF2))
            {
                return REGION_CF1_CF2;
            }
            else
            {
                return REGION_CF2_CF3;
            }
        }
    }
}

uint32_t pgpe_pstate_get_idd_dc_region(uint32_t idd)
{
    if (idd >=  pgpe_gppb_get_ops_idd_dc(VPD_PT_SET_BIASED, VPD_PV_CF3))
    {
        if (idd  >= pgpe_gppb_get_ops_idd_dc(VPD_PT_SET_BIASED, VPD_PV_CF6))
        {
            return REGION_CF6_CF7;
        }
        else if (idd  >=  pgpe_gppb_get_ops_idd_dc(VPD_PT_SET_BIASED, VPD_PV_CF5))
        {
            return REGION_CF5_CF6;
        }
        else
        {
            if (idd >=  pgpe_gppb_get_ops_idd_dc(VPD_PT_SET_BIASED, VPD_PV_CF4))
            {
                return REGION_CF4_CF5;
            }
            else
            {
                return REGION_CF3_CF4;
            }
        }
    }
    else
    {
        if (idd <=  pgpe_gppb_get_ops_idd_dc(VPD_PT_SET_BIASED, VPD_PV_CF1))
        {
            return REGION_CF0_CF1;
        }
        else
        {
            if (idd <=  pgpe_gppb_get_ops_idd_dc(VPD_PT_SET_BIASED, VPD_PV_CF2))
            {
                return REGION_CF1_CF2;
            }
            else
            {
                return REGION_CF2_CF3;
            }
        }
    }
}

uint32_t pgpe_pstate_get_ics_dc_region(uint32_t ics)
{
    if (ics >=  pgpe_gppb_get_ops_ics_dc(VPD_PT_SET_BIASED, VPD_PV_CF3))
    {
        if (ics  >=  pgpe_gppb_get_ops_ics_dc(VPD_PT_SET_BIASED, VPD_PV_CF6))
        {
            return REGION_CF6_CF7;
        }
        else if (ics  >=  pgpe_gppb_get_ops_ics_dc(VPD_PT_SET_BIASED, VPD_PV_CF5))
        {
            return REGION_CF5_CF6;
        }
        else
        {
            if (ics >=  pgpe_gppb_get_ops_ics_dc(VPD_PT_SET_BIASED, VPD_PV_CF4))
            {
                return REGION_CF4_CF5;
            }
            else
            {
                return REGION_CF3_CF4;
            }
        }
    }
    else
    {
        if (ics <=  pgpe_gppb_get_ops_ics_dc(VPD_PT_SET_BIASED, VPD_PV_CF4))
        {
            return REGION_CF0_CF1;
        }
        else
        {
            if (ics <=  pgpe_gppb_get_ops_ics_dc(VPD_PT_SET_BIASED, VPD_PV_CF2))
            {
                return REGION_CF1_CF2;
            }
            else
            {
                return REGION_CF2_CF3;
            }
        }
    }
}

uint32_t pgpe_pstate_get_ics_ac_region(uint32_t ics)
{
    if (ics >=  pgpe_gppb_get_ops_ics_ac(VPD_PT_SET_BIASED, VPD_PV_CF3))
    {
        if (ics  >=  pgpe_gppb_get_ops_ics_ac(VPD_PT_SET_BIASED, VPD_PV_CF6))
        {
            return REGION_CF6_CF7;
        }
        else if (ics  >=  pgpe_gppb_get_ops_ics_ac(VPD_PT_SET_BIASED, VPD_PV_CF5))
        {
            return REGION_CF5_CF6;
        }
        else
        {
            if (ics >=  pgpe_gppb_get_ops_ics_ac(VPD_PT_SET_BIASED, VPD_PV_CF4))
            {
                return REGION_CF4_CF5;
            }
            else
            {
                return REGION_CF3_CF4;
            }
        }
    }
    else
    {
        if (ics <=  pgpe_gppb_get_ops_ics_ac(VPD_PT_SET_BIASED, VPD_PV_CF1))
        {
            return REGION_CF0_CF1;
        }
        else
        {
            if (ics <=  pgpe_gppb_get_ops_ics_ac(VPD_PT_SET_BIASED, VPD_PV_CF2))
            {
                return REGION_CF1_CF2;
            }
            else
            {
                return REGION_CF2_CF3;
            }
        }
    }
}

uint32_t pgpe_pstate_freq_from_ps(uint32_t ps)
{
    return  (pgpe_gppb_get_reference_frequency() - ((ps) * pgpe_gppb_get_frequency_step())) / 1000;
}

uint32_t pgpe_pstate_ps_from_freq(uint32_t freq_khz)
{
    return  ((pgpe_gppb_get_reference_frequency() - freq_khz) / pgpe_gppb_get_frequency_step());
}

uint32_t pgpe_pstate_ps_from_freq_clipped(uint32_t freq_khz, uint32_t round_up)
{
    uint32_t ps;

    if (pgpe_gppb_get_reference_frequency() < freq_khz)
    {
        ps = 0;
    }
    else
    {
        if (round_up == PS_FROM_FREQ_ROUND_UP)
        {
            ps = ((pgpe_gppb_get_reference_frequency() - freq_khz + pgpe_gppb_get_frequency_step()) /
                  pgpe_gppb_get_frequency_step());
        }
        else
        {
            ps = ((pgpe_gppb_get_reference_frequency() - freq_khz) / pgpe_gppb_get_frequency_step());
        }
    }

    return ps;
}

uint32_t pgpe_pstate_is_at_target()
{
    return (G_pgpe_pstate.pstate_curr == G_pgpe_pstate.pstate_target);
}

uint32_t pgpe_pstate_is_clip_bounded()
{
    uint32_t clip_min = G_pgpe_pstate.clip_min > G_pgpe_pstate.pstate_safe ? G_pgpe_pstate.pstate_safe :
                        G_pgpe_pstate.clip_min;

    uint32_t ps_bounded = 0;
    uint32_t thr_bounded = 1;

    if ((G_pgpe_pstate.pstate_curr >= clip_min) &&
        (G_pgpe_pstate.pstate_curr <= G_pgpe_pstate.clip_max))
    {
        ps_bounded = 1;
    }

    if (pgpe_thr_ctrl_is_enabled())
    {
        if(G_pgpe_pstate.throttle_clip > G_pgpe_pstate.throttle_curr)
        {
            thr_bounded = 0;
        }
    }

    return (thr_bounded && ps_bounded);
}

uint32_t pgpe_pstate_is_wof_clip_bounded()
{
    uint32_t clip_bound;
    uint32_t ps_bounded = 0;
    uint32_t thr_bounded = 1;


    //If wof clip is between thermal clips, then the wof_clip becomes the bound
    //Note: It's a min bound in terms of pstate, and max bound in terms of freq
    if (G_pgpe_pstate.clip_wof < G_pgpe_pstate.clip_max)
    {
        clip_bound = G_pgpe_pstate.clip_wof;
    }
    else
    {
        clip_bound =  G_pgpe_pstate.clip_max;
    }

    //Now make sure bound is lower pstate(higher freq) than psafe
    if (clip_bound > G_pgpe_pstate.pstate_safe)
    {
        clip_bound = G_pgpe_pstate.pstate_safe;
    }


    //Now, check if current pstate is within bound
    if (G_pgpe_pstate.pstate_curr >= clip_bound)
    {
        ps_bounded = 1;
    }

    //If throttle is enabled, and throttle action is pending then wof is not bounded yet.
    //Note, unlike the clip throttle bound, we can't use absolute value because throttling
    //due to VRT is done using the PI loop which may not reach the throttling target in one
    //iteration. So, before acking VRT we make sure that at one throttle movement was done
    if (pgpe_thr_ctrl_is_enabled())
    {
        if(G_pgpe_pstate.throttle_pending)
        {
            thr_bounded = 0;
        }
    }

    return ps_bounded && thr_bounded;
}

void pgpe_pstate_pmsr_updt()
{
    G_pgpe_pstate.pmsr.fields.global_actual =  G_pgpe_pstate.pstate_curr;
    G_pgpe_pstate.pmsr.fields.local_actual  =  G_pgpe_pstate.pstate_curr;
    G_pgpe_pstate.pmsr.fields.pmax          =  G_pgpe_pstate.clip_max;
    G_pgpe_pstate.pmsr.fields.pmin          =  G_pgpe_pstate.clip_min > G_pgpe_pstate.pstate_safe ?
            G_pgpe_pstate.pstate_safe : G_pgpe_pstate.clip_min;
}

void pgpe_pstate_pmsr_set_safe_mode()
{
    G_pgpe_pstate.pmsr.fields.safe_mode = 1;
}

void pgpe_pstate_pmsr_write()
{
    PK_TRACE_INF("PSS: PMSR=0x%08x%08x", G_pgpe_pstate.pmsr.words.high_order,
                 G_pgpe_pstate.pmsr.words.low_order);
#if USE_MC == 0

    uint32_t q, c = 0;
    uint32_t cs;

    for (q = 0; q < MAX_QUADS; q++)
    {
        for (c = 0; c < CORES_PER_QUAD; c++)
        {
            cs = (0x8 >> c);
            PPE_PUTSCOM(PPE_SCOM_ADDR_UC(QME_PMSRS, q, cs), G_pgpe_pstate.pmsr.value);
        }
    }

#else
    PPE_PUTSCOM(PPE_SCOM_ADDR_MC_WR(QME_PMSRS, 0xF), G_pgpe_pstate.pmsr.value);
    //PK_TRACE("PS: PMSR WRAddr=0x%x, RdAddr=0x%x", PPE_SCOM_ADDR_MC_WR(QME_PMSRS, 0xF), PPE_SCOM_ADDR_MC_OR(QME_PMSRS, 0xF));
    //HW552730 this original defect requires PMSR at all cores be written twice as workaround
    //HW555543 later found more observation on potentially endangering qme local access to CPMS
    //that can be workaround with two options:
    //1. QME always write SCSR[22].REFRESH_PMSR to all cores during STOP, without any workaround writing PMSR
    //2. PGPE here instead write twice to all cores[0xF], should write to one core at a time so write 4 times in [8,4,2,1]
    //Option 1 is picked as default. refer to QME hcode.
#endif
}

void pgpe_pstate_update_vdd_vcs_ps()
{
    G_pgpe_pstate.vdd_curr = G_pgpe_pstate.vdd_next;
    G_pgpe_pstate.vdd_curr_uplift = G_pgpe_pstate.vdd_next_uplift;
    G_pgpe_pstate.vdd_curr_ext = G_pgpe_pstate.vdd_next_ext;
    G_pgpe_pstate.vcs_curr = G_pgpe_pstate.vcs_next;
    G_pgpe_pstate.vcs_curr_uplift = G_pgpe_pstate.vcs_next_uplift;
    G_pgpe_pstate.vcs_curr_ext = G_pgpe_pstate.vcs_next_ext;
    G_pgpe_pstate.pstate_curr = G_pgpe_pstate.pstate_next;

    uint32_t occs2  =  (G_pgpe_pstate.vdd_curr_ext << 16) | G_pgpe_pstate.vcs_curr_ext;
    out32(TP_TPCHIP_OCC_OCI_OCB_OCCS2_RW, occs2);

}

void pgpe_pstate_profile(pgpe_profile_t* p, uint32_t start_time)
{
    uint32_t end_time = in32(TP_TPCHIP_OCC_OCI_OCB_OTBR);
    uint32_t tb_delta = end_time - start_time;

    if(start_time > end_time)
    {
        tb_delta += 0xFFFFFFFF;
    }

    if(tb_delta > p->max_time)
    {
        p->max_time = tb_delta;
    }

    if(tb_delta < p->min_time)
    {
        p->min_time = tb_delta;
    }

    p->total_time += tb_delta;
    p->cnt++;

    if(p->total_time & 0x80000000)
    {
        p->total_time = tb_delta;
        p->cnt = 1;
    }
}
