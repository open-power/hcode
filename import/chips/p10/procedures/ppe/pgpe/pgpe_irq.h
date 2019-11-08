/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_irq.h $             */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2019                                                    */
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
#if !defined(__PGPE_IRQ_H__)
    #define __PGPE_IRQ_H__
#endif

// Group0: Error IRQs(OCB ERROR, GPE3_ERROR, XSTOP_GPE2, and PVREF_ERROR)
#define IRQ_VEC_PRTY0_GPE 0x5900000000000000ull
// Group1: PBAX(These interrupts shouldn't happen right now ever)
#define IRQ_VEC_PRTY1_GPE 0x000E000000000000ull
// Group2: IPC(IPI2)
#define IRQ_VEC_PRTY2_GPE 0x0080000000000000ull
// Group3: PCB(0,1 and 2)
#define IRQ_VEC_PRTY3_GPE 0x0000E00000000000ull
// Group4: Other Engines IRQs
//#define IRQ_VEC_PRTY4_GPE 0xA6711FFFFFFFFFFFull
#define IRQ_VEC_PRTY4_GPE 0x0000000000000000ull

#define IRQ_VEC_ALL_OUR_IRQS (IRQ_VEC_PRTY0_GPE | \
                              IRQ_VEC_PRTY1_GPE | \
                              IRQ_VEC_PRTY2_GPE | \
                              IRQ_VEC_PRTY3_GPE)

#define IDX_PRTY_VEC 0
#define IDX_MASK_VEC 1
extern const uint64_t ext_irq_vectors_gpe[IOTA_NUM_EXT_IRQ_PRIORITIES][2];
extern uint32_t G_OCB_OIMR0_CLR;
extern uint32_t G_OCB_OIMR1_CLR;
extern uint32_t G_OCB_OIMR0_OR;
extern uint32_t G_OCB_OIMR1_OR;

