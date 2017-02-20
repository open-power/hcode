/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_boot_temp.c $ */
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
#include "pk.h"
#include "p9_pstates_pgpe.h"
#include "p9_pgpe_header.h"

extern PgpeHeader_t* G_pgpe_header_data;

//
//Local function prototypes
//
void p9_pgpe_boot_pgpe_header_init();
void p9_pgpe_boot_gppb_init();

//
//p9_pgpe_boot_temp
//
//PGPE calls this to mimic boot process
void p9_pgpe_boot_temp()
{
    p9_pgpe_boot_pgpe_header_init();
    p9_pgpe_boot_gppb_init();
}


//
//p9_pgpe_boot_pgpe_header_init
//
//Initializes the PGPE Header
//
//Note: SRAM addresses are hardcoded for now.
void p9_pgpe_boot_pgpe_header_init()
{
    //fill it in
    G_pgpe_header_data->g_pgpe_magic_number[0] =  0x32323232;//magic
    G_pgpe_header_data->g_pgpe_sys_reset_addr  = (uint32_t*)0xffff2040;//system_reset_address
    G_pgpe_header_data->g_pgpe_ivpr_addr = (uint32_t*)0xffff2000;//IVPR address
#if !BOOT_TEMP_SET_FULL_OCC_IPC_FUNC
    G_pgpe_header_data->g_pgpe_qm_flags = (uint16_t)(0x0080); //OCC IPC Immediate Response
#else
    G_pgpe_header_data->g_pgpe_qm_flags = (uint16_t)(0x0000); //OCC IPC Full Functionality
#endif //BOOT_TEMP_SET_FULL_OCC_IPC_FUNC
    G_pgpe_header_data->g_pgpe_gppb_mem_offset = 0;//GPPB Memory Offset
    G_pgpe_header_data->g_pgpe_gppb_length  = 0x2000;//GPPB Block Length
    G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset  = (uint32_t*)0x80308000;//Pstate Tables Memory Offset
    G_pgpe_header_data->g_pgpe_gen_pstables_length  = 0x6000;//Pstate Tables Length
    G_pgpe_header_data->g_pgpe_gppb_sram_addr  = (uint32_t*)0xfff2c000;//GPPB Sram Offset
}

//
//p9_pgpe_boot_gppb_init
//
//Initialize GPPB block
//
void p9_pgpe_boot_gppb_init()
{
    int32_t i;

    //read value of symbol pstate_parameter_block
    void* gppb_sram_offset = G_pgpe_header_data->g_pgpe_gppb_sram_addr;//GPPB Sram Offset

    GlobalPstateParmBlock* gppb = (GlobalPstateParmBlock*)gppb_sram_offset;
    gppb->magic = PSTATE_PARMSBLOCK_MAGIC;
    gppb->options.options = 0;
    gppb->reference_frequency_khz = 2800000;
    gppb->frequency_step_khz = 16667;
    gppb->ext_vrm_transition_start_ns = 50;
    gppb->ext_vrm_transition_rate_inc_uv_per_us = 10000;
    gppb->ext_vrm_transition_rate_dec_uv_per_us = 10000;
    gppb->ext_vrm_stabilization_time_us = 500;
    gppb->ext_vrm_step_size_mv = 50;
    gppb->nest_frequency_mhz = 2000;

    gppb->operating_points[ULTRA].frequency_mhz = 2800;
    gppb->operating_points[ULTRA].vdd_mv = 1000;
    gppb->operating_points[ULTRA].pstate = 0;
    gppb->operating_points[ULTRA].idd_100ma = 2;
    gppb->operating_points[ULTRA].ics_100ma = 1;
    gppb->operating_points[TURBO].frequency_mhz = 2600;
    gppb->operating_points[TURBO].vdd_mv = 900;
    gppb->operating_points[TURBO].pstate = 12;
    gppb->operating_points[TURBO].idd_100ma = 2;
    gppb->operating_points[TURBO].ics_100ma = 1;
    gppb->operating_points[NOMINAL].frequency_mhz = 2400;
    gppb->operating_points[NOMINAL].vdd_mv = 825;
    gppb->operating_points[NOMINAL].pstate = 24;
    gppb->operating_points[NOMINAL].idd_100ma = 2;
    gppb->operating_points[NOMINAL].ics_100ma = 1;
    gppb->operating_points[POWERSAVE].frequency_mhz = 2000;
    gppb->operating_points[POWERSAVE].vdd_mv = 750;
    gppb->operating_points[POWERSAVE].pstate = 48;
    gppb->operating_points[POWERSAVE].idd_100ma = 2;
    gppb->operating_points[POWERSAVE].ics_100ma = 1;

    //External Biases
    gppb->ext_biases[POWERSAVE].vdd_ext_hp = 2;
    gppb->ext_biases[POWERSAVE].vdd_int_hp = 1;
    gppb->ext_biases[POWERSAVE].vdn_ext_hp = 4;
    gppb->ext_biases[POWERSAVE].vcs_ext_hp = 0;
    gppb->ext_biases[POWERSAVE].frequency_hp = 3;
    gppb->ext_biases[NOMINAL].vdd_ext_hp = 4;
    gppb->ext_biases[NOMINAL].vdd_int_hp = 2;
    gppb->ext_biases[NOMINAL].vdn_ext_hp = 1;
    gppb->ext_biases[NOMINAL].vcs_ext_hp = 0;
    gppb->ext_biases[NOMINAL].frequency_hp = 4;
    gppb->ext_biases[TURBO].vdd_ext_hp = 2;
    gppb->ext_biases[TURBO].vdd_int_hp = 5;
    gppb->ext_biases[TURBO].vdn_ext_hp = 6;
    gppb->ext_biases[TURBO].vcs_ext_hp = 7;
    gppb->ext_biases[TURBO].frequency_hp = 1;
    gppb->ext_biases[ULTRA].vdd_ext_hp = 7;
    gppb->ext_biases[ULTRA].vdd_int_hp = 4;
    gppb->ext_biases[ULTRA].vdn_ext_hp = 2;
    gppb->ext_biases[ULTRA].vcs_ext_hp = 0;
    gppb->ext_biases[ULTRA].frequency_hp = 3;

    //Vdd Sys Parm
    gppb->vdd_sysparm.loadline_uohm = 30;
    gppb->vdd_sysparm.distloss_uohm = 30;
    gppb->vdd_sysparm.distoffset_uv = 30;

    //Vcs Sys Parm
    gppb->vcs_sysparm.loadline_uohm = 20;
    gppb->vcs_sysparm.distloss_uohm = 20;
    gppb->vcs_sysparm.distoffset_uv = 20;

    //Vdn Sys Parm
    gppb->vdn_sysparm.loadline_uohm = 10;
    gppb->vdn_sysparm.distloss_uohm = 10;
    gppb->vdn_sysparm.distoffset_uv = 10;

    gppb->safe_voltage_mv = 825;
    gppb->safe_frequency_khz = 2400;
    gppb->vrm_stepdelay_range = 1;
    gppb->vrm_stepdelay_value = 12;

    //gppb->vdm

    //Internal Biases
    gppb->int_biases[POWERSAVE].vdd_ext_hp = 1;
    gppb->int_biases[POWERSAVE].vdd_int_hp = 1;
    gppb->int_biases[POWERSAVE].vdn_ext_hp = 1;
    gppb->int_biases[POWERSAVE].vcs_ext_hp = 1;
    gppb->int_biases[POWERSAVE].frequency_hp = 1;
    gppb->int_biases[NOMINAL].vdd_ext_hp = 1;
    gppb->int_biases[NOMINAL].vdd_int_hp = 1;
    gppb->int_biases[NOMINAL].vdn_ext_hp = 1;
    gppb->int_biases[NOMINAL].vcs_ext_hp = 1;
    gppb->int_biases[NOMINAL].frequency_hp = 1;
    gppb->int_biases[TURBO].vdd_ext_hp = 1;
    gppb->int_biases[TURBO].vdd_int_hp = 1;
    gppb->int_biases[TURBO].vdn_ext_hp = 1;
    gppb->int_biases[TURBO].vcs_ext_hp = 1;
    gppb->int_biases[TURBO].frequency_hp = 1;
    gppb->int_biases[ULTRA].vdd_ext_hp = 1;
    gppb->int_biases[ULTRA].vdd_int_hp = 1;
    gppb->int_biases[ULTRA].vdn_ext_hp = 1;
    gppb->int_biases[ULTRA].vcs_ext_hp = 1;
    gppb->int_biases[ULTRA].frequency_hp = 1;

    //iVRM
    for (i = 0; i < IVRM_ARRAY_SIZE; i++)
    {
        gppb->ivrm.strength_lookup[i]  = 31 + i;
        gppb->ivrm.vin_multiplier[i] = i * 2 + 10;
    }

    gppb->ivrm.vin_max_mv = 512;
    gppb->ivrm.step_delay_ns = 35789;
    gppb->ivrm.stablization_delay_ns = 546;
    gppb->ivrm.deadzone_mv = 50;

    //Resonant Clock
    gppb->resclk.resclk_freq[0] = 0;
    gppb->resclk.resclk_freq[1] = 22;
    gppb->resclk.resclk_freq[2] = 28;
    gppb->resclk.resclk_freq[3] = 31;
    gppb->resclk.resclk_freq[4] = 34;
    gppb->resclk.resclk_freq[5] = 37;
    gppb->resclk.resclk_freq[6] = 39;
    gppb->resclk.resclk_freq[7] = 41;

    gppb->resclk.resclk_index[0] = 3;
    gppb->resclk.resclk_index[1] = 24;
    gppb->resclk.resclk_index[2] = 44;
    gppb->resclk.resclk_index[3] = 60;
    gppb->resclk.resclk_index[4] = 52;
    gppb->resclk.resclk_index[5] = 40;
    gppb->resclk.resclk_index[6] = 30;
    gppb->resclk.resclk_index[7] = 24;

    for (i = 0; i < RESCLK_STEPS; i++)
    {
        gppb->resclk.steparray[i].value = i + 20;
    }

    gppb->resclk.step_delay_ns = 10924;

    for (i = 0; i < RESCLK_L3_STEPS; i++)
    {
        gppb->resclk.l3_steparray[i] = i + 10;
    }

    gppb->resclk.l3_threshold_mv = 890;
}
