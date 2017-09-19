/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_optrace.c $ */
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
#include "p9_pgpe.h"
#include "p9_pgpe_optrace.h"
#include "p9_pgpe_header.h"
#include "p9_hcd_memmap_occ_sram.H"

#define SRAM_ADDRESS_MAX OCC_SRAM_PGPE_OPTRACE_ADDR + OCC_SRAM_PGPE_OPTRACE_SIZE - 0x8

TraceData_t G_pgpe_optrace_data;
uint32_t G_address;
uint32_t G_data;
uint32_t G_lastDisable;
uint32_t G_last_sync_op;
uint32_t G_mem_address_max;

extern PgpeHeader_t* G_pgpe_header_data;

//Last 16B Memory Map
//0xfff2bff0,4 Trace Record Data
//0xfff2bff8   Main Memory Buffer Location
//0xfff2bffc   SRAM Buffer Location

void p9_pgpe_optrace_init() //sets up address and initializes buffer to 0's
{
    G_lastDisable = 1;
    G_address = OCC_SRAM_PGPE_OPTRACE_ADDR;

    do
    {
        out32(G_address, 0);
        G_address += 4;
    }
    while(G_address < SRAM_ADDRESS_MAX);

    G_mem_address_max = (G_pgpe_header_data->g_pgpe_doptrace_offset + G_pgpe_header_data->g_pgpe_doptrace_length) - 8;
    G_address = OCC_SRAM_PGPE_OPTRACE_ADDR;
    //Initializing Main Memory buffer location
    out32(SRAM_ADDRESS_MAX, G_pgpe_header_data->g_pgpe_doptrace_offset); //MEM_ADDR_BASE
    //Initializing SRAM buffer location
    out32(SRAM_ADDRESS_MAX + 0x4, OCC_SRAM_PGPE_OPTRACE_ADDR);
}
void p9_pgpe_optrace(uint32_t mark)
{
    if(in32(OCB_OCCS2) & BIT32(PGPE_OP_TRACE_DISABLE)) //Check to see if tracing is enabled
    {
        G_lastDisable = 1;
    }
    else
    {
        if(G_lastDisable) //Place start trace mark at when first enabled
        {
            G_lastDisable = 0;
            p9_pgpe_optrace(ACK_START_TRACE);
        }

        uint32_t word_count = ((mark >> 4) & 0x3) + 1;
        uint32_t word;

        if((mark & 0x40))//If bit 1 of Mark is set there is a timestamp
        {
            G_pgpe_optrace_data.word[(word_count - 1)] = (mark << 24) | (in32(OCB_OTBR) & 0xFFFFFF);
        }

        if(G_last_sync_op)
        {
            TraceData_t pgpe_optrace_buffer;
            pgpe_optrace_buffer  = G_pgpe_optrace_data;
            G_pgpe_optrace_data.word[0] = (FIT_TB_RESYNC << 24) | G_last_sync_op;
            G_last_sync_op = 0;
            p9_pgpe_optrace(FIT_TB_RESYNC);
            G_pgpe_optrace_data  = pgpe_optrace_buffer;
        }

        for(word = 0; word < word_count; word++) //write out all words to  buffer
        {
            out32(G_address, G_pgpe_optrace_data.word[word]);

            if(G_address == SRAM_ADDRESS_MAX - 0x4)
            {
                if(G_pgpe_header_data->g_pgpe_doptrace_offset != 0 && G_pgpe_header_data->g_pgpe_doptrace_length != 0 &&
                   in32(OCB_OCCS2) & BIT32(PGPE_OP_TRACE_MEM_MODE))
                {
                    p9_pgpe_optrace_memcopy();
                }

                G_address = OCC_SRAM_PGPE_OPTRACE_ADDR;
            }
            else
            {
                G_address += 0x4;
            }
        }

        out32(SRAM_ADDRESS_MAX + 0x4, G_address);
    }
}
void p9_pgpe_optrace_memcopy()
{
    uint32_t sram_addr = OCC_SRAM_PGPE_OPTRACE_ADDR;
    uint32_t mem_addr = in32(SRAM_ADDRESS_MAX);

    while(sram_addr < SRAM_ADDRESS_MAX) //Flushing SRAM to Main memory 8B at a time
    {
        uint64_t val = in64(sram_addr);
        out64(mem_addr, val);
        mem_addr = (mem_addr == G_mem_address_max) ? G_pgpe_header_data->g_pgpe_doptrace_offset : (mem_addr + 8);
        sram_addr += 0x8;
    }

    out32(SRAM_ADDRESS_MAX, mem_addr);
}
