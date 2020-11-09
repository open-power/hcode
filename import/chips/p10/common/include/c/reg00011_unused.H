/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/c/reg00011_unused.H $         */
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

#ifndef __C_REG00011_H_UNUSED__
#define __C_REG00011_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> PREP_[EC_LS_LSU_HOLD_OUT_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_LS_LSU_HOLD_OUT_REG2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_LS_LSU_HOLD_OUT_REG2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_LS_LSU_HOLD_OUT_REG2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG2;
#endif
    return fapi2::getScom(i_target, EC_LS_LSU_HOLD_OUT_REG2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2]

//>> PUT_[EC_LS_LSU_HOLD_OUT_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_LS_LSU_HOLD_OUT_REG2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return fapi2::putScom(i_target, EC_LS_LSU_HOLD_OUT_REG2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_LS_LSU_HOLD_OUT_REG2]


//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_0_SETP_PERR_HOLD_OUT_SET7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG2));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG2_1_SETP_PERR_HOLD_OUT_SET7]

//>> PREP_[EC_PC_COMMON_SPR_SPATTN_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_COMMON_SPR_SPATTN_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_SPATTN_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_COMMON_SPR_SPATTN_RW]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_COMMON_SPR_SPATTN_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_SPATTN_RW;
#endif
    return fapi2::getScom(i_target, EC_PC_COMMON_SPR_SPATTN_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_RW]

//>> PUT_[EC_PC_COMMON_SPR_SPATTN_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_COMMON_SPR_SPATTN_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return fapi2::putScom(i_target, EC_PC_COMMON_SPR_SPATTN_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_COMMON_SPR_SPATTN_RW]

//>> PREP_[EC_PC_COMMON_SPR_SPATTN_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_COMMON_SPR_SPATTN_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_SPATTN_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_COMMON_SPR_SPATTN_WO_AND]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_COMMON_SPR_SPATTN_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_SPATTN_WO_AND;
#endif
    return fapi2::getScom(i_target, EC_PC_COMMON_SPR_SPATTN_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_WO_AND]

//>> PUT_[EC_PC_COMMON_SPR_SPATTN_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_COMMON_SPR_SPATTN_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return fapi2::putScom(i_target, EC_PC_COMMON_SPR_SPATTN_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_COMMON_SPR_SPATTN_WO_AND]

//>> PREP_[EC_PC_COMMON_SPR_SPATTN_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_COMMON_SPR_SPATTN_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_SPATTN_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_COMMON_SPR_SPATTN_WO_OR]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_COMMON_SPR_SPATTN_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_SPATTN_WO_OR;
#endif
    return fapi2::getScom(i_target, EC_PC_COMMON_SPR_SPATTN_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_WO_OR]

//>> PUT_[EC_PC_COMMON_SPR_SPATTN_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_COMMON_SPR_SPATTN_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return fapi2::putScom(i_target, EC_PC_COMMON_SPR_SPATTN_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_COMMON_SPR_SPATTN_WO_OR]


//>> SET_[EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_0_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_0_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_0_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_1_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_1_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_1_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_2_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_2_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_2_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_3_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_3_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_3_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_4_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_4_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_4_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_5_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_5_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_5_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_6_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_6_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_6_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_7_SPR_INSTR_STOP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_7_ATTN_COMPLETE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CHECKSTOP_RECOVERY_HANDSHAKE]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP]

//>> CLEAR_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP]
static inline bool GET_EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_RW, EC_PC_COMMON_SPR_SPATTN_WO_AND, EC_PC_COMMON_SPR_SPATTN_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_7_CORE_CODE_TO_SP]

//>> PREP_[EC_PC_PMU_SPRCOR_SCOMC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_PMU_SPRCOR_SCOMC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_SCOMC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_PMU_SPRCOR_SCOMC]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_PMU_SPRCOR_SCOMC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_SCOMC;
#endif
    return fapi2::getScom(i_target, EC_PC_PMU_SPRCOR_SCOMC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC]

//>> PUT_[EC_PC_PMU_SPRCOR_SCOMC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_PMU_SPRCOR_SCOMC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return fapi2::putScom(i_target, EC_PC_PMU_SPRCOR_SCOMC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_PMU_SPRCOR_SCOMC]


//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_PMC1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC1]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_PMC1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC1]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_PMC1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC1]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_PMC1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_PMC1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_PMC1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_PMC1]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC1]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_PMC1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_PMC1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC1]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC1]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_PMC1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_PMC1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC1]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC2]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_PMC2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC2]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC2]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_PMC2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC2]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC2]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_PMC2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC2]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_PMC2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_PMC2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_PMC2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_PMC2]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC2]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_PMC2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_PMC2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC2]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC2]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_PMC2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_PMC2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC2]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC3]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_PMC3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC3]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC3]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_PMC3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC3]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC3]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_PMC3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC3]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_PMC3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_PMC3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_PMC3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_PMC3]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC3]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_PMC3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_PMC3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC3]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC3]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_PMC3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_PMC3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC3]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC4]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_PMC4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC4]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC4]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_PMC4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC4]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC4]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_PMC4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC4]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_PMC4]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_PMC4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_PMC4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_PMC4]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC4]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_PMC4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_PMC4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC4]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC4]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_PMC4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_PMC4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC4]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC5]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_PMC5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC5]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC5]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_PMC5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC5]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC5]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_PMC5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC5]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_PMC5]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_PMC5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_PMC5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_PMC5]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC5]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_PMC5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_PMC5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC5]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC5]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_PMC5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_PMC5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC5]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC6]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_PMC6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC6]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC6]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_PMC6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC6]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC6]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_PMC6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_PMC6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_PMC6]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_PMC6]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_PMC6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_PMC6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_PMC6]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC6]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_PMC6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_PMC6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC6]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC6]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_PMC6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_PMC6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_PMC6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_PMC6]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRC]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCRC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_MMCRC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCRC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRC]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRC]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCRC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_MMCRC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCRC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRC]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRC]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCRC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_MMCRC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCRC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRC]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_MMCRC]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_MMCRC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_MMCRC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCRC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_MMCRC]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRC]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_MMCRC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_MMCRC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCRC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRC]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRC]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_MMCRC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_MMCRC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCRC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRC]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR0]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCR0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_MMCR0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR0]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR0]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCR0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_MMCR0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR0]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR0]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCR0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_MMCR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR0]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_MMCR0]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_MMCR0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_MMCR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_MMCR0]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR0]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_MMCR0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_MMCR0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR0]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR0]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_MMCR0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_MMCR0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR0]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCR1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_MMCR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR1]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCR1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_MMCR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR1]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCR1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_MMCR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR1]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_MMCR1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_MMCR1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_MMCR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_MMCR1]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR1]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_MMCR1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_MMCR1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR1]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR1]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_MMCR1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_MMCR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR1]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR2]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCR2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_MMCR2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR2]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR2]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCR2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_MMCR2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR2]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR2]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCR2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_MMCR2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR2]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_MMCR2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_MMCR2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_MMCR2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_MMCR2]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR2]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_MMCR2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_MMCR2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR2]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR2]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_MMCR2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_MMCR2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR2]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR3]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCR3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_MMCR3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR3]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR3]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCR3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_MMCR3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR3]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR3]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCR3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_MMCR3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR3]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_MMCR3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_MMCR3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_MMCR3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_MMCR3]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR3]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_MMCR3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_MMCR3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR3]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR3]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_MMCR3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_MMCR3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCR3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCR3]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRA]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCRA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_MMCRA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCRA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRA]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRA]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCRA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_MMCRA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCRA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRA]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRA]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_MMCRA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_MMCRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCRA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRA]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_MMCRA]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_MMCRA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_MMCRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCRA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_MMCRA]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRA]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_MMCRA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_MMCRA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCRA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRA]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRA]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_MMCRA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_MMCRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_MMCRA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_MMCRA]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_SIER]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_SIER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_SIER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_SIER]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_SIER]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_SIER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_SIER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_SIER]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_SIER]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_SIER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_SIER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_SIER]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_SIER]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_SIER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_SIER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_SIER]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_SIER]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_SIER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_SIER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_SIER]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_SIER]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_SIER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_SIER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_SIER]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_SIERA]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_SIERA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_SIERA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIERA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_SIERA]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_SIERA]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_SIERA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_SIERA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIERA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_SIERA]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_SIERA]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_SIERA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_SIERA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIERA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_SIERA]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_SIERA]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_SIERA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_SIERA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIERA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_SIERA]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_SIERA]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_SIERA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_SIERA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIERA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_SIERA]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_SIERA]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_SIERA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_SIERA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIERA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_SIERA]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_SIERB]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_SIERB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_SIERB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIERB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_SIERB]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_SIERB]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_SIERB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_SIERB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIERB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_SIERB]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_SIERB]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_SIERB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SCOMC_SIERB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIERB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_SIERB]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_SIERB]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SCOMC_SIERB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SCOMC_SIERB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIERB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SCOMC_SIERB]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_SIERB]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_SIERB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_SIERB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIERB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_SIERB]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_SIERB]
static inline bool GET_EC_PC_PMU_SPRCOR_SCOMC_SIERB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SCOMC_SIERB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_SIERB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_SIERB]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID,
           EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID]

//>> SET_[EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID,
           EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID]

//>> GET_[EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SCOMC));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID,
           EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SCOMC_THREAD_ID]

//>> PREP_[EC_PC_SPURR_FREQ_DETECT_CYC_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_SPURR_FREQ_DETECT_CYC_CNT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SPURR_FREQ_DETECT_CYC_CNT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_SPURR_FREQ_DETECT_CYC_CNT]

//>> GET_[EC_PC_SPURR_FREQ_DETECT_CYC_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_SPURR_FREQ_DETECT_CYC_CNT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SPURR_FREQ_DETECT_CYC_CNT;
#endif
    return fapi2::getScom(i_target, EC_PC_SPURR_FREQ_DETECT_CYC_CNT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_SPURR_FREQ_DETECT_CYC_CNT]

//>> PUT_[EC_PC_SPURR_FREQ_DETECT_CYC_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_SPURR_FREQ_DETECT_CYC_CNT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_DETECT_CYC_CNT));
#endif
    return fapi2::putScom(i_target, EC_PC_SPURR_FREQ_DETECT_CYC_CNT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_SPURR_FREQ_DETECT_CYC_CNT]


//>> SET_[EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_DETECT_CYC_CNT));
#endif
    return o_data.insertFromRight<EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT,
           EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT]

//>> SET_[EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_DETECT_CYC_CNT));
#endif
    return o_data.insertFromRight<EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT,
           EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT]

//>> GET_[EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_DETECT_CYC_CNT));
#endif
    return i_data.extractToRight<EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT,
           EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_SPURR_FREQ_DETECT_CYC_CNT_CYCLE_COUNT]

//>> PREP_[EC_PC_TRACE1_TR_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE1_TR_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE1_TR_TR0_CONFIG_9]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE1_TR_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_CONFIG_9;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE1_TR_TR0_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9]

//>> PUT_[EC_PC_TRACE1_TR_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE1_TR_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE1_TR_TR0_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE1_TR_TR0_CONFIG_9]


//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE,
           EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_9));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_9_SPARE_LT]

//>> PREP_[EC_PC_TRACE2_TR_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE2_TR_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE2_TR_TR0_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE2_TR_TR0_CONFIG_2]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE2_TR_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE2_TR_TR0_CONFIG_2;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE2_TR_TR0_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_2]

//>> PUT_[EC_PC_TRACE2_TR_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE2_TR_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_2));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE2_TR_TR0_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE2_TR_TR0_CONFIG_2]


//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_2_A,
           EC_PC_TRACE2_TR_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_2_A]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_2_A,
           EC_PC_TRACE2_TR_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_2_A]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_2_A,
           EC_PC_TRACE2_TR_TR0_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_2_A]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_2_B,
           EC_PC_TRACE2_TR_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_2_B]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_2_B,
           EC_PC_TRACE2_TR_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_2_B]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_2_B,
           EC_PC_TRACE2_TR_TR0_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_2_B]

//>> PREP_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_SD_SDP_SDCR_UNIT_HOLD_OUT3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_SD_SDP_SDCR_UNIT_HOLD_OUT3;
#endif
    return fapi2::getScom(i_target, EC_SD_SDP_SDCR_UNIT_HOLD_OUT3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3]

//>> PUT_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return fapi2::putScom(i_target, EC_SD_SDP_SDCR_UNIT_HOLD_OUT3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3]


//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDP_WAT_T3_HOLD_OUT]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_P_WAT_T3_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_1]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_2]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_3]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_RCOV_HOLD_OUT_4]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_RCOV_HOLD_OUT_4]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_1]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_2]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_3]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_4]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_4]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDE_XSTOP_HOLD_OUT_5]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_XSTOP_HOLD_OUT_5]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_SDD_STFTAG_HANG_HOLD_OUT]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_D_STFTAG_HANG_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED13]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T0_MCHK_AND_ME_EQ_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED14]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T1_MCHK_AND_ME_EQ_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_UNUSED15]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0]

//>> SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& SET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0]

//>> CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0]
static inline fapi2::buffer<uint64_t>& GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0]

//>> GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0]
static inline bool GET_P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_EC_SD_SDP_SDCR_UNIT_HOLD_OUT3_E_T2_MCHK_AND_ME_EQ_0]

//>> PREP_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG]

//>> GET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG;
#endif
    return fapi2::getScom(i_target, L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG]

//>> PUT_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return fapi2::putScom(i_target, L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG]


//>> SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG]

//>> SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG]

//>> SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG]

//>> CLEAR_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG]

//>> GET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG]

//>> GET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG]
static inline bool GET_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_TRIG]

//>> SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE]

//>> SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE]

//>> SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE]

//>> CLEAR_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE]

//>> GET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE]

//>> GET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE]
static inline bool GET_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_DONE]

//>> SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE,
           L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE]

//>> SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE,
           L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE]

//>> GET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE,
           L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_LINEDEL_TRIG_REG_SPARE]

//>> PREP_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_RD_EPSILON_CFG_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG]

//>> GET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3_MISC_L3CERRS_RD_EPSILON_CFG_REG;
#endif
    return fapi2::getScom(i_target, L3_MISC_L3CERRS_RD_EPSILON_CFG_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG]

//>> PUT_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return fapi2::putScom(i_target, L3_MISC_L3CERRS_RD_EPSILON_CFG_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG]


//>> SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL,
           L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL]

//>> SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL,
           L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL]

//>> GET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL,
           L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER0_EPS_VAL]

//>> SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL,
           L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL]

//>> SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL,
           L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL]

//>> GET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL,
           L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER1_EPS_VAL]

//>> SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL,
           L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL]

//>> SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL,
           L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL]

//>> GET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL,
           L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_WT4CR_RD_TIER2_EPS_VAL]

//>> SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG]

//>> SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return o_data.insertFromRight<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG]

//>> SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG]
static inline fapi2::buffer<uint64_t>& SET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return o_data.setBit<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG]

//>> CLEAR_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG]
static inline fapi2::buffer<uint64_t>& CLEAR_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return o_data.clearBit<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG]

//>> GET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG]
static inline fapi2::buffer<uint64_t>& GET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return i_data.extractToRight<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG]

//>> GET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG]
static inline bool GET_L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_RD_EPSILON_CFG_REG));
#endif
    return i_data.getBit<L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3_MISC_L3CERRS_RD_EPSILON_CFG_REG_RD_EPS_MODE_SEL_CFG]

//>> PREP_[NC_NCCHTM_NCCHTSC_HTM_MEM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCCHTM_NCCHTSC_HTM_MEM(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCCHTM_NCCHTSC_HTM_MEM;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCCHTM_NCCHTSC_HTM_MEM]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_MEM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCCHTM_NCCHTSC_HTM_MEM(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCCHTM_NCCHTSC_HTM_MEM;
#endif
    return fapi2::getScom(i_target, NC_NCCHTM_NCCHTSC_HTM_MEM, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_MEM]

//>> PUT_[NC_NCCHTM_NCCHTSC_HTM_MEM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCCHTM_NCCHTSC_HTM_MEM(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return fapi2::putScom(i_target, NC_NCCHTM_NCCHTSC_HTM_MEM, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCCHTM_NCCHTSC_HTM_MEM]


//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_ALLOC]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE,
           NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE,
           NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE,
           NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SCOPE]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_PRIORITY]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.setBit<NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL]

//>> CLEAR_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.clearBit<NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL]
static inline bool GET_NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return i_data.getBit<NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_SMALL]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE,
           NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE,
           NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE,
           NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SPARE]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_BASE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_BASE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_MEM_BASE,
           NC_NCCHTM_NCCHTSC_HTM_MEM_BASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_BASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_BASE]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_BASE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_BASE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_MEM_BASE,
           NC_NCCHTM_NCCHTSC_HTM_MEM_BASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_BASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_BASE]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_BASE]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_MEM_BASE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_MEM_BASE,
           NC_NCCHTM_NCCHTSC_HTM_MEM_BASE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_BASE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_BASE]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE,
           NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE]

//>> SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return o_data.insertFromRight<NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE,
           NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE]
static inline fapi2::buffer<uint64_t>& GET_NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_MEM));
#endif
    return i_data.extractToRight<NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE,
           NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_MEM_SIZE]

//>> PREP_[NC_NCCHTM_NCCHTSC_MEM_OP_CTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCCHTM_NCCHTSC_MEM_OP_CTR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCCHTM_NCCHTSC_MEM_OP_CTR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCCHTM_NCCHTSC_MEM_OP_CTR]

//>> GET_[NC_NCCHTM_NCCHTSC_MEM_OP_CTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCCHTM_NCCHTSC_MEM_OP_CTR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCCHTM_NCCHTSC_MEM_OP_CTR;
#endif
    return fapi2::getScom(i_target, NC_NCCHTM_NCCHTSC_MEM_OP_CTR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_MEM_OP_CTR]

//>> PUT_[NC_NCCHTM_NCCHTSC_MEM_OP_CTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCCHTM_NCCHTSC_MEM_OP_CTR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_MEM_OP_CTR));
#endif
    return fapi2::putScom(i_target, NC_NCCHTM_NCCHTSC_MEM_OP_CTR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCCHTM_NCCHTSC_MEM_OP_CTR]


//>> PREP_[RING_FENCE_MASK_LATCH_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RING_FENCE_MASK_LATCH_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RING_FENCE_MASK_LATCH_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RING_FENCE_MASK_LATCH_REG]

//>> GET_[RING_FENCE_MASK_LATCH_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RING_FENCE_MASK_LATCH_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RING_FENCE_MASK_LATCH_REG;
#endif
    return fapi2::getScom(i_target, RING_FENCE_MASK_LATCH_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RING_FENCE_MASK_LATCH_REG]

//>> PUT_[RING_FENCE_MASK_LATCH_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RING_FENCE_MASK_LATCH_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RING_FENCE_MASK_LATCH_REG));
#endif
    return fapi2::putScom(i_target, RING_FENCE_MASK_LATCH_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RING_FENCE_MASK_LATCH_REG]


//>> SET_[RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& SET_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RING_FENCE_MASK_LATCH_REG));
#endif
    return o_data.insertFromRight<RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK,
           RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK]

//>> SET_[RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& SET_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RING_FENCE_MASK_LATCH_REG));
#endif
    return o_data.insertFromRight<RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK,
           RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK]

//>> GET_[RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& GET_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RING_FENCE_MASK_LATCH_REG));
#endif
    return i_data.extractToRight<RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK,
           RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
