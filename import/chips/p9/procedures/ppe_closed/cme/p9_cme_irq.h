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

// We define four levels of TRACE outputs:
// _INF:  Trace level used for main informational events.
// _DBG:  Trace level used for expanded debugging.
// _WARN: Trace level used when suspecious event happens.
// _ERR:  Trace level at time of an error that leads to a halt.
#define MY_TRACE_INF(...)   PK_TRACE("INF: "__VA_ARGS__);
#ifdef DEV_DEBUG
    #define MY_TRACE_DBG(...)   PK_TRACE("DBG: "__VA_ARGS__);
#else
    #define MY_TRACE_DBG(...)
#endif
#define MY_TRACE_WARN(...)  PK_TRACE("WARN: "__VA_ARGS__);
#define MY_TRACE_ERR(...)   PK_TRACE("ERR: "__VA_ARGS__);

#define TRUE  1
#define FALSE 0

// Priority Levels
#define IDX_PRTY_LVL_HIPRTY      0
#define IDX_PRTY_LVL_BCE_DB3     1
#define IDX_PRTY_LVL_WAKE_DB2    2
#define IDX_PRTY_LVL_STOP        3
#define IDX_PRTY_LVL_DB1         4
#define IDX_PRTY_LVL_PMCR_DB0    5
#define IDX_PRTY_LVL_DISABLED    6
#define IDX_PRTY_VEC             0
#define IDX_MASK_VEC             1
#define NUM_EXT_IRQ_PRTY_LEVELS  (uint8_t)(7)
extern const uint64_t ext_irq_vectors_cme[NUM_EXT_IRQ_PRTY_LEVELS][2];

// Group0: Non-task hi-prty IRQs
#define IRQ_VEC_PRTY0_CME   (uint64_t)(0xFE00000000000000)
// Group1: DB3
#define IRQ_VEC_PRTY1_CME   (uint64_t)(0x0030000000000000)
// Group2: DB2
#define IRQ_VEC_PRTY2_CME   (uint64_t)(0x0000300000000000)
// Group3: WAKEUP + STOP
#define IRQ_VEC_PRTY3_CME   (uint64_t)(0x000FCC0000000000)
// Group4: DB1
#define IRQ_VEC_PRTY4_CME   (uint64_t)(0x0000000000C00000)
// Group5: BD0 + PMCR
#define IRQ_VEC_PRTY5_CME   (uint64_t)(0x000000003C000000)
// Group6: We should never detect these
#define IRQ_VEC_PRTY6_CME   (uint64_t)(0x01C003FFC33FFFFF)

// This should be 0xFFFFFFFFFFFFFFFF
#define IRQ_VEC_PRTY_CHECK  ( IRQ_VEC_PRTY0_CME | \
                              IRQ_VEC_PRTY1_CME | \
                              IRQ_VEC_PRTY2_CME | \
                              IRQ_VEC_PRTY3_CME | \
                              IRQ_VEC_PRTY4_CME | \
                              IRQ_VEC_PRTY5_CME | \
                              IRQ_VEC_PRTY6_CME )

extern uint8_t       g_current_prty_level;
extern uint8_t       g_eimr_stack[NUM_EXT_IRQ_PRTY_LEVELS];
extern int           g_eimr_stack_ctr;
extern uint64_t      g_eimr_override_stack[NUM_EXT_IRQ_PRTY_LEVELS];
extern uint64_t      g_eimr_override;

/// Restore a vector of interrupts by overwriting EIMR.
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
        PK_TRACE("Code bug: Messed up EIMR book keeping: g_eimr_stack_ctr=%d",
                 g_eimr_stack_ctr);
        pk_halt();
    }

    pk_critical_section_exit(context);
}
