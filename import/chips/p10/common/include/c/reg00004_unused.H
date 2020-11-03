/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/c/reg00004_unused.H $         */
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

#ifndef __C_REG00004_H_UNUSED__
#define __C_REG00004_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> PREP_[EC_LS_LSU_HOLD_OUT_REG11]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_LS_LSU_HOLD_OUT_REG11(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG11;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_LS_LSU_HOLD_OUT_REG11]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_LS_LSU_HOLD_OUT_REG11(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG11;
#endif
    return fapi2::getScom(i_target, EC_LS_LSU_HOLD_OUT_REG11, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11]

//>> PUT_[EC_LS_LSU_HOLD_OUT_REG11]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_LS_LSU_HOLD_OUT_REG11(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return fapi2::putScom(i_target, EC_LS_LSU_HOLD_OUT_REG11, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_LS_LSU_HOLD_OUT_REG11]


//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_00]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_00(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_00,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_00]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_00]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_00(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_00,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_00]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_00]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_00(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_00>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_00]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_00]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_00(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_00>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_00]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_00]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_00(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_00,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_00]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_00]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_00(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_00>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_00]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_01]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_01(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_01]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_01]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_01(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_01]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_01]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_01(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_01]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_01]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_01(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_01]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_01]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_01(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_01]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_01]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_01]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_02]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_02(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_02]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_02]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_02(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_02]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_02]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_02(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_02]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_02]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_02(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_02]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_02]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_02(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_02,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_02]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_02]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_02(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_02]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_03]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_03(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_03]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_03]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_03(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_03]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_03]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_03(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_03]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_03]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_03(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_03]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_03]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_03(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_03]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_03]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_03]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_04]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_04(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_04]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_04]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_04(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_04]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_04]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_04(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_04]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_04]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_04(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_04]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_04]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_04(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_04,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_04]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_04]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_04(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_04]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_05]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_05]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_05]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_05]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_05]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_05]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_05]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_05]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_05]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_05]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_05]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_05]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_06]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_06(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_06]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_06]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_06(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_06]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_06]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_06]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_06]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_06]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_06]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_06(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_06]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_06]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_06]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_07]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_07]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_07]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_07]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_07]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_07]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_07]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_07]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_07]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_07]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_07]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_07]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_08]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_08]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_08]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_08]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_08]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_08]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_08]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_08]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_08]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_08]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_08]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_08]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_09]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_09(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_09]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_09]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_09(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_09]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_09]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_09]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_09]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_09]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_09]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_09(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_09]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_09]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_09]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_10]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_10]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_10]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_10]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_10]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_10]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_10]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_10]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_10]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_10]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_10]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_10]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_11]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_11]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_11]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_11]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_11]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_11]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_11]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_11]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_11]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_11]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_11]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_11]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_12]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_12]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_12]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_12]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_12]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_12]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_12]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_12]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_12]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_12]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_12]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_12]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_13]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_13]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_13]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_13]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_13]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_13]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_13]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_13]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_13]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_13]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_13]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_13]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_14]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_14]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_14]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_14]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_14]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_14]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_14]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_14]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_14]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_14]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_14]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_14]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_15]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_15]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_15]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG11_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_15]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG11_15]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG11_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG11_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG11_15]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_15]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG11_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG11_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG11_15]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_15]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG11_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG11_15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_15]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG11_15]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG11_15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG11));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG11_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG11_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG11_15]

//>> PREP_[EC_LS_LSU_HOLD_OUT_REG7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_LS_LSU_HOLD_OUT_REG7(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG7;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_LS_LSU_HOLD_OUT_REG7]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_LS_LSU_HOLD_OUT_REG7(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_LS_LSU_HOLD_OUT_REG7;
#endif
    return fapi2::getScom(i_target, EC_LS_LSU_HOLD_OUT_REG7, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7]

//>> PUT_[EC_LS_LSU_HOLD_OUT_REG7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_LS_LSU_HOLD_OUT_REG7(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return fapi2::putScom(i_target, EC_LS_LSU_HOLD_OUT_REG7, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_LS_LSU_HOLD_OUT_REG7]


//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ0_OVERFLOW_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_LRQ1_OVERFLOW_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD0_RES_MULTILMQ_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_RSVT_LD1_RES_MULTILMQ_ERR_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_RECOV_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST0_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.insertFromRight<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& SET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.setBit<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return o_data.clearBit<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline fapi2::buffer<uint64_t>& GET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.extractToRight<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]
static inline bool GET_EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_LS_LSU_HOLD_OUT_REG7));
#endif
    return i_data.getBit<EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_LS_LSU_HOLD_OUT_REG7_DMAG_ST1_RES_EADIR_MULTIHIT_XSTOP_HOLD_OUT]

//>> PREP_[EC_PC_COMMON_SPR_VSU_HOLD_OUT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_COMMON_SPR_VSU_HOLD_OUT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_VSU_HOLD_OUT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_COMMON_SPR_VSU_HOLD_OUT]

//>> GET_[EC_PC_COMMON_SPR_VSU_HOLD_OUT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_COMMON_SPR_VSU_HOLD_OUT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_VSU_HOLD_OUT;
#endif
    return fapi2::getScom(i_target, EC_PC_COMMON_SPR_VSU_HOLD_OUT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_VSU_HOLD_OUT]

//>> PUT_[EC_PC_COMMON_SPR_VSU_HOLD_OUT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_COMMON_SPR_VSU_HOLD_OUT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_VSU_HOLD_OUT));
#endif
    return fapi2::putScom(i_target, EC_PC_COMMON_SPR_VSU_HOLD_OUT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_COMMON_SPR_VSU_HOLD_OUT]


//>> PREP_[EC_PC_FIR_RECOV_THOLD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_FIR_RECOV_THOLD(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_FIR_RECOV_THOLD;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_FIR_RECOV_THOLD]

//>> GET_[EC_PC_FIR_RECOV_THOLD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_FIR_RECOV_THOLD(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_FIR_RECOV_THOLD;
#endif
    return fapi2::getScom(i_target, EC_PC_FIR_RECOV_THOLD, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_FIR_RECOV_THOLD]

//>> PUT_[EC_PC_FIR_RECOV_THOLD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_FIR_RECOV_THOLD(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_RECOV_THOLD));
#endif
    return fapi2::putScom(i_target, EC_PC_FIR_RECOV_THOLD, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_FIR_RECOV_THOLD]


//>> SET_[EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_RECOV_THOLD));
#endif
    return o_data.insertFromRight<EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT,
           EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT]

//>> SET_[EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_RECOV_THOLD));
#endif
    return o_data.insertFromRight<EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT,
           EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT]

//>> GET_[EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_RECOV_THOLD));
#endif
    return i_data.extractToRight<EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT,
           EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_RECOV_THOLD_THRESHOLD_LIMIT]

//>> SET_[EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_RECOV_THOLD));
#endif
    return o_data.insertFromRight<EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET,
           EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET]

//>> SET_[EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_RECOV_THOLD));
#endif
    return o_data.insertFromRight<EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET,
           EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET]

//>> GET_[EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_RECOV_THOLD));
#endif
    return i_data.extractToRight<EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET,
           EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_RECOV_THOLD_THRESHOLD_RESET]

//>> PREP_[EC_PC_SCR5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_SCR5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SCR5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_SCR5]

//>> GET_[EC_PC_SCR5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_SCR5(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_SCR5;
#endif
    return fapi2::getScom(i_target, EC_PC_SCR5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_SCR5]

//>> PUT_[EC_PC_SCR5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_SCR5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_SCR5));
#endif
    return fapi2::putScom(i_target, EC_PC_SCR5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_SCR5]


//>> PREP_[EC_PC_TOD_SYNC011]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TOD_SYNC011(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TOD_SYNC011;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TOD_SYNC011]

//>> GET_[EC_PC_TOD_SYNC011]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TOD_SYNC011(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TOD_SYNC011;
#endif
    return fapi2::getScom(i_target, EC_PC_TOD_SYNC011, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TOD_SYNC011]

//>> PUT_[EC_PC_TOD_SYNC011]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TOD_SYNC011(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC011));
#endif
    return fapi2::putScom(i_target, EC_PC_TOD_SYNC011, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TOD_SYNC011]


//>> SET_[EC_PC_TOD_SYNC011_TOD]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC011_TOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC011));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC011_TOD,
           EC_PC_TOD_SYNC011_TOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TOD_SYNC011_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC011_TOD]

//>> SET_[EC_PC_TOD_SYNC011_TOD]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC011_TOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC011));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC011_TOD,
           EC_PC_TOD_SYNC011_TOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TOD_SYNC011_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC011_TOD]

//>> GET_[EC_PC_TOD_SYNC011_TOD]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TOD_SYNC011_TOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC011));
#endif
    return i_data.extractToRight<EC_PC_TOD_SYNC011_TOD,
           EC_PC_TOD_SYNC011_TOD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TOD_SYNC011_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TOD_SYNC011_TOD]

//>> SET_[EC_PC_TOD_SYNC011_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC011_CHIP_TOD_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC011));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC011_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC011_CHIP_TOD_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TOD_SYNC011_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC011_CHIP_TOD_STATUS]

//>> SET_[EC_PC_TOD_SYNC011_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC011_CHIP_TOD_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC011));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC011_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC011_CHIP_TOD_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TOD_SYNC011_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC011_CHIP_TOD_STATUS]

//>> GET_[EC_PC_TOD_SYNC011_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TOD_SYNC011_CHIP_TOD_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC011));
#endif
    return i_data.extractToRight<EC_PC_TOD_SYNC011_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC011_CHIP_TOD_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TOD_SYNC011_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TOD_SYNC011_CHIP_TOD_STATUS]

//>> PREP_[EC_PC_TOD_SYNC100]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TOD_SYNC100(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TOD_SYNC100;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TOD_SYNC100]

//>> GET_[EC_PC_TOD_SYNC100]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TOD_SYNC100(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TOD_SYNC100;
#endif
    return fapi2::getScom(i_target, EC_PC_TOD_SYNC100, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TOD_SYNC100]

//>> PUT_[EC_PC_TOD_SYNC100]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TOD_SYNC100(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC100));
#endif
    return fapi2::putScom(i_target, EC_PC_TOD_SYNC100, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TOD_SYNC100]


//>> SET_[EC_PC_TOD_SYNC100_TOD]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC100_TOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC100));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC100_TOD,
           EC_PC_TOD_SYNC100_TOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TOD_SYNC100_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC100_TOD]

//>> SET_[EC_PC_TOD_SYNC100_TOD]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC100_TOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC100));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC100_TOD,
           EC_PC_TOD_SYNC100_TOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TOD_SYNC100_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC100_TOD]

//>> GET_[EC_PC_TOD_SYNC100_TOD]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TOD_SYNC100_TOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC100));
#endif
    return i_data.extractToRight<EC_PC_TOD_SYNC100_TOD,
           EC_PC_TOD_SYNC100_TOD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TOD_SYNC100_TOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TOD_SYNC100_TOD]

//>> SET_[EC_PC_TOD_SYNC100_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC100_CHIP_TOD_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC100));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC100_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC100_CHIP_TOD_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TOD_SYNC100_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC100_CHIP_TOD_STATUS]

//>> SET_[EC_PC_TOD_SYNC100_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TOD_SYNC100_CHIP_TOD_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC100));
#endif
    return o_data.insertFromRight<EC_PC_TOD_SYNC100_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC100_CHIP_TOD_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TOD_SYNC100_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TOD_SYNC100_CHIP_TOD_STATUS]

//>> GET_[EC_PC_TOD_SYNC100_CHIP_TOD_STATUS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TOD_SYNC100_CHIP_TOD_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TOD_SYNC100));
#endif
    return i_data.extractToRight<EC_PC_TOD_SYNC100_CHIP_TOD_STATUS,
           EC_PC_TOD_SYNC100_CHIP_TOD_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TOD_SYNC100_CHIP_TOD_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TOD_SYNC100_CHIP_TOD_STATUS]

//>> PREP_[L2TRA_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2TRA_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR1_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2TRA_TR1_CONFIG_3]

//>> GET_[L2TRA_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2TRA_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR1_CONFIG_3;
#endif
    return fapi2::getScom(i_target, L2TRA_TR1_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_3]

//>> PUT_[L2TRA_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2TRA_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_3));
#endif
    return fapi2::putScom(i_target, L2TRA_TR1_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2TRA_TR1_CONFIG_3]


//>> SET_[L2TRA_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_3_C,
           L2TRA_TR1_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_3_C]

//>> SET_[L2TRA_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_3_C,
           L2TRA_TR1_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_3_C]

//>> GET_[L2TRA_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_3));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_3_C,
           L2TRA_TR1_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_3_C]

//>> SET_[L2TRA_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_3_D,
           L2TRA_TR1_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_3_D]

//>> SET_[L2TRA_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR1_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L2TRA_TR1_CONFIG_3_D,
           L2TRA_TR1_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR1_CONFIG_3_D]

//>> GET_[L2TRA_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR1_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR1_CONFIG_3));
#endif
    return i_data.extractToRight<L2TRA_TR1_CONFIG_3_D,
           L2TRA_TR1_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR1_CONFIG_3_D]

//>> PREP_[L2_L2MISC_L2CERRS_ERR_RPT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2_L2MISC_L2CERRS_ERR_RPT1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2_L2MISC_L2CERRS_ERR_RPT1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2_L2MISC_L2CERRS_ERR_RPT1]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2_L2MISC_L2CERRS_ERR_RPT1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2_L2MISC_L2CERRS_ERR_RPT1;
#endif
    return fapi2::getScom(i_target, L2_L2MISC_L2CERRS_ERR_RPT1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1]

//>> PUT_[L2_L2MISC_L2CERRS_ERR_RPT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2_L2MISC_L2CERRS_ERR_RPT1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return fapi2::putScom(i_target, L2_L2MISC_L2CERRS_ERR_RPT1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2_L2MISC_L2CERRS_ERR_RPT1]


//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_CRESP_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_IDLE_L3_DWDONE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RCX_UNEXP_PB_RC_DTAG_PCHK_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_REF_WITH_FLAG_IDLE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_KILL_REF_WITH_FLAG_IDLE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_DW_SET_SI_BY_MACH]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_PD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B0_SD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B1_SD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B2_SD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_B3_SD_DIR_MULT_HIT]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_TEMP_MARK_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_HANG_WAITING_FOR_FP_MATE]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_BAD_FP_MATE]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_LSU_TAG_REUSE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_MULT_REQ_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_IFU_LATE_CANCEL_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XPF_MULT_REQ_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_XLT_QUEUE_OVRFLW_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_L3PF_REQ_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_NCU_TID_DONE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_REQ_DEC_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_ABCD]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_11_LRU_MEM_INVALID_EFGH]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_COMING_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_OVERFLOW_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_STQ_BOUNCE_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_RC_PBBUS_SFSTAT_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_TMA_LARXA_VS_FRCMISS_SV_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_RC_TGT_NODAL_REQ_CRESP_DINC_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_22_SN_TGT_NODAL_REQ_CRESP_DINC_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR]

//>> SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR]

//>> CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR]

//>> GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR]
static inline bool GET_L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_ERR_RPT1));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_ERR_RPT1_14_SNX_FSM_PARITY_ERR]

//>> PREP_[L2_L2MISC_L2CERRS_MODE_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2_L2MISC_L2CERRS_MODE_REG0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2_L2MISC_L2CERRS_MODE_REG0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2_L2MISC_L2CERRS_MODE_REG0]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2_L2MISC_L2CERRS_MODE_REG0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2_L2MISC_L2CERRS_MODE_REG0;
#endif
    return fapi2::getScom(i_target, L2_L2MISC_L2CERRS_MODE_REG0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0]

//>> PUT_[L2_L2MISC_L2CERRS_MODE_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2_L2MISC_L2CERRS_MODE_REG0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return fapi2::putScom(i_target, L2_L2MISC_L2CERRS_MODE_REG0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2_L2MISC_L2CERRS_MODE_REG0]


//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LRU_DIRECT_MAP]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RANDOM_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM,
           L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM,
           L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM,
           L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SINGLE_MEM]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L3_DIS]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ME_SX_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CO_SOFT_PURGE_ALL_LINES_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_DCBZ_TRASHMODE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CAC_ERR_REPAIR_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_LINEDEL_ON_CAC_UE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HW_TRIG_LINEDEL_LDDISP_CE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL,
           L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL,
           L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL,
           L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_L2_PB_ARB_RATE_SEL]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L3_ADDR_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_RC_FRC_DISP_EQ_NTM_INIG_SI_TO_RCR_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_CHIP_CONTAINED_MODE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK,
           L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK,
           L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK,
           L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_Q_BIT_TID_MASK]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_HASH_L2_ADDR_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES1]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_SPARES1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_SPARES1,
           L2_L2MISC_L2CERRS_MODE_REG0_SPARES1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_SPARES1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES1]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES1]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_SPARES1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_SPARES1,
           L2_L2MISC_L2CERRS_MODE_REG0_SPARES1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_SPARES1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES1]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES1]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_SPARES1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_SPARES1,
           L2_L2MISC_L2CERRS_MODE_REG0_SPARES1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_SPARES1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES1]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_STQ_PF_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES2]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_SPARES2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_SPARES2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_SPARES2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES2]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES2]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_SPARES2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_SPARES2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_SPARES2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES2]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES2]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_SPARES2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_SPARES2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_SPARES2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES2]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES2]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_SPARES2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_SPARES2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_SPARES2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES2]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES2]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_SPARES2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_SPARES2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_SPARES2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES2]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES2]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_SPARES2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_SPARES2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_SPARES2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES2]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_PERFMON_INFO_SRC_ED_SEL]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES3]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_SPARES3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_SPARES3,
           L2_L2MISC_L2CERRS_MODE_REG0_SPARES3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_SPARES3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES3]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES3]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_SPARES3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_SPARES3,
           L2_L2MISC_L2CERRS_MODE_REG0_SPARES3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_SPARES3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES3]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES3]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_SPARES3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_SPARES3,
           L2_L2MISC_L2CERRS_MODE_REG0_SPARES3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_SPARES3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_SPARES3]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_SKIP_GRP_SCOPE_EN]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.setBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS]

//>> CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.clearBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS]
static inline bool GET_L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.getBit<L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_CFG_TM_DTT_DIS]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE,
           L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE]

//>> SET_[L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE]
static inline fapi2::buffer<uint64_t>& SET_L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return o_data.insertFromRight<L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE,
           L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE]

//>> GET_[L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE]
static inline fapi2::buffer<uint64_t>& GET_L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_MODE_REG0));
#endif
    return i_data.extractToRight<L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE,
           L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_MODE_REG0_MODE_REG0_SPARE]

//>> PREP_[L3_MISC_L3CERRS_PM_RCMD_DIS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3_MISC_L3CERRS_PM_RCMD_DIS_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = L3_MISC_L3CERRS_PM_RCMD_DIS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3_MISC_L3CERRS_PM_RCMD_DIS_REG]

//>> GET_[L3_MISC_L3CERRS_PM_RCMD_DIS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3_MISC_L3CERRS_PM_RCMD_DIS_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = L3_MISC_L3CERRS_PM_RCMD_DIS_REG;
#endif
    return fapi2::getScom(i_target, L3_MISC_L3CERRS_PM_RCMD_DIS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3_MISC_L3CERRS_PM_RCMD_DIS_REG]

//>> PUT_[L3_MISC_L3CERRS_PM_RCMD_DIS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3_MISC_L3CERRS_PM_RCMD_DIS_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PM_RCMD_DIS_REG));
#endif
    return fapi2::putScom(i_target, L3_MISC_L3CERRS_PM_RCMD_DIS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3_MISC_L3CERRS_PM_RCMD_DIS_REG]


//>> SET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PM_RCMD_DIS_REG));
#endif
    return o_data.insertFromRight<P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG]

//>> SET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PM_RCMD_DIS_REG));
#endif
    return o_data.insertFromRight<P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG]

//>> SET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PM_RCMD_DIS_REG));
#endif
    return o_data.setBit<P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG]

//>> CLEAR_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PM_RCMD_DIS_REG));
#endif
    return o_data.clearBit<P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG]

//>> GET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PM_RCMD_DIS_REG));
#endif
    return i_data.extractToRight<P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG]

//>> GET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG]
static inline bool GET_P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PM_RCMD_DIS_REG));
#endif
    return i_data.getBit<P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_LCO_DIS_CFG]

//>> SET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PM_RCMD_DIS_REG));
#endif
    return o_data.insertFromRight<P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG]

//>> SET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PM_RCMD_DIS_REG));
#endif
    return o_data.insertFromRight<P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG]

//>> SET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PM_RCMD_DIS_REG));
#endif
    return o_data.setBit<P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG]

//>> CLEAR_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PM_RCMD_DIS_REG));
#endif
    return o_data.clearBit<P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG]

//>> GET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PM_RCMD_DIS_REG));
#endif
    return i_data.extractToRight<P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG]

//>> GET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG]
static inline bool GET_P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(L3_MISC_L3CERRS_PM_RCMD_DIS_REG));
#endif
    return i_data.getBit<P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_L3_MISC_L3CERRS_PM_RCMD_DIS_REG_RCMD_DIS_CFG]

//>> PREP_[NC_NCMISC_NCSCOMS_ERR_RPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCMISC_NCSCOMS_ERR_RPT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_ERR_RPT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCMISC_NCSCOMS_ERR_RPT_REG]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_ERR_RPT_REG;
#endif
    return fapi2::getScom(i_target, NC_NCMISC_NCSCOMS_ERR_RPT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG]

//>> PUT_[NC_NCMISC_NCSCOMS_ERR_RPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCMISC_NCSCOMS_ERR_RPT_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return fapi2::putScom(i_target, NC_NCMISC_NCSCOMS_ERR_RPT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCMISC_NCSCOMS_ERR_RPT_REG]


//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_OVERFLOW_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_ILLEGAL_STORE_SIZE]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LD_AMO_SEQ_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR0_ATAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR1_ATAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR2_ATAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CR3_ATAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_ADDR_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP0_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_ADDR_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNP1_TTAG_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PBARB_TRASHMODE_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_TLBIE_BAD_OP_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_MASTER_SEQ_ID_PAR_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_SNOOP_TLBIE_SEQ_PARITY_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR1]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_LVL_ERR2]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR1]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_ABORT_LVL_ERR2]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_PURGE_DONE_LVL_ERR1]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_IMA_FSM_TIMEOUT]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_CORE_IS_DEAD_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_1_UNEXP_SNPTLBCMP_NOT_MY_LPAR_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLB_DATA_PAR_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_LD_TGT_NODAL_DINC_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_19_ST_TGT_NODAL_DINC_ERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_TLBSM_FSM_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_XSQCT_FSM_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_LDCTL_FSM_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_SNCTL_FSM_PERR]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA]

//>> SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.setBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA]

//>> CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA]
static inline fapi2::buffer<uint64_t>& CLEAR_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return o_data.clearBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA]

//>> GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA]
static inline bool GET_NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_ERR_RPT_REG));
#endif
    return i_data.getBit<NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_ERR_RPT_REG_0_UNEXP_IMA_DATA]

//>> PREP_[NC_NCMISC_NCSCOMS_FIR_ACTION0_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCMISC_NCSCOMS_FIR_ACTION0_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_FIR_ACTION0_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCMISC_NCSCOMS_FIR_ACTION0_REG]

//>> GET_[NC_NCMISC_NCSCOMS_FIR_ACTION0_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCMISC_NCSCOMS_FIR_ACTION0_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_FIR_ACTION0_REG;
#endif
    return fapi2::getScom(i_target, NC_NCMISC_NCSCOMS_FIR_ACTION0_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_FIR_ACTION0_REG]

//>> PUT_[NC_NCMISC_NCSCOMS_FIR_ACTION0_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCMISC_NCSCOMS_FIR_ACTION0_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_FIR_ACTION0_REG));
#endif
    return fapi2::putScom(i_target, NC_NCMISC_NCSCOMS_FIR_ACTION0_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCMISC_NCSCOMS_FIR_ACTION0_REG]


//>> SET_[NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_FIR_ACTION0_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0,
           NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0]

//>> SET_[NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_FIR_ACTION0_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0,
           NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0]

//>> GET_[NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_FIR_ACTION0_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0,
           NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_FIR_ACTION0_REG_FIR_ACTION0]

//>> PREP_[NC_NCMISC_NCSCOMS_FIR_ACTION1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCMISC_NCSCOMS_FIR_ACTION1_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_FIR_ACTION1_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCMISC_NCSCOMS_FIR_ACTION1_REG]

//>> GET_[NC_NCMISC_NCSCOMS_FIR_ACTION1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCMISC_NCSCOMS_FIR_ACTION1_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_FIR_ACTION1_REG;
#endif
    return fapi2::getScom(i_target, NC_NCMISC_NCSCOMS_FIR_ACTION1_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_FIR_ACTION1_REG]

//>> PUT_[NC_NCMISC_NCSCOMS_FIR_ACTION1_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCMISC_NCSCOMS_FIR_ACTION1_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_FIR_ACTION1_REG));
#endif
    return fapi2::putScom(i_target, NC_NCMISC_NCSCOMS_FIR_ACTION1_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCMISC_NCSCOMS_FIR_ACTION1_REG]


//>> SET_[NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_FIR_ACTION1_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1,
           NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1]

//>> SET_[NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_FIR_ACTION1_REG));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1,
           NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1]

//>> GET_[NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_FIR_ACTION1_REG));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1,
           NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_FIR_ACTION1_REG_FIR_ACTION1]

//>> PREP_[WRITE_PROTECT_ENABLE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_WRITE_PROTECT_ENABLE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WRITE_PROTECT_ENABLE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[WRITE_PROTECT_ENABLE_REG]

//>> GET_[WRITE_PROTECT_ENABLE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_WRITE_PROTECT_ENABLE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WRITE_PROTECT_ENABLE_REG;
#endif
    return fapi2::getScom(i_target, WRITE_PROTECT_ENABLE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[WRITE_PROTECT_ENABLE_REG]

//>> PUT_[WRITE_PROTECT_ENABLE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_WRITE_PROTECT_ENABLE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_ENABLE_REG));
#endif
    return fapi2::putScom(i_target, WRITE_PROTECT_ENABLE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[WRITE_PROTECT_ENABLE_REG]


//>> SET_[WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.insertFromRight<WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> SET_[WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.insertFromRight<WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> SET_[WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.setBit<WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> CLEAR_[WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& CLEAR_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.clearBit<WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> GET_[WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& GET_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_ENABLE_REG));
#endif
    return i_data.extractToRight<WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> GET_[WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline bool GET_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_ENABLE_REG));
#endif
    return i_data.getBit<WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> SET_[WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.insertFromRight<WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> SET_[WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.insertFromRight<WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> SET_[WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.setBit<WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> CLEAR_[WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& CLEAR_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.clearBit<WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> GET_[WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& GET_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_ENABLE_REG));
#endif
    return i_data.extractToRight<WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> GET_[WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline bool GET_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_ENABLE_REG));
#endif
    return i_data.getBit<WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
