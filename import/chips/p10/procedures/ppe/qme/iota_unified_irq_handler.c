/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/iota_unified_irq_handler.c $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2017,2019                                                    */
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
#include "iota_uih_cfg.h"
#include "iota_panic_codes.h"

#include "std_register_addresses.h"
#include "ppehw_common.h"

uint32_t g_current_prty_level = IOTA_NUM_EXT_IRQ_PRIORITIES - 1;
uint8_t  g_eimr_stack[IOTA_NUM_EXT_IRQ_PRIORITIES];
int      g_eimr_stack_ctr = -1;
uint64_t g_eimr_override_stack[IOTA_NUM_EXT_IRQ_PRIORITIES] SECTION_SBSS;
uint64_t g_eimr_override = 0x0000000000000000;
uint64_t g_ext_irq_vector = 0;
extern const uint64_t ext_irq_priority_table[IOTA_NUM_EXT_IRQ_PRIORITIES][2];

// UIH: Unified IRQ priority and masking Handler.
// - Locates the highest priority IRQ task vector that has at least one of its
//   interrupts in the current external PK interrupt vector.
uint32_t
__ext_irq_handler()
{
    uint32_t  iPrtyLvl = 0, bFound = 0;

    // 1. Identify the priority level of the interrupt.
    g_ext_irq_vector = in64(STD_LCL_EISTR);

    if(g_ext_irq_vector == 0)
    {
        iota_dead(IOTA_UIH_PHANTOM_INTERRUPT);
    }

    do
    {
        if(ext_irq_priority_table[iPrtyLvl][IDX_PRTY_VEC] & g_ext_irq_vector)
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
            iota_dead(IOTA_UIH_STACK_OVERFLOW);
        }

        // 3. Write the new mask for this priority level.
        out64(STD_LCL_EIMR, ext_irq_priority_table[iPrtyLvl][IDX_MASK_VEC] |
              g_eimr_override);

    }
    else
    {
        // Disabled IRQ fired
        iota_dead(IOTA_UIH_DISABLED_FIRED);
    }

    // Return the priority level
    return iPrtyLvl;
}

void
__ext_irq_resume()
{
    if (g_eimr_stack_ctr >= 0)
    {
        out64(STD_LCL_EIMR,
              ext_irq_priority_table[g_eimr_stack[g_eimr_stack_ctr]][IDX_MASK_VEC]);
        out64(STD_LCL_EIMR_CLR,
              g_eimr_override_stack[g_eimr_stack_ctr]);
        out64(STD_LCL_EIMR_OR,
              g_eimr_override);
        // Restore the prty level tracker to the task that was interrupted, if any.
        g_current_prty_level = g_eimr_stack[g_eimr_stack_ctr];
        g_eimr_stack_ctr--;
    }
    else
    {
        iota_dead(IOTA_UIH_STACK_UNDERFLOW);
    }
}
