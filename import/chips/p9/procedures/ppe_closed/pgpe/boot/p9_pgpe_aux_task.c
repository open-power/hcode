/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/boot/p9_pgpe_aux_task.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2017,2018                                                    */
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


#define BUFFER_SIZE 32
uint8_t buffer[BUFFER_SIZE];
void aux_task()
{
    uint32_t i;

    for (i = 0; i < BUFFER_SIZE; i++)
    {
        buffer[i] = i;
    }
}
