/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_gppb.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2019                                                    */
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
#include "p9_hcode_image_defines.H"
#include "ppehw_common.h"

typedef enum
{
    VDM_OVERVOLT_IDX = 0,
    VDM_SMALL_IDX    = 1,
    VDM_LARGE_IDX    = 2,
    VDM_XTREME_IDX   = 3
} VDM_THRESHOLD_IDX;

typedef enum
{
    // VDM_OVERVOLT_ADJUST
    // 4/8 rounding (8mV resolution so +/- 4 mV error)
    // yields 3/7 aggressive and 4/7 conservative to slightly favor not
    // increasing to Fmax as often
    VDM_OVERVOLT_ADJUST = (uint32_t)((1 << THRESH_SLOPE_FP_SHIFT) * ((float)4 / 8)),
    // VDM_SMALL_ADJUST
    // 5/8 rounding (8mV resolution so +5/-3 mV error)
    // yields 2/7 conservative and 5/7 aggressive to favor protecting against
    // performance loss
    VDM_SMALL_ADJUST    = (uint32_t)((1 << THRESH_SLOPE_FP_SHIFT) * ((float)5 / 8)),
    // VDM_LARGE_ADJUST and VDM_XTREME_ADJUST
    // 2/8 rounding (8mV resolution so +3/-5 mV error)
    // yields 2/7 aggressive and 5/7 conservative to favor protecting droop
    // guardband
    VDM_LARGE_ADJUST    = (uint32_t)((1 << THRESH_SLOPE_FP_SHIFT) * ((float)2 / 8)),
    VDM_XTREME_ADJUST   = (uint32_t)((1 << THRESH_SLOPE_FP_SHIFT) * ((float)2 / 8)),
    //VDM_VID_COMP_ADJUST
    // 2/4 rounding (4mV resolution so +/- 2mV error)
    // yields 1/3 (1mV) aggressive and 2/3 (1 or 2mV) conservative answer
    VDM_VID_COMP_ADJUST = (uint32_t)((1 << VID_SLOPE_FP_SHIFT_12) * ((float)2 / 4)),
    //VDM_JUMP_VALUE_ADJUST
    VDM_JUMP_VALUE_ADJUST = (uint32_t)((1 << THRESH_SLOPE_FP_SHIFT) * ((float)1 / 2))
} VDM_ROUNDING_ADJUST;



const uint8_t G_vdm_threshold_table[13] =
{
    0x00, 0x01, 0x03, 0x02, 0x06, 0x07, 0x05, 0x04,
    0x0C, 0x0D, 0x0F, 0x0E, 0x0A
};

//Globals and externs
GlobalPstateParmBlock* G_gppb;//Global pointer to GlobalPstateParmBlock
uint32_t G_ext_vrm_inc_rate_mult_usperv;
uint32_t G_ext_vrm_dec_rate_mult_usperv;
extern PgpeHeader_t* G_pgpe_header_data;

//
//Private function prototypes
//
uint8_t p9_pgpe_gppb_get_ext_vdd_region(uint32_t evid);
uint8_t p9_pgpe_gppb_get_ps_region(Pstate ps, uint8_t vpt_pt_set);

//
//  p9_pgpe_gppb_init
//
//  This is called during PGPE boot to initialize Global Pstate Parameter block pointer
//  and external vrm increment and decrement rates
//
void p9_pgpe_gppb_init()
{
    void* gppb_sram_offset = (void*)G_pgpe_header_data->g_pgpe_gppb_sram_addr;//GPPB Sram Offset
    G_gppb = (GlobalPstateParmBlock*)gppb_sram_offset;

    //PK_TRACE_INF("INIT: DPLL0Value=0x%x", G_gppb->dpll_pstate0_value);
    //External VRM increasing rate in us/v
    G_ext_vrm_inc_rate_mult_usperv = (1000 * 1000) / G_gppb->ext_vrm_transition_rate_inc_uv_per_us;

    //External VRM decreasing rate in us/v
    G_ext_vrm_dec_rate_mult_usperv = (1000 * 1000) / G_gppb->ext_vrm_transition_rate_dec_uv_per_us;
}

//
//  p9_pgpe_gppb_intp_vdd_from_ps
//
//  Interpolate voltage from pstate
//
//  ps - Pstate from which to interpolate voltage
//
//  vpd_st_set - Type of VPD point set to use
//      VPD_PT_SET_RAW(VPD point with no biases or system parameters)
//      VPD_PT_SET_BIASED(VPD point with biases applied)
//      VPD_PT_SET_SYSP(VPD point with system parameters applied)
//      VPD_PT_SET_BIASED_SYSP(VPD point with biases and system parameters applied)
uint32_t p9_pgpe_gppb_intp_vdd_from_ps(Pstate ps, uint8_t vpd_pt_set)
{
    uint32_t vdd;
    uint8_t r  = p9_pgpe_gppb_get_ps_region(ps, vpd_pt_set);

    //Round-up by adding 1/2
    vdd = (((G_gppb->PStateVSlopes[vpd_pt_set][r]) *
            (-ps + G_gppb->operating_points_set[vpd_pt_set][r].pstate)) >> (VID_SLOPE_FP_SHIFT_12 - 1)) +
          (G_gppb->operating_points_set[vpd_pt_set][r].vdd_mv << 1) + 1;

    vdd = vdd >> 1; //Shift back

    return vdd;
}

//
//p9_pgpe_gppb_get_ps_region
//
//  Determines VPD region for a pstate value
//
//  ps - Pstate for which region is to be determined
//
//  vpd_st_set - Type of VPD point set to use
//      VPD_PT_SET_RAW(VPD point with no biases or system parameters)
//      VPD_PT_SET_BIASED(VPD point with biases applied)
//      VPD_PT_SET_SYSP(VPD point with system parameters applied)
//      VPD_PT_SET_BIASED_SYSP(VPD point with biases and system parameters applied)
//
// retval
//      One of three regions(POWERSAVE-NOMINAL, NOMINAL-TURBO, or TURBO-ULTRA_TURBO)
//      the pstate falls under.
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
//  p9_pgpe_gppb_intp_ps_from_ext_vdd
//
//  Interpolate pstate from external vdd
//
//  Note: This function is hardcoded to use biased with system parameters applied
//  VPD points because currently interpolating pstate from vdd is only needed
//  for biased with system parameter applied VPD point
//
//  ext_vdd - External Voltage for which pstate is to be interpolated
//
//  retval - Pstate interpolated corresponding to external voltage
uint8_t p9_pgpe_gppb_intp_ps_from_ext_vdd(uint16_t ext_vdd)
{
    Pstate ps;
    uint8_t  r = p9_pgpe_gppb_get_ext_vdd_region(ext_vdd);

    //Do the math using shifted by 1.
    ps = -(((G_gppb->VPStateSlopes[VPD_PT_SET_BIASED_SYSP][r]) *
            (ext_vdd - G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][r].vdd_mv)) >> (VID_SLOPE_FP_SHIFT_12 - 1)) +
         (G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][r].pstate << 1)  ;
    ps = ps >> 1;//Shift it back

    return ps;
}

//
//  p9_pgpe_gppb_get_ext_vdd_region
//
//  Determines VPD region for a external voltage
//
//  Note: This function is hardcoded to use biased with system parameters applied
//  VPD points because currently interpolating pstate from vdd is only needed
//  for biased with system parameter applied VPD point
//
//  ext_vdd - External voltage for which region is to be determined
//
//  vpd_st_set - Type of VPD point set to use
//      VPD_PT_SET_RAW(VPD point with no biases or system parameters)
//      VPD_PT_SET_BIASED(VPD point with biases applied)
//      VPD_PT_SET_SYSP(VPD point with system parameters applied)
//      VPD_PT_SET_BIASED_SYSP(VPD point with biases and system parameters applied)
//
// retval
//      One of three regions(POWERSAVE-NOMINAL, NOMINAL-TURBO, or TURBO-ULTRA_TURBO)
//      the pstate falls under.
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

//  Interpolate vdm vid compare from pstate.
//
//  Note: This function is hardcoded to use biased with system parameters applied
//  VPD points because currently interpolating pstate from vdd is only needed
//  for biased with system parameter applied VPD point
//
//  ps - Pstate from which to interpolate voltage
//
//  retval - VDM VID Compare value
uint32_t p9_pgpe_gppb_vdm_vid_cmp_from_ps(Pstate ps)
{
    uint32_t vdd;
    uint8_t r  = p9_pgpe_gppb_get_ps_region(ps, VPD_PT_SET_BIASED_SYSP);

    //Round-up by adding 1/2
    vdd = ((((uint32_t)G_gppb->PsVIDCompSlopes[r] *
             ((uint32_t)G_gppb->operating_points[r].pstate - ps)
             + VDM_VID_COMP_ADJUST) >> VID_SLOPE_FP_SHIFT_12)
           + (uint32_t)G_gppb->vid_point_set[r]);

    return vdd;
}


//  VDM Thresholds from pstate.
//
//  ps - Pstate from which to interpolate voltage
//
//  retval - VDM Thresholds
uint16_t p9_pgpe_gppb_vdm_threshold_from_ps(uint32_t pstate)
{
    static uint32_t vdm_rounding_adjust[NUM_THRESHOLD_POINTS] =
    {
        VDM_OVERVOLT_ADJUST,
        VDM_SMALL_ADJUST,
        VDM_LARGE_ADJUST,
        VDM_XTREME_ADJUST
    };

    uint32_t i = 0;
    uint32_t indices[4];
    uint32_t region = p9_pgpe_gppb_get_ps_region(pstate, VPD_PT_SET_BIASED_SYSP);
    int32_t psdiff = (uint32_t)G_gppb->operating_points[region].pstate - pstate;

    for(i = 0; i < NUM_THRESHOLD_POINTS; ++i)
    {
        indices[i] = (uint32_t)((int32_t)G_gppb->threshold_set[region][i]
                                // delta = slope times difference in pstate (interpolate)
                                + ((((int32_t)G_gppb->PsVDMThreshSlopes[region][i] * psdiff)
                                    // Apply the rounding adjust
                                    + (int32_t)vdm_rounding_adjust[i]) >> THRESH_SLOPE_FP_SHIFT));

    }

    // Check the interpolation result; since each threshold has a distinct round
    // adjust, the calculated index can be invalid relative to another threshold
    // index. Overvolt does not need to be checked and Small Droop will always
    // be either 0 or greater than 0 by definition.
    // Ensure that small <= large <= xtreme; where any can be == 0.
    indices[VDM_LARGE_IDX] = ((indices[VDM_LARGE_IDX] < indices[VDM_SMALL_IDX])
                              && (indices[VDM_LARGE_IDX] != 0))
                             ? indices[VDM_SMALL_IDX] : indices[VDM_LARGE_IDX];
    indices[VDM_XTREME_IDX] = ((indices[VDM_XTREME_IDX] < indices[VDM_LARGE_IDX])
                               && (indices[VDM_XTREME_IDX] != 0))
                              ? indices[VDM_LARGE_IDX] : indices[VDM_XTREME_IDX];
    indices[VDM_XTREME_IDX] = ((indices[VDM_XTREME_IDX] < indices[VDM_SMALL_IDX])
                               && (indices[VDM_LARGE_IDX]  == 0)
                               && (indices[VDM_XTREME_IDX] != 0))
                              ? indices[VDM_SMALL_IDX] : indices[VDM_XTREME_IDX];

    PK_TRACE_DBG("%u %u %u %u", indices[0], indices[1], indices[2], indices[3]);
    uint16_t ret = ((G_vdm_threshold_table[indices[0]] << 12)
                    | (G_vdm_threshold_table[indices[1]] << 8)
                    | (G_vdm_threshold_table[indices[2]] << 4)
                    | (G_vdm_threshold_table[indices[3]]));

    PK_TRACE_DBG("ps=%d, %x", pstate, ret);
    return ret;

}

uint32_t p9_pgpe_gppb_freq_from_ps(Pstate ps)
{
    return  (G_gppb->reference_frequency_khz - ((ps) * G_gppb->frequency_step_khz)) / 1000;
}
