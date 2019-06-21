/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/xgpe/xgpe_irq.h $             */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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
#if !defined(__XGPE_IRQ_H__)
    #define __XGPE_IRQ_H__
#endif

// Group0: Error IRQs(GPE2_ERROR, XSTOP_GPE3)
#define IRQ_VEC_PRTY0_GPE 0x2400000000000000ull
// Group1: PBA overcurrent indicator TBD
#define IRQ_VEC_PRTY1_GPE 0x0001000000000000ull
// Group2: IPC(IPI3)
#define IRQ_VEC_PRTY2_GPE 0x0040000000000000ull
// Group3: PCB type F
#define IRQ_VEC_PRTY3_GPE 0x0000000100000000ull
// Group4: Other Engines IRQs
#ifdef _XGPE_STANDALONE_
    #define IRQ_VEC_PRTY4_GPE 0xDBBEFFFEFFFFFFFFull
#else
    #define IRQ_VEC_PRTY4_GPE 0x0000000000000000ull
#endif

#define IRQ_VEC_ALL_OUR_IRQS (IRQ_VEC_PRTY0_GPE | \
                              IRQ_VEC_PRTY1_GPE | \
                              IRQ_VEC_PRTY2_GPE | \
                              IRQ_VEC_PRTY3_GPE | \
                              IRQ_VEC_PRTY4_GPE)

#define IDX_PRTY_VEC 0
#define IDX_MASK_VEC 1
extern const uint64_t ext_irq_vectors_gpe[IOTA_NUM_EXT_IRQ_PRIORITIES][2];
extern uint32_t G_OCB_OIMR0_CLR;
extern uint32_t G_OCB_OIMR1_CLR;
extern uint32_t G_OCB_OIMR0_OR;
extern uint32_t G_OCB_OIMR1_OR;
