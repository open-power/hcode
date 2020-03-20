/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_fake_boot.c $       */
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
#include "pgpe_fake_boot.h"
#include "pstates_pgpe.H"
#include "pgpe_header.h"
extern PgpeHeader_t* _PGPE_IMG_HEADER __attribute__ ((section (".pgpe_image_header")));

#define PGPE_FAKE_BOOT_CORE_ON_RATIO   0.8
#define PGPE_FAKE_BOOT_L3_ON_RATIO     0.1
#define PGPE_FAKE_BOOT_MMA_ON_RATIO    0.1

#define GPPB_SRAM_ADDR              0xfff2a000
void pgpe_fake_boot_gppb()
{
    //Fill in GPPB values

    PK_TRACE("PGPE Fake Boot Gppb Start");
    GlobalPstateParmBlock_t* gppb;
    uint32_t i, j = 0;
    void* gppb_sram_offset = (void*)GPPB_SRAM_ADDR;
    gppb = (GlobalPstateParmBlock_t*)gppb_sram_offset;
    PK_TRACE("FK_BOOT:G_gppb=0x%x", (uint32_t)gppb);

    gppb->magic.value  = 0x46414b4500000000ULL;
    gppb->reference_frequency_khz = 3400000;
    gppb->frequency_step_khz = 16660;
    gppb->occ_complex_frequency_mhz = 600;
    gppb->dpll_pstate0_value = 204;

    for (i = 0; i < NUM_VPD_PTS_SET; i++)
    {
        for (j = 0; j < NUM_OP_POINTS; j++)
        {
            gppb->operating_points_set[i][j].frequency_mhz = 2000 + j * 200;
            gppb->operating_points_set[i][j].vdd_mv = 600 + j * 48;
            gppb->operating_points_set[i][j].vcs_mv = 825 + j * 6;
            /*gppb->operating_points_set[i][j].pstate = ((gppb->reference_frequency_khz -
                    gppb->operating_points_set[i][j].frequency_mhz) *
                    1000) / gppb->frequency_step_khz;;*/
            gppb->operating_points_set[i][j].pstate = 84 - j * 12;
            gppb->operating_points_set[i][j].idd_tdp_ac_10ma = 19000 + j * 1200;
            gppb->operating_points_set[i][j].idd_tdp_dc_10ma = j * 600;

            gppb->operating_points_set[i][j].ics_tdp_ac_10ma = 12000 + j * 600;
            gppb->operating_points_set[i][j].ics_tdp_dc_10ma = j * 30;
        }
    }

    //Fill up slopes
    //VDD
    for ( i = 0; i < NUM_VPD_PTS_SET; i++)
    {
        for( j = 0; j < VPD_NUM_SLOPES_REGION; j++)
        {
            gppb->ps_voltage_slopes[RUNTIME_RAIL_VDD][i][j] = 0x4000;       //4
            gppb->voltage_ps_slopes[RUNTIME_RAIL_VDD][i][j] = 0x0400;       //0.25

            gppb->ps_ac_current_tdp[RUNTIME_RAIL_VDD][i][j] = 0xC800;    //100
            gppb->ps_dc_current_tdp[RUNTIME_RAIL_VDD][i][j] = 0x6400;    //50
            gppb->ac_current_ps_tdp[RUNTIME_RAIL_VDD][i][j] = 0x0005;    //0.01
            gppb->dc_current_ps_tdp[RUNTIME_RAIL_VDD][i][j] = 0x000A;    //0.02
        }
    }

    //VCS
    for ( i = 0; i < NUM_VPD_PTS_SET; i++)
    {
        for( j = 0; j < VPD_NUM_SLOPES_REGION; j++)
        {
            gppb->ps_voltage_slopes[RUNTIME_RAIL_VCS][i][j] = 0x0400;       //0.5
            gppb->voltage_ps_slopes[RUNTIME_RAIL_VCS][i][j] = 0x2000;       //2

            gppb->ps_ac_current_tdp[RUNTIME_RAIL_VCS][i][j] = 0x6400;    //50
            gppb->ps_dc_current_tdp[RUNTIME_RAIL_VCS][i][j] = 0x0500;    //2.5
            gppb->ac_current_ps_tdp[RUNTIME_RAIL_VCS][i][j] = 0x000A;    //0.02
            gppb->dc_current_ps_tdp[RUNTIME_RAIL_VCS][i][j] = 0x00CD;    //0.4
        }
    }

    //System Distribution Parameters
    //VDD
    gppb->vdd_sysparm.loadline_uohm = 254;
    gppb->vdd_sysparm.distloss_uohm = 0;
    gppb->vdd_sysparm.distoffset_uv = 0;

    //VCS
    gppb->vcs_sysparm.loadline_uohm = 0;
    gppb->vcs_sysparm.distloss_uohm = 150;
    gppb->vcs_sysparm.distoffset_uv = 50;

    //VDN
    gppb->vdn_sysparm.loadline_uohm = 0;
    gppb->vdn_sysparm.distloss_uohm = 0;
    gppb->vdn_sysparm.distoffset_uv = 0;

    gppb->safe_voltage_mv[SAFE_VOLTAGE_VDD] = 740;
    gppb->safe_voltage_mv[SAFE_VOLTAGE_VCS] = 720;
    gppb->safe_frequency_khz = 2000000;

    //vratio
    gppb->core_on_ratio_vdd = PGPE_FAKE_BOOT_CORE_ON_RATIO * 65535  ;
    gppb->l3_on_ratio_vdd = PGPE_FAKE_BOOT_L3_ON_RATIO * 65535;
    gppb->mma_on_ratio_vdd = PGPE_FAKE_BOOT_MMA_ON_RATIO * 65535;
    gppb->core_on_ratio_vcs = 800;
    gppb->l3_on_ratio_vcs = 200;
    gppb->vdd_vratio_weight = 80;
    gppb->vcs_vratio_weight = 20;

    gppb->ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VDD] = 50;
    gppb->ext_vrm_parms.step_size_mv[RUNTIME_RAIL_VCS] = 50;

    gppb->avs_bus_topology.vdd_avsbus_num = 0;
    gppb->avs_bus_topology.vdn_avsbus_num = 1;
    gppb->avs_bus_topology.vcs_avsbus_num = 2;
    gppb->avs_bus_topology.vio_avsbus_num = 3;

    PK_TRACE("PGPE Fake Boot Gppb End");
}


void pgpe_fake_boot_pgpe_header()
{
    PK_TRACE("PGPE Fake Boot Header Start");
    PgpeHeader_t* pgpe_header = (PgpeHeader_t*)&_PGPE_IMG_HEADER;
    //magic number
    pgpe_header->g_pgpe_magicWord = 0x46414b455f484452ULL;

    //system_reset_address
    //ivpr_address
    //build date
    //version
    //timebase_hz
    //pgpe_hcode_length
    pgpe_header->g_pgpe_hcodeLength = 0xa000;
    //GPPB memory offset
    //GPPB length
    //Generated Pstate tbl memory offset
    //Generated pstate tbl length
    //WOF state address
    pgpe_header->g_pgpe_pgpeWofStateAddress = 0xfff2d000;
    //WOF tables offset
    //PGPE op trace
    //PGPE deep op trace
    //PGPE deep op trace PPMR length
    PK_TRACE("PGPE Fake Boot Header End");
}
