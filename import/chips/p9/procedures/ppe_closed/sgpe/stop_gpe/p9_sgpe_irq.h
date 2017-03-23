/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_irq.h $ */
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

/// \file   p9_sgpe_irq.h
/// \brief  Shared and global definitions for SGPE H-codes.
/// \owner  Michael Olsen   Email: cmolsen@us.ibm.com
/// \owner  David Du        Email: daviddu@us.ibm.com

//-------------------------------------------------------------------//
//            DO NOT modify this file unless you're the owner        //
//-------------------------------------------------------------------//

// Notes:
// - The only define names that should be changed/added/removed
//   in this file are:
//   - IRQ_VEC_PRTY(n>0)_SGPE(x)
//   - IDX_PRTY_LVL_(task_abbr) and reflect in relevant H-code as well
//   - All other define names are used in H-codes
// - The variable names and actions in this file must perfectly match associated
//   definitions in p9_sgpe_irq.c

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
#define IDX_PRTY_LVL_HIPRTY         0
#define IDX_PRTY_LVL_IPI3_HIGH      1
#define IDX_PRTY_LVL_PIG_TYPE       2
#define IDX_PRTY_LVL_IPI3_LOW       3
#define IDX_PRTY_LVL_DISABLED       4
#define IDX_PRTY_VEC                0
#define IDX_MASK_VEC                1
#define NUM_EXT_IRQ_PRTY_LEVELS  (uint8_t)(5)
extern const uint64_t ext_irq_vectors_sgpe[NUM_EXT_IRQ_PRTY_LEVELS][2];

// Group0: Non-task hi-prty IRQs
// (@todo RTC166767 reenable gpe2_halt/checkstop_gpe3 when ready)
#define IRQ_VEC_PRTY0_SGPE   (uint64_t)(0x0000000000000000)
// Group1: ipi3_high
#define IRQ_VEC_PRTY1_SGPE   (uint64_t)(0x0000000800000000)
// Group2: pig_type
#define IRQ_VEC_PRTY2_SGPE   (uint64_t)(0x0000000000019000)
// Group3: ipi3_low
#define IRQ_VEC_PRTY3_SGPE   (uint64_t)(0x0000000000000004)
// Group4: We should never detect these
#define IRQ_VEC_PRTY4_SGPE   (uint64_t)(0x0100800000000000)
//#define IRQ_VEC_PRTY4_SGPE   (uint64_t)(0xFEFF7FF7FFFE6FFB)

#define IRQ_VEC_ALL_OUR_IRQS  ( IRQ_VEC_PRTY0_SGPE | \
                                IRQ_VEC_PRTY1_SGPE | \
                                IRQ_VEC_PRTY2_SGPE | \
                                IRQ_VEC_PRTY3_SGPE )      // Note, we do not incl PRTY4 here!

// This should be 0xFFFFFFFFFFFFFFFF
#define IRQ_VEC_PRTY_CHECK  ( IRQ_VEC_PRTY0_SGPE | \
                              IRQ_VEC_PRTY1_SGPE | \
                              IRQ_VEC_PRTY2_SGPE | \
                              IRQ_VEC_PRTY3_SGPE | \
                              IRQ_VEC_PRTY4_SGPE )

extern uint8_t       g_current_prty_level;
extern uint8_t       g_oimr_stack[NUM_EXT_IRQ_PRTY_LEVELS];
extern int           g_oimr_stack_ctr;
extern uint64_t      g_oimr_override_stack[NUM_EXT_IRQ_PRTY_LEVELS];
extern uint64_t      g_oimr_override;

/// Restore a vector of interrupts by overwriting EIMR.
UNLESS__PPE42_IRQ_CORE_C__(extern)
inline void
pk_irq_vec_restore(PkMachineContext* context)
{
    pk_critical_section_enter(context);

    if (g_oimr_stack_ctr >= 0)
    {

        out32(OCB_OIMR0_CLR, (uint32_t)((IRQ_VEC_ALL_OUR_IRQS |
                                         g_oimr_override_stack[g_oimr_stack_ctr]) >> 32));
        out32(OCB_OIMR1_CLR, (uint32_t)(IRQ_VEC_ALL_OUR_IRQS |
                                        g_oimr_override_stack[g_oimr_stack_ctr]));
        out32(OCB_OIMR0_OR,
              (uint32_t)((ext_irq_vectors_sgpe[g_oimr_stack[g_oimr_stack_ctr]][IDX_MASK_VEC] |
                          g_oimr_override) >> 32));
        out32(OCB_OIMR1_OR,
              (uint32_t)(ext_irq_vectors_sgpe[g_oimr_stack[g_oimr_stack_ctr]][IDX_MASK_VEC] |
                         g_oimr_override));

        // Restore the prty level tracker to the task that was interrupted, if any.
        g_current_prty_level = g_oimr_stack[g_oimr_stack_ctr];
        g_oimr_stack_ctr--;
    }
    else
    {
        PK_TRACE("Code bug: Messed up EIMR book keeping: g_oimr_stack_ctr=%d",
                 g_oimr_stack_ctr);
        PK_PANIC(SGPE_UIH_EIMR_STACK_UNDERFLOW);
    }

    //pk_critical_section_exit(context);
}
