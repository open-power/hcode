/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/boot/p9_pgpe_aux_task.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2017                                                         */
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

//Data
//Item: Quad 0 | Quad 1 | Quad 2 | Quad 3 | Quad 4 | Quad 5 | 2B empty
//Bits: 0    7 | 8    15| 16   23| 24   31| 32   38| 40   47| 48    63
//#include <stdint.h>
#include "pk.h"
#include "ppe42.h"

#define BUFFER_BASE         (0xFFF2B800 - 0x100)
#define IDX                 (BUFFER_BASE - 4)
#define SRAM_MAX             0xFFF2B7FC
#define QUAD_PS_CURR_ADDR_0  0xFFF2025C
#define QUAD_PS_CURR_ADDR_1 (QUAD_PS_CURR_ADDR_0 + 0x4)

uint32_t buffer_address;
void aux_task()
{
    if(buffer_address < BUFFER_BASE)//handles initialization
    {
        buffer_address = BUFFER_BASE;
    }

    /* get pstates */
    uint32_t data;
    uint32_t temp;

    temp = in32(QUAD_PS_CURR_ADDR_0);
    data = (temp << 16);
    temp = in32(QUAD_PS_CURR_ADDR_1);
    data |= (temp >> 16);

    /* write pstates */
    out32(buffer_address, data);
    buffer_address = (buffer_address == SRAM_MAX) ? BUFFER_BASE : (buffer_address + 0x4);
    out32(buffer_address, ((temp & 0xFFFF) << 16));
    buffer_address = (buffer_address == SRAM_MAX) ? BUFFER_BASE : (buffer_address + 0x4);
    out32(IDX, buffer_address);
}
