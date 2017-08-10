/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_header.c $ */
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
#include "p9_pgpe_header.h"
#include "pstate_pgpe_occ_api.h"

// @todo The PGPE start and the length needs to come from the occ_sram_layout.h
#define OCC_PGPE_SRAM_ADDR_START 0xfff20000
#define OCC_PGPE_SRAM_SIZE       0xC000      // 48KB

//OCC Shared SRAM starts at bottom 2K of PGPE OCC SRAM space
#define OCC_SHARED_SRAM_ADDR_LENGTH 2*1024
#define OCC_SHARED_SRAM_ADDR_START \
    (OCC_PGPE_SRAM_ADDR_START + OCC_PGPE_SRAM_SIZE - OCC_SHARED_SRAM_ADDR_LENGTH)

PgpeHeader_t* G_pgpe_header_data;
extern PgpeHeader_t* _PGPE_IMG_HEADER __attribute__ ((section (".pgpe_image_header")));

//
//Set the pgpe_header_data struct to point to PGPE HEADER in SRAM
//
//
void p9_pgpe_header_init()
{
    PK_TRACE_DBG("INIT: PGPE Header Init");

    uint32_t i;
    G_pgpe_header_data = (PgpeHeader_t*)&_PGPE_IMG_HEADER;

    HcodeOCCSharedData_t* occ_shared_data = (HcodeOCCSharedData_t*)
                                            OCC_SHARED_SRAM_ADDR_START; //Bottom 2K of PGPE OCC Sram Space

    //OCC Shared SRAM address and length
    G_pgpe_header_data->g_pgpe_shared_sram_addr = (uint32_t*)OCC_SHARED_SRAM_ADDR_START;
    G_pgpe_header_data->g_pgpe_shared_sram_len = OCC_SHARED_SRAM_ADDR_LENGTH;

    //OCC Pstate Tables SRAM address and length
    uint64_t* occ_shared_data_indx = (uint64_t*)OCC_SHARED_SRAM_ADDR_START;

    for (i = 0; i < OCC_SHARED_SRAM_ADDR_LENGTH / sizeof(uint64_t); ++i)
    {
        *occ_shared_data_indx = 0;
        occ_shared_data_indx++;
    }

    G_pgpe_header_data->g_pgpe_occ_pstables_sram_addr = (uint32_t*)
            &occ_shared_data->pstate_table; //OCC Pstate table address
    G_pgpe_header_data->g_pgpe_occ_pstables_len  = sizeof(OCCPstateTable_t); //OCC Pstate table length

    G_pgpe_header_data->g_pgpe_beacon_addr = (uint32_t*)&occ_shared_data->pgpe_beacon;//Beacon
    G_pgpe_header_data->g_quad_status_addr = (uint32_t*)&occ_shared_data->quad_pstate_0;//Quad Pstate

    //GPPB Sram Offset
    G_pgpe_header_data->g_pgpe_gppb_sram_addr = (uint32_t*)(OCC_PGPE_SRAM_ADDR_START +
            G_pgpe_header_data->g_pgpe_hcode_length);

    G_pgpe_header_data->g_pgpe_wof_state_addr = (uint32_t*)&occ_shared_data->pgpe_wof_state;//Wof State
    G_pgpe_header_data->g_req_active_quad_addr = (uint32_t*)&occ_shared_data->req_active_quads;//Requested Active Quads

}
