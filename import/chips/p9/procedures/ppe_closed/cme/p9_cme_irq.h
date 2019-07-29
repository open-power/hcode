/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/p9_cme_irq.h $      */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2019                                                    */
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

//CME_TSEL is set to 8 which means FIT has period of 1.04ms when
//Nest Freq is 2000Mhz. Ideally, should calculate period of FIT based
//on nest frequency, but nest frequency is NOT plumbed to CME and we
//don't need to be highly accurate here.
//Note, from PGPE perspective, the latency of the DB0 operation depends
//on the amount of time DB0 is pending on Quad Manager plus COMM_RECV is pending
//on sibling. This is because COMM_RECV interrupt is triggered by the DB0
//handler on the quad manager. Therefore, we must set the COMM_RECV_TICK_THRESHOLD
//to be smaller.
#define DB0_FIT_TICK_THRESHOLD          1 //Threshold for DB0 pending count(2ms)
#define COMM_RECV_FIT_TICK_THRESHOLD    1 //Threshold for COMM_RECV pending countr(2ms)
#define INTERCME_IN0_FIT_TICK_THRESHOLD 1 //Threshold for COMM_RECV pending countr(2ms)

// Priority Levels
#define IDX_PRTY_LVL_HIPRTY         0
#define IDX_PRTY_LVL_DB3            1
#define IDX_PRTY_LVL_HB_LOSS        2
#define IDX_PRTY_LVL_DB2            3
#define IDX_PRTY_LVL_SPWU           4
#define IDX_PRTY_LVL_RGWU           5
#define IDX_PRTY_LVL_PCWU           6
#define IDX_PRTY_LVL_PM_ACTIVE      7
#define IDX_PRTY_LVL_DB1            8
#define IDX_PRTY_LVL_DB0            9
#define IDX_PRTY_LVL_INTERCME_IN0   10
#define IDX_PRTY_LVL_PMCR           11
#define IDX_PRTY_LVL_COMM_RECVD     12
#define IDX_PRTY_LVL_DISABLED       13
#define IDX_PRTY_VEC                0
#define IDX_MASK_VEC                1
#define NUM_EXT_IRQ_PRTY_LEVELS     14

// Group0: Non-task hi-prty IRQs
#define IRQ_VEC_PRTY0_CME   (uint64_t)(0xF600000000000000)
// Group1: DB3
#define IRQ_VEC_PRTY1_CME   (uint64_t)(0x0030000000000000)
// Group2: HB LOSS
#define IRQ_VEC_PRTY2_CME   (uint64_t)(0x0800000000000000)
// Group3: DB2
#define IRQ_VEC_PRTY3_CME   (uint64_t)(0x0000300000000000)
// Group4: SPWU
#define IRQ_VEC_PRTY4_CME   (uint64_t)(0x0003000000000000)
#define IRQ_SPWU            IRQ_VEC_PRTY4_CME
// Group5: RGWU
#define IRQ_VEC_PRTY5_CME   (uint64_t)(0x0000C00000000000)
#define IRQ_RGWU            IRQ_VEC_PRTY5_CME
// Group6: PCWU
#define IRQ_VEC_PRTY6_CME   (uint64_t)(0x000C000000000000)
#define IRQ_PCWU            IRQ_VEC_PRTY6_CME
// Group7: PM_ACTIVE
#define IRQ_VEC_PRTY7_CME   (uint64_t)(0x00000C0000000000)
#define IRQ_PMACT           IRQ_VEC_PRTY7_CME
// Group8: DB1
#define IRQ_VEC_PRTY8_CME   (uint64_t)(0x0000000000C00000)
#define IRQ_DB1             IRQ_VEC_PRTY8_CME
// Group9: DB0
#define IRQ_VEC_PRTY9_CME   (uint64_t)(0x000000000C000000)
// Group10: INTERCME_IN0
#define IRQ_VEC_PRTY10_CME  (uint64_t)(0x0100000000000000)
// Group11: PMCR
#define IRQ_VEC_PRTY11_CME  (uint64_t)(0x0000000030000000)
// Group12: COMM_RECVD
#define IRQ_VEC_PRTY12_CME  (uint64_t)(0x0000000400000000)
// Group13: We should never detect these
#define IRQ_VEC_PRTY13_CME  (uint64_t)(0x00C003FBC33FFFFF)

// Combined vector for all Stop IRQs that need to be manually
// masked during STOP state processing Do not include DB2 (always unmasked)
#define IRQ_VEC_STOP_CME (\
                          IRQ_SPWU  | \
                          IRQ_RGWU  | \
                          IRQ_PCWU  | \
                          IRQ_PMACT | \
                          IRQ_DB1     \
                         )

// This should be 0xFFFFFFFFFFFFFFFF
#define IRQ_VEC_PRTY_ALL_CHECK   (IRQ_VEC_PRTY0_CME | \
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
                                  IRQ_VEC_PRTY12_CME | \
                                  IRQ_VEC_PRTY13_CME )

#define IRQ_VEC_PRTY_XOR_CHECK   (IRQ_VEC_PRTY0_CME ^ \
                                  IRQ_VEC_PRTY1_CME ^ \
                                  IRQ_VEC_PRTY2_CME ^ \
                                  IRQ_VEC_PRTY3_CME ^ \
                                  IRQ_VEC_PRTY4_CME ^ \
                                  IRQ_VEC_PRTY5_CME ^ \
                                  IRQ_VEC_PRTY6_CME ^ \
                                  IRQ_VEC_PRTY7_CME ^ \
                                  IRQ_VEC_PRTY8_CME ^ \
                                  IRQ_VEC_PRTY9_CME ^ \
                                  IRQ_VEC_PRTY10_CME ^ \
                                  IRQ_VEC_PRTY11_CME ^ \
                                  IRQ_VEC_PRTY12_CME ^ \
                                  IRQ_VEC_PRTY13_CME )
