/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_gen_pstate_info.c $ */
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
#include "p9_pstates_table.h"
#include "p9_pgpe_gppb.h"
#include "p9_pgpe_header.h"
#include "pstate_pgpe_occ_api.h"

//Generated PState Table in SRAM
GeneratedPstateInfo G_gpi;
extern PgpeHeader_t* G_pgpe_header_data;
//extern VpdOperatingPoint gppb->operating_points_set[NUM_VPD_PTS_SET][VPD_PV_POINTS];

//
//Local function prototypes
//
void p9_pgpe_gen_raw_pstates(GlobalPstateParmBlock* gppb, GeneratedPstateInfo* gpi);
void p9_pgpe_gen_biased_pstates(GlobalPstateParmBlock* gppb, GeneratedPstateInfo* gpi);
void p9_pgpe_gen_occ_pstate_tbl(GeneratedPstateInfo* gpi);

//
//p9_pgpe_gen_pstate_info
//
void p9_pgpe_gen_pstate_info()
{
    PK_TRACE_DBG("> p9_pgpe_gen_pstate_info to memory 0x%X",
                 (uint32_t)G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset);
    //int p;
    //Get GlobalPstateParmBlock offset from pgpe_header
    uint32_t* pstate_tbl_memory_offset  = G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset;
    uint32_t pstate_tbl_length = G_pgpe_header_data->g_pgpe_gen_pstables_length;
    void* gppb_sram_offset = G_pgpe_header_data->g_pgpe_gppb_sram_addr;//GPPB Sram Offset
    GlobalPstateParmBlock* gppb = (GlobalPstateParmBlock*)gppb_sram_offset;

    //Fill out GeneratedPstateInfo structure
    G_gpi.magic = GEN_PSTATES_TBL_MAGIC;
    G_gpi.globalppb = *gppb;
    G_gpi.pstate0_frequency_khz = gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][ULTRA].frequency_mhz * 1000;

    G_gpi.highest_pstate = ((gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][ULTRA].frequency_mhz -
                             gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].frequency_mhz) * 1000) / gppb->frequency_step_khz;

    //Generate tables
    p9_pgpe_gen_raw_pstates(gppb, &G_gpi);
    p9_pgpe_gen_biased_pstates(gppb, &G_gpi);

    /*
    for (p = 0; p < VPD_PV_POINTS; p++)
    {
        G_gpi.operating_points_biased[p] = gppb->operating_points_set[VPD_PT_SET_BIASED][p];
        G_gpi.operating_points_sysp[p] = gppb->operating_points_set[VPD_PT_SET_SYSP][p];
        G_gpi.operating_points_biased_sysp[p] = gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][p];
    }*/

    //Write Generated Pstate out to main memory(HOMER/PPMR.PstateTable)
    uint32_t* gpi = (uint32_t*)&G_gpi;
    int32_t w;

    for (w = 0; w < (pstate_tbl_length >> 2); w++)
    {
        pstate_tbl_memory_offset[w] = gpi[w];
    }

    //Generate Pstate table for OCC in SRAM
    p9_pgpe_gen_occ_pstate_tbl(&G_gpi);
    PK_TRACE_DBG("< p9_pgpe_gen_pstate_info");
}

//
//p9_pgpe_gen_raw_pstates
//
//Generates pstate table without biasing
//
void p9_pgpe_gen_raw_pstates(GlobalPstateParmBlock* gppb, GeneratedPstateInfo* gpi)
{
    PK_TRACE_DBG(">> p9_pgpe_gen_raw_pstates");
    int32_t p;
    uint32_t freq_khz_offset = 0, highest_pstate;
    highest_pstate = gppb->operating_points_set[VPD_PT_SET_SYSP][POWERSAVE].pstate;

    for (p = 0; p <= highest_pstate; p++)
    {
        gpi->raw_pstates[p].pstate = p;
        gpi->raw_pstates[p].frequency_mhz = (gppb->reference_frequency_khz -  freq_khz_offset) / 1000;
        gpi->raw_pstates[p].external_vdd_mv = p9_pgpe_gppb_intp_vdd_from_ps(p, VPD_PT_SET_SYSP);
        gpi->raw_pstates[p].effective_vdd_mv = p9_pgpe_gppb_intp_vdd_from_ps(p, VPD_PT_SET_RAW);
        gpi->raw_pstates[p].effective_regulation_vdd_mv = gpi->raw_pstates[p].external_vdd_mv + gppb->ivrm.deadzone_mv;
        gpi->raw_pstates[p].internal_vdd_mv = p9_pgpe_gppb_intp_vdd_from_ps(p, VPD_PT_SET_RAW);
        gpi->raw_pstates[p].internal_vid = (gpi->raw_pstates[p].internal_vdd_mv - 512) >> 4;
        gpi->raw_pstates[p].vdm_mv = 0;
        gpi->raw_pstates[p].vdm_vid = 0;
        gpi->raw_pstates[p].vdm_thresholds = 0;
        freq_khz_offset += gppb->frequency_step_khz;
    }

    PK_TRACE_DBG("<< p9_pgpe_gen_raw_pstates");
}

//
//p9_pgpe_gen_biased_pstates
//
//Generates pstate table with biasing
//
void p9_pgpe_gen_biased_pstates(GlobalPstateParmBlock* gppb, GeneratedPstateInfo* gpi)
{
    PK_TRACE_DBG(">> p9_pgpe_gen_biased_pstates");
    int32_t p;
    uint32_t freq_khz_offset = 0, highest_pstate;
    highest_pstate = gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;

    for (p = 0; p <= highest_pstate; p++)
    {
        gpi->biased_pstates[p].pstate = p;
        gpi->biased_pstates[p].frequency_mhz = (G_gpi.pstate0_frequency_khz - freq_khz_offset) / 1000;
        gpi->biased_pstates[p].external_vdd_mv = p9_pgpe_gppb_intp_vdd_from_ps(p, VPD_PT_SET_BIASED_SYSP);
        gpi->biased_pstates[p].effective_vdd_mv = p9_pgpe_gppb_intp_vdd_from_ps(p, VPD_PT_SET_BIASED);
        gpi->biased_pstates[p].effective_regulation_vdd_mv = (uint16_t)(gpi->biased_pstates[p].external_vdd_mv +
                gppb->ivrm.deadzone_mv);
        gpi->biased_pstates[p].internal_vdd_mv = p9_pgpe_gppb_intp_vdd_from_ps(p, VPD_PT_SET_BIASED);
        gpi->biased_pstates[p].internal_vid = (uint16_t)((gpi->biased_pstates[p].internal_vdd_mv - 512) >> 4);
        gpi->biased_pstates[p].vdm_mv = 0;
        gpi->biased_pstates[p].vdm_vid = 0;
        gpi->biased_pstates[p].vdm_thresholds = 0;
        freq_khz_offset += gppb->frequency_step_khz;
    }

    PK_TRACE_DBG("<< p9_pgpe_gen_biased_pstates");
}


//
//p9_pgpe_gen_occ_pstate_tbl
//
//Generates pstate table for OCC consumption
//
void p9_pgpe_gen_occ_pstate_tbl(GeneratedPstateInfo* gpi)
{
    PK_TRACE_DBG(">> p9_pgpe_gen_occ_pstate_tbl to SRAM 0x%X",
                 (uint32_t)G_pgpe_header_data->g_pgpe_occ_pstables_sram_addr);
    int p;
    OCCPstateTable_t* opst = (OCCPstateTable_t*)G_pgpe_header_data->g_pgpe_occ_pstables_sram_addr;
    opst->entries = (G_pgpe_header_data->g_pgpe_occ_pstables_len) / sizeof(OCCPstateTable_entry_t);

    for (p = 0; p <= opst->entries; p++)
    {
        opst->table[p].pstate = gpi->biased_pstates[p].pstate;
        opst->table[p].frequency_mhz = gpi->biased_pstates[p].frequency_mhz ;
        opst->table[p].internal_vdd_vid  = gpi->biased_pstates[p].internal_vid;
    }

    PK_TRACE_DBG("<< p9_pgpe_gen_occ_pstate_tbl");
}
