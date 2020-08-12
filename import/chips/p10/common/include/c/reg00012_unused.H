/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/c/reg00012_unused.H $         */
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

#ifndef __C_REG00012_H_UNUSED__
#define __C_REG00012_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> PREP_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0;
#endif
    return fapi2::getScom(i_target, EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0]

//>> PUT_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return fapi2::putScom(i_target, EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0]


//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_0]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_1]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_2]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_3]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_4]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_5]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_6]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_7]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_8]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_9]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_10]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_11]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_12]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_13]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_14]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT0_15]

//>> PREP_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT]

//>> GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT;
#endif
    return fapi2::getScom(i_target, EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT]

//>> PUT_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return fapi2::putScom(i_target, EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT]


//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT]

//>> GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT]

//>> GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT]
static inline bool GET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_IMA_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.setBit<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT]

//>> CLEAR_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.clearBit<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT]

//>> GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT]

//>> GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT]
static inline bool GET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return i_data.getBit<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PTID_SWAP_SM_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT]

//>> GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT0_SPR_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT]

//>> GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT1_SPR_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT]

//>> GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT2_SPR_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT]

//>> GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMUT3_SPR_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT]

//>> SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return o_data.insertFromRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT]

//>> GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT));
#endif
    return i_data.extractToRight<EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT,
           EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_PMU_SPRCOR_SPR_CORE_HOLD_OUT_PMC_SPR_HOLD_OUT]

//>> PREP_[EC_PC_SPURR_FREQ_SCALE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_SPURR_FREQ_SCALE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SPURR_FREQ_SCALE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_SPURR_FREQ_SCALE]

//>> GET_[EC_PC_SPURR_FREQ_SCALE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_SPURR_FREQ_SCALE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SPURR_FREQ_SCALE;
#endif
    return fapi2::getScom(i_target, EC_PC_SPURR_FREQ_SCALE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_SPURR_FREQ_SCALE]

//>> PUT_[EC_PC_SPURR_FREQ_SCALE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_SPURR_FREQ_SCALE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_SCALE));
#endif
    return fapi2::putScom(i_target, EC_PC_SPURR_FREQ_SCALE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_SPURR_FREQ_SCALE]


//>> SET_[EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_SCALE));
#endif
    return o_data.insertFromRight<EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN]

//>> SET_[EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_SCALE));
#endif
    return o_data.insertFromRight<EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN]

//>> SET_[EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_SCALE));
#endif
    return o_data.setBit<EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN]

//>> CLEAR_[EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_SCALE));
#endif
    return o_data.clearBit<EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN]

//>> GET_[EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_SCALE));
#endif
    return i_data.extractToRight<EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN]

//>> GET_[EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN]
static inline bool GET_EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_SCALE));
#endif
    return i_data.getBit<EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_SPURR_FREQ_SCALE_OVERRIDE_EN]

//>> SET_[EC_PC_SPURR_FREQ_SCALE_FACTOR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_SPURR_FREQ_SCALE_FACTOR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_SCALE));
#endif
    return o_data.insertFromRight<EC_PC_SPURR_FREQ_SCALE_FACTOR,
           EC_PC_SPURR_FREQ_SCALE_FACTOR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_SPURR_FREQ_SCALE_FACTOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_SPURR_FREQ_SCALE_FACTOR]

//>> SET_[EC_PC_SPURR_FREQ_SCALE_FACTOR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_SPURR_FREQ_SCALE_FACTOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_SCALE));
#endif
    return o_data.insertFromRight<EC_PC_SPURR_FREQ_SCALE_FACTOR,
           EC_PC_SPURR_FREQ_SCALE_FACTOR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_SPURR_FREQ_SCALE_FACTOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_SPURR_FREQ_SCALE_FACTOR]

//>> GET_[EC_PC_SPURR_FREQ_SCALE_FACTOR]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_SPURR_FREQ_SCALE_FACTOR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_SPURR_FREQ_SCALE));
#endif
    return i_data.extractToRight<EC_PC_SPURR_FREQ_SCALE_FACTOR,
           EC_PC_SPURR_FREQ_SCALE_FACTOR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_SPURR_FREQ_SCALE_FACTOR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_SPURR_FREQ_SCALE_FACTOR]

//>> PREP_[L2_L2MISC_L2CERRS_WR_EPS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2_L2MISC_L2CERRS_WR_EPS_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2_L2MISC_L2CERRS_WR_EPS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2_L2MISC_L2CERRS_WR_EPS_REG]

//>> GET_[L2_L2MISC_L2CERRS_WR_EPS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2_L2MISC_L2CERRS_WR_EPS_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2_L2MISC_L2CERRS_WR_EPS_REG;
#endif
    return fapi2::getScom(i_target, L2_L2MISC_L2CERRS_WR_EPS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_WR_EPS_REG]

//>> PUT_[L2_L2MISC_L2CERRS_WR_EPS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2_L2MISC_L2CERRS_WR_EPS_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return fapi2::putScom(i_target, L2_L2MISC_L2CERRS_WR_EPS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2_L2MISC_L2CERRS_WR_EPS_REG]


//>> SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE,
           L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE]

//>> SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE,
           L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE]

//>> GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE,
           L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_TIER1_WR_EPS_VALUE]

//>> SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE,
           L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE]

//>> SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE,
           L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE]

//>> GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE,
           L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_TIER2_WR_EPS_VALUE]

//>> SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE,
           L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE]

//>> SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE,
           L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE]

//>> GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE,
           L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_DIVIDER_MODE]

//>> SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL]

//>> SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL]

//>> SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL]

//>> CLEAR_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL]

//>> GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL]

//>> GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL]
static inline bool GET_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_MODE_SEL]

//>> SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN]

//>> SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN]

//>> SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN]

//>> GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN]

//>> GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN]
static inline bool GET_L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_EPS_CNT_USE_L2_DIVIDER_EN]

//>> SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE,
           L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE]

//>> SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE,
           L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE]

//>> GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_WR_EPS_REG));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE,
           L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_WR_EPS_REG_L2_EPS_STEP_MODE]

//>> PREP_[L2TRA_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2TRA_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR0_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2TRA_TR0_CONFIG_1]

//>> GET_[L2TRA_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2TRA_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR0_CONFIG_1;
#endif
    return fapi2::getScom(i_target, L2TRA_TR0_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_1]

//>> PUT_[L2TRA_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2TRA_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_1));
#endif
    return fapi2::putScom(i_target, L2TRA_TR0_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2TRA_TR0_CONFIG_1]


//>> SET_[L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_1));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
