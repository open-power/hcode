/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/iota_uih_priority_table.c $ */
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
// Notes:
//   The following two lists,
//     ext_irq_priority_table[][] and IDX_PRTY_LVL_<task_abbr>, must match.
//   IDX_PRTY_LVL_<task_abbr> is the tasks priority level and serves
//   as the index into the ext_irq_priority_table[][] table.

#include "iota.h"
#include "iota_uih_cfg.h"

const uint64_t ext_irq_priority_table[IOTA_NUM_EXT_IRQ_PRIORITIES][2] =
{
    /* 0: IDX_PRTY_VEC    1: IDX_MASK_VEC */
    {
        IRQ_VEC_PRTY0_QME, // IDX_PRTY_LVL_TOPPRTY
        IRQ_VEC_PRTY0_QME  |
        IRQ_VEC_PRTY1_QME  |
        IRQ_VEC_PRTY2_QME  |
        IRQ_VEC_PRTY3_QME  |
        IRQ_VEC_PRTY4_QME  |
        IRQ_VEC_PRTY5_QME  |
        IRQ_VEC_PRTY6_QME  |
        IRQ_VEC_PRTY7_QME  |
        IRQ_VEC_PRTY8_QME  |
        IRQ_VEC_PRTY9_QME  |
        IRQ_VEC_PRTY10_QME  |
        IRQ_VEC_PRTY11_QME  |
        IRQ_VEC_PRTY12_QME
    },
    {
        IRQ_VEC_PRTY1_QME, // IDX_PRTY_LVL_DB2
        IRQ_VEC_PRTY1_QME  |
        IRQ_VEC_PRTY2_QME  |
        IRQ_VEC_PRTY3_QME  |
        IRQ_VEC_PRTY4_QME  |
        IRQ_VEC_PRTY5_QME  |
        IRQ_VEC_PRTY6_QME  |
        IRQ_VEC_PRTY7_QME  |
        IRQ_VEC_PRTY8_QME  |
        IRQ_VEC_PRTY9_QME  |
        IRQ_VEC_PRTY10_QME  |
        IRQ_VEC_PRTY11_QME  |
        IRQ_VEC_PRTY12_QME
    },
    {
        IRQ_VEC_PRTY2_QME, // IDX_PRTY_LVL_DB1
        IRQ_VEC_PRTY2_QME  |
        IRQ_VEC_PRTY3_QME  |
        IRQ_VEC_PRTY4_QME  |
        IRQ_VEC_PRTY5_QME  |
        IRQ_VEC_PRTY6_QME  |
        IRQ_VEC_PRTY7_QME  |
        IRQ_VEC_PRTY8_QME  |
        IRQ_VEC_PRTY9_QME  |
        IRQ_VEC_PRTY10_QME  |
        IRQ_VEC_PRTY11_QME  |
        IRQ_VEC_PRTY12_QME
    },
    {
        IRQ_VEC_PRTY3_QME, // IDX_PRTY_LVL_SPWU_RISE
        IRQ_VEC_PRTY3_QME  |
        IRQ_VEC_PRTY4_QME  |
        IRQ_VEC_PRTY5_QME  |
        IRQ_VEC_PRTY6_QME  |
        IRQ_VEC_PRTY7_QME  |
        IRQ_VEC_PRTY8_QME  |
        IRQ_VEC_PRTY9_QME  |
        IRQ_VEC_PRTY10_QME  |
        IRQ_VEC_PRTY11_QME  |
        IRQ_VEC_PRTY12_QME
    },
    {
        IRQ_VEC_PRTY4_QME, // IDX_PRTY_LVL_SPWU_FALL
        IRQ_VEC_PRTY4_QME  |
        IRQ_VEC_PRTY5_QME  |
        IRQ_VEC_PRTY6_QME  |
        IRQ_VEC_PRTY7_QME  |
        IRQ_VEC_PRTY8_QME  |
        IRQ_VEC_PRTY9_QME  |
        IRQ_VEC_PRTY10_QME  |
        IRQ_VEC_PRTY11_QME  |
        IRQ_VEC_PRTY12_QME
    },
    {
        IRQ_VEC_PRTY5_QME, // IDX_PRTY_LVL_RGWU_FAST
        IRQ_VEC_PRTY5_QME  |
        IRQ_VEC_PRTY6_QME  |
        IRQ_VEC_PRTY7_QME  |
        IRQ_VEC_PRTY8_QME  |
        IRQ_VEC_PRTY9_QME  |
        IRQ_VEC_PRTY10_QME  |
        IRQ_VEC_PRTY11_QME  |
        IRQ_VEC_PRTY12_QME
    },
    {
        IRQ_VEC_PRTY6_QME, // IDX_PRTY_LVL_PMCR
        IRQ_VEC_PRTY6_QME  |
        IRQ_VEC_PRTY7_QME  |
        IRQ_VEC_PRTY8_QME  |
        IRQ_VEC_PRTY9_QME  |
        IRQ_VEC_PRTY10_QME  |
        IRQ_VEC_PRTY11_QME  |
        IRQ_VEC_PRTY12_QME
    },
    {
        IRQ_VEC_PRTY7_QME, // IDX_PRTY_LVL_DB0
        IRQ_VEC_PRTY7_QME  |
        IRQ_VEC_PRTY8_QME  |
        IRQ_VEC_PRTY9_QME  |
        IRQ_VEC_PRTY10_QME  |
        IRQ_VEC_PRTY11_QME  |
        IRQ_VEC_PRTY12_QME
    },
    {
        IRQ_VEC_PRTY8_QME, // IDX_PRTY_LVL_MMA
        IRQ_VEC_PRTY8_QME  |
        IRQ_VEC_PRTY9_QME  |
        IRQ_VEC_PRTY10_QME  |
        IRQ_VEC_PRTY11_QME  |
        IRQ_VEC_PRTY12_QME
    },
    {
        IRQ_VEC_PRTY9_QME, // IDX_PRTY_LVL_STOP_FAST
        IRQ_VEC_PRTY9_QME  |
        IRQ_VEC_PRTY10_QME  |
        IRQ_VEC_PRTY11_QME  |
        IRQ_VEC_PRTY12_QME
    },
    {
        IRQ_VEC_PRTY10_QME, // IDX_PRTY_LVL_RGWU_SLOW
        IRQ_VEC_PRTY10_QME  |
        IRQ_VEC_PRTY11_QME  |
        IRQ_VEC_PRTY12_QME
    },
    {
        IRQ_VEC_PRTY11_QME, // IDX_PRTY_LVL_STOP_SLOW
        IRQ_VEC_PRTY11_QME  |
        IRQ_VEC_PRTY12_QME
    },
    {
        IRQ_VEC_PRTY12_QME, // IDX_PRTY_LVL_DISABLED
        IRQ_VEC_PRTY12_QME
    }
};


//compile_assert(ALL_CHECK, IRQ_VEC_PRTY_ALL_CHECK == 0xFFFFFFFFFFFFFFFF);
//compile_assert(XOR_CHECK, IRQ_VEC_PRTY_XOR_CHECK == 0xFFFFFFFFFFFFFFFF);
