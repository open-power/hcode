/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_gen_pstate_info.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2018                                                    */
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
#include "p9_hcode_image_defines.H"
#include "pstate_pgpe_occ_api.h"
#include "p9_pgpe.h"

//Externs
extern PgpeHeader_t* G_pgpe_header_data;
extern GlobalPstateParmBlock* G_gppb;

#if USE_GEN_PSTATE_STRUCT_V == 0
    GeneratedPstateInfo* G_gpi;
#elif USE_GEN_PSTATE_STRUCT_V == 1
    GeneratedPstateInfo_v1* G_gpi;
#elif USE_GEN_PSTATE_STRUCT_V == 2
    GeneratedPstateInfo_v2* G_gpi;
#endif

compile_assert(GEN_PSTATE_INFO_CHECK, sizeof(GeneratedPstateInfo) < PGPE_PSTATE_OUTPUT_TABLES_REGION_SIZE);
compile_assert(GEN_PSTATE_INFO_V1_CHECK, sizeof(GeneratedPstateInfo_v1) < PGPE_PSTATE_OUTPUT_TABLES_REGION_SIZE);
compile_assert(GEN_PSTATE_INFO_V2_CHECK, sizeof(GeneratedPstateInfo_v2) < PGPE_PSTATE_OUTPUT_TABLES_REGION_SIZE);

//
//Local function prototypes
//
void p9_pgpe_gen_raw_pstates(PstateTable* tbl);
void p9_pgpe_gen_biased_pstates(PstateTable* tbl);
void p9_pgpe_gen_occ_pstate_tbl();
void p9_pgpe_gen_vratio_vindex_tbl(VRatioVIndexTable* tbl);

//
//p9_pgpe_gen_pstate_info
//
void p9_pgpe_gen_pstate_info()
{
    uint32_t* ps0, *highest_pstate;
    GlobalPstateParmBlock* gppb;
    PstateTable* rTbl, *bTbl;

    //Fill out GeneratedPstateInfo structure
#if USE_GEN_PSTATE_STRUCT_V == 0
    G_gpi = (GeneratedPstateInfo*)G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset;
    G_gpi->magic = GEN_PSTATES_TBL_MAGIC;
    gppb = (GlobalPstateParmBlock*)(&G_gpi->globalppb);
    ps0 = (uint32_t*)(&G_gpi->pstate0_frequency_khz);
    highest_pstate = (uint32_t*)(&G_gpi->highest_pstate);
    rTbl = (PstateTable*)(&G_gpi->raw_pstates);
    bTbl = (PstateTable*)(&G_gpi->biased_pstates);
#elif USE_GEN_PSTATE_STRUCT_V == 1
    G_gpi = (GeneratedPstateInfo_v1*)G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset;
    G_gpi->magic = GEN_PSTATES_TBL_MAGIC_V1;
    G_gpi->header.gppb_offset = offsetof(GeneratedPstateInfo_v1, globalppb) >> 2;
    G_gpi->header.gppb_length = sizeof(GlobalPstateParmBlock);
    G_gpi->header.ps0_offset  = offsetof(GeneratedPstateInfo_v1, pstate0_frequency_khz) >> 2;
    G_gpi->header.highest_ps_offset = offsetof(GeneratedPstateInfo_v1, highest_pstate) >> 2;
    G_gpi->header.raw_pstate_tbl_offset = offsetof(GeneratedPstateInfo_v1, raw_pstates) >> 2;
    G_gpi->header.raw_pstate_tbl_length = sizeof(PstateTable) * MAX_PSTATE_TABLE_ENTRIES;
    G_gpi->header.biased_pstate_tbl_offset = offsetof(GeneratedPstateInfo_v1, biased_pstates) >> 2;
    G_gpi->header.biased_pstate_tbl_length = sizeof(PstateTable) * MAX_PSTATE_TABLE_ENTRIES;
    PK_TRACE_DBG("INIT:gppb=0x%x, ps0=0x%x",
                 G_gpi->header.gppb_offset,
                 G_gpi->header.ps0_offset);
    PK_TRACE_DBG("INIT:highest_ps=0x%x, biased_ps=0x%x",
                 G_gpi->header.highest_ps_offset,
                 G_gpi->header.biased_pstate_tbl_offset);
    gppb = (GlobalPstateParmBlock*)((uint32_t*)(G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset) +
                                    G_gpi->header.gppb_offset);
    ps0 = ((uint32_t*)(G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset) + G_gpi->header.ps0_offset);
    highest_pstate = ((uint32_t*)(G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset) + G_gpi->header.highest_ps_offset);
    rTbl = (PstateTable*)((uint32_t*)(G_(G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset) +
                                      G_gpi->header.raw_pstate_tbl_offset);
                          bTbl = (PstateTable*)(((uint32_t*)(G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset) +
                                  G_gpi->header.biased_pstate_tbl_offset);
                                  PK_TRACE_DBG("INIT:highest_ps=0x%x, ps0=0x%x",
                                          *highest_pstate,
                                          *ps0);
#elif USE_GEN_PSTATE_STRUCT_V == 2
    G_gpi = (GeneratedPstateInfo_v2*)G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset;
    G_gpi->magic = GEN_PSTATES_TBL_MAGIC_V2;
    G_gpi->header.gppb_offset = offsetof(GeneratedPstateInfo_v2, globalppb) >> 2;
    G_gpi->header.gppb_length = sizeof(GlobalPstateParmBlock);
    G_gpi->header.ps0_offset  = offsetof(GeneratedPstateInfo_v2, pstate0_frequency_khz) >> 2;
    G_gpi->header.highest_ps_offset = offsetof(GeneratedPstateInfo_v2, highest_pstate) >> 2;
    G_gpi->header.raw_pstate_tbl_offset = offsetof(GeneratedPstateInfo_v2, raw_pstates) >> 2;
    G_gpi->header.raw_pstate_tbl_length = sizeof(PstateTable) * MAX_PSTATE_TABLE_ENTRIES;
    G_gpi->header.biased_pstate_tbl_offset = offsetof(GeneratedPstateInfo_v2, biased_pstates) >> 2;
    G_gpi->header.biased_pstate_tbl_length = sizeof(PstateTable) * MAX_PSTATE_TABLE_ENTRIES;
    G_gpi->header.vratio_vindex_tbl_offset = offsetof(GeneratedPstateInfo_v2, vratio_vindex) >> 2;
    G_gpi->header.vratio_vindex_tbl_length = sizeof(VRatioVIndexTable) * MAX_VRATIO_VINDEX_TABLE_ENTRIES;

    PK_TRACE_DBG("INIT:gppb=0x%x, ps0=0x%x",
                 G_gpi->header.gppb_offset,
                 G_gpi->header.ps0_offset);
    PK_TRACE_DBG("INIT:highest_ps=0x%x, biased_ps=0x%x",
                 G_gpi->header.highest_ps_offset,
                 G_gpi->header.biased_pstate_tbl_offset);
    PK_TRACE_DBG("INIT:vratio_vindex ofsset=0x%x,length=0x%x ",
                 G_gpi->header.vratio_vindex_tbl_offset,
                 G_gpi->header.vratio_vindex_tbl_length);
    gppb = (GlobalPstateParmBlock*)((uint32_t*)(G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset) +
                                    G_gpi->header.gppb_offset);
    ps0 = (((uint32_t*)(G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset)) + G_gpi->header.ps0_offset);
    highest_pstate = ((uint32_t*)(G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset) + G_gpi->header.highest_ps_offset);
    rTbl = (PstateTable*)((uint32_t*)(G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset) +
                          G_gpi->header.raw_pstate_tbl_offset);
    bTbl = (PstateTable*)((uint32_t*)(G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset) +
                          G_gpi->header.biased_pstate_tbl_offset);
    VRatioVIndexTable* vTbl = (VRatioVIndexTable*)((uint32_t*)(G_pgpe_header_data->g_pgpe_gen_pstables_mem_offset) +
                              G_gpi->header.vratio_vindex_tbl_offset);
    PK_TRACE_DBG("INIT:highest_ps=0x%x, ps0=0x%x",
                 *highest_pstate,
                 *ps0);

    p9_pgpe_gen_vratio_vindex_tbl(vTbl);
#endif

    PK_TRACE_DBG("INIT:G_gpi=0x%x, rTbl=0x%x,bTbl=0x%x", (uint32_t)G_gpi, (uint32_t)rTbl, (uint32_t)bTbl);

    //Fill GeneratedPstateInfo
    *gppb = *G_gppb;
    *ps0 = G_gppb->reference_frequency_khz;
    *highest_pstate = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
    p9_pgpe_gen_raw_pstates(rTbl);
    p9_pgpe_gen_biased_pstates(bTbl);

    //Generate Pstate table for OCC in SRAM
    p9_pgpe_gen_occ_pstate_tbl();

}

//
//p9_pgpe_gen_raw_pstates
//
//Generates pstate table without biasing
//
void p9_pgpe_gen_raw_pstates(PstateTable* tbl)
{
    int32_t p;
    uint32_t freq_khz_offset = 0;

    for (p = 0; p <= G_gppb->operating_points_set[VPD_PT_SET_RAW][POWERSAVE].pstate; p++)
    {
        tbl[p].pstate = p;
        tbl[p].frequency_mhz = (G_gppb->reference_frequency_khz -  freq_khz_offset) / 1000;
        tbl[p].external_vdd_mv = p9_pgpe_gppb_intp_vdd_from_ps(p, VPD_PT_SET_SYSP);
        tbl[p].effective_vdd_mv = p9_pgpe_gppb_intp_vdd_from_ps(p, VPD_PT_SET_RAW);
        tbl[p].effective_regulation_vdd_mv = G_gpi->raw_pstates[p].external_vdd_mv + G_gppb->ivrm.deadzone_mv;
        tbl[p].internal_vdd_mv = p9_pgpe_gppb_intp_vdd_from_ps(p, VPD_PT_SET_RAW);
        tbl[p].internal_vid = (G_gpi->raw_pstates[p].internal_vdd_mv - 512) >> 4;
        tbl[p].vdm_vid = (uint8_t)p9_pgpe_gppb_vdm_vid_cmp_from_ps(p);
        tbl[p].vdm_mv = (uint8_t)tbl[p].vdm_vid; //Note: the field in struct is 8 bits only, we can put in the value in mV
        tbl[p].vdm_thresholds = (uint16_t)p9_pgpe_gppb_vdm_threshold_from_ps(p);
        freq_khz_offset += G_gppb->frequency_step_khz;
    }

    PK_TRACE_DBG("INIT: Generated Raw Tbl");
}

//
//p9_pgpe_gen_biased_pstates
//
//Generates pstate table with biasing and system parameters
//
void p9_pgpe_gen_biased_pstates(PstateTable* tbl)
{
    int32_t p;
    uint32_t freq_khz_offset = 0;

    for (p = 0; p <= G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate; p++)
    {
        tbl[p].pstate = p;
        tbl[p].frequency_mhz = (G_gppb->reference_frequency_khz - freq_khz_offset) / 1000;
        tbl[p].external_vdd_mv = p9_pgpe_gppb_intp_vdd_from_ps(p, VPD_PT_SET_BIASED_SYSP);
        tbl[p].effective_vdd_mv = p9_pgpe_gppb_intp_vdd_from_ps(p, VPD_PT_SET_BIASED);
        tbl[p].effective_regulation_vdd_mv = (uint16_t)(G_gpi->biased_pstates[p].external_vdd_mv +
                                             G_gppb->ivrm.deadzone_mv);
        tbl[p].internal_vdd_mv = p9_pgpe_gppb_intp_vdd_from_ps(p, VPD_PT_SET_BIASED);
        tbl[p].internal_vid = (uint16_t)((G_gpi->biased_pstates[p].internal_vdd_mv - 512) >> 4);
        tbl[p].vdm_vid = (uint8_t)p9_pgpe_gppb_vdm_vid_cmp_from_ps(p);
        tbl[p].vdm_mv = (uint8_t)tbl[p].vdm_vid; //Note: the field in struct is 8 bits only, we can put in the value in mV
        tbl[p].vdm_thresholds = (uint16_t)p9_pgpe_gppb_vdm_threshold_from_ps(p);
        freq_khz_offset += G_gppb->frequency_step_khz;
    }

    PK_TRACE_DBG("INIT: Generated Biased Tbl");
}


//
//p9_pgpe_gen_occ_pstate_tbl
//
//Generates pstate table for OCC consumption
//
void p9_pgpe_gen_occ_pstate_tbl()
{
    int p;
    OCCPstateTable_t* opst = (OCCPstateTable_t*)G_pgpe_header_data->g_pgpe_occ_pstables_sram_addr;
    opst->entries = (G_pgpe_header_data->g_pgpe_occ_pstables_len) / sizeof(OCCPstateTable_entry_t);

    for (p = 0; p < opst->entries; p++)
    {
        opst->table[p].pstate = G_gpi->biased_pstates[p].pstate;
        opst->table[p].frequency_mhz = G_gpi->biased_pstates[p].frequency_mhz ;
        opst->table[p].internal_vdd_vid  = G_gpi->biased_pstates[p].internal_vid;
    }

    PK_TRACE_DBG("INIT: Generated OCC Tbl");
}


void p9_pgpe_gen_vratio_vindex_tbl(VRatioVIndexTable* tbl)
{
    uint32_t ac, sc, idx = 0;

    PK_TRACE_DBG("INIT: Generating Vindex Vratio Tbl");

    for (sc = 1; sc <= 24; sc++)
    {
        for (ac = 1; ac <= sc; ac++)
        {
            tbl[idx].vratio = (ac * MAX_VRATIO) / sc;

            if (ac != 0)
            {
                tbl[idx].vindex = (((24 * tbl[idx].vratio) + VRATIO_ROUNDING_ADJUST) / MAX_VRATIO) - 1;
            }
            else
            {
                tbl[idx].vindex = 0;
            }

            idx++;
        }

        PK_TRACE_DBG("INIT: Generated sc=%d", sc);
    }
}
