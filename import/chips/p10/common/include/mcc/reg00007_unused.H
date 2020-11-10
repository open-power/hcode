/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mcc/reg00007_unused.H $       */
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

#ifndef __MCC_REG00007_H_UNUSED__
#define __MCC_REG00007_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mcc
{
#endif


//>> PREP_[DSTL_DSTLINJ]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DSTL_DSTLINJ(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DSTL_DSTLINJ;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DSTL_DSTLINJ]

//>> GET_[DSTL_DSTLINJ]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DSTL_DSTLINJ(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DSTL_DSTLINJ;
#endif
    return fapi2::getScom(i_target, DSTL_DSTLINJ, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DSTL_DSTLINJ]

//>> PUT_[DSTL_DSTLINJ]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DSTL_DSTLINJ(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return fapi2::putScom(i_target, DSTL_DSTLINJ, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DSTL_DSTLINJ]


//>> SET_[DSTL_DSTLINJ_ERR_INJ_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLINJ_ERR_INJ_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.insertFromRight<DSTL_DSTLINJ_ERR_INJ_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLINJ_ERR_INJ_TRIGGER]

//>> SET_[DSTL_DSTLINJ_ERR_INJ_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLINJ_ERR_INJ_TRIGGER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.insertFromRight<DSTL_DSTLINJ_ERR_INJ_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLINJ_ERR_INJ_TRIGGER]

//>> SET_[DSTL_DSTLINJ_ERR_INJ_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLINJ_ERR_INJ_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.setBit<DSTL_DSTLINJ_ERR_INJ_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLINJ_ERR_INJ_TRIGGER]

//>> CLEAR_[DSTL_DSTLINJ_ERR_INJ_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLINJ_ERR_INJ_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.clearBit<DSTL_DSTLINJ_ERR_INJ_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLINJ_ERR_INJ_TRIGGER]

//>> GET_[DSTL_DSTLINJ_ERR_INJ_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLINJ_ERR_INJ_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return i_data.extractToRight<DSTL_DSTLINJ_ERR_INJ_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLINJ_ERR_INJ_TRIGGER]

//>> GET_[DSTL_DSTLINJ_ERR_INJ_TRIGGER]
static inline bool GET_DSTL_DSTLINJ_ERR_INJ_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return i_data.getBit<DSTL_DSTLINJ_ERR_INJ_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLINJ_ERR_INJ_TRIGGER]

//>> SET_[DSTL_DSTLINJ_ERR_INJ_CONT_MODE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLINJ_ERR_INJ_CONT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.insertFromRight<DSTL_DSTLINJ_ERR_INJ_CONT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_CONT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLINJ_ERR_INJ_CONT_MODE]

//>> SET_[DSTL_DSTLINJ_ERR_INJ_CONT_MODE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLINJ_ERR_INJ_CONT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.insertFromRight<DSTL_DSTLINJ_ERR_INJ_CONT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_CONT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLINJ_ERR_INJ_CONT_MODE]

//>> SET_[DSTL_DSTLINJ_ERR_INJ_CONT_MODE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLINJ_ERR_INJ_CONT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.setBit<DSTL_DSTLINJ_ERR_INJ_CONT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_CONT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLINJ_ERR_INJ_CONT_MODE]

//>> CLEAR_[DSTL_DSTLINJ_ERR_INJ_CONT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLINJ_ERR_INJ_CONT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.clearBit<DSTL_DSTLINJ_ERR_INJ_CONT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_CONT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLINJ_ERR_INJ_CONT_MODE]

//>> GET_[DSTL_DSTLINJ_ERR_INJ_CONT_MODE]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLINJ_ERR_INJ_CONT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return i_data.extractToRight<DSTL_DSTLINJ_ERR_INJ_CONT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_CONT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLINJ_ERR_INJ_CONT_MODE]

//>> GET_[DSTL_DSTLINJ_ERR_INJ_CONT_MODE]
static inline bool GET_DSTL_DSTLINJ_ERR_INJ_CONT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return i_data.getBit<DSTL_DSTLINJ_ERR_INJ_CONT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_CONT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLINJ_ERR_INJ_CONT_MODE]

//>> SET_[DSTL_DSTLINJ_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLINJ_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.insertFromRight<DSTL_DSTLINJ_ERR_INJ_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLINJ_ERR_INJ_TYPE]

//>> SET_[DSTL_DSTLINJ_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLINJ_ERR_INJ_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.insertFromRight<DSTL_DSTLINJ_ERR_INJ_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLINJ_ERR_INJ_TYPE]

//>> SET_[DSTL_DSTLINJ_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLINJ_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.setBit<DSTL_DSTLINJ_ERR_INJ_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLINJ_ERR_INJ_TYPE]

//>> CLEAR_[DSTL_DSTLINJ_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLINJ_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.clearBit<DSTL_DSTLINJ_ERR_INJ_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLINJ_ERR_INJ_TYPE]

//>> GET_[DSTL_DSTLINJ_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLINJ_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return i_data.extractToRight<DSTL_DSTLINJ_ERR_INJ_TYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLINJ_ERR_INJ_TYPE]

//>> GET_[DSTL_DSTLINJ_ERR_INJ_TYPE]
static inline bool GET_DSTL_DSTLINJ_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return i_data.getBit<DSTL_DSTLINJ_ERR_INJ_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLINJ_ERR_INJ_TYPE]

//>> SET_[DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.insertFromRight<DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL]

//>> SET_[DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.insertFromRight<DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL]

//>> SET_[DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.setBit<DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL]

//>> CLEAR_[DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.clearBit<DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL]

//>> GET_[DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return i_data.extractToRight<DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL]

//>> GET_[DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL]
static inline bool GET_DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return i_data.getBit<DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_mcc Invalid dial access DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLINJ_ERR_INJ_SUBCH_SEL]

//>> SET_[DSTL_DSTLINJ_RESERVED_4_15]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLINJ_RESERVED_4_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.insertFromRight<DSTL_DSTLINJ_RESERVED_4_15,
           DSTL_DSTLINJ_RESERVED_4_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLINJ_RESERVED_4_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLINJ_RESERVED_4_15]

//>> SET_[DSTL_DSTLINJ_RESERVED_4_15]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLINJ_RESERVED_4_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return o_data.insertFromRight<DSTL_DSTLINJ_RESERVED_4_15,
           DSTL_DSTLINJ_RESERVED_4_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLINJ_RESERVED_4_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLINJ_RESERVED_4_15]

//>> GET_[DSTL_DSTLINJ_RESERVED_4_15]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLINJ_RESERVED_4_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLINJ));
#endif
    return i_data.extractToRight<DSTL_DSTLINJ_RESERVED_4_15,
           DSTL_DSTLINJ_RESERVED_4_15_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLINJ_RESERVED_4_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLINJ_RESERVED_4_15]

//>> PREP_[WRITE_WRT_DSTL_ECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_WRITE_WRT_DSTL_ECC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WRITE_WRT_DSTL_ECC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[WRITE_WRT_DSTL_ECC]

//>> GET_[WRITE_WRT_DSTL_ECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_WRITE_WRT_DSTL_ECC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WRITE_WRT_DSTL_ECC;
#endif
    return fapi2::getScom(i_target, WRITE_WRT_DSTL_ECC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[WRITE_WRT_DSTL_ECC]

//>> PUT_[WRITE_WRT_DSTL_ECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_WRITE_WRT_DSTL_ECC(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return fapi2::putScom(i_target, WRITE_WRT_DSTL_ECC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[WRITE_WRT_DSTL_ECC]


//>> SET_[WRITE_WRT_DSTL_ECC_0_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_0_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_0_ERR_TYPE,
           WRITE_WRT_DSTL_ECC_0_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_0_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_0_ERR_TYPE]

//>> SET_[WRITE_WRT_DSTL_ECC_0_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_0_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_0_ERR_TYPE,
           WRITE_WRT_DSTL_ECC_0_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_0_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_0_ERR_TYPE]

//>> GET_[WRITE_WRT_DSTL_ECC_0_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_DSTL_ECC_0_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_DSTL_ECC_0_ERR_TYPE,
           WRITE_WRT_DSTL_ECC_0_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_0_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_DSTL_ECC_0_ERR_TYPE]

//>> SET_[WRITE_WRT_DSTL_ECC_0_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_0_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_0_SYNDROME,
           WRITE_WRT_DSTL_ECC_0_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_0_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_0_SYNDROME]

//>> SET_[WRITE_WRT_DSTL_ECC_0_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_0_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_0_SYNDROME,
           WRITE_WRT_DSTL_ECC_0_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_0_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_0_SYNDROME]

//>> GET_[WRITE_WRT_DSTL_ECC_0_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_DSTL_ECC_0_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_DSTL_ECC_0_SYNDROME,
           WRITE_WRT_DSTL_ECC_0_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_0_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_DSTL_ECC_0_SYNDROME]

//>> SET_[WRITE_WRT_DSTL_ECC_1_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_1_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_1_ERR_TYPE,
           WRITE_WRT_DSTL_ECC_1_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_1_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_1_ERR_TYPE]

//>> SET_[WRITE_WRT_DSTL_ECC_1_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_1_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_1_ERR_TYPE,
           WRITE_WRT_DSTL_ECC_1_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_1_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_1_ERR_TYPE]

//>> GET_[WRITE_WRT_DSTL_ECC_1_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_DSTL_ECC_1_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_DSTL_ECC_1_ERR_TYPE,
           WRITE_WRT_DSTL_ECC_1_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_1_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_DSTL_ECC_1_ERR_TYPE]

//>> SET_[WRITE_WRT_DSTL_ECC_1_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_1_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_1_SYNDROME,
           WRITE_WRT_DSTL_ECC_1_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_1_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_1_SYNDROME]

//>> SET_[WRITE_WRT_DSTL_ECC_1_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_1_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_1_SYNDROME,
           WRITE_WRT_DSTL_ECC_1_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_1_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_1_SYNDROME]

//>> GET_[WRITE_WRT_DSTL_ECC_1_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_DSTL_ECC_1_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_DSTL_ECC_1_SYNDROME,
           WRITE_WRT_DSTL_ECC_1_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_1_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_DSTL_ECC_1_SYNDROME]

//>> SET_[WRITE_WRT_DSTL_ECC_2_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_2_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_2_ERR_TYPE,
           WRITE_WRT_DSTL_ECC_2_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_2_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_2_ERR_TYPE]

//>> SET_[WRITE_WRT_DSTL_ECC_2_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_2_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_2_ERR_TYPE,
           WRITE_WRT_DSTL_ECC_2_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_2_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_2_ERR_TYPE]

//>> GET_[WRITE_WRT_DSTL_ECC_2_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_DSTL_ECC_2_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_DSTL_ECC_2_ERR_TYPE,
           WRITE_WRT_DSTL_ECC_2_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_2_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_DSTL_ECC_2_ERR_TYPE]

//>> SET_[WRITE_WRT_DSTL_ECC_2_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_2_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_2_SYNDROME,
           WRITE_WRT_DSTL_ECC_2_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_2_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_2_SYNDROME]

//>> SET_[WRITE_WRT_DSTL_ECC_2_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_2_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_2_SYNDROME,
           WRITE_WRT_DSTL_ECC_2_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_2_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_2_SYNDROME]

//>> GET_[WRITE_WRT_DSTL_ECC_2_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_DSTL_ECC_2_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_DSTL_ECC_2_SYNDROME,
           WRITE_WRT_DSTL_ECC_2_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_2_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_DSTL_ECC_2_SYNDROME]

//>> SET_[WRITE_WRT_DSTL_ECC_3_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_3_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_3_ERR_TYPE,
           WRITE_WRT_DSTL_ECC_3_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_3_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_3_ERR_TYPE]

//>> SET_[WRITE_WRT_DSTL_ECC_3_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_3_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_3_ERR_TYPE,
           WRITE_WRT_DSTL_ECC_3_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_3_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_3_ERR_TYPE]

//>> GET_[WRITE_WRT_DSTL_ECC_3_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_DSTL_ECC_3_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_DSTL_ECC_3_ERR_TYPE,
           WRITE_WRT_DSTL_ECC_3_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_3_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_DSTL_ECC_3_ERR_TYPE]

//>> SET_[WRITE_WRT_DSTL_ECC_3_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_3_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_3_SYNDROME,
           WRITE_WRT_DSTL_ECC_3_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_3_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_3_SYNDROME]

//>> SET_[WRITE_WRT_DSTL_ECC_3_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WRITE_WRT_DSTL_ECC_3_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return o_data.insertFromRight<WRITE_WRT_DSTL_ECC_3_SYNDROME,
           WRITE_WRT_DSTL_ECC_3_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_3_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_WRT_DSTL_ECC_3_SYNDROME]

//>> GET_[WRITE_WRT_DSTL_ECC_3_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WRITE_WRT_DSTL_ECC_3_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_WRT_DSTL_ECC));
#endif
    return i_data.extractToRight<WRITE_WRT_DSTL_ECC_3_SYNDROME,
           WRITE_WRT_DSTL_ECC_3_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WRITE_WRT_DSTL_ECC_3_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_WRT_DSTL_ECC_3_SYNDROME]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
