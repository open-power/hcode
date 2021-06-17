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

GlobalPstateParmBlock_t* G_gppb;
GlobalPstateParmBlock_v1_t* G_gppb_v1;
GeneratedPstateInfo_t* G_gpi;
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
PoundWEntry_t*       G_gppb_dds[MAXIMUM_CORES];
PoundWEntry_AltCal_t* G_gppb_alt_cal[MAXIMUM_CORES];
PoundWEntry_TgtActBin_t* G_gppb_tgt_act_bin[MAXIMUM_CORES];
PoundWOtherPadded_t*           G_gppb_dds_other;
vdd_calibration*         G_gppb_vdd_cal;
PoundWSlopes_t*          G_gppb_poundw_slopes;
GlobalPstateParmBlockWOF_t* G_gppb_wof;
GlobalPstateParmBlockWOV_t* G_gppb_wov;

//
//
//
void pgpe_gppb_init()
{
    PK_TRACE_INF("GPB: Init");

    uint32_t p, c;
    void* gppb_sram_offset = (void*)pgpe_header_get(g_pgpe_gpspbSramAddress);//GPB Sram Offset
    G_gppb = (GlobalPstateParmBlock_t*)gppb_sram_offset;

    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC_V1)
    {
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

        for (c = 0; c < MAXIMUM_CORES; c++)
        {
            G_gppb_dds[c] = (PoundWEntry_t*)((uint32_t)gppb_sram_offset +
                                             (uint32_t)G_gppb_v1->offsets[DDS_OFFSET_IDX] +
                                             c * NUM_PV_POINTS * sizeof(PoundWEntry_t));
            G_gppb_alt_cal[c] =  (PoundWEntry_AltCal_t*)((uint32_t)gppb_sram_offset +
                                 (uint32_t)G_gppb_v1->offsets[DDS_ALT_CAL_OFFSET_IDX] +
                                 c * NUM_PV_POINTS * sizeof(PoundWEntry_AltCal_t));
            G_gppb_tgt_act_bin[c] = (PoundWEntry_TgtActBin_t*)((uint32_t)gppb_sram_offset +
                                    (uint32_t)G_gppb_v1->offsets[DDS_TGT_ACT_BIN_OFFSET_IDX] +
                                    c * NUM_PV_POINTS * sizeof(PoundWEntry_TgtActBin_t));
        }

        G_gppb_dds_other = (PoundWOtherPadded_t*)((uint32_t)gppb_sram_offset + (uint32_t)
                           G_gppb_v1->offsets[DDS_OTHER_OFFSET_IDX]);
        G_gppb_vdd_cal = (vdd_calibration*)((uint32_t)gppb_sram_offset + (uint32_t)G_gppb_v1->offsets[DDS_VDD_CAL_OFFSET_IDX]);
        G_gppb_poundw_slopes = (PoundWSlopes_t*)((uint32_t)gppb_sram_offset + (uint32_t)
                               G_gppb_v1->offsets[POUNDW_SLOPES_OFFSET_IDX]);
        G_gppb_wof = (GlobalPstateParmBlockWOF_t*)((uint32_t)gppb_sram_offset + (uint32_t)G_gppb_v1->offsets[WOF_OFFSET_IDX]);
        G_gppb_wov = (GlobalPstateParmBlockWOV_t*)((uint32_t)gppb_sram_offset + (uint32_t)G_gppb_v1->offsets[WOV_OFFSET_IDX]);

        PK_TRACE_INF("GPB: GPB Sram Addr=0x%08x Magic=PSTATE_PARMSBLOCK_MAGIC_V1", (uint32_t)G_gppb_v1);
        PK_TRACE_INF("GPB: OCC Cmpl. Freq=%u(0x%x) Mhz", (uint32_t)G_gppb_base->occ_complex_frequency_mhz,
                     (uint32_t)G_gppb->occ_complex_frequency_mhz);
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
    }
    else
    {
        PK_TRACE_INF("GPB: GPB Sram Addr=0x%08x Magic=PSTATE_PARMSBLOCK_MAGIC_V0", (uint32_t)G_gppb);
        PK_TRACE("GPB: OCC Cmpl. Freq=%u(0x%x) Mhz", (uint32_t)G_gppb->occ_complex_frequency_mhz,
                 (uint32_t)G_gppb->occ_complex_frequency_mhz);
        PK_TRACE("GPB: PGPE Flag SRAM Addr=0x%08x", (uint32_t)&G_gppb->pgpe_flags);
    }

#if GENERATE_HOMER_TABLES == 1
    //Fill out GeneratedPstateInfo structure
    PK_TRACE_INF("GPB: Pstate Table HOMER Addr=0x%08x", (uint32_t)pgpe_header_get(g_pgpe_genPsTableMemOffset));

    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC_V1)
    {
        G_gpi_v1 = (GeneratedPstateInfo_v1_t*)pgpe_header_get(g_pgpe_genPsTableMemOffset);
        G_gpi_v1->magic = GEN_PSTATES_TBL_MAGIC_V1;
        G_gpi_v1->globalppb = *G_gppb_v1;
        G_gpi_v1->pstate0_frequency_khz = G_gppb_v1->base.reference_frequency_khz;
        G_gpi_v1->highest_pstate = G_gppb_v1->operating_points_set[VPD_PT_SET_BIASED][CF0].pstate;
        G_gpi_v1->pgpe_header  = *(pgpe_header_get_ptr());
    }
    else
    {
        G_gpi = (GeneratedPstateInfo_t*)pgpe_header_get(g_pgpe_genPsTableMemOffset);
        G_gpi->magic = GEN_PSTATES_TBL_MAGIC;
        G_gpi->globalppb = *G_gppb;
        G_gpi->pstate0_frequency_khz = G_gppb->reference_frequency_khz;
        G_gpi->highest_pstate = G_gppb->operating_points_set[VPD_PT_SET_BIASED][CF0].pstate;
        G_gpi->pgpe_header  = *(pgpe_header_get_ptr());
    }

    //Clear the IPE bit because we are about to do 1B and 2B operations to main memory
    uint32_t msr = mfmsr();
    mtmsr(msr & ~MSR_IPE);

    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC_V1)
    {
        pgpe_gppb_raw_pstate_tbl((PstateTable_t*)(&G_gpi_v1->raw_pstates));
        pgpe_gppb_biased_pstate_tbl((PstateTable_t*)(&G_gpi_v1->biased_pstates));
    }
    else
    {
        pgpe_gppb_raw_pstate_tbl((PstateTable_t*)(&G_gpi->raw_pstates));
        pgpe_gppb_biased_pstate_tbl((PstateTable_t*)(&G_gpi->biased_pstates));
    }

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

    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC_V1)
    {
        max_ps = G_gppb_v1->operating_points_set[VPD_PT_SET_RAW][CF0].pstate;
        step_size = G_gppb_v1->base.frequency_step_khz;
    }
    else
    {
        max_ps = G_gppb->operating_points_set[VPD_PT_SET_RAW][CF0].pstate;
        step_size = G_gppb->frequency_step_khz;
    }

    PK_TRACE_INF("GPB: Generating Raw Pstate Tbl, HOMER Addr=0x%08x, max_ps=%u(0x%x)", (uint32_t)tbl, max_ps, max_ps);

    for (p = 0; p <= max_ps; p++)
    {
        tbl[p].pstate = p;

        if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC_V1)
        {
            tbl[p].frequency_mhz = (G_gppb_v1->base.reference_frequency_khz - freq_khz_offset) / 1000;
        }
        else
        {
            tbl[p].frequency_mhz = (G_gppb->reference_frequency_khz - freq_khz_offset) / 1000;
        }

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

    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC_V1)
    {
        max_ps = G_gppb_v1->operating_points_set[VPD_PT_SET_BIASED][CF0].pstate;
        step_size = G_gppb_v1->base.frequency_step_khz;
    }
    else
    {
        max_ps = G_gppb->operating_points_set[VPD_PT_SET_BIASED][CF0].pstate;
        step_size = G_gppb->frequency_step_khz;
    }


    PK_TRACE_INF("GPB: Generating Biased Pstate Tbl, HOMER Addr=0x%08x, max_ps=%u(0x%x)", (uint32_t)tbl, max_ps, max_ps);

    for (p = 0; p <= max_ps; p++)
    {
        tbl[p].pstate = p;

        if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC_V1)
        {
            tbl[p].frequency_mhz = (G_gppb_v1->base.reference_frequency_khz - freq_khz_offset) / 1000;
        }
        else
        {
            tbl[p].frequency_mhz = (G_gppb->reference_frequency_khz - freq_khz_offset) / 1000;
        }

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
        if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC_V1)
        {
            opst->table[p].pstate = G_gpi_v1->biased_pstates[p].pstate;
            opst->table[p].frequency_mhz = G_gpi_v1->biased_pstates[p].frequency_mhz ;
        }
        else
        {
            opst->table[p].pstate = G_gpi->biased_pstates[p].pstate;
            opst->table[p].frequency_mhz = G_gpi->biased_pstates[p].frequency_mhz ;
        }

        //\TODO Need Update spec as to what else needs to be in here
    }

}
void pgpe_gppb_set_pgpe_flags_disable(uint32_t x)
{
    G_gppb->pgpe_flags[x] = 0;
}

uint32_t pgpe_gppb_get_pgpe_flags(uint32_t x)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->pgpe_flags[x];
    }
    else
    {
        return G_gppb_pgpe_flags[x];
    }
}

uint32_t pgpe_gppb_get_reference_frequency()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->reference_frequency_khz;
    }
    else
    {
        return G_gppb_base->reference_frequency_khz;
    }
}

uint32_t pgpe_gppb_get_frequency_step()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->frequency_step_khz;
    }
    else
    {
        return G_gppb_base->frequency_step_khz;
    }
}
uint32_t pgpe_gppb_get_occ_complex_frequency_mhz()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->occ_complex_frequency_mhz;
    }
    else
    {
        return G_gppb_base->occ_complex_frequency_mhz;
    }
}

uint32_t pgpe_gppb_get_dpll_pstate0_value()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->dpll_pstate0_value;
    }
    else
    {
        return G_gppb_base->dpll_pstate0_value;
    }
}

uint32_t pgpe_gppb_get_safe_frequency()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->safe_frequency_khz;
    }
    else
    {
        return G_gppb_base->safe_frequency_khz;
    }
}

uint32_t pgpe_gppb_get_ceiling_frequency()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->frequency_ceiling_khz;
    }
    else
    {
        return G_gppb_base->frequency_ceiling_khz;
    }
}
uint32_t pgpe_gppb_get_safe_voltage_mv(uint32_t idx)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->safe_voltage_mv[idx];
    }
    else
    {
        return G_gppb_base->safe_voltage_mv[idx];
    }
}

uint32_t pgpe_gppb_get_safe_throttle_idx()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->safe_throttle_idx;
    }
    else
    {
        return G_gppb_base->safe_throttle_idx;
    }
}

uint16_t pgpe_gppb_get_vcs_vdd_offset_mv()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->vcs_vdd_offset_mv;
    }
    else
    {
        return G_gppb_base->vcs_vdd_offset_mv;
    }
}

uint16_t pgpe_gppb_get_vcs_floor_mv()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->vcs_floor_mv;
    }
    else
    {
        return G_gppb_base->vcs_floor_mv;
    }
}

uint16_t pgpe_gppb_get_array_write_vdn_mv()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->array_write_vdn_mv;
    }
    else
    {
        return G_gppb_base->array_write_vdn_mv;
    }
}

uint16_t pgpe_gppb_get_array_write_vdd_mv()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->array_write_vdd_mv;
    }
    else
    {
        return G_gppb_base->array_write_vdd_mv;
    }
}

uint32_t pgpe_gppb_get_rvrm_deadzone_mv()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->rvrm_deadzone_mv;
    }
    else
    {
        return G_gppb_base->rvrm_deadzone_mv;
    }
}

uint8_t pgpe_gppb_get_avs_bus_topology_vdd_avsbus_num()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->avs_bus_topology.vdd_avsbus_num;
    }
    else
    {
        return G_gppb_avsbus->vdd_avsbus_num;
    }
}
uint8_t pgpe_gppb_get_avs_bus_topology_vdd_avsbus_rail()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->avs_bus_topology.vdd_avsbus_rail;
    }
    else
    {
        return G_gppb_avsbus->vdd_avsbus_rail;
    }
}
uint8_t pgpe_gppb_get_avs_bus_topology_vdn_avsbus_num()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->avs_bus_topology.vdn_avsbus_num;
    }
    else
    {
        return G_gppb_avsbus->vdn_avsbus_num;
    }
}
uint8_t pgpe_gppb_get_avs_bus_topology_vdn_avsbus_rail()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->avs_bus_topology.vdn_avsbus_rail;
    }
    else
    {
        return G_gppb_avsbus->vdn_avsbus_rail;
    }
}
uint8_t pgpe_gppb_get_avs_bus_topology_vcs_avsbus_num()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->avs_bus_topology.vcs_avsbus_num;
    }
    else
    {
        return G_gppb_avsbus->vcs_avsbus_num;
    }
}
uint8_t pgpe_gppb_get_avs_bus_topology_vcs_avsbus_rail()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->avs_bus_topology.vcs_avsbus_rail;
    }
    else
    {
        return G_gppb_avsbus->vcs_avsbus_rail;
    }
}
uint32_t pgpe_gppb_get_vdd_sysparm_loadline()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->vdd_sysparm.loadline_uohm;
    }
    else
    {
        return G_gppb_vdd_sysparm->loadline_uohm;
    }
}
uint32_t pgpe_gppb_get_vdd_sysparm_distloss()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->vdd_sysparm.distloss_uohm;
    }
    else
    {
        return G_gppb_vdd_sysparm->distloss_uohm;
    }
}
uint32_t pgpe_gppb_get_vdd_sysparm_distoffset()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->vdd_sysparm.distoffset_uv;
    }
    else
    {
        return G_gppb_vdd_sysparm->distoffset_uv;
    }
}
uint32_t pgpe_gppb_get_vcs_sysparm_loadline()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->vcs_sysparm.loadline_uohm;
    }
    else
    {
        return G_gppb_vcs_sysparm->loadline_uohm;
    }
}
uint32_t pgpe_gppb_get_vcs_sysparm_distloss()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->vcs_sysparm.distloss_uohm;
    }
    else
    {
        return G_gppb_vcs_sysparm->distloss_uohm;
    }
}
uint32_t pgpe_gppb_get_vcs_sysparm_distoffset()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->vcs_sysparm.distoffset_uv;
    }
    else
    {
        return G_gppb_vcs_sysparm->distoffset_uv;
    }
}
uint32_t pgpe_gppb_get_ext_vrm_parms_transition_start_ns(uint32_t rail)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->ext_vrm_parms.transition_start_ns[rail];
    }
    else
    {
        return G_gppb_ext_vrm_parms->transition_start_ns[rail];
    }
}

uint32_t pgpe_gppb_get_ext_vrm_parms_transition_rate_inc_uv_per_us(uint32_t rail)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->ext_vrm_parms.transition_rate_inc_uv_per_us[rail];
    }
    else
    {
        return G_gppb_ext_vrm_parms->transition_rate_inc_uv_per_us[rail];
    }
}

uint32_t pgpe_gppb_get_ext_vrm_parms_transition_rate_dec_uv_per_us(uint32_t rail)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->ext_vrm_parms.transition_rate_dec_uv_per_us[rail];
    }
    else
    {
        return G_gppb_ext_vrm_parms->transition_rate_dec_uv_per_us[rail];
    }
}

uint32_t pgpe_gppb_get_ext_vrm_parms_stabilization_time_us(uint32_t rail)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->ext_vrm_parms.stabilization_time_us[rail];
    }
    else
    {
        return G_gppb_ext_vrm_parms->stabilization_time_us[rail];
    }
}

uint32_t pgpe_gppb_get_ext_vrm_parms_step_size_mv(uint32_t rail)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->ext_vrm_parms.step_size_mv[rail];
    }
    else
    {
        return G_gppb_ext_vrm_parms->step_size_mv[rail];
    }
}

uint32_t pgpe_gppb_get_current_scale_factor(uint32_t rail)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->current_scaling_factor[rail];
    }
    else
    {
        return G_gppb_ext_vrm_parms->current_scaling_factor[rail];
    }
}


//#PoundV
uint32_t pgpe_gppb_get_ops_ps(uint32_t pt_set, uint32_t idx)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->operating_points_set[pt_set][idx].pstate;
    }
    else
    {
        return G_gppb_operating_points_set[pt_set][idx].pstate;
    }
}
uint32_t pgpe_gppb_get_ops_vdd(uint32_t pt_set, uint32_t idx)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->operating_points_set[pt_set][idx].vdd_mv;
    }
    else
    {
        return G_gppb_operating_points_set[pt_set][idx].vdd_mv;
    }
}

uint32_t pgpe_gppb_get_ops_vcs(uint32_t pt_set, uint32_t idx)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return  G_gppb->operating_points_set[pt_set][idx].vcs_mv;
    }
    else
    {
        return   G_gppb_operating_points_set[pt_set][idx].vcs_mv;
    }
}

uint32_t pgpe_gppb_get_ops_idd_ac(uint32_t pt_set, uint32_t idx)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return  G_gppb->operating_points_set[pt_set][idx].idd_tdp_ac_10ma;
    }
    else
    {
        return   G_gppb_operating_points_set[pt_set][idx].idd_tdp_ac_10ma;
    }
}

uint32_t pgpe_gppb_get_ops_idd_dc(uint32_t pt_set, uint32_t idx)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return  G_gppb->operating_points_set[pt_set][idx].idd_tdp_dc_10ma;
    }
    else
    {
        return   G_gppb_operating_points_set[pt_set][idx].idd_tdp_dc_10ma;
    }
}

uint32_t pgpe_gppb_get_ops_ics_ac(uint32_t pt_set, uint32_t idx)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return  G_gppb->operating_points_set[pt_set][idx].ics_tdp_ac_10ma;
    }
    else
    {
        return   G_gppb_operating_points_set[pt_set][idx].ics_tdp_ac_10ma;
    }
}

uint32_t pgpe_gppb_get_ops_ics_dc(uint32_t pt_set, uint32_t idx)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return  G_gppb->operating_points_set[pt_set][idx].ics_tdp_dc_10ma;
    }
    else
    {
        return   G_gppb_operating_points_set[pt_set][idx].ics_tdp_dc_10ma;
    }
}

uint16_t pgpe_gppb_get_psv_slope(uint32_t rail, uint32_t pt_set, uint32_t region)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return  G_gppb->ps_voltage_slopes[rail][pt_set][region];
    }
    else
    {
        return  G_gppb_poundv_slopes->ps_voltage_slopes[rail][pt_set][region];
    }
}
uint16_t pgpe_gppb_get_vps_slope(uint32_t rail, uint32_t pt_set, uint32_t region)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return  G_gppb->voltage_ps_slopes[rail][pt_set][region];
    }
    else
    {
        return  G_gppb_poundv_slopes->voltage_ps_slopes[rail][pt_set][region];
    }
}
uint16_t pgpe_gppb_get_ps_iac_slope(uint32_t rail, uint32_t pt_set, uint32_t region)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return  G_gppb->ps_ac_current_tdp[rail][pt_set][region];
    }
    else
    {
        return  G_gppb_poundv_slopes->ps_ac_current_tdp[rail][pt_set][region];
    }
}

uint16_t pgpe_gppb_get_ps_idc_slope(uint32_t rail, uint32_t pt_set, uint32_t region)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return  G_gppb->ps_dc_current_tdp[rail][pt_set][region];
    }
    else
    {
        return  G_gppb_poundv_slopes->ps_dc_current_tdp[rail][pt_set][region];
    }
}

uint16_t pgpe_gppb_get_iac_ps_slope(uint32_t rail, uint32_t pt_set, uint32_t region)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return  G_gppb->ac_current_ps_tdp[rail][pt_set][region];
    }
    else
    {
        return  G_gppb_poundv_slopes->ac_current_ps_tdp[rail][pt_set][region];
    }
}

uint16_t pgpe_gppb_get_idc_ps_slope(uint32_t rail, uint32_t pt_set, uint32_t region)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return  G_gppb->ac_current_ps_tdp[rail][pt_set][region];
    }
    else
    {
        return  G_gppb_poundv_slopes->ac_current_ps_tdp[rail][pt_set][region];
    }
}


//WOV
uint8_t pgpe_gppb_get_wov_underv_perf_loss_thresh_pct()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->wov_underv_perf_loss_thresh_pct;
    }
    else
    {
        return G_gppb_wov->wov_underv_perf_loss_thresh_pct;
    }
}
uint8_t pgpe_gppb_get_wov_underv_step_incr_pct()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->wov_underv_step_incr_pct;
    }
    else
    {
        return G_gppb_wov->wov_underv_step_incr_pct;
    }
}
uint8_t pgpe_gppb_get_wov_underv_step_decr_pct()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->wov_underv_step_decr_pct;
    }
    else
    {
        return G_gppb_wov->wov_underv_step_decr_pct;
    }
}
uint8_t pgpe_gppb_get_wov_underv_max_pct()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->wov_underv_max_pct;
    }
    else
    {
        return G_gppb_wov->wov_underv_max_pct;
    }
}
uint8_t pgpe_gppb_get_wov_underv_vmin_mv()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->wov_underv_vmin_mv;
    }
    else
    {
        return G_gppb_wov->wov_underv_vmin_mv;
    }
}
uint8_t pgpe_gppb_get_wov_overv_vmax_mv()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->wov_overv_vmax_mv;
    }
    else
    {
        return G_gppb_wov->wov_overv_vmax_mv;
    }
}
uint8_t pgpe_gppb_get_wov_overv_step_incr_pct()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->wov_overv_step_incr_pct;
    }
    else
    {
        return G_gppb_wov->wov_overv_step_incr_pct;
    }
}
uint8_t pgpe_gppb_get_wov_overv_step_decr_pct()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->wov_overv_step_decr_pct;
    }
    else
    {
        return G_gppb_wov->wov_overv_step_decr_pct;
    }
}
uint8_t pgpe_gppb_get_wov_overv_max_pct()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->wov_overv_max_pct;
    }
    else
    {
        return G_gppb_wov->wov_overv_max_pct;
    }
}

uint16_t pgpe_gppb_get_wov_idd_thresh()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->wov_idd_thresh;
    }
    else
    {
        return G_gppb_wov->wov_idd_thresh;
    }
}

uint16_t pgpe_gppb_get_wov_dirty_undercurr_control(uint32_t droop_level)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->wov_dirty_undercurr_control[droop_level];
    }
    else
    {
        return G_gppb_wov->wov_dirty_undercurr_control[droop_level];
    }
}

uint16_t pgpe_gppb_get_dds_delay_ps_slope(uint32_t pt_set, uint32_t core, uint32_t region)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->ps_dds_delay_slopes[pt_set][core][region];
    }
    else
    {
        return G_gppb_poundw_slopes->ps_dds_delay_slopes[pt_set][core][region];
    }
}

uint8_t pgpe_gppb_get_dds_trip_ps_slope(uint32_t pt_set, uint32_t core, uint32_t region)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->ps_dds_slopes[TRIP_OFFSET][pt_set][core][region];
    }
    else
    {
        return G_gppb_poundw_slopes->ps_dds_slopes[TRIP_OFFSET][pt_set][core][region];
    }
}

uint8_t pgpe_gppb_get_dds_large_ps_slope(uint32_t pt_set, uint32_t core, uint32_t region)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->ps_dds_slopes[LARGE_DROOP_DETECT][pt_set][core][region];
    }
    else
    {
        return G_gppb_poundw_slopes->ps_dds_slopes[LARGE_DROOP_DETECT][pt_set][core][region];
    }
}
uint32_t pgpe_gppb_get_dds_delay(uint32_t core, uint32_t idx)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->dds[idx][core].ddsc.fields.insrtn_dely;
    }
    else
    {
        return G_gppb_dds[idx][core].ddsc.fields.insrtn_dely;

    }
}
uint32_t pgpe_gppb_get_dds_trip(uint32_t core, uint32_t idx)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->dds[idx][core].ddsc.fields.trip_offset;
    }
    else
    {
        return G_gppb_dds[idx][core].ddsc.fields.trip_offset;

    }
}
uint32_t pgpe_gppb_get_dds_large(uint32_t core, uint32_t idx)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->dds[idx][core].ddsc.fields.large_droop;
    }
    else
    {
        return G_gppb_dds[idx][core].ddsc.fields.large_droop;

    }
}
uint32_t pgpe_gppb_get_dds_cal_adj(uint32_t core, uint32_t idx)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->dds[idx][core].ddsc.fields.calb_adj;
    }
    else
    {
        return G_gppb_dds[idx][core].ddsc.fields.calb_adj;

    }
}

uint64_t pgpe_gppb_get_dds_other_droop_count_control()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->dds_other.droop_count_control;
    }
    else
    {
        return G_gppb_dds_other->droop_count_control;
    }
}

uint64_t pgpe_gppb_get_dds_other_ftc_large_droop_mode_reg_setting()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->dds_other.ftc_large_droop_mode_reg_setting;
    }
    else
    {
        return G_gppb_dds_other->ftc_large_droop_mode_reg_setting;
    }
}

uint64_t pgpe_gppb_get_dds_other_ftc_misc_droop_mode_reg_setting()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->dds_other.ftc_misc_droop_mode_reg_setting;
    }
    else
    {
        return G_gppb_dds_other->ftc_misc_droop_mode_reg_setting;
    }

}

uint32_t pgpe_gppb_get_dds_trip_mode()
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->pgpe_flags[PGPE_FLAG_TRIP_MODE];
    }
    else
    {
        return G_gppb_pgpe_flags[PGPE_FLAG_TRIP_MODE];
    }
}
uint32_t pgpe_gppb_get_dds_trip_intp_ctrl(uint32_t x)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->pgpe_flags[PGPE_FLAG_TRIP_INTERPOLATION_CONTROL] & (x);
    }
    else
    {
        return G_gppb_pgpe_flags[PGPE_FLAG_TRIP_INTERPOLATION_CONTROL] & (x);
    }
}

uint32_t pgpe_gppb_get_vratio_vdd(uint32_t idx)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->vratio_vdd_64ths[idx];
    }
    else
    {
        return  G_gppb_wof->vratio_vdd_64ths[idx]; //To be fixed when restructuring
    }
}
uint32_t pgpe_gppb_get_vratio_vcs(uint32_t idx)
{
    if(G_gppb->magic.value == PSTATE_PARMSBLOCK_MAGIC)
    {
        return G_gppb->vratio_vcs_64ths[idx];
    }
    else
    {
        return  G_gppb_wof->vratio_vcs_64ths[idx];; //To be fixed when restructuring
    }
}
