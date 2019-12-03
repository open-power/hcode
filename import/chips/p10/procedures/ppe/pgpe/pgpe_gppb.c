/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_gppb.c $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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

void pgpe_gppb_pstate_tbl();
void pgpe_gppb_occ_tbl();

GlobalPstateParmBlock_t* G_gppb;

//
//
//
void pgpe_gppb_init()
{
    PK_TRACE("GPPB Init");

    void* gppb_sram_offset = (void*)G_pgpe_header_data->g_pgpe_gppb_sram_addr;//GPPB Sram Offset
    G_gppb = (GlobalPstateParmBlock_t*)gppb_sram_offset;
    PK_TRACE("GPPB: Init G_gppb=0x%x", (uint32_t)G_gppb);

    pgpe_gppb_pstate_tbl();
    pgpe_gppb_occ_tbl();
}

//
//Generate Pstate Table
//
//\\TBD
void pgpe_gppb_pstate_tbl()
{
}

//
//Generate OCC Table
//
//\\TBD
void pgpe_gppb_occ_tbl()
{
}
