/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/p9_cme_irq.c $      */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2021                                                    */
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

/// \file   cme_irq_common.c
/// \brief  Shared and global file for CME H-codes.
/// \owner  Michael Olsen   Email: cmolsen@us.ibm.com
/// \owner  David Du        Email: daviddu@us.ibm.com
///

#include "pk.h"
#include "p9_cme_irq.h"
#include "ppehw_common.h"

//-------------------------------------------------------------------//
//            DO NOT modify this file unless you're the owner        //
//-------------------------------------------------------------------//

uint32_t      g_current_prty_level = NUM_EXT_IRQ_PRTY_LEVELS - 1;
uint8_t       g_eimr_stack[NUM_EXT_IRQ_PRTY_LEVELS];
int           g_eimr_stack_ctr = -1;
uint64_t      g_eimr_override_stack[NUM_EXT_IRQ_PRTY_LEVELS];
uint64_t      g_eimr_override = 0x0000000000000000;

// Unified IRQ priority and masking handler.
// - Locates the highest priority IRQ task vector that has at least one of its
//   interrupts in the current external PK interrupt vector.
void pk_unified_irq_prty_mask_handler(void)
{
    uint8_t   iPrtyLvl, bFound;
    uint64_t  ext_irq_vector_pk;

    // 1. Identify the priority level of the interrupt.
    ext_irq_vector_pk = in64(STD_LCL_EISTR);
    bFound   = 0;
    iPrtyLvl = 0;

    PK_TRACE_DBG("DEBUG: Phantom IRQ Check, EISTR=%x %x.",
                 UPPER32(ext_irq_vector_pk), LOWER32(ext_irq_vector_pk));

    do
    {
        if (ext_irq_vectors_cme[iPrtyLvl][IDX_PRTY_VEC] & ext_irq_vector_pk)
        {
            bFound = 1;
            break;
        }
    }
    while(++iPrtyLvl < (NUM_EXT_IRQ_PRTY_LEVELS - 1)); //No need to check DISABLED.

    // Only manipulate EIMR masks for task level prty levels.
    // Let shared non-task IRQs (iPrtyLvl=0) be processed by
    // the PK kernel in usual fashion.
    if (bFound)
    {
        // 2. Save current mask (assume current prty level).
        //    Note, reading EIMR is NOT safe because overrides may already have
        //      happened to the EIMR. And we always want to restore
        //      the EIMR to a known value when we exit our thread.
        if (++g_eimr_stack_ctr < NUM_EXT_IRQ_PRTY_LEVELS)
        {
            // Make a note of present prty level and
            // then update tracker to new prty level.
            g_eimr_stack[g_eimr_stack_ctr] = g_current_prty_level;
            g_current_prty_level = iPrtyLvl; // Update prty level tracker.
            g_eimr_override_stack[g_eimr_stack_ctr] = g_eimr_override;
        }
        else
        {
//            PK_TRACE_ERR("ERROR: EIMR S/R stack counter=%d  >=  max=%d. HALT CME!",
//                         g_eimr_stack_ctr, NUM_EXT_IRQ_PRTY_LEVELS);
            PK_PANIC(CME_UIH_EIMR_STACK_OVERFLOW);
        }

        // 3. Write the new mask for this priority level.
        out64(STD_LCL_EIMR, ext_irq_vectors_cme[iPrtyLvl][IDX_MASK_VEC] |
              g_eimr_override);

    }
    else
    {
//        PK_TRACE_ERR("ERROR: Phantom IRQ Fired, EISTR=%x %x. HALT CME!",
//                     UPPER32(ext_irq_vector_pk), LOWER32(ext_irq_vector_pk));
#if !EPM_P9_TUNING
        PK_PANIC(CME_UIH_PHANTOM_INTERRUPT);
#endif
    }


    // 4. Return the priority vector in d5 and let hwmacro_get_ext_irq do the
    //    rest, i.e. route first found IRQ in the returned priority vector
    //    to the registered [unified] interrupt handler.
    uint32_t  register l_vecH asm("r5");
    //uint32_t  register l_vecL asm("r6");

    //l_vecL = 0;
    asm volatile ("lvd %[data], 0(%[addr]) \n" \
                  : [data]"=r"(l_vecH) \
                  : [addr]"r"(&(ext_irq_vectors_cme[iPrtyLvl][IDX_PRTY_VEC])) );
}
