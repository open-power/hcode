/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/iota_uih_cfg.h $          */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2017,2020                                                    */
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
//   - IRQ_VEC_PRTY(n>0)_QME(x)
//   - IDX_PRTY_LVL_(task_abbr) and reflect in relevant H-code as well
//   - All other define names are used in H-codes
// - The variable names and actions in this file must perfectly match associated
//   definitions in cme_irq_common.c

#ifndef __IOTA_UIH_H__
#define __IOTA_UIH_H__

#include "iota_app_cfg.h"

// Priority Levels
#define IOTA_NUM_EXT_IRQ_PRIORITIES 11

#define IDX_PRTY_LVL_HIPRTY         0
#define IDX_PRTY_LVL_DB2            1
#define IDX_PRTY_LVL_DB1            2
#define IDX_PRTY_LVL_SPWU           3
#define IDX_PRTY_LVL_RGWU           4
#define IDX_PRTY_LVL_PMCR           5
#define IDX_PRTY_LVL_DB0            6
#define IDX_PRTY_LVL_MMA            7
#define IDX_PRTY_LVL_STOP           8
#define IDX_PRTY_LVL_LOPRTY         9
#define IDX_PRTY_LVL_DISABLED       10

#define IDX_PRTY_VEC                0
#define IDX_MASK_VEC                1

// Priority Group Vectors
#define IRQ_VEC_PRTY0_QME   (uint64_t)(0xF000000000000000) // Group0: Hi-Prty
#define IRQ_VEC_PRTY1_QME   (uint64_t)(0x0000200000000000) // Group1: DB2
#define IRQ_VEC_PRTY2_QME   (uint64_t)(0x0000400000000000) // Group2: DB1
#define IRQ_VEC_PRTY3_QME   (uint64_t)(0x00000000FF000000) // Group3: SPWU
#define IRQ_VEC_PRTY4_QME   (uint64_t)(0x0000000000FF0000) // Group4: RGWU
#define IRQ_VEC_PRTY5_QME   (uint64_t)(0x0000100000000000) // Group5: PMCR
#define IRQ_VEC_PRTY6_QME   (uint64_t)(0x0000800000000000) // Group6: DB0
#define IRQ_VEC_PRTY7_QME   (uint64_t)(0x000000000000FF00) // Group7: STOP
#define IRQ_VEC_PRTY8_QME   (uint64_t)(0x0000000F00000000) // Group8: MMA
#define IRQ_VEC_PRTY9_QME   (uint64_t)(0x00F30FF0000000FF) // Group9: Lo-Prty
#define IRQ_VEC_PRTY10_QME  (uint64_t)(0x0F0C000000000000) // Group10:Disabled

// This should be 0xFFFFFFFFFFFFFFFF
#define IRQ_VEC_PRTY_ALL_CHECK  ( IRQ_VEC_PRTY0_QME | \
                                  IRQ_VEC_PRTY1_QME | \
                                  IRQ_VEC_PRTY2_QME | \
                                  IRQ_VEC_PRTY3_QME | \
                                  IRQ_VEC_PRTY4_QME | \
                                  IRQ_VEC_PRTY5_QME | \
                                  IRQ_VEC_PRTY6_QME | \
                                  IRQ_VEC_PRTY7_QME | \
                                  IRQ_VEC_PRTY8_QME | \
                                  IRQ_VEC_PRTY9_QME | \
                                  IRQ_VEC_PRTY10_QME )

#define IRQ_VEC_PRTY_XOR_CHECK  ( IRQ_VEC_PRTY0_QME ^ \
                                  IRQ_VEC_PRTY1_QME ^ \
                                  IRQ_VEC_PRTY2_QME ^ \
                                  IRQ_VEC_PRTY3_QME ^ \
                                  IRQ_VEC_PRTY4_QME ^ \
                                  IRQ_VEC_PRTY5_QME ^ \
                                  IRQ_VEC_PRTY6_QME ^ \
                                  IRQ_VEC_PRTY7_QME ^ \
                                  IRQ_VEC_PRTY8_QME ^ \
                                  IRQ_VEC_PRTY9_QME ^ \
                                  IRQ_VEC_PRTY10_QME )


#endif //__IOTA_UIH_H__
