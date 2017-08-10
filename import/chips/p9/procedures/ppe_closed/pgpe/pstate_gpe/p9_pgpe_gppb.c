/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_gppb.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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

#include "p9_pgpe_gppb.h"
#include "p9_pgpe_header.h"

//Globals and externs
GlobalPstateParmBlock* G_gppb;//Global pointer to GlobalPstateParmBlock
uint32_t G_ext_vrm_inc_rate_mult_usperus;
uint32_t G_ext_vrm_dec_rate_mult_usperus;
extern PgpeHeader_t* G_pgpe_header_data;

//
//Private function prototypes
//
uint8_t p9_pgpe_gppb_get_ext_vdd_region(uint32_t evid);
uint8_t p9_pgpe_gppb_get_ps_region(Pstate ps, uint8_t vpt_pt_set);

//
//p9_pgpe_gppb_init
//
//This sets the pointer to GlobalPstateParmBlock
//
void p9_pgpe_gppb_init()
{
    void* gppb_sram_offset = G_pgpe_header_data->g_pgpe_gppb_sram_addr;//GPPB Sram Offset
    G_gppb = (GlobalPstateParmBlock*)gppb_sram_offset;

    PK_TRACE_INF("INIT: DPLL0Value=0x%x", G_gppb->dpll_pstate0_value);
    //External VRM increasing rate in us/uv
    G_ext_vrm_inc_rate_mult_usperus = 1 / G_gppb->ext_vrm_transition_rate_inc_uv_per_us;

    //External VRM decreasing rate in us/uv
    G_ext_vrm_dec_rate_mult_usperus = 1 / G_gppb->ext_vrm_transition_rate_dec_uv_per_us;
}

//
//p9_pgpe_gppb_intp_vdd_from_ps
//
//Interpolate voltage from pstate
//
uint32_t p9_pgpe_gppb_intp_vdd_from_ps(Pstate ps, uint8_t vpd_pt_set)
{
    uint32_t vdd;
    uint8_t r  = p9_pgpe_gppb_get_ps_region(ps, vpd_pt_set);

    vdd = (((G_gppb->PStateVSlopes[vpd_pt_set][r]) *
            (-ps + G_gppb->operating_points_set[vpd_pt_set][r].pstate)) >> VID_SLOPE_FP_SHIFT_12)
          + G_gppb->operating_points_set[vpd_pt_set][r].vdd_mv;

    return vdd;
}

//
//p9_pgpe_gppb_get_ps_region
//
//Returns which of three regions the pstate value falls under
//
uint8_t p9_pgpe_gppb_get_ps_region(Pstate ps, uint8_t vpd_pt_set)
{
    if (ps <= G_gppb->operating_points_set[vpd_pt_set][TURBO].pstate)
    {
        return REGION_TURBO_ULTRA;
    }
    else if (ps >= G_gppb->operating_points_set[vpd_pt_set][NOMINAL].pstate)
    {
        return REGION_POWERSAVE_NOMINAL;
    }
    else
    {
        return REGION_NOMINAL_TURBO;
    }
}

//
//p9_pgpe_gppb_intp_ps_from_evid
//
//Interpolate pstate from evid
//This functions is hardcoded to use BIASED_SYSPARAMETERS pt
//bc currently interpolating pstate from vdd is only needed
//for Biased SysParam VPD during actuation
uint8_t p9_pgpe_gppb_intp_ps_from_ext_vdd(uint16_t ext_vdd)
{
    Pstate ps;
    uint8_t  r = p9_pgpe_gppb_get_ext_vdd_region(ext_vdd);

    ps = -(((G_gppb->VPStateSlopes[VPD_PT_SET_BIASED_SYSP][r]) *
            (ext_vdd - G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][r].vdd_mv)) >> VID_SLOPE_FP_SHIFT_12)
         + G_gppb->operating_points_set[VPD_SLOPES_BIASED][r].pstate;

    return ps;
}

//
//p9_pgpe_gppb_get_evid_region
//
//Returns which of three regions the evid value falls under
//
uint8_t p9_pgpe_gppb_get_ext_vdd_region(uint32_t ext_vdd)
{
    if (ext_vdd >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][TURBO].vdd_mv)
    {
        return REGION_TURBO_ULTRA;
    }
    else if (ext_vdd <= G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][NOMINAL].vdd_mv)
    {
        return REGION_POWERSAVE_NOMINAL;
    }
    else
    {
        return REGION_NOMINAL_TURBO;
    }
}
