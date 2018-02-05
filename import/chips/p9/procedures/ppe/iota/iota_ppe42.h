/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe/iota/iota_ppe42.h $            */
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

#ifndef __ASSEMBLER__
    #include <stdint.h>
#endif

#include "ppe42_asm.h"
#include "ppe42_msr.h"
#include "ppe42_spr.h"

#ifndef __IOTA_PPE42_H__
#define __IOTA_PPE42_H__

#ifdef __PPE42_CORE_C__
    #define IF__PPE42_CORE_C__(x) x
    #define UNLESS__PPE42_CORE_C__(x)
#else
    #define IF__PPE42_CORE_C__(x)
    #define UNLESS__PPE42_CORE_C__(x) x
#endif

#define _IOTA_SAVE_D0_OFFSET    0
#define _IOTA_SAVE_D4_OFFSET    8
#define _IOTA_SAVE_D6_OFFSET   16
#define _IOTA_SAVE_D8_OFFSET   24
#define _IOTA_SAVE_D28_OFFSET  32
#define _IOTA_SAVE_D30_OFFSET  40
#define _IOTA_SAVE_SRR0_OFFSET 48
#define _IOTA_SAVE_SRR1_OFFSET 52
#define _IOTA_SAVE_LR_OFFSET   56
#define _IOTA_SAVE_CR_OFFSET   60
#define _IOTA_SAVE_R3_OFFSET   64
#define _IOTA_SAVE_R10_OFFSET  68
#define _IOTA_SAVE_CTR_OFFSET  72
#define _IOTA_SAVE_PADDING_OFFSET 76

#define _IOTA_TEMPORARY_R3_STACK_OFFSET -4

#define _IOTA_SCHEDULE_REASON_FIT 0x0fff
#define _IOTA_SCHEDULE_REASON_DEC 0x0ddd
#define _IOTA_SCHEDULE_REASON_EXT 0x0eee

#ifdef __ASSEMBLER__
// *INDENT-OFF*

# halt ppe with panic code macro
.macro _pk_panic, code
    tw  31,(\code)/256, (\code)%256
.endm

# This routine is called on any exception or interrupt and saves some state
# prior to setting up the call to and calling __iota_save_interrupt_state_and_schedule
# Note: must be <=8 instructions!

.macro __m_iota_interrupt_and_exception_handler, iota_schedule_reason
# temporarily place r3 on the stack, without incrementing sp
stw     %r3, _IOTA_TEMPORARY_R3_STACK_OFFSET(%r1)
# load the pointer to the location of where to save machine state
lwz     %r3, g_iota_curr_machine_state_ptr@sda21(0)
# save d8
stvd    %d8, _IOTA_SAVE_D8_OFFSET(%r3)
mr      %r9, %r3
li      %r3, \iota_schedule_reason
b      __iota_save_interrupt_state_and_schedule
.endm

// *INDENT-ON*
#else

/// 8-bit MMIO Write
#define out8(addr, data) \
    do {*(volatile uint8_t *)(addr) = (data);} while(0)

/// 8-bit MMIO Read
#define in8(addr) \
    ({uint8_t __data = *(volatile uint8_t *)(addr); __data;})

/// 16-bit MMIO Write
#define out16(addr, data) \
    do {*(volatile uint16_t *)(addr) = (data);} while(0)

/// 16-bit MMIO Read
#define in16(addr) \
    ({uint16_t __data = *(volatile uint16_t *)(addr); __data;})

/// 32-bit MMIO Write
#define out32(addr, data) \
    do {*(volatile uint32_t *)(addr) = (data);} while(0)

/// 32-bit MMIO Read
#define in32(addr) \
    ({uint32_t __data = *(volatile uint32_t *)(addr); __data;})

/// 64-bit MMIO Write
#define out64(addr, data) \
    {\
        uint64_t __d = (data); \
        uint32_t* __a = (uint32_t*)(addr); \
        asm volatile \
        (\
         "stvd %1, %0 \n" \
         : "=o"(*__a) \
         : "r"(__d) \
        ); \
    }

/// 64-bit MMIO Read
#define in64(addr) \
    ({\
        uint64_t __d; \
        uint32_t* __a = (uint32_t*)(addr); \
        asm volatile \
        (\
         "lvd %0, %1 \n" \
         :"=r"(__d) \
         :"o"(*__a) \
        ); \
        __d; \
    })

/// CouNT Leading Zeros Word
#define cntlzw(x) \
    ({uint32_t __x = (x); \
        uint32_t __lzw; \
        asm volatile ("cntlzw %0, %1" : "=r" (__lzw) : "r" (__x)); \
        __lzw;})

/// CouNT Leading Zeros : uint32_t
static inline int
cntlz32(uint32_t x)
{
    return cntlzw(x);
}

/// CouNT Leading Zeros : uint64_t
static inline int
cntlz64(uint64_t x)
{
    if (x > 0xffffffff)
    {
        return cntlz32(x >> 32);
    }
    else
    {
        return 32 + cntlz32(x);
    }
}


#define sync() asm volatile ("sync" : : : "memory")

// machine context is simply the MSR
typedef unsigned long PkMachineContext;

/// Enter a critical section, saving the current machine
/// context.
UNLESS__PPE42_CORE_C__(extern)
inline
void pk_interrupt_disable(PkMachineContext* context)
{
    *context = mfmsr();
    wrteei(0);
}

UNLESS__PPE42_CORE_C__(extern)
inline
void pk_machine_context_set(PkMachineContext* context)
{
    mtmsr(*context);
}

#define pk_critical_section_enter(pctx) \
    pk_interrupt_disable(pctx)

/// Exit a critical section by restoring the previous machine context.

#define pk_critical_section_exit(pctx) \
    pk_machine_context_set(pctx)

typedef union
{

    uint32_t value;

    struct
    {

        /// A flag indicating that PK is in thread mode after a call of
        /// pk_start_threads().
        unsigned thread_mode : 1;

        /// If this field is non-zero then PK is processing an interrupt
        /// and the \c irq field will contain the PkIrqId of the interrupt
        /// that kicked off interrupt processing.
        unsigned processing_interrupt : 1;

        /// The priority of the currently running thread.  In an interrupt
        /// context, this is the priority of the thread that was interrupted.
        unsigned thread_priority : 6;

        /// This bit tracks whether the current context can be discarded or
        /// if the context must be saved.  If the processor takes an interrupt
        /// and this bit is set, then the current context will be discarded.
        /// This bit is set at the end of handling an interrupt and prior
        /// to entering the wait enabled state.
        unsigned discard_ctx : 1;

        /// The PkIrqId of the currently running (or last run) handler.  If
        /// \c processing_interrupt is set, then this is the
        /// PkIrqId of the IRQ that is currently executing.
        unsigned irq : 7;

        /// Each PPE application will define (or not) the interpretation of
        /// this field.  Since SPRG0 is saved and restored during during thread
        /// context switches, this field can be used to record the progress of
        /// individual threads.  The kernel and/or application will provide
        /// APIs or macros to read and write this field.
        unsigned app_specific : 16;

    } fields;

} __KernelContext;

#endif // __ASSEMBLER__

#endif // __IOTA_PPE42_H__
