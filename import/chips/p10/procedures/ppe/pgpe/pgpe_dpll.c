/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_dpll.c $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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
#include "pgpe_pstate.h"
#include "p10_scom_proc.H"
#include "ppe42_msr.h"


void pgpe_dpll_init()
{
}

void pgpe_dpll_mask_and_clear_pll_unlock();
void pgpe_dpll_clear_pll_unlock_error();
void pgpe_dpll_unmask_pll_unlock();
uint64_t g_dpll_mask;


uint64_t pgpe_dpll_get_dpll_stat()
{
    uint64_t dpll_stat;

    PPE_GETSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_STAT, dpll_stat);
    PK_TRACE_DBG("DPL: dpll_stat=0x%08x%08x", dpll_stat >> 32, dpll_stat);

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
    // Write fmax and fmult fields
    dpll_freq_t dpll_freq;
    dpll_freq.value = 0;
    dpll_freq.fields.fmax  = pgpe_gppb_get_dpll_pstate0_value() - pstate;
    dpll_freq.fields.fmult = dpll_freq.fields.fmax;

    // Mask the NEST DPLL Unlock check via TP Slave Config Reg
    // Clear the unlock error set in TP Error Capture Register by slewing
    pgpe_dpll_mask_and_clear_pll_unlock();

    // Write DPLL_FREQ
    PK_TRACE_INF("DPL: Write DPLL_CNTL=0x%08x%08x", dpll_freq.value >> 32, dpll_freq.value);
    PPE_PUTSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_FREQ, dpll_freq.value);


    // Wait until frequency update is complete
    //\todo Add timeout and critical error log
    dpll_stat_t dpll_stat;
    dpll_stat.value = 0;

    uint32_t cnt = 0;
    uint32_t saved_msr = mfmsr();
    mtmsr(saved_msr | MSR_SEM6);  // Mask off address parity

    while(!dpll_stat.fields.update_complete || !dpll_stat.fields.lock)
    {
        PPE_GETSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_STAT, dpll_stat.value);

        if ((mfmsr() & MSR_SIBRC) != 0)
        {
            mtmsr(saved_msr | MSR_SEM6);  // Mask off address parity
            cnt++;
        }

        if (cnt > 1)
        {
            IOTA_PANIC(DPLL_ADDRESS_PARITY);
        }
    }

    mtmsr(saved_msr);

    //CLear the pll unlock error bit
    pgpe_dpll_clear_pll_unlock_error();

    PK_TRACE_DBG("DPL: dpll_stat=0x%08x%08x", dpll_stat.value >> 32, dpll_stat.value);

    // Unmask the NEST DPLL Unlock check via TP Slave Config Reg
    pgpe_dpll_unmask_pll_unlock();
}

void pgpe_dpll_write_dpll_freq(uint64_t value)
{
    PPE_PUTSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_FREQ, value);
}

void pgpe_dpll_set_slewrate(uint32_t down, uint32_t up)
{
    dpll_ctrl_t dpll_ctrl;

    // Mask the NEST DPLL Unlock check via TP Slave Config Reg
    // Clear the unlock error set in TP Error Capture Register by slewing
    pgpe_dpll_mask_and_clear_pll_unlock();

    // Read-Modify-Write the DPLL_CTRL
    PPE_GETSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_CTRL_RW, dpll_ctrl.value);
    dpll_ctrl.fields.ff_slewrate_dn = down;
    dpll_ctrl.fields.ff_slewrate_up = up;
    PPE_PUTSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_CTRL_RW, dpll_ctrl.value);

    //CLear the pll unlock error bit
    pgpe_dpll_clear_pll_unlock_error();
    // Unmask the NEST DPLL Unlock check via TP Slave Config Reg
    pgpe_dpll_unmask_pll_unlock();
}

void pgpe_dpll_clear_dpll_lock_sel()
{
    dpll_ctrl_t dpll_ctrl;
    dpll_ctrl.value = 0;

    // Mask the NEST DPLL Unlock check via TP Slave Config Reg
    // Clear the unlock error set in TP Error Capture Register by slewing
    pgpe_dpll_mask_and_clear_pll_unlock();

    // WO-Clear DPLL_CTRL
    dpll_ctrl.fields.dpll_lock_sel = 1;
    PPE_PUTSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_CTRL_WO_CLEAR, dpll_ctrl.value);

    //CLear the pll unlock error bit
    pgpe_dpll_clear_pll_unlock_error();
    // Unmask the NEST DPLL Unlock check via TP Slave Config Reg
    pgpe_dpll_unmask_pll_unlock();
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

    // Mask the NEST DPLL Unlock check via TP Slave Config Reg
    // Clear the unlock error set in TP Error Capture Register by slewing
    pgpe_dpll_mask_and_clear_pll_unlock();

    // Write DPLL_CNTL
    PPE_PUTSCOM(TP_TPCHIP_TPC_DPLL_CNTL_NEST_REGS_CTRL_RW, dpll_ctrl.value);

    //CLear the pll unlock error bit
    pgpe_dpll_clear_pll_unlock_error();

    // Unmask the NEST DPLL Unlock check via TP Slave Config Reg
    pgpe_dpll_unmask_pll_unlock();
}


void pgpe_dpll_mask_and_clear_pll_unlock()
{
    uint64_t pll_mask_data = 0;
    uint64_t pll_err_data = 0;

    // Mask the NEST DPLL Unlock check via TP Slave Config Reg
    PPE_GETSCOM(TP_TPCHIP_NET_PCBSLPERV_SLAVE_CONFIG_REG, pll_mask_data);
    g_dpll_mask = pll_mask_data & BIT64(19);
    pll_mask_data |= BIT64(19);
    PPE_PUTSCOM(TP_TPCHIP_NET_PCBSLPERV_SLAVE_CONFIG_REG, pll_mask_data);

    // Clear the unlock error set in TP Error Capture Register by slewing
    PPE_GETSCOM(TP_TPCHIP_NET_PCBSLPERV_ERROR_REG, pll_err_data);
    pll_err_data |= BIT64(31);
    PPE_PUTSCOM(TP_TPCHIP_NET_PCBSLPERV_ERROR_REG, pll_err_data);
}

void pgpe_dpll_clear_pll_unlock_error()
{
    uint64_t pll_err_data = 0;
    // Clear the unlock error set in TP Error Capture Register by slewing
    PPE_GETSCOM(TP_TPCHIP_NET_PCBSLPERV_ERROR_REG, pll_err_data);
    pll_err_data |= BIT64(31);
    PPE_PUTSCOM(TP_TPCHIP_NET_PCBSLPERV_ERROR_REG, pll_err_data);
}

void pgpe_dpll_unmask_pll_unlock()
{
    uint64_t pll_mask_data = 0;

    // Unmask the NEST DPLL Unlock check via TP Slave Config Reg
    PPE_GETSCOM(TP_TPCHIP_NET_PCBSLPERV_SLAVE_CONFIG_REG, pll_mask_data);
    pll_mask_data |= g_dpll_mask;
    PPE_PUTSCOM(TP_TPCHIP_NET_PCBSLPERV_SLAVE_CONFIG_REG, pll_mask_data);
}
