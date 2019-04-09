/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_pstate.c $          */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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



//
//Local function prototypes
//
uint32_t pgpe_pstate_is_at_target();
uint32_t pgpe_pstate_get_vdd_region(uint32_t vdd);
uint32_t pgpe_pstate_get_vcs_region(uint32_t vcs);
uint32_t pgpe_pstate_get_idd_region(uint32_t idd);
uint32_t pgpe_pstate_get_ps_region(uint32_t ps, uint32_t vpt_pt_set);
uint32_t pgpe_pstate_get_idd_ac_region(uint32_t idd);
uint32_t pgpe_pstate_get_idd_dc_region(uint32_t idd);
uint32_t pgpe_pstate_get_ics_ac_region(uint32_t ics);
uint32_t pgpe_pstate_get_ics_dc_region(uint32_t ics);

pgpe_pstate_t G_pgpe_pstate;


void pgpe_pstate_init()
{
    PK_TRACE("PS: Init");
    uint32_t i = 0;

    G_pgpe_pstate.pstate_status = PSTATE_STATUS_DISABLED;
    G_pgpe_pstate.wof_status = WOF_STATUS_DISABLED;
    G_pgpe_pstate.wov_status = WOV_STATUS_DISABLED;
    G_pgpe_pstate.pmcr_owner = 0xFFFFFFFF;

    for (i = 0; i < MAX_CORES; i++)
    {
        G_pgpe_pstate.ps_request[i] = 0xFF;
    }

    G_pgpe_pstate.pstate_computed   = 0xFF;
    G_pgpe_pstate.pstate_target     = 0xFF;
    G_pgpe_pstate.pstate_next       = 0xFF;
    G_pgpe_pstate.pstate_curr       = 0xFF;
    G_pgpe_pstate.clip_min          = 0xFF;
    G_pgpe_pstate.clip_max          = 0xFF;
    G_pgpe_pstate.wof_clip          = 0xFF;
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

    G_pgpe_pstate.update_pgpe_beacon = 1;


}

void pgpe_pstate_actuate_step()
{
    //compute vdd_target corresponding to pstate_target
    G_pgpe_pstate.vdd_next = pgpe_pstate_intp_vdd_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED);
    uint32_t vdd_delta = 0;

    //Lowering frequency
    if (G_pgpe_pstate.pstate_next > G_pgpe_pstate.pstate_curr)
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

    //interpolate new current(AC and DC)

    uint32_t idd_ac = pgpe_pstate_intp_idd_ac_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED);
    uint32_t idd_dc = pgpe_pstate_intp_idd_dc_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED);
    uint32_t ics_ac = pgpe_pstate_intp_ics_ac_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED);
    uint32_t ics_dc = pgpe_pstate_intp_ics_dc_from_ps(G_pgpe_pstate.pstate_next, VPD_PT_SET_BIASED);

    //compute load line drop
    //\todo these won't compile as compiler can't find the multiply and divide routines.
    G_pgpe_pstate.vdd_next_uplift = (((idd_ac + idd_dc) * (pgpe_gppb_get(vdd_sysparm.loadline_uohm) + pgpe_gppb_get(
                                          vdd_sysparm.distloss_uohm))) / 1000
                                     + pgpe_gppb_get(vdd_sysparm.distoffset_uv)) / 1000;
    G_pgpe_pstate.vcs_next_uplift = (((ics_ac + ics_dc) * (pgpe_gppb_get(vcs_sysparm.loadline_uohm) + pgpe_gppb_get(
                                          vcs_sysparm.distloss_uohm))) / 1000
                                     + pgpe_gppb_get(vcs_sysparm.distoffset_uv)) / 1000;

    G_pgpe_pstate.vdd_next_ext = G_pgpe_pstate.vdd_next + G_pgpe_pstate.vdd_next_uplift;
    G_pgpe_pstate.vcs_next_ext = G_pgpe_pstate.vcs_next + G_pgpe_pstate.vcs_next_uplift;

    //if lowering frequency
    if (G_pgpe_pstate.pstate_next > G_pgpe_pstate.pstate_curr)
    {
        //resclk \\todo
        //multicast resclk controller
        //wait for acks from all QME

        //write DPLL
        pgpe_dpll_write(G_pgpe_pstate.pstate_next);

        //DDS \todo

        //Multicast all the PMSR

        //lower VDD, then lower VCS
        pgpe_avsbus_voltage_write(pgpe_gppb_get(avs_bus_topology.vdd_avsbus_num),
                                  pgpe_gppb_get(avs_bus_topology.vdd_avsbus_rail),
                                  G_pgpe_pstate.vdd_next_ext);
        pgpe_avsbus_voltage_write(pgpe_gppb_get(avs_bus_topology.vcs_avsbus_num),
                                  pgpe_gppb_get(avs_bus_topology.vcs_avsbus_rail),
                                  G_pgpe_pstate.vcs_next_ext);
    }
    else
    {
        //else raising frequency
        //DDS

        //raise VCS, then raise VDD
        pgpe_avsbus_voltage_write(pgpe_gppb_get(avs_bus_topology.vcs_avsbus_num),
                                  pgpe_gppb_get(avs_bus_topology.vcs_avsbus_rail),
                                  G_pgpe_pstate.vcs_next_ext);
        pgpe_avsbus_voltage_write(pgpe_gppb_get(avs_bus_topology.vdd_avsbus_num),
                                  pgpe_gppb_get(avs_bus_topology.vdd_avsbus_rail),
                                  G_pgpe_pstate.vdd_next_ext);

        //DDS \\todo determine the difference above and here for DDS

        //Write DPLL
        pgpe_dpll_write(G_pgpe_pstate.pstate_next);

        //resclk
        //Multicast the resclk controller
        //wait for acks from all QME

        //Multicast all the PMSR
    }
}

void pgpe_pstate_compute()
{
    uint32_t c;
    uint32_t min = 0xFF;

    for (c = 0; c < MAX_CORES; c++)
    {
        if ((G_pgpe_pstate.ps_request[c]) < min)
        {
            min = G_pgpe_pstate.ps_request[c];
        }
    }

    G_pgpe_pstate.pstate_computed = min;

}

void pgpe_pstate_apply_clips()
{
    //\todo use WOF Clip, sibling pstate(DCM), and safe pstate
    if (G_pgpe_pstate.pstate_computed < G_pgpe_pstate.clip_min)
    {
        G_pgpe_pstate.pstate_target = G_pgpe_pstate.clip_min;
    }

    if (G_pgpe_pstate.pstate_computed > G_pgpe_pstate.clip_max)
    {
        G_pgpe_pstate.pstate_target = G_pgpe_pstate.clip_max;
    }
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

    return vcs;
}

uint32_t pgpe_pstate_intp_vddup_from_ps(uint32_t ps, uint32_t vpd_pt_set)
{
    return 0;
}

uint32_t pgpe_pstate_intp_vcsup_from_ps(uint32_t ps, uint32_t vpd_pt_set)
{
    return 0;
}

uint32_t pgpe_pstate_intp_idd_ac_from_ps(uint32_t ps, uint32_t vpd_pt_set)
{
    return 0;
}
uint32_t pgpe_pstate_intp_idd_dc_from_ps(uint32_t ps, uint32_t vpd_pt_set)
{
    return 0;
}
uint32_t pgpe_pstate_intp_ics_ac_from_ps(uint32_t ps, uint32_t vpd_pt_set)
{
    return 0;
}
uint32_t pgpe_pstate_intp_ics_dc_from_ps(uint32_t ps, uint32_t vpd_pt_set)
{
    return 0;
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

uint32_t pgpe_pstate_get_ps_region(uint32_t ps, uint32_t vpt_pt_set)
{
    if (ps >= pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_WOFB))
    {
        if (ps >= pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF4))
        {
            return REGION_CF4_UT;
        }
        else
        {
            if (ps >= pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF3))
            {
                return REGION_CF3_CF4;
            }
            else
            {
                return REGION_WOF_BASE_CF3;
            }
        }
    }
    else
    {
        if (ps <= pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF1))
        {
            return REGION_POWERSAVE_CF1;
        }
        else
        {
            if (ps <= pgpe_gppb_get_ops_ps(VPD_PT_SET_BIASED, VPD_PV_CF2))
            {
                return REGION_CF1_CF2;
            }
            else
            {
                return REGION_CF2_WOF_BASE;
            }
        }
    }
}

uint32_t pgpe_pstate_get_vdd_region(uint32_t vdd)
{
    if (vdd >= pgpe_gppb_get_ops_vdd(VPD_PT_SET_BIASED, VPD_PV_WOFB))
    {
        if (vdd >= pgpe_gppb_get_ops_vdd(VPD_PT_SET_BIASED, VPD_PV_CF4))
        {
            return REGION_CF4_UT;
        }
        else
        {
            if (vdd >= pgpe_gppb_get_ops_vdd(VPD_PT_SET_BIASED, VPD_PV_CF3))
            {
                return REGION_CF3_CF4;
            }
            else
            {
                return REGION_WOF_BASE_CF3;
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
                return REGION_CF2_WOF_BASE;
            }
        }
    }
}

uint32_t pgpe_pstate_get_vcs_region(uint32_t vcs)
{
    if (vcs >= pgpe_gppb_get_ops_vcs(VPD_PT_SET_BIASED, VPD_PV_WOFB))
    {
        if (vcs >= pgpe_gppb_get_ops_vcs(VPD_PT_SET_BIASED, VPD_PV_CF4))
        {
            return REGION_CF4_UT;
        }
        else
        {
            if (vcs >= pgpe_gppb_get_ops_vcs(VPD_PT_SET_BIASED, VPD_PV_CF3))
            {
                return REGION_CF3_CF4;
            }
            else
            {
                return REGION_WOF_BASE_CF3;
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
                return REGION_CF2_WOF_BASE;
            }
        }
    }
}

uint32_t pgpe_pstate_get_idd_ac_region(uint32_t idd)
{
    /*
    if (idd >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_WOFB].idd_tdp_ac_10ma)
    {
        if (idd  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF4].idd_tdp_ac_10ma) {
            return REGION_CF4_UT;
        } else {
            if (idd >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF3].idd_tdp_ac_10ma) {
                return REGION_CF3_CF4;
            } else {
                return REGION_WOF_BASE_CF3;
            }
        }
    }
    else {
        if (idd <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF1].idd_tdp_ac_10ma) {
            return REGION_POWERSAVE_CF1;
        } else {
            if (idd <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF2].idd_tdp_ac_10ma) {
                return REGION_CF1_CF2;
            } else {
                return REGION_CF2_WOF_BASE;
            }
        }
    }*/
    return 0;
}

uint32_t pgpe_pstate_get_idd_dc_region(uint32_t idd)
{
    /*
    if (idd >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_WOFB].idd_tdp_dc_10ma)
    {
        if (idd  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF4].idd_tdp_dc_10ma) {
            return REGION_CF4_UT;
        } else {
            if (idd >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF3].idd_tdp_dc_10ma) {
                return REGION_CF3_CF4;
            } else {
                return REGION_WOF_BASE_CF3;
            }
        }
    }
    else {
        if (idd <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF1].idd_tdp_dc_10ma) {
            return REGION_POWERSAVE_CF1;
        } else {
            if (idd <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF2].idd_tdp_dc_10ma) {
                return REGION_CF1_CF2;
            } else {
                return REGION_CF2_WOF_BASE;
            }
        }
    }*/
    return 0;
}

uint32_t pgpe_pstate_get_ics_dc_region(uint32_t ics)
{
    /*
    if (ics >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_WOFB].ics_tdp_dc_10ma)
    {
        if (ics  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF4].ics_tdp_dc_10ma) {
            return REGION_CF4_UT;
        } else {
            if (ics >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF3].ics_tdp_dc_10ma) {
                return REGION_CF3_CF4;
            } else {
                return REGION_WOF_BASE_CF3;
            }
        }
    }
    else {
        if (ics <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF1].ics_tdp_dc_10ma) {
            return REGION_POWERSAVE_CF1;
        } else {
            if (ics <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF2].ics_tdp_dc_10ma) {
                return REGION_CF1_CF2;
            } else {
                return REGION_CF2_WOF_BASE;
            }
        }
    }*/
    return 0;
}

uint32_t pgpe_pstate_get_ics_ac_region(uint32_t ics)
{
    /*
    if (ics >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_WOFB].ics_tdp_ac_10ma)
    {
        if (ics  >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF4].ics_tdp_ac_10ma) {
            return REGION_CF4_UT;
        } else {
            if (ics >=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF3].ics_tdp_ac_10ma) {
                return REGION_CF3_CF4;
            } else {
                return REGION_WOF_BASE_CF3;
            }
        }
    }
    else {
        if (ics <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF1].ics_tdp_ac_10ma) {
            return REGION_POWERSAVE_CF1;
        } else {
            if (ics <=  G_gppb->operating_points_set[VPD_PT_SET_BIASED][VPD_PV_CF2].ics_tdp_ac_10ma) {
                return REGION_CF1_CF2;
            } else {
                return REGION_CF2_WOF_BASE;
            }
        }
    }*/

    return 0;
}

uint32_t pgpe_pstate_freq_from_ps(uint32_t ps)
{
    return  (G_gppb->reference_frequency_khz - ((ps) * G_gppb->frequency_step_khz)) / 1000;
}

uint32_t pgpe_pstate_is_at_target()
{
    return (G_pgpe_pstate.pstate_curr == G_pgpe_pstate.pstate_target);
}
