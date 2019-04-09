/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_fake_boot.c $       */
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
#include "pgpe_fake_boot.h"
#include "pstates_pgpe.H"
#include "pgpe_header.h"
extern pgpe_header_t* _PGPE_IMG_HEADER __attribute__ ((section (".pgpe_image_header")));


void pgpe_fake_boot_gppb()
{
    //Fill in GPPB values

    PK_TRACE("PGPE Fake Boot Gppb Start");
    GlobalPstateParmBlock_t* gppb;
    uint32_t i, j = 0;
    void* gppb_sram_offset = (void*)GPPB_SRAM_ADDR;
    gppb = (GlobalPstateParmBlock_t*)gppb_sram_offset;

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
            gppb->operating_points_set[i][j].vdd_mv = 600 + j * 50;
            gppb->operating_points_set[i][j].vcs_mv = 825 + j * 5;
            /*gppb->operating_points_set[i][j].pstate = ((gppb->reference_frequency_khz -
                    gppb->operating_points_set[i][j].frequency_mhz) *
                    1000) / gppb->frequency_step_khz;;*/
            gppb->operating_points_set[i][j].ics_tdp_ac_10ma = 120 + j * 5;
            gppb->operating_points_set[i][j].idd_tdp_ac_10ma = 1900 + j * 200;
        }
    }

    //Fill up slopes
    //VDD
    for ( i = 0; i < NUM_VPD_PTS_SET; i++)
    {
        for( j = 0; j < VPD_NUM_SLOPES_REGION; j++)
        {
            gppb->ps_voltage_slopes[RUNTIME_RAIL_VDD][i][j] = 0x2800;
            gppb->voltage_ps_slopes[RUNTIME_RAIL_VDD][i][j] = 0x0666;
            gppb->ps_current_slopes[RUNTIME_RAIL_VDD][i][j] = 0xA000;
            gppb->current_ps_slopes[RUNTIME_RAIL_VDD][i][j] = 0x019a;
        }
    }

    //VCS
    for ( i = 0; i < NUM_VPD_PTS_SET; i++)
    {
        for( j = 0; j < VPD_NUM_SLOPES_REGION; j++)
        {
            gppb->ps_voltage_slopes[RUNTIME_RAIL_VDD][i][j] = 0x1400;
            gppb->voltage_ps_slopes[RUNTIME_RAIL_VDD][i][j] = 0x0bbb;
            gppb->ps_current_slopes[RUNTIME_RAIL_VDD][i][j] = 0x0400;
            gppb->current_ps_slopes[RUNTIME_RAIL_VDD][i][j] = 0x4000;
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

    gppb->safe_voltage_mv = 740;
    gppb->safe_frequency_khz = 2286000;

    PK_TRACE("PGPE Fake Boot Gppb End");
}


void pgpe_fake_boot_pgpe_header()
{
    PK_TRACE("PGPE Fake Boot Header Start");
    pgpe_header_t* pgpe_header = (pgpe_header_t*)&_PGPE_IMG_HEADER;
    //magic number
    pgpe_header->g_pgpe_magic_number = 0x46414b455f484452ULL;

    //system_reset_address
    //ivpr_address
    //build date
    //version
    //pgpe_flags
#if FAKE_BOOT_WOF_ENABLE == 1
    pgpe_header->g_pgpe_flags |= PGPE_FLAG_WOF_ENABLE;
#endif
#if FAKE_BOOT_IMMEDIATE_MODE == 1
    pgpe_header->g_pgpe_flags |= PGPE_FLAG_OCC_IPC_IMMEDIATE_MODE;
#if FAKE_BOOT_WOF_ENABLE == 1
    pgpe_header->g_pgpe_flags |= PGPE_FLAG_WOF_IPC_IMMEDIATE_MODE;
#endif
#endif
    //timebase_hz
    //pgpe_hcode_length
    pgpe_header->g_pgpe_hcode_length = 0xA000;
    //GPPB memory offset
    //GPPB length
    //Generated Pstate tbl memory offset
    //Generated pstate tbl length
    //WOF tables offset
    //core throttle assertion count
    //core throttle de-assertion count
    //PGPE op trace
    //PGPE deep op trace
    //PGPE deep op trace PPMR length
    PK_TRACE("PGPE Fake Boot Header End");
}
