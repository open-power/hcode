/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/c/reg00000_unused.H $         */
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

#ifndef __C_REG00000_H_UNUSED__
#define __C_REG00000_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> PREP_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2;
#endif
    return fapi2::getScom(i_target, EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2]

//>> PUT_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return fapi2::putScom(i_target, EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2]


//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_32]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_33]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_34]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_35]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_36]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_37]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_38]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_39]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_40]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_41]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_42]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_43]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_44]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_45]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_46]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT2_47]

//>> PREP_[EC_PC_COMMON_SPR_HMEER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_COMMON_SPR_HMEER(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_HMEER;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_COMMON_SPR_HMEER]

//>> GET_[EC_PC_COMMON_SPR_HMEER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_COMMON_SPR_HMEER(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_HMEER;
#endif
    return fapi2::getScom(i_target, EC_PC_COMMON_SPR_HMEER, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_HMEER]

//>> PUT_[EC_PC_COMMON_SPR_HMEER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_COMMON_SPR_HMEER(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_HMEER));
#endif
    return fapi2::putScom(i_target, EC_PC_COMMON_SPR_HMEER, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_COMMON_SPR_HMEER]


//>> SET_[EC_PC_COMMON_SPR_HMEER_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_HMEER_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_HMEER));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_HMEER_ENABLE,
           EC_PC_COMMON_SPR_HMEER_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_HMEER_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_HMEER_ENABLE]

//>> SET_[EC_PC_COMMON_SPR_HMEER_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_HMEER_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_HMEER));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_HMEER_ENABLE,
           EC_PC_COMMON_SPR_HMEER_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_HMEER_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_HMEER_ENABLE]

//>> GET_[EC_PC_COMMON_SPR_HMEER_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_HMEER_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_HMEER));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_HMEER_ENABLE,
           EC_PC_COMMON_SPR_HMEER_ENABLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_HMEER_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_HMEER_ENABLE]

//>> PREP_[EC_PC_TRACE1_TR_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE1_TR_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_CONFIG_5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE1_TR_TR0_CONFIG_5]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE1_TR_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_CONFIG_5;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE1_TR_TR0_CONFIG_5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_5]

//>> PUT_[EC_PC_TRACE1_TR_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE1_TR_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_5));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE1_TR_TR0_CONFIG_5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE1_TR_TR0_CONFIG_5]


//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_5_C,
           EC_PC_TRACE1_TR_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_5_C]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_5_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_5_C,
           EC_PC_TRACE1_TR_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_5_C]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_5_C,
           EC_PC_TRACE1_TR_TR0_CONFIG_5_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_5_C]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_5_D,
           EC_PC_TRACE1_TR_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_5_D]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_5_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_5_D,
           EC_PC_TRACE1_TR_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_5_D]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_5_D,
           EC_PC_TRACE1_TR_TR0_CONFIG_5_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_5_D]

//>> PREP_[L2TRA_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2TRA_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR0_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2TRA_TR0_CONFIG_3]

//>> GET_[L2TRA_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2TRA_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR0_CONFIG_3;
#endif
    return fapi2::getScom(i_target, L2TRA_TR0_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_3]

//>> PUT_[L2TRA_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2TRA_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_3));
#endif
    return fapi2::putScom(i_target, L2TRA_TR0_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2TRA_TR0_CONFIG_3]


//>> SET_[L2TRA_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_3_C,
           L2TRA_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_3_C]

//>> SET_[L2TRA_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_3_C,
           L2TRA_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_3_C]

//>> GET_[L2TRA_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_3_C,
           L2TRA_TR0_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_3_C]

//>> SET_[L2TRA_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_3_D,
           L2TRA_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_3_D]

//>> SET_[L2TRA_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_3_D,
           L2TRA_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_3_D]

//>> GET_[L2TRA_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_3_D,
           L2TRA_TR0_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_3_D]

//>> PREP_[NC_NCCHTM_NCCHTSC_HTM_CSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCCHTM_NCCHTSC_HTM_CSEL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCCHTM_NCCHTSC_HTM_CSEL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCCHTM_NCCHTSC_HTM_CSEL]

//>> GET_[NC_NCCHTM_NCCHTSC_HTM_CSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCCHTM_NCCHTSC_HTM_CSEL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCCHTM_NCCHTSC_HTM_CSEL;
#endif
    return fapi2::getScom(i_target, NC_NCCHTM_NCCHTSC_HTM_CSEL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCCHTM_NCCHTSC_HTM_CSEL]

//>> PUT_[NC_NCCHTM_NCCHTSC_HTM_CSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCCHTM_NCCHTSC_HTM_CSEL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCCHTM_NCCHTSC_HTM_CSEL));
#endif
    return fapi2::putScom(i_target, NC_NCCHTM_NCCHTSC_HTM_CSEL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCCHTM_NCCHTSC_HTM_CSEL]


//>> PREP_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCMISC_NCSCOMS_NCU_MODE_REG3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_NCU_MODE_REG3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_NCU_MODE_REG3;
#endif
    return fapi2::getScom(i_target, NC_NCMISC_NCSCOMS_NCU_MODE_REG3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3]

//>> PUT_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCMISC_NCSCOMS_NCU_MODE_REG3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return fapi2::putScom(i_target, NC_NCMISC_NCSCOMS_NCU_MODE_REG3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3]


//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_EN]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_THRESHOLD]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_CMPLT_CNT]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_STALL_DELAY_CNT]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_MST_DLY_EN]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_PACING_PMU_THRESH]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SMF_ENABLE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN]

//>> CLEAR_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN]
static inline bool GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_TLBIE_OVERLAP_OP2_EN]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG3));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG3_SPARE]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
