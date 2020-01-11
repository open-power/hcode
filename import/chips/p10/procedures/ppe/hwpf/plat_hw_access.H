/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/hwpf/plat_hw_access.H $       */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2012,2020                                                    */
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

/// @file plat_hw_access.H
///
/// @brief Platform hardware-access definitions
///

#ifndef _FAPI2_PLAT_HWACCESS_H_
#define _FAPI2_PLAT_HWACCESS_H_

//PLAT EXTRA//

#include <ppe42_mmio.h>
#include <ppe42_scom.h>
#include <ppe42_msr.h>

/// PIB Error Mask

#define PLAT_SET_PIB_ERROR_MASK(_m_mask) \
    {   /*  Read MSR */ \
        uint32_t msr_data = mfmsr(); \
        /* Set SEM field */ \
        msr_data &= ~(0xFF000000); \
        msr_data |= (uint32_t)(_m_mask << 24); \
        /* Write MSR */ \
        mtmsr(msr_data); \
    };

#define PLAT_GET_PIB_ERROR_MASK(_m_mask) \
    uint8_t _m_mask; \
    uint32_t _sem = mfmsr(); \
    _m_mask = (uint8_t)((_sem & MSR_SEM) >> (32-(MSR_SEM_START_BIT + MSR_SEM_LEN)));

/// GetScom
#define PLAT_GETSCOM(_m_rc, _m_target, _m_addr, _m_data)                 \
    if (_m_target.get().getPlatTargetType() & PPE_TARGET_TYPE_MULTICAST) \
    {                                                                    \
        PPE_LVD(_m_target.get().getScomAddressOverlay((uint32_t)_m_addr), _m_data);\
    } else {                                                             \
        PPE_LVD((uint32_t)_m_addr, _m_data);                                       \
    }

/// PutScom
#define PLAT_PUTSCOM(_m_rc, _m_target, _m_addr, _m_data)                  \
    if (_m_target.get().getPlatTargetType() & PPE_TARGET_TYPE_MULTICAST)  \
    {                                                                     \
        PPE_STVD(_m_target.get().getScomAddressOverlay((uint32_t)_m_addr), _m_data);\
    } else {                                                              \
        PPE_STVD((uint32_t)_m_addr, _m_data);                                       \
    }

//PLAT END//

#endif // _FAPI2_PLAT_HWACCESS_H_
