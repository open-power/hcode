/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/c/reg00001_unused.H $         */
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

#ifndef __C_REG00001_H_UNUSED__
#define __C_REG00001_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> PREP_[EC_LS_LSU_HOLD_OUT_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_LS_LSU_HOLD_OUT_REG1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_LS_LSU_HOLD_OUT_REG1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_LS_LSU_HOLD_OUT_REG1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG1;
#endif
    return fapi2::getScom(i_target, EC_LS_LSU_HOLD_OUT_REG1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1]

//>> PUT_[EC_LS_LSU_HOLD_OUT_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_LS_LSU_HOLD_OUT_REG1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return fapi2::putScom(i_target, EC_LS_LSU_HOLD_OUT_REG1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_LS_LSU_HOLD_OUT_REG1]


//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_0]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_0]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_0]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_0]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_0]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_0]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_0]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_1]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_1]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_1]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_1]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_1]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_1]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_2]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_2]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_2]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_2]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_2]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_2]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_3]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_3]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_3]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_3]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_3]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_3]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_3]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_4]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_4]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_4]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_4]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_4]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_4]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_4]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_4]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_5]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_5]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_5]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_5]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_5]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_5]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_5]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_5]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_6]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_6]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_6]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_6]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_6]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_6]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_6]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_6]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_7]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_7]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_7]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_7]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_7]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_7]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_7]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_7]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_8]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_8]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_8]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_8]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_8]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_8]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_8]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_8]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_8]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_8,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_8]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_8]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_8(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_8]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_9]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_9]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_9]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_9]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_9]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_9]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_9]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_9]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_9]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_9]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_9]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_9]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_10]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_10]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_10]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_10]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_10]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_10]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_10]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_10]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_10]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_10]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_10]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_10]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_11]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_11]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_11]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_11]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_11]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_11]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_11]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_11]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_11]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_11]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_11]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_11]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_12]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_12]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_12]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_12]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_12]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_12]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_12]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_12]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_12]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_12]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_12]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_12]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_13]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_13]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_13]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_13]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_13]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_13]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_13]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_13]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_13]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_13]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_13]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_13]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_14]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_14]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_14]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_14]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_14]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_14]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_14]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_14]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_14]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_14]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_14]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_14]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_15]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_15]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_15]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG1_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_15]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG1_15]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG1_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG1_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG1_15]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_15]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG1_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG1_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG1_15]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_15]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG1_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG1_15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_15]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG1_15]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG1_15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG1));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG1_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG1_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG1_15]

//>> PREP_[EC_PC_COMMON_SPR_SPATTN_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_COMMON_SPR_SPATTN_MASK(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_SPATTN_MASK;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_COMMON_SPR_SPATTN_MASK]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_COMMON_SPR_SPATTN_MASK(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_SPATTN_MASK;
#endif
    return fapi2::getScom(i_target, EC_PC_COMMON_SPR_SPATTN_MASK, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_MASK]

//>> PUT_[EC_PC_COMMON_SPR_SPATTN_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_COMMON_SPR_SPATTN_MASK(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return fapi2::putScom(i_target, EC_PC_COMMON_SPR_SPATTN_MASK, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_COMMON_SPR_SPATTN_MASK]


//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_MASK_0_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_MASK_1_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_MASK_2_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_MASK_3_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_MASK_4_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_MASK_5_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_MASK_6_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK]

//>> SET_[EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK]

//>> GET_[EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_SPATTN_MASK));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK,
           EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_SPATTN_MASK_7_SPATTN_MASK]

//>> PREP_[EC_PC_SCR3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_SCR3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SCR3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_SCR3]

//>> GET_[EC_PC_SCR3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_SCR3(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SCR3;
#endif
    return fapi2::getScom(i_target, EC_PC_SCR3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_SCR3]

//>> PUT_[EC_PC_SCR3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_SCR3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_SCR3));
#endif
    return fapi2::putScom(i_target, EC_PC_SCR3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_SCR3]


//>> PREP_[EC_PC_TRACE1_TR_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE1_TR_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE1_TR_TR0_CONFIG]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE1_TR_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_CONFIG;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE1_TR_TR0_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG]

//>> PUT_[EC_PC_TRACE1_TR_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE1_TR_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE1_TR_TR0_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE1_TR_TR0_CONFIG]


//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE,
           EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE,
           EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE,
           EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_BANK_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL,
           EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL,
           EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL,
           EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline bool GET_EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> PREP_[EC_PC_TRACE2_TR_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE2_TR_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE2_TR_TR0_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE2_TR_TR0_CONFIG_1]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE2_TR_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE2_TR_TR0_CONFIG_1;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE2_TR_TR0_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_1]

//>> PUT_[EC_PC_TRACE2_TR_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE2_TR_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_1));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE2_TR_TR0_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE2_TR_TR0_CONFIG_1]


//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG_1));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_SD_SDP_SDCR_UNIT_HOLD_OUT0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_SD_SDP_SDCR_UNIT_HOLD_OUT0;
#endif
    return fapi2::getScom(i_target, EC_SD_SDP_SDCR_UNIT_HOLD_OUT0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0]

//>> PUT_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return fapi2::putScom(i_target, EC_SD_SDP_SDCR_UNIT_HOLD_OUT0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0]


//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_PC_ERR_INJ_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T0_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T1_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T2_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_T3_HEAD_TAIL_XSTOP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCC_BLOCK_TROUBLE_ERROR]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP0_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP1_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP2_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDCCC_COMP3_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_WAT_INJECT_INT_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_DISP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_ISSMUX_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_BRDCAST_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDQ_LSU_WKUP_HOLD_OUT]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0]

//>> SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& SET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0]

//>> CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0]
static inline fapi2::buffer<uint64_t>& GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0]

//>> GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0]
static inline bool GET_EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_SD_SDP_SDCR_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_SD_SDP_SDCR_UNIT_HOLD_OUT0_SDXM_ERR_HOLD_OUT_0]

//>> PREP_[L2TRA_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2TRA_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR1_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2TRA_TR1_CONFIG]

//>> GET_[L2TRA_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2TRA_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR1_CONFIG;
#endif
    return fapi2::getScom(i_target, L2TRA_TR1_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG]

//>> PUT_[L2TRA_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2TRA_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return fapi2::putScom(i_target, L2TRA_TR1_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2TRA_TR1_CONFIG]


//>> SET_[L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.setBit<L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> CLEAR_[L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.clearBit<L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline bool GET_L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.getBit<L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.setBit<L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> CLEAR_[L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.clearBit<L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline bool GET_L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.getBit<L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE,
           L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE,
           L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> GET_[L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE,
           L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[L2TRA_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_BANK_MODE]

//>> SET_[L2TRA_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_BANK_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_BANK_MODE]

//>> SET_[L2TRA_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.setBit<L2TRA_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_BANK_MODE]

//>> CLEAR_[L2TRA_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.clearBit<L2TRA_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR1_CONFIG_BANK_MODE]

//>> GET_[L2TRA_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_BANK_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_BANK_MODE]

//>> GET_[L2TRA_TR1_CONFIG_BANK_MODE]
static inline bool GET_L2TRA_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.getBit<L2TRA_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_BANK_MODE]

//>> SET_[L2TRA_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[L2TRA_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_ENH_TRACE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[L2TRA_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.setBit<L2TRA_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_ENH_TRACE_MODE]

//>> CLEAR_[L2TRA_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.clearBit<L2TRA_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR1_CONFIG_ENH_TRACE_MODE]

//>> GET_[L2TRA_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_ENH_TRACE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_ENH_TRACE_MODE]

//>> GET_[L2TRA_TR1_CONFIG_ENH_TRACE_MODE]
static inline bool GET_L2TRA_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.getBit<L2TRA_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> GET_[L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL,
           L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL,
           L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> GET_[L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL,
           L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.setBit<L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> CLEAR_[L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.clearBit<L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline bool GET_L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.getBit<L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L2TRA_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L2TRA_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_TRACE_RUN_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L2TRA_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.setBit<L2TRA_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_TRACE_RUN_STATUS]

//>> CLEAR_[L2TRA_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.clearBit<L2TRA_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR1_CONFIG_TRACE_RUN_STATUS]

//>> GET_[L2TRA_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_TRACE_RUN_STATUS]

//>> GET_[L2TRA_TR1_CONFIG_TRACE_RUN_STATUS]
static inline bool GET_L2TRA_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.getBit<L2TRA_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L2TRA_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L2TRA_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_TRACE_RUN_STICKY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L2TRA_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.setBit<L2TRA_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_TRACE_RUN_STICKY]

//>> CLEAR_[L2TRA_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.clearBit<L2TRA_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR1_CONFIG_TRACE_RUN_STICKY]

//>> GET_[L2TRA_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_TRACE_RUN_STICKY]

//>> GET_[L2TRA_TR1_CONFIG_TRACE_RUN_STICKY]
static inline bool GET_L2TRA_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.getBit<L2TRA_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.setBit<L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> CLEAR_[L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.clearBit<L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline bool GET_L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.getBit<L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> SET_[L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> SET_[L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.setBit<L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> CLEAR_[L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.clearBit<L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> GET_[L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> GET_[L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline bool GET_L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.getBit<L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> SET_[L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.setBit<L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> CLEAR_[L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.clearBit<L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline bool GET_L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.getBit<L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> SET_[L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> SET_[L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.setBit<L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> CLEAR_[L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& CLEAR_L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return o_data.clearBit<L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> GET_[L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> GET_[L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline bool GET_L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG));
#endif
    return i_data.getBit<L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> PREP_[L2TRA_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2TRA_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR1_CONFIG_5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2TRA_TR1_CONFIG_5]

//>> GET_[L2TRA_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2TRA_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR1_CONFIG_5;
#endif
    return fapi2::getScom(i_target, L2TRA_TR1_CONFIG_5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_5]

//>> PUT_[L2TRA_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2TRA_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_5));
#endif
    return fapi2::putScom(i_target, L2TRA_TR1_CONFIG_5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2TRA_TR1_CONFIG_5]


//>> SET_[L2TRA_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_5_C,
           L2TRA_TR1_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_5_C]

//>> SET_[L2TRA_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_5_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_5_C,
           L2TRA_TR1_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_5_C]

//>> GET_[L2TRA_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_5));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_5_C,
           L2TRA_TR1_CONFIG_5_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_5_C]

//>> SET_[L2TRA_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_5_D,
           L2TRA_TR1_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_5_D]

//>> SET_[L2TRA_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_5_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_5_D,
           L2TRA_TR1_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_5_D]

//>> GET_[L2TRA_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_5));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_5_D,
           L2TRA_TR1_CONFIG_5_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_5_D]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
