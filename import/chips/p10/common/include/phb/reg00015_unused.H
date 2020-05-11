/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/phb/reg00015_unused.H $       */
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

#ifndef __PHB_REG00015_H_UNUSED__
#define __PHB_REG00015_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace phb
{
#endif


//>> PREP_[REGS_PBAIBTXDCR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REGS_PBAIBTXDCR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REGS_PBAIBTXDCR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REGS_PBAIBTXDCR_REG]

//>> GET_[REGS_PBAIBTXDCR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REGS_PBAIBTXDCR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REGS_PBAIBTXDCR_REG;
#endif
    return fapi2::getScom(i_target, REGS_PBAIBTXDCR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REGS_PBAIBTXDCR_REG]

//>> PUT_[REGS_PBAIBTXDCR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REGS_PBAIBTXDCR_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REGS_PBAIBTXDCR_REG));
#endif
    return fapi2::putScom(i_target, REGS_PBAIBTXDCR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REGS_PBAIBTXDCR_REG]


//>> SET_[REGS_PBAIBTXDCR_REG_A]
static inline fapi2::buffer<uint64_t>& SET_REGS_PBAIBTXDCR_REG_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PBAIBTXDCR_REG));
#endif
    return o_data.insertFromRight<REGS_PBAIBTXDCR_REG_A,
           REGS_PBAIBTXDCR_REG_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_phb Invalid dial access REGS_PBAIBTXDCR_REG_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PBAIBTXDCR_REG_A]

//>> SET_[REGS_PBAIBTXDCR_REG_A]
static inline fapi2::buffer<uint64_t>& SET_REGS_PBAIBTXDCR_REG_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PBAIBTXDCR_REG));
#endif
    return o_data.insertFromRight<REGS_PBAIBTXDCR_REG_A,
           REGS_PBAIBTXDCR_REG_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_phb Invalid dial access REGS_PBAIBTXDCR_REG_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PBAIBTXDCR_REG_A]

//>> GET_[REGS_PBAIBTXDCR_REG_A]
static inline fapi2::buffer<uint64_t>& GET_REGS_PBAIBTXDCR_REG_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PBAIBTXDCR_REG));
#endif
    return i_data.extractToRight<REGS_PBAIBTXDCR_REG_A,
           REGS_PBAIBTXDCR_REG_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_phb Invalid dial access REGS_PBAIBTXDCR_REG_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGS_PBAIBTXDCR_REG_A]

//>> SET_[REGS_PBAIBTXDCR_REG_R]
static inline fapi2::buffer<uint64_t>& SET_REGS_PBAIBTXDCR_REG_R(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PBAIBTXDCR_REG));
#endif
    return o_data.insertFromRight<REGS_PBAIBTXDCR_REG_R,
           REGS_PBAIBTXDCR_REG_R_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_phb Invalid dial access REGS_PBAIBTXDCR_REG_R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PBAIBTXDCR_REG_R]

//>> SET_[REGS_PBAIBTXDCR_REG_R]
static inline fapi2::buffer<uint64_t>& SET_REGS_PBAIBTXDCR_REG_R(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PBAIBTXDCR_REG));
#endif
    return o_data.insertFromRight<REGS_PBAIBTXDCR_REG_R,
           REGS_PBAIBTXDCR_REG_R_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_phb Invalid dial access REGS_PBAIBTXDCR_REG_R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGS_PBAIBTXDCR_REG_R]

//>> GET_[REGS_PBAIBTXDCR_REG_R]
static inline fapi2::buffer<uint64_t>& GET_REGS_PBAIBTXDCR_REG_R(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGS_PBAIBTXDCR_REG));
#endif
    return i_data.extractToRight<REGS_PBAIBTXDCR_REG_R,
           REGS_PBAIBTXDCR_REG_R_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_phb Invalid dial access REGS_PBAIBTXDCR_REG_R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGS_PBAIBTXDCR_REG_R]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
