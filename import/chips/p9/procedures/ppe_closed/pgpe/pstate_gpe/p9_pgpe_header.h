/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_header.h $ */
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
#ifndef _P9_PGPE_HEADER_H_
#define _P9_PGPE_HEADER_H_

#include "pk.h"


//
//\todo RTC: 164335 Use the structure from p9_hcode_image_defines.H
//when it's updated
typedef struct
{
    uint32_t  g_pgpe_magic_number[2];         // PGPE_1.0
    uint32_t* g_pgpe_sys_reset_addr;          // Fully qualified OCC address where pk_init resides
    uint32_t* g_pgpe_shared_sram_addr;        // SRAM address where shared SRAM begins
    uint32_t* g_pgpe_ivpr_addr;               // Beginning of PGPE region in OCC SRAM
    uint32_t  g_pgpe_shared_sram_len;         // Length of shared SRAM area
    uint32_t  g_pgpe_build_date;              // Build date for PGPE Image
    uint32_t  g_pgpe_build_ver;               // Build Version
    uint16_t  g_pgpe_qm_flags;                // QM Flags
    uint16_t  g_pgpe_reserve1;                // Reserve field
    uint32_t  g_pgpe_reserve2;                // Reserve field
    uint32_t* g_pgpe_gppb_sram_addr;          // Offset to Global P State Parameter Block
    uint32_t  g_pgpe_hcode_length;            // Length of PGPE Hcode
    uint32_t* g_pgpe_gppb_mem_offset;         // Offset to start of Global PS Param Block wrt start of HOMER.
    uint32_t  g_pgpe_gppb_length;             // Length of Global P State Parameter Block
    uint32_t* g_pgpe_gen_pstables_mem_offset; // Offset to PState Table wrt start of HOMER
    uint32_t  g_pgpe_gen_pstables_length;     // Length of P State table
    uint32_t* g_pgpe_occ_pstables_sram_addr;  // Offset to start of OCC P-State table
    uint32_t  g_pgpe_occ_pstables_len;        // Length of OCC P-State table
    uint32_t* g_pgpe_beacon_addr;             // SRAM addr where PGPE beacon is located
    uint32_t* g_quad_status_addr;             // Actual Quad address
    uint32_t* g_pgpe_wof_state_addr;          //
    uint32_t* g_req_active_quad_addr;         //Requested Active Quads Address
    uint32_t* g_wof_table_addr;               // WOF Table Address
    uint32_t  g_wof_table_length;             // WOF Table Length
} PgpeHeader_t;

void p9_pgpe_header_init();
void p9_pgpe_header_fill();

#endif //_P9_PGPE_HEADER_H_
