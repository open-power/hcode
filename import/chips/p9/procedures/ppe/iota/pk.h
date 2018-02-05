/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe/iota/pk.h $                    */
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
#if !defined(__PK_H__)
#define __PK_H__

/** @file pk.h
 * @brief Pk replacements so that IOTA can use pk parts
 */

#include "ppe42_asm.h"
#include "iota_ppe42.h"
#include "iota_uih.h"
#include "iota_app_cfg.h"

#if !defined(NULL)
    #define NULL ((void*)0)
#endif

#ifndef __ASSEMBLER__
#include <stdint.h>
#include <stddef.h>
#include "iota_trace.h"


typedef uint64_t PkTimebase;
extern uint64_t pk_timebase_get();

#define pk_halt() iota_halt()
#define pk_irq_vec_restore(...)
#define compile_assert(name,e) \
    enum { compile_assert__##name = 1/(e) };


// This sets the SPRG0 in pk.
static inline void ppe42_app_ctx_set(uint16_t app_ctx)
{
    PkMachineContext    mctx;
    __KernelContext   __ctx;
    mctx = mfmsr();
    wrteei(0);
    __ctx.value = mfspr(SPRN_SPRG0);
    __ctx.fields.app_specific = app_ctx;
    mtspr(SPRN_SPRG0, __ctx.value);
    mtmsr(mctx);
}


typedef uint32_t PkIrqId; //location of left-most bit on in irq reg (64 bits)

#if !defined(PK_PANIC)

#if SIMICS_ENVIRONMENT
#define PK_PANIC(code)                  \
    do {                                \
        asm volatile ("stw     %r3, __pk_panic_save_r3@sda21(0)");      \
        asm volatile ("lwz     %r3, __pk_panic_dbcr@sda21(0)");         \
        asm volatile ("mtdbcr  %r3");                                   \
        asm volatile (".long %0" : : "i" (code));                       \
    } while(0)
#else
#define PK_PANIC(code)                                                  \
    do {                                                                \
        asm volatile ("tw 31, %0, %1" : : "i" (code/256) , "i" (code%256)); \
    } while (0)
#endif
#endif // SIMICS_ENVIRONMENT

// These variables are used by the PK_PANIC() definition above to save and
// restore state. __pk_panic_dbcr is the value loaded into DBCR to force
// traps to halt the PPE and freeze the timers.

#if SIMICS_ENVIRONMENT
#ifdef __PPE42_CORE_C__
uint32_t __pk_panic_save_r3;
uint32_t __pk_panic_dbcr = DBCR_RST_HALT;
#define __PK_PANIC_DEFS__
#else
#define __PK_PANIC_DEFS__                                               \
    extern uint32_t __pk_panic_save_r3;                             \
    extern uint32_t __pk_panic_dbcr;
#endif //SIMICS_ENVIRONMENT

#endif // PK_PANIC

#define MIN(X, Y)                               \
    ({                                          \
        typeof (X) __x = (X);                   \
        typeof (Y) __y = (Y);                   \
        (__x < __y) ? __x : __y; })

#define MAX(X, Y)                               \
    ({                                          \
        typeof (X) __x = (X);                   \
        typeof (Y) __y = (Y);                   \
        (__x > __y) ? __x : __y;                \
    })

#endif //__ASSEMBLER__
#endif
