/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/powmanlib/qmehw_common.h $        */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
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
#ifndef __QMEHW_COMMON_H__
#define __QMEHW_COMMON_H__

enum QME_FLAGS
{
    QME_FLAGS_READY                 = 0
};

enum QME_CORE_MASKS
{
    QME_MASK_C0                     = 0x8, // Just Core0 = 0b1000
    QME_MASK_C1                     = 0x4, // Just Core1 = 0b0100
    QME_MASK_C2                     = 0x2, // Just Core2 = 0b0010
    QME_MASK_C3                     = 0x1, // Just Core3 = 0b0001
    QME_MASK_ALL_CORES              = 0xF  // ALL  Cores = 0b1111
};

enum QME_MULTICAST_TYPES
{
    QME_READ_OR                     = 0,
    QME_READ_AND                    = 1,
    QME_READ_EQ                     = 4,
    QME_WRITE                       = 5
};

enum QME_BCEBAR_INDEXES
{
    QME_BCEBAR_0                    = 0,
    QME_BCEBAR_1                    = 1
};

/// Wait Macro

#define PPE_CORE_CYCLE_RATIO       8 // core is 8 times faster than qme
#define PPE_FOR_LOOP_CYCLES        4 // fused compare branch(3), addition(1)
#define PPE_CORE_CYCLE_DIVIDER     (PPE_CORE_CYCLE_RATIO*PPE_FOR_LOOP_CYCLES)
#ifdef USE_PPE_IMPRECISE_MODE
#define PPE_WAIT_CORE_CYCLES(cc) \
    {volatile uint32_t l;asm volatile ("sync");for(l=0;l<cc/PPE_CORE_CYCLE_DIVIDER;l++);}
#else
#define PPE_WAIT_CORE_CYCLES(cc) \
    {volatile uint32_t l;for(l=0;l<cc/PPE_CORE_CYCLE_DIVIDER;l++);}
#endif



/// Local and SCOM Macro

// 0-3 | 4    | 5-7  | 8-11 | 12-15   | 16  | 17  | 18-19  | 20-27 | 28  | 29   | 30-31
// 0xC | MC=0 | 0    | 0    | Regions | Addr                       | Rsv | WSel | 0
// 0xC | MC=1 | MC_T | 0    | Regions | Per | Sat | SatSel | Addr  | Rsv | WSel | 0

#define QME_LCL_CORE_ADDR_MC(type, core, addr)   (0x08000000 | (type << 24) | (core << 16) | (addr))
#define QME_LCL_CORE_ADDR_WR(addr, core)         QME_LCL_CORE_ADDR_MC(QME_WRITE,    core, addr)
#define QME_LCL_CORE_ADDR_EQ(addr, core)         QME_LCL_CORE_ADDR_MC(QME_READ_EQ,  core, addr)
#define QME_LCL_CORE_ADDR_OR(addr, core)         QME_LCL_CORE_ADDR_MC(QME_READ_OR,  core, addr)
#define QME_LCL_CORE_ADDR_AND(addr, core)        QME_LCL_CORE_ADDR_MC(QME_READ_AND, core, addr)

#ifdef __PPE_QME
    typedef uint32_t buffer_t;
    #define QME_PUTLOCAL(addr, offset, data)  out32( (addr+offset), data )
    #define QME_GETLOCAL(addr, offset, data)  in32(  (addr+offset), data )
    #define BITFH(b)                          ((0x80000000) >> (b))
    #define BITSH(b)                          (1 << (63-(b)))
#else
    typedef uint64_t buffer_t;
    #define QME_PUTLOCAL(addr, offset, data)  out64( addr, data )
    #define QME_GETLOCAL(addr, offset, data)  in64(  addr, data )
    #define BITFH(b)                          ((0x8000000000000000) >> (b))
    #define BITSH(b)                          (1 << (63-(b)))
#endif


// 0     | 1    | 2-4  | 5-7      | 8 | 9-11  | 12-15  | 16-19  | 20-31
// 0/pcb | MC=0 | baseId          | Q | 0     | EndSel | Region |
// R/nW  | MC=0 | CpltId          | 1111/PcbM | EndSel | Region | Addr
// 0/pcb | MC=1 | MC_T | 0        | Q | 0     | EndSel | Region |
// R/nW  | MC=1 | MC_T | 111/MC_G | 1111/PcbM | EndSel | Region | Addr

#define QME_SCOM_CORE_ADDR_MC(type, core, addr)   (0x40000000 | (type << 27) | (core << 12) | (addr))
#define QME_SCOM_CORE_ADDR_WR(addr, core)         QME_SCOM_CORE_ADDR_MC(QME_WRITE,    core, addr)
#define QME_SCOM_CORE_ADDR_EQ(addr, core)         QME_SCOM_CORE_ADDR_MC(QME_READ_EQ,  core, addr)
#define QME_SCOM_CORE_ADDR_OR(addr, core)         QME_SCOM_CORE_ADDR_MC(QME_READ_OR,  core, addr)
#define QME_SCOM_CORE_ADDR_AND(addr, core)        QME_SCOM_CORE_ADDR_MC(QME_READ_AND, core, addr)

#define QME_GETSCOM(addr, data)                              \
    PPE_LVD(addr, data);

// cme getscom default with 'eq' op
#define QME_GETSCOM_EQ(addr, core, data)                     \
    PPE_LVD(QME_SCOM_CORE_ADDR_EQ(addr, core), data);

// cme getscom with 'and' op
#define QME_GETSCOM_AND(addr, core, data)                    \
    PPE_LVD(QME_SCOM_CORE_ADDR_AND(addr, core), data);

// cme getscom with 'or' op
#define QME_GETSCOM_OR(addr, core, data)                     \
    PPE_LVD(QME_SCOM_CORE_ADDR_OR(addr, core), data);

// use this to override cme getscom with user specified op
#define QME_GETSCOM_TYPE(addr, core, type, data)             \
    PPE_LVD(QME_SCOM_CORE_ADDR_MC(type, core, addr), data);


// use this to override undesired queued cme putscom with nop
#define QME_PUTSCOM_NOQ(addr, core, data)                    \
    putscom_norc(QME_SCOM_CORE_ADDR_MC(addr, core), data);

// queued cme putscom if enabled; otherwise default with nop
#if defined(USE_QME_QUEUED_SCOM)
#define QME_PUTSCOM(addr, data)                              \
    putscom_norc((addr | 0x00800000), data);
#define QME_PUTSCOM_C(addr, core, data)                      \
    putscom_norc(QME_SCOM_CORE_ADDR_MC((addr | 0x00800000), core), data);
#else
#define QME_PUTSCOM(addr, data)                              \
    putscom_norc(addr, data);
#define QME_PUTSCOM_C(addr, core, data)                      \
    putscom_norc(QME_SCOM_CORE_ADDR_MC(addr, core), data);
#endif

#endif  /* __QMEHW_COMMON_H__ */
