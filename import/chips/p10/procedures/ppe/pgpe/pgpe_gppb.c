/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_gppb.c $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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
#include "pstates_common.H"
#include "pstates_pgpe.H"
#include "pgpe_pstate.h"
#include "pstate_pgpe_occ_api.h"

void pgpe_gppb_raw_pstate_tbl(PstateTable_t* tbl);
void pgpe_gppb_biased_pstate_tbl(PstateTable_t* tbl);
void pgpe_gppb_occ_tbl();

GlobalPstateParmBlock_v1_t* G_gppb_v1;
GeneratedPstateInfo_v1_t* G_gpi_v1;
uint8_t* G_gppb_pgpe_flags;
GlobalPstateParmBlockBase_t* G_gppb_base;
AvsBusTopology_t* G_gppb_avsbus;
SysPowerDistParms_t* G_gppb_vdd_sysparm;
SysPowerDistParms_t* G_gppb_vcs_sysparm;
SysPowerDistParms_t* G_gppb_vdn_sysparm;
VRMParms_v1_t*          G_gppb_ext_vrm_parms;
PoundVOpPoint_t*     G_gppb_operating_points_set[NUM_VPD_PTS_SET_V1];
PoundVSlopes_t*      G_gppb_poundv_slopes;
ResClkSetup_t*       G_gppb_resclk;
PoundWEntry_t*       G_gppb_dds[NUM_PV_POINTS];
PoundWEntry_AltCal_t* G_gppb_alt_cal[NUM_PV_POINTS];
PoundWEntry_TgtActBin_t* G_gppb_tgt_act_bin[NUM_PV_POINTS];
PoundWOtherPadded_t*           G_gppb_dds_other;
vdd_calibration*         G_gppb_vdd_cal;
PoundWSlopes_t*          G_gppb_poundw_slopes;
GlobalPstateParmBlockWOF_t* G_gppb_wof;
GlobalPstateParmBlockWOV_t* G_gppb_wov;
GlobalPstateParmBlockThr_t* G_gppb_thr_ctrl;

void pgpe_gppb_init()
{
    PK_TRACE_INF("GPB: Init");

    uint32_t p;
    void* gppb_sram_offset = (void*)pgpe_header_get(g_pgpe_gpspbSramAddress);//GPB Sram Offset
    G_gppb_v1 = (GlobalPstateParmBlock_v1_t*)gppb_sram_offset;
    G_gppb_pgpe_flags = (uint8_t*)((uint32_t)gppb_sram_offset + (uint32_t)G_gppb_v1->offsets[PGPE_FLAGS_OFFSET_IDX]);
    G_gppb_base = (GlobalPstateParmBlockBase_t*)(gppb_sram_offset + (uint32_t)G_gppb_v1->offsets[BASE_OFFSET_IDX]);
    G_gppb_avsbus = (AvsBusTopology_t*)((uint32_t)gppb_sram_offset + (uint32_t)G_gppb_v1->offsets[AVSBUS_OFFSET_IDX]);

    G_gppb_vdd_sysparm = (SysPowerDistParms_t*)((uint32_t)gppb_sram_offset + (uint32_t)
                         G_gppb_v1->offsets[SYSPARMS_VDD_OFFSET_IDX]);
    G_gppb_vcs_sysparm = (SysPowerDistParms_t*)((uint32_t)gppb_sram_offset + (uint32_t)
                         G_gppb_v1->offsets[SYSPARMS_VCS_OFFSET_IDX]);
    G_gppb_vdn_sysparm = (SysPowerDistParms_t*)((uint32_t)gppb_sram_offset + (uint32_t)
                         G_gppb_v1->offsets[SYSPARMS_VDN_OFFSET_IDX]);
    G_gppb_ext_vrm_parms = (VRMParms_v1_t*)((uint32_t)gppb_sram_offset + (uint32_t)
                                            G_gppb_v1->offsets[VRM_PARMS_OFFSET_IDX]);

    for (p = 0; p < NUM_VPD_PTS_SET_V1; p++)
    {
        G_gppb_operating_points_set[p] = (PoundVOpPoint_t*)((uint32_t)gppb_sram_offset +
                                         (uint32_t)G_gppb_v1->offsets[VPD_OP_OFFSET_IDX] +
                                         p * NUM_PV_POINTS * sizeof(PoundVOpPoint_t));
    }

    G_gppb_poundv_slopes = (PoundVSlopes_t*)((uint32_t)gppb_sram_offset + (uint32_t)
                           G_gppb_v1->offsets[POUNDV_SLOPES_OFFSET_IDX]);
    G_gppb_resclk = (ResClkSetup_t*)((uint32_t)gppb_sram_offset + (uint32_t)G_gppb_v1->offsets[RESCLK_OFFSET_IDX]);

    for (p = 0; p < NUM_PV_POINTS; p++)
    {
        G_gppb_dds[p] = (PoundWEntry_t*)((uint32_t)gppb_sram_offset +
                                         (uint32_t)G_gppb_v1->offsets[DDS_OFFSET_IDX] +
                                         p * MAXIMUM_CORES * sizeof(PoundWEntry_t));
        G_gppb_alt_cal[p] =  (PoundWEntry_AltCal_t*)((uint32_t)gppb_sram_offset +
                             (uint32_t)G_gppb_v1->offsets[DDS_ALT_CAL_OFFSET_IDX] +
                             p * MAXIMUM_CORES * sizeof(PoundWEntry_AltCal_t));
        G_gppb_tgt_act_bin[p] = (PoundWEntry_TgtActBin_t*)((uint32_t)gppb_sram_offset +
                                (uint32_t)G_gppb_v1->offsets[DDS_TGT_ACT_BIN_OFFSET_IDX] +
                                p * MAXIMUM_CORES * sizeof(PoundWEntry_TgtActBin_t));
    }

    G_gppb_dds_other = (PoundWOtherPadded_t*)((uint32_t)gppb_sram_offset + (uint32_t)
                       G_gppb_v1->offsets[DDS_OTHER_OFFSET_IDX]);
    G_gppb_vdd_cal = (vdd_calibration*)((uint32_t)gppb_sram_offset + (uint32_t)G_gppb_v1->offsets[DDS_VDD_CAL_OFFSET_IDX]);
    G_gppb_poundw_slopes = (PoundWSlopes_t*)((uint32_t)gppb_sram_offset + (uint32_t)
                           G_gppb_v1->offsets[POUNDW_SLOPES_OFFSET_IDX]);
    G_gppb_wof = (GlobalPstateParmBlockWOF_t*)((uint32_t)gppb_sram_offset + (uint32_t)G_gppb_v1->offsets[WOF_OFFSET_IDX]);
    G_gppb_wov = (GlobalPstateParmBlockWOV_t*)((uint32_t)gppb_sram_offset + (uint32_t)G_gppb_v1->offsets[WOV_OFFSET_IDX]);
    G_gppb_thr_ctrl  = (GlobalPstateParmBlockThr_t*)((uint32_t)gppb_sram_offset + (uint32_t)
                       G_gppb_v1->offsets[THR_OFFSET_IDX]);

    PK_TRACE_INF("GPB: GPB Sram Addr=0x%08x Magic=PSTATE_PARMSBLOCK_MAGIC_V1", (uint32_t)G_gppb_v1);
    PK_TRACE_INF("GPB: OCC Cmpl. Freq=%u(0x%x) Mhz", (uint32_t)G_gppb_base->occ_complex_frequency_mhz,
                 (uint32_t)G_gppb_base->occ_complex_frequency_mhz);
    PK_TRACE_INF("GPB: PGPE Flag SRAM Addr=0x%08x", (uint32_t)G_gppb_pgpe_flags);
    PK_TRACE_INF("GPB: base=0x%08x", (uint32_t)G_gppb_base);
    PK_TRACE_INF("GPB: avsbus=0x%08x", (uint32_t)G_gppb_avsbus);
    PK_TRACE_INF("GPB: vdd_sys=0x%08x", (uint32_t)G_gppb_vdd_sysparm);
    PK_TRACE_INF("GPB: vcs_sys=0x%08x", (uint32_t)G_gppb_vcs_sysparm);
    PK_TRACE_INF("GPB: vdn_sys=0x%08x", (uint32_t)G_gppb_vdn_sysparm);
    PK_TRACE_INF("GPB: ext_vrm=0x%08x", (uint32_t)G_gppb_ext_vrm_parms);
    PK_TRACE_INF("GPB: ops_pts [0]=0x%08x,[1]=0x%08x, sizeof(PoundVOpPoint_t)=0x%08x",
                 (uint32_t)G_gppb_operating_points_set[0], (uint32_t)G_gppb_operating_points_set[1],
                 sizeof(PoundVOpPoint_t));
    PK_TRACE_INF("GPB: poundv_slopes=0x%08x", (uint32_t)G_gppb_poundv_slopes);
    PK_TRACE_INF("GPB: resclk=0x%08x", (uint32_t)G_gppb_resclk);
    PK_TRACE_INF("GPB: dds_other=0x%08x", (uint32_t)G_gppb_dds_other);
    PK_TRACE_INF("GPB: wov=0x%08x", (uint32_t)G_gppb_wov);


#if GENERATE_HOMER_TABLES == 1
    //Fill out GeneratedPstateInfo structure
    PK_TRACE_INF("GPB: Pstate Table HOMER Addr=0x%08x", (uint32_t)pgpe_header_get(g_pgpe_genPsTableMemOffset));

    G_gpi_v1 = (GeneratedPstateInfo_v1_t*)pgpe_header_get(g_pgpe_genPsTableMemOffset);
    G_gpi_v1->magic = GEN_PSTATES_TBL_MAGIC_V1;
    G_gpi_v1->globalppb = *G_gppb_v1;
    G_gpi_v1->pstate0_frequency_khz = G_gppb_v1->base.reference_frequency_khz;
    G_gpi_v1->highest_pstate = G_gppb_v1->operating_points_set[VPD_PT_SET_BIASED][CF0].pstate;
    G_gpi_v1->pgpe_header  = *(pgpe_header_get_ptr());

    //Clear the IPE bit because we are about to do 1B and 2B operations to main memory
    uint32_t msr = mfmsr();
    mtmsr(msr & ~MSR_IPE);

    pgpe_gppb_raw_pstate_tbl((PstateTable_t*)(&G_gpi_v1->raw_pstates));
    pgpe_gppb_biased_pstate_tbl((PstateTable_t*)(&G_gpi_v1->biased_pstates));

    pgpe_gppb_occ_tbl();

    mtmsr(msr);//Restore MSR

#endif

}

//
//Generate Pstate Table
//
void pgpe_gppb_raw_pstate_tbl(PstateTable_t* tbl)
{
    uint32_t p;
    uint32_t freq_khz_offset = 0;

    uint32_t step_size;
    uint32_t max_ps;

    max_ps = G_gppb_v1->operating_points_set[VPD_PT_SET_RAW][CF0].pstate;
    step_size = G_gppb_v1->base.frequency_step_khz;

    PK_TRACE_INF("GPB: Generating Raw Pstate Tbl, HOMER Addr=0x%08x, max_ps=%u(0x%x)", (uint32_t)tbl, max_ps, max_ps);

    for (p = 0; p <= max_ps; p++)
    {
        tbl[p].pstate = p;
        tbl[p].frequency_mhz = (G_gppb_v1->base.reference_frequency_khz - freq_khz_offset) / 1000;
        tbl[p].external_vdd_mv = pgpe_pstate_intp_vdd_from_ps(p, VPD_PT_SET_RAW);
        tbl[p].effective_vdd_mv = pgpe_pstate_intp_vdd_from_ps(p, VPD_PT_SET_RAW);
        freq_khz_offset += step_size;
        //\TODO Need Update spec as to what else needs to be in here
    }

}

void pgpe_gppb_biased_pstate_tbl(PstateTable_t* tbl)
{
    uint32_t p;
    uint32_t freq_khz_offset = 0;
    uint32_t step_size;
    uint32_t max_ps;

    max_ps = G_gppb_v1->operating_points_set[VPD_PT_SET_BIASED][CF0].pstate;
    step_size = G_gppb_v1->base.frequency_step_khz;

    PK_TRACE_INF("GPB: Generating Biased Pstate Tbl, HOMER Addr=0x%08x, max_ps=%u(0x%x)", (uint32_t)tbl, max_ps, max_ps);

    for (p = 0; p <= max_ps; p++)
    {
        tbl[p].pstate = p;
        tbl[p].frequency_mhz = (G_gppb_v1->base.reference_frequency_khz - freq_khz_offset) / 1000;
        tbl[p].external_vdd_mv = pgpe_pstate_intp_vdd_from_ps(p, VPD_PT_SET_BIASED);
        tbl[p].effective_vdd_mv = pgpe_pstate_intp_vdd_from_ps(p, VPD_PT_SET_BIASED);
        freq_khz_offset += step_size;
        //\TODO Need Update spec as to what else needs to be in here
    }
}
//
//Generate OCC Table
//
void pgpe_gppb_occ_tbl()
{
    int p;

    OCCPstateTable_t* opst = (OCCPstateTable_t*)pgpe_header_get(g_pgpe_opspbTableAddress);
    opst->entries = pgpe_header_get(g_pgpe_opspbTableLength) / sizeof(OCCPstateTable_entry_t);

    PK_TRACE_INF("GPB: Generating OCC Tbl, Addr=0x%08x", (uint32_t)opst);

    for (p = 0; p < opst->entries; p++)
    {
        opst->table[p].pstate = G_gpi_v1->biased_pstates[p].pstate;
        opst->table[p].frequency_mhz = G_gpi_v1->biased_pstates[p].frequency_mhz ;

        //\TODO Need Update spec as to what else needs to be in here
    }

}
void pgpe_gppb_set_pgpe_flags_disable(uint32_t x)
{
    G_gppb_pgpe_flags[x] = 0;
}
