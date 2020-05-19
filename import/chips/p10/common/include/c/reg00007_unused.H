/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/c/reg00007_unused.H $         */
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

#ifndef __C_REG00007_H_UNUSED__
#define __C_REG00007_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> PREP_[EC_LS_LSU_HOLD_OUT_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_LS_LSU_HOLD_OUT_REG0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_LS_LSU_HOLD_OUT_REG0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_LS_LSU_HOLD_OUT_REG0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG0;
#endif
    return fapi2::getScom(i_target, EC_LS_LSU_HOLD_OUT_REG0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0]

//>> PUT_[EC_LS_LSU_HOLD_OUT_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_LS_LSU_HOLD_OUT_REG0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return fapi2::putScom(i_target, EC_LS_LSU_HOLD_OUT_REG0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_LS_LSU_HOLD_OUT_REG0]


//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_0]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_0]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_0]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_0]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_1]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_1]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_1]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_2]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_2]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_2]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_3]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_3]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_3]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_3]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_3]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_4]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_4]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_4]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_4]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_4]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_4]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_5]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_5]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_5]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_5]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_5]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_5]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_6]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_6]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_6]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_6]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_6]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_6]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_7]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_7]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_7]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_7]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_7]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_7]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_8]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_8]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_8]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_8]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_8]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_8]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_8]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_8]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_8]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_8,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_8]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_8]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_8(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_8]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_9]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_9]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_9]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_9]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_9]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_9]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_9]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_9]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_9]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_9]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_9]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_9]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_10]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_10]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_10]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_10]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_10]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_10]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_10]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_10]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_10]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_10]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_10]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_10]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_11]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_11]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_11]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_11]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_11]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_11]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_11]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_11]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_11]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_11]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_11]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_11]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_12]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_12]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_12]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_12]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_12]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_12]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_12]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_12]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_12]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_12]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_12]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_12]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_13]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_13]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_13]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_13]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_13]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_13]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_13]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_13]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_13]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_13]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_13]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_13]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_14]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_14]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_14]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_14]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_14]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_14]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_14]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_14]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_14]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_14]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_14]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_14]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_15]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_15]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_15]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG0_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_15]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG0_15]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG0_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG0_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG0_15]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_15]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG0_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG0_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG0_15]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_15]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG0_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG0_15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_15]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG0_15]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG0_15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG0));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG0_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG0_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG0_15]

//>> PREP_[EC_PC_SCR2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_SCR2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SCR2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_SCR2]

//>> GET_[EC_PC_SCR2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_SCR2(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SCR2;
#endif
    return fapi2::getScom(i_target, EC_PC_SCR2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_SCR2]

//>> PUT_[EC_PC_SCR2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_SCR2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_SCR2));
#endif
    return fapi2::putScom(i_target, EC_PC_SCR2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_SCR2]


//>> PREP_[EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG]

//>> GET_[EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG]

//>> PUT_[EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG]


//>> SET_[EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> PREP_[EC_PC_TRACE2_TR_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE2_TR_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE2_TR_TR0_CONFIG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE2_TR_TR0_CONFIG_0]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE2_TR_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE2_TR_TR0_CONFIG_0;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE2_TR_TR0_CONFIG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_0]

//>> PUT_[EC_PC_TRACE2_TR_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE2_TR_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_0));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE2_TR_TR0_CONFIG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE2_TR_TR0_CONFIG_0]


//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_0));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_0));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_0));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> PREP_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_SD_SDP_SDCR_UNIT_HOLD_OUT1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_SD_SDP_SDCR_UNIT_HOLD_OUT1;
#endif
    return fapi2::getScom(i_target, EC_SD_SDP_SDCR_UNIT_HOLD_OUT1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1]

//>> PUT_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return fapi2::putScom(i_target, EC_SD_SDP_SDCR_UNIT_HOLD_OUT1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1]


//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT1));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4]

//>> PREP_[L2TRA_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2TRA_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR1_TRACE_LO_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2TRA_TR1_TRACE_LO_DATA_REG]

//>> GET_[L2TRA_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2TRA_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR1_TRACE_LO_DATA_REG;
#endif
    return fapi2::getScom(i_target, L2TRA_TR1_TRACE_LO_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2TRA_TR1_TRACE_LO_DATA_REG]

//>> PUT_[L2TRA_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2TRA_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return fapi2::putScom(i_target, L2TRA_TR1_TRACE_LO_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2TRA_TR1_TRACE_LO_DATA_REG]


//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA,
           L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA,
           L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> GET_[L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA,
           L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS,
           L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS,
           L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> GET_[L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS,
           L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> GET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> CLEAR_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline bool GET_L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> CLEAR_[L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline bool GET_L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> CLEAR_[L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline bool GET_L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> SET_[L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> GET_[L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> PREP_[L2TRA_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2TRA_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR1_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2TRA_TR1_CONFIG_4]

//>> GET_[L2TRA_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2TRA_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR1_CONFIG_4;
#endif
    return fapi2::getScom(i_target, L2TRA_TR1_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_4]

//>> PUT_[L2TRA_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2TRA_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_4));
#endif
    return fapi2::putScom(i_target, L2TRA_TR1_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2TRA_TR1_CONFIG_4]


//>> SET_[L2TRA_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_4_A,
           L2TRA_TR1_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_4_A]

//>> SET_[L2TRA_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_4_A,
           L2TRA_TR1_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_4_A]

//>> GET_[L2TRA_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_4));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_4_A,
           L2TRA_TR1_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_4_A]

//>> SET_[L2TRA_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_4_B,
           L2TRA_TR1_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_4_B]

//>> SET_[L2TRA_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_4_B,
           L2TRA_TR1_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_4_B]

//>> GET_[L2TRA_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_4));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_4_B,
           L2TRA_TR1_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_4_B]

//>> PREP_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCMISC_NCSCOMS_NCU_STATUS_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_NCU_STATUS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_NCU_STATUS_REG;
#endif
    return fapi2::getScom(i_target, NC_NCMISC_NCSCOMS_NCU_STATUS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG]

//>> PUT_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCMISC_NCSCOMS_NCU_STATUS_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return fapi2::putScom(i_target, NC_NCMISC_NCSCOMS_NCU_STATUS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG]


//>> SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_STATUS_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
