/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_header.h $          */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2020                                                    */
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
#ifndef _PGPE_HEADER_H_
#define _PGPE_HEADER_H_

#include "pgpe.h"

#define OCC_SHARED_SRAM_ADDR_START \
    (OCC_SRAM_PGPE_BASE_ADDR + OCC_SRAM_PGPE_REGION_SIZE - PGPE_OCC_SHARED_SRAM_SIZE)

//\todo use the common definition in the hwplib/pm
typedef struct pgpe_header
{
    uint64_t g_pgpe_magic_number;
    uint32_t g_pgpe_sys_reset_addr;
    uint32_t g_pgpe_shared_sram_addr;
    uint32_t g_pgpe_ivpr_address;
    uint32_t g_pgpe_shared_sram_len;
    uint32_t g_pgpe_build_date;
    uint32_t g_pgpe_version;
    uint16_t g_pgpe_flags;
    uint16_t reserved;
    uint32_t g_pgpe_timebase_hz;
    uint32_t g_pgpe_gppb_sram_addr;
    uint32_t g_pgpe_hcode_length;
    uint32_t g_pgpe_gppb_mem_offset;
    uint32_t g_pgpe_gppb_length;
    uint32_t g_pgpe_occ_pstables_sram_addr;
    uint32_t g_pgpe_occ_pstables_len;
    uint32_t g_pgpe_beacon_addr;
    uint32_t reserved1;
    uint32_t g_wof_state_addr;
    uint32_t reserved2; //Not adding rest of fields as in future will use the common struct
} pgpe_header_t;

extern pgpe_header_t* G_pgpe_header_data;

//
//  pgpe_header_init
//
//  This function is called during PGPE boot to initialize
//  pointer to PgpeImageHeader, and also fill some values in
//  PgpeImageHeader
//
void pgpe_header_init();

#define pgpe_header_get(x) G_pgpe_header_data->x

#endif //_PGPE_HEADER_H_
