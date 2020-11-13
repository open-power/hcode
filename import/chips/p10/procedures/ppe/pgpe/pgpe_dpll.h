/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_dpll.h $            */
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
#ifndef __PGPE_DPLL_H__
#define __PGPE_DPLL_H__

#include "pgpe.h"

typedef enum DPLL_MODE
{
    DPLL_MODE_1         = 0x1,
    DPLL_MODE_2         = 0x2,
    DPLL_MODE_3         = 0x3,
    DPLL_MODE_4         = 0x4,
    DPLL_MODE_6         = 0x6,
    DPLL_MODE_INVALID   = -0x1
} dpll_mode_t;

void pgpe_dpll_init();
uint64_t pgpe_dpll_get_dpll_stat();
dpll_mode_t pgpe_dpll_get_mode();
uint32_t pgpe_dpll_get_pstate();
void pgpe_dpll_write_dpll_freq_ps(uint32_t pstate);
void pgpe_dpll_write_dpll_freq(uint64_t value);
void pgpe_dpll_set_slewrate(uint32_t down, uint32_t up);
void pgpe_dpll_clear_dpll_lock_sel();
void pgpe_dpll_set_mode(dpll_mode_t mode);

#endif
