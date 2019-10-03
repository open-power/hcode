/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_dpll.c $            */
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

#include "pgpe_dpll.h"
#include "pgpe_gppb.h"
#include "p10_scom_proc.H"

void pgpe_dpll_init()
{
}

uint64_t pgpe_dpll_get_dpll()
{
    uint64_t dpll_freq;

    PPE_GETSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_STAT, dpll_freq);
    PK_TRACE("dpll=0x%08x%08x", dpll_freq >> 32, dpll_freq);

    return dpll_freq;
}

void pgpe_dpll_write_dpll(uint64_t value)
{
    PPE_PUTSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_FREQ, value);
}

uint32_t pgpe_dpll_get_pstate()
{
    dpll_stat_t dpll_stat;

    PPE_GETSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_STAT, dpll_stat.value);

    uint32_t pstate = pgpe_gppb_get(dpll_pstate0_value) - dpll_stat.fields.freqout;

    return pstate;
}

void pgpe_dpll_write(uint32_t pstate)
{
    dpll_freq_t dpll_freq;
    dpll_freq.value = 0;
    dpll_freq.fields.fmax  = pgpe_gppb_get(dpll_pstate0_value) - pstate;
    dpll_freq.fields.fmult = dpll_freq.fields.fmax;
    dpll_freq.fields.fmin  = dpll_freq.fields.fmax;


    PK_TRACE("dpll=0x%08x%08x", dpll_freq.value >> 32, dpll_freq.value);
    PPE_PUTSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_FREQ, dpll_freq.value);

}
