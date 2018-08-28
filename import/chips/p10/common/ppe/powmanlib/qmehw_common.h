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


/// Second Half Local Register Access
/// use in32/out32 for first half
#define in32_sh(addr)                   in32(addr+4)
#define out32_sh(addr, data)            out32(addr+4, data)

/// Core Masks

enum QME_CORE_MASKS
{
    QME_MASK_C0                     = 2, // Just Core0 = 0b10
    QME_MASK_C1                     = 1, // Just Core1 = 0b01
    QME_MASK_BC                     = 3  // Both Cores = 0b11
};

/// QME SCOM

enum QME_SCOM_CONTROLS
{
    QME_SCOM_NOP                    = 0,
    QME_SCOM_EQ                     = 0,
    QME_SCOM_OR                     = 1,
    QME_SCOM_AND                    = 2,
    QME_SCOM_QUEUED                 = 3
};

enum QME_BCEBAR_INDEXES
{
    QME_BCEBAR_0                    = 0,
    QME_BCEBAR_1                    = 1
};

#define QME_SCOM_ADDR(addr, core, op)   (addr | (core << 22) | (op << 20))

// cme getscom default with 'eq' op
#define QME_GETSCOM(addr, core, data)                          \
    PPE_LVD(QME_SCOM_ADDR(addr, core, QME_SCOM_EQ), data);

// cme getscom with 'and' op
#define QME_GETSCOM_AND(addr, core, data)                      \
    PPE_LVD(QME_SCOM_ADDR(addr, core, QME_SCOM_AND), data);

// cme getscom with 'or' op
#define QME_GETSCOM_OR(addr, core, data)                       \
    PPE_LVD(QME_SCOM_ADDR(addr, core, QME_SCOM_OR), data);

// use this to override cme getscom with user specified op
#define QME_GETSCOM_OP(addr, core, scom_op, data)              \
    PPE_LVD(QME_SCOM_ADDR(addr, core, scom_op), data);


// use this to override undesired queued cme putscom with nop
#define QME_PUTSCOM_NOP(addr, core, data)                      \
    putscom_norc(QME_SCOM_ADDR(addr, core, QME_SCOM_NOP), data);

// queued cme putscom if enabled; otherwise default with nop
#if defined(USE_QME_QUEUED_SCOM)
#define QME_PUTSCOM(addr, core, data)                          \
    putscom_norc(QME_SCOM_ADDR(addr, core, QME_SCOM_QUEUED), data);
#else
#define QME_PUTSCOM(addr, core, data)                          \
    putscom_norc(QME_SCOM_ADDR(addr, core, QME_SCOM_NOP), data);
#endif

#endif  /* __QMEHW_COMMON_H__ */
