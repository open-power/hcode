/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe/iota/iota_uih.c $              */
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
#include "iota.h"
#include "iota_uih.h"

// Notes:
//   The following two lists,
//     ext_irq_vectors_cme[][] and IDX_PRTY_LVL_<task_abbr>, must match.
//   IDX_PRTY_LVL_<task_abbr> is the tasks priority level and serves
//   as the index into the ext_irq_vectors_cme[][] table.

const uint64_t ext_irq_vectors_cme[IOTA_NUM_EXT_IRQ_PRIORITIES][2] =
{
    /* 0: IDX_PRTY_VEC    1: IDX_MASK_VEC */
    {
        IRQ_VEC_PRTY0_CME, /* 0: IDX_PRTY_LVL_HIPRTY */
        IRQ_VEC_PRTY12_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY9_CME |
        IRQ_VEC_PRTY8_CME |
        IRQ_VEC_PRTY7_CME |
        IRQ_VEC_PRTY6_CME |
        IRQ_VEC_PRTY5_CME |
        IRQ_VEC_PRTY4_CME |
        IRQ_VEC_PRTY3_CME |
        IRQ_VEC_PRTY2_CME |
        IRQ_VEC_PRTY1_CME |
        IRQ_VEC_PRTY0_CME
    },
    {
        IRQ_VEC_PRTY1_CME, /* 1: IDX_PRTY_LVL_DB3 */
        IRQ_VEC_PRTY12_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY9_CME |
        IRQ_VEC_PRTY8_CME |
        IRQ_VEC_PRTY7_CME |
        IRQ_VEC_PRTY6_CME |
        IRQ_VEC_PRTY5_CME |
        IRQ_VEC_PRTY4_CME |
        IRQ_VEC_PRTY3_CME |
        IRQ_VEC_PRTY2_CME |
        IRQ_VEC_PRTY1_CME
    },
    {
        IRQ_VEC_PRTY2_CME, /* 2: IDX_PRTY_LVL_DB2 */
        IRQ_VEC_PRTY12_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY9_CME |
        IRQ_VEC_PRTY8_CME |
        IRQ_VEC_PRTY7_CME |
        IRQ_VEC_PRTY6_CME |
        IRQ_VEC_PRTY5_CME |
        IRQ_VEC_PRTY4_CME |
        IRQ_VEC_PRTY3_CME |
        IRQ_VEC_PRTY2_CME
    },
    {
        IRQ_VEC_PRTY3_CME, /* 3: IDX_PRTY_LVL_SPWU */
        IRQ_VEC_PRTY12_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY9_CME |
        IRQ_VEC_PRTY8_CME |
        IRQ_VEC_PRTY7_CME |
        IRQ_VEC_PRTY6_CME |
        IRQ_VEC_PRTY5_CME |
        IRQ_VEC_PRTY4_CME |
        IRQ_VEC_PRTY3_CME
    },
    {
        IRQ_VEC_PRTY4_CME, /* 4: IDX_PRTY_LVL_WAKE */
        IRQ_VEC_PRTY12_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY9_CME |
        IRQ_VEC_PRTY8_CME |
        IRQ_VEC_PRTY7_CME |
        IRQ_VEC_PRTY6_CME |
        IRQ_VEC_PRTY5_CME |
        IRQ_VEC_PRTY4_CME
    },
    {
        IRQ_VEC_PRTY5_CME, /* 5: IDX_PRTY_LVL_STOP */
        IRQ_VEC_PRTY12_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY9_CME |
        IRQ_VEC_PRTY8_CME |
        IRQ_VEC_PRTY7_CME |
        IRQ_VEC_PRTY6_CME |
        IRQ_VEC_PRTY5_CME
    },
    {
        IRQ_VEC_PRTY6_CME, /* 6: IDX_PRTY_LVL_DB1 */
        IRQ_VEC_PRTY12_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY9_CME |
        IRQ_VEC_PRTY8_CME |
        IRQ_VEC_PRTY7_CME |
        IRQ_VEC_PRTY6_CME
    },

    {
        IRQ_VEC_PRTY7_CME, /* 7: IDX_PRTY_LVL_DB0 */
        IRQ_VEC_PRTY12_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY9_CME |
        IRQ_VEC_PRTY8_CME |
        IRQ_VEC_PRTY7_CME
    },

    {
        IRQ_VEC_PRTY8_CME, /* 8: IDX_PRTY_LVL_INTERCME_IN0 */
        IRQ_VEC_PRTY12_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY9_CME |
        IRQ_VEC_PRTY8_CME
    },
    {
        IRQ_VEC_PRTY9_CME, /* 9: IDX_PRTY_LVL_PMCR */
        IRQ_VEC_PRTY12_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY9_CME
    },
    {
        IRQ_VEC_PRTY10_CME, /* 10: IDX_PRTY_LVL_DISABLED */
        IRQ_VEC_PRTY12_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY10_CME
    },
    {
        IRQ_VEC_PRTY11_CME, /* 11: IDX_PRTY_LVL_COMM_RECVD */
        IRQ_VEC_PRTY12_CME |
        IRQ_VEC_PRTY11_CME
    },
    {
        IRQ_VEC_PRTY12_CME, /* 12: IDX_PRTY_LVL_DISABLED */
        IRQ_VEC_PRTY12_CME
    }


};

uint32_t g_current_prty_level = IOTA_NUM_EXT_IRQ_PRIORITIES - 1;
uint8_t  g_eimr_stack[IOTA_NUM_EXT_IRQ_PRIORITIES];
int      g_eimr_stack_ctr = -1;
uint64_t g_eimr_override_stack[IOTA_NUM_EXT_IRQ_PRIORITIES];
uint64_t g_eimr_override = 0x0000000000000000;
uint64_t g_ext_irq_vector = 0;

// Unified IRQ priority and masking handler.
// - Locates the highest priority IRQ task vector that has at least one of its
//   interrupts in the current external PK interrupt vector.
uint32_t iota_uih(void)
{
    uint32_t  iPrtyLvl = 0, bFound = 0;
    //uint64_t  ext_irq_vector;

    // 1. Identify the priority level of the interrupt.
    g_ext_irq_vector = in64(CME_LCL_EISTR);

    do
    {
        if(ext_irq_vectors_cme[iPrtyLvl][IDX_PRTY_VEC] & g_ext_irq_vector)
        {
            bFound = 1;
            break;
        }
    }
    while(++iPrtyLvl < (IOTA_NUM_EXT_IRQ_PRIORITIES - 1)); //No need to check DISABLED.

    // Only manipulate EIMR masks for task level prty levels.
    // Let shared non-task IRQs (iPrtyLvl=0) be processed by
    // the PK kernel in usual fashion.
    if(bFound)
    {
        // 2. Save current mask (assume current prty level).
        //    Note, reading EIMR is NOT safe because overrides may already have
        //      happened to the EIMR. And we always want to restore
        //      the EIMR to a known value when we exit our thread.
        if(++g_eimr_stack_ctr < IOTA_NUM_EXT_IRQ_PRIORITIES)
        {
            // Make a note of present prty level and
            // then update tracker to new prty level.
            g_eimr_stack[g_eimr_stack_ctr] = g_current_prty_level;
            g_current_prty_level = iPrtyLvl; // Update prty level tracker.
            g_eimr_override_stack[g_eimr_stack_ctr] = g_eimr_override;
        }
        else
        {
            asm volatile("mtspr 0x110, %0" : : "r" (0xdead));
            iota_halt();
        }

        // 3. Write the new mask for this priority level.
        out64(CME_LCL_EIMR, ext_irq_vectors_cme[iPrtyLvl][IDX_MASK_VEC] |
              g_eimr_override);

    }
    else
    {
        asm volatile("mtspr 0x110, %0" : : "r" (0xbeef));
        // Disabled IRQ fired
        iota_halt();
    }

    // Return the priority level
    return iPrtyLvl;
}

void iota_uih_irq_vec_restore()
{
    uint32_t ctx = mfmsr();
    wrteei(0);

    if (g_eimr_stack_ctr >= 0)
    {
        out64(CME_LCL_EIMR,
              ext_irq_vectors_cme[g_eimr_stack[g_eimr_stack_ctr]][IDX_MASK_VEC]);
        out64(CME_LCL_EIMR_CLR,
              g_eimr_override_stack[g_eimr_stack_ctr]);
        out64(CME_LCL_EIMR_OR,
              g_eimr_override);
        // Restore the prty level tracker to the task that was interrupted, if any.
        g_current_prty_level = g_eimr_stack[g_eimr_stack_ctr];
        g_eimr_stack_ctr--;
    }
    else
    {
        iota_halt();
    }

    mtmsr(ctx);
}
