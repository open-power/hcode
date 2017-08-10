/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/pgpe/pstate_gpe/p9_pgpe_irq.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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
//-----------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2014
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
//-----------------------------------------------------------------------------

/// \file   p9_pgpe_irq.c
/// \brief  Shared and global file for PGPE (GPE2) H-codes.
///

#include "pk.h"
#include "p9_pgpe_irq.h"
#include "ppehw_common.h"

// Notes:
// - The following two lists, ext_irq_vectors_gpe[][] and IDX_PRTY_LVL_<task_abbr>,
//   must match.  IDX_PRTY_LVL_<task_abbr> is the tasks priority level and serves
//   as the index into the ext_irq_vectors_gpe[][] table.

const uint64_t ext_irq_vectors_gpe[NUM_EXT_IRQ_PRTY_LEVELS][2] =
{

    {
        IRQ_VEC_PRTY0_GPE2,  IRQ_VEC_PRTY6_GPE2 |    /* 0 */
        IRQ_VEC_PRTY5_GPE2 |
        IRQ_VEC_PRTY4_GPE2 |
        IRQ_VEC_PRTY3_GPE2 |
        IRQ_VEC_PRTY2_GPE2 |
        IRQ_VEC_PRTY1_GPE2 |
        IRQ_VEC_PRTY0_GPE2
    } ,

    {
        IRQ_VEC_PRTY1_GPE2,  IRQ_VEC_PRTY6_GPE2 |    /* 1 */
        IRQ_VEC_PRTY5_GPE2 |
        IRQ_VEC_PRTY4_GPE2 |
        IRQ_VEC_PRTY3_GPE2 |
        IRQ_VEC_PRTY2_GPE2 |
        IRQ_VEC_PRTY1_GPE2
    } ,

    {
        IRQ_VEC_PRTY2_GPE2, IRQ_VEC_PRTY6_GPE2 |    /* 2 */
        IRQ_VEC_PRTY5_GPE2 |
        IRQ_VEC_PRTY4_GPE2 |
        IRQ_VEC_PRTY3_GPE2 |
        IRQ_VEC_PRTY2_GPE2
    } ,

    {
        IRQ_VEC_PRTY3_GPE2, IRQ_VEC_PRTY6_GPE2 |    /* 3 */
        IRQ_VEC_PRTY5_GPE2 |
        IRQ_VEC_PRTY4_GPE2 |
        IRQ_VEC_PRTY3_GPE2
    } ,

    {
        IRQ_VEC_PRTY4_GPE2, IRQ_VEC_PRTY6_GPE2 |    /* 4 */
        IRQ_VEC_PRTY5_GPE2 |
        IRQ_VEC_PRTY4_GPE2
    } ,

    {
        IRQ_VEC_PRTY5_GPE2, IRQ_VEC_PRTY6_GPE2 |    /* 5 */
        IRQ_VEC_PRTY5_GPE2
    } ,

    { IRQ_VEC_PRTY6_GPE2, IRQ_VEC_PRTY6_GPE2 }      /* 6 */

};

uint8_t   g_oimr_stack[NUM_EXT_IRQ_PRTY_LEVELS];
int       g_oimr_stack_ctr = -1;
uint8_t   g_current_prty_level = NUM_EXT_IRQ_PRTY_LEVELS - 1;
uint64_t  g_oimr_override = 0x0000000000000000;
uint64_t  g_oimr_override_stack[NUM_EXT_IRQ_PRTY_LEVELS];


//
// Unified IRQ priority and masking handler.
// Locates the highest priority IRQ task vector that has at least one of its
// interrupts in the current external PK interrupt vector.
//
void pk_unified_irq_prty_mask_handler(void)
{
    uint8_t   iPrtyLvl, bFound;
    uint64_t  ext_irq_vector_pk;

    // 1. Identify the priority level of the interrupt.
    ext_irq_vector_pk = ((uint64_t)in32(OCB_G0ISR0 + APPCFG_OCC_INSTANCE_ID * 8)) << 32 |
                        (uint64_t)in32(OCB_G0ISR1 + APPCFG_OCC_INSTANCE_ID * 8);
    //CMO-swap above lines comments when we've defined the HI PRTY interrupts correctly, i.e.
    //    right now they fire all the time because by default they are defined as LEVEL
    //    SENSITIVE and ACTIVE LOW.
    bFound = FALSE;
    iPrtyLvl = 0;

    do
    {
        if ( ext_irq_vectors_gpe[iPrtyLvl][IDX_PRTY_VEC] & ext_irq_vector_pk )
        {
            bFound = TRUE;
            break;
        }
    }
    while (++iPrtyLvl < (NUM_EXT_IRQ_PRTY_LEVELS - 1)); // No need to check DISABLED.

    // 2. Only manipulate OIMR masks for task level prty levels. Let shared non-task
    // IRQs (iPrtyLvl=0) be processed by the PK kernel in usual fashion.
    if (bFound)
    {
        pk_irq_save_and_set_mask(iPrtyLvl);
    }
    else
    {
        PK_TRACE_ERR("A Phantom IRQ fired, ext_irq_vector_pk=0x%08x%08x",
                     UPPER32(ext_irq_vector_pk), LOWER32(ext_irq_vector_pk));
        PK_PANIC(PGPE_UIH_EIMR_STACK_OVERFLOW);
    }

    // 3. Return the priority vector in d5 and let hwmacro_get_ext_irq do the
    // rest, i.e. route first found IRQ in the returned priority vector
    // to the registered [unified] interrupt handler.
    uint32_t  register l_vecH asm("r5");
    uint32_t  register l_vecL asm("r6") __attribute__((unused));
    l_vecL = 0;
    asm volatile ("lvd %[data], 0(%[addr]) \n" \
                  : [data]"=r"(l_vecH) \
                  : [addr]"r"(&ext_irq_vectors_gpe[iPrtyLvl][IDX_PRTY_VEC]) );

}

//
//pk_irq_save_and_set_mask()
//
void pk_irq_save_and_set_mask(uint32_t iPrtyLvl)
{
    // Save current mask (assume current prty level).
    // Note, reading OIMR is NOT safe because overrides may already have
    //  happened to the OIMR. And we always want to restore
    //  the OIMR to a known value when we exit our thread.
    if (++g_oimr_stack_ctr < NUM_EXT_IRQ_PRTY_LEVELS)
    {
        //prev: g_oimr_stack[g_oimr_stack_ctr] = ((uint64_t)in32(OCB_OIMR0))<<32 |
        //                                 (uint64_t)in32(OCB_OIMR1);
        // Make a note of present prty level and then update tracker to new prty level.
        g_oimr_stack[g_oimr_stack_ctr] = g_current_prty_level;
        g_current_prty_level = iPrtyLvl; // Update prty level tracker.
        g_oimr_override_stack[g_oimr_stack_ctr] = g_oimr_override;
        PK_TRACE_DBG("IRQ SET: prty_lvl=%d,  g_oimr_stack_ctr=0x%x", g_current_prty_level, g_oimr_stack_ctr);
    }
    else
    {
        PK_TRACE_ERR("Code bug: OIMR S/R stack counter=%d  >=  max=%d.",
                     g_oimr_stack_ctr, NUM_EXT_IRQ_PRTY_LEVELS);
        PK_PANIC(PGPE_UIH_EIMR_STACK_OVERFLOW);
    }

    // Write the new mask for this priority level.
    // First, clear all those IRQs that could possibly interrupt this instance.
    // This includes all those IRQs which belong to this instance as well as
    // those high-prty IRQs shared with the other instances.
    //
    out32(OCB_OIMR0_CLR, (uint32_t)(IRQ_VEC_ALL_OUR_IRQS >> 32));
    out32(OCB_OIMR1_CLR, (uint32_t)IRQ_VEC_ALL_OUR_IRQS);

    // Second, mask IRQs belonging to this task and lower prty tasks.
    // Note, that we do not modify the permanently disabled IRQs, such as the
    //  _RESERVED_ ones. Nor do we touch other instances' IRQs. Iow, the
    //  IDX_PRTY_LVL_DISABLED mask is  NOT  part of the mask we apply below.
    out32(OCB_OIMR0_OR, (uint32_t)((ext_irq_vectors_gpe[iPrtyLvl][IDX_MASK_VEC] |
                                    g_oimr_override) >> 32) );
    out32(OCB_OIMR1_OR, (uint32_t)(ext_irq_vectors_gpe[iPrtyLvl][IDX_MASK_VEC] |
                                   g_oimr_override) );

}
