/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/iohs/reg00000_unused.H $      */
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

#ifndef __IOHS_REG00000_H_UNUSED__
#define __IOHS_REG00000_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace iohs
{
#endif


//>> PREP_[AXON_EPS_FIR_LOCAL_ACTION2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_EPS_FIR_LOCAL_ACTION2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_FIR_LOCAL_ACTION2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_EPS_FIR_LOCAL_ACTION2]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_EPS_FIR_LOCAL_ACTION2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_FIR_LOCAL_ACTION2;
#endif
    return fapi2::getScom(i_target, AXON_EPS_FIR_LOCAL_ACTION2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2]

//>> PUT_[AXON_EPS_FIR_LOCAL_ACTION2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_EPS_FIR_LOCAL_ACTION2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return fapi2::putScom(i_target, AXON_EPS_FIR_LOCAL_ACTION2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_EPS_FIR_LOCAL_ACTION2]


//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_00]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_00(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_00,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_00]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_00]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_00(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_00,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_00]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_00]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_00(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_00>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_00]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_00]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_00(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_00>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_00]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_00]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_00(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_00,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_00]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_00]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_00(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_00>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_00]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_01]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_01(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_01]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_01]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_01(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_01]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_01]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_01(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_01]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_01]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_01(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_01]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_01]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_01(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_01]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_01]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_01]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_02]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_02(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_02]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_02]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_02(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_02]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_02]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_02(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_02]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_02]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_02(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_02]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_02]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_02(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_02,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_02]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_02]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_02(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_02]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_03]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_03(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_03]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_03]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_03(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_03]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_03]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_03(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_03]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_03]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_03(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_03]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_03]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_03(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_03]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_03]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_03]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_04]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_04(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_04]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_04]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_04(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_04]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_04]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_04(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_04]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_04]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_04(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_04]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_04]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_04(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_04,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_04]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_04]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_04(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_04]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_05]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_05]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_05]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_05]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_05]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_05]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_05]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_05]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_05]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_05]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_05]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_05]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_06]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_06(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_06]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_06]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_06(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_06]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_06]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_06]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_06]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_06]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_06]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_06(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_06]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_06]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_06]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_07]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_07]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_07]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_07]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_07]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_07]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_07]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_07]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_07]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_07]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_07]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_07]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_08]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_08]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_08]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_08]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_08]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_08]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_08]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_08]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_08]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_08]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_08]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_08]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_09]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_09(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_09]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_09]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_09(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_09]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_09]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_09]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_09]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_09]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_09]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_09(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_09]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_09]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_09]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_10]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_10]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_10]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_10]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_10]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_10]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_10]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_10]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_10]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_10]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_10]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_10]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_11]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_11]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_11]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_11]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_11]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_11]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_11]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_11]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_11]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_11]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_11]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_11]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_12]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_12]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_12]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_12]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_12]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_12]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_12]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_12]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_12]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_12]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_12]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_12]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_13]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_13]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_13]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_13]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_13]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_13]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_13]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_13]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_13]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_13]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_13]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_13]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_14]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_14]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_14]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_14]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_14]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_14]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_14]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_14]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_14]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_14]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_14]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_14]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_15]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_15]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_15]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_15]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_15]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_15]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_15]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_15]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_15]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_15]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_15]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_15]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_16]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_16(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_16,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_16]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_16]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_16(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_16,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_16]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_16]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_16(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_16]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_16]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_16(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_16]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_16]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_16(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_16,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_16]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_16]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_16(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_16]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_17]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_17(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_17]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_17]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_17(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_17]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_17]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_17]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_17]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_17]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_17]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_17(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_17,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_17]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_17]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_17(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_17]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_18]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_18(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_18,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_18]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_18]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_18(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_18,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_18]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_18]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_18(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_18]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_18]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_18(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_18]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_18]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_18(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_18,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_18]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_18]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_18(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_18]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_19]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_19(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_19]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_19]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_19]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_19]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_19]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_19]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_19]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_19]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_19(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_19,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_19]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_19]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_19(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_19]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_20]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_20(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_20]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_20]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_20(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_20]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_20]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_20]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_20]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_20]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_20]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_20(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_20,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_20]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_20]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_20(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_20]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_21]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_21(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_21,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_21]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_21]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_21(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_21,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_21]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_21]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_21(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_21]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_21]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_21(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_21]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_21]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_21(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_21,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_21]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_21]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_21(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_21]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_22]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_22(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_22,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_22]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_22]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_22(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_22,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_22]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_22]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_22(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_22]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_22]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_22(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_22]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_22]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_22(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_22,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_22]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_22]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_22(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_22]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_23]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_23(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_23]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_23]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_23(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_23]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_23]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_23]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_23]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_23]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_23]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_23(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_23,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_23]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_23]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_23(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_23]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_24]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_24(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_24]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_24]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_24(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_24]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_24]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_24]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_24]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_24]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_24]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_24(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_24,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_24]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_24]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_24(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_24]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_25]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_25(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_25,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_25]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_25]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_25(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_25,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_25]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_25]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_25(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_25]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_25]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_25(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_25]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_25]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_25(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_25,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_25]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_25]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_25(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_25]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_26]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_26(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_26]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_26]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_26(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_26]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_26]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_26]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_26]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_26]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_26]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_26(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_26,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_26]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_26]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_26(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_26]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_27]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_27(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_27,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_27]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_27]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_27(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_27,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_27]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_27]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_27(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_27]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_27]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_27(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_27]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_27]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_27(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_27,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_27]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_27]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_27(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_27]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_28]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_28(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_28]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_28]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_28(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_28]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_28]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_28]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_28]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_28]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_28]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_28(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_28,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_28]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_28]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_28(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_28]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_29]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_29(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_29]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_29]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_29(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_29]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_29]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_29]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_29]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_29]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_29]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_29(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_29,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_29]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_29]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_29(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_29]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_30]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_30(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_30]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_30]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_30(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_30]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_30]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_30]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_30]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_30]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_30]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_30(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_30,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_30]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_30]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_30(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_30]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_31]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_31(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_31,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_31]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_31]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_31(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_31,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_31]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_31]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_31(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_31]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_31]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_31(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_31]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_31]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_31(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_31,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_31]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_31]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_31(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_31]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_32]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_32(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_32]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_32]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_32(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_32]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_32]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_32]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_32]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_32]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_32]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_32(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_32,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_32]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_32]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_32(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_32]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_33]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_33(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_33]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_33]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_33(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_33]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_33]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_33]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_33]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_33]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_33]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_33(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_33,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_33]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_33]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_33(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_33]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_34]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_34(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_34]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_34]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_34(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_34]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_34]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_34]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_34]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_34]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_34]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_34(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_34,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_34]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_34]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_34(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_34]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_35]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_35(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_35]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_35]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_35(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_35]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_35]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_35]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_35]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_35]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_35]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_35(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_35,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_35]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_35]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_35(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_35]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_36]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_36(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_36]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_36]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_36(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_36]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_36]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_36(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_36]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_36]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_36(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_36]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_36]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_36(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_36,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_36]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_36]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_36(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_36]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_37]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_37(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_37]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_37]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_37(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_37]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_37]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_37(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_37]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_37]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_37(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_37]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_37]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_37(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_37,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_37]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_37]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_37(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_37]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_38]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_38(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_38]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_38]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_38(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_38]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_38]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_38(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_38]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_38]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_38(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_38]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_38]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_38(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_38,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_38]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_38]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_38(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_38]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_39]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_39(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_39]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_39]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_39(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_39]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_39]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_39(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_39]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_39]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_39(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_39]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_39]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_39(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_39,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_39]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_39]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_39(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_39]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_40]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_40(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_40]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_40]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_40(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_40]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_40]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_40(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_40]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_40]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_40(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_40]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_40]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_40(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_40,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_40]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_40]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_40(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_40]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_41]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_41(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_41]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_41]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_41(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_41]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_41]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_41(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_41]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_41]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_41(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_41]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_41]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_41(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_41,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_41]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_41]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_41(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_41]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_42]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_42(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_42]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_42]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_42(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_42]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_42]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_42(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_42]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_42]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_42(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_42]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_42]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_42(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_42,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_42]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_42]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_42(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_42]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_43]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_43(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_43]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_43]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_43(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_43]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_43]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_43(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_43]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_43]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_43(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_43]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_43]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_43(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_43,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_43]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_43]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_43(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_43]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_44]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_44(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_44]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_44]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_44(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_44]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_44]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_44(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_44]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_44]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_44(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_44]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_44]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_44(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_44,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_44]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_44]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_44(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_44]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_45]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_45(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_45,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_45]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_45]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_45(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_45,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_45]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_45]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_45(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_45]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_45]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_45(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_45]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_45]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_45(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_45,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_45]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_45]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_45(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_45]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_46]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_46(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_46,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_46]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_46]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_46(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_46,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_46]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_46]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_46(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_46]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_46]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_46(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_46]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_46]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_46(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_46,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_46]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_46]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_46(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_46]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_47]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_47(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_47]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_47]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_47(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_47]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_47]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_47(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_47]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_47]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_47(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_47]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_47]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_47(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_47,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_47]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_47]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_47(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_47]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_48]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_48(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_48,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_48]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_48]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_48(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_48,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_48]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_48]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_48(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_48]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_48]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_48(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_48]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_48]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_48(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_48,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_48]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_48]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_48(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_48]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_49]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_49(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_49,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_49]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_49]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_49(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_49,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_49]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_49]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_49(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_49]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_49]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_49(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_49]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_49]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_49(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_49,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_49]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_49]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_49(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_49]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_50]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_50(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_50]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_50]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_50(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_50]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_50]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_50]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_50]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_50]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_50]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_50(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_50,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_50]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_50]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_50(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_50]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_51]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_51(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_51]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_51]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_51(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_51]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_51]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_51(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_51]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_51]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_51(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_51]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_51]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_51(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_51,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_51]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_51]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_51(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_51]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_52]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_52(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_52,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_52]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_52]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_52(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_52,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_52]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_52]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_52(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_52]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_52]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_52(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_52]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_52]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_52(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_52,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_52]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_52]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_52(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_52]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_53]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_53(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_53,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_53]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_53]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_53(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_53,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_53]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_53]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_53(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_53]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_53]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_53(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_53]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_53]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_53(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_53,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_53]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_53]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_53(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_53]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_54]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_54(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_54,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_54]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_54]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_54(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_54,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_54]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_54]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_54(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_54>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_54]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_54]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_54(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_54>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_54]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_54]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_54(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_54,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_54]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_54]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_54(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_54>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_54]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_55]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_55(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_55,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_55]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_55]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_55(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_55,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_55]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_55]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_55(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_55>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_55]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_55]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_55(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_55>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_55]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_55]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_55(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_55,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_55]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_55]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_55(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_55>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_55]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_56]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_56(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_56,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_56]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_56]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_56(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_56,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_56]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_56]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_56(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_56>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_56]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_56]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_56(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_56>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_56]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_56]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_56(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_56,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_56]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_56]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_56(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_56>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_56]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_57]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_57(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_57,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_57]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_57]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_57(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_57,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_57]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_57]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_57(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_57>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_57]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_57]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_57(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_57>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_57]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_57]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_57(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_57,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_57]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_57]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_57(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_57>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_57]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_58]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_58(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_58,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_58]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_58]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_58(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_58,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_58]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_58]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_58(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_58]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_58]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_58(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_58]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_58]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_58(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_58,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_58]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_58]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_58(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_58]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_59]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_59(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_59,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_59]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_59]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_59(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_59,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_59]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_59]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_59(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_59]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_59]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_59(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_59]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_59]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_59(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_59,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_59]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_59]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_59(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_59]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_60]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_60(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_60,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_60]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_60]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_60(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_60,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_60]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_60]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_60(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_60]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_60]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_60(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_60]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_60]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_60(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_60,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_60]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_60]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_60(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_60]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_61]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_61(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_61,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_61]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_61]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_61(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_61,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_61]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_61]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_61(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_61]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_61]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_61(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_61]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_61]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_61(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_61,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_61]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_61]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_61(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_61]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_62]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_62(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_62,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_62]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_62]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_62(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_62,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_62]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_62]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_62(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_62>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_62]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_62]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_62(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_62>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_62]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_62]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_62(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_62,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_62]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_62]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_62(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_62>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_62]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_63]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_63,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_63]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_63]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.insertFromRight<AXON_EPS_FIR_LOCAL_ACTION2_63,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_63]

//>> SET_[AXON_EPS_FIR_LOCAL_ACTION2_63]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_FIR_LOCAL_ACTION2_63(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.setBit<AXON_EPS_FIR_LOCAL_ACTION2_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_FIR_LOCAL_ACTION2_63]

//>> CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_63]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_EPS_FIR_LOCAL_ACTION2_63(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return o_data.clearBit<AXON_EPS_FIR_LOCAL_ACTION2_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_EPS_FIR_LOCAL_ACTION2_63]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_63]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_FIR_LOCAL_ACTION2_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.extractToRight<AXON_EPS_FIR_LOCAL_ACTION2_63,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_63]

//>> GET_[AXON_EPS_FIR_LOCAL_ACTION2_63]
static inline bool GET_AXON_EPS_FIR_LOCAL_ACTION2_63(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_FIR_LOCAL_ACTION2));
#endif
    return i_data.getBit<AXON_EPS_FIR_LOCAL_ACTION2_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_EPS_FIR_LOCAL_ACTION2_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_FIR_LOCAL_ACTION2_63]

//>> PREP_[AXON_EPS_THERM_WSUB_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_EPS_THERM_WSUB_INJECT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_THERM_WSUB_INJECT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_EPS_THERM_WSUB_INJECT_REG]

//>> GET_[AXON_EPS_THERM_WSUB_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_EPS_THERM_WSUB_INJECT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_EPS_THERM_WSUB_INJECT_REG;
#endif
    return fapi2::getScom(i_target, AXON_EPS_THERM_WSUB_INJECT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_INJECT_REG]

//>> PUT_[AXON_EPS_THERM_WSUB_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_EPS_THERM_WSUB_INJECT_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_INJECT_REG));
#endif
    return fapi2::putScom(i_target, AXON_EPS_THERM_WSUB_INJECT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_EPS_THERM_WSUB_INJECT_REG]


//>> SET_[AXON_EPS_THERM_WSUB_INJECT_REG_TRIP]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_INJECT_REG_TRIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_INJECT_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_INJECT_REG_TRIP,
           AXON_EPS_THERM_WSUB_INJECT_REG_TRIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_INJECT_REG_TRIP]

//>> SET_[AXON_EPS_THERM_WSUB_INJECT_REG_TRIP]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_INJECT_REG_TRIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_INJECT_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_INJECT_REG_TRIP,
           AXON_EPS_THERM_WSUB_INJECT_REG_TRIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_INJECT_REG_TRIP]

//>> GET_[AXON_EPS_THERM_WSUB_INJECT_REG_TRIP]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_INJECT_REG_TRIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_INJECT_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_INJECT_REG_TRIP,
           AXON_EPS_THERM_WSUB_INJECT_REG_TRIP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_INJECT_REG_TRIP]

//>> SET_[AXON_EPS_THERM_WSUB_INJECT_REG_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_INJECT_REG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_INJECT_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_INJECT_REG_MODE,
           AXON_EPS_THERM_WSUB_INJECT_REG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_INJECT_REG_MODE]

//>> SET_[AXON_EPS_THERM_WSUB_INJECT_REG_MODE]
static inline fapi2::buffer<uint64_t>& SET_AXON_EPS_THERM_WSUB_INJECT_REG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_INJECT_REG));
#endif
    return o_data.insertFromRight<AXON_EPS_THERM_WSUB_INJECT_REG_MODE,
           AXON_EPS_THERM_WSUB_INJECT_REG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_EPS_THERM_WSUB_INJECT_REG_MODE]

//>> GET_[AXON_EPS_THERM_WSUB_INJECT_REG_MODE]
static inline fapi2::buffer<uint64_t>& GET_AXON_EPS_THERM_WSUB_INJECT_REG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_EPS_THERM_WSUB_INJECT_REG));
#endif
    return i_data.extractToRight<AXON_EPS_THERM_WSUB_INJECT_REG_MODE,
           AXON_EPS_THERM_WSUB_INJECT_REG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_EPS_THERM_WSUB_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_EPS_THERM_WSUB_INJECT_REG_MODE]

//>> PREP_[AXON_RECOV_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_RECOV_UNMASKED(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_RECOV_UNMASKED;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_RECOV_UNMASKED]

//>> GET_[AXON_RECOV_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_RECOV_UNMASKED(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_RECOV_UNMASKED;
#endif
    return fapi2::getScom(i_target, AXON_RECOV_UNMASKED, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_RECOV_UNMASKED]

//>> PUT_[AXON_RECOV_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_RECOV_UNMASKED(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_RECOV_UNMASKED));
#endif
    return fapi2::putScom(i_target, AXON_RECOV_UNMASKED, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_RECOV_UNMASKED]


//>> SET_[AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& SET_AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_RECOV_UNMASKED));
#endif
    return o_data.insertFromRight<AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN,
           AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN]

//>> SET_[AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& SET_AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_RECOV_UNMASKED));
#endif
    return o_data.insertFromRight<AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN,
           AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN]

//>> GET_[AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& GET_AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_RECOV_UNMASKED));
#endif
    return i_data.extractToRight<AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN,
           AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_RECOV_UNMASKED_RECOV_UNMASKED_IN]

//>> PREP_[AXON_TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_TRA0_TR0_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_TRA0_TR0_CONFIG_3]

//>> GET_[AXON_TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_TRA0_TR0_CONFIG_3;
#endif
    return fapi2::getScom(i_target, AXON_TRA0_TR0_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_TRA0_TR0_CONFIG_3]

//>> PUT_[AXON_TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_TRA0_TR0_CONFIG_3));
#endif
    return fapi2::putScom(i_target, AXON_TRA0_TR0_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_TRA0_TR0_CONFIG_3]


//>> SET_[AXON_TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_AXON_TRA0_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<AXON_TRA0_TR0_CONFIG_3_C,
           AXON_TRA0_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_TRA0_TR0_CONFIG_3_C]

//>> SET_[AXON_TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_AXON_TRA0_TR0_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<AXON_TRA0_TR0_CONFIG_3_C,
           AXON_TRA0_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_TRA0_TR0_CONFIG_3_C]

//>> GET_[AXON_TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_AXON_TRA0_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_TRA0_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<AXON_TRA0_TR0_CONFIG_3_C,
           AXON_TRA0_TR0_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_TRA0_TR0_CONFIG_3_C]

//>> SET_[AXON_TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_AXON_TRA0_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<AXON_TRA0_TR0_CONFIG_3_D,
           AXON_TRA0_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_TRA0_TR0_CONFIG_3_D]

//>> SET_[AXON_TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_AXON_TRA0_TR0_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<AXON_TRA0_TR0_CONFIG_3_D,
           AXON_TRA0_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_TRA0_TR0_CONFIG_3_D]

//>> GET_[AXON_TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_AXON_TRA0_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_TRA0_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<AXON_TRA0_TR0_CONFIG_3_D,
           AXON_TRA0_TR0_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_TRA0_TR0_CONFIG_3_D]

//>> PREP_[AXON_XSTOP1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_AXON_XSTOP1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_XSTOP1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[AXON_XSTOP1]

//>> GET_[AXON_XSTOP1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_AXON_XSTOP1(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = AXON_XSTOP1;
#endif
    return fapi2::getScom(i_target, AXON_XSTOP1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[AXON_XSTOP1]

//>> PUT_[AXON_XSTOP1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_AXON_XSTOP1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return fapi2::putScom(i_target, AXON_XSTOP1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[AXON_XSTOP1]


//>> SET_[AXON_XSTOP1_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_ENABLE]

//>> SET_[AXON_XSTOP1_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_ENABLE]

//>> SET_[AXON_XSTOP1_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_ENABLE]

//>> CLEAR_[AXON_XSTOP1_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_ENABLE]

//>> GET_[AXON_XSTOP1_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_ENABLE]

//>> GET_[AXON_XSTOP1_ENABLE]
static inline bool GET_AXON_XSTOP1_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_ENABLE]

//>> SET_[AXON_XSTOP1_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_WAIT_SNOPA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_WAIT_SNOPA]

//>> SET_[AXON_XSTOP1_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_WAIT_SNOPA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_WAIT_SNOPA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_WAIT_SNOPA]

//>> SET_[AXON_XSTOP1_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_WAIT_SNOPA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_WAIT_SNOPA]

//>> CLEAR_[AXON_XSTOP1_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_WAIT_SNOPA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_WAIT_SNOPA]

//>> GET_[AXON_XSTOP1_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_WAIT_SNOPA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_WAIT_SNOPA]

//>> GET_[AXON_XSTOP1_WAIT_SNOPA]
static inline bool GET_AXON_XSTOP1_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_WAIT_SNOPA]

//>> SET_[AXON_XSTOP1_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_TRIGGER_OPCG_GO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_TRIGGER_OPCG_GO]

//>> SET_[AXON_XSTOP1_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_TRIGGER_OPCG_GO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_TRIGGER_OPCG_GO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_TRIGGER_OPCG_GO]

//>> SET_[AXON_XSTOP1_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_TRIGGER_OPCG_GO]

//>> CLEAR_[AXON_XSTOP1_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_TRIGGER_OPCG_GO]

//>> GET_[AXON_XSTOP1_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_TRIGGER_OPCG_GO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_TRIGGER_OPCG_GO]

//>> GET_[AXON_XSTOP1_TRIGGER_OPCG_GO]
static inline bool GET_AXON_XSTOP1_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_TRIGGER_OPCG_GO]

//>> SET_[AXON_XSTOP1_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_WAIT_ALWAYS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_WAIT_ALWAYS]

//>> SET_[AXON_XSTOP1_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_WAIT_ALWAYS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_WAIT_ALWAYS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_WAIT_ALWAYS]

//>> SET_[AXON_XSTOP1_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_WAIT_ALWAYS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_WAIT_ALWAYS]

//>> CLEAR_[AXON_XSTOP1_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_WAIT_ALWAYS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_WAIT_ALWAYS]

//>> GET_[AXON_XSTOP1_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_WAIT_ALWAYS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_WAIT_ALWAYS]

//>> GET_[AXON_XSTOP1_WAIT_ALWAYS]
static inline bool GET_AXON_XSTOP1_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_WAIT_ALWAYS]

//>> SET_[AXON_XSTOP1_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_PERV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_PERV]

//>> SET_[AXON_XSTOP1_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_PERV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_PERV]

//>> SET_[AXON_XSTOP1_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_PERV]

//>> CLEAR_[AXON_XSTOP1_REGION_PERV]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_PERV]

//>> GET_[AXON_XSTOP1_REGION_PERV]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_PERV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_PERV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_PERV]

//>> GET_[AXON_XSTOP1_REGION_PERV]
static inline bool GET_AXON_XSTOP1_REGION_PERV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_PERV]

//>> SET_[AXON_XSTOP1_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT1]

//>> SET_[AXON_XSTOP1_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT1]

//>> SET_[AXON_XSTOP1_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT1]

//>> CLEAR_[AXON_XSTOP1_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_UNIT1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_UNIT1]

//>> GET_[AXON_XSTOP1_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_UNIT1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT1]

//>> GET_[AXON_XSTOP1_REGION_UNIT1]
static inline bool GET_AXON_XSTOP1_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT1]

//>> SET_[AXON_XSTOP1_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT2]

//>> SET_[AXON_XSTOP1_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT2]

//>> SET_[AXON_XSTOP1_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT2]

//>> CLEAR_[AXON_XSTOP1_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_UNIT2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_UNIT2]

//>> GET_[AXON_XSTOP1_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_UNIT2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT2]

//>> GET_[AXON_XSTOP1_REGION_UNIT2]
static inline bool GET_AXON_XSTOP1_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT2]

//>> SET_[AXON_XSTOP1_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT3]

//>> SET_[AXON_XSTOP1_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT3]

//>> SET_[AXON_XSTOP1_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT3]

//>> CLEAR_[AXON_XSTOP1_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_UNIT3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_UNIT3]

//>> GET_[AXON_XSTOP1_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_UNIT3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT3]

//>> GET_[AXON_XSTOP1_REGION_UNIT3]
static inline bool GET_AXON_XSTOP1_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT3]

//>> SET_[AXON_XSTOP1_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT4]

//>> SET_[AXON_XSTOP1_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT4]

//>> SET_[AXON_XSTOP1_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT4]

//>> CLEAR_[AXON_XSTOP1_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_UNIT4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_UNIT4]

//>> GET_[AXON_XSTOP1_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_UNIT4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT4]

//>> GET_[AXON_XSTOP1_REGION_UNIT4]
static inline bool GET_AXON_XSTOP1_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT4]

//>> SET_[AXON_XSTOP1_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT5]

//>> SET_[AXON_XSTOP1_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT5]

//>> SET_[AXON_XSTOP1_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT5]

//>> CLEAR_[AXON_XSTOP1_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_UNIT5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_UNIT5]

//>> GET_[AXON_XSTOP1_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_UNIT5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT5]

//>> GET_[AXON_XSTOP1_REGION_UNIT5]
static inline bool GET_AXON_XSTOP1_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT5]

//>> SET_[AXON_XSTOP1_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT6]

//>> SET_[AXON_XSTOP1_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT6]

//>> SET_[AXON_XSTOP1_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT6]

//>> CLEAR_[AXON_XSTOP1_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_UNIT6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_UNIT6]

//>> GET_[AXON_XSTOP1_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_UNIT6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT6]

//>> GET_[AXON_XSTOP1_REGION_UNIT6]
static inline bool GET_AXON_XSTOP1_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT6]

//>> SET_[AXON_XSTOP1_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT7]

//>> SET_[AXON_XSTOP1_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT7]

//>> SET_[AXON_XSTOP1_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT7]

//>> CLEAR_[AXON_XSTOP1_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_UNIT7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_UNIT7]

//>> GET_[AXON_XSTOP1_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_UNIT7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT7]

//>> GET_[AXON_XSTOP1_REGION_UNIT7]
static inline bool GET_AXON_XSTOP1_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT7]

//>> SET_[AXON_XSTOP1_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT8]

//>> SET_[AXON_XSTOP1_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT8]

//>> SET_[AXON_XSTOP1_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT8]

//>> CLEAR_[AXON_XSTOP1_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_UNIT8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_UNIT8]

//>> GET_[AXON_XSTOP1_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_UNIT8,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT8]

//>> GET_[AXON_XSTOP1_REGION_UNIT8]
static inline bool GET_AXON_XSTOP1_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT8]

//>> SET_[AXON_XSTOP1_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT9]

//>> SET_[AXON_XSTOP1_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT9]

//>> SET_[AXON_XSTOP1_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT9]

//>> CLEAR_[AXON_XSTOP1_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_UNIT9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_UNIT9]

//>> GET_[AXON_XSTOP1_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_UNIT9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT9]

//>> GET_[AXON_XSTOP1_REGION_UNIT9]
static inline bool GET_AXON_XSTOP1_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT9]

//>> SET_[AXON_XSTOP1_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT10]

//>> SET_[AXON_XSTOP1_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT10]

//>> SET_[AXON_XSTOP1_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT10]

//>> CLEAR_[AXON_XSTOP1_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_UNIT10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_UNIT10]

//>> GET_[AXON_XSTOP1_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_UNIT10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT10]

//>> GET_[AXON_XSTOP1_REGION_UNIT10]
static inline bool GET_AXON_XSTOP1_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT10]

//>> SET_[AXON_XSTOP1_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT11]

//>> SET_[AXON_XSTOP1_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT11]

//>> SET_[AXON_XSTOP1_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT11]

//>> CLEAR_[AXON_XSTOP1_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_UNIT11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_UNIT11]

//>> GET_[AXON_XSTOP1_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_UNIT11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT11]

//>> GET_[AXON_XSTOP1_REGION_UNIT11]
static inline bool GET_AXON_XSTOP1_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT11]

//>> SET_[AXON_XSTOP1_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT12]

//>> SET_[AXON_XSTOP1_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT12]

//>> SET_[AXON_XSTOP1_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT12]

//>> CLEAR_[AXON_XSTOP1_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_UNIT12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_UNIT12]

//>> GET_[AXON_XSTOP1_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_UNIT12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT12]

//>> GET_[AXON_XSTOP1_REGION_UNIT12]
static inline bool GET_AXON_XSTOP1_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT12]

//>> SET_[AXON_XSTOP1_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT13]

//>> SET_[AXON_XSTOP1_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT13]

//>> SET_[AXON_XSTOP1_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT13]

//>> CLEAR_[AXON_XSTOP1_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_UNIT13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_UNIT13]

//>> GET_[AXON_XSTOP1_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_UNIT13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT13]

//>> GET_[AXON_XSTOP1_REGION_UNIT13]
static inline bool GET_AXON_XSTOP1_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT13]

//>> SET_[AXON_XSTOP1_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT14]

//>> SET_[AXON_XSTOP1_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_REGION_UNIT14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT14]

//>> SET_[AXON_XSTOP1_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_REGION_UNIT14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.setBit<AXON_XSTOP1_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_REGION_UNIT14]

//>> CLEAR_[AXON_XSTOP1_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& CLEAR_AXON_XSTOP1_REGION_UNIT14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.clearBit<AXON_XSTOP1_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[AXON_XSTOP1_REGION_UNIT14]

//>> GET_[AXON_XSTOP1_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_REGION_UNIT14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT14]

//>> GET_[AXON_XSTOP1_REGION_UNIT14]
static inline bool GET_AXON_XSTOP1_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.getBit<AXON_XSTOP1_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access AXON_XSTOP1_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_REGION_UNIT14]

//>> SET_[AXON_XSTOP1_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_WAIT_CYCLES,
           AXON_XSTOP1_WAIT_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_WAIT_CYCLES]

//>> SET_[AXON_XSTOP1_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_AXON_XSTOP1_WAIT_CYCLES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return o_data.insertFromRight<AXON_XSTOP1_WAIT_CYCLES,
           AXON_XSTOP1_WAIT_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[AXON_XSTOP1_WAIT_CYCLES]

//>> GET_[AXON_XSTOP1_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_AXON_XSTOP1_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(AXON_XSTOP1));
#endif
    return i_data.extractToRight<AXON_XSTOP1_WAIT_CYCLES,
           AXON_XSTOP1_WAIT_CYCLES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access AXON_XSTOP1_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[AXON_XSTOP1_WAIT_CYCLES]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN]

//>> CLEAR_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN]
static inline bool GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_A_FENCE_EN]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN]

//>> CLEAR_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN]
static inline bool GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_B_FENCE_EN]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS]

//>> CLEAR_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS]
static inline bool GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_MINI_PR_GRAY_ENCODE_DIS]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS]

//>> CLEAR_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS]
static inline bool GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL15_PL_TINY_PR_GRAY_ENCODE_DIS]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> CLEAR_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline bool GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT,
           IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_CNTL8_PL_DL_CLK_PHASE_SELECT]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]

//>> PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL]

//>> PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL]


//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110]

//>> SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110]

//>> GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110,
           IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_1_RX_DAC_REGS_LOFF_B_CNTLX81_PL_RX_BD_LATCH_DAC_S110]

//>> PREP_[IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK,
           IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK]

//>> SET_[IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK,
           IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK]

//>> GET_[IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK,
           IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_BIT_REGS_FIR_MASK_PL_RX_PL_FIR_ERRS_MASK]

//>> PREP_[IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH,
           IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]

//>> SET_[IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH,
           IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]

//>> GET_[IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH,
           IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_BIT_REGS_MODE8_PL_RX_BERPL_SAT_THRESH]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_DATA]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL14_PL_EDGE]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline bool GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline bool GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC,
           IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX28_PL_RX_AD_LATCH_DAC_N001]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX38_PL_RX_AD_LATCH_DAC_E011]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX48_PL_RX_AD_LATCH_DAC_S101]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_A_CNTLX58_PL_RX_AD_LATCH_DAC_W111]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX24_PL_RX_BE_LATCH_DAC_E]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX64_PL_RX_BD_LATCH_DAC_N101]

//>> PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL]

//>> PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL]


//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]

//>> SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]

//>> GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111,
           IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_2_RX_DAC_REGS_LOFF_B_CNTLX74_PL_RX_BD_LATCH_DAC_E111]

//>> PREP_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A]
static inline bool GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]
static inline bool GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]
static inline bool GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_A]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B]
static inline bool GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_ENABLE_B]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]
static inline bool GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_SLAVE_MODE_B]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]
static inline bool GET_IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_CNTL2_PL_QUAD_MODE_B]

//>> PREP_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT,
           IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT,
           IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT,
           IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_FW_INERTIA_AMT]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP,
           IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP,
           IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP,
           IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_MODE4_PL_PHASE_STEP]

//>> PREP_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL,
           IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]

//>> SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL,
           IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]

//>> GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL,
           IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_BIT_REGS_STAT2_PL_RX_PR_FW_SNAPSHOT_A_RO_SIGNAL]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE,
           IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX33_PL_RX_AD_LATCH_DAC_N110]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX43_PL_RX_AD_LATCH_DAC_S000]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_A_CNTLX53_PL_RX_AD_LATCH_DAC_W010]

//>> PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL]

//>> PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL]


//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001]

//>> SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001]

//>> GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001,
           IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_3_RX_DAC_REGS_LOFF_B_CNTLX84_PL_RX_BD_LATCH_DAC_W001]

//>> PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL]


//>> SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA,
           P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA]

//>> SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA,
           P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA]

//>> GET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA,
           P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKA]

//>> SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB,
           P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB]

//>> SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB,
           P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB]

//>> GET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB,
           P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_DONE_BANKB]

//>> SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA]

//>> SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA]

//>> SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA]

//>> GET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA]

//>> GET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA]
static inline bool GET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKA]

//>> SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB]

//>> SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return o_data.insertFromRight<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB]

//>> SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB]
static inline fapi2::buffer<uint64_t>& SET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return o_data.setBit<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB]

//>> CLEAR_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return o_data.clearBit<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB]

//>> GET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB]
static inline fapi2::buffer<uint64_t>& GET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return i_data.extractToRight<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB]

//>> GET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB]
static inline bool GET_P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL));
#endif
    return i_data.getBit<P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_IOO_RX0_0_RD_4_RX_BIT_REGS_CNTLX9_PL_FAIL_BANKB]

//>> PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL,
           IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL,
           IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL,
           IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIME_VAL]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_TIMER_DOUBLE_MODE]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_MODE6_PL_DISABLE_SM]

//>> PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_0]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_1]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_2]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_3]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_4]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_5]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_6]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7]

//>> SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7]

//>> CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7]

//>> GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7]
static inline bool GET_IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_BIT_REGS_SPARE_MODE_PL_7]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_A_BANK_CONTROLS]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS,
           IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_CNTL1_PL_B_BANK_CONTROLS]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]

//>> PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL]

//>> PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL]


//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]

//>> SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]

//>> GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011,
           IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_4_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_GAIN]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO,
           IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_CNTL4_PL_ZERO]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]

//>> CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]
static inline bool GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_0]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]

//>> CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]
static inline bool GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_1]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]

//>> CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]
static inline bool GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_2]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]

//>> CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]
static inline bool GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_3]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]

//>> CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]
static inline bool GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_4]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]

//>> CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]
static inline bool GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_5]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]

//>> CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]
static inline bool GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_6]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.setBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]

//>> CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& CLEAR_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return o_data.clearBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]
static inline bool GET_IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL));
#endif
    return i_data.getBit<IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_DATA_SPARE_MODE_PL_7]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]

//>> PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL]

//>> PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL]


//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]

//>> SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]

//>> GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111,
           IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_5_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]

//>> PREP_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL]

//>> GET_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL]

//>> PUT_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL]


//>> SET_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER,
           IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER]

//>> SET_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER,
           IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER]

//>> GET_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER,
           IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_FILTER]

//>> SET_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM,
           IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM]

//>> SET_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM,
           IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM]

//>> GET_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM,
           IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_BIT_REGS_MODE3_PL_TERM]

//>> PREP_[IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL]

//>> GET_[IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL]

//>> PUT_[IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL]


//>> SET_[IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL,
           IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL]

//>> SET_[IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL,
           IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL]

//>> GET_[IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL,
           IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_BIT_REGS_STAT5_PL_RX_ERROR_VEC_0_15_RO_SIGNAL]

//>> PREP_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL]

//>> PUT_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL]


//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_GAIN]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK1]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2,
           IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_CNTL13_PL_PEAK2]

//>> PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL;
#endif
    return fapi2::getScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL]

//>> PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL));
#endif
    return fapi2::putScom(i_target, IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL]


//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010]

//>> SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010]
static inline fapi2::buffer<uint64_t>& SET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL));
#endif
    return o_data.insertFromRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010]

//>> GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010]
static inline fapi2::buffer<uint64_t>& GET_IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL));
#endif
    return i_data.extractToRight<IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010,
           IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_iohs Invalid dial access IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOO_RX0_0_RD_RX_DAC_REGS_LOFF_B_CNTLX61_PL_RX_BD_LATCH_DAC_N010]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
