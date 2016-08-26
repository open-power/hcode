/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_pstate.c $          */
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

#include "pgpe_pstate.h"
#include "pgpe_gppb.h"
#include "pgpe_avsbus_driver.h"
#include "pgpe_dpll.h"
#include "pgpe_dds.h"
#include "p10_scom_c_1.H"
#include "p10_oci_proc.H"
#include "pgpe_resclk.h"
#include "p10_hcd_common.H"
#include "pstate_pgpe_occ_api.h"
#include "pgpe_header.h"
#include "p10_scom_eq_3.H"
#include "p10_scom_c_4.H"

//
//Local function prototypes
//
uint32_t pgpe_pstate_is_at_target();
uint32_t pgpe_pstate_get_vdd_region(uint32_t vdd);
uint32_t pgpe_pstate_get_vcs_region(uint32_t vcs);
uint32_t pgpe_pstate_get_idd_region(uint32_t idd);
uint32_t pgpe_pstate_get_idd_ac_region(uint32_t idd);
uint32_t pgpe_pstate_get_idd_dc_region(uint32_t idd);
uint32_t pgpe_pstate_get_ics_ac_region(uint32_t ics);
uint32_t pgpe_pstate_get_ics_dc_region(uint32_t ics);

pgpe_pstate_t G_pgpe_pstate __attribute__((section (".data_structs")));

void pgpe_pstate_init()
{
    PK_TRACE("PS: Init");
    uint32_t i;
    uint32_t ccsr;

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
    G_pgpe_pstate.power_proxy_scale  = 0;
    G_pgpe_pstate.update_pgpe_beacon = 1;

    if (pgpe_gppb_get_safe_frequency())
    {
        G_pgpe_pstate.pstate_safe = (pgpe_gppb_get_reference_frequency() -
                                     pgpe_gppb_get_safe_frequency()) / pgpe_gppb_get_frequency_step();

    }
    else
    {
        G_pgpe_pstate.pstate_safe = pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, POWERSAVE);
    }

    PK_TRACE("PS: Psafe=0x%x", G_pgpe_pstate.pstate_safe);
}

void* pgpe_pstate_data_addr()
{
    return &G_pgpe_pstate;
}

void pgpe_pstate_actuate_step()
{

    PK_TRACE("ACT: ps_cur=0x%x, ps_target=0x%x", G_pgpe_pstate.pstate_curr, G_pgpe_pstate.pstate_target);
    //compute vdd_target corresponding to pstate_target
    G_pgpe_pstate.vdd_next = pgpe_pstate_intp_vdd_from_ps(G_pgpe_pstate.pstate_target, VPD_PT_SET_BIASED);
    G_pgpe_pstate.pstate_next = G_pgpe_pstate.pstate_target;
    uint32_t vdd_delta = 0;

    //Adjust vdd_next as per the max vdd step size.
    if (G_pgpe_pstate.pstate_target > G_pgpe_pstate.pstate_curr)
    {
        vdd_delta = G_pgpe_pstate.vdd_curr - G_pgpe_pstate.vdd_next;

        if (vdd_delta > pgpe_gppb_get(ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VDD]))
        {
            G_pgpe_pstate.vdd_next = G_pgpe_pstate.vdd_curr - pgpe_gppb_get(ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VDD]);
            G_pgpe_pstate.pstate_next = pgpe_pstate_intp_ps_from_vdd(G_pgpe_pstate.vdd_next);
            G_pgpe_pstate.vdd_next = pgpe_pstate_intp_vdd_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED);
        }
    }
    else
    {
        vdd_delta = G_pgpe_pstate.vdd_next - G_pgpe_pstate.vdd_curr;

        if (vdd_delta > pgpe_gppb_get(ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VDD]))
        {
            G_pgpe_pstate.vdd_next = G_pgpe_pstate.vdd_curr + pgpe_gppb_get(ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VDD]);
            G_pgpe_pstate.pstate_next = pgpe_pstate_intp_ps_from_vdd(G_pgpe_pstate.vdd_next);
            G_pgpe_pstate.vdd_next = pgpe_pstate_intp_vdd_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED);
        }
    }

    //compute vcs_next
    G_pgpe_pstate.vcs_next = pgpe_pstate_intp_vcs_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED);

    //compute load line drop
    pgpe_pstate_compute_vratio(G_pgpe_pstate.pstate_next);

    G_pgpe_pstate.vdd_next_uplift = pgpe_pstate_intp_vddup_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED,
                                    G_pgpe_pstate.vratio_inst);
    G_pgpe_pstate.vcs_next_uplift = pgpe_pstate_intp_vcsup_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED);

    G_pgpe_pstate.vdd_next_ext = G_pgpe_pstate.vdd_next + G_pgpe_pstate.vdd_next_uplift;
    G_pgpe_pstate.vcs_next_ext = G_pgpe_pstate.vcs_next + G_pgpe_pstate.vcs_next_uplift;

    if (G_pgpe_pstate.vdd_next_ext >= pgpe_gppb_get(vcs_floor_mv))
    {
        PK_TRACE("ACT: Adjusting VCS against VDD");
        G_pgpe_pstate.vcs_next_ext = G_pgpe_pstate.vdd_next_ext + pgpe_gppb_get(vcs_vdd_offset_mv);
    }
    else
    {
        G_pgpe_pstate.vcs_next_ext = ((G_pgpe_pstate.vdd_next_ext + pgpe_gppb_get(vcs_vdd_offset_mv)) > pgpe_gppb_get(
                                          vcs_floor_mv)) ? (G_pgpe_pstate.vdd_next_ext + pgpe_gppb_get(vcs_vdd_offset_mv)) : pgpe_gppb_get(vcs_floor_mv);
    }

    PK_TRACE("ACT: vdd_del=0x%x, vdd_next=0x%x,ps_next=0x%x ,vcs_next=0x%x", vdd_delta, G_pgpe_pstate.vdd_next,
             G_pgpe_pstate.pstate_next, G_pgpe_pstate.vcs_next);

    //Compute power proxy scale factor
    cpms_dpcr dpcr;
    dpcr.value = 0;
    uint32_t power_proxy_scale_tgt;
    uint32_t x = G_pgpe_pstate.vdd_next * G_pgpe_pstate.vdd_next;
    //X>>8 minus X>>11 minus X>>13 plus (X>>7)&0x1 plus (X>>10)&0x1 plus (X>>12)&0x1   // approximate a divide by 295
    power_proxy_scale_tgt =  (x >> 8) - (x >> 11) - (x >> 13) + ((x >> 7) & 0x1) + ((x >> 10) & 0x1) + ((x >> 12) & 0x1);

    if (G_pgpe_pstate.vdd_next_ext <= pgpe_gppb_get(array_write_vdd_mv))
    {
        PPE_PUTSCOM_MC_Q(NET_CTRL0_RW_WOR, BIT64(NET_CTRL0_ARRAY_WRITE_ASSIST_EN));
    }

    //if lowering frequency
    if (G_pgpe_pstate.pstate_next > G_pgpe_pstate.pstate_curr)
    {
        //resclk
        pgpe_resclk_update(G_pgpe_pstate.pstate_next);

        //write DPLL(Update freq)
        pgpe_dpll_write_dpll_freq_ps(G_pgpe_pstate.pstate_next);

        //DDS
        pgpe_dds_update(G_pgpe_pstate.pstate_next);

#if USE_MC == 1
        pgpe_dds_poll_done();
#endif

        //Write average of proxy_scale_factor_target and proxy_scale_factor_prev to DPCRs
        dpcr.fields.proxy_scale_factor = (power_proxy_scale_tgt + G_pgpe_pstate.power_proxy_scale) >> 1;
        PPE_PUTSCOM_MC(CPMS_DPCR, 0xF, dpcr.value);

        //lower VDD
        pgpe_avsbus_voltage_write(pgpe_gppb_get(avs_bus_topology.vdd_avsbus_num),
                                  pgpe_gppb_get(avs_bus_topology.vdd_avsbus_rail),
                                  G_pgpe_pstate.vdd_next_ext);

        //Write proxy_scale_factor_target to DPCRs
        dpcr.fields.proxy_scale_factor = power_proxy_scale_tgt;
        PPE_PUTSCOM_MC(CPMS_DPCR, 0xF, dpcr.value);

        //lower VCS
        pgpe_avsbus_voltage_write(pgpe_gppb_get(avs_bus_topology.vcs_avsbus_num),
                                  pgpe_gppb_get(avs_bus_topology.vcs_avsbus_rail),
                                  G_pgpe_pstate.vcs_next_ext);
    }
    //else raising frequency
    else
    {
        //raise VCS
        pgpe_avsbus_voltage_write(pgpe_gppb_get(avs_bus_topology.vcs_avsbus_num),
                                  pgpe_gppb_get(avs_bus_topology.vcs_avsbus_rail),
                                  G_pgpe_pstate.vcs_next_ext);

        //Write average of proxy_scale_factor_target and proxy_scale_factor_prev to DPCRs
        dpcr.fields.proxy_scale_factor = (power_proxy_scale_tgt + G_pgpe_pstate.power_proxy_scale) >> 1;
        PPE_PUTSCOM_MC(CPMS_DPCR, 0xF, dpcr.value);

        //raise VDD
        pgpe_avsbus_voltage_write(pgpe_gppb_get(avs_bus_topology.vdd_avsbus_num),
                                  pgpe_gppb_get(avs_bus_topology.vdd_avsbus_rail),
                                  G_pgpe_pstate.vdd_next_ext);

        //Write proxy_scale_factor_target to DPCRs
        dpcr.fields.proxy_scale_factor = power_proxy_scale_tgt;
        PPE_PUTSCOM_MC(CPMS_DPCR, 0xF, dpcr.value);

        //DDS
        pgpe_dds_update(G_pgpe_pstate.pstate_next);
#if USE_MC == 1
        pgpe_dds_poll_done();
#endif

        //write DPLL(Update freq)
        pgpe_dpll_write_dpll_freq_ps(G_pgpe_pstate.pstate_next);

        //resclk
        pgpe_resclk_update(G_pgpe_pstate.pstate_next);

    }

    if (G_pgpe_pstate.vdd_next_ext > pgpe_gppb_get(array_write_vdd_mv))
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

void pgpe_pstate_actuate_pstate(uint32_t pstate)
{
    uint32_t q;

    for (q = 0; q < MAX_QUADS; q++)
    {
        G_pgpe_pstate.ps_request[q] = pstate;
    }

    pgpe_pstate_compute();
    pgpe_pstate_apply_clips();
    G_pgpe_pstate.pstate_next = G_pgpe_pstate.pstate_target;
    pgpe_dpll_write_dpll_freq_ps(G_pgpe_pstate.pstate_next);
    pgpe_pstate_pmsr_updt();
}

void pgpe_pstate_actuate_safe_voltage_vdd()
{
    while (G_pgpe_pstate.vdd_curr != pgpe_gppb_get(safe_voltage_mv[SAFE_VOLTAGE_VDD]))
    {
        if (((int16_t)G_pgpe_pstate.vdd_curr - (int16_t)pgpe_gppb_get(safe_voltage_mv[SAFE_VOLTAGE_VDD])) >
            (int16_t)pgpe_gppb_get(ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VDD]))
        {
            G_pgpe_pstate.vdd_next = G_pgpe_pstate.vdd_curr - pgpe_gppb_get(ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VDD]);
        }
        else if (((int16_t)pgpe_gppb_get(safe_voltage_mv[SAFE_VOLTAGE_VDD]) - (int16_t)G_pgpe_pstate.vdd_curr ) >
                 (int16_t)pgpe_gppb_get(ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VDD]))
        {
            G_pgpe_pstate.vdd_next = G_pgpe_pstate.vdd_curr + pgpe_gppb_get(ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VDD]);
        }
        else
        {
            G_pgpe_pstate.vdd_next = pgpe_gppb_get(ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VDD]);
        }

        G_pgpe_pstate.vdd_next_uplift = 0;
        G_pgpe_pstate.vdd_next_ext = G_pgpe_pstate.vdd_next + G_pgpe_pstate.vdd_next_uplift;
        pgpe_avsbus_voltage_write(pgpe_gppb_get(avs_bus_topology.vdd_avsbus_num),
                                  pgpe_gppb_get(avs_bus_topology.vdd_avsbus_rail),
                                  G_pgpe_pstate.vdd_next_ext);
    }
}

void pgpe_pstate_actuate_safe_voltage_vcs()
{
    while (G_pgpe_pstate.vcs_curr != pgpe_gppb_get(safe_voltage_mv[SAFE_VOLTAGE_VCS]))
    {
        if (((int16_t)G_pgpe_pstate.vcs_curr - (int16_t)pgpe_gppb_get(safe_voltage_mv[SAFE_VOLTAGE_VCS])) >
            (int16_t)pgpe_gppb_get(ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VCS]))
        {
            G_pgpe_pstate.vcs_next = G_pgpe_pstate.vcs_curr - pgpe_gppb_get(ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VCS]);
        }
        else if (((int16_t)pgpe_gppb_get(safe_voltage_mv[SAFE_VOLTAGE_VCS]) - (int16_t)G_pgpe_pstate.vcs_curr ) >
                 (int16_t)pgpe_gppb_get(ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VCS]))
        {
            G_pgpe_pstate.vcs_next = G_pgpe_pstate.vcs_curr + pgpe_gppb_get(ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VCS]);
        }
        else
        {
            G_pgpe_pstate.vcs_next = pgpe_gppb_get(ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VCS]);
        }

        G_pgpe_pstate.vcs_next_uplift = 0;
        G_pgpe_pstate.vcs_next_ext = G_pgpe_pstate.vcs_next + G_pgpe_pstate.vcs_next_uplift;
        pgpe_avsbus_voltage_write(pgpe_gppb_get(avs_bus_topology.vcs_avsbus_num),
                                  pgpe_gppb_get(avs_bus_topology.vcs_avsbus_rail),
                                  G_pgpe_pstate.vcs_next_ext);
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

    PK_TRACE("CMP: ps_computed=0x%x", G_pgpe_pstate.pstate_computed);
}

void pgpe_pstate_apply_clips()
{
    //\todo Use sibling pstate(DCM)
    G_pgpe_pstate.pstate_target = G_pgpe_pstate.pstate_computed;

    uint32_t clip_min, clip_max;

    clip_min = G_pgpe_pstate.clip_min;

    if (G_pgpe_pstate.wof_status == WOF_STATUS_ENABLED)
    {
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

    PK_TRACE("APC: ps_target=0x%x", G_pgpe_pstate.pstate_target);
    pgpe_opt_set_word(0, 0);
    pgpe_opt_set_byte(0, G_pgpe_pstate.pstate_target);
    ppe_trace_op(PGPE_OPT_AUCTION_DONE, pgpe_opt_get());
}

void pgpe_pstate_compute_vratio(uint32_t pstate)
{
    uint32_t vmin_mv = pgpe_gppb_get_ops_vdd(VPD_PT_SET_BIASED, POWERSAVE);
    uint32_t vdd = pgpe_pstate_intp_vdd_from_ps(pstate, VPD_PT_SET_BIASED); //non-uplifted
    uint32_t vratio_vdd_accum = 0;
    uint32_t core_cnt = 0;
    uint32_t ccsr;
    uint32_t c;
    HcodeOCCSharedData_t* occ_shared_data = (HcodeOCCSharedData_t*)OCC_SHARED_SRAM_ADDR_START;
    iddq_activity_t* G_p_iddq_act_val =  (iddq_activity_t*)(OCC_SHARED_SRAM_ADDR_START + occ_shared_data->iddq_data_offset);

    ccsr = in32(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW);

    for(c = 0; c < MAX_CORES; c++)
    {
        if (ccsr & CORE_MASK(c))
        {
            core_cnt++;

            //if core is ON
            if (G_p_iddq_act_val->act_val[c][ACT_CNT_IDX_CORECLK_OFF] == 0)
            {
                vratio_vdd_accum += pgpe_gppb_get_core_on_ratio_vdd();

                //if core MMA is ON
                if (G_p_iddq_act_val->act_val[c][ACT_CNT_IDX_MMA_OFF] == 0)
                {
                    vratio_vdd_accum += pgpe_gppb_get_mma_on_ratio_vdd();
                }
            }
            //if core c is Vmin
            else if (G_p_iddq_act_val->act_val[c][ACT_CNT_IDX_CORE_VMIN])
            {
                vratio_vdd_accum += (pgpe_gppb_get_core_on_ratio_vdd() * vmin_mv) / vdd;
            }
        }
    }

    PK_TRACE("VRA: CoreCnt=%u, SortCnt=%u", core_cnt, G_pgpe_pstate.sort_core_count);
    G_pgpe_pstate.vratio_vdd_inst = vratio_vdd_accum / G_pgpe_pstate.sort_core_count;
    G_pgpe_pstate.vratio_inst = G_pgpe_pstate.vratio_vdd_inst;
    PK_TRACE("VRA: vratio_inst_vdd=%u, vratio_vdd_accum=%u", G_pgpe_pstate.vratio_vdd_inst, vratio_vdd_accum);
    PK_TRACE("VRA: vratio_inst=%u", G_pgpe_pstate.vratio_inst);
}

void pgpe_pstate_compute_vindex()
{
    uint32_t msd = ((G_pgpe_pstate.vratio_inst & 0xF000) >> 12);
    uint32_t rem = (G_pgpe_pstate.vratio_inst & 0x0FFF);
    uint32_t idx_rnd = (rem > 0x800) ? 1 : 0;
    G_pgpe_pstate.vindex = (msd >= 5) ? (msd - 5 + idx_rnd) : 0;
    PK_TRACE("VIX: Vindex=0x%x", G_pgpe_pstate.vindex);
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

uint32_t pgpe_pstate_intp_vddup_from_ps(uint32_t ps, uint32_t vpd_pt_set, uint32_t idd_scale)
{
    //interpolate new current(AC and DC) based on pstate next
    uint32_t idd_ac = pgpe_pstate_intp_idd_ac_from_ps(ps, VPD_PT_SET_BIASED);
    uint32_t idd_dc = pgpe_pstate_intp_idd_dc_from_ps(ps, VPD_PT_SET_BIASED);

    //compute load line drop
    //\\todo come up with correct idd_scale/vratio_format.
    //idd_scale/vratio format is a number between 0.0 and 1.0, but we need to represent this using integers on PGPE
    uint32_t vdd_uplift = ((((idd_ac + idd_dc) * idd_scale) * (pgpe_gppb_get(vdd_sysparm.loadline_uohm) + pgpe_gppb_get(
                                vdd_sysparm.distloss_uohm))) / 1000
                           + pgpe_gppb_get(vdd_sysparm.distoffset_uv)) / 1000;

    //PK_TRACE("PS: ps=0x%x, idd_ac=0x%x, idd_dc=0x%x, vdd_up=0x%x", ps, idd_ac, idd_dc, vdd_uplift);
    return vdd_uplift;
}

uint32_t pgpe_pstate_intp_vcsup_from_ps(uint32_t ps, uint32_t vpd_pt_set)
{
    uint32_t ics_ac = pgpe_pstate_intp_ics_ac_from_ps(ps, VPD_PT_SET_BIASED);
    uint32_t ics_dc = pgpe_pstate_intp_ics_dc_from_ps(ps, VPD_PT_SET_BIASED);

    uint32_t vcs_uplift = ((((ics_ac + ics_dc)) *  (pgpe_gppb_get(vcs_sysparm.loadline_uohm) + pgpe_gppb_get(
                                vcs_sysparm.distloss_uohm))) / 1000
                           + pgpe_gppb_get(vcs_sysparm.distoffset_uv)) / 1000;

    //PK_TRACE("PS: ps=0x%x, ics_ac=0x%x, ics_dc=0x%x, vcs_up=0x%x", ps, ics_ac, ics_dc, vcs_uplift);
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
        if (ps <= pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF5))
        {
            return REGION_CF5_UT;
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
        if (ps >= pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF1))
        {
            return REGION_POWERSAVE_CF1;
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

uint32_t pgpe_pstate_get_ps_vpd_pt(uint32_t ps)
{

    //We use binary search to determine the region
    if (ps < ((pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF3) + pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED,
               VPD_PV_CF4)) >> 1))
    {
        if (ps < ((pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF5) + pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED,
                   VPD_PV_UT)) >> 1))
        {
            return ULTRA;
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
                        VPD_PV_PSAV)) >> 1))
        {
            return POWERSAVE;
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
        if (vdd >= pgpe_gppb_get_ops_vdd(VPD_PT_SET_BIASED, VPD_PV_CF5))
        {
            return REGION_CF5_UT;
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
            return REGION_POWERSAVE_CF1;
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
        if (vcs >= pgpe_gppb_get_ops_vcs(VPD_PT_SET_BIASED, VPD_PV_CF5))
        {
            return REGION_CF5_UT;
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
            return REGION_POWERSAVE_CF1;
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
        if (idd  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF5].idd_tdp_ac_10ma)
        {
            return REGION_CF5_UT;
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
            return REGION_POWERSAVE_CF1;
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
        if (idd  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF5].idd_tdp_dc_10ma)
        {
            return REGION_CF5_UT;
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
            return REGION_POWERSAVE_CF1;
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
        if (ics  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF5].ics_tdp_dc_10ma)
        {
            return REGION_CF5_UT;
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
            return REGION_POWERSAVE_CF1;
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
        if (ics  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF5].ics_tdp_ac_10ma)
        {
            return REGION_CF5_UT;
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
            return REGION_POWERSAVE_CF1;
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
    G_pgpe_pstate.pmsr.fields.pmin          =  G_pgpe_pstate.clip_min;
    G_pgpe_pstate.pmsr.fields.pmax          =  G_pgpe_pstate.clip_max;
}

void pgpe_pstate_pmsr_set_safe_mode()
{
    G_pgpe_pstate.pmsr.fields.safe_mode = 1;
}

void pgpe_pstate_pmsr_write()
{
    PK_TRACE("PMSR=0x%08x%08x", G_pgpe_pstate.pmsr.words.high_order,
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
    PK_TRACE("PMSR WRAddr=0x%x, RdAddr=0x%x", PPE_SCOM_ADDR_MC_WR(QME_PMSRS, 0xF), PPE_SCOM_ADDR_MC_OR(QME_PMSRS, 0xF));
#endif
}

void pgpe_pstate_sample_currents()
{
    uint32_t current;

    pgpe_avsbus_voltage_read(pgpe_gppb_get(avs_bus_topology.vdd_avsbus_num),
                             pgpe_gppb_get(avs_bus_topology.vdd_avsbus_rail),
                             &current);
    G_pgpe_pstate.idd = current;

    pgpe_avsbus_voltage_read(pgpe_gppb_get(avs_bus_topology.vcs_avsbus_num),
                             pgpe_gppb_get(avs_bus_topology.vcs_avsbus_rail),
                             &current);
    G_pgpe_pstate.ics = current;
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
}