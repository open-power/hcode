/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/p9_cme_irq_priority_table.c $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2017,2018                                                    */
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
//     ext_irq_vectors_cme[][] and IDX_PRTY_LVL_<task_abbr>, must match.
//   IDX_PRTY_LVL_<task_abbr> is the tasks priority level and serves
//   as the index into the ext_irq_vectors_cme[][] table.

#include "p9_cme_irq.h"
#include "p9_cme_pstate.h"
#include "iota_app_cfg.h"

const uint64_t ext_irq_vectors_cme[IOTA_NUM_EXT_IRQ_PRIORITIES][2] =
{
    /* 0: IDX_PRTY_VEC    1: IDX_MASK_VEC */
    {
        IRQ_VEC_PRTY0_CME, /* 0: IDX_PRTY_LVL_HIPRTY */
        IRQ_VEC_PRTY0_CME  |
        IRQ_VEC_PRTY1_CME  |
        IRQ_VEC_PRTY2_CME  |
        IRQ_VEC_PRTY3_CME  |
        IRQ_VEC_PRTY4_CME  |
        IRQ_VEC_PRTY5_CME  |
        IRQ_VEC_PRTY6_CME  |
        IRQ_VEC_PRTY7_CME  |
        IRQ_VEC_PRTY8_CME  |
        IRQ_VEC_PRTY9_CME  |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY12_CME
    },
    {
        IRQ_VEC_PRTY1_CME, /* 1: IDX_PRTY_LVL_DB3 */
        IRQ_VEC_PRTY1_CME  |
        IRQ_VEC_PRTY2_CME  |
        IRQ_VEC_PRTY3_CME  |
        IRQ_VEC_PRTY4_CME  |
        IRQ_VEC_PRTY5_CME  |
        IRQ_VEC_PRTY6_CME  |
        IRQ_VEC_PRTY7_CME  |
        IRQ_VEC_PRTY8_CME  |
        IRQ_VEC_PRTY9_CME  |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY12_CME
    },
    {
        IRQ_VEC_PRTY2_CME, /* 2: IDX_PRTY_LVL_DB2 */
        IRQ_VEC_PRTY2_CME  |
        IRQ_VEC_PRTY3_CME  |
        IRQ_VEC_PRTY4_CME  |
        IRQ_VEC_PRTY5_CME  |
        IRQ_VEC_PRTY6_CME  |
        IRQ_VEC_PRTY7_CME  |
        IRQ_VEC_PRTY8_CME  |
        IRQ_VEC_PRTY9_CME  |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY12_CME
    },
    {
        IRQ_VEC_PRTY3_CME, /* 3: IDX_PRTY_LVL_SPWU */
        IRQ_VEC_PRTY3_CME  |
        IRQ_VEC_PRTY4_CME  |
        IRQ_VEC_PRTY5_CME  |
        IRQ_VEC_PRTY6_CME  |
        IRQ_VEC_PRTY7_CME  |
        IRQ_VEC_PRTY8_CME  |
        IRQ_VEC_PRTY9_CME  |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY12_CME
    },
    {
        IRQ_VEC_PRTY4_CME, /* 4: IDX_PRTY_LVL_RGWU */
        IRQ_VEC_PRTY4_CME  |
        IRQ_VEC_PRTY5_CME  |
        IRQ_VEC_PRTY6_CME  |
        IRQ_VEC_PRTY7_CME  |
        IRQ_VEC_PRTY8_CME  |
        IRQ_VEC_PRTY9_CME  |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY12_CME |
        // For Stop Entry/Exit related priority groups, mask every other SE/SX
        // related priority group, even higher ones, since the actual procedures
        // will open up EIMR at specific points in the SE/SX sequence.
        IRQ_VEC_STOP_CME
    },
    {
        IRQ_VEC_PRTY5_CME, /* 5: IDX_PRTY_LVL_PCWU */
        IRQ_VEC_PRTY5_CME  |
        IRQ_VEC_PRTY6_CME  |
        IRQ_VEC_PRTY7_CME  |
        IRQ_VEC_PRTY8_CME  |
        IRQ_VEC_PRTY9_CME  |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY12_CME |
        // For Stop Entry/Exit related priority groups, mask every other SE/SX
        // related priority group, even higher ones, since the actual procedures
        // will open up EIMR at specific points in the SE/SX sequence.
        IRQ_VEC_STOP_CME
    },
    {
        IRQ_VEC_PRTY6_CME, /* 6: IDX_PRTY_LVL_PM_ACTIVE */
        IRQ_VEC_PRTY6_CME  |
        IRQ_VEC_PRTY7_CME  |
        IRQ_VEC_PRTY8_CME  |
        IRQ_VEC_PRTY9_CME  |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY12_CME |
        // For Stop Entry/Exit related priority groups, mask every other SE/SX
        // related priority group, even higher ones, since the actual procedures
        // will open up EIMR at specific points in the SE/SX sequence.
        IRQ_VEC_STOP_CME
    },
    {
        IRQ_VEC_PRTY7_CME, /* 7: IDX_PRTY_LVL_DB1 */
        IRQ_VEC_PRTY7_CME  |
        IRQ_VEC_PRTY8_CME  |
        IRQ_VEC_PRTY9_CME  |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY12_CME
    },
    {
        IRQ_VEC_PRTY8_CME, /* 8: IDX_PRTY_LVL_DB0 */
        IRQ_VEC_PRTY8_CME  |
        IRQ_VEC_PRTY9_CME  |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY12_CME
    },
    {
        IRQ_VEC_PRTY9_CME, /* 9: IDX_PRTY_LVL_INTERCME_IN0 */
        IRQ_VEC_PRTY9_CME  |
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY12_CME |
        // The entirety of this handler is executed in EE=0 mode on PK, for IOTA
        // this behavior can ony be emulated by masking all higher priority
        // interrupts in the UIH
        IRQ_VEC_PRTY8_CME  |
        IRQ_VEC_PRTY7_CME  |
        IRQ_VEC_PRTY6_CME  |
        IRQ_VEC_PRTY5_CME  |
        IRQ_VEC_PRTY4_CME  |
        IRQ_VEC_PRTY3_CME  |
        IRQ_VEC_PRTY2_CME  |
        IRQ_VEC_PRTY1_CME
    },
    {
        IRQ_VEC_PRTY10_CME, /* 10: IDX_PRTY_LVL_PMCR */
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY12_CME
    },
    {
        IRQ_VEC_PRTY11_CME, /* 11: IDX_PRTY_LVL_COMM_RECVD */
        IRQ_VEC_PRTY11_CME |
        IRQ_VEC_PRTY12_CME |
        // The entirety of this handler is executed in EE=0 mode on PK, for IOTA
        // this behavior can ony be emulated by masking all higher priority
        // interrupts in the UIH
        IRQ_VEC_PRTY10_CME |
        IRQ_VEC_PRTY9_CME  |
        IRQ_VEC_PRTY8_CME  |
        IRQ_VEC_PRTY7_CME  |
        IRQ_VEC_PRTY6_CME  |
        IRQ_VEC_PRTY5_CME  |
        IRQ_VEC_PRTY4_CME  |
        IRQ_VEC_PRTY3_CME  |
        IRQ_VEC_PRTY2_CME  |
        IRQ_VEC_PRTY1_CME

    },
    {
        IRQ_VEC_PRTY12_CME, /* 12: IDX_PRTY_LVL_DISABLED */
        IRQ_VEC_PRTY12_CME
    }
};


compile_assert(ALL_CHECK, IRQ_VEC_PRTY_ALL_CHECK == 0xFFFFFFFFFFFFFFFF);
compile_assert(XOR_CHECK, IRQ_VEC_PRTY_XOR_CHECK == 0xFFFFFFFFFFFFFFFF);
