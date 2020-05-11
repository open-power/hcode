/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/phb/reg00008_unused.H $       */
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
#include "fapi2.H"

#ifndef __PHB_REG00008_H_UNUSED__
#define __PHB_REG00008_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace phb
{
#endif


//>> PREP_[REGS_PFIRMASK_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REGS_PFIRMASK_REG_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REGS_PFIRMASK_REG_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REGS_PFIRMASK_REG_WO_AND]

//>> GET_[REGS_PFIRMASK_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REGS_PFIRMASK_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REGS_PFIRMASK_REG_WO_AND;
#endif
    return fapi2::getScom(i_target, REGS_PFIRMASK_REG_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REGS_PFIRMASK_REG_WO_AND]

//>> PUT_[REGS_PFIRMASK_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REGS_PFIRMASK_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REGS_PFIRMASK_REG_RW, REGS_PFIRMASK_REG_WO_AND, REGS_PFIRMASK_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, REGS_PFIRMASK_REG_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REGS_PFIRMASK_REG_WO_AND]

//>> PREP_[REGS_PFIRMASK_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REGS_PFIRMASK_REG_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REGS_PFIRMASK_REG_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REGS_PFIRMASK_REG_WO_OR]

//>> GET_[REGS_PFIRMASK_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REGS_PFIRMASK_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REGS_PFIRMASK_REG_WO_OR;
#endif
    return fapi2::getScom(i_target, REGS_PFIRMASK_REG_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REGS_PFIRMASK_REG_WO_OR]

//>> PUT_[REGS_PFIRMASK_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REGS_PFIRMASK_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REGS_PFIRMASK_REG_RW, REGS_PFIRMASK_REG_WO_AND, REGS_PFIRMASK_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, REGS_PFIRMASK_REG_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REGS_PFIRMASK_REG_WO_OR]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
