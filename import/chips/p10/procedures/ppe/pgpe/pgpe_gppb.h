/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_gppb.h $            */
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

#ifndef __PGPE_GPPB_H__
#define __PGPE_GPPB_H__

#include "pgpe.h"

extern GlobalPstateParmBlock_t* G_gppb;
extern uint8_t* G_gppb_pgpe_flags;
extern GlobalPstateParmBlockBase_t* G_gppb_base;
extern AvsBusTopology_t* G_gppb_avsbus;
extern SysPowerDistParms_t* G_gppb_vdd_sysparm;
extern SysPowerDistParms_t* G_gppb_vcs_sysparm;
extern SysPowerDistParms_t* G_gppb_vdn_sysparm;
extern VRMParms_v1_t*          G_gppb_ext_vrm_parms;
extern PoundVOpPoint_t*     G_gppb_operating_points_set[NUM_VPD_PTS_SET_V1];
extern PoundVSlopes_t*      G_gppb_poundv_slopes;
extern ResClkSetup_t*       G_gppb_resclk;
extern PoundWEntry_t*       G_gppb_dds[NUM_PV_POINTS];
extern PoundWEntry_AltCal_t* G_gppb_alt_cal[NUM_PV_POINTS];
extern PoundWEntry_TgtActBin_t* G_gppb_tgt_act_bin[NUM_PV_POINTS];
extern PoundWOtherPadded_t*           G_gppb_dds_other;
extern vdd_calibration*         G_gppb_vdd_cal;
extern PoundWSlopes_t*          G_gppb_poundw_slopes;
extern GlobalPstateParmBlockWOF_t* G_gppb_wof;
extern GlobalPstateParmBlockWOV_t* G_gppb_wov;


void pgpe_gppb_init();
void pgpe_gppb_set_pgpe_flags_disable(uint32_t x);

//Temporary will be removed later on when HWP code has move to
//newer version of GPPB
uint32_t pgpe_gppb_get_pgpe_flags(uint32_t x);
uint32_t pgpe_gppb_get_reference_frequency();
uint32_t pgpe_gppb_get_frequency_step();
uint32_t pgpe_gppb_get_occ_complex_frequency_mhz();
uint32_t pgpe_gppb_get_dpll_pstate0_value();
uint32_t pgpe_gppb_get_safe_frequency();
uint32_t pgpe_gppb_get_ceiling_frequency();
uint32_t pgpe_gppb_get_safe_voltage_mv(uint32_t idx);
uint32_t pgpe_gppb_get_safe_throttle_idx();
uint16_t pgpe_gppb_get_vcs_vdd_offset_mv();
uint16_t pgpe_gppb_get_vcs_floor_mv();
uint16_t pgpe_gppb_get_array_write_vdn_mv();
uint16_t pgpe_gppb_get_array_write_vdd_mv();
uint32_t pgpe_gppb_get_rvrm_deadzone_mv();
uint8_t pgpe_gppb_get_avs_bus_topology_vdd_avsbus_num();
uint8_t pgpe_gppb_get_avs_bus_topology_vdd_avsbus_rail();
uint8_t pgpe_gppb_get_avs_bus_topology_vdn_avsbus_num();
uint8_t pgpe_gppb_get_avs_bus_topology_vdn_avsbus_rail();
uint8_t pgpe_gppb_get_avs_bus_topology_vcs_avsbus_num();
uint8_t pgpe_gppb_get_avs_bus_topology_vcs_avsbus_rail();
uint32_t pgpe_gppb_get_vdd_sysparm_loadline();
uint32_t pgpe_gppb_get_vdd_sysparm_distloss();
uint32_t pgpe_gppb_get_vdd_sysparm_distoffset();
uint32_t pgpe_gppb_get_vcs_sysparm_loadline();
uint32_t pgpe_gppb_get_vcs_sysparm_distloss();
uint32_t pgpe_gppb_get_vcs_sysparm_distoffset();
uint32_t pgpe_gppb_get_ext_vrm_parms_transition_start_ns(uint32_t rail);
uint32_t pgpe_gppb_get_ext_vrm_parms_transition_rate_inc_uv_per_us(uint32_t rail);
uint32_t pgpe_gppb_get_ext_vrm_parms_transition_rate_dec_uv_per_us(uint32_t rail);
uint32_t pgpe_gppb_get_ext_vrm_parms_stabilization_time_us(uint32_t rail);
uint32_t pgpe_gppb_get_ext_vrm_parms_step_size_mv(uint32_t rail);
uint32_t pgpe_gppb_get_current_scale_factor(uint32_t rail);

//#PoundV
uint32_t pgpe_gppb_get_ops_ps(uint32_t pt_set, uint32_t idx);
uint32_t pgpe_gppb_get_ops_vdd(uint32_t pt_set, uint32_t idx);
uint32_t pgpe_gppb_get_ops_vcs(uint32_t pt_set, uint32_t idx);
uint32_t pgpe_gppb_get_ops_idd_ac(uint32_t pt_set, uint32_t idx);
uint32_t pgpe_gppb_get_ops_idd_dc(uint32_t pt_set, uint32_t idx);
uint32_t pgpe_gppb_get_ops_ics_ac(uint32_t pt_set, uint32_t idx);
uint32_t pgpe_gppb_get_ops_ics_dc(uint32_t pt_set, uint32_t idx);
uint16_t pgpe_gppb_get_psv_slope(uint32_t rail, uint32_t pt_set, uint32_t region);
uint16_t pgpe_gppb_get_vps_slope(uint32_t rail, uint32_t pt_set, uint32_t  region);
uint16_t pgpe_gppb_get_ps_iac_slope(uint32_t rail, uint32_t pt_set, uint32_t region);
uint16_t pgpe_gppb_get_ps_idc_slope(uint32_t rail, uint32_t pt_set, uint32_t region);
uint16_t pgpe_gppb_get_iac_ps_slope(uint32_t rail, uint32_t pt_set, uint32_t region);
uint16_t pgpe_gppb_get_idc_ps_slope(uint32_t rail, uint32_t pt_set, uint32_t region);

//DDS
uint16_t pgpe_gppb_get_dds_delay_ps_slope(uint32_t pt_set, uint32_t core, uint32_t region);
uint8_t pgpe_gppb_get_dds_trip_ps_slope(uint32_t pt_set, uint32_t core, uint32_t region);
uint8_t pgpe_gppb_get_dds_large_ps_slope(uint32_t pt_set, uint32_t core, uint32_t region);
uint32_t pgpe_gppb_get_dds_delay(uint32_t core, uint32_t idx);
uint32_t pgpe_gppb_get_dds_trip(uint32_t core, uint32_t idx);
uint32_t pgpe_gppb_get_dds_large(uint32_t core, uint32_t idx);
uint32_t pgpe_gppb_get_dds_cal_adj(uint32_t core, uint32_t idx);
uint64_t pgpe_gppb_get_dds_other_droop_count_control();
uint64_t pgpe_gppb_get_dds_other_ftc_large_droop_mode_reg_setting();
uint64_t pgpe_gppb_get_dds_other_ftc_misc_droop_mode_reg_setting();
uint32_t pgpe_gppb_get_dds_trip_mode();
uint32_t pgpe_gppb_get_dds_trip_intp_ctrl(uint32_t x);

//WOV
uint8_t pgpe_gppb_get_wov_underv_perf_loss_thresh_pct();
uint8_t pgpe_gppb_get_wov_underv_step_incr_pct();
uint8_t pgpe_gppb_get_wov_underv_step_decr_pct();
uint8_t pgpe_gppb_get_wov_underv_max_pct();
uint8_t pgpe_gppb_get_wov_underv_vmin_mv();
uint8_t pgpe_gppb_get_wov_overv_vmax_mv();
uint8_t pgpe_gppb_get_wov_overv_step_incr_pct();
uint8_t pgpe_gppb_get_wov_overv_step_decr_pct();
uint8_t pgpe_gppb_get_wov_overv_max_pct();
uint16_t pgpe_gppb_get_wov_idd_thresh();
uint16_t pgpe_gppb_get_wov_dirty_undercurr_control(uint32_t droop_level);

//WOF
uint32_t pgpe_gppb_get_vratio_vdd(uint32_t idx);
uint32_t pgpe_gppb_get_vratio_vcs(uint32_t idx);



//Macro accessor functions
//To be uncommented later on when HWP code has moved to
//newer version of GPPB
/*
#define pgpe_gppb_get_pgpe_flags(x) G_gppb_pgpe_flags[x]
#define pgpe_gppb_get_reference_frequency() G_gppb_base->reference_frequency_khz
#define pgpe_gppb_get_frequency_step() G_gppb_base->frequency_step_khz
#define pgpe_gppb_get_occ_complex_frequency_mhz() G_gppb_base->occ_complex_frequency_mhz;
#define pgpe_gppb_get_dpll_pstate0_value() G_gppb_base->dpll_pstate0_value;
#define pgpe_gppb_get_safe_frequency() G_gppb_base->safe_frequency_khz;
#define pgpe_gppb_get_safe_voltage_mv(idx) G_gppb_base->safe_voltage_mv[idx];
#define pgpe_gppb_get_safe_throttle_idx() G_gppb_base->safe_throttle_idx;
#define pgpe_gppb_get_vcs_vdd_offset_mv() G_gppb_base->vcs_vdd_offset_mv;
#define pgpe_gppb_get_vcs_floor_mv() G_gppb_base->vcs_floor_mv;
#define pgpe_gppb_get_array_write_vdn_mv() G_gppb_base->array_write_vdn_mv;
#define pgpe_gppb_get_array_write_vdd_mv() G_gppb_base->array_write_vdd_mv;
#define pgpe_gppb_get_rvrm_deadzone_mv() G_gppb_base->rvrm_deadzone_mv;
#define pgpe_gppb_get_avs_bus_topology_vdd_avsbus_num() G_gppb_avsbus->vdd_avsbus_num;
#define pgpe_gppb_get_avs_bus_topology_vdd_avsbus_rail() G_gppb_avsbus->vdd_avsbus_rail;
#define pgpe_gppb_get_avs_bus_topology_vdn_avsbus_num() G_gppb_avsbus->vdn_avsbus_num;
#define pgpe_gppb_get_avs_bus_topology_vdn_avsbus_rail() G_gppb_avsbus->vdn_avsbus_rail;
#define pgpe_gppb_get_avs_bus_topology_vcs_avsbus_num() G_gppb_avsbus->vcs_avsbus_num;
#define pgpe_gppb_get_avs_bus_topology_vcs_avsbus_rail() G_gppb_avsbus->vcs_avsbus_rail;
#define pgpe_gppb_get_vdd_sysparm_loadline() G_gppb_vdd_sysparm->loadline_uohm;
#define pgpe_gppb_get_vdd_sysparm_distloss() G_gppb_vdd_sysparm->distloss_uohm;
#define pgpe_gppb_get_vdd_sysparm_distoffset()  G_gppb_vdd_sysparm->distoffset_uv;
#define pgpe_gppb_get_vcs_sysparm_loadline()  G_gppb_vcs_sysparm->loadline_uohm;
#define pgpe_gppb_get_vcs_sysparm_distloss()  G_gppb_vcs_sysparm->distloss_uohm;
#define pgpe_gppb_get_vcs_sysparm_distoffset() G_gppb_vcs_sysparm->distoffset_uv;
#define pgpe_gppb_get_ext_vrm_parms_transition_start_ns(rail)  G_gppb_ext_vrm_parms->transition_start_ns[rail];
#define pgpe_gppb_get_ext_vrm_parms_transition_rate_inc_uv_per_us(rail)  G_gppb_ext_vrm_parms->transition_rate_inc_uv_per_us[rail];
#define pgpe_gppb_get_ext_vrm_parms_transition_rate_dec_uv_per_us(rail) G_gppb_ext_vrm_parms->transition_rate_dec_uv_per_us[rail];
#define pgpe_gppb_get_ext_vrm_parms_stabilization_time_us(rail)  G_gppb_ext_vrm_parms->stabilization_time_us[rail];
#define pgpe_gppb_get_ext_vrm_parms_step_size_mv(rail)  G_gppb_ext_vrm_parms->step_size_mv[rail];

//#PoundV
#define pgpe_gppb_get_ops_ps(pt_set, idx)  G_gppb_operating_points_set[pt_set][idx].pstate;
#define pgpe_gppb_get_ops_vdd(pt_set, idx) G_gppb_operating_points_set[pt_set][idx].vdd_mv;
#define pgpe_gppb_get_ops_vcs(pt_set, idx) G_gppb_operating_points_set[pt_set][idx].vcs_mv;
#define pgpe_gppb_get_ops_idd_ac(pt_set, idx) G_gppb_operating_points_set[pt_set][idx].idd_tdp_ac_10ma;
#define pgpe_gppb_get_ops_idd_dc(pt_set, idx) G_gppb_operating_points_set[pt_set][idx].idd_tdp_dc_10ma;
#define pgpe_gppb_get_ops_ics_ac(pt_set, idx) G_gppb_operating_points_set[pt_set][idx].ics_tdp_ac_10ma;
#define pgpe_gppb_get_ops_ics_dc(pt_set, idx)  G_gppb_operating_points_set[pt_set][idx].ics_tdp_dc_10ma;
#define pgpe_gppb_get_psv_slope(rail, pt_set, region) G_gppb_poundv_slopes->ps_voltage_slopes[rail][pt_set][region];
#define pgpe_gppb_get_vps_slope(rail, pt_set, region)  G_gppb_poundv_slopes->voltage_ps_slopes[rail][pt_set][region];
#define pgpe_gppb_get_ps_iac_slope(rail, pt_set, region)  G_gppb_poundv_slopes->ps_ac_current_tdp[rail][pt_set][region];
#define pgpe_gppb_get_ps_idc_slope(rail, pt_set, region)  G_gppb_poundv_slopes->ps_dc_current_tdp[rail][pt_set][region];

#define pgpe_gppb_get_iac_ps_slope(rail, pt_set, region) G_gppb_poundv_slopes->ac_current_ps_tdp[rail][pt_set][region];
#define pgpe_gppb_get_idc_ps_slope(rail, pt_set, region) G_gppb_poundv_slopes->ac_current_ps_tdp[rail][pt_set][region];

//WOV
#define pgpe_gppb_get_wov_underv_perf_loss_thresh_pct() G_gppb_wov->wov_underv_perf_loss_thresh_pct;
#define pgpe_gppb_get_wov_underv_step_incr_pct() G_gppb_wov->wov_underv_step_incr_pct;
#define pgpe_gppb_get_wov_underv_step_decr_pct()  G_gppb_wov->wov_underv_step_decr_pct;
#define pgpe_gppb_get_wov_underv_max_pct()  G_gppb_wov->wov_underv_max_pct;
#define pgpe_gppb_get_wov_underv_vmin_mv() G_gppb_wov->wov_underv_vmin_mv;
#define pgpe_gppb_get_wov_overv_vmax_mv() G_gppb_wov->wov_overv_vmax_mv;
#define pgpe_gppb_get_wov_overv_step_incr_pct()  G_gppb_wov->wov_overv_step_incr_pct;
#define pgpe_gppb_get_wov_overv_step_decr_pct() G_gppb_wov->wov_overv_step_decr_pct;
#define pgpe_gppb_get_wov_overv_max_pct()  G_gppb_wov->wov_overv_max_pct;
#define pgpe_gppb_get_dds_delay_ps_slope(pt_set, core, region)  G_gppb_poundw_slopes->ps_dds_delay_slopes[pt_set][core][region];
#define pgpe_gppb_get_dds_trip_ps_slope(pt_set, core, region) G_gppb_poundw_slopes->ps_dds_slopes[TRIP_OFFSET][core][region];
#define pgpe_gppb_get_dds_delay(core, idx) G_gppb_dds[core][idx].ddsc.fields.insrtn_dely;
#define pgpe_gppb_get_dds_trip(core, idx)  G_gppb_dds[core][idx].ddsc.fields.trip_offset;
#define pgpe_gppb_get_dds_cal_adj(core, idx) G_gppb_dds[core][idx].ddsc.fields.calb_adj;
#define pgpe_gppb_get_dds_other_droop_count_control() G_gppb_dds_other->droop_count_control;
#define pgpe_gppb_get_dds_other_ftc_large_droop_mode_reg_setting() G_gppb_dds_other->ftc_large_droop_mode_reg_setting;
#define pgpe_gppb_get_dds_other_ftc_misc_droop_mode_reg_setting()  G_gppb_dds_other->ftc_misc_droop_mode_reg_setting;
#define pgpe_gppb_get_dds_trip_mode() G_gppb_pgpe_flags[PGPE_FLAG_TRIP_MODE];
#define pgpe_gppb_get_dds_trip_intp_ctrl(x) G_gppb_pgpe_flags[PGPE_FLAG_TRIP_INTERPOLATION_CONTROL] & (x);
#define pgpe_gppb_get_core_on_ratio_vdd() G_gppb_wof->core_on_ratio_vdd;
#define pgpe_gppb_get_l3_on_ratio_vdd() G_gppb_wof->l3_on_ratio_vdd;
#define pgpe_gppb_get_mma_on_ratio_vdd() G_gppb_wof->mma_on_ratio_vdd;
#define pgpe_gppb_get_l3_on_ratio_vcs()   G_gppb_wof->l3_on_ratio_vcs;
#define pgpe_gppb_get_core_on_ratio_vcs()  G_gppb_wof->core_on_ratio_vcs;
#define pgpe_gppb_get_vdd_vratio_weight()  G_gppb_wof->vdd_vratio_weight;
#define pgpe_gppb_get_vcs_vratio_weight() G_gppb_wof->vcs_vratio_weight;
//Macro accessor function
#define pgpe_gppb_get(x) G_gppb->x
#define pgpe_gppb_get_psv_slope(rail, pt_set, region) G_gppb->ps_voltage_slopes[rail][pt_set][region]
#define pgpe_gppb_get_vps_slope(rail, pt_set, region) G_gppb->voltage_ps_slopes[rail][pt_set][region]
#define pgpe_gppb_get_ops_ps(pt_set, idx) G_gppb->operating_points_set[pt_set][idx].pstate
#define pgpe_gppb_get_ops_vdd(pt_set, idx) G_gppb->operating_points_set[pt_set][idx].vdd_mv
#define pgpe_gppb_get_ops_vcs(pt_set, idx) G_gppb->operating_points_set[pt_set][idx].vcs_mv
#define pgpe_gppb_get_ops_idd_ac(pt_set, idx) G_gppb->operating_points_set[pt_set][idx].idd_tdp_ac_10ma
#define pgpe_gppb_get_ops_idd_dc(pt_set, idx) G_gppb->operating_points_set[pt_set][idx].idd_tdp_dc_10ma
#define pgpe_gppb_get_ops_ics_ac(pt_set, idx) G_gppb->operating_points_set[pt_set][idx].ics_tdp_ac_10ma
#define pgpe_gppb_get_ops_ics_dc(pt_set, idx) G_gppb->operating_points_set[pt_set][idx].ics_tdp_dc_10ma
#define pgpe_gppb_get_ps_iac_slope(rail, pt_set, region) G_gppb->ps_ac_current_tdp[rail][pt_set][region]
#define pgpe_gppb_get_ps_idc_slope(rail, pt_set, region) G_gppb->ps_dc_current_tdp[rail][pt_set][region]
#define pgpe_gppb_get_iac_ps_slope(rail, pt_set, region) G_gppb->ac_current_ps_tdp[rail][pt_set][region]
#define pgpe_gppb_get_idc_ps_slope(rail, pt_set, region) G_gppb->dc_current_ps_tdp[rail][pt_set][region]
#define pgpe_gppb_get_dds_delay_ps_slope(pt_set, core, region) G_gppb->ps_dds_delay_slopes[pt_set][core][region]
#define pgpe_gppb_get_dds_trip_ps_slope(pt_set, core, region) G_gppb->ps_dds_slopes[TRIP_OFFSET][pt_set][core][region]
#define pgpe_gppb_get_dds_delay(core, idx) G_gppb->dds[core][idx].ddsc.fields.insrtn_dely
#define pgpe_gppb_get_dds_trip(core, idx) G_gppb->dds[core][idx].ddsc.fields.trip_offset
#define pgpe_gppb_get_dds_cal_adj(core, idx) G_gppb->dds[core][idx].ddsc.fields.calb_adj
#define pgpe_gppb_get_dds_other(x) G_gppb->dds_other.x
#define pgpe_gppb_get_dds_trip_mode() G_gppb->pgpe_flags[PGPE_FLAG_TRIP_MODE]
#define pgpe_gppb_get_dds_trip_intp_ctrl(x) G_gppb->pgpe_flags[PGPE_FLAG_TRIP_INTERPOLATION_CONTROL] & (x)
#define pgpe_gppb_get_vratio_vdd(x) G_gppb->vratio_vdd_64ths[x]
#define pgpe_gppb_get_vratio_vcs(x) G_gppb->vratio_vcs_64ths[x]
#define pgpe_gppb_get_core_on_ratio_vdd() G_gppb->core_on_ratio_vdd
#define pgpe_gppb_get_l3_on_ratio_vdd() G_gppb->l3_on_ratio_vdd
#define pgpe_gppb_get_mma_on_ratio_vdd() G_gppb->mma_on_ratio_vdd
#define pgpe_gppb_get_l3_on_ratio_vcs() G_gppb->l3_on_ratio_vcs
#define pgpe_gppb_get_core_on_ratio_vcs() G_gppb->core_on_ratio_vcs
#define pgpe_gppb_get_vdd_vratio_weight() G_gppb->vdd_vratio_weight
#define pgpe_gppb_get_vcs_vratio_weight() G_gppb->vcs_vratio_weight

#define pgpe_gppb_get_pgpe_flags(x) G_gppb->pgpe_flags[x]
#define pgpe_gppb_get_safe_frequency() G_gppb->safe_frequency_khz
#define pgpe_gppb_get_reference_frequency() G_gppb->reference_frequency_khz
#define pgpe_gppb_get_frequency_step() G_gppb->frequency_step_khz
*/

#endif
