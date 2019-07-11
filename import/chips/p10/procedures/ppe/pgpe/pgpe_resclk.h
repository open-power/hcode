/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_resclk.h $          */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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

#ifndef __PGPE_RESCLK_H__
#define __PGPE_RESCLK_H__

#include "pgpe.h"

enum PGPE_RESCLK_STATUS
{
    PGPE_RESCLK_DISABLED    = 0xFFFFFFFF,
    PGPE_RESCLK_INIT        = 0x00000001,
    PGPE_RESCLK_ENABLED     = 0x00000002,
} ;

enum PGPE_RESCLK_RCPTR_CMP
{
    PGPE_RESCLK_RCPTR_COMPARE       =  0,
    PGPE_RESCLK_RCPTR_COMPARE_SKIP  =  1,
};

typedef struct pgpe_resclk
{
    uint32_t status;
} pgpe_resclk_t;


void pgpe_resclk_init();
void pgpe_resclk_enable(uint32_t pstate_target);
void pgpe_resclk_disable();
void pgpe_resclk_update(uint32_t pstate_target);

#endif
