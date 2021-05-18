/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_pstate.c $          */
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
    uint64_t rvcr;

    G_pgpe_pstate.pstate_status = PSTATE_STATUS_DISABLED;
    G_pgpe_pstate.wof_status = WOF_STATUS_DISABLED;
    G_pgpe_pstate.pmcr_owner = 0xFFFFFFFF;

    ccsr = in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW);
    G_pgpe_pstate.sort_core_count = 0;

    for (i = 0; i < MAX_QUADS; i++)
    {
        G_pgpe_pstate.ps_request[i] = 0xFF;
    }

    for (i = 0; i < MAX_CORES; i++)
    {
        if (ccsr & CORE_MASK(i))
        {
            G_pgpe_pstate.sort_core_count++;
        }
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


    PPE_GETSCOM_MC_Q_EQU(QME_RVCR, rvcr);
    G_pgpe_pstate.rvrm_volt  = (((rvcr >> 56) & 0xFF) <<
                                3); //Extract RVID Value from RVCR[1:7] and then multiply by 8 to get RVRM voltage


    if (pgpe_gppb_get_safe_frequency())
    {
        G_pgpe_pstate.pstate_safe = (pgpe_gppb_get_reference_frequency() -
                                     pgpe_gppb_get_safe_frequency()) / pgpe_gppb_get_frequency_step();

    }
    else
    {
        G_pgpe_pstate.pstate_safe = pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, CF0);
    }

    if(pgpe_gppb_get_ceiling_frequency())
    {
        G_pgpe_pstate.pstate_ceiling = (pgpe_gppb_get_reference_frequency() -
                                        pgpe_gppb_get_ceiling_frequency()) / pgpe_gppb_get_frequency_step();
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

    PK_TRACE_INF("PSS: Act_S PsCurr=0x%x, PsTgt=0x%x", G_pgpe_pstate.pstate_curr, G_pgpe_pstate.pstate_target);
    //compute vdd_target corresponding to pstate_target
    G_pgpe_pstate.vdd_next = pgpe_pstate_intp_vdd_from_ps(G_pgpe_pstate.pstate_target, VPD_PT_SET_BIASED);
    G_pgpe_pstate.pstate_next = G_pgpe_pstate.pstate_target;
    uint32_t vdd_delta = 0;

    //Adjust vdd_next as per the max vdd step size.
    if (G_pgpe_pstate.pstate_target > G_pgpe_pstate.pstate_curr)
    {
        vdd_delta = G_pgpe_pstate.vdd_curr - G_pgpe_pstate.vdd_next;

        if (vdd_delta > pgpe_gppb_get_ext_vrm_parms_step_size_mv(RUNTIME_RAIL_VDD))
        {
            G_pgpe_pstate.vdd_next = G_pgpe_pstate.vdd_curr - pgpe_gppb_get_ext_vrm_parms_step_size_mv(RUNTIME_RAIL_VDD);
            G_pgpe_pstate.pstate_next = pgpe_pstate_intp_ps_from_vdd(G_pgpe_pstate.vdd_next);
            G_pgpe_pstate.vdd_next = pgpe_pstate_intp_vdd_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED);
        }
    }
    else
    {
        vdd_delta = G_pgpe_pstate.vdd_next - G_pgpe_pstate.vdd_curr;

        if (vdd_delta > pgpe_gppb_get_ext_vrm_parms_step_size_mv(RUNTIME_RAIL_VDD))
        {
            G_pgpe_pstate.vdd_next = G_pgpe_pstate.vdd_curr + pgpe_gppb_get_ext_vrm_parms_step_size_mv(RUNTIME_RAIL_VDD);
            G_pgpe_pstate.pstate_next = pgpe_pstate_intp_ps_from_vdd(G_pgpe_pstate.vdd_next);
            G_pgpe_pstate.vdd_next = pgpe_pstate_intp_vdd_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED);
        }
    }

    //compute vcs_next
    G_pgpe_pstate.vcs_next = pgpe_pstate_intp_vcs_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED);

    //compute load line drop
    G_pgpe_pstate.vdd_next_uplift = pgpe_pstate_intp_vddup_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED,
                                    G_pgpe_pstate.vratio_vdd_loadline_64th) >> 6; //Shift by 6 since vratio is in 64ths
    G_pgpe_pstate.vcs_next_uplift = pgpe_pstate_intp_vcsup_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED,
                                    G_pgpe_pstate.vratio_vcs_loadline_64th) >> 6;//Shift by 6 since vratio is in 64ths

    G_pgpe_pstate.vdd_next_ext = G_pgpe_pstate.vdd_next + G_pgpe_pstate.vdd_next_uplift;
    G_pgpe_pstate.vcs_next_ext = G_pgpe_pstate.vcs_next + G_pgpe_pstate.vcs_next_uplift;


    //Do WOV adjustment here
    if (pgpe_wov_ocs_is_wov_overv_enabled() || pgpe_wov_ocs_is_wov_underv_enabled() )
    {
        //Clear wov bias and set tgt_pct to zero
        G_pgpe_pstate.vdd_wov_bias = 0;
        pk_critical_section_enter(&ctx);
        pgpe_wov_ocs_set_wov_curr_pct(0);
        pk_critical_section_exit(&ctx);
        PK_TRACE_DBG("PSS: Act_S WovCurrPct=%d, WovTgtPct=%d set,", pgpe_wov_ocs_get_wov_curr_pct(),
                     pgpe_wov_ocs_get_wov_tgt_pct());
    }

    PK_TRACE_INF("PSS: Act_S VddDel=0x%x, VddNextExt=0x%x, PsNext=0x%x ,VcsNextExt=0x%x", vdd_delta,
                 G_pgpe_pstate.vdd_next_ext,
                 G_pgpe_pstate.pstate_next, G_pgpe_pstate.vcs_next_ext);

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
        pgpe_dds_compute(G_pgpe_pstate.pstate_next);
        pgpe_dds_update_pre(G_pgpe_pstate.pstate_next);
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

    //if lowering frequency
    if (G_pgpe_pstate.pstate_next > G_pgpe_pstate.pstate_curr)
    {
        //resclk
        pgpe_resclk_update(G_pgpe_pstate.pstate_next);

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
            pgpe_dds_update_post(G_pgpe_pstate.pstate_next);
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
        pgpe_resclk_update(G_pgpe_pstate.pstate_next);

        if (pgpe_gppb_get_pgpe_flags(PGPE_FLAG_DDS_ENABLE))
        {
            pgpe_dds_update_post(G_pgpe_pstate.pstate_next);
        }
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
}

void pgpe_pstate_actuate_voltage_step()
{
    if (pgpe_wov_ocs_is_wov_overv_enabled() || pgpe_wov_ocs_is_wov_underv_enabled() )
    {
        G_pgpe_pstate.vdd_wov_bias = ((int16_t)(G_pgpe_pstate.vdd_next + G_pgpe_pstate.vdd_next_uplift)  *
                                      pgpe_wov_ocs_get_wov_tgt_pct()) / 1000;
        G_pgpe_pstate.vdd_next_ext = G_pgpe_pstate.vdd_next + G_pgpe_pstate.vdd_next_uplift + G_pgpe_pstate.vdd_wov_bias;
        PK_TRACE_INF("PSS: Act_V, VddNext=%d WovBias=%d WovTgtPct=%d WovCurrPct=%d", G_pgpe_pstate.vdd_next_ext,
                     G_pgpe_pstate.vdd_wov_bias, pgpe_wov_ocs_get_wov_tgt_pct(), pgpe_wov_ocs_get_wov_curr_pct());

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

        pgpe_wov_ocs_set_wov_curr_pct(pgpe_wov_ocs_get_wov_tgt_pct());
    }
}

void pgpe_pstate_do_throttle()
{
    if (pgpe_thr_ctrl_is_enabled())
    {
        if (G_pgpe_pstate.pstate_computed > G_pgpe_pstate.pstate_safe)
        {
            pgpe_thr_ctrl_update(G_pgpe_pstate.pstate_computed);
        }
        else
        {
            pgpe_thr_ctrl_update(G_pgpe_pstate.pstate_safe);
        }
    }
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
    uint32_t c;
    uint32_t vratio_vdd_accum_64th = 0;
    uint32_t vratio_vcs_accum_64th = 0;
    uint32_t active_core_accum_64th = 0;
    HcodeOCCSharedData_t* occ_shared_data = (HcodeOCCSharedData_t*)OCC_SHARED_SRAM_ADDR_START;
    iddq_activity_t* G_p_iddq_act_val =  (iddq_activity_t*)(OCC_SHARED_SRAM_ADDR_START + occ_shared_data->iddq_data_offset);

    ccsr = in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW);

    for (c = 0; c < MAX_CORES; c++)
    {
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
    G_pgpe_pstate.vratio_index_format       = ((((active_core_accum_64th) << 10) - 1) /
            G_pgpe_pstate.sort_core_count); //Index Format is 16-bits. We accumulate in 6bits, so do a shift by 10
    G_pgpe_pstate.active_core_ratio_64th    = G_pgpe_pstate.vratio_index_format >> 10; //Index format back to 64ths
    G_pgpe_pstate.vratio_vdd_snapup_64th    = ((vratio_vdd_accum_64th + 63) / G_pgpe_pstate.sort_core_count);
    G_pgpe_pstate.vratio_vcs_snapup_64th    = ((vratio_vcs_accum_64th + 63) / G_pgpe_pstate.sort_core_count);
    G_pgpe_pstate.vratio_vdd_rounded_64th   = ((vratio_vdd_accum_64th + 32) / G_pgpe_pstate.sort_core_count);
    G_pgpe_pstate.vratio_vcs_rounded_64th   = ((vratio_vcs_accum_64th + 32) / G_pgpe_pstate.sort_core_count);
    G_pgpe_pstate.vratio_vdd_snapup_64th    = G_pgpe_pstate.vratio_vdd_snapup_64th < 64 ?
            G_pgpe_pstate.vratio_vdd_snapup_64th : 64;
    G_pgpe_pstate.vratio_vcs_snapup_64th    = G_pgpe_pstate.vratio_vcs_snapup_64th < 64 ?
            G_pgpe_pstate.vratio_vcs_snapup_64th : 64;
    G_pgpe_pstate.vratio_vdd_rounded_64th   = G_pgpe_pstate.vratio_vdd_rounded_64th < 64 ?
            G_pgpe_pstate.vratio_vdd_rounded_64th : 64;
    G_pgpe_pstate.vratio_vcs_rounded_64th   = G_pgpe_pstate.vratio_vcs_rounded_64th < 64 ?
            G_pgpe_pstate.vratio_vcs_rounded_64th : 64;


    G_pgpe_pstate.vratio_vdd_rounded        = ((((vratio_vdd_accum_64th + 32) << 10) - 1) / G_pgpe_pstate.sort_core_count);
    G_pgpe_pstate.vratio_vcs_rounded        = ((((vratio_vcs_accum_64th + 32) << 10) - 1) / G_pgpe_pstate.sort_core_count);
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
    if (idd >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF3].idd_tdp_ac_10ma)
    {

        if (idd  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF6].idd_tdp_ac_10ma)
        {
            return REGION_CF6_CF7;
        }
        else if (idd  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF5].idd_tdp_ac_10ma)
        {
            return REGION_CF5_CF6;
        }
        else
        {
            if (idd >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF4].idd_tdp_ac_10ma)
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
        if (idd <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF1].idd_tdp_ac_10ma)
        {
            return REGION_CF0_CF1;
        }
        else
        {
            if (idd <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF2].idd_tdp_ac_10ma)
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
    if (idd >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF3].idd_tdp_dc_10ma)
    {
        if (idd  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF6].idd_tdp_dc_10ma)
        {
            return REGION_CF6_CF7;
        }
        else if (idd  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF5].idd_tdp_dc_10ma)
        {
            return REGION_CF5_CF6;
        }
        else
        {
            if (idd >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF4].idd_tdp_dc_10ma)
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
        if (idd <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF1].idd_tdp_dc_10ma)
        {
            return REGION_CF0_CF1;
        }
        else
        {
            if (idd <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF2].idd_tdp_dc_10ma)
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
    if (ics >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF3].ics_tdp_dc_10ma)
    {
        if (ics  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF6].ics_tdp_dc_10ma)
        {
            return REGION_CF6_CF7;
        }
        else if (ics  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF5].ics_tdp_dc_10ma)
        {
            return REGION_CF5_CF6;
        }
        else
        {
            if (ics >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF4].ics_tdp_dc_10ma)
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
        if (ics <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF1].ics_tdp_dc_10ma)
        {
            return REGION_CF0_CF1;
        }
        else
        {
            if (ics <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF2].ics_tdp_dc_10ma)
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
    if (ics >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF3].ics_tdp_ac_10ma)
    {
        if (ics  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF6].ics_tdp_ac_10ma)
        {
            return REGION_CF6_CF7;
        }
        else if (ics  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF5].ics_tdp_ac_10ma)
        {
            return REGION_CF5_CF6;
        }
        else
        {
            if (ics >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF4].ics_tdp_ac_10ma)
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
        if (ics <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF1].ics_tdp_ac_10ma)
        {
            return REGION_CF0_CF1;
        }
        else
        {
            if (ics <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF2].ics_tdp_ac_10ma)
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
    return  (G_gppb->reference_frequency_khz - ((ps) * G_gppb->frequency_step_khz)) / 1000;
}

uint32_t pgpe_pstate_ps_from_freq(uint32_t freq_khz)
{
    return  ((G_gppb->reference_frequency_khz - freq_khz) / G_gppb->frequency_step_khz);
}

uint32_t pgpe_pstate_ps_from_freq_clipped(uint32_t freq_khz, uint32_t round_up)
{
    uint32_t ps;

    if (G_gppb->reference_frequency_khz < freq_khz)
    {
        ps = 0;
    }
    else
    {
        if (round_up == PS_FROM_FREQ_ROUND_UP)
        {
            ps = ((G_gppb->reference_frequency_khz - freq_khz + G_gppb->frequency_step_khz) / G_gppb->frequency_step_khz);
        }
        else
        {
            ps = ((G_gppb->reference_frequency_khz - freq_khz) / G_gppb->frequency_step_khz);
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

    if ((G_pgpe_pstate.pstate_curr >= clip_min) &&
        (G_pgpe_pstate.pstate_curr <= G_pgpe_pstate.clip_max))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

uint32_t pgpe_pstate_is_wof_clip_bounded()
{
    uint32_t clip_bound;


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
        return 1;
    }
    else
    {
        return 0;
    }
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
