/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/p9_cme_irq.h $      */
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

/// \file   p9_cme_irq_common.h
/// \brief  Shared and global definitions for CME H-codes.
/// \owner  Michael Olsen   Email: cmolsen@us.ibm.com
/// \owner  David Du        Email: daviddu@us.ibm.com

//-------------------------------------------------------------------//
//            DO NOT modify this file unless you're the owner        //
//-------------------------------------------------------------------//

// Notes:
// - The only define names that should be changed/added/removed
//   in this file are:
//   - IRQ_VEC_PRTY(n>0)_CME(x)
//   - IDX_PRTY_LVL_(task_abbr) and reflect in relevant H-code as well
//   - All other define names are used in H-codes
// - The variable names and actions in this file must perfectly match associated
//   definitions in cme_irq_common.c

#include <stdint.h>

// Priority Levels
#define IDX_PRTY_LVL_HIPRTY         0
#define IDX_PRTY_LVL_DB3            1
#define IDX_PRTY_LVL_DB2            2
#define IDX_PRTY_LVL_SPWU           3
#define IDX_PRTY_LVL_RGWU           4
#define IDX_PRTY_LVL_PCWU           5
#define IDX_PRTY_LVL_PM_ACTIVE      6
#define IDX_PRTY_LVL_DB1            7
#define IDX_PRTY_LVL_DB0            8
#define IDX_PRTY_LVL_INTERCME_IN0   9
#define IDX_PRTY_LVL_PMCR           10
#define IDX_PRTY_LVL_COMM_RECVD     11
#define IDX_PRTY_LVL_DISABLED       12
#define IDX_PRTY_VEC                0
#define IDX_MASK_VEC                1
#define NUM_EXT_IRQ_PRTY_LEVELS     13
extern const uint64_t ext_irq_vectors_cme[NUM_EXT_IRQ_PRTY_LEVELS][2];

// Group0: Non-task hi-prty IRQs
#define IRQ_VEC_PRTY0_CME   (uint64_t)(0xFE00000000000000)
// Group1: DB3
#define IRQ_VEC_PRTY1_CME   (uint64_t)(0x0030000000000000)
// Group2: DB2
#define IRQ_VEC_PRTY2_CME   (uint64_t)(0x0000300000000000)
// Group3: SPWU
#define IRQ_VEC_PRTY3_CME   (uint64_t)(0x0003000000000000)
// Group4: RGWU
#define IRQ_VEC_PRTY4_CME   (uint64_t)(0x0000C00000000000)
// Group5: PCWU
#define IRQ_VEC_PRTY5_CME   (uint64_t)(0x000C000000000000)
// Group6: PM_ACTIVE
#define IRQ_VEC_PRTY6_CME   (uint64_t)(0x00000C0000000000)
// Group7: DB1
#define IRQ_VEC_PRTY7_CME   (uint64_t)(0x0000000000C00000)
// Group8: DB0
#define IRQ_VEC_PRTY8_CME   (uint64_t)(0x000000000C000000)
// Group9: INTERCME_IN0
#define IRQ_VEC_PRTY9_CME   (uint64_t)(0x0100000000000000)
// Group10: PMCR
#define IRQ_VEC_PRTY10_CME  (uint64_t)(0x0000000030000000)
// Group11: COMM_RECVD
#define IRQ_VEC_PRTY11_CME  (uint64_t)(0x0000000400000000)
// Group12: We should never detect these
#define IRQ_VEC_PRTY12_CME  (uint64_t)(0x00C003FBC33FFFFF)

// This should be 0xFFFFFFFFFFFFFFFF
#define IRQ_VEC_PRTY_CHECK  ( IRQ_VEC_PRTY0_CME | \
                              IRQ_VEC_PRTY1_CME | \
                              IRQ_VEC_PRTY2_CME | \
                              IRQ_VEC_PRTY3_CME | \
                              IRQ_VEC_PRTY4_CME | \
                              IRQ_VEC_PRTY5_CME | \
                              IRQ_VEC_PRTY6_CME | \
                              IRQ_VEC_PRTY7_CME | \
                              IRQ_VEC_PRTY8_CME | \
                              IRQ_VEC_PRTY9_CME | \
                              IRQ_VEC_PRTY10_CME | \
                              IRQ_VEC_PRTY11_CME | \
                              IRQ_VEC_PRTY12_CME )

extern uint32_t      g_current_prty_level;

extern uint8_t
g_eimr_stack[NUM_EXT_IRQ_PRTY_LEVELS] __attribute__((section(".sbss")));

extern int           g_eimr_stack_ctr;

extern uint64_t
g_eimr_override_stack[NUM_EXT_IRQ_PRTY_LEVELS] __attribute__((section(".sbss")));

extern uint64_t      g_eimr_override;

/// Restore a vector of interrupts by overwriting EIMR.
#if !defined(__IOTA__)
UNLESS__PPE42_IRQ_CORE_C__(extern)
inline void
pk_irq_vec_restore(PkMachineContext* context)
{
    pk_critical_section_enter(context);

    if (g_eimr_stack_ctr >= 0)
    {
        out64(STD_LCL_EIMR,
              ext_irq_vectors_cme[g_eimr_stack[g_eimr_stack_ctr]][IDX_MASK_VEC]);
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
        PK_TRACE_ERR("ERROR: Messed up EIMR book keeping: g_eimr_stack_ctr=%d. HALT CME!",
                     g_eimr_stack_ctr);
        PK_PANIC(CME_UIH_EIMR_STACK_UNDERFLOW);
    }

    //pk_critical_section_exit(context);
}
#endif
