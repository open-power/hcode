/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00008.H $            */
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

#ifndef __PPE_C_REG00008_H_
#define __PPE_C_REG00008_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> PREP_[CPMS_ACDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_ACDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_ACDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_ACDR]

//>> GET_[CPMS_ACDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_ACDR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_ACDR;
#endif
    return fapi2::getScom(i_target, CPMS_ACDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_ACDR]

//>> PUT_[CPMS_ACDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_ACDR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return fapi2::putScom(i_target, CPMS_ACDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_ACDR]


//>> SET_[CPMS_ACDR_CHAR_COUNTA_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTA_SCALE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTA_SCALE,
           CPMS_ACDR_CHAR_COUNTA_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTA_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTA_SCALE]

//>> SET_[CPMS_ACDR_CHAR_COUNTA_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTA_SCALE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTA_SCALE,
           CPMS_ACDR_CHAR_COUNTA_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTA_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTA_SCALE]

//>> GET_[CPMS_ACDR_CHAR_COUNTA_SCALE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ACDR_CHAR_COUNTA_SCALE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return i_data.extractToRight<CPMS_ACDR_CHAR_COUNTA_SCALE,
           CPMS_ACDR_CHAR_COUNTA_SCALE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTA_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ACDR_CHAR_COUNTA_SCALE]

//>> SET_[CPMS_ACDR_CHAR_COUNTA_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTA_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTA_VALUE,
           CPMS_ACDR_CHAR_COUNTA_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTA_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTA_VALUE]

//>> SET_[CPMS_ACDR_CHAR_COUNTA_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTA_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTA_VALUE,
           CPMS_ACDR_CHAR_COUNTA_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTA_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTA_VALUE]

//>> GET_[CPMS_ACDR_CHAR_COUNTA_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ACDR_CHAR_COUNTA_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return i_data.extractToRight<CPMS_ACDR_CHAR_COUNTA_VALUE,
           CPMS_ACDR_CHAR_COUNTA_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTA_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ACDR_CHAR_COUNTA_VALUE]

//>> SET_[CPMS_ACDR_CHAR_COUNTB_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTB_SCALE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTB_SCALE,
           CPMS_ACDR_CHAR_COUNTB_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTB_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTB_SCALE]

//>> SET_[CPMS_ACDR_CHAR_COUNTB_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTB_SCALE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTB_SCALE,
           CPMS_ACDR_CHAR_COUNTB_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTB_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTB_SCALE]

//>> GET_[CPMS_ACDR_CHAR_COUNTB_SCALE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ACDR_CHAR_COUNTB_SCALE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return i_data.extractToRight<CPMS_ACDR_CHAR_COUNTB_SCALE,
           CPMS_ACDR_CHAR_COUNTB_SCALE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTB_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ACDR_CHAR_COUNTB_SCALE]

//>> SET_[CPMS_ACDR_CHAR_COUNTB_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTB_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTB_VALUE,
           CPMS_ACDR_CHAR_COUNTB_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTB_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTB_VALUE]

//>> SET_[CPMS_ACDR_CHAR_COUNTB_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTB_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTB_VALUE,
           CPMS_ACDR_CHAR_COUNTB_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTB_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTB_VALUE]

//>> GET_[CPMS_ACDR_CHAR_COUNTB_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ACDR_CHAR_COUNTB_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return i_data.extractToRight<CPMS_ACDR_CHAR_COUNTB_VALUE,
           CPMS_ACDR_CHAR_COUNTB_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTB_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ACDR_CHAR_COUNTB_VALUE]

//>> SET_[CPMS_ACDR_CHAR_COUNTC_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTC_SCALE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTC_SCALE,
           CPMS_ACDR_CHAR_COUNTC_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTC_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTC_SCALE]

//>> SET_[CPMS_ACDR_CHAR_COUNTC_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTC_SCALE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTC_SCALE,
           CPMS_ACDR_CHAR_COUNTC_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTC_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTC_SCALE]

//>> GET_[CPMS_ACDR_CHAR_COUNTC_SCALE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ACDR_CHAR_COUNTC_SCALE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return i_data.extractToRight<CPMS_ACDR_CHAR_COUNTC_SCALE,
           CPMS_ACDR_CHAR_COUNTC_SCALE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTC_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ACDR_CHAR_COUNTC_SCALE]

//>> SET_[CPMS_ACDR_CHAR_COUNTC_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTC_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTC_VALUE,
           CPMS_ACDR_CHAR_COUNTC_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTC_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTC_VALUE]

//>> SET_[CPMS_ACDR_CHAR_COUNTC_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTC_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTC_VALUE,
           CPMS_ACDR_CHAR_COUNTC_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTC_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTC_VALUE]

//>> GET_[CPMS_ACDR_CHAR_COUNTC_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ACDR_CHAR_COUNTC_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return i_data.extractToRight<CPMS_ACDR_CHAR_COUNTC_VALUE,
           CPMS_ACDR_CHAR_COUNTC_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTC_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ACDR_CHAR_COUNTC_VALUE]

//>> SET_[CPMS_ACDR_CHAR_COUNTA_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTA_MOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTA_MOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTA_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTA_MOD]

//>> SET_[CPMS_ACDR_CHAR_COUNTA_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTA_MOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTA_MOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTA_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTA_MOD]

//>> SET_[CPMS_ACDR_CHAR_COUNTA_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTA_MOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.setBit<CPMS_ACDR_CHAR_COUNTA_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTA_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTA_MOD]

//>> CLEAR_[CPMS_ACDR_CHAR_COUNTA_MOD]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ACDR_CHAR_COUNTA_MOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.clearBit<CPMS_ACDR_CHAR_COUNTA_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTA_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ACDR_CHAR_COUNTA_MOD]

//>> GET_[CPMS_ACDR_CHAR_COUNTA_MOD]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ACDR_CHAR_COUNTA_MOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return i_data.extractToRight<CPMS_ACDR_CHAR_COUNTA_MOD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTA_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ACDR_CHAR_COUNTA_MOD]

//>> GET_[CPMS_ACDR_CHAR_COUNTA_MOD]
static inline bool GET_CPMS_ACDR_CHAR_COUNTA_MOD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return i_data.getBit<CPMS_ACDR_CHAR_COUNTA_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTA_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ACDR_CHAR_COUNTA_MOD]

//>> SET_[CPMS_ACDR_CHAR_COUNTB_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTB_MOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTB_MOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTB_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTB_MOD]

//>> SET_[CPMS_ACDR_CHAR_COUNTB_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTB_MOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTB_MOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTB_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTB_MOD]

//>> SET_[CPMS_ACDR_CHAR_COUNTB_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTB_MOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.setBit<CPMS_ACDR_CHAR_COUNTB_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTB_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTB_MOD]

//>> CLEAR_[CPMS_ACDR_CHAR_COUNTB_MOD]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ACDR_CHAR_COUNTB_MOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.clearBit<CPMS_ACDR_CHAR_COUNTB_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTB_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ACDR_CHAR_COUNTB_MOD]

//>> GET_[CPMS_ACDR_CHAR_COUNTB_MOD]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ACDR_CHAR_COUNTB_MOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return i_data.extractToRight<CPMS_ACDR_CHAR_COUNTB_MOD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTB_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ACDR_CHAR_COUNTB_MOD]

//>> GET_[CPMS_ACDR_CHAR_COUNTB_MOD]
static inline bool GET_CPMS_ACDR_CHAR_COUNTB_MOD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return i_data.getBit<CPMS_ACDR_CHAR_COUNTB_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTB_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ACDR_CHAR_COUNTB_MOD]

//>> SET_[CPMS_ACDR_CHAR_COUNTC_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTC_MOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTC_MOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTC_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTC_MOD]

//>> SET_[CPMS_ACDR_CHAR_COUNTC_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTC_MOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_CHAR_COUNTC_MOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTC_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTC_MOD]

//>> SET_[CPMS_ACDR_CHAR_COUNTC_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_CHAR_COUNTC_MOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.setBit<CPMS_ACDR_CHAR_COUNTC_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTC_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_CHAR_COUNTC_MOD]

//>> CLEAR_[CPMS_ACDR_CHAR_COUNTC_MOD]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ACDR_CHAR_COUNTC_MOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.clearBit<CPMS_ACDR_CHAR_COUNTC_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTC_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ACDR_CHAR_COUNTC_MOD]

//>> GET_[CPMS_ACDR_CHAR_COUNTC_MOD]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ACDR_CHAR_COUNTC_MOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return i_data.extractToRight<CPMS_ACDR_CHAR_COUNTC_MOD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTC_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ACDR_CHAR_COUNTC_MOD]

//>> GET_[CPMS_ACDR_CHAR_COUNTC_MOD]
static inline bool GET_CPMS_ACDR_CHAR_COUNTC_MOD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return i_data.getBit<CPMS_ACDR_CHAR_COUNTC_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ACDR_CHAR_COUNTC_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ACDR_CHAR_COUNTC_MOD]

//>> SET_[CPMS_ACDR_SAMPLE_DISABLE_INDICATOR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_SAMPLE_DISABLE_INDICATOR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_SAMPLE_DISABLE_INDICATOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ACDR_SAMPLE_DISABLE_INDICATOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_SAMPLE_DISABLE_INDICATOR]

//>> SET_[CPMS_ACDR_SAMPLE_DISABLE_INDICATOR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_SAMPLE_DISABLE_INDICATOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.insertFromRight<CPMS_ACDR_SAMPLE_DISABLE_INDICATOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ACDR_SAMPLE_DISABLE_INDICATOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_SAMPLE_DISABLE_INDICATOR]

//>> SET_[CPMS_ACDR_SAMPLE_DISABLE_INDICATOR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ACDR_SAMPLE_DISABLE_INDICATOR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.setBit<CPMS_ACDR_SAMPLE_DISABLE_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ACDR_SAMPLE_DISABLE_INDICATOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ACDR_SAMPLE_DISABLE_INDICATOR]

//>> CLEAR_[CPMS_ACDR_SAMPLE_DISABLE_INDICATOR]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ACDR_SAMPLE_DISABLE_INDICATOR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return o_data.clearBit<CPMS_ACDR_SAMPLE_DISABLE_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ACDR_SAMPLE_DISABLE_INDICATOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ACDR_SAMPLE_DISABLE_INDICATOR]

//>> GET_[CPMS_ACDR_SAMPLE_DISABLE_INDICATOR]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ACDR_SAMPLE_DISABLE_INDICATOR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return i_data.extractToRight<CPMS_ACDR_SAMPLE_DISABLE_INDICATOR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ACDR_SAMPLE_DISABLE_INDICATOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ACDR_SAMPLE_DISABLE_INDICATOR]

//>> GET_[CPMS_ACDR_SAMPLE_DISABLE_INDICATOR]
static inline bool GET_CPMS_ACDR_SAMPLE_DISABLE_INDICATOR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ACDR));
#endif
    return i_data.getBit<CPMS_ACDR_SAMPLE_DISABLE_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ACDR_SAMPLE_DISABLE_INDICATOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ACDR_SAMPLE_DISABLE_INDICATOR]

//>> PREP_[CPMS_CL2_PFETSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_CL2_PFETSTAT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_CL2_PFETSTAT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_CL2_PFETSTAT]

//>> GET_[CPMS_CL2_PFETSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_CL2_PFETSTAT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_CL2_PFETSTAT;
#endif
    return fapi2::getScom(i_target, CPMS_CL2_PFETSTAT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_CL2_PFETSTAT]

//>> PUT_[CPMS_CL2_PFETSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_CL2_PFETSTAT(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return fapi2::putScom(i_target, CPMS_CL2_PFETSTAT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_CL2_PFETSTAT]


//>> SET_[CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.setBit<CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> CLEAR_[CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.clearBit<CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]
static inline bool GET_CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return i_data.getBit<CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CL2_PFETSTAT_VDD_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.setBit<CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> CLEAR_[CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.clearBit<CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]
static inline bool GET_CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return i_data.getBit<CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CL2_PFETSTAT_VDD_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.setBit<CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> CLEAR_[CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.clearBit<CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> GET_[CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]
static inline bool GET_CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return i_data.getBit<CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CL2_PFETSTAT_VCS_PFETS_ENABLED_SENSE]

//>> SET_[CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.setBit<CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> CLEAR_[CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.clearBit<CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> GET_[CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]
static inline bool GET_CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return i_data.getBit<CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CL2_PFETSTAT_VCS_PFETS_DISABLED_SENSE]

//>> SET_[CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL,
           CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL]

//>> SET_[CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL,
           CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL]

//>> GET_[CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL,
           CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CL2_PFETSTAT_VDD_PFET_ENABLE_ACTUAL]

//>> SET_[CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL,
           CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL]

//>> SET_[CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL,
           CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL]

//>> GET_[CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL,
           CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CL2_PFETSTAT_VCS_PFET_ENABLE_ACTUAL]

//>> SET_[CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL]

//>> SET_[CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL]

//>> SET_[CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.setBit<CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL]

//>> CLEAR_[CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return o_data.clearBit<CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL]

//>> GET_[CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL]

//>> GET_[CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL]
static inline bool GET_CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CL2_PFETSTAT));
#endif
    return i_data.getBit<CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CL2_PFETSTAT_SRAM_ENABLE_ACTUAL]

//>> PREP_[CPMS_DTCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_DTCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DTCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_DTCR]

//>> GET_[CPMS_DTCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_DTCR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DTCR;
#endif
    return fapi2::getScom(i_target, CPMS_DTCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_DTCR]

//>> PUT_[CPMS_DTCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_DTCR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return fapi2::putScom(i_target, CPMS_DTCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_DTCR]


//>> SET_[CPMS_DTCR_DPT_MODE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DPT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_DPT_MODE,
           CPMS_DTCR_DPT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTCR_DPT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DPT_MODE]

//>> SET_[CPMS_DTCR_DPT_MODE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DPT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_DPT_MODE,
           CPMS_DTCR_DPT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTCR_DPT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DPT_MODE]

//>> GET_[CPMS_DTCR_DPT_MODE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTCR_DPT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return i_data.extractToRight<CPMS_DTCR_DPT_MODE,
           CPMS_DTCR_DPT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTCR_DPT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTCR_DPT_MODE]

//>> SET_[CPMS_DTCR_DPT_MODE_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DPT_MODE_UPDATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_DPT_MODE_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTCR_DPT_MODE_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DPT_MODE_UPDATE]

//>> SET_[CPMS_DTCR_DPT_MODE_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DPT_MODE_UPDATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_DPT_MODE_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTCR_DPT_MODE_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DPT_MODE_UPDATE]

//>> SET_[CPMS_DTCR_DPT_MODE_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DPT_MODE_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.setBit<CPMS_DTCR_DPT_MODE_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DTCR_DPT_MODE_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DPT_MODE_UPDATE]

//>> CLEAR_[CPMS_DTCR_DPT_MODE_UPDATE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DTCR_DPT_MODE_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.clearBit<CPMS_DTCR_DPT_MODE_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DTCR_DPT_MODE_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DTCR_DPT_MODE_UPDATE]

//>> GET_[CPMS_DTCR_DPT_MODE_UPDATE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTCR_DPT_MODE_UPDATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return i_data.extractToRight<CPMS_DTCR_DPT_MODE_UPDATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTCR_DPT_MODE_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTCR_DPT_MODE_UPDATE]

//>> GET_[CPMS_DTCR_DPT_MODE_UPDATE]
static inline bool GET_CPMS_DTCR_DPT_MODE_UPDATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return i_data.getBit<CPMS_DTCR_DPT_MODE_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DTCR_DPT_MODE_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTCR_DPT_MODE_UPDATE]

//>> SET_[CPMS_DTCR_DPT_RATE_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DPT_RATE_UPDATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_DPT_RATE_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTCR_DPT_RATE_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DPT_RATE_UPDATE]

//>> SET_[CPMS_DTCR_DPT_RATE_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DPT_RATE_UPDATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_DPT_RATE_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTCR_DPT_RATE_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DPT_RATE_UPDATE]

//>> SET_[CPMS_DTCR_DPT_RATE_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DPT_RATE_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.setBit<CPMS_DTCR_DPT_RATE_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DTCR_DPT_RATE_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DPT_RATE_UPDATE]

//>> CLEAR_[CPMS_DTCR_DPT_RATE_UPDATE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DTCR_DPT_RATE_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.clearBit<CPMS_DTCR_DPT_RATE_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DTCR_DPT_RATE_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DTCR_DPT_RATE_UPDATE]

//>> GET_[CPMS_DTCR_DPT_RATE_UPDATE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTCR_DPT_RATE_UPDATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return i_data.extractToRight<CPMS_DTCR_DPT_RATE_UPDATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTCR_DPT_RATE_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTCR_DPT_RATE_UPDATE]

//>> GET_[CPMS_DTCR_DPT_RATE_UPDATE]
static inline bool GET_CPMS_DTCR_DPT_RATE_UPDATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return i_data.getBit<CPMS_DTCR_DPT_RATE_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DTCR_DPT_RATE_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTCR_DPT_RATE_UPDATE]

//>> SET_[CPMS_DTCR_DPT_INFLIGHT_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DPT_INFLIGHT_UPDATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_DPT_INFLIGHT_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTCR_DPT_INFLIGHT_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DPT_INFLIGHT_UPDATE]

//>> SET_[CPMS_DTCR_DPT_INFLIGHT_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DPT_INFLIGHT_UPDATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_DPT_INFLIGHT_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTCR_DPT_INFLIGHT_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DPT_INFLIGHT_UPDATE]

//>> SET_[CPMS_DTCR_DPT_INFLIGHT_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DPT_INFLIGHT_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.setBit<CPMS_DTCR_DPT_INFLIGHT_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DTCR_DPT_INFLIGHT_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DPT_INFLIGHT_UPDATE]

//>> CLEAR_[CPMS_DTCR_DPT_INFLIGHT_UPDATE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DTCR_DPT_INFLIGHT_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.clearBit<CPMS_DTCR_DPT_INFLIGHT_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DTCR_DPT_INFLIGHT_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DTCR_DPT_INFLIGHT_UPDATE]

//>> GET_[CPMS_DTCR_DPT_INFLIGHT_UPDATE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTCR_DPT_INFLIGHT_UPDATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return i_data.extractToRight<CPMS_DTCR_DPT_INFLIGHT_UPDATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTCR_DPT_INFLIGHT_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTCR_DPT_INFLIGHT_UPDATE]

//>> GET_[CPMS_DTCR_DPT_INFLIGHT_UPDATE]
static inline bool GET_CPMS_DTCR_DPT_INFLIGHT_UPDATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return i_data.getBit<CPMS_DTCR_DPT_INFLIGHT_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DTCR_DPT_INFLIGHT_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTCR_DPT_INFLIGHT_UPDATE]

//>> SET_[CPMS_DTCR_DPT_WINDOW_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DPT_WINDOW_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_DPT_WINDOW_SEL,
           CPMS_DTCR_DPT_WINDOW_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTCR_DPT_WINDOW_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DPT_WINDOW_SEL]

//>> SET_[CPMS_DTCR_DPT_WINDOW_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DPT_WINDOW_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_DPT_WINDOW_SEL,
           CPMS_DTCR_DPT_WINDOW_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTCR_DPT_WINDOW_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DPT_WINDOW_SEL]

//>> GET_[CPMS_DTCR_DPT_WINDOW_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTCR_DPT_WINDOW_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return i_data.extractToRight<CPMS_DTCR_DPT_WINDOW_SEL,
           CPMS_DTCR_DPT_WINDOW_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTCR_DPT_WINDOW_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTCR_DPT_WINDOW_SEL]

//>> SET_[CPMS_DTCR_CORE_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_CORE_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_CORE_DPT_RATE_LIMIT,
           CPMS_DTCR_CORE_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTCR_CORE_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_CORE_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTCR_CORE_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_CORE_DPT_RATE_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_CORE_DPT_RATE_LIMIT,
           CPMS_DTCR_CORE_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTCR_CORE_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_CORE_DPT_RATE_LIMIT]

//>> GET_[CPMS_DTCR_CORE_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTCR_CORE_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return i_data.extractToRight<CPMS_DTCR_CORE_DPT_RATE_LIMIT,
           CPMS_DTCR_CORE_DPT_RATE_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTCR_CORE_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTCR_CORE_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT,
           CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT,
           CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]

//>> GET_[CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return i_data.extractToRight<CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT,
           CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTCR_DISABLE_DPT_ON_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DISABLE_DPT_ON_UPDATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_DISABLE_DPT_ON_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTCR_DISABLE_DPT_ON_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DISABLE_DPT_ON_UPDATE]

//>> SET_[CPMS_DTCR_DISABLE_DPT_ON_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DISABLE_DPT_ON_UPDATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_DISABLE_DPT_ON_UPDATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTCR_DISABLE_DPT_ON_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DISABLE_DPT_ON_UPDATE]

//>> SET_[CPMS_DTCR_DISABLE_DPT_ON_UPDATE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_DISABLE_DPT_ON_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.setBit<CPMS_DTCR_DISABLE_DPT_ON_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DTCR_DISABLE_DPT_ON_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_DISABLE_DPT_ON_UPDATE]

//>> CLEAR_[CPMS_DTCR_DISABLE_DPT_ON_UPDATE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DTCR_DISABLE_DPT_ON_UPDATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.clearBit<CPMS_DTCR_DISABLE_DPT_ON_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DTCR_DISABLE_DPT_ON_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DTCR_DISABLE_DPT_ON_UPDATE]

//>> GET_[CPMS_DTCR_DISABLE_DPT_ON_UPDATE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTCR_DISABLE_DPT_ON_UPDATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return i_data.extractToRight<CPMS_DTCR_DISABLE_DPT_ON_UPDATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTCR_DISABLE_DPT_ON_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTCR_DISABLE_DPT_ON_UPDATE]

//>> GET_[CPMS_DTCR_DISABLE_DPT_ON_UPDATE]
static inline bool GET_CPMS_DTCR_DISABLE_DPT_ON_UPDATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return i_data.getBit<CPMS_DTCR_DISABLE_DPT_ON_UPDATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DTCR_DISABLE_DPT_ON_UPDATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTCR_DISABLE_DPT_ON_UPDATE]

//>> SET_[CPMS_DTCR_CORE_SMT_MODE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_CORE_SMT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_CORE_SMT_MODE,
           CPMS_DTCR_CORE_SMT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTCR_CORE_SMT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_CORE_SMT_MODE]

//>> SET_[CPMS_DTCR_CORE_SMT_MODE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTCR_CORE_SMT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return o_data.insertFromRight<CPMS_DTCR_CORE_SMT_MODE,
           CPMS_DTCR_CORE_SMT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTCR_CORE_SMT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTCR_CORE_SMT_MODE]

//>> GET_[CPMS_DTCR_CORE_SMT_MODE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTCR_CORE_SMT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTCR));
#endif
    return i_data.extractToRight<CPMS_DTCR_CORE_SMT_MODE,
           CPMS_DTCR_CORE_SMT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTCR_CORE_SMT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTCR_CORE_SMT_MODE]

//>> PREP_[CPMS_ESCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_ESCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_ESCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_ESCR]

//>> GET_[CPMS_ESCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_ESCR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_ESCR;
#endif
    return fapi2::getScom(i_target, CPMS_ESCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_ESCR]

//>> PUT_[CPMS_ESCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_ESCR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return fapi2::putScom(i_target, CPMS_ESCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_ESCR]


//>> SET_[CPMS_ESCR_DURATION_MODE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_DURATION_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_DURATION_MODE,
           CPMS_ESCR_DURATION_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_DURATION_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_DURATION_MODE]

//>> SET_[CPMS_ESCR_DURATION_MODE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_DURATION_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_DURATION_MODE,
           CPMS_ESCR_DURATION_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_DURATION_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_DURATION_MODE]

//>> GET_[CPMS_ESCR_DURATION_MODE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_DURATION_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_DURATION_MODE,
           CPMS_ESCR_DURATION_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_DURATION_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_DURATION_MODE]

//>> SET_[CPMS_ESCR_DURATION_EVENT_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_DURATION_EVENT_INVERT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_DURATION_EVENT_INVERT,
           CPMS_ESCR_DURATION_EVENT_INVERT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_DURATION_EVENT_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_DURATION_EVENT_INVERT]

//>> SET_[CPMS_ESCR_DURATION_EVENT_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_DURATION_EVENT_INVERT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_DURATION_EVENT_INVERT,
           CPMS_ESCR_DURATION_EVENT_INVERT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_DURATION_EVENT_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_DURATION_EVENT_INVERT]

//>> GET_[CPMS_ESCR_DURATION_EVENT_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_DURATION_EVENT_INVERT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_DURATION_EVENT_INVERT,
           CPMS_ESCR_DURATION_EVENT_INVERT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_DURATION_EVENT_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_DURATION_EVENT_INVERT]

//>> SET_[CPMS_ESCR_DURATION_RANGE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_DURATION_RANGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_DURATION_RANGE,
           CPMS_ESCR_DURATION_RANGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_DURATION_RANGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_DURATION_RANGE]

//>> SET_[CPMS_ESCR_DURATION_RANGE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_DURATION_RANGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_DURATION_RANGE,
           CPMS_ESCR_DURATION_RANGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_DURATION_RANGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_DURATION_RANGE]

//>> GET_[CPMS_ESCR_DURATION_RANGE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_DURATION_RANGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_DURATION_RANGE,
           CPMS_ESCR_DURATION_RANGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_DURATION_RANGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_DURATION_RANGE]

//>> SET_[CPMS_ESCR_DURATION_START_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_DURATION_START_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_DURATION_START_SEL,
           CPMS_ESCR_DURATION_START_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_DURATION_START_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_DURATION_START_SEL]

//>> SET_[CPMS_ESCR_DURATION_START_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_DURATION_START_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_DURATION_START_SEL,
           CPMS_ESCR_DURATION_START_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_DURATION_START_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_DURATION_START_SEL]

//>> GET_[CPMS_ESCR_DURATION_START_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_DURATION_START_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_DURATION_START_SEL,
           CPMS_ESCR_DURATION_START_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_DURATION_START_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_DURATION_START_SEL]

//>> SET_[CPMS_ESCR_DURATION_TIMEOUT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_DURATION_TIMEOUT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_DURATION_TIMEOUT_SEL,
           CPMS_ESCR_DURATION_TIMEOUT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_DURATION_TIMEOUT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_DURATION_TIMEOUT_SEL]

//>> SET_[CPMS_ESCR_DURATION_TIMEOUT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_DURATION_TIMEOUT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_DURATION_TIMEOUT_SEL,
           CPMS_ESCR_DURATION_TIMEOUT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_DURATION_TIMEOUT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_DURATION_TIMEOUT_SEL]

//>> GET_[CPMS_ESCR_DURATION_TIMEOUT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_DURATION_TIMEOUT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_DURATION_TIMEOUT_SEL,
           CPMS_ESCR_DURATION_TIMEOUT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_DURATION_TIMEOUT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_DURATION_TIMEOUT_SEL]

//>> SET_[CPMS_ESCR_DURATION_STOP_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_DURATION_STOP_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_DURATION_STOP_SEL,
           CPMS_ESCR_DURATION_STOP_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_DURATION_STOP_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_DURATION_STOP_SEL]

//>> SET_[CPMS_ESCR_DURATION_STOP_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_DURATION_STOP_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_DURATION_STOP_SEL,
           CPMS_ESCR_DURATION_STOP_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_DURATION_STOP_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_DURATION_STOP_SEL]

//>> GET_[CPMS_ESCR_DURATION_STOP_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_DURATION_STOP_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_DURATION_STOP_SEL,
           CPMS_ESCR_DURATION_STOP_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_DURATION_STOP_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_DURATION_STOP_SEL]

//>> SET_[CPMS_ESCR_STATEW_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEW_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEW_SELECT,
           CPMS_ESCR_STATEW_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_STATEW_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEW_SELECT]

//>> SET_[CPMS_ESCR_STATEW_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEW_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEW_SELECT,
           CPMS_ESCR_STATEW_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_STATEW_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEW_SELECT]

//>> GET_[CPMS_ESCR_STATEW_SELECT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_STATEW_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_STATEW_SELECT,
           CPMS_ESCR_STATEW_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_STATEW_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_STATEW_SELECT]

//>> SET_[CPMS_ESCR_STATEW_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEW_INVERT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEW_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_STATEW_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEW_INVERT]

//>> SET_[CPMS_ESCR_STATEW_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEW_INVERT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEW_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_STATEW_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEW_INVERT]

//>> SET_[CPMS_ESCR_STATEW_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEW_INVERT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.setBit<CPMS_ESCR_STATEW_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ESCR_STATEW_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEW_INVERT]

//>> CLEAR_[CPMS_ESCR_STATEW_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ESCR_STATEW_INVERT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.clearBit<CPMS_ESCR_STATEW_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ESCR_STATEW_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ESCR_STATEW_INVERT]

//>> GET_[CPMS_ESCR_STATEW_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_STATEW_INVERT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_STATEW_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_STATEW_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_STATEW_INVERT]

//>> GET_[CPMS_ESCR_STATEW_INVERT]
static inline bool GET_CPMS_ESCR_STATEW_INVERT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.getBit<CPMS_ESCR_STATEW_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ESCR_STATEW_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_STATEW_INVERT]

//>> SET_[CPMS_ESCR_STATEZ_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEZ_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEZ_SELECT,
           CPMS_ESCR_STATEZ_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_STATEZ_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEZ_SELECT]

//>> SET_[CPMS_ESCR_STATEZ_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEZ_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEZ_SELECT,
           CPMS_ESCR_STATEZ_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_STATEZ_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEZ_SELECT]

//>> GET_[CPMS_ESCR_STATEZ_SELECT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_STATEZ_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_STATEZ_SELECT,
           CPMS_ESCR_STATEZ_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_STATEZ_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_STATEZ_SELECT]

//>> SET_[CPMS_ESCR_STATEZ_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEZ_PULSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEZ_PULSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_STATEZ_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEZ_PULSE]

//>> SET_[CPMS_ESCR_STATEZ_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEZ_PULSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEZ_PULSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_STATEZ_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEZ_PULSE]

//>> SET_[CPMS_ESCR_STATEZ_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEZ_PULSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.setBit<CPMS_ESCR_STATEZ_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ESCR_STATEZ_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEZ_PULSE]

//>> CLEAR_[CPMS_ESCR_STATEZ_PULSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ESCR_STATEZ_PULSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.clearBit<CPMS_ESCR_STATEZ_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ESCR_STATEZ_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ESCR_STATEZ_PULSE]

//>> GET_[CPMS_ESCR_STATEZ_PULSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_STATEZ_PULSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_STATEZ_PULSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_STATEZ_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_STATEZ_PULSE]

//>> GET_[CPMS_ESCR_STATEZ_PULSE]
static inline bool GET_CPMS_ESCR_STATEZ_PULSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.getBit<CPMS_ESCR_STATEZ_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ESCR_STATEZ_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_STATEZ_PULSE]

//>> SET_[CPMS_ESCR_EVENTX_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_EVENTX_PULSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_EVENTX_PULSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_EVENTX_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_EVENTX_PULSE]

//>> SET_[CPMS_ESCR_EVENTX_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_EVENTX_PULSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_EVENTX_PULSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_EVENTX_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_EVENTX_PULSE]

//>> SET_[CPMS_ESCR_EVENTX_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_EVENTX_PULSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.setBit<CPMS_ESCR_EVENTX_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ESCR_EVENTX_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_EVENTX_PULSE]

//>> CLEAR_[CPMS_ESCR_EVENTX_PULSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ESCR_EVENTX_PULSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.clearBit<CPMS_ESCR_EVENTX_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ESCR_EVENTX_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ESCR_EVENTX_PULSE]

//>> GET_[CPMS_ESCR_EVENTX_PULSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_EVENTX_PULSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_EVENTX_PULSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_EVENTX_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_EVENTX_PULSE]

//>> GET_[CPMS_ESCR_EVENTX_PULSE]
static inline bool GET_CPMS_ESCR_EVENTX_PULSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.getBit<CPMS_ESCR_EVENTX_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ESCR_EVENTX_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_EVENTX_PULSE]

//>> SET_[CPMS_ESCR_EVENTY_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_EVENTY_PULSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_EVENTY_PULSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_EVENTY_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_EVENTY_PULSE]

//>> SET_[CPMS_ESCR_EVENTY_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_EVENTY_PULSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_EVENTY_PULSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_EVENTY_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_EVENTY_PULSE]

//>> SET_[CPMS_ESCR_EVENTY_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_EVENTY_PULSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.setBit<CPMS_ESCR_EVENTY_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ESCR_EVENTY_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_EVENTY_PULSE]

//>> CLEAR_[CPMS_ESCR_EVENTY_PULSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ESCR_EVENTY_PULSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.clearBit<CPMS_ESCR_EVENTY_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ESCR_EVENTY_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ESCR_EVENTY_PULSE]

//>> GET_[CPMS_ESCR_EVENTY_PULSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_EVENTY_PULSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_EVENTY_PULSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_EVENTY_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_EVENTY_PULSE]

//>> GET_[CPMS_ESCR_EVENTY_PULSE]
static inline bool GET_CPMS_ESCR_EVENTY_PULSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.getBit<CPMS_ESCR_EVENTY_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ESCR_EVENTY_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_EVENTY_PULSE]

//>> SET_[CPMS_ESCR_STATEX_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEX_PULSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEX_PULSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_STATEX_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEX_PULSE]

//>> SET_[CPMS_ESCR_STATEX_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEX_PULSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEX_PULSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_STATEX_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEX_PULSE]

//>> SET_[CPMS_ESCR_STATEX_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEX_PULSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.setBit<CPMS_ESCR_STATEX_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ESCR_STATEX_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEX_PULSE]

//>> CLEAR_[CPMS_ESCR_STATEX_PULSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ESCR_STATEX_PULSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.clearBit<CPMS_ESCR_STATEX_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ESCR_STATEX_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ESCR_STATEX_PULSE]

//>> GET_[CPMS_ESCR_STATEX_PULSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_STATEX_PULSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_STATEX_PULSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_STATEX_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_STATEX_PULSE]

//>> GET_[CPMS_ESCR_STATEX_PULSE]
static inline bool GET_CPMS_ESCR_STATEX_PULSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.getBit<CPMS_ESCR_STATEX_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ESCR_STATEX_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_STATEX_PULSE]

//>> SET_[CPMS_ESCR_STATEY_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEY_PULSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEY_PULSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_STATEY_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEY_PULSE]

//>> SET_[CPMS_ESCR_STATEY_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEY_PULSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEY_PULSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_STATEY_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEY_PULSE]

//>> SET_[CPMS_ESCR_STATEY_PULSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEY_PULSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.setBit<CPMS_ESCR_STATEY_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_ESCR_STATEY_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEY_PULSE]

//>> CLEAR_[CPMS_ESCR_STATEY_PULSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_ESCR_STATEY_PULSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.clearBit<CPMS_ESCR_STATEY_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_ESCR_STATEY_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_ESCR_STATEY_PULSE]

//>> GET_[CPMS_ESCR_STATEY_PULSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_STATEY_PULSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_STATEY_PULSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_STATEY_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_STATEY_PULSE]

//>> GET_[CPMS_ESCR_STATEY_PULSE]
static inline bool GET_CPMS_ESCR_STATEY_PULSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.getBit<CPMS_ESCR_STATEY_PULSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_ESCR_STATEY_PULSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_STATEY_PULSE]

//>> SET_[CPMS_ESCR_STATEX_COMPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEX_COMPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEX_COMPARE,
           CPMS_ESCR_STATEX_COMPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_STATEX_COMPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEX_COMPARE]

//>> SET_[CPMS_ESCR_STATEX_COMPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEX_COMPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEX_COMPARE,
           CPMS_ESCR_STATEX_COMPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_STATEX_COMPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEX_COMPARE]

//>> GET_[CPMS_ESCR_STATEX_COMPARE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_STATEX_COMPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_STATEX_COMPARE,
           CPMS_ESCR_STATEX_COMPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_STATEX_COMPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_STATEX_COMPARE]

//>> SET_[CPMS_ESCR_STATEX_DONTCARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEX_DONTCARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEX_DONTCARE,
           CPMS_ESCR_STATEX_DONTCARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_STATEX_DONTCARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEX_DONTCARE]

//>> SET_[CPMS_ESCR_STATEX_DONTCARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEX_DONTCARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEX_DONTCARE,
           CPMS_ESCR_STATEX_DONTCARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_STATEX_DONTCARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEX_DONTCARE]

//>> GET_[CPMS_ESCR_STATEX_DONTCARE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_STATEX_DONTCARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_STATEX_DONTCARE,
           CPMS_ESCR_STATEX_DONTCARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_STATEX_DONTCARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_STATEX_DONTCARE]

//>> SET_[CPMS_ESCR_STATEY_COMPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEY_COMPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEY_COMPARE,
           CPMS_ESCR_STATEY_COMPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_STATEY_COMPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEY_COMPARE]

//>> SET_[CPMS_ESCR_STATEY_COMPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEY_COMPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEY_COMPARE,
           CPMS_ESCR_STATEY_COMPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_STATEY_COMPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEY_COMPARE]

//>> GET_[CPMS_ESCR_STATEY_COMPARE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_STATEY_COMPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_STATEY_COMPARE,
           CPMS_ESCR_STATEY_COMPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_STATEY_COMPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_STATEY_COMPARE]

//>> SET_[CPMS_ESCR_STATEY_DONTCARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEY_DONTCARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEY_DONTCARE,
           CPMS_ESCR_STATEY_DONTCARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_STATEY_DONTCARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEY_DONTCARE]

//>> SET_[CPMS_ESCR_STATEY_DONTCARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_STATEY_DONTCARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_STATEY_DONTCARE,
           CPMS_ESCR_STATEY_DONTCARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_STATEY_DONTCARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_STATEY_DONTCARE]

//>> GET_[CPMS_ESCR_STATEY_DONTCARE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_STATEY_DONTCARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_STATEY_DONTCARE,
           CPMS_ESCR_STATEY_DONTCARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_STATEY_DONTCARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_STATEY_DONTCARE]

//>> SET_[CPMS_ESCR_EVENTX_COMPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_EVENTX_COMPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_EVENTX_COMPARE,
           CPMS_ESCR_EVENTX_COMPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_EVENTX_COMPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_EVENTX_COMPARE]

//>> SET_[CPMS_ESCR_EVENTX_COMPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_EVENTX_COMPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_EVENTX_COMPARE,
           CPMS_ESCR_EVENTX_COMPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_EVENTX_COMPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_EVENTX_COMPARE]

//>> GET_[CPMS_ESCR_EVENTX_COMPARE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_EVENTX_COMPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_EVENTX_COMPARE,
           CPMS_ESCR_EVENTX_COMPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_EVENTX_COMPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_EVENTX_COMPARE]

//>> SET_[CPMS_ESCR_EVENTX_DONTCARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_EVENTX_DONTCARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_EVENTX_DONTCARE,
           CPMS_ESCR_EVENTX_DONTCARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_EVENTX_DONTCARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_EVENTX_DONTCARE]

//>> SET_[CPMS_ESCR_EVENTX_DONTCARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_EVENTX_DONTCARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_EVENTX_DONTCARE,
           CPMS_ESCR_EVENTX_DONTCARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_EVENTX_DONTCARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_EVENTX_DONTCARE]

//>> GET_[CPMS_ESCR_EVENTX_DONTCARE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_EVENTX_DONTCARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_EVENTX_DONTCARE,
           CPMS_ESCR_EVENTX_DONTCARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_EVENTX_DONTCARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_EVENTX_DONTCARE]

//>> SET_[CPMS_ESCR_EVENTY_COMPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_EVENTY_COMPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_EVENTY_COMPARE,
           CPMS_ESCR_EVENTY_COMPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_EVENTY_COMPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_EVENTY_COMPARE]

//>> SET_[CPMS_ESCR_EVENTY_COMPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_EVENTY_COMPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_EVENTY_COMPARE,
           CPMS_ESCR_EVENTY_COMPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_EVENTY_COMPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_EVENTY_COMPARE]

//>> GET_[CPMS_ESCR_EVENTY_COMPARE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_EVENTY_COMPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_EVENTY_COMPARE,
           CPMS_ESCR_EVENTY_COMPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_EVENTY_COMPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_EVENTY_COMPARE]

//>> SET_[CPMS_ESCR_EVENTY_DONTCARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_EVENTY_DONTCARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_EVENTY_DONTCARE,
           CPMS_ESCR_EVENTY_DONTCARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_ESCR_EVENTY_DONTCARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_EVENTY_DONTCARE]

//>> SET_[CPMS_ESCR_EVENTY_DONTCARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_ESCR_EVENTY_DONTCARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return o_data.insertFromRight<CPMS_ESCR_EVENTY_DONTCARE,
           CPMS_ESCR_EVENTY_DONTCARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_ESCR_EVENTY_DONTCARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_ESCR_EVENTY_DONTCARE]

//>> GET_[CPMS_ESCR_EVENTY_DONTCARE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_ESCR_EVENTY_DONTCARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_ESCR));
#endif
    return i_data.extractToRight<CPMS_ESCR_EVENTY_DONTCARE,
           CPMS_ESCR_EVENTY_DONTCARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_ESCR_EVENTY_DONTCARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_ESCR_EVENTY_DONTCARE]

//>> PREP_[QME_QOSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_QOSR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QOSR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_QOSR]

//>> GET_[QME_QOSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_QOSR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_QOSR;
#endif
    return fapi2::getScom(i_target, QME_QOSR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_QOSR]

//>> PUT_[QME_QOSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_QOSR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return fapi2::putScom(i_target, QME_QOSR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_QOSR]


//>> SET_[QME_QOSR_0_QOS_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_0_QOS_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_0_QOS_INDEX,
           QME_QOSR_0_QOS_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_QOSR_0_QOS_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_0_QOS_INDEX]

//>> SET_[QME_QOSR_0_QOS_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_0_QOS_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_0_QOS_INDEX,
           QME_QOSR_0_QOS_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_QOSR_0_QOS_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_0_QOS_INDEX]

//>> GET_[QME_QOSR_0_QOS_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_QOSR_0_QOS_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return i_data.extractToRight<QME_QOSR_0_QOS_INDEX,
           QME_QOSR_0_QOS_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_QOSR_0_QOS_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QOSR_0_QOS_INDEX]

//>> SET_[QME_QOSR_1_QOS_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_1_QOS_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_1_QOS_INDEX,
           QME_QOSR_1_QOS_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_QOSR_1_QOS_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_1_QOS_INDEX]

//>> SET_[QME_QOSR_1_QOS_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_1_QOS_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_1_QOS_INDEX,
           QME_QOSR_1_QOS_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_QOSR_1_QOS_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_1_QOS_INDEX]

//>> GET_[QME_QOSR_1_QOS_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_QOSR_1_QOS_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return i_data.extractToRight<QME_QOSR_1_QOS_INDEX,
           QME_QOSR_1_QOS_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_QOSR_1_QOS_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QOSR_1_QOS_INDEX]

//>> SET_[QME_QOSR_2_QOS_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_2_QOS_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_2_QOS_INDEX,
           QME_QOSR_2_QOS_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_QOSR_2_QOS_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_2_QOS_INDEX]

//>> SET_[QME_QOSR_2_QOS_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_2_QOS_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_2_QOS_INDEX,
           QME_QOSR_2_QOS_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_QOSR_2_QOS_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_2_QOS_INDEX]

//>> GET_[QME_QOSR_2_QOS_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_QOSR_2_QOS_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return i_data.extractToRight<QME_QOSR_2_QOS_INDEX,
           QME_QOSR_2_QOS_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_QOSR_2_QOS_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QOSR_2_QOS_INDEX]

//>> SET_[QME_QOSR_3_QOS_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_3_QOS_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_3_QOS_INDEX,
           QME_QOSR_3_QOS_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_QOSR_3_QOS_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_3_QOS_INDEX]

//>> SET_[QME_QOSR_3_QOS_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_3_QOS_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_3_QOS_INDEX,
           QME_QOSR_3_QOS_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_QOSR_3_QOS_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_3_QOS_INDEX]

//>> GET_[QME_QOSR_3_QOS_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_QOSR_3_QOS_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return i_data.extractToRight<QME_QOSR_3_QOS_INDEX,
           QME_QOSR_3_QOS_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_QOSR_3_QOS_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QOSR_3_QOS_INDEX]

//>> SET_[QME_QOSR_0_DTC_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_0_DTC_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_0_DTC_INDEX,
           QME_QOSR_0_DTC_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_QOSR_0_DTC_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_0_DTC_INDEX]

//>> SET_[QME_QOSR_0_DTC_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_0_DTC_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_0_DTC_INDEX,
           QME_QOSR_0_DTC_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_QOSR_0_DTC_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_0_DTC_INDEX]

//>> GET_[QME_QOSR_0_DTC_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_QOSR_0_DTC_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return i_data.extractToRight<QME_QOSR_0_DTC_INDEX,
           QME_QOSR_0_DTC_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_QOSR_0_DTC_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QOSR_0_DTC_INDEX]

//>> SET_[QME_QOSR_1_DTC_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_1_DTC_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_1_DTC_INDEX,
           QME_QOSR_1_DTC_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_QOSR_1_DTC_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_1_DTC_INDEX]

//>> SET_[QME_QOSR_1_DTC_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_1_DTC_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_1_DTC_INDEX,
           QME_QOSR_1_DTC_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_QOSR_1_DTC_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_1_DTC_INDEX]

//>> GET_[QME_QOSR_1_DTC_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_QOSR_1_DTC_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return i_data.extractToRight<QME_QOSR_1_DTC_INDEX,
           QME_QOSR_1_DTC_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_QOSR_1_DTC_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QOSR_1_DTC_INDEX]

//>> SET_[QME_QOSR_2_DTC_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_2_DTC_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_2_DTC_INDEX,
           QME_QOSR_2_DTC_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_QOSR_2_DTC_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_2_DTC_INDEX]

//>> SET_[QME_QOSR_2_DTC_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_2_DTC_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_2_DTC_INDEX,
           QME_QOSR_2_DTC_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_QOSR_2_DTC_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_2_DTC_INDEX]

//>> GET_[QME_QOSR_2_DTC_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_QOSR_2_DTC_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return i_data.extractToRight<QME_QOSR_2_DTC_INDEX,
           QME_QOSR_2_DTC_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_QOSR_2_DTC_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QOSR_2_DTC_INDEX]

//>> SET_[QME_QOSR_3_DTC_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_3_DTC_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_3_DTC_INDEX,
           QME_QOSR_3_DTC_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_QOSR_3_DTC_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_3_DTC_INDEX]

//>> SET_[QME_QOSR_3_DTC_INDEX]
static inline fapi2::buffer<uint64_t>& SET_QME_QOSR_3_DTC_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return o_data.insertFromRight<QME_QOSR_3_DTC_INDEX,
           QME_QOSR_3_DTC_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_QOSR_3_DTC_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_QOSR_3_DTC_INDEX]

//>> GET_[QME_QOSR_3_DTC_INDEX]
static inline fapi2::buffer<uint64_t>& GET_QME_QOSR_3_DTC_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_QOSR));
#endif
    return i_data.extractToRight<QME_QOSR_3_DTC_INDEX,
           QME_QOSR_3_DTC_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_QOSR_3_DTC_INDEX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_QOSR_3_DTC_INDEX]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
