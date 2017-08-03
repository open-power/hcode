/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe/iota/iota_uih.h $              */
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
// Notes:
// - The only define names that should be changed/added/removed
//   in this file are:
//   - IRQ_VEC_PRTY(n>0)_CME(x)
//   - IDX_PRTY_LVL_(task_abbr) and reflect in relevant H-code as well
//   - All other define names are used in H-codes
// - The variable names and actions in this file must perfectly match associated
//   definitions in cme_irq_common.c

#ifndef __IOTA_UIH_H__
#define __IOTA_UIH_H__

#include "iota.h"

// Need to generically pull this in
// iota_uih_cfg.h
#include "iota_app_cfg.h"
#include "std_register_addresses.h"
#include "std_irq_config.h"

extern uint32_t iota_uih(void);
extern void __hwmacro_setup(void);

extern uint64_t g_ext_irq_vector;
extern const uint64_t ext_irq_vectors_cme[IOTA_NUM_EXT_IRQ_PRIORITIES][2];

// Needed by ppehw_common.h
#define PK_IRQ_POLARITY_ACTIVE_LOW  0
#define PK_IRQ_POLARITY_ACTIVE_HIGH 1
#define PK_IRQ_TRIGGER_LEVEL_SENSITIVE 0
#define PK_IRQ_TRIGGER_EDGE_SENSITIVE  1


// Changed to pick this up from p9_cme_irq.h
#if defined(__COMMENT_OUT__)
// Priority Levels
#define IDX_PRTY_LVL_HIPRTY         0
#define IDX_PRTY_LVL_DB3            1
#define IDX_PRTY_LVL_DB2            2
#define IDX_PRTY_LVL_SPWU           3
#define IDX_PRTY_LVL_WAKE           4
#define IDX_PRTY_LVL_STOP           5
#define IDX_PRTY_LVL_DB1            6
#define IDX_PRTY_LVL_DB0            7
#define IDX_PRTY_LVL_INTERCME_IN0   8
#define IDX_PRTY_LVL_PMCR           9
#define IDX_PRTY_LVL_DISABLED       10
#define IDX_PRTY_VEC                0
#define IDX_MASK_VEC                1
extern const uint64_t ext_irq_vectors_cme[IOTA_NUM_EXT_IRQ_PRIORITIES][2];

// Group0: Non-task hi-prty IRQs
#define IRQ_VEC_PRTY0_CME   (uint64_t)(0xFE00000000000000)
// Group1: DB3
#define IRQ_VEC_PRTY1_CME   (uint64_t)(0x0030000000000000)
// Group2: DB2
#define IRQ_VEC_PRTY2_CME   (uint64_t)(0x0000300000000000)
// Group3: SPWU
#define IRQ_VEC_PRTY3_CME   (uint64_t)(0x0003000000000000)
// Group4: WAKE
#define IRQ_VEC_PRTY4_CME   (uint64_t)(0x000CC00000000000)
// Group5: STOP
#define IRQ_VEC_PRTY5_CME   (uint64_t)(0x00000C0000000000)
// Group6: DB1
#define IRQ_VEC_PRTY6_CME   (uint64_t)(0x0000000000C00000)
// Group7: DB0
#define IRQ_VEC_PRTY7_CME   (uint64_t)(0x000000000C000000)
// Group8: INTERCME_IN0
#define IRQ_VEC_PRTY8_CME   (uint64_t)(0x0100000000000000)
// Group9: PMCR
#define IRQ_VEC_PRTY9_CME   (uint64_t)(0x0000000030000000)
// Group10: We should never detect these
#define IRQ_VEC_PRTY10_CME  (uint64_t)(0x00C003FFC33FFFFF)

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
                              IRQ_VEC_PRTY10_CME )
#endif
extern uint32_t g_current_prty_level;
extern uint8_t  g_eimr_stack[IOTA_NUM_EXT_IRQ_PRIORITIES] SECTION_SBSS;
extern int      g_eimr_stack_ctr;
extern uint64_t g_eimr_override_stack[IOTA_NUM_EXT_IRQ_PRIORITIES]SECTION_SBSS;
extern uint64_t g_eimr_override;
#endif //__IOTA_UIH_H__
