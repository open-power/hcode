/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_gppb.c $            */
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


#include "pgpe_gppb.h"
#include "pgpe_header.h"
#include "pstates_table.H"
#include "pgpe_pstate.h"
#include "pstate_pgpe_occ_api.h"

void pgpe_gppb_raw_pstate_tbl(PstateTable_t* tbl);
void pgpe_gppb_biased_pstate_tbl(PstateTable_t* tbl);
void pgpe_gppb_occ_tbl();

GlobalPstateParmBlock_t* G_gppb;
GeneratedPstateInfo_t* G_gpi;


//
//
//
void pgpe_gppb_init()
{
    PK_TRACE("GPPB Init");

    void* gppb_sram_offset = (void*)pgpe_header_get(g_pgpe_gpspbSramAddress);//GPPB Sram Offset
    G_gppb = (GlobalPstateParmBlock_t*)gppb_sram_offset;
    PK_TRACE("GPPB: Init G_gppb=0x%x", (uint32_t)G_gppb);
    PK_TRACE("GPPB: Init occ_cmpl_freq=0x%x", (uint32_t)G_gppb->occ_complex_frequency_mhz);

#if GENERATE_HOMER_TABLES == 1
    //Fill out GeneratedPstateInfo structure
    PK_TRACE("GPPB: genPsTblMemOff=0x%08x", (uint32_t)pgpe_header_get(g_pgpe_gpspbMemOffset));
    G_gpi = (GeneratedPstateInfo_t*)pgpe_header_get(g_pgpe_gpspbMemOffset);
    G_gpi->magic = GEN_PSTATES_TBL_MAGIC;
    G_gpi->marker_gppb_end = 0xdead0000;
    G_gpi->globalppb = *G_gppb;
    G_gpi->pstate0_frequency_khz = G_gppb->reference_frequency_khz;
    G_gpi->highest_pstate = G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate;
    G_gpi->marker_raw_pstates_end = 0xdead0001;

    G_gpi->pgpe_header  = *(pgpe_header_get_ptr());

    //Clear the IPE bit because we are about to do 1B and 2B operations to main memory
    uint32_t msr = mfmsr();
    mtmsr(msr & ~MSR_IPE);

    pgpe_gppb_raw_pstate_tbl((PstateTable_t*)(&G_gpi->raw_pstates));
    pgpe_gppb_biased_pstate_tbl((PstateTable_t*)(&G_gpi->biased_pstates));
    pgpe_gppb_occ_tbl();

    mtmsr(msr);//Restore MSR

#endif
}

//
//Generate Pstate Table
//
void pgpe_gppb_raw_pstate_tbl(PstateTable_t* tbl)
{
    int32_t p;
    uint32_t freq_khz_offset = 0;

    for (p = 0; p <= G_gppb->operating_points_set[VPD_PT_SET_RAW][POWERSAVE].pstate; p++)
    {
        tbl[p].pstate = p;
        tbl[p].frequency_mhz = (G_gppb->reference_frequency_khz - freq_khz_offset) / 1000;
        tbl[p].external_vdd_mv = pgpe_pstate_intp_vdd_from_ps(p, VPD_PT_SET_BIASED_SYSP);
        tbl[p].effective_vdd_mv = pgpe_pstate_intp_vdd_from_ps(p, VPD_PT_SET_RAW);
        freq_khz_offset += G_gppb->frequency_step_khz;
        //\TODO Need Update spec as to what else needs to be in here
    }

    PK_TRACE("INIT: Generated Raw Pstate Tbl");
}

void pgpe_gppb_biased_pstate_tbl(PstateTable_t* tbl)
{
    int32_t p;
    uint32_t freq_khz_offset = 0;

    for (p = 0; p <= G_gppb->operating_points_set[VPD_PT_SET_BIASED_SYSP][POWERSAVE].pstate; p++)
    {
        tbl[p].pstate = p;
        tbl[p].frequency_mhz = (G_gppb->reference_frequency_khz - freq_khz_offset) / 1000;
        tbl[p].external_vdd_mv = pgpe_pstate_intp_vdd_from_ps(p, VPD_PT_SET_BIASED_SYSP);
        tbl[p].effective_vdd_mv = pgpe_pstate_intp_vdd_from_ps(p, VPD_PT_SET_BIASED);
        freq_khz_offset += G_gppb->frequency_step_khz;
        //\TODO Need Update spec as to what else needs to be in here
    }

    PK_TRACE("INIT: Generated Biased Pstate Tbl");
}
//
//Generate OCC Table
//
void pgpe_gppb_occ_tbl()
{
    int p;

    OCCPstateTable_t* opst = (OCCPstateTable_t*)pgpe_header_get(g_pgpe_opspbTableAddress);
    opst->entries = pgpe_header_get(g_pgpe_opspbTableLength) / sizeof(OCCPstateTable_entry_t);

    for (p = 0; p < opst->entries; p++)
    {
        opst->table[p].pstate = G_gpi->biased_pstates[p].pstate;
        opst->table[p].frequency_mhz = G_gpi->biased_pstates[p].frequency_mhz ;
        //\TODO Need Update spec as to what else needs to be in here
    }

    PK_TRACE("INIT: Generated OCC Tbl");
}
