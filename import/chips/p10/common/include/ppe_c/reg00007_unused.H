/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00007_unused.H $     */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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

#ifndef __PPE_C_REG00007_H_UNUSED__
#define __PPE_C_REG00007_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> PREP_[CPMS_MCCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_MCCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = CPMS_MCCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_MCCR]

//>> GET_[CPMS_MCCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_MCCR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = CPMS_MCCR;
#endif
    return fapi2::getScom(i_target, CPMS_MCCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_MCCR]

//>> PUT_[CPMS_MCCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_MCCR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MCCR));
#endif
    return fapi2::putScom(i_target, CPMS_MCCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_MCCR]


//>> SET_[P10_20_CPMS_MCCR_EVENT0_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_MCCR_EVENT0_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MCCR));
#endif
    return o_data.insertFromRight<P10_20_CPMS_MCCR_EVENT0_SEL,
           P10_20_CPMS_MCCR_EVENT0_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access P10_20_CPMS_MCCR_EVENT0_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_MCCR_EVENT0_SEL]

//>> SET_[P10_20_CPMS_MCCR_EVENT0_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_MCCR_EVENT0_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MCCR));
#endif
    return o_data.insertFromRight<P10_20_CPMS_MCCR_EVENT0_SEL,
           P10_20_CPMS_MCCR_EVENT0_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access P10_20_CPMS_MCCR_EVENT0_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_MCCR_EVENT0_SEL]

//>> GET_[P10_20_CPMS_MCCR_EVENT0_SEL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPMS_MCCR_EVENT0_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MCCR));
#endif
    return i_data.extractToRight<P10_20_CPMS_MCCR_EVENT0_SEL,
           P10_20_CPMS_MCCR_EVENT0_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access P10_20_CPMS_MCCR_EVENT0_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPMS_MCCR_EVENT0_SEL]

//>> SET_[P10_20_CPMS_MCCR_COUNT0_OFFSET]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_MCCR_COUNT0_OFFSET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MCCR));
#endif
    return o_data.insertFromRight<P10_20_CPMS_MCCR_COUNT0_OFFSET,
           P10_20_CPMS_MCCR_COUNT0_OFFSET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access P10_20_CPMS_MCCR_COUNT0_OFFSET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_MCCR_COUNT0_OFFSET]

//>> SET_[P10_20_CPMS_MCCR_COUNT0_OFFSET]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_MCCR_COUNT0_OFFSET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MCCR));
#endif
    return o_data.insertFromRight<P10_20_CPMS_MCCR_COUNT0_OFFSET,
           P10_20_CPMS_MCCR_COUNT0_OFFSET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access P10_20_CPMS_MCCR_COUNT0_OFFSET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_MCCR_COUNT0_OFFSET]

//>> GET_[P10_20_CPMS_MCCR_COUNT0_OFFSET]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPMS_MCCR_COUNT0_OFFSET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MCCR));
#endif
    return i_data.extractToRight<P10_20_CPMS_MCCR_COUNT0_OFFSET,
           P10_20_CPMS_MCCR_COUNT0_OFFSET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access P10_20_CPMS_MCCR_COUNT0_OFFSET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPMS_MCCR_COUNT0_OFFSET]

//>> SET_[P10_20_CPMS_MCCR_EVENT1_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_MCCR_EVENT1_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MCCR));
#endif
    return o_data.insertFromRight<P10_20_CPMS_MCCR_EVENT1_SEL,
           P10_20_CPMS_MCCR_EVENT1_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access P10_20_CPMS_MCCR_EVENT1_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_MCCR_EVENT1_SEL]

//>> SET_[P10_20_CPMS_MCCR_EVENT1_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_MCCR_EVENT1_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MCCR));
#endif
    return o_data.insertFromRight<P10_20_CPMS_MCCR_EVENT1_SEL,
           P10_20_CPMS_MCCR_EVENT1_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access P10_20_CPMS_MCCR_EVENT1_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_MCCR_EVENT1_SEL]

//>> GET_[P10_20_CPMS_MCCR_EVENT1_SEL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPMS_MCCR_EVENT1_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MCCR));
#endif
    return i_data.extractToRight<P10_20_CPMS_MCCR_EVENT1_SEL,
           P10_20_CPMS_MCCR_EVENT1_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access P10_20_CPMS_MCCR_EVENT1_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPMS_MCCR_EVENT1_SEL]

//>> SET_[P10_20_CPMS_MCCR_COUNT1_OFFSET]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_MCCR_COUNT1_OFFSET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MCCR));
#endif
    return o_data.insertFromRight<P10_20_CPMS_MCCR_COUNT1_OFFSET,
           P10_20_CPMS_MCCR_COUNT1_OFFSET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access P10_20_CPMS_MCCR_COUNT1_OFFSET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_MCCR_COUNT1_OFFSET]

//>> SET_[P10_20_CPMS_MCCR_COUNT1_OFFSET]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_MCCR_COUNT1_OFFSET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MCCR));
#endif
    return o_data.insertFromRight<P10_20_CPMS_MCCR_COUNT1_OFFSET,
           P10_20_CPMS_MCCR_COUNT1_OFFSET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access P10_20_CPMS_MCCR_COUNT1_OFFSET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_MCCR_COUNT1_OFFSET]

//>> GET_[P10_20_CPMS_MCCR_COUNT1_OFFSET]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPMS_MCCR_COUNT1_OFFSET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MCCR));
#endif
    return i_data.extractToRight<P10_20_CPMS_MCCR_COUNT1_OFFSET,
           P10_20_CPMS_MCCR_COUNT1_OFFSET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access P10_20_CPMS_MCCR_COUNT1_OFFSET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPMS_MCCR_COUNT1_OFFSET]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
