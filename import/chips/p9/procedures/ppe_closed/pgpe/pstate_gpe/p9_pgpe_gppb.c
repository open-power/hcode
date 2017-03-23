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

//Global pointer to GlobalPstateParmBlock
GlobalPstateParmBlock* G_gppb;

uint32_t G_pstate0_dpll_value;
uint32_t G_ext_vrm_inc_rate_mult_usperus;
uint32_t G_ext_vrm_dec_rate_mult_usperus;
extern PgpeHeader_t* G_pgpe_header_data;

//
//Private function prototypes
//
void p9_pgpe_gppb_compute_vpd_pts();
void p9_pgpe_gppb_compute_PsV_slopes();
uint8_t p9_pgpe_gppb_get_ext_vdd_region(uint32_t evid);
uint8_t p9_pgpe_gppb_get_ps_region(Pstate ps, uint8_t vpt_pt_set);

//
//p9_pgpe_gppb_init
//
//This sets the pointer to GlobalPstateParmBlock, and calculates slope
//co-efficients
//
//Note: In future, the slope calculation might be done offline
void p9_pgpe_gppb_init()
{
    void* gppb_sram_offset = G_pgpe_header_data->g_pgpe_gppb_sram_addr;//GPPB Sram Offset
    G_gppb = (GlobalPstateParmBlock*)gppb_sram_offset;

    //Apply Biases and System Parameters
    p9_pgpe_gppb_compute_vpd_pts();

    //Calculate slope co-efficents.
    p9_pgpe_gppb_compute_PsV_slopes();

    //Dpll value corresponding to Pstate 0
    G_pstate0_dpll_value = ((G_gppb->reference_frequency_khz + (G_gppb->frequency_step_khz - 1)) /
                            G_gppb->frequency_step_khz);

    PK_TRACE_INF("GPP: DPLL0Value=0x%x", G_pstate0_dpll_value );
    PK_TRACE_INF("GPP: PowerSave PS=0x%x", G_gppb->operating_points[POWERSAVE].pstate );
    PK_TRACE_INF("GPP: Nominal PS=0x%x", G_gppb->operating_points[NOMINAL].pstate );
    //External VRM increasing rate in us/uv
    G_ext_vrm_inc_rate_mult_usperus = 1 / G_gppb->ext_vrm_transition_rate_inc_uv_per_us;

    //External VRM decreasing rate in us/uv
    G_ext_vrm_dec_rate_mult_usperus = 1 / G_gppb->ext_vrm_transition_rate_dec_uv_per_us;

}

//
//p9_pgpe_gppb_compute_vpd_pts
//
void p9_pgpe_gppb_compute_vpd_pts()
{
    int p = 0;

    //RAW POINTS. We just copy them as is
    for (p = 0; p < VPD_PV_POINTS; p++)
    {
        G_gppb->operating_points_set[VPD_PT_SET_RAW][p].vdd_mv = G_gppb->operating_points[p].vdd_mv ;
        G_gppb->operating_points_set[VPD_PT_SET_RAW][p].vcs_mv = G_gppb->operating_points[p].vcs_mv;
        G_gppb->operating_points_set[VPD_PT_SET_RAW][p].idd_100ma = G_gppb->operating_points[p].idd_100ma;
        G_gppb->operating_points_set[VPD_PT_SET_RAW][p].ics_100ma = G_gppb->operating_points[p].ics_100ma;
        G_gppb->operating_points_set[VPD_PT_SET_RAW][p].frequency_mhz = G_gppb->operating_points[p].frequency_mhz;
        G_gppb->operating_points_set[VPD_PT_SET_RAW][p].pstate = G_gppb->operating_points[p].pstate;
    }

    //SYSTEM PARAMS APPLIED POINTS
    //We first calculate everything in uV, and then divide by 1000. Doing this ensures
    //that integer division doesn't result in 0 for intermediate terms
    for (p = 0; p < VPD_PV_POINTS; p++)
    {
        G_gppb->operating_points_set[VPD_PT_SET_SYSP][p].vdd_mv =
            (G_gppb->operating_points[p].vdd_mv * 1000 +
             ((G_gppb->operating_points[p].idd_100ma * 100) * (G_gppb->vdd_sysparm.loadline_uohm +
                     G_gppb->vdd_sysparm.distloss_uohm)) +
             (G_gppb->vdd_sysparm.distoffset_uv)) / 1000 ;
        G_gppb->operating_points_set[VPD_PT_SET_SYSP][p].vcs_mv =
            (G_gppb->operating_points[p].vcs_mv * 1000 +
             ((G_gppb->operating_points[p].ics_100ma * 100) * (G_gppb->vcs_sysparm.loadline_uohm +
                     G_gppb->vcs_sysparm.distloss_uohm)) +
             (G_gppb->vcs_sysparm.distoffset_uv)) / 1000 ;
        G_gppb->operating_points_set[VPD_PT_SET_SYSP][p].idd_100ma = G_gppb->operating_points[p].idd_100ma;
        G_gppb->operating_points_set[VPD_PT_SET_SYSP][p].ics_100ma = G_gppb->operating_points[p].ics_100ma;
        G_gppb->operating_points_set[VPD_PT_SET_SYSP][p].frequency_mhz = G_gppb->operating_points[p].frequency_mhz;
        G_gppb->operating_points_set[VPD_PT_SET_SYSP][p].pstate = G_gppb->operating_points[p].pstate;
    }

    //BIASED POINTS
    for (p = 0; p < VPD_PV_POINTS; p++)
    {
        G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].vdd_mv = (G_gppb->operating_points[p].vdd_mv *
                (200 + G_gppb->ext_biases[p].vdd_ext_hp)) / 200;
        G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].vcs_mv = (G_gppb->operating_points[p].vcs_mv *
                (200 + G_gppb->ext_biases[p].vcs_ext_hp)) / 200;
        G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].idd_100ma = G_gppb->operating_points[p].idd_100ma;
        G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].ics_100ma = G_gppb->operating_points[p].ics_100ma;
        G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].frequency_mhz = (G_gppb->operating_points[p].frequency_mhz *
                (200 + G_gppb->ext_biases[p].frequency_hp)) / 200;
    }

    for (p = 0; p < VPD_PV_POINTS; p++)
    {
        G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].pstate =
            ((G_gppb->operating_points_set[VPD_PT_SET_BIASED][ULTRA].frequency_mhz -
              G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].frequency_mhz) *
             1000) /
            G_gppb->frequency_step_khz;
    }

    //BIASED POINTS and SYSTEM PARMS APPLIED POINTS
    //We first calculate everything in uV, and then divide by 1000. Doing this ensures
    //that integer division doesn't result in 0 for intermediate terms
    for (p = 0; p < VPD_PV_POINTS; p++)
    {
        G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][p].vdd_mv =
            ((G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].vdd_mv * 1000) +
             ((G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].idd_100ma * 100) *
              (G_gppb->vdd_sysparm.loadline_uohm + G_gppb->vdd_sysparm.distloss_uohm)) +
             (G_gppb->vdd_sysparm.distoffset_uv)) / 1000 ;
        G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][p].vcs_mv =
            ((G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].vcs_mv * 1000) +
             ((G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].ics_100ma * 100) *
              (G_gppb->vcs_sysparm.loadline_uohm + G_gppb->vcs_sysparm.distloss_uohm)) +
             (G_gppb->vcs_sysparm.distoffset_uv)) / 1000 ;
        G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][p].idd_100ma =
            G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].idd_100ma;
        G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][p].ics_100ma =
            G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].ics_100ma;
        G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][p].frequency_mhz =
            G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].frequency_mhz;
        G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][p].pstate =
            G_gppb->operating_points_set[VPD_PT_SET_BIASED][p].pstate;
    }
}

//
//p9_pgpe_compute_PsV_slopes
//
//Computes slope of voltage-PState curve and PState-voltage
//
//PState(Frequency) on y-axis, Voltage is on x-axis for VF curve
//Interpolation formula: (y-y0)/(x-x0) = (y1-y0)/(x1-x0)
//m   = (x1-x0)/(y1-y0), then use this to calculate voltage, x = (y-y0)*m + x0
//1/m = (y1-y0)/(x1-x0) here, then use this to calculate pstate(frequency), y = (x-x0)*m + y0
//Region 0 is b/w POWERSAVE and NOMINAL
//Region 1 is b/w NOMINAL and TURBO
//Region 2 is between TURBO and ULTRA_TURBO
//
//Inflection Point 3 is ULTRA_TURBO
//Inflection Point 2 is TURBO
//Inflection Point 1 is NOMINAL
//Inflection Point 0 is POWERSAVE
//
void p9_pgpe_gppb_compute_PsV_slopes()
{
    uint32_t tmp;
    uint32_t eVidFP[VPD_PV_POINTS];

    //
    //RAW VPD PTS SLOPES
    //
    //convert to a fixed-point number
    eVidFP[POWERSAVE] = G_gppb->operating_points_set[VPD_PT_SET_RAW][POWERSAVE].vdd_mv << EVID_SLOPE_FP_SHIFT;
    eVidFP[NOMINAL] = G_gppb->operating_points_set[VPD_PT_SET_RAW][NOMINAL].vdd_mv << EVID_SLOPE_FP_SHIFT;
    eVidFP[TURBO] = G_gppb->operating_points_set[VPD_PT_SET_RAW][TURBO].vdd_mv << EVID_SLOPE_FP_SHIFT;
    eVidFP[ULTRA] = G_gppb->operating_points_set[VPD_PT_SET_RAW][ULTRA].vdd_mv << EVID_SLOPE_FP_SHIFT;

    //Calculate slopes
    tmp = (uint32_t)(eVidFP[NOMINAL] - eVidFP[POWERSAVE]) /
          (uint32_t)(-G_gppb->operating_points_set[VPD_PT_SET_RAW][NOMINAL].pstate +
                     G_gppb->operating_points_set[VPD_PT_SET_RAW][POWERSAVE].pstate);
    G_gppb->PsVSlopes[VPD_SLOPES_RAW][REGION_POWERSAVE_NOMINAL] = tmp;

    tmp = (uint32_t)(eVidFP[TURBO] - eVidFP[NOMINAL]) /
          (uint32_t)(-G_gppb->operating_points_set[VPD_PT_SET_RAW][TURBO].pstate +
                     G_gppb->operating_points_set[VPD_PT_SET_RAW][NOMINAL].pstate);
    G_gppb->PsVSlopes[VPD_SLOPES_RAW][REGION_NOMINAL_TURBO] = tmp;

    tmp = (uint32_t)(eVidFP[ULTRA] - eVidFP[TURBO]) /
          (uint32_t)(-G_gppb->operating_points_set[VPD_PT_SET_RAW][ULTRA].pstate +
                     G_gppb->operating_points_set[VPD_PT_SET_RAW][TURBO].pstate);
    G_gppb->PsVSlopes[VPD_SLOPES_RAW][REGION_TURBO_ULTRA] = tmp;

    //Calculate inverted slopes
    tmp =  (uint32_t)((-G_gppb->operating_points_set[VPD_PT_SET_RAW][NOMINAL].pstate +
                       G_gppb->operating_points_set[VPD_PT_SET_RAW][POWERSAVE].pstate) <<
                      EVID_SLOPE_FP_SHIFT)
           / (uint32_t) (G_gppb->operating_points_set[VPD_PT_SET_RAW][NOMINAL].vdd_mv -
                         G_gppb->operating_points_set[VPD_PT_SET_RAW][POWERSAVE].vdd_mv);
    G_gppb->VPsSlopes[VPD_SLOPES_RAW][REGION_POWERSAVE_NOMINAL] = tmp;

    tmp =  (uint32_t)((-G_gppb->operating_points_set[VPD_PT_SET_RAW][TURBO].pstate +
                       G_gppb->operating_points_set[VPD_PT_SET_RAW][NOMINAL].pstate) <<
                      EVID_SLOPE_FP_SHIFT)
           / (uint32_t) (G_gppb->operating_points_set[VPD_PT_SET_RAW][TURBO].vdd_mv -
                         G_gppb->operating_points_set[VPD_PT_SET_RAW][NOMINAL].vdd_mv);
    G_gppb->VPsSlopes[VPD_SLOPES_RAW][REGION_NOMINAL_TURBO] = tmp;

    tmp =  (uint32_t)((-G_gppb->operating_points_set[VPD_PT_SET_RAW][ULTRA].pstate +
                       G_gppb->operating_points_set[VPD_PT_SET_RAW][TURBO].pstate) <<
                      EVID_SLOPE_FP_SHIFT)
           / (uint32_t) (G_gppb->operating_points_set[VPD_PT_SET_RAW][ULTRA].vdd_mv -
                         G_gppb->operating_points_set[VPD_PT_SET_RAW][TURBO].vdd_mv);
    G_gppb->VPsSlopes[VPD_SLOPES_RAW][REGION_TURBO_ULTRA] = tmp;

    //
    //BIASED VPD PTS SLOPES
    //
    //convert to fixed-point number
    eVidFP[POWERSAVE] = G_gppb->operating_points_set[VPD_PT_SET_BIASED][POWERSAVE].vdd_mv << EVID_SLOPE_FP_SHIFT;
    eVidFP[NOMINAL] = G_gppb->operating_points_set[VPD_PT_SET_BIASED][NOMINAL].vdd_mv << EVID_SLOPE_FP_SHIFT;
    eVidFP[TURBO] = G_gppb->operating_points_set[VPD_PT_SET_BIASED][TURBO].vdd_mv << EVID_SLOPE_FP_SHIFT;
    eVidFP[ULTRA] = G_gppb->operating_points_set[VPD_PT_SET_BIASED][ULTRA].vdd_mv << EVID_SLOPE_FP_SHIFT;

    //Calculate slopes
    tmp = (uint32_t)(eVidFP[NOMINAL] - eVidFP[POWERSAVE]) /
          (uint32_t)(-G_gppb->operating_points_set[VPD_PT_SET_BIASED][NOMINAL].pstate +
                     G_gppb->operating_points_set[VPD_PT_SET_BIASED][POWERSAVE].pstate);
    G_gppb->PsVSlopes[VPD_SLOPES_BIASED][REGION_POWERSAVE_NOMINAL] = tmp;

    tmp = (uint32_t)(eVidFP[TURBO] - eVidFP[NOMINAL]) /
          (uint32_t)(-G_gppb->operating_points_set[VPD_PT_SET_BIASED][TURBO].pstate +
                     G_gppb->operating_points_set[VPD_PT_SET_BIASED][NOMINAL].pstate);
    G_gppb->PsVSlopes[VPD_SLOPES_BIASED][REGION_NOMINAL_TURBO] = tmp;

    tmp = (uint32_t)(eVidFP[ULTRA] - eVidFP[TURBO]) /
          (uint32_t)(-G_gppb->operating_points_set[VPD_PT_SET_BIASED][ULTRA].pstate +
                     G_gppb->operating_points_set[VPD_PT_SET_BIASED][TURBO].pstate);
    G_gppb->PsVSlopes[VPD_SLOPES_BIASED][REGION_TURBO_ULTRA] = tmp;

    //Calculate inverted slopes
    tmp =  (uint32_t)((-G_gppb->operating_points_set[VPD_PT_SET_BIASED][NOMINAL].pstate +
                       G_gppb->operating_points_set[VPD_PT_SET_BIASED][POWERSAVE].pstate) <<
                      EVID_SLOPE_FP_SHIFT)
           / (uint32_t) (G_gppb->operating_points_set[VPD_PT_SET_BIASED][NOMINAL].vdd_mv -
                         G_gppb->operating_points_set[VPD_PT_SET_BIASED][POWERSAVE].vdd_mv);
    G_gppb->VPsSlopes[VPD_SLOPES_BIASED][REGION_POWERSAVE_NOMINAL] = tmp;

    tmp =  (uint32_t)((-G_gppb->operating_points_set[VPD_PT_SET_BIASED][TURBO].pstate +
                       G_gppb->operating_points_set[VPD_PT_SET_BIASED][NOMINAL].pstate) <<
                      EVID_SLOPE_FP_SHIFT)
           / (uint32_t) (G_gppb->operating_points_set[VPD_PT_SET_BIASED][TURBO].vdd_mv -
                         G_gppb->operating_points_set[VPD_PT_SET_BIASED][NOMINAL].vdd_mv);
    G_gppb->VPsSlopes[VPD_SLOPES_BIASED][REGION_NOMINAL_TURBO] = tmp;

    tmp =  (uint32_t)((-G_gppb->operating_points_set[VPD_PT_SET_BIASED][ULTRA].pstate +
                       G_gppb->operating_points_set[VPD_PT_SET_BIASED][TURBO].pstate) <<
                      EVID_SLOPE_FP_SHIFT)
           / (uint32_t) (G_gppb->operating_points_set[VPD_PT_SET_BIASED][ULTRA].vdd_mv -
                         G_gppb->operating_points_set[VPD_PT_SET_BIASED][TURBO].vdd_mv);
    G_gppb->VPsSlopes[VPD_SLOPES_BIASED][REGION_TURBO_ULTRA] = tmp;
}

//
//p9_pgpe_gppb_intp_vdd_from_ps
//
//Interpolate voltage from pstate
//
uint32_t p9_pgpe_gppb_intp_vdd_from_ps(Pstate ps, uint8_t vpd_pt_set, uint8_t vpd_slope_set)
{
    uint32_t vdd;
    uint8_t r  = p9_pgpe_gppb_get_ps_region(ps, vpd_pt_set);
    vdd = (((G_gppb->PsVSlopes[vpd_slope_set][r]) *
            (-ps + G_gppb->operating_points_set[vpd_pt_set][r].pstate)) >> EVID_SLOPE_FP_SHIFT)
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
    if (ps < G_gppb->operating_points_set[vpd_pt_set][TURBO].pstate)
    {
        return REGION_TURBO_ULTRA;
    }
    else if (ps > G_gppb->operating_points_set[vpd_pt_set][NOMINAL].pstate)
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
uint8_t p9_pgpe_gppb_intp_ps_from_ext_vdd(uint16_t ext_vdd)
{
    Pstate ps;
    uint8_t  r = p9_pgpe_gppb_get_ext_vdd_region(ext_vdd);
    ps = -(((G_gppb->VPsSlopes[VPD_SLOPES_BIASED][r]) *
            (ext_vdd - G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][r].vdd_mv)) >> EVID_SLOPE_FP_SHIFT)
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
    if (ext_vdd >  G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][TURBO].vdd_mv)
    {
        return REGION_TURBO_ULTRA;
    }
    else if (ext_vdd < G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][NOMINAL].vdd_mv)
    {
        return REGION_POWERSAVE_NOMINAL;
    }
    else
    {
        return REGION_NOMINAL_TURBO;
    }
}
