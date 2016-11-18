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
//
typedef struct pgpe_header_data
{
    uint32_t magic_number[2];
    uint32_t* _system_reset_addr;
    uint32_t* shared_sram_addr;
    uint32_t* IVPR_address;
    uint32_t shared_sram_length;
    uint32_t build_date;
    uint32_t version;
    uint16_t pgpeflags;
    uint16_t reserved0[3];
    uint32_t* gppb_sram_addr;
    uint32_t reserved1;
    uint32_t* gppb_memory_offset;
    uint32_t gppb_block_length;
    uint32_t* pstate_tbl_mem_offset;
    uint32_t pstate_tbl_length;
    uint32_t* occ_pstate_tbl_addr;
    uint32_t occ_pstate_tbl_length;
    uint32_t* pgpe_beacon;
    uint32_t* actual_quad_status_addr;
    uint32_t* wof_tbl_addr;
    uint32_t wof_tbl_lengh;
} pgpe_header_data_t;

void p9_pgpe_header_init();

#endif //_P9_PGPE_HEADER_H_
