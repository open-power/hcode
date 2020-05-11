/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00003_unused.H $     */
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

#ifndef __PPE_C_REG00003_H_UNUSED__
#define __PPE_C_REG00003_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> PREP_[CPMS_CCDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_CCDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_CCDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_CCDR]

//>> GET_[CPMS_CCDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_CCDR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_CCDR;
#endif
    return fapi2::getScom(i_target, CPMS_CCDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_CCDR]

//>> PUT_[CPMS_CCDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_CCDR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return fapi2::putScom(i_target, CPMS_CCDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_CCDR]


//>> SET_[CPMS_CCDR_CHAR_COUNTA_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTA_SCALE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTA_SCALE,
           CPMS_CCDR_CHAR_COUNTA_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTA_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTA_SCALE]

//>> SET_[CPMS_CCDR_CHAR_COUNTA_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTA_SCALE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTA_SCALE,
           CPMS_CCDR_CHAR_COUNTA_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTA_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTA_SCALE]

//>> GET_[CPMS_CCDR_CHAR_COUNTA_SCALE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CCDR_CHAR_COUNTA_SCALE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return i_data.extractToRight<CPMS_CCDR_CHAR_COUNTA_SCALE,
           CPMS_CCDR_CHAR_COUNTA_SCALE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTA_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CCDR_CHAR_COUNTA_SCALE]

//>> SET_[CPMS_CCDR_CHAR_COUNTA_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTA_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTA_VALUE,
           CPMS_CCDR_CHAR_COUNTA_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTA_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTA_VALUE]

//>> SET_[CPMS_CCDR_CHAR_COUNTA_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTA_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTA_VALUE,
           CPMS_CCDR_CHAR_COUNTA_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTA_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTA_VALUE]

//>> GET_[CPMS_CCDR_CHAR_COUNTA_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CCDR_CHAR_COUNTA_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return i_data.extractToRight<CPMS_CCDR_CHAR_COUNTA_VALUE,
           CPMS_CCDR_CHAR_COUNTA_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTA_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CCDR_CHAR_COUNTA_VALUE]

//>> SET_[CPMS_CCDR_CHAR_COUNTB_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTB_SCALE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTB_SCALE,
           CPMS_CCDR_CHAR_COUNTB_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTB_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTB_SCALE]

//>> SET_[CPMS_CCDR_CHAR_COUNTB_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTB_SCALE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTB_SCALE,
           CPMS_CCDR_CHAR_COUNTB_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTB_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTB_SCALE]

//>> GET_[CPMS_CCDR_CHAR_COUNTB_SCALE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CCDR_CHAR_COUNTB_SCALE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return i_data.extractToRight<CPMS_CCDR_CHAR_COUNTB_SCALE,
           CPMS_CCDR_CHAR_COUNTB_SCALE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTB_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CCDR_CHAR_COUNTB_SCALE]

//>> SET_[CPMS_CCDR_CHAR_COUNTB_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTB_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTB_VALUE,
           CPMS_CCDR_CHAR_COUNTB_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTB_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTB_VALUE]

//>> SET_[CPMS_CCDR_CHAR_COUNTB_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTB_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTB_VALUE,
           CPMS_CCDR_CHAR_COUNTB_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTB_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTB_VALUE]

//>> GET_[CPMS_CCDR_CHAR_COUNTB_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CCDR_CHAR_COUNTB_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return i_data.extractToRight<CPMS_CCDR_CHAR_COUNTB_VALUE,
           CPMS_CCDR_CHAR_COUNTB_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTB_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CCDR_CHAR_COUNTB_VALUE]

//>> SET_[CPMS_CCDR_CHAR_COUNTC_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTC_SCALE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTC_SCALE,
           CPMS_CCDR_CHAR_COUNTC_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTC_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTC_SCALE]

//>> SET_[CPMS_CCDR_CHAR_COUNTC_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTC_SCALE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTC_SCALE,
           CPMS_CCDR_CHAR_COUNTC_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTC_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTC_SCALE]

//>> GET_[CPMS_CCDR_CHAR_COUNTC_SCALE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CCDR_CHAR_COUNTC_SCALE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return i_data.extractToRight<CPMS_CCDR_CHAR_COUNTC_SCALE,
           CPMS_CCDR_CHAR_COUNTC_SCALE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTC_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CCDR_CHAR_COUNTC_SCALE]

//>> SET_[CPMS_CCDR_CHAR_COUNTC_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTC_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTC_VALUE,
           CPMS_CCDR_CHAR_COUNTC_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTC_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTC_VALUE]

//>> SET_[CPMS_CCDR_CHAR_COUNTC_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTC_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTC_VALUE,
           CPMS_CCDR_CHAR_COUNTC_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTC_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTC_VALUE]

//>> GET_[CPMS_CCDR_CHAR_COUNTC_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CCDR_CHAR_COUNTC_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return i_data.extractToRight<CPMS_CCDR_CHAR_COUNTC_VALUE,
           CPMS_CCDR_CHAR_COUNTC_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTC_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CCDR_CHAR_COUNTC_VALUE]

//>> SET_[CPMS_CCDR_CHAR_COUNTA_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTA_MOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTA_MOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTA_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTA_MOD]

//>> SET_[CPMS_CCDR_CHAR_COUNTA_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTA_MOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTA_MOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTA_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTA_MOD]

//>> SET_[CPMS_CCDR_CHAR_COUNTA_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTA_MOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.setBit<CPMS_CCDR_CHAR_COUNTA_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTA_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTA_MOD]

//>> CLEAR_[CPMS_CCDR_CHAR_COUNTA_MOD]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CCDR_CHAR_COUNTA_MOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.clearBit<CPMS_CCDR_CHAR_COUNTA_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTA_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CCDR_CHAR_COUNTA_MOD]

//>> GET_[CPMS_CCDR_CHAR_COUNTA_MOD]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CCDR_CHAR_COUNTA_MOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return i_data.extractToRight<CPMS_CCDR_CHAR_COUNTA_MOD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTA_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CCDR_CHAR_COUNTA_MOD]

//>> GET_[CPMS_CCDR_CHAR_COUNTA_MOD]
static inline bool GET_CPMS_CCDR_CHAR_COUNTA_MOD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return i_data.getBit<CPMS_CCDR_CHAR_COUNTA_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTA_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CCDR_CHAR_COUNTA_MOD]

//>> SET_[CPMS_CCDR_CHAR_COUNTB_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTB_MOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTB_MOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTB_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTB_MOD]

//>> SET_[CPMS_CCDR_CHAR_COUNTB_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTB_MOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTB_MOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTB_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTB_MOD]

//>> SET_[CPMS_CCDR_CHAR_COUNTB_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTB_MOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.setBit<CPMS_CCDR_CHAR_COUNTB_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTB_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTB_MOD]

//>> CLEAR_[CPMS_CCDR_CHAR_COUNTB_MOD]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CCDR_CHAR_COUNTB_MOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.clearBit<CPMS_CCDR_CHAR_COUNTB_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTB_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CCDR_CHAR_COUNTB_MOD]

//>> GET_[CPMS_CCDR_CHAR_COUNTB_MOD]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CCDR_CHAR_COUNTB_MOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return i_data.extractToRight<CPMS_CCDR_CHAR_COUNTB_MOD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTB_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CCDR_CHAR_COUNTB_MOD]

//>> GET_[CPMS_CCDR_CHAR_COUNTB_MOD]
static inline bool GET_CPMS_CCDR_CHAR_COUNTB_MOD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return i_data.getBit<CPMS_CCDR_CHAR_COUNTB_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTB_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CCDR_CHAR_COUNTB_MOD]

//>> SET_[CPMS_CCDR_CHAR_COUNTC_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTC_MOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTC_MOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTC_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTC_MOD]

//>> SET_[CPMS_CCDR_CHAR_COUNTC_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTC_MOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_CHAR_COUNTC_MOD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTC_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTC_MOD]

//>> SET_[CPMS_CCDR_CHAR_COUNTC_MOD]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_CHAR_COUNTC_MOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.setBit<CPMS_CCDR_CHAR_COUNTC_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTC_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_CHAR_COUNTC_MOD]

//>> CLEAR_[CPMS_CCDR_CHAR_COUNTC_MOD]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CCDR_CHAR_COUNTC_MOD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.clearBit<CPMS_CCDR_CHAR_COUNTC_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTC_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CCDR_CHAR_COUNTC_MOD]

//>> GET_[CPMS_CCDR_CHAR_COUNTC_MOD]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CCDR_CHAR_COUNTC_MOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return i_data.extractToRight<CPMS_CCDR_CHAR_COUNTC_MOD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTC_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CCDR_CHAR_COUNTC_MOD]

//>> GET_[CPMS_CCDR_CHAR_COUNTC_MOD]
static inline bool GET_CPMS_CCDR_CHAR_COUNTC_MOD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return i_data.getBit<CPMS_CCDR_CHAR_COUNTC_MOD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CCDR_CHAR_COUNTC_MOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CCDR_CHAR_COUNTC_MOD]

//>> SET_[CPMS_CCDR_SAMPLE_DISABLE_INDICATOR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_SAMPLE_DISABLE_INDICATOR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_SAMPLE_DISABLE_INDICATOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CCDR_SAMPLE_DISABLE_INDICATOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_SAMPLE_DISABLE_INDICATOR]

//>> SET_[CPMS_CCDR_SAMPLE_DISABLE_INDICATOR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_SAMPLE_DISABLE_INDICATOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.insertFromRight<CPMS_CCDR_SAMPLE_DISABLE_INDICATOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CCDR_SAMPLE_DISABLE_INDICATOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_SAMPLE_DISABLE_INDICATOR]

//>> SET_[CPMS_CCDR_SAMPLE_DISABLE_INDICATOR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CCDR_SAMPLE_DISABLE_INDICATOR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.setBit<CPMS_CCDR_SAMPLE_DISABLE_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CCDR_SAMPLE_DISABLE_INDICATOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CCDR_SAMPLE_DISABLE_INDICATOR]

//>> CLEAR_[CPMS_CCDR_SAMPLE_DISABLE_INDICATOR]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CCDR_SAMPLE_DISABLE_INDICATOR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return o_data.clearBit<CPMS_CCDR_SAMPLE_DISABLE_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CCDR_SAMPLE_DISABLE_INDICATOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CCDR_SAMPLE_DISABLE_INDICATOR]

//>> GET_[CPMS_CCDR_SAMPLE_DISABLE_INDICATOR]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CCDR_SAMPLE_DISABLE_INDICATOR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return i_data.extractToRight<CPMS_CCDR_SAMPLE_DISABLE_INDICATOR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CCDR_SAMPLE_DISABLE_INDICATOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CCDR_SAMPLE_DISABLE_INDICATOR]

//>> GET_[CPMS_CCDR_SAMPLE_DISABLE_INDICATOR]
static inline bool GET_CPMS_CCDR_SAMPLE_DISABLE_INDICATOR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CCDR));
#endif
    return i_data.getBit<CPMS_CCDR_SAMPLE_DISABLE_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CCDR_SAMPLE_DISABLE_INDICATOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CCDR_SAMPLE_DISABLE_INDICATOR]

//>> PREP_[CPMS_PRSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_PRSR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_PRSR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_PRSR]

//>> GET_[CPMS_PRSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_PRSR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_PRSR;
#endif
    return fapi2::getScom(i_target, CPMS_PRSR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_PRSR]

//>> PUT_[CPMS_PRSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_PRSR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_PRSR));
#endif
    return fapi2::putScom(i_target, CPMS_PRSR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_PRSR]


//>> SET_[CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PRSR));
#endif
    return o_data.insertFromRight<CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN,
           CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN]

//>> SET_[CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PRSR));
#endif
    return o_data.insertFromRight<CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN,
           CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN]

//>> GET_[CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN]
static inline fapi2::buffer<uint64_t>& GET_CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PRSR));
#endif
    return i_data.extractToRight<CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN,
           CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN]

//>> PREP_[QME_CDBA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_CDBA(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_CDBA;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_CDBA]

//>> GET_[QME_CDBA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_CDBA(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_CDBA;
#endif
    return fapi2::getScom(i_target, QME_CDBA, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_CDBA]

//>> PUT_[QME_CDBA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_CDBA(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_CDBA));
#endif
    return fapi2::putScom(i_target, QME_CDBA, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_CDBA]


//>> SET_[QME_CDBA_MESSAGE_NUMBER]
static inline fapi2::buffer<uint64_t>& SET_QME_CDBA_MESSAGE_NUMBER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CDBA));
#endif
    return o_data.insertFromRight<QME_CDBA_MESSAGE_NUMBER,
           QME_CDBA_MESSAGE_NUMBER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CDBA_MESSAGE_NUMBER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CDBA_MESSAGE_NUMBER]

//>> SET_[QME_CDBA_MESSAGE_NUMBER]
static inline fapi2::buffer<uint64_t>& SET_QME_CDBA_MESSAGE_NUMBER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CDBA));
#endif
    return o_data.insertFromRight<QME_CDBA_MESSAGE_NUMBER,
           QME_CDBA_MESSAGE_NUMBER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CDBA_MESSAGE_NUMBER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CDBA_MESSAGE_NUMBER]

//>> GET_[QME_CDBA_MESSAGE_NUMBER]
static inline fapi2::buffer<uint64_t>& GET_QME_CDBA_MESSAGE_NUMBER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CDBA));
#endif
    return i_data.extractToRight<QME_CDBA_MESSAGE_NUMBER,
           QME_CDBA_MESSAGE_NUMBER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CDBA_MESSAGE_NUMBER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CDBA_MESSAGE_NUMBER]

//>> PREP_[QME_CSIR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_CSIR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_CSIR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_CSIR]

//>> GET_[QME_CSIR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_CSIR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_CSIR;
#endif
    return fapi2::getScom(i_target, QME_CSIR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_CSIR]

//>> PUT_[QME_CSIR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_CSIR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_CSIR));
#endif
    return fapi2::putScom(i_target, QME_CSIR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_CSIR]


//>> SET_[QME_CSIR_PMSR_INSTR_DATA]
static inline fapi2::buffer<uint64_t>& SET_QME_CSIR_PMSR_INSTR_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CSIR));
#endif
    return o_data.insertFromRight<QME_CSIR_PMSR_INSTR_DATA,
           QME_CSIR_PMSR_INSTR_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CSIR_PMSR_INSTR_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CSIR_PMSR_INSTR_DATA]

//>> SET_[QME_CSIR_PMSR_INSTR_DATA]
static inline fapi2::buffer<uint64_t>& SET_QME_CSIR_PMSR_INSTR_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CSIR));
#endif
    return o_data.insertFromRight<QME_CSIR_PMSR_INSTR_DATA,
           QME_CSIR_PMSR_INSTR_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CSIR_PMSR_INSTR_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CSIR_PMSR_INSTR_DATA]

//>> GET_[QME_CSIR_PMSR_INSTR_DATA]
static inline fapi2::buffer<uint64_t>& GET_QME_CSIR_PMSR_INSTR_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CSIR));
#endif
    return i_data.extractToRight<QME_CSIR_PMSR_INSTR_DATA,
           QME_CSIR_PMSR_INSTR_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CSIR_PMSR_INSTR_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CSIR_PMSR_INSTR_DATA]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
