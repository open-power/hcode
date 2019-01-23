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
#define IOTA_NUM_EXT_IRQ_PRIORITIES 13

#define IDX_PRTY_LVL_TOPPRI         0
#define IDX_PRTY_LVL_DB2            1
#define IDX_PRTY_LVL_DB1            2
#define IDX_PRTY_LVL_SPWU_RISE      3
#define IDX_PRTY_LVL_SPWU_FALL      4
#define IDX_PRTY_LVL_RGWU_FAST      5
#define IDX_PRTY_LVL_PMCR           6
#define IDX_PRTY_LVL_DB0            7
#define IDX_PRTY_LVL_MMA            8
#define IDX_PRTY_LVL_STOP_FAST      9
#define IDX_PRTY_LVL_RGWU_SLOW      10
#define IDX_PRTY_LVL_STOP_SLOW      11
#define IDX_PRTY_LVL_DISABLED       12

#define IDX_TIMER_FIT               13
#define IDX_TIMER_DEC               14
#define IDX_TIMER_DOG               15

#define IDX_PRTY_VEC                0
#define IDX_MASK_VEC                1

// Priority Group Vectors
#define IRQ_VEC_PRTY0_QME   (uint64_t)(0xF000000000000000) // Top-Prty
#define IRQ_VEC_PRTY1_QME   (uint64_t)(0x0000200000000000) // DB2
#define IRQ_VEC_PRTY2_QME   (uint64_t)(0x0000400000000000) // DB1
#define IRQ_VEC_PRTY3_QME   (uint64_t)(0x00000000F0000000) // SPWU_RISE
#define IRQ_VEC_PRTY4_QME   (uint64_t)(0x000000000F000000) // SPWU_FALL
#define IRQ_VEC_PRTY5_QME   (uint64_t)(0x0000000000F00000) // RGWU_FAST
#define IRQ_VEC_PRTY6_QME   (uint64_t)(0x0000100000000000) // PMCR
#define IRQ_VEC_PRTY7_QME   (uint64_t)(0x0000800000000000) // DB0
#define IRQ_VEC_PRTY8_QME   (uint64_t)(0x0000000F00000000) // MMA
#define IRQ_VEC_PRTY9_QME   (uint64_t)(0x000000000000F000) // STOP_FAST
#define IRQ_VEC_PRTY10_QME  (uint64_t)(0x00000000000F0000) // RGWU_SLOW
#define IRQ_VEC_PRTY11_QME  (uint64_t)(0x0000000000000F00) // STOP_SLOW
#define IRQ_VEC_PRTY12_QME  (uint64_t)(0x0FFF0FF0000000FF) // Disabled

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
                                  IRQ_VEC_PRTY10_QME | \
                                  IRQ_VEC_PRTY11_QME | \
                                  IRQ_VEC_PRTY12_QME )

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
                                  IRQ_VEC_PRTY10_QME ^ \
                                  IRQ_VEC_PRTY11_QME ^ \
                                  IRQ_VEC_PRTY12_QME )


#endif //__IOTA_UIH_H__
