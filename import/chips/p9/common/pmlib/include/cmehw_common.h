/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/common/pmlib/include/cmehw_common.h $         */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2018                                                    */
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
#ifndef __CMEHW_COMMON_H__
#define __CMEHW_COMMON_H__


/// Second Half Local Register Access
/// use in32/out32 for first half
#define in32_sh(addr)                   in32(addr+4)
#define out32_sh(addr, data)            out32(addr+4, data)

/// Core Masks

enum CME_CORE_MASKS
{
    CME_MASK_C0                     = 2, // Just Core0 = 0b10
    CME_MASK_C1                     = 1, // Just Core1 = 0b01
    CME_MASK_BC                     = 3  // Both Cores = 0b11
};

/// CME SCOM

enum CME_SCOM_CONTROLS
{
    CME_SCOM_NOP                    = 0,
    CME_SCOM_EQ                     = 0,
    CME_SCOM_OR                     = 1,
    CME_SCOM_AND                    = 2,
    CME_SCOM_QUEUED                 = 3
};

enum CME_BCEBAR_INDEXES
{
    CME_BCEBAR_0                    = 0,
    CME_BCEBAR_1                    = 1
};

#define CME_SCOM_ADDR(addr, core, op)   (addr | (core << 22) | (op << 20))

// cme getscom default with 'eq' op
#define CME_GETSCOM(addr, core, data)                          \
    PPE_LVD(CME_SCOM_ADDR(addr, core, CME_SCOM_EQ), data);

// cme getscom with 'and' op
#define CME_GETSCOM_AND(addr, core, data)                      \
    PPE_LVD(CME_SCOM_ADDR(addr, core, CME_SCOM_AND), data);

// cme getscom with 'or' op
#define CME_GETSCOM_OR(addr, core, data)                       \
    PPE_LVD(CME_SCOM_ADDR(addr, core, CME_SCOM_OR), data);

// use this to override cme getscom with user specified op
#define CME_GETSCOM_OP(addr, core, scom_op, data)              \
    PPE_LVD(CME_SCOM_ADDR(addr, core, scom_op), data);


// use this to override undesired queued cme putscom with nop
#define CME_PUTSCOM_NOP(addr, core, data)                      \
    putscom_norc(CME_SCOM_ADDR(addr, core, CME_SCOM_NOP), data);

// queued cme putscom if enabled; otherwise default with nop
#if defined(USE_CME_QUEUED_SCOM)
#define CME_PUTSCOM(addr, core, data)                          \
    putscom_norc(CME_SCOM_ADDR(addr, core, CME_SCOM_QUEUED), data);
#else
#define CME_PUTSCOM(addr, core, data)                          \
    putscom_norc(CME_SCOM_ADDR(addr, core, CME_SCOM_NOP), data);
#endif

#endif  /* __CMEHW_COMMON_H__ */
