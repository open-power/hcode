/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pauc/reg00009_unused.H $      */
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

#ifndef __PAUC_REG00009_H_UNUSED__
#define __PAUC_REG00009_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> PREP_[DL_PPE_WRAP_SCOM_FLAGS_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_SCOM_FLAGS_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FLAGS_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_SCOM_FLAGS_RW]

//>> GET_[DL_PPE_WRAP_SCOM_FLAGS_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_SCOM_FLAGS_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FLAGS_RW;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_SCOM_FLAGS_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FLAGS_RW]

//>> PUT_[DL_PPE_WRAP_SCOM_FLAGS_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_SCOM_FLAGS_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FLAGS_RW, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, DL_PPE_WRAP_SCOM_FLAGS_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_SCOM_FLAGS_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_SCOM_FLAGS_RW]

//>> PREP_[DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR]

//>> GET_[DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR]

//>> PUT_[DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FLAGS_RW, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, DL_PPE_WRAP_SCOM_FLAGS_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR]

//>> PREP_[DL_PPE_WRAP_SCOM_FLAGS_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_SCOM_FLAGS_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FLAGS_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_SCOM_FLAGS_WO_OR]

//>> GET_[DL_PPE_WRAP_SCOM_FLAGS_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_SCOM_FLAGS_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FLAGS_WO_OR;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_SCOM_FLAGS_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FLAGS_WO_OR]

//>> PUT_[DL_PPE_WRAP_SCOM_FLAGS_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_SCOM_FLAGS_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FLAGS_RW, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, DL_PPE_WRAP_SCOM_FLAGS_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_SCOM_FLAGS_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_SCOM_FLAGS_WO_OR]


//>> SET_[DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FLAGS_RW, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, DL_PPE_WRAP_SCOM_FLAGS_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD,
           DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD]

//>> SET_[DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FLAGS_RW, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, DL_PPE_WRAP_SCOM_FLAGS_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD,
           DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD]

//>> GET_[DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FLAGS_RW, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, DL_PPE_WRAP_SCOM_FLAGS_WO_OR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD,
           DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD]

//>> PREP_[PB_CFG_TLPM_MUX1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_CFG_TLPM_MUX1_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CFG_TLPM_MUX1_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_CFG_TLPM_MUX1_REG]

//>> GET_[PB_CFG_TLPM_MUX1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_CFG_TLPM_MUX1_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CFG_TLPM_MUX1_REG;
#endif
    return fapi2::getScom(i_target, PB_CFG_TLPM_MUX1_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG]

//>> PUT_[PB_CFG_TLPM_MUX1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_CFG_TLPM_MUX1_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return fapi2::putScom(i_target, PB_CFG_TLPM_MUX1_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_CFG_TLPM_MUX1_REG]


//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8]

//>> SET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_ALT_EVENTS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_ALT_EVENTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_ALT_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]

//>> SET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_ALT_EVENTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_ALT_EVENTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_ALT_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]

//>> SET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_ALT_EVENTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.setBit<PB_CFG_TLPM_MUX1_REG_ALT_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_ALT_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]

//>> CLEAR_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_CFG_TLPM_MUX1_REG_ALT_EVENTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.clearBit<PB_CFG_TLPM_MUX1_REG_ALT_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_ALT_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]

//>> GET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_ALT_EVENTS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_ALT_EVENTS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_ALT_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]

//>> GET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]
static inline bool GET_PB_CFG_TLPM_MUX1_REG_ALT_EVENTS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.getBit<PB_CFG_TLPM_MUX1_REG_ALT_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_ALT_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]

//>> PREP_[PB_CFG_TLPM_MUX2_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_CFG_TLPM_MUX2_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CFG_TLPM_MUX2_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_CFG_TLPM_MUX2_REG]

//>> GET_[PB_CFG_TLPM_MUX2_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_CFG_TLPM_MUX2_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CFG_TLPM_MUX2_REG;
#endif
    return fapi2::getScom(i_target, PB_CFG_TLPM_MUX2_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG]

//>> PUT_[PB_CFG_TLPM_MUX2_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_CFG_TLPM_MUX2_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return fapi2::putScom(i_target, PB_CFG_TLPM_MUX2_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_CFG_TLPM_MUX2_REG]


//>> SET_[PB_CFG_TLPM_MUX2_REG_9]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_9,
           PB_CFG_TLPM_MUX2_REG_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_9]

//>> SET_[PB_CFG_TLPM_MUX2_REG_9]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_9,
           PB_CFG_TLPM_MUX2_REG_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_9]

//>> GET_[PB_CFG_TLPM_MUX2_REG_9]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX2_REG_9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX2_REG_9,
           PB_CFG_TLPM_MUX2_REG_9_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG_9]

//>> SET_[PB_CFG_TLPM_MUX2_REG_10]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_10,
           PB_CFG_TLPM_MUX2_REG_10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_10]

//>> SET_[PB_CFG_TLPM_MUX2_REG_10]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_10,
           PB_CFG_TLPM_MUX2_REG_10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_10]

//>> GET_[PB_CFG_TLPM_MUX2_REG_10]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX2_REG_10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX2_REG_10,
           PB_CFG_TLPM_MUX2_REG_10_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG_10]

//>> SET_[PB_CFG_TLPM_MUX2_REG_11]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_11,
           PB_CFG_TLPM_MUX2_REG_11_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_11]

//>> SET_[PB_CFG_TLPM_MUX2_REG_11]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_11,
           PB_CFG_TLPM_MUX2_REG_11_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_11]

//>> GET_[PB_CFG_TLPM_MUX2_REG_11]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX2_REG_11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX2_REG_11,
           PB_CFG_TLPM_MUX2_REG_11_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG_11]

//>> SET_[PB_CFG_TLPM_MUX2_REG_12]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_12,
           PB_CFG_TLPM_MUX2_REG_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_12]

//>> SET_[PB_CFG_TLPM_MUX2_REG_12]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_12,
           PB_CFG_TLPM_MUX2_REG_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_12]

//>> GET_[PB_CFG_TLPM_MUX2_REG_12]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX2_REG_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX2_REG_12,
           PB_CFG_TLPM_MUX2_REG_12_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG_12]

//>> SET_[PB_CFG_TLPM_MUX2_REG_13]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_13,
           PB_CFG_TLPM_MUX2_REG_13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_13]

//>> SET_[PB_CFG_TLPM_MUX2_REG_13]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_13,
           PB_CFG_TLPM_MUX2_REG_13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_13]

//>> GET_[PB_CFG_TLPM_MUX2_REG_13]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX2_REG_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX2_REG_13,
           PB_CFG_TLPM_MUX2_REG_13_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG_13]

//>> SET_[PB_CFG_TLPM_MUX2_REG_14]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_14,
           PB_CFG_TLPM_MUX2_REG_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_14]

//>> SET_[PB_CFG_TLPM_MUX2_REG_14]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_14,
           PB_CFG_TLPM_MUX2_REG_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_14]

//>> GET_[PB_CFG_TLPM_MUX2_REG_14]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX2_REG_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX2_REG_14,
           PB_CFG_TLPM_MUX2_REG_14_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG_14]

//>> SET_[PB_CFG_TLPM_MUX2_REG_15]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_15,
           PB_CFG_TLPM_MUX2_REG_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_15]

//>> SET_[PB_CFG_TLPM_MUX2_REG_15]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_15,
           PB_CFG_TLPM_MUX2_REG_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_15]

//>> GET_[PB_CFG_TLPM_MUX2_REG_15]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX2_REG_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX2_REG_15,
           PB_CFG_TLPM_MUX2_REG_15_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG_15]

//>> PREP_[PB_EN_DOB_ECC_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_EN_DOB_ECC_ERR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_EN_DOB_ECC_ERR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_EN_DOB_ECC_ERR_REG]

//>> GET_[PB_EN_DOB_ECC_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_EN_DOB_ECC_ERR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_EN_DOB_ECC_ERR_REG;
#endif
    return fapi2::getScom(i_target, PB_EN_DOB_ECC_ERR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_EN_DOB_ECC_ERR_REG]

//>> PUT_[PB_EN_DOB_ECC_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_EN_DOB_ECC_ERR_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return fapi2::putScom(i_target, PB_EN_DOB_ECC_ERR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_EN_DOB_ECC_ERR_REG]


//>> SET_[PB_EN_DOB_ECC_ERR_REG_01_UE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_01_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_01_UE,
           PB_EN_DOB_ECC_ERR_REG_01_UE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_01_UE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_01_UE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_01_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_01_UE,
           PB_EN_DOB_ECC_ERR_REG_01_UE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_01_UE]

//>> GET_[PB_EN_DOB_ECC_ERR_REG_01_UE]
static inline fapi2::buffer<uint64_t>& GET_PB_EN_DOB_ECC_ERR_REG_01_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return i_data.extractToRight<PB_EN_DOB_ECC_ERR_REG_01_UE,
           PB_EN_DOB_ECC_ERR_REG_01_UE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_EN_DOB_ECC_ERR_REG_01_UE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_01_CE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_01_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_01_CE,
           PB_EN_DOB_ECC_ERR_REG_01_CE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_01_CE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_01_CE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_01_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_01_CE,
           PB_EN_DOB_ECC_ERR_REG_01_CE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_01_CE]

//>> GET_[PB_EN_DOB_ECC_ERR_REG_01_CE]
static inline fapi2::buffer<uint64_t>& GET_PB_EN_DOB_ECC_ERR_REG_01_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return i_data.extractToRight<PB_EN_DOB_ECC_ERR_REG_01_CE,
           PB_EN_DOB_ECC_ERR_REG_01_CE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_EN_DOB_ECC_ERR_REG_01_CE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_01_SUE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_01_SUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_01_SUE,
           PB_EN_DOB_ECC_ERR_REG_01_SUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_01_SUE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_01_SUE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_01_SUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_01_SUE,
           PB_EN_DOB_ECC_ERR_REG_01_SUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_01_SUE]

//>> GET_[PB_EN_DOB_ECC_ERR_REG_01_SUE]
static inline fapi2::buffer<uint64_t>& GET_PB_EN_DOB_ECC_ERR_REG_01_SUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return i_data.extractToRight<PB_EN_DOB_ECC_ERR_REG_01_SUE,
           PB_EN_DOB_ECC_ERR_REG_01_SUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_EN_DOB_ECC_ERR_REG_01_SUE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_23_UE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_23_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_23_UE,
           PB_EN_DOB_ECC_ERR_REG_23_UE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_23_UE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_23_UE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_23_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_23_UE,
           PB_EN_DOB_ECC_ERR_REG_23_UE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_23_UE]

//>> GET_[PB_EN_DOB_ECC_ERR_REG_23_UE]
static inline fapi2::buffer<uint64_t>& GET_PB_EN_DOB_ECC_ERR_REG_23_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return i_data.extractToRight<PB_EN_DOB_ECC_ERR_REG_23_UE,
           PB_EN_DOB_ECC_ERR_REG_23_UE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_EN_DOB_ECC_ERR_REG_23_UE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_23_CE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_23_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_23_CE,
           PB_EN_DOB_ECC_ERR_REG_23_CE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_23_CE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_23_CE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_23_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_23_CE,
           PB_EN_DOB_ECC_ERR_REG_23_CE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_23_CE]

//>> GET_[PB_EN_DOB_ECC_ERR_REG_23_CE]
static inline fapi2::buffer<uint64_t>& GET_PB_EN_DOB_ECC_ERR_REG_23_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return i_data.extractToRight<PB_EN_DOB_ECC_ERR_REG_23_CE,
           PB_EN_DOB_ECC_ERR_REG_23_CE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_EN_DOB_ECC_ERR_REG_23_CE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_23_SUE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_23_SUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_23_SUE,
           PB_EN_DOB_ECC_ERR_REG_23_SUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_23_SUE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_23_SUE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_23_SUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_23_SUE,
           PB_EN_DOB_ECC_ERR_REG_23_SUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_23_SUE]

//>> GET_[PB_EN_DOB_ECC_ERR_REG_23_SUE]
static inline fapi2::buffer<uint64_t>& GET_PB_EN_DOB_ECC_ERR_REG_23_SUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return i_data.extractToRight<PB_EN_DOB_ECC_ERR_REG_23_SUE,
           PB_EN_DOB_ECC_ERR_REG_23_SUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_EN_DOB_ECC_ERR_REG_23_SUE]

//>> PREP_[PB_PERFTRACE_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PERFTRACE_CFG_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PERFTRACE_CFG_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PERFTRACE_CFG_REG]

//>> GET_[PB_PERFTRACE_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PERFTRACE_CFG_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PERFTRACE_CFG_REG;
#endif
    return fapi2::getScom(i_target, PB_PERFTRACE_CFG_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG]

//>> PUT_[PB_PERFTRACE_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PERFTRACE_CFG_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return fapi2::putScom(i_target, PB_PERFTRACE_CFG_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PERFTRACE_CFG_REG]


//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]
static inline bool GET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]
static inline bool GET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]
static inline bool GET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_TSPARE6]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_TSPARE6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_TSPARE6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_TSPARE6]

//>> SET_[PB_PERFTRACE_CFG_REG_TSPARE6]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_TSPARE6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_TSPARE6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_TSPARE6]

//>> SET_[PB_PERFTRACE_CFG_REG_TSPARE6]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_TSPARE6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_TSPARE6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_TSPARE6]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_TSPARE6]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_TSPARE6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_TSPARE6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_TSPARE6]

//>> GET_[PB_PERFTRACE_CFG_REG_TSPARE6]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_TSPARE6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_TSPARE6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_TSPARE6]

//>> GET_[PB_PERFTRACE_CFG_REG_TSPARE6]
static inline bool GET_PB_PERFTRACE_CFG_REG_TSPARE6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_TSPARE6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_TSPARE6]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]
static inline bool GET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]
static inline bool GET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]
static inline bool GET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_TSPARE7]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_TSPARE7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_TSPARE7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_TSPARE7]

//>> SET_[PB_PERFTRACE_CFG_REG_TSPARE7]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_TSPARE7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_TSPARE7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_TSPARE7]

//>> SET_[PB_PERFTRACE_CFG_REG_TSPARE7]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_TSPARE7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_TSPARE7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_TSPARE7]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_TSPARE7]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_TSPARE7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_TSPARE7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_TSPARE7]

//>> GET_[PB_PERFTRACE_CFG_REG_TSPARE7]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_TSPARE7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_TSPARE7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_TSPARE7]

//>> GET_[PB_PERFTRACE_CFG_REG_TSPARE7]
static inline bool GET_PB_PERFTRACE_CFG_REG_TSPARE7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_TSPARE7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_TSPARE7]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT,
           PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT,
           PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT,
           PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT,
           PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT,
           PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT,
           PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT]

//>> PREP_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB]

//>> GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB]

//>> PUT_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB]


//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.setBit<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]

//>> CLEAR_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]

//>> GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]

//>> GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]
static inline bool GET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return i_data.getBit<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.setBit<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]

//>> CLEAR_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]

//>> GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]

//>> GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]
static inline bool GET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return i_data.getBit<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0,
           PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0,
           PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0]

//>> GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0,
           PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1,
           PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1,
           PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1]

//>> GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1,
           PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1]

//>> PREP_[PHY_PPE_WRAP_SCOM_WORK_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_SCOM_WORK_REG2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_SCOM_WORK_REG2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_SCOM_WORK_REG2]

//>> GET_[PHY_PPE_WRAP_SCOM_WORK_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_SCOM_WORK_REG2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_SCOM_WORK_REG2;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_SCOM_WORK_REG2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_WORK_REG2]

//>> PUT_[PHY_PPE_WRAP_SCOM_WORK_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_SCOM_WORK_REG2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_WORK_REG2));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_SCOM_WORK_REG2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_SCOM_WORK_REG2]


//>> SET_[PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_WORK_REG2));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2,
           PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2]

//>> SET_[PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_WORK_REG2));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2,
           PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2]

//>> GET_[PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_WORK_REG2));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2,
           PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2]

//>> PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK3;
#endif
    return fapi2::getScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]

//>> PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return fapi2::putScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]


//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> PREP_[EPS_THERM_WSUB_SKITTER_DATA2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_DATA2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_DATA2]

//>> GET_[EPS_THERM_WSUB_SKITTER_DATA2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_DATA2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA2;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_DATA2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_DATA2]

//>> PUT_[EPS_THERM_WSUB_SKITTER_DATA2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_DATA2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_DATA2));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_DATA2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_DATA2]


//>> PREP_[EPS_THERM_WSUB_SKITTER_FORCE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_FORCE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_FORCE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_FORCE_REG]

//>> GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_FORCE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_FORCE_REG;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_FORCE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG]

//>> PUT_[EPS_THERM_WSUB_SKITTER_FORCE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_FORCE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_FORCE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_FORCE_REG]


//>> SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline bool GET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> PREP_[MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MULTICAST_GROUP_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MULTICAST_GROUP_2]

//>> GET_[MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MULTICAST_GROUP_2;
#endif
    return fapi2::getScom(i_target, MULTICAST_GROUP_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MULTICAST_GROUP_2]

//>> PUT_[MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_2));
#endif
    return fapi2::putScom(i_target, MULTICAST_GROUP_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MULTICAST_GROUP_2]


//>> SET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& SET_MULTICAST_GROUP_2_MULTICAST2_GROUP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_2));
#endif
    return o_data.insertFromRight<MULTICAST_GROUP_2_MULTICAST2_GROUP,
           MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> SET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& SET_MULTICAST_GROUP_2_MULTICAST2_GROUP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_2));
#endif
    return o_data.insertFromRight<MULTICAST_GROUP_2_MULTICAST2_GROUP,
           MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> GET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& GET_MULTICAST_GROUP_2_MULTICAST2_GROUP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_2));
#endif
    return i_data.extractToRight<MULTICAST_GROUP_2_MULTICAST2_GROUP,
           MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> PREP_[TRA0_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_0]

//>> GET_[TRA0_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_0;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_0]

//>> PUT_[TRA0_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_0));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_0]


//>> SET_[TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_0));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> SET_[TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_0));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> GET_[TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_0));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> PREP_[TRA0_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR1_TRACE_HI_DATA_REG]

//>> GET_[TRA0_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, TRA0_TR1_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR1_TRACE_HI_DATA_REG]

//>> PUT_[TRA0_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, TRA0_TR1_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR1_TRACE_HI_DATA_REG]


//>> SET_[TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> PREP_[TRA0_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR1_CONFIG_9]

//>> GET_[TRA0_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_9;
#endif
    return fapi2::getScom(i_target, TRA0_TR1_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9]

//>> PUT_[TRA0_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return fapi2::putScom(i_target, TRA0_TR1_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR1_CONFIG_9]


//>> SET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_SPARE_LT]

//>> SET_[TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_SPARE_LT]

//>> SET_[TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_SPARE_LT]

//>> CLEAR_[TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_SPARE_LT]

//>> GET_[TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_SPARE_LT]

//>> GET_[TRA0_TR1_CONFIG_9_SPARE_LT]
static inline bool GET_TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_SPARE_LT]

//>> PREP_[DL_PPE_WRAP_SCOM_FLAGS_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_SCOM_FLAGS_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FLAGS_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_SCOM_FLAGS_RW]

//>> GET_[DL_PPE_WRAP_SCOM_FLAGS_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_SCOM_FLAGS_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FLAGS_RW;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_SCOM_FLAGS_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FLAGS_RW]

//>> PUT_[DL_PPE_WRAP_SCOM_FLAGS_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_SCOM_FLAGS_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FLAGS_RW, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, DL_PPE_WRAP_SCOM_FLAGS_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_SCOM_FLAGS_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_SCOM_FLAGS_RW]

//>> PREP_[DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR]

//>> GET_[DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR]

//>> PUT_[DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FLAGS_RW, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, DL_PPE_WRAP_SCOM_FLAGS_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR]

//>> PREP_[DL_PPE_WRAP_SCOM_FLAGS_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_SCOM_FLAGS_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FLAGS_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_SCOM_FLAGS_WO_OR]

//>> GET_[DL_PPE_WRAP_SCOM_FLAGS_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_SCOM_FLAGS_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FLAGS_WO_OR;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_SCOM_FLAGS_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FLAGS_WO_OR]

//>> PUT_[DL_PPE_WRAP_SCOM_FLAGS_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_SCOM_FLAGS_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FLAGS_RW, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, DL_PPE_WRAP_SCOM_FLAGS_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_SCOM_FLAGS_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_SCOM_FLAGS_WO_OR]


//>> SET_[DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FLAGS_RW, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, DL_PPE_WRAP_SCOM_FLAGS_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD,
           DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD]

//>> SET_[DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FLAGS_RW, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, DL_PPE_WRAP_SCOM_FLAGS_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD,
           DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD]

//>> GET_[DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FLAGS_RW, DL_PPE_WRAP_SCOM_FLAGS_WO_CLEAR, DL_PPE_WRAP_SCOM_FLAGS_WO_OR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD,
           DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FLAGS_SCOM_PPE_FLAGS_FIELD]

//>> PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK3;
#endif
    return fapi2::getScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]

//>> PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return fapi2::putScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]


//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> PREP_[EPS_THERM_WSUB_SKITTER_DATA2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_DATA2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_DATA2]

//>> GET_[EPS_THERM_WSUB_SKITTER_DATA2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_DATA2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA2;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_DATA2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_DATA2]

//>> PUT_[EPS_THERM_WSUB_SKITTER_DATA2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_DATA2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_DATA2));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_DATA2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_DATA2]


//>> PREP_[EPS_THERM_WSUB_SKITTER_FORCE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_FORCE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_FORCE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_FORCE_REG]

//>> GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_FORCE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_FORCE_REG;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_FORCE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG]

//>> PUT_[EPS_THERM_WSUB_SKITTER_FORCE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_FORCE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_FORCE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_FORCE_REG]


//>> SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline bool GET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> PREP_[MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MULTICAST_GROUP_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MULTICAST_GROUP_2]

//>> GET_[MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MULTICAST_GROUP_2;
#endif
    return fapi2::getScom(i_target, MULTICAST_GROUP_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MULTICAST_GROUP_2]

//>> PUT_[MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_2));
#endif
    return fapi2::putScom(i_target, MULTICAST_GROUP_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MULTICAST_GROUP_2]


//>> SET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& SET_MULTICAST_GROUP_2_MULTICAST2_GROUP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_2));
#endif
    return o_data.insertFromRight<MULTICAST_GROUP_2_MULTICAST2_GROUP,
           MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> SET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& SET_MULTICAST_GROUP_2_MULTICAST2_GROUP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_2));
#endif
    return o_data.insertFromRight<MULTICAST_GROUP_2_MULTICAST2_GROUP,
           MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> GET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& GET_MULTICAST_GROUP_2_MULTICAST2_GROUP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_2));
#endif
    return i_data.extractToRight<MULTICAST_GROUP_2_MULTICAST2_GROUP,
           MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> PREP_[PB_CFG_TLPM_MUX1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_CFG_TLPM_MUX1_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CFG_TLPM_MUX1_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_CFG_TLPM_MUX1_REG]

//>> GET_[PB_CFG_TLPM_MUX1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_CFG_TLPM_MUX1_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CFG_TLPM_MUX1_REG;
#endif
    return fapi2::getScom(i_target, PB_CFG_TLPM_MUX1_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG]

//>> PUT_[PB_CFG_TLPM_MUX1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_CFG_TLPM_MUX1_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return fapi2::putScom(i_target, PB_CFG_TLPM_MUX1_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_CFG_TLPM_MUX1_REG]


//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_0]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_1]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_2]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_3]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_4]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_5]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_6]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_7]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8]

//>> SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8]

//>> GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8,
           PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_LINK_EVENT_8]

//>> SET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_ALT_EVENTS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_ALT_EVENTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_ALT_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]

//>> SET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_ALT_EVENTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX1_REG_ALT_EVENTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_ALT_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]

//>> SET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX1_REG_ALT_EVENTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.setBit<PB_CFG_TLPM_MUX1_REG_ALT_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_ALT_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]

//>> CLEAR_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_CFG_TLPM_MUX1_REG_ALT_EVENTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return o_data.clearBit<PB_CFG_TLPM_MUX1_REG_ALT_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_ALT_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]

//>> GET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX1_REG_ALT_EVENTS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX1_REG_ALT_EVENTS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_ALT_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]

//>> GET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]
static inline bool GET_PB_CFG_TLPM_MUX1_REG_ALT_EVENTS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX1_REG));
#endif
    return i_data.getBit<PB_CFG_TLPM_MUX1_REG_ALT_EVENTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_CFG_TLPM_MUX1_REG_ALT_EVENTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX1_REG_ALT_EVENTS]

//>> PREP_[PB_CFG_TLPM_MUX2_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_CFG_TLPM_MUX2_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CFG_TLPM_MUX2_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_CFG_TLPM_MUX2_REG]

//>> GET_[PB_CFG_TLPM_MUX2_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_CFG_TLPM_MUX2_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_CFG_TLPM_MUX2_REG;
#endif
    return fapi2::getScom(i_target, PB_CFG_TLPM_MUX2_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG]

//>> PUT_[PB_CFG_TLPM_MUX2_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_CFG_TLPM_MUX2_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return fapi2::putScom(i_target, PB_CFG_TLPM_MUX2_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_CFG_TLPM_MUX2_REG]


//>> SET_[PB_CFG_TLPM_MUX2_REG_9]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_9,
           PB_CFG_TLPM_MUX2_REG_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_9]

//>> SET_[PB_CFG_TLPM_MUX2_REG_9]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_9,
           PB_CFG_TLPM_MUX2_REG_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_9]

//>> GET_[PB_CFG_TLPM_MUX2_REG_9]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX2_REG_9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX2_REG_9,
           PB_CFG_TLPM_MUX2_REG_9_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG_9]

//>> SET_[PB_CFG_TLPM_MUX2_REG_10]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_10,
           PB_CFG_TLPM_MUX2_REG_10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_10]

//>> SET_[PB_CFG_TLPM_MUX2_REG_10]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_10,
           PB_CFG_TLPM_MUX2_REG_10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_10]

//>> GET_[PB_CFG_TLPM_MUX2_REG_10]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX2_REG_10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX2_REG_10,
           PB_CFG_TLPM_MUX2_REG_10_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG_10]

//>> SET_[PB_CFG_TLPM_MUX2_REG_11]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_11,
           PB_CFG_TLPM_MUX2_REG_11_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_11]

//>> SET_[PB_CFG_TLPM_MUX2_REG_11]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_11,
           PB_CFG_TLPM_MUX2_REG_11_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_11]

//>> GET_[PB_CFG_TLPM_MUX2_REG_11]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX2_REG_11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX2_REG_11,
           PB_CFG_TLPM_MUX2_REG_11_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG_11]

//>> SET_[PB_CFG_TLPM_MUX2_REG_12]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_12,
           PB_CFG_TLPM_MUX2_REG_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_12]

//>> SET_[PB_CFG_TLPM_MUX2_REG_12]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_12,
           PB_CFG_TLPM_MUX2_REG_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_12]

//>> GET_[PB_CFG_TLPM_MUX2_REG_12]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX2_REG_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX2_REG_12,
           PB_CFG_TLPM_MUX2_REG_12_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG_12]

//>> SET_[PB_CFG_TLPM_MUX2_REG_13]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_13,
           PB_CFG_TLPM_MUX2_REG_13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_13]

//>> SET_[PB_CFG_TLPM_MUX2_REG_13]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_13,
           PB_CFG_TLPM_MUX2_REG_13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_13]

//>> GET_[PB_CFG_TLPM_MUX2_REG_13]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX2_REG_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX2_REG_13,
           PB_CFG_TLPM_MUX2_REG_13_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG_13]

//>> SET_[PB_CFG_TLPM_MUX2_REG_14]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_14,
           PB_CFG_TLPM_MUX2_REG_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_14]

//>> SET_[PB_CFG_TLPM_MUX2_REG_14]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_14,
           PB_CFG_TLPM_MUX2_REG_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_14]

//>> GET_[PB_CFG_TLPM_MUX2_REG_14]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX2_REG_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX2_REG_14,
           PB_CFG_TLPM_MUX2_REG_14_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG_14]

//>> SET_[PB_CFG_TLPM_MUX2_REG_15]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_15,
           PB_CFG_TLPM_MUX2_REG_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_15]

//>> SET_[PB_CFG_TLPM_MUX2_REG_15]
static inline fapi2::buffer<uint64_t>& SET_PB_CFG_TLPM_MUX2_REG_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return o_data.insertFromRight<PB_CFG_TLPM_MUX2_REG_15,
           PB_CFG_TLPM_MUX2_REG_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_CFG_TLPM_MUX2_REG_15]

//>> GET_[PB_CFG_TLPM_MUX2_REG_15]
static inline fapi2::buffer<uint64_t>& GET_PB_CFG_TLPM_MUX2_REG_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_CFG_TLPM_MUX2_REG));
#endif
    return i_data.extractToRight<PB_CFG_TLPM_MUX2_REG_15,
           PB_CFG_TLPM_MUX2_REG_15_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_CFG_TLPM_MUX2_REG_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_CFG_TLPM_MUX2_REG_15]

//>> PREP_[PB_EN_DOB_ECC_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_EN_DOB_ECC_ERR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_EN_DOB_ECC_ERR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_EN_DOB_ECC_ERR_REG]

//>> GET_[PB_EN_DOB_ECC_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_EN_DOB_ECC_ERR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_EN_DOB_ECC_ERR_REG;
#endif
    return fapi2::getScom(i_target, PB_EN_DOB_ECC_ERR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_EN_DOB_ECC_ERR_REG]

//>> PUT_[PB_EN_DOB_ECC_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_EN_DOB_ECC_ERR_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return fapi2::putScom(i_target, PB_EN_DOB_ECC_ERR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_EN_DOB_ECC_ERR_REG]


//>> SET_[PB_EN_DOB_ECC_ERR_REG_01_UE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_01_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_01_UE,
           PB_EN_DOB_ECC_ERR_REG_01_UE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_01_UE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_01_UE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_01_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_01_UE,
           PB_EN_DOB_ECC_ERR_REG_01_UE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_01_UE]

//>> GET_[PB_EN_DOB_ECC_ERR_REG_01_UE]
static inline fapi2::buffer<uint64_t>& GET_PB_EN_DOB_ECC_ERR_REG_01_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return i_data.extractToRight<PB_EN_DOB_ECC_ERR_REG_01_UE,
           PB_EN_DOB_ECC_ERR_REG_01_UE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_EN_DOB_ECC_ERR_REG_01_UE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_01_CE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_01_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_01_CE,
           PB_EN_DOB_ECC_ERR_REG_01_CE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_01_CE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_01_CE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_01_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_01_CE,
           PB_EN_DOB_ECC_ERR_REG_01_CE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_01_CE]

//>> GET_[PB_EN_DOB_ECC_ERR_REG_01_CE]
static inline fapi2::buffer<uint64_t>& GET_PB_EN_DOB_ECC_ERR_REG_01_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return i_data.extractToRight<PB_EN_DOB_ECC_ERR_REG_01_CE,
           PB_EN_DOB_ECC_ERR_REG_01_CE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_EN_DOB_ECC_ERR_REG_01_CE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_01_SUE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_01_SUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_01_SUE,
           PB_EN_DOB_ECC_ERR_REG_01_SUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_01_SUE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_01_SUE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_01_SUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_01_SUE,
           PB_EN_DOB_ECC_ERR_REG_01_SUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_01_SUE]

//>> GET_[PB_EN_DOB_ECC_ERR_REG_01_SUE]
static inline fapi2::buffer<uint64_t>& GET_PB_EN_DOB_ECC_ERR_REG_01_SUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return i_data.extractToRight<PB_EN_DOB_ECC_ERR_REG_01_SUE,
           PB_EN_DOB_ECC_ERR_REG_01_SUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_01_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_EN_DOB_ECC_ERR_REG_01_SUE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_23_UE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_23_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_23_UE,
           PB_EN_DOB_ECC_ERR_REG_23_UE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_23_UE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_23_UE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_23_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_23_UE,
           PB_EN_DOB_ECC_ERR_REG_23_UE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_23_UE]

//>> GET_[PB_EN_DOB_ECC_ERR_REG_23_UE]
static inline fapi2::buffer<uint64_t>& GET_PB_EN_DOB_ECC_ERR_REG_23_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return i_data.extractToRight<PB_EN_DOB_ECC_ERR_REG_23_UE,
           PB_EN_DOB_ECC_ERR_REG_23_UE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_EN_DOB_ECC_ERR_REG_23_UE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_23_CE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_23_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_23_CE,
           PB_EN_DOB_ECC_ERR_REG_23_CE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_23_CE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_23_CE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_23_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_23_CE,
           PB_EN_DOB_ECC_ERR_REG_23_CE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_23_CE]

//>> GET_[PB_EN_DOB_ECC_ERR_REG_23_CE]
static inline fapi2::buffer<uint64_t>& GET_PB_EN_DOB_ECC_ERR_REG_23_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return i_data.extractToRight<PB_EN_DOB_ECC_ERR_REG_23_CE,
           PB_EN_DOB_ECC_ERR_REG_23_CE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_EN_DOB_ECC_ERR_REG_23_CE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_23_SUE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_23_SUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_23_SUE,
           PB_EN_DOB_ECC_ERR_REG_23_SUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_23_SUE]

//>> SET_[PB_EN_DOB_ECC_ERR_REG_23_SUE]
static inline fapi2::buffer<uint64_t>& SET_PB_EN_DOB_ECC_ERR_REG_23_SUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return o_data.insertFromRight<PB_EN_DOB_ECC_ERR_REG_23_SUE,
           PB_EN_DOB_ECC_ERR_REG_23_SUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_EN_DOB_ECC_ERR_REG_23_SUE]

//>> GET_[PB_EN_DOB_ECC_ERR_REG_23_SUE]
static inline fapi2::buffer<uint64_t>& GET_PB_EN_DOB_ECC_ERR_REG_23_SUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_EN_DOB_ECC_ERR_REG));
#endif
    return i_data.extractToRight<PB_EN_DOB_ECC_ERR_REG_23_SUE,
           PB_EN_DOB_ECC_ERR_REG_23_SUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_EN_DOB_ECC_ERR_REG_23_SUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_EN_DOB_ECC_ERR_REG_23_SUE]

//>> PREP_[PB_PERFTRACE_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PERFTRACE_CFG_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PERFTRACE_CFG_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PERFTRACE_CFG_REG]

//>> GET_[PB_PERFTRACE_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PERFTRACE_CFG_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PERFTRACE_CFG_REG;
#endif
    return fapi2::getScom(i_target, PB_PERFTRACE_CFG_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG]

//>> PUT_[PB_PERFTRACE_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PERFTRACE_CFG_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return fapi2::putScom(i_target, PB_PERFTRACE_CFG_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PERFTRACE_CFG_REG]


//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]
static inline bool GET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_ENABLE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]
static inline bool GET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_FIXED_WINDOW_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]
static inline bool GET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_PRESCALE_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_TSPARE6]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_TSPARE6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_TSPARE6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_TSPARE6]

//>> SET_[PB_PERFTRACE_CFG_REG_TSPARE6]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_TSPARE6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_TSPARE6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_TSPARE6]

//>> SET_[PB_PERFTRACE_CFG_REG_TSPARE6]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_TSPARE6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_TSPARE6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_TSPARE6]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_TSPARE6]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_TSPARE6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_TSPARE6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_TSPARE6]

//>> GET_[PB_PERFTRACE_CFG_REG_TSPARE6]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_TSPARE6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_TSPARE6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_TSPARE6]

//>> GET_[PB_PERFTRACE_CFG_REG_TSPARE6]
static inline bool GET_PB_PERFTRACE_CFG_REG_TSPARE6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_TSPARE6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_TSPARE6]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]
static inline bool GET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_ENABLE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]
static inline bool GET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_FIXED_WINDOW_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]
static inline bool GET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_PRESCALE_MODE]

//>> SET_[PB_PERFTRACE_CFG_REG_TSPARE7]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_TSPARE7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_TSPARE7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_TSPARE7]

//>> SET_[PB_PERFTRACE_CFG_REG_TSPARE7]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_TSPARE7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_TSPARE7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_TSPARE7]

//>> SET_[PB_PERFTRACE_CFG_REG_TSPARE7]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_TSPARE7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.setBit<PB_PERFTRACE_CFG_REG_TSPARE7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_TSPARE7]

//>> CLEAR_[PB_PERFTRACE_CFG_REG_TSPARE7]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PERFTRACE_CFG_REG_TSPARE7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.clearBit<PB_PERFTRACE_CFG_REG_TSPARE7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PERFTRACE_CFG_REG_TSPARE7]

//>> GET_[PB_PERFTRACE_CFG_REG_TSPARE7]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_TSPARE7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_TSPARE7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_TSPARE7]

//>> GET_[PB_PERFTRACE_CFG_REG_TSPARE7]
static inline bool GET_PB_PERFTRACE_CFG_REG_TSPARE7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.getBit<PB_PERFTRACE_CFG_REG_TSPARE7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_TSPARE7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_TSPARE7]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT,
           PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT,
           PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT,
           PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_HI_SELECT]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT,
           PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT]

//>> SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT]
static inline fapi2::buffer<uint64_t>& SET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return o_data.insertFromRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT,
           PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT]

//>> GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT]
static inline fapi2::buffer<uint64_t>& GET_PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PERFTRACE_CFG_REG));
#endif
    return i_data.extractToRight<PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT,
           PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PERFTRACE_CFG_REG_ERFTRACE_LO_SELECT]

//>> PREP_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB]

//>> GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB]

//>> PUT_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB]


//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.setBit<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]

//>> CLEAR_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]

//>> GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]

//>> GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]
static inline bool GET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return i_data.getBit<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_GCR_TEST_MODE]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.setBit<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]

//>> CLEAR_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]
static inline fapi2::buffer<uint64_t>& CLEAR_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.clearBit<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]

//>> GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]

//>> GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]
static inline bool GET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return i_data.getBit<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_RESERVED1]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0,
           PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0,
           PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0]

//>> GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0,
           PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_IORESET_HARD_BUS0]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1,
           PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1]

//>> SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1,
           PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1]

//>> GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1,
           PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOMIF_SCOM_MODE_PB_SCOM_MODE_PB_SPARES1]

//>> PREP_[PHY_PPE_WRAP_SCOM_WORK_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_SCOM_WORK_REG2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_SCOM_WORK_REG2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_SCOM_WORK_REG2]

//>> GET_[PHY_PPE_WRAP_SCOM_WORK_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_SCOM_WORK_REG2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_SCOM_WORK_REG2;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_SCOM_WORK_REG2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_WORK_REG2]

//>> PUT_[PHY_PPE_WRAP_SCOM_WORK_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_SCOM_WORK_REG2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_WORK_REG2));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_SCOM_WORK_REG2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_SCOM_WORK_REG2]


//>> SET_[PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_WORK_REG2));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2,
           PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2]

//>> SET_[PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_WORK_REG2));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2,
           PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2]

//>> GET_[PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_SCOM_WORK_REG2));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2,
           PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_SCOM_WORK_REG2_SCOM_PPE_WORK2]

//>> PREP_[TRA0_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_0]

//>> GET_[TRA0_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_0;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_0]

//>> PUT_[TRA0_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_0));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_0]


//>> SET_[TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_0));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> SET_[TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_0));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> GET_[TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_0));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> PREP_[TRA0_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR1_CONFIG_9]

//>> GET_[TRA0_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_9;
#endif
    return fapi2::getScom(i_target, TRA0_TR1_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9]

//>> PUT_[TRA0_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return fapi2::putScom(i_target, TRA0_TR1_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR1_CONFIG_9]


//>> SET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_SPARE_LT]

//>> SET_[TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_SPARE_LT]

//>> SET_[TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_9_SPARE_LT]

//>> CLEAR_[TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR1_CONFIG_9_SPARE_LT]

//>> GET_[TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_SPARE_LT]

//>> GET_[TRA0_TR1_CONFIG_9_SPARE_LT]
static inline bool GET_TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_9_SPARE_LT]

//>> PREP_[TRA0_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR1_TRACE_HI_DATA_REG]

//>> GET_[TRA0_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, TRA0_TR1_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR1_TRACE_HI_DATA_REG]

//>> PUT_[TRA0_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, TRA0_TR1_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR1_TRACE_HI_DATA_REG]


//>> SET_[TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
