/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/iohs/reg00030_unused.H $      */
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

#ifndef __IOHS_REG00030_H_UNUSED__
#define __IOHS_REG00030_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace iohs
{
#endif


//>> PREP_[AXON_CC_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_CC_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_CC_PROTECT_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_CC_PROTECT_MODE_REG]

//>> GET_[AXON_CC_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_CC_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_CC_PROTECT_MODE_REG;
#endif
    return fapi2::getScom(i_target, AXON_CC_PROTECT_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_CC_PROTECT_MODE_REG]

//>> PUT_[AXON_CC_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_CC_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_CC_PROTECT_MODE_REG));
#endif
    return fapi2::putScom(i_target, AXON_CC_PROTECT_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_CC_PROTECT_MODE_REG]


//>> SET_[AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CC_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CC_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CC_PROTECT_MODE_REG));
#endif
    return o_data.setBit<AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> CLEAR_[AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CC_PROTECT_MODE_REG));
#endif
    return o_data.clearBit<AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> GET_[AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CC_PROTECT_MODE_REG));
#endif
    return i_data.extractToRight<AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> GET_[AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline bool GET_AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CC_PROTECT_MODE_REG));
#endif
    return i_data.getBit<AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CC_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CC_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> SET_[AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CC_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> SET_[AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CC_PROTECT_MODE_REG));
#endif
    return o_data.setBit<AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> CLEAR_[AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CC_PROTECT_MODE_REG));
#endif
    return o_data.clearBit<AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> GET_[AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CC_PROTECT_MODE_REG));
#endif
    return i_data.extractToRight<AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> GET_[AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline bool GET_AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CC_PROTECT_MODE_REG));
#endif
    return i_data.getBit<AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CC_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> PREP_[AXON_CPLT_CTRL4_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_CPLT_CTRL4_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_CPLT_CTRL4_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_CPLT_CTRL4_RW]

//>> GET_[AXON_CPLT_CTRL4_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_CPLT_CTRL4_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_CPLT_CTRL4_RW;
#endif
    return fapi2::getScom(i_target, AXON_CPLT_CTRL4_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_RW]

//>> PUT_[AXON_CPLT_CTRL4_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_CPLT_CTRL4_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return fapi2::putScom(i_target, AXON_CPLT_CTRL4_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_CPLT_CTRL4_RW]

//>> PREP_[AXON_CPLT_CTRL4_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_CPLT_CTRL4_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_CPLT_CTRL4_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_CPLT_CTRL4_WO_CLEAR]

//>> GET_[AXON_CPLT_CTRL4_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_CPLT_CTRL4_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_CPLT_CTRL4_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, AXON_CPLT_CTRL4_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_WO_CLEAR]

//>> PUT_[AXON_CPLT_CTRL4_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_CPLT_CTRL4_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return fapi2::putScom(i_target, AXON_CPLT_CTRL4_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_CPLT_CTRL4_WO_CLEAR]

//>> PREP_[AXON_CPLT_CTRL4_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_CPLT_CTRL4_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_CPLT_CTRL4_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_CPLT_CTRL4_WO_OR]

//>> GET_[AXON_CPLT_CTRL4_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_CPLT_CTRL4_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_CPLT_CTRL4_WO_OR;
#endif
    return fapi2::getScom(i_target, AXON_CPLT_CTRL4_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_WO_OR]

//>> PUT_[AXON_CPLT_CTRL4_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_CPLT_CTRL4_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return fapi2::putScom(i_target, AXON_CPLT_CTRL4_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_CPLT_CTRL4_WO_OR]


//>> SET_[AXON_CPLT_CTRL4_0_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_0_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_0_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_0_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_0_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_0_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_0_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_0_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_0_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_0_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_0_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_0_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_0_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_0_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_0_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_0_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_0_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_0_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_0_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_0_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_0_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_0_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_0_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_0_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_0_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_0_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_0_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_0_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_0_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_0_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_1_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_1_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_1_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_1_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_1_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_1_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_1_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_1_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_1_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_1_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_1_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_1_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_1_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_1_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_1_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_1_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_1_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_1_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_1_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_1_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_1_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_1_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_1_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_1_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_1_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_1_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_1_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_1_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_1_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_1_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_2_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_2_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_2_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_2_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_2_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_2_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_2_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_2_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_2_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_2_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_2_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_2_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_2_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_2_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_2_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_2_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_2_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_2_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_2_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_2_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_2_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_2_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_2_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_2_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_2_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_2_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_2_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_2_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_2_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_2_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_3_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_3_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_3_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_3_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_3_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_3_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_3_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_3_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_3_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_3_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_3_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_3_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_3_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_3_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_3_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_3_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_3_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_3_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_3_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_3_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_3_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_3_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_3_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_3_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_3_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_3_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_3_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_3_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_3_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_3_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_4_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_4_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_4_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_4_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_4_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_4_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_4_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_4_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_4_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_4_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_4_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_4_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_4_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_4_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_4_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_4_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_4_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_4_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_4_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_4_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_4_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_4_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_4_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_4_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_4_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_4_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_4_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_4_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_4_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_4_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_5_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_5_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_5_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_5_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_5_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_5_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_5_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_5_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_5_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_5_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_5_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_5_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_5_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_5_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_5_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_5_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_5_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_5_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_5_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_5_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_5_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_5_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_5_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_5_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_5_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_5_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_5_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_5_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_5_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_5_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_6_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_6_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_6_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_6_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_6_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_6_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_6_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_6_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_6_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_6_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_6_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_6_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_6_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_6_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_6_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_6_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_6_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_6_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_6_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_6_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_6_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_6_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_6_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_6_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_6_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_6_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_6_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_6_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_6_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_6_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_7_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_7_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_7_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_7_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_7_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_7_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_7_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_7_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_7_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_7_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_7_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_7_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_7_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_7_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_7_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_7_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_7_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_7_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_7_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_7_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_7_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_7_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_7_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_7_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_7_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_7_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_7_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_7_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_7_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_7_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_8_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_8_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_8_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_8_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_8_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_8_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_8_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_8_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_8_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_8_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_8_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_8_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_8_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_8_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_8_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_8_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_8_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_8_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_8_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_8_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_8_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_8_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_8_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_8_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_8_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_8_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_8_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_8_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_8_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_8_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_9_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_9_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_9_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_9_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_9_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_9_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_9_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_9_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_9_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_9_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_9_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_9_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_9_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_9_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_9_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_9_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_9_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_9_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_9_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_9_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_9_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_9_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_9_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_9_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_9_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_9_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_9_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_9_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_9_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_9_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_10_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_10_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_10_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_10_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_10_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_10_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_10_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_10_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_10_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_10_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_10_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_10_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_10_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_10_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_10_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_10_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_10_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_10_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_10_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_10_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_10_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_10_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_10_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_10_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_10_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_10_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_10_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_10_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_10_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_10_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_11_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_11_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_11_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_11_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_11_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_11_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_11_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_11_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_11_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_11_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_11_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_11_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_11_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_11_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_11_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_11_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_11_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_11_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_11_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_11_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_11_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_11_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_11_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_11_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_11_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_11_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_11_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_11_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_11_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_11_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_12_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_12_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_12_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_12_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_12_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_12_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_12_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_12_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_12_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_12_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_12_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_12_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_12_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_12_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_12_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_12_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_12_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_12_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_12_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_12_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_12_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_12_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_12_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_12_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_12_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_12_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_12_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_12_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_12_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_12_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_13_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_13_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_13_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_13_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_13_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_13_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_13_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_13_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_13_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_13_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_13_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_13_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_13_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_13_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_13_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_13_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_13_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_13_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_13_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_13_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_13_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_13_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_13_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_13_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_13_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_13_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_13_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_13_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_13_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_13_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_14_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_14_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_14_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_CPLT_CTRL4_14_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_14_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_14_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_14_FLUSHMODE_INH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.insertFromRight<AXON_CPLT_CTRL4_14_FLUSHMODE_INH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_CPLT_CTRL4_14_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_14_FLUSHMODE_INH]

//>> SET_[AXON_CPLT_CTRL4_14_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& SET_AXON_CPLT_CTRL4_14_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.setBit<AXON_CPLT_CTRL4_14_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_CPLT_CTRL4_14_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_CPLT_CTRL4_14_FLUSHMODE_INH]

//>> CLEAR_[AXON_CPLT_CTRL4_14_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_CPLT_CTRL4_14_FLUSHMODE_INH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return o_data.clearBit<AXON_CPLT_CTRL4_14_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_CPLT_CTRL4_14_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_CPLT_CTRL4_14_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_14_FLUSHMODE_INH]
static inline fapi2::buffer<uint64_t>& GET_AXON_CPLT_CTRL4_14_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.extractToRight<AXON_CPLT_CTRL4_14_FLUSHMODE_INH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_CPLT_CTRL4_14_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_14_FLUSHMODE_INH]

//>> GET_[AXON_CPLT_CTRL4_14_FLUSHMODE_INH]
static inline bool GET_AXON_CPLT_CTRL4_14_FLUSHMODE_INH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_CPLT_CTRL4_RW, AXON_CPLT_CTRL4_WO_CLEAR, AXON_CPLT_CTRL4_WO_OR));
#endif
    return i_data.getBit<AXON_CPLT_CTRL4_14_FLUSHMODE_INH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_CPLT_CTRL4_14_FLUSHMODE_INH chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_CPLT_CTRL4_14_FLUSHMODE_INH]

//>> PREP_[AXON_EPS_DBG_INST1_COND_REG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_EPS_DBG_INST1_COND_REG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_DBG_INST1_COND_REG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_EPS_DBG_INST1_COND_REG_3]

//>> GET_[AXON_EPS_DBG_INST1_COND_REG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_EPS_DBG_INST1_COND_REG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_DBG_INST1_COND_REG_3;
#endif
    return fapi2::getScom(i_target, AXON_EPS_DBG_INST1_COND_REG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_EPS_DBG_INST1_COND_REG_3]

//>> PUT_[AXON_EPS_DBG_INST1_COND_REG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_EPS_DBG_INST1_COND_REG_3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST1_COND_REG_3));
#endif
    return fapi2::putScom(i_target, AXON_EPS_DBG_INST1_COND_REG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_EPS_DBG_INST1_COND_REG_3]


//>> PREP_[AXON_EPS_DBG_INST2_COND_REG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_EPS_DBG_INST2_COND_REG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_DBG_INST2_COND_REG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_EPS_DBG_INST2_COND_REG_3]

//>> GET_[AXON_EPS_DBG_INST2_COND_REG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_EPS_DBG_INST2_COND_REG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_DBG_INST2_COND_REG_3;
#endif
    return fapi2::getScom(i_target, AXON_EPS_DBG_INST2_COND_REG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_EPS_DBG_INST2_COND_REG_3]

//>> PUT_[AXON_EPS_DBG_INST2_COND_REG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_EPS_DBG_INST2_COND_REG_3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_INST2_COND_REG_3));
#endif
    return fapi2::putScom(i_target, AXON_EPS_DBG_INST2_COND_REG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_EPS_DBG_INST2_COND_REG_3]


//>> PREP_[AXON_EPS_DBG_TRACE_REG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_EPS_DBG_TRACE_REG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_DBG_TRACE_REG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_EPS_DBG_TRACE_REG_0]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_EPS_DBG_TRACE_REG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_DBG_TRACE_REG_0;
#endif
    return fapi2::getScom(i_target, AXON_EPS_DBG_TRACE_REG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0]

//>> PUT_[AXON_EPS_DBG_TRACE_REG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_EPS_DBG_TRACE_REG_0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return fapi2::putScom(i_target, AXON_EPS_DBG_TRACE_REG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_EPS_DBG_TRACE_REG_0]


//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline bool GET_AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline bool GET_AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline bool GET_AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline bool GET_AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline bool GET_AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline bool GET_AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline bool GET_AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline bool GET_AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> CLEAR_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline bool GET_AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> CLEAR_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline bool GET_AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL,
           AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL,
           AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL,
           AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL,
           AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL,
           AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL,
           AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL,
           AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL,
           AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]

//>> SET_[AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL,
           AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]

//>> GET_[AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL,
           AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]

//>> PREP_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG;
#endif
    return fapi2::getScom(i_target, AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG]

//>> PUT_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return fapi2::putScom(i_target, AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG]


//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC,
           AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC,
           AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC,
           AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT,
           AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]

//>> SET_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT,
           AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]

//>> GET_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT,
           AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]

//>> PREP_[AXON_OPCG_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_OPCG_REG1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_OPCG_REG1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_OPCG_REG1]

//>> GET_[AXON_OPCG_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_OPCG_REG1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_OPCG_REG1;
#endif
    return fapi2::getScom(i_target, AXON_OPCG_REG1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_OPCG_REG1]

//>> PUT_[AXON_OPCG_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_OPCG_REG1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return fapi2::putScom(i_target, AXON_OPCG_REG1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_OPCG_REG1]


//>> SET_[AXON_OPCG_REG1_SCAN_COUNT]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_SCAN_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_SCAN_COUNT,
           AXON_OPCG_REG1_SCAN_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_OPCG_REG1_SCAN_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_SCAN_COUNT]

//>> SET_[AXON_OPCG_REG1_SCAN_COUNT]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_SCAN_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_SCAN_COUNT,
           AXON_OPCG_REG1_SCAN_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_OPCG_REG1_SCAN_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_SCAN_COUNT]

//>> GET_[AXON_OPCG_REG1_SCAN_COUNT]
static inline fapi2::buffer<uint64_t>& GET_AXON_OPCG_REG1_SCAN_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.extractToRight<AXON_OPCG_REG1_SCAN_COUNT,
           AXON_OPCG_REG1_SCAN_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_OPCG_REG1_SCAN_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_SCAN_COUNT]

//>> SET_[AXON_OPCG_REG1_MISR_A_VAL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_MISR_A_VAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_MISR_A_VAL,
           AXON_OPCG_REG1_MISR_A_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_A_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_MISR_A_VAL]

//>> SET_[AXON_OPCG_REG1_MISR_A_VAL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_MISR_A_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_MISR_A_VAL,
           AXON_OPCG_REG1_MISR_A_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_A_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_MISR_A_VAL]

//>> GET_[AXON_OPCG_REG1_MISR_A_VAL]
static inline fapi2::buffer<uint64_t>& GET_AXON_OPCG_REG1_MISR_A_VAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.extractToRight<AXON_OPCG_REG1_MISR_A_VAL,
           AXON_OPCG_REG1_MISR_A_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_A_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_MISR_A_VAL]

//>> SET_[AXON_OPCG_REG1_MISR_B_VAL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_MISR_B_VAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_MISR_B_VAL,
           AXON_OPCG_REG1_MISR_B_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_B_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_MISR_B_VAL]

//>> SET_[AXON_OPCG_REG1_MISR_B_VAL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_MISR_B_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_MISR_B_VAL,
           AXON_OPCG_REG1_MISR_B_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_B_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_MISR_B_VAL]

//>> GET_[AXON_OPCG_REG1_MISR_B_VAL]
static inline fapi2::buffer<uint64_t>& GET_AXON_OPCG_REG1_MISR_B_VAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.extractToRight<AXON_OPCG_REG1_MISR_B_VAL,
           AXON_OPCG_REG1_MISR_B_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_B_VAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_MISR_B_VAL]

//>> SET_[AXON_OPCG_REG1_MISR_INIT_WAIT]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_MISR_INIT_WAIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_MISR_INIT_WAIT,
           AXON_OPCG_REG1_MISR_INIT_WAIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_INIT_WAIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_MISR_INIT_WAIT]

//>> SET_[AXON_OPCG_REG1_MISR_INIT_WAIT]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_MISR_INIT_WAIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_MISR_INIT_WAIT,
           AXON_OPCG_REG1_MISR_INIT_WAIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_INIT_WAIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_MISR_INIT_WAIT]

//>> GET_[AXON_OPCG_REG1_MISR_INIT_WAIT]
static inline fapi2::buffer<uint64_t>& GET_AXON_OPCG_REG1_MISR_INIT_WAIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.extractToRight<AXON_OPCG_REG1_MISR_INIT_WAIT,
           AXON_OPCG_REG1_MISR_INIT_WAIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_INIT_WAIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_MISR_INIT_WAIT]

//>> SET_[AXON_OPCG_REG1_SCAN_CLK_USE_EVEN]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_SCAN_CLK_USE_EVEN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_SCAN_CLK_USE_EVEN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_OPCG_REG1_SCAN_CLK_USE_EVEN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_SCAN_CLK_USE_EVEN]

//>> SET_[AXON_OPCG_REG1_SCAN_CLK_USE_EVEN]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_SCAN_CLK_USE_EVEN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_SCAN_CLK_USE_EVEN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_OPCG_REG1_SCAN_CLK_USE_EVEN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_SCAN_CLK_USE_EVEN]

//>> SET_[AXON_OPCG_REG1_SCAN_CLK_USE_EVEN]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_SCAN_CLK_USE_EVEN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.setBit<AXON_OPCG_REG1_SCAN_CLK_USE_EVEN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_OPCG_REG1_SCAN_CLK_USE_EVEN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_SCAN_CLK_USE_EVEN]

//>> CLEAR_[AXON_OPCG_REG1_SCAN_CLK_USE_EVEN]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_OPCG_REG1_SCAN_CLK_USE_EVEN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.clearBit<AXON_OPCG_REG1_SCAN_CLK_USE_EVEN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_OPCG_REG1_SCAN_CLK_USE_EVEN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_OPCG_REG1_SCAN_CLK_USE_EVEN]

//>> GET_[AXON_OPCG_REG1_SCAN_CLK_USE_EVEN]
static inline fapi2::buffer<uint64_t>& GET_AXON_OPCG_REG1_SCAN_CLK_USE_EVEN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.extractToRight<AXON_OPCG_REG1_SCAN_CLK_USE_EVEN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_OPCG_REG1_SCAN_CLK_USE_EVEN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_SCAN_CLK_USE_EVEN]

//>> GET_[AXON_OPCG_REG1_SCAN_CLK_USE_EVEN]
static inline bool GET_AXON_OPCG_REG1_SCAN_CLK_USE_EVEN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.getBit<AXON_OPCG_REG1_SCAN_CLK_USE_EVEN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_OPCG_REG1_SCAN_CLK_USE_EVEN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_SCAN_CLK_USE_EVEN]

//>> SET_[AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL]

//>> SET_[AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL]

//>> SET_[AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.setBit<AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL]

//>> CLEAR_[AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.clearBit<AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL]

//>> GET_[AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL]
static inline fapi2::buffer<uint64_t>& GET_AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.extractToRight<AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL]

//>> GET_[AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL]
static inline bool GET_AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.getBit<AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_DISABLE_FCE_DURING_FILL]

//>> SET_[AXON_OPCG_REG1_RTIM_THOLD_FORCE]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_RTIM_THOLD_FORCE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_RTIM_THOLD_FORCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_OPCG_REG1_RTIM_THOLD_FORCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_RTIM_THOLD_FORCE]

//>> SET_[AXON_OPCG_REG1_RTIM_THOLD_FORCE]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_RTIM_THOLD_FORCE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_RTIM_THOLD_FORCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_OPCG_REG1_RTIM_THOLD_FORCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_RTIM_THOLD_FORCE]

//>> SET_[AXON_OPCG_REG1_RTIM_THOLD_FORCE]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_RTIM_THOLD_FORCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.setBit<AXON_OPCG_REG1_RTIM_THOLD_FORCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_OPCG_REG1_RTIM_THOLD_FORCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_RTIM_THOLD_FORCE]

//>> CLEAR_[AXON_OPCG_REG1_RTIM_THOLD_FORCE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_OPCG_REG1_RTIM_THOLD_FORCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.clearBit<AXON_OPCG_REG1_RTIM_THOLD_FORCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_OPCG_REG1_RTIM_THOLD_FORCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_OPCG_REG1_RTIM_THOLD_FORCE]

//>> GET_[AXON_OPCG_REG1_RTIM_THOLD_FORCE]
static inline fapi2::buffer<uint64_t>& GET_AXON_OPCG_REG1_RTIM_THOLD_FORCE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.extractToRight<AXON_OPCG_REG1_RTIM_THOLD_FORCE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_OPCG_REG1_RTIM_THOLD_FORCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_RTIM_THOLD_FORCE]

//>> GET_[AXON_OPCG_REG1_RTIM_THOLD_FORCE]
static inline bool GET_AXON_OPCG_REG1_RTIM_THOLD_FORCE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.getBit<AXON_OPCG_REG1_RTIM_THOLD_FORCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_OPCG_REG1_RTIM_THOLD_FORCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_RTIM_THOLD_FORCE]

//>> SET_[AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL]

//>> SET_[AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL]

//>> SET_[AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.setBit<AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL]

//>> CLEAR_[AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.clearBit<AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL]

//>> GET_[AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL]
static inline fapi2::buffer<uint64_t>& GET_AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.extractToRight<AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL]

//>> GET_[AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL]
static inline bool GET_AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.getBit<AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_DISABLE_ARY_CLK_DURING_FILL]

//>> SET_[AXON_OPCG_REG1_SG_HIGH_DURING_FILL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_SG_HIGH_DURING_FILL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_SG_HIGH_DURING_FILL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_OPCG_REG1_SG_HIGH_DURING_FILL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_SG_HIGH_DURING_FILL]

//>> SET_[AXON_OPCG_REG1_SG_HIGH_DURING_FILL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_SG_HIGH_DURING_FILL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_SG_HIGH_DURING_FILL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_OPCG_REG1_SG_HIGH_DURING_FILL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_SG_HIGH_DURING_FILL]

//>> SET_[AXON_OPCG_REG1_SG_HIGH_DURING_FILL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_SG_HIGH_DURING_FILL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.setBit<AXON_OPCG_REG1_SG_HIGH_DURING_FILL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_OPCG_REG1_SG_HIGH_DURING_FILL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_SG_HIGH_DURING_FILL]

//>> CLEAR_[AXON_OPCG_REG1_SG_HIGH_DURING_FILL]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_OPCG_REG1_SG_HIGH_DURING_FILL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.clearBit<AXON_OPCG_REG1_SG_HIGH_DURING_FILL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_OPCG_REG1_SG_HIGH_DURING_FILL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_OPCG_REG1_SG_HIGH_DURING_FILL]

//>> GET_[AXON_OPCG_REG1_SG_HIGH_DURING_FILL]
static inline fapi2::buffer<uint64_t>& GET_AXON_OPCG_REG1_SG_HIGH_DURING_FILL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.extractToRight<AXON_OPCG_REG1_SG_HIGH_DURING_FILL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_OPCG_REG1_SG_HIGH_DURING_FILL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_SG_HIGH_DURING_FILL]

//>> GET_[AXON_OPCG_REG1_SG_HIGH_DURING_FILL]
static inline bool GET_AXON_OPCG_REG1_SG_HIGH_DURING_FILL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.getBit<AXON_OPCG_REG1_SG_HIGH_DURING_FILL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_OPCG_REG1_SG_HIGH_DURING_FILL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_SG_HIGH_DURING_FILL]

//>> SET_[AXON_OPCG_REG1_LBIST_SKITTER_CTL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_LBIST_SKITTER_CTL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_LBIST_SKITTER_CTL,
           AXON_OPCG_REG1_LBIST_SKITTER_CTL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_OPCG_REG1_LBIST_SKITTER_CTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_LBIST_SKITTER_CTL]

//>> SET_[AXON_OPCG_REG1_LBIST_SKITTER_CTL]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_LBIST_SKITTER_CTL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_LBIST_SKITTER_CTL,
           AXON_OPCG_REG1_LBIST_SKITTER_CTL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_OPCG_REG1_LBIST_SKITTER_CTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_LBIST_SKITTER_CTL]

//>> GET_[AXON_OPCG_REG1_LBIST_SKITTER_CTL]
static inline fapi2::buffer<uint64_t>& GET_AXON_OPCG_REG1_LBIST_SKITTER_CTL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.extractToRight<AXON_OPCG_REG1_LBIST_SKITTER_CTL,
           AXON_OPCG_REG1_LBIST_SKITTER_CTL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_OPCG_REG1_LBIST_SKITTER_CTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_LBIST_SKITTER_CTL]

//>> SET_[AXON_OPCG_REG1_MISR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_MISR_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_MISR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_MISR_MODE]

//>> SET_[AXON_OPCG_REG1_MISR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_MISR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_MISR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_MISR_MODE]

//>> SET_[AXON_OPCG_REG1_MISR_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_MISR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.setBit<AXON_OPCG_REG1_MISR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_MISR_MODE]

//>> CLEAR_[AXON_OPCG_REG1_MISR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_OPCG_REG1_MISR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.clearBit<AXON_OPCG_REG1_MISR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_OPCG_REG1_MISR_MODE]

//>> GET_[AXON_OPCG_REG1_MISR_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_OPCG_REG1_MISR_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.extractToRight<AXON_OPCG_REG1_MISR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_MISR_MODE]

//>> GET_[AXON_OPCG_REG1_MISR_MODE]
static inline bool GET_AXON_OPCG_REG1_MISR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.getBit<AXON_OPCG_REG1_MISR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_OPCG_REG1_MISR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_MISR_MODE]

//>> SET_[AXON_OPCG_REG1_INFINITE_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_INFINITE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_INFINITE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_OPCG_REG1_INFINITE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_INFINITE_MODE]

//>> SET_[AXON_OPCG_REG1_INFINITE_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_INFINITE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_INFINITE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_OPCG_REG1_INFINITE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_INFINITE_MODE]

//>> SET_[AXON_OPCG_REG1_INFINITE_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_INFINITE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.setBit<AXON_OPCG_REG1_INFINITE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_OPCG_REG1_INFINITE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_INFINITE_MODE]

//>> CLEAR_[AXON_OPCG_REG1_INFINITE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_OPCG_REG1_INFINITE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.clearBit<AXON_OPCG_REG1_INFINITE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_OPCG_REG1_INFINITE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_OPCG_REG1_INFINITE_MODE]

//>> GET_[AXON_OPCG_REG1_INFINITE_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_OPCG_REG1_INFINITE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.extractToRight<AXON_OPCG_REG1_INFINITE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_OPCG_REG1_INFINITE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_INFINITE_MODE]

//>> GET_[AXON_OPCG_REG1_INFINITE_MODE]
static inline bool GET_AXON_OPCG_REG1_INFINITE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.getBit<AXON_OPCG_REG1_INFINITE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_OPCG_REG1_INFINITE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_INFINITE_MODE]

//>> SET_[AXON_OPCG_REG1_NSL_FILL_COUNT]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_NSL_FILL_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_NSL_FILL_COUNT,
           AXON_OPCG_REG1_NSL_FILL_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_OPCG_REG1_NSL_FILL_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_NSL_FILL_COUNT]

//>> SET_[AXON_OPCG_REG1_NSL_FILL_COUNT]
static inline fapi2::buffer<uint64_t>& SET_AXON_OPCG_REG1_NSL_FILL_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return o_data.insertFromRight<AXON_OPCG_REG1_NSL_FILL_COUNT,
           AXON_OPCG_REG1_NSL_FILL_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_OPCG_REG1_NSL_FILL_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_OPCG_REG1_NSL_FILL_COUNT]

//>> GET_[AXON_OPCG_REG1_NSL_FILL_COUNT]
static inline fapi2::buffer<uint64_t>& GET_AXON_OPCG_REG1_NSL_FILL_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_OPCG_REG1));
#endif
    return i_data.extractToRight<AXON_OPCG_REG1_NSL_FILL_COUNT,
           AXON_OPCG_REG1_NSL_FILL_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_OPCG_REG1_NSL_FILL_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_OPCG_REG1_NSL_FILL_COUNT]

//>> PREP_[AXON_SCAN_CAPTUREDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_SCAN_CAPTUREDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_SCAN_CAPTUREDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_SCAN_CAPTUREDR]

//>> GET_[AXON_SCAN_CAPTUREDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_SCAN_CAPTUREDR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_SCAN_CAPTUREDR;
#endif
    return fapi2::getScom(i_target, AXON_SCAN_CAPTUREDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_SCAN_CAPTUREDR]

//>> PUT_[AXON_SCAN_CAPTUREDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_SCAN_CAPTUREDR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_SCAN_CAPTUREDR));
#endif
    return fapi2::putScom(i_target, AXON_SCAN_CAPTUREDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_SCAN_CAPTUREDR]


//>> SET_[AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_CAPTUREDR));
#endif
    return o_data.insertFromRight<AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG,
           AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]

//>> SET_[AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]
static inline fapi2::buffer<uint64_t>& SET_AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_CAPTUREDR));
#endif
    return o_data.insertFromRight<AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG,
           AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]

//>> GET_[AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]
static inline fapi2::buffer<uint64_t>& GET_AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_SCAN_CAPTUREDR));
#endif
    return i_data.extractToRight<AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG,
           AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_SCAN_CAPTUREDR_SCAN_CAPTUREDR_REG]

//>> PREP_[HANG_PULSE_6_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_HANG_PULSE_6_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HANG_PULSE_6_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[HANG_PULSE_6_REG]

//>> GET_[HANG_PULSE_6_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_HANG_PULSE_6_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HANG_PULSE_6_REG;
#endif
    return fapi2::getScom(i_target, HANG_PULSE_6_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[HANG_PULSE_6_REG]

//>> PUT_[HANG_PULSE_6_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_HANG_PULSE_6_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return fapi2::putScom(i_target, HANG_PULSE_6_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[HANG_PULSE_6_REG]


//>> SET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_HANG_PULSE_REG_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<HANG_PULSE_6_REG_HANG_PULSE_REG_6,
           HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access HANG_PULSE_6_REG_HANG_PULSE_REG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]

//>> SET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_HANG_PULSE_REG_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<HANG_PULSE_6_REG_HANG_PULSE_REG_6,
           HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access HANG_PULSE_6_REG_HANG_PULSE_REG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]

//>> GET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]
static inline fapi2::buffer<uint64_t>& GET_HANG_PULSE_6_REG_HANG_PULSE_REG_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return i_data.extractToRight<HANG_PULSE_6_REG_HANG_PULSE_REG_6,
           HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access HANG_PULSE_6_REG_HANG_PULSE_REG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]

//>> SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<HANG_PULSE_6_REG_SUPPRESS_HANG_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<HANG_PULSE_6_REG_SUPPRESS_HANG_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.setBit<HANG_PULSE_6_REG_SUPPRESS_HANG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> CLEAR_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& CLEAR_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.clearBit<HANG_PULSE_6_REG_SUPPRESS_HANG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> GET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& GET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return i_data.extractToRight<HANG_PULSE_6_REG_SUPPRESS_HANG_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> GET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline bool GET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return i_data.getBit<HANG_PULSE_6_REG_SUPPRESS_HANG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> PREP_[HOSTATTN_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_HOSTATTN_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HOSTATTN_INTERRUPT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[HOSTATTN_INTERRUPT_REG]

//>> GET_[HOSTATTN_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_HOSTATTN_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HOSTATTN_INTERRUPT_REG;
#endif
    return fapi2::getScom(i_target, HOSTATTN_INTERRUPT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[HOSTATTN_INTERRUPT_REG]

//>> PUT_[HOSTATTN_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_HOSTATTN_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return fapi2::putScom(i_target, HOSTATTN_INTERRUPT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[HOSTATTN_INTERRUPT_REG]


//>> SET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<HOSTATTN_INTERRUPT_REG_TYPE4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> SET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_HOSTATTN_INTERRUPT_REG_TYPE4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<HOSTATTN_INTERRUPT_REG_TYPE4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> SET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return o_data.setBit<HOSTATTN_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> CLEAR_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& CLEAR_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return o_data.clearBit<HOSTATTN_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> GET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& GET_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return i_data.extractToRight<HOSTATTN_INTERRUPT_REG_TYPE4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> GET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline bool GET_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return i_data.getBit<HOSTATTN_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> PREP_[IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ,
           IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ]

//>> SET_[IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ,
           IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ]

//>> GET_[IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ,
           IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_BIT_REGS_FIR_ERROR_INJECT_PL_RX_PL_FIR_ERR_INJ]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> CLEAR_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline bool GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_CM]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL11_PL_OFF_DM]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline bool GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline bool GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline bool GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline bool GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline bool GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline bool GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline bool GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline bool GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_GAIN]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL3_PL_ZERO]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]

//>> PREP_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL,
           IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL,
           IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL,
           IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_SAVE_FW_VAL_SEL]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL,
           P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL,
           P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL]

//>> GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL,
           P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PSAVE_FW_VAL_SEL]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]
static inline bool GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_A]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]

//>> GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]

//>> GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]
static inline bool GET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]
static inline bool GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_PH_FORCE_B]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]

//>> GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]

//>> GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]
static inline bool GET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_PH_FORCE_B]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]
static inline bool GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_A]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]

//>> GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]

//>> GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]
static inline bool GET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]
static inline bool GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_R_PSAVE_VAL_ENA_B]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]

//>> GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]

//>> GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]
static inline bool GET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_PR_PSAVE_VAL_ENA_B]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL,
           P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL,
           P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL]

//>> GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL,
           P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKA_SEL]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL,
           P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL]

//>> SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL,
           P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL]

//>> GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL,
           P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL6_PL_DACTT_DATA_DAC_BANKB_SEL]

//>> PREP_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL,
           IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL,
           IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL,
           IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT6_PL_RX_ERROR_VEC_16_31_RO_SIGNAL]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_DATA]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL16_PL_EDGE]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_GAIN]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK1]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL6_PL_PEAK2]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]

//>> PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A,
           IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A,
           IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A,
           IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B,
           IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B,
           IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B,
           IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B]

//>> PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO,
           IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO,
           IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO,
           IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE2_PL_LOCK_RATIO]

//>> PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL,
           IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL,
           IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL,
           IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_DATA]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_DATA]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_NS_EDGE]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL5_PL_EW_EDGE]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]

//>> PREP_[IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL]


//>> SET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG,
           P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG]

//>> SET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG,
           P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG]

//>> GET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG,
           P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_LINEAR_DELTA_CFG]

//>> SET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG,
           P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG]

//>> SET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG,
           P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG]

//>> GET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG,
           P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_CFG]

//>> SET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK]

//>> SET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK]

//>> SET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK]

//>> GET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK]

//>> GET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK]
static inline bool GET_P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_5_RX_BIT_REGS_CNTL8_PL_BO_TIMER_MASK]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_A_SPEC_MUX_SEL]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTLX9_PL_B_SPEC_MUX_SEL]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
