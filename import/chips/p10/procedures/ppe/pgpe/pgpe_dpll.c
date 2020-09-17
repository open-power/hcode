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
#include "p10_scom_proc_1.H"

void pgpe_dpll_init()
{
}

uint64_t pgpe_dpll_get_dpll_stat()
{
    uint64_t dpll_stat;

    PPE_GETSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_STAT, dpll_stat);
    PK_TRACE("dpll_stat=0x%08x%08x", dpll_stat >> 32, dpll_stat);

    return dpll_stat;
}

dpll_mode_t pgpe_dpll_get_mode()
{
    dpll_ctrl_t dpll_ctrl;
    PPE_GETSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_CTRL_RW, dpll_ctrl.value);

    if ((dpll_ctrl.fields.ff_bypass == 1) &&
        (dpll_ctrl.fields.enable_jump_protect == 0) &&
        (dpll_ctrl.fields.dynamic_slew_mode == 0))
    {
        return DPLL_MODE_1;
    }
    else if ((dpll_ctrl.fields.ff_bypass == 0) &&
             (dpll_ctrl.fields.enable_jump_protect == 0) &&
             (dpll_ctrl.fields.dynamic_slew_mode == 0))
    {
        return DPLL_MODE_2;
    }
    else if ((dpll_ctrl.fields.ff_bypass == 0) &&
             (dpll_ctrl.fields.enable_jump_protect == 1) &&
             (dpll_ctrl.fields.dynamic_slew_mode == 0))
    {
        return DPLL_MODE_3;
    }
    else if ((dpll_ctrl.fields.ff_bypass == 0) &&
             (dpll_ctrl.fields.enable_jump_protect == 0) &&
             (dpll_ctrl.fields.dynamic_slew_mode == 1))
    {
        return DPLL_MODE_4;
    }
    else if ((dpll_ctrl.fields.ff_bypass == 1) &&
             (dpll_ctrl.fields.enable_jump_protect == 0) &&
             (dpll_ctrl.fields.dynamic_slew_mode == 1))
    {
        return DPLL_MODE_6;
    }
    else
    {
        //\TODO unsupported DPLL_MODE. error log
        return DPLL_MODE_INVALID;
    }
}

uint32_t pgpe_dpll_get_pstate()
{
    dpll_stat_t dpll_stat;

    PPE_GETSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_STAT, dpll_stat.value);

    uint32_t pstate = pgpe_gppb_get_dpll_pstate0_value() - dpll_stat.fields.freqout;

    return pstate;
}

void pgpe_dpll_write_dpll_freq_ps(uint32_t pstate)
{
    //Write fmax and fmult fields
    dpll_freq_t dpll_freq;
    dpll_freq.value = 0;
    dpll_freq.fields.fmax  = pgpe_gppb_get_dpll_pstate0_value() - pstate;
    dpll_freq.fields.fmult = dpll_freq.fields.fmax;

    PK_TRACE("dpll=0x%08x%08x", dpll_freq.value >> 32, dpll_freq.value);
    PPE_PUTSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_FREQ, dpll_freq.value);

    dpll_stat_t dpll_stat;
    dpll_stat.value = 0;
    PPE_GETSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_STAT, dpll_stat.value);
    PK_TRACE("dpll_stat=0x%08x%08x", dpll_stat.value >> 32, dpll_stat.value);

    //\todo Add timeout and critical error log
    while(!dpll_stat.fields.update_complete)
    {
        PPE_GETSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_STAT, dpll_stat.value);
    }
}

void pgpe_dpll_write_dpll_freq(uint64_t value)
{
    PPE_PUTSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_FREQ, value);
}

void pgpe_dpll_write_dpll_ctrl_or(uint64_t value)
{
    PPE_PUTSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_CTRL_WO_OR, value);
}

void pgpe_dpll_set_mode(dpll_mode_t mode)
{
    dpll_ctrl_t dpll_ctrl;
    PPE_GETSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_CTRL_RW, dpll_ctrl.value);

    switch(mode)
    {
        case DPLL_MODE_1:
            dpll_ctrl.fields.ff_bypass = 1;
            dpll_ctrl.fields.enable_jump_protect = 0;
            dpll_ctrl.fields.dynamic_slew_mode = 0;
            break;

        case DPLL_MODE_2:
            dpll_ctrl.fields.ff_bypass = 0;
            dpll_ctrl.fields.enable_jump_protect = 0;
            dpll_ctrl.fields.dynamic_slew_mode = 0;
            break;

        case DPLL_MODE_3:
            dpll_ctrl.fields.ff_bypass = 0;
            dpll_ctrl.fields.enable_jump_protect = 1;
            dpll_ctrl.fields.dynamic_slew_mode = 0;
            break;

        case DPLL_MODE_4:
            dpll_ctrl.fields.ff_bypass = 0;
            dpll_ctrl.fields.enable_jump_protect = 0;
            dpll_ctrl.fields.dynamic_slew_mode = 1;
            break;

        default:
            break;
            //\TODO unsupported DPLL_MODE. error log
    };

    PPE_PUTSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_CTRL_RW, dpll_ctrl.value);
}
