/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pauc/reg00002_unused.H $      */
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

#ifndef __PAUC_REG00002_H_UNUSED__
#define __PAUC_REG00002_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> PREP_[DL_PPE_WRAP_XIRAMEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_XIRAMEDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_XIRAMEDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_XIRAMEDR]

//>> GET_[DL_PPE_WRAP_XIRAMEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_XIRAMEDR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_XIRAMEDR;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_XIRAMEDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMEDR]

//>> PUT_[DL_PPE_WRAP_XIRAMEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_XIRAMEDR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMEDR));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_XIRAMEDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_XIRAMEDR]


//>> SET_[DL_PPE_WRAP_XIRAMEDR_GA_IR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMEDR_GA_IR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMEDR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMEDR_GA_IR,
           DL_PPE_WRAP_XIRAMEDR_GA_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMEDR_GA_IR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMEDR_GA_IR]

//>> SET_[DL_PPE_WRAP_XIRAMEDR_GA_IR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMEDR_GA_IR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMEDR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMEDR_GA_IR,
           DL_PPE_WRAP_XIRAMEDR_GA_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMEDR_GA_IR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMEDR_GA_IR]

//>> GET_[DL_PPE_WRAP_XIRAMEDR_GA_IR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMEDR_GA_IR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMEDR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMEDR_GA_IR,
           DL_PPE_WRAP_XIRAMEDR_GA_IR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMEDR_GA_IR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMEDR_GA_IR]

//>> SET_[DL_PPE_WRAP_XIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMEDR_EDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMEDR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMEDR_EDR,
           DL_PPE_WRAP_XIRAMEDR_EDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMEDR_EDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMEDR_EDR]

//>> SET_[DL_PPE_WRAP_XIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIRAMEDR_EDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMEDR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIRAMEDR_EDR,
           DL_PPE_WRAP_XIRAMEDR_EDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMEDR_EDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIRAMEDR_EDR]

//>> GET_[DL_PPE_WRAP_XIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIRAMEDR_EDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIRAMEDR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIRAMEDR_EDR,
           DL_PPE_WRAP_XIRAMEDR_EDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIRAMEDR_EDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIRAMEDR_EDR]

//>> PREP_[DL_PPE_WRAP_XIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_XIXCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_XIXCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_XIXCR]

//>> GET_[DL_PPE_WRAP_XIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_XIXCR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_XIXCR;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_XIXCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_XIXCR]

//>> PUT_[DL_PPE_WRAP_XIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_XIXCR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIXCR));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_XIXCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_XIXCR]


//>> SET_[DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIXCR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR,
           DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR]

//>> SET_[DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIXCR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR,
           DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR]

//>> GET_[DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIXCR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR,
           DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIXCR_PPE_XIXCR_XCR]

//>> SET_[DL_PPE_WRAP_XIXCR_NULL_CTR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIXCR_NULL_CTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIXCR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIXCR_NULL_CTR,
           DL_PPE_WRAP_XIXCR_NULL_CTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_XIXCR_NULL_CTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIXCR_NULL_CTR]

//>> SET_[DL_PPE_WRAP_XIXCR_NULL_CTR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_XIXCR_NULL_CTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIXCR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_XIXCR_NULL_CTR,
           DL_PPE_WRAP_XIXCR_NULL_CTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_XIXCR_NULL_CTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_XIXCR_NULL_CTR]

//>> GET_[DL_PPE_WRAP_XIXCR_NULL_CTR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_XIXCR_NULL_CTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_XIXCR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_XIXCR_NULL_CTR,
           DL_PPE_WRAP_XIXCR_NULL_CTR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_XIXCR_NULL_CTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_XIXCR_NULL_CTR]

//>> PREP_[DL_SCOM_MAC_FIR_MASK_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_SCOM_MAC_FIR_MASK_REG_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_SCOM_MAC_FIR_MASK_REG_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_SCOM_MAC_FIR_MASK_REG_RW]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_SCOM_MAC_FIR_MASK_REG_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_SCOM_MAC_FIR_MASK_REG_RW;
#endif
    return fapi2::getScom(i_target, DL_SCOM_MAC_FIR_MASK_REG_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_RW]

//>> PUT_[DL_SCOM_MAC_FIR_MASK_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_SCOM_MAC_FIR_MASK_REG_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_SCOM_MAC_FIR_MASK_REG_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_SCOM_MAC_FIR_MASK_REG_RW]

//>> PREP_[DL_SCOM_MAC_FIR_MASK_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_SCOM_MAC_FIR_MASK_REG_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_SCOM_MAC_FIR_MASK_REG_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_SCOM_MAC_FIR_MASK_REG_WO_AND]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_SCOM_MAC_FIR_MASK_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_SCOM_MAC_FIR_MASK_REG_WO_AND;
#endif
    return fapi2::getScom(i_target, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_WO_AND]

//>> PUT_[DL_SCOM_MAC_FIR_MASK_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_SCOM_MAC_FIR_MASK_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_SCOM_MAC_FIR_MASK_REG_WO_AND]

//>> PREP_[DL_SCOM_MAC_FIR_MASK_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_SCOM_MAC_FIR_MASK_REG_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_SCOM_MAC_FIR_MASK_REG_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_SCOM_MAC_FIR_MASK_REG_WO_OR]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_SCOM_MAC_FIR_MASK_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_SCOM_MAC_FIR_MASK_REG_WO_OR;
#endif
    return fapi2::getScom(i_target, DL_SCOM_MAC_FIR_MASK_REG_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_WO_OR]

//>> PUT_[DL_SCOM_MAC_FIR_MASK_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_SCOM_MAC_FIR_MASK_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_SCOM_MAC_FIR_MASK_REG_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_SCOM_MAC_FIR_MASK_REG_WO_OR]


//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_RX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_IOO1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI0_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_OMI1_TX_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_ZCAL_INVALID_STATE_OR_PARITY_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_INT_HWERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_EXT_HWERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_WATCHDOG_OR_INTERRUPT_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALT_DEBUG_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_HALTED_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_WATCHDOG_TIMEOUT_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_MISSED_SCRUB_TICK_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_UNCORRECTABLE_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_ARB_ARRAY_CORRECTABLE_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_ABORT_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_FATAL_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_WARNING_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_DFT_ERROR_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_RECAL_NOT_RUN_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_THREAD_LOCKED_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_6_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK]

//>> SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.setBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK]

//>> CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return o_data.clearBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK]

//>> GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK]
static inline bool GET_DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_MASK_REG_RW, DL_SCOM_MAC_FIR_MASK_REG_WO_AND, DL_SCOM_MAC_FIR_MASK_REG_WO_OR));
#endif
    return i_data.getBit<DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_MASK_REG_PPE_CODE_7_MASK]

//>> PREP_[DL_SCOM_MAC_FIR_WOF_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_SCOM_MAC_FIR_WOF_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_SCOM_MAC_FIR_WOF_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_SCOM_MAC_FIR_WOF_REG]

//>> GET_[DL_SCOM_MAC_FIR_WOF_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_SCOM_MAC_FIR_WOF_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_SCOM_MAC_FIR_WOF_REG;
#endif
    return fapi2::getScom(i_target, DL_SCOM_MAC_FIR_WOF_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_WOF_REG]

//>> PUT_[DL_SCOM_MAC_FIR_WOF_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_SCOM_MAC_FIR_WOF_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_WOF_REG));
#endif
    return fapi2::putScom(i_target, DL_SCOM_MAC_FIR_WOF_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_SCOM_MAC_FIR_WOF_REG]


//>> SET_[DL_SCOM_MAC_FIR_WOF_REG_WOF]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_WOF_REG_WOF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_WOF_REG));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_WOF_REG_WOF,
           DL_SCOM_MAC_FIR_WOF_REG_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_WOF_REG_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_WOF_REG_WOF]

//>> SET_[DL_SCOM_MAC_FIR_WOF_REG_WOF]
static inline fapi2::buffer<uint64_t>& SET_DL_SCOM_MAC_FIR_WOF_REG_WOF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_WOF_REG));
#endif
    return o_data.insertFromRight<DL_SCOM_MAC_FIR_WOF_REG_WOF,
           DL_SCOM_MAC_FIR_WOF_REG_WOF_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_WOF_REG_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_SCOM_MAC_FIR_WOF_REG_WOF]

//>> GET_[DL_SCOM_MAC_FIR_WOF_REG_WOF]
static inline fapi2::buffer<uint64_t>& GET_DL_SCOM_MAC_FIR_WOF_REG_WOF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_SCOM_MAC_FIR_WOF_REG));
#endif
    return i_data.extractToRight<DL_SCOM_MAC_FIR_WOF_REG_WOF,
           DL_SCOM_MAC_FIR_WOF_REG_WOF_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_SCOM_MAC_FIR_WOF_REG_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_SCOM_MAC_FIR_WOF_REG_WOF]

//>> PREP_[PB_FP23_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_FP23_CFG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_FP23_CFG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_FP23_CFG]

//>> GET_[PB_FP23_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_FP23_CFG(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_FP23_CFG;
#endif
    return fapi2::getScom(i_target, PB_FP23_CFG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_FP23_CFG]

//>> PUT_[PB_FP23_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_FP23_CFG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return fapi2::putScom(i_target, PB_FP23_CFG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_FP23_CFG]


//>> SET_[PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8]

//>> SET_[PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8]

//>> SET_[PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.setBit<PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8]

//>> CLEAR_[PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.clearBit<PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8]

//>> GET_[PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8]

//>> GET_[PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8]
static inline bool GET_PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.getBit<PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_CREDIT_PRIORITY_4_NOT_8]

//>> SET_[PB_FP23_CFG_2_DISABLE_GATHERING]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_DISABLE_GATHERING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_DISABLE_GATHERING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_GATHERING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_DISABLE_GATHERING]

//>> SET_[PB_FP23_CFG_2_DISABLE_GATHERING]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_DISABLE_GATHERING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_DISABLE_GATHERING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_GATHERING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_DISABLE_GATHERING]

//>> SET_[PB_FP23_CFG_2_DISABLE_GATHERING]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_DISABLE_GATHERING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.setBit<PB_FP23_CFG_2_DISABLE_GATHERING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_GATHERING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_DISABLE_GATHERING]

//>> CLEAR_[PB_FP23_CFG_2_DISABLE_GATHERING]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FP23_CFG_2_DISABLE_GATHERING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.clearBit<PB_FP23_CFG_2_DISABLE_GATHERING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_GATHERING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FP23_CFG_2_DISABLE_GATHERING]

//>> GET_[PB_FP23_CFG_2_DISABLE_GATHERING]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_2_DISABLE_GATHERING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_2_DISABLE_GATHERING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_GATHERING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_DISABLE_GATHERING]

//>> GET_[PB_FP23_CFG_2_DISABLE_GATHERING]
static inline bool GET_PB_FP23_CFG_2_DISABLE_GATHERING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.getBit<PB_FP23_CFG_2_DISABLE_GATHERING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_GATHERING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_DISABLE_GATHERING]

//>> SET_[PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION]

//>> SET_[PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION]

//>> SET_[PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.setBit<PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION]

//>> CLEAR_[PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.clearBit<PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION]

//>> GET_[PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION]

//>> GET_[PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION]
static inline bool GET_PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.getBit<PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_DISABLE_CMD_COMPRESSION]

//>> SET_[PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION]

//>> SET_[PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION]

//>> SET_[PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.setBit<PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION]

//>> CLEAR_[PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.clearBit<PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION]

//>> GET_[PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION]

//>> GET_[PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION]
static inline bool GET_PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.getBit<PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_DISABLE_PRSP_COMPRESSION]

//>> SET_[PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT,
           PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT]

//>> SET_[PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT,
           PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT]

//>> GET_[PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT,
           PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_LL_CREDIT_FW_LIMIT]

//>> SET_[PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT,
           PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT]

//>> SET_[PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT,
           PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT]

//>> GET_[PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT,
           PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_LL_CREDIT_HW_LIMIT]

//>> SET_[PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT,
           PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT]

//>> SET_[PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT,
           PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT]

//>> GET_[PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT,
           PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_LL_CREDIT_QW_LIMIT]

//>> SET_[PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP]

//>> SET_[PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP]

//>> SET_[PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.setBit<PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP]

//>> CLEAR_[PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.clearBit<PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP]

//>> GET_[PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP]

//>> GET_[PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP]
static inline bool GET_PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.getBit<PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_FMR_ENABLE_1PER4_PRESP]

//>> SET_[PB_FP23_CFG_23_CMD_EXP_TIME]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_23_CMD_EXP_TIME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_23_CMD_EXP_TIME,
           PB_FP23_CFG_23_CMD_EXP_TIME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_23_CMD_EXP_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_23_CMD_EXP_TIME]

//>> SET_[PB_FP23_CFG_23_CMD_EXP_TIME]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_23_CMD_EXP_TIME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_23_CMD_EXP_TIME,
           PB_FP23_CFG_23_CMD_EXP_TIME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_23_CMD_EXP_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_23_CMD_EXP_TIME]

//>> GET_[PB_FP23_CFG_23_CMD_EXP_TIME]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_23_CMD_EXP_TIME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_23_CMD_EXP_TIME,
           PB_FP23_CFG_23_CMD_EXP_TIME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_23_CMD_EXP_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_23_CMD_EXP_TIME]

//>> SET_[PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR]

//>> SET_[PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR]

//>> SET_[PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.setBit<PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR]

//>> CLEAR_[PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.clearBit<PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR]

//>> GET_[PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR]

//>> GET_[PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR]
static inline bool GET_PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.getBit<PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_RUN_AFTER_FRAME_ERROR]

//>> SET_[PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST]

//>> SET_[PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST]

//>> SET_[PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.setBit<PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST]

//>> CLEAR_[PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.clearBit<PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST]

//>> GET_[PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST]

//>> GET_[PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST]
static inline bool GET_PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.getBit<PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_BRICKWALL_CREDITS_TO_NEST]

//>> SET_[PB_FP23_CFG_2_PRS_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_PRS_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_PRS_SPARE,
           PB_FP23_CFG_2_PRS_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_2_PRS_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_PRS_SPARE]

//>> SET_[PB_FP23_CFG_2_PRS_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_2_PRS_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_2_PRS_SPARE,
           PB_FP23_CFG_2_PRS_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_2_PRS_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_2_PRS_SPARE]

//>> GET_[PB_FP23_CFG_2_PRS_SPARE]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_2_PRS_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_2_PRS_SPARE,
           PB_FP23_CFG_2_PRS_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_2_PRS_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_2_PRS_SPARE]

//>> SET_[PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8]

//>> SET_[PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8]

//>> SET_[PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.setBit<PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8]

//>> CLEAR_[PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.clearBit<PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8]

//>> GET_[PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8]

//>> GET_[PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8]
static inline bool GET_PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.getBit<PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_CREDIT_PRIORITY_4_NOT_8]

//>> SET_[PB_FP23_CFG_3_DISABLE_GATHERING]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_DISABLE_GATHERING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_DISABLE_GATHERING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_GATHERING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_DISABLE_GATHERING]

//>> SET_[PB_FP23_CFG_3_DISABLE_GATHERING]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_DISABLE_GATHERING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_DISABLE_GATHERING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_GATHERING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_DISABLE_GATHERING]

//>> SET_[PB_FP23_CFG_3_DISABLE_GATHERING]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_DISABLE_GATHERING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.setBit<PB_FP23_CFG_3_DISABLE_GATHERING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_GATHERING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_DISABLE_GATHERING]

//>> CLEAR_[PB_FP23_CFG_3_DISABLE_GATHERING]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FP23_CFG_3_DISABLE_GATHERING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.clearBit<PB_FP23_CFG_3_DISABLE_GATHERING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_GATHERING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FP23_CFG_3_DISABLE_GATHERING]

//>> GET_[PB_FP23_CFG_3_DISABLE_GATHERING]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_3_DISABLE_GATHERING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_3_DISABLE_GATHERING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_GATHERING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_DISABLE_GATHERING]

//>> GET_[PB_FP23_CFG_3_DISABLE_GATHERING]
static inline bool GET_PB_FP23_CFG_3_DISABLE_GATHERING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.getBit<PB_FP23_CFG_3_DISABLE_GATHERING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_GATHERING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_DISABLE_GATHERING]

//>> SET_[PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION]

//>> SET_[PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION]

//>> SET_[PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.setBit<PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION]

//>> CLEAR_[PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.clearBit<PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION]

//>> GET_[PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION]

//>> GET_[PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION]
static inline bool GET_PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.getBit<PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_DISABLE_CMD_COMPRESSION]

//>> SET_[PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION]

//>> SET_[PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION]

//>> SET_[PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.setBit<PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION]

//>> CLEAR_[PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.clearBit<PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION]

//>> GET_[PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION]

//>> GET_[PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION]
static inline bool GET_PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.getBit<PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_DISABLE_PRSP_COMPRESSION]

//>> SET_[PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT,
           PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT]

//>> SET_[PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT,
           PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT]

//>> GET_[PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT,
           PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_LL_CREDIT_FW_LIMIT]

//>> SET_[PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT,
           PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT]

//>> SET_[PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT,
           PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT]

//>> GET_[PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT,
           PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_LL_CREDIT_HW_LIMIT]

//>> SET_[PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT,
           PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT]

//>> SET_[PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT,
           PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT]

//>> GET_[PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT,
           PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_LL_CREDIT_QW_LIMIT]

//>> SET_[PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP]

//>> SET_[PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP]

//>> SET_[PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.setBit<PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP]

//>> CLEAR_[PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.clearBit<PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP]

//>> GET_[PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP]

//>> GET_[PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP]
static inline bool GET_PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.getBit<PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_FMR_ENABLE_1PER4_PRESP]

//>> SET_[PB_FP23_CFG_3_FMR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_FMR_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_FMR_SPARE,
           PB_FP23_CFG_3_FMR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_3_FMR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_FMR_SPARE]

//>> SET_[PB_FP23_CFG_3_FMR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_FMR_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_FMR_SPARE,
           PB_FP23_CFG_3_FMR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_3_FMR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_FMR_SPARE]

//>> GET_[PB_FP23_CFG_3_FMR_SPARE]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_3_FMR_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_3_FMR_SPARE,
           PB_FP23_CFG_3_FMR_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_3_FMR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_FMR_SPARE]

//>> SET_[PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR]

//>> SET_[PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR]

//>> SET_[PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.setBit<PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR]

//>> CLEAR_[PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.clearBit<PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR]

//>> GET_[PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR]

//>> GET_[PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR]
static inline bool GET_PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.getBit<PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_RUN_AFTER_FRAME_ERROR]

//>> SET_[PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST]

//>> SET_[PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST]

//>> SET_[PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.setBit<PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST]

//>> CLEAR_[PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.clearBit<PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST]

//>> GET_[PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST]

//>> GET_[PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST]
static inline bool GET_PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.getBit<PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_BRICKWALL_CREDITS_TO_NEST]

//>> SET_[PB_FP23_CFG_3_PRS_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_PRS_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_PRS_SPARE,
           PB_FP23_CFG_3_PRS_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_FP23_CFG_3_PRS_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_PRS_SPARE]

//>> SET_[PB_FP23_CFG_3_PRS_SPARE]
static inline fapi2::buffer<uint64_t>& SET_PB_FP23_CFG_3_PRS_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return o_data.insertFromRight<PB_FP23_CFG_3_PRS_SPARE,
           PB_FP23_CFG_3_PRS_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_FP23_CFG_3_PRS_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_FP23_CFG_3_PRS_SPARE]

//>> GET_[PB_FP23_CFG_3_PRS_SPARE]
static inline fapi2::buffer<uint64_t>& GET_PB_FP23_CFG_3_PRS_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_FP23_CFG));
#endif
    return i_data.extractToRight<PB_FP23_CFG_3_PRS_SPARE,
           PB_FP23_CFG_3_PRS_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_FP23_CFG_3_PRS_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_FP23_CFG_3_PRS_SPARE]

//>> PREP_[PB_TRACE_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_TRACE_CFG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_TRACE_CFG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_TRACE_CFG]

//>> GET_[PB_TRACE_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_TRACE_CFG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_TRACE_CFG;
#endif
    return fapi2::getScom(i_target, PB_TRACE_CFG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_TRACE_CFG]

//>> PUT_[PB_TRACE_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_TRACE_CFG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_TRACE_CFG));
#endif
    return fapi2::putScom(i_target, PB_TRACE_CFG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_TRACE_CFG]


//>> SET_[PB_TRACE_CFG_0L_SEL]
static inline fapi2::buffer<uint64_t>& SET_PB_TRACE_CFG_0L_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TRACE_CFG));
#endif
    return o_data.insertFromRight<PB_TRACE_CFG_0L_SEL,
           PB_TRACE_CFG_0L_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TRACE_CFG_0L_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TRACE_CFG_0L_SEL]

//>> SET_[PB_TRACE_CFG_0L_SEL]
static inline fapi2::buffer<uint64_t>& SET_PB_TRACE_CFG_0L_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TRACE_CFG));
#endif
    return o_data.insertFromRight<PB_TRACE_CFG_0L_SEL,
           PB_TRACE_CFG_0L_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TRACE_CFG_0L_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TRACE_CFG_0L_SEL]

//>> GET_[PB_TRACE_CFG_0L_SEL]
static inline fapi2::buffer<uint64_t>& GET_PB_TRACE_CFG_0L_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TRACE_CFG));
#endif
    return i_data.extractToRight<PB_TRACE_CFG_0L_SEL,
           PB_TRACE_CFG_0L_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TRACE_CFG_0L_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TRACE_CFG_0L_SEL]

//>> SET_[PB_TRACE_CFG_0R_SEL]
static inline fapi2::buffer<uint64_t>& SET_PB_TRACE_CFG_0R_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TRACE_CFG));
#endif
    return o_data.insertFromRight<PB_TRACE_CFG_0R_SEL,
           PB_TRACE_CFG_0R_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TRACE_CFG_0R_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TRACE_CFG_0R_SEL]

//>> SET_[PB_TRACE_CFG_0R_SEL]
static inline fapi2::buffer<uint64_t>& SET_PB_TRACE_CFG_0R_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TRACE_CFG));
#endif
    return o_data.insertFromRight<PB_TRACE_CFG_0R_SEL,
           PB_TRACE_CFG_0R_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TRACE_CFG_0R_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TRACE_CFG_0R_SEL]

//>> GET_[PB_TRACE_CFG_0R_SEL]
static inline fapi2::buffer<uint64_t>& GET_PB_TRACE_CFG_0R_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TRACE_CFG));
#endif
    return i_data.extractToRight<PB_TRACE_CFG_0R_SEL,
           PB_TRACE_CFG_0R_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TRACE_CFG_0R_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TRACE_CFG_0R_SEL]

//>> SET_[PB_TRACE_CFG_1L_SEL]
static inline fapi2::buffer<uint64_t>& SET_PB_TRACE_CFG_1L_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TRACE_CFG));
#endif
    return o_data.insertFromRight<PB_TRACE_CFG_1L_SEL,
           PB_TRACE_CFG_1L_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TRACE_CFG_1L_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TRACE_CFG_1L_SEL]

//>> SET_[PB_TRACE_CFG_1L_SEL]
static inline fapi2::buffer<uint64_t>& SET_PB_TRACE_CFG_1L_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TRACE_CFG));
#endif
    return o_data.insertFromRight<PB_TRACE_CFG_1L_SEL,
           PB_TRACE_CFG_1L_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TRACE_CFG_1L_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TRACE_CFG_1L_SEL]

//>> GET_[PB_TRACE_CFG_1L_SEL]
static inline fapi2::buffer<uint64_t>& GET_PB_TRACE_CFG_1L_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TRACE_CFG));
#endif
    return i_data.extractToRight<PB_TRACE_CFG_1L_SEL,
           PB_TRACE_CFG_1L_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TRACE_CFG_1L_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TRACE_CFG_1L_SEL]

//>> SET_[PB_TRACE_CFG_1R_SEL]
static inline fapi2::buffer<uint64_t>& SET_PB_TRACE_CFG_1R_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TRACE_CFG));
#endif
    return o_data.insertFromRight<PB_TRACE_CFG_1R_SEL,
           PB_TRACE_CFG_1R_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TRACE_CFG_1R_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TRACE_CFG_1R_SEL]

//>> SET_[PB_TRACE_CFG_1R_SEL]
static inline fapi2::buffer<uint64_t>& SET_PB_TRACE_CFG_1R_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TRACE_CFG));
#endif
    return o_data.insertFromRight<PB_TRACE_CFG_1R_SEL,
           PB_TRACE_CFG_1R_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TRACE_CFG_1R_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TRACE_CFG_1R_SEL]

//>> GET_[PB_TRACE_CFG_1R_SEL]
static inline fapi2::buffer<uint64_t>& GET_PB_TRACE_CFG_1R_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TRACE_CFG));
#endif
    return i_data.extractToRight<PB_TRACE_CFG_1R_SEL,
           PB_TRACE_CFG_1R_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TRACE_CFG_1R_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TRACE_CFG_1R_SEL]

//>> PREP_[TRA0_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR1_CONFIG_5]

//>> GET_[TRA0_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_5;
#endif
    return fapi2::getScom(i_target, TRA0_TR1_CONFIG_5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_5]

//>> PUT_[TRA0_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_5));
#endif
    return fapi2::putScom(i_target, TRA0_TR1_CONFIG_5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR1_CONFIG_5]


//>> SET_[TRA0_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_5_C,
           TRA0_TR1_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_5_C]

//>> SET_[TRA0_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_5_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_5_C,
           TRA0_TR1_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_5_C]

//>> GET_[TRA0_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_5));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_5_C,
           TRA0_TR1_CONFIG_5_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_5_C]

//>> SET_[TRA0_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_5_D,
           TRA0_TR1_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_5_D]

//>> SET_[TRA0_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_5_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_5_D,
           TRA0_TR1_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_5_D]

//>> GET_[TRA0_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_5));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_5_D,
           TRA0_TR1_CONFIG_5_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_5_D]

//>> PREP_[TRA1_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_CONFIG_3]

//>> GET_[TRA1_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_3;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_3]

//>> PUT_[TRA1_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_CONFIG_3]


//>> SET_[TRA1_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_3_C,
           TRA1_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_3_C]

//>> SET_[TRA1_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_3_C,
           TRA1_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_3_C]

//>> GET_[TRA1_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_3_C,
           TRA1_TR0_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_3_C]

//>> SET_[TRA1_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_3_D,
           TRA1_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_3_D]

//>> SET_[TRA1_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_3_D,
           TRA1_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_3_D]

//>> GET_[TRA1_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_3_D,
           TRA1_TR0_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_3_D]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
